// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 20

// FCsvProfilerAnalyzer @ 14d3cc030

FCsvProfilerAnalyzer * __thiscall
TraceServices::FCsvProfilerAnalyzer::FCsvProfilerAnalyzer
          (FCsvProfilerAnalyzer *this,IAnalysisSession *param_1,FCsvProfilerProvider *param_2,
          IEditableCounterProvider *param_3,IFrameProvider *param_4,IThreadProvider *param_5)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FCsvProfilerAnalyzer_TraceServices__6B_;
  this->CsvProfilerProvider = param_2;
  this->EditableCounterProvider = param_3;
  this->FrameProvider = param_4;
  this->ThreadProvider = param_5;
  *(undefined8 *)&this->ThreadStatesMap = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  *(undefined8 *)&this->CategoryMap = 0;
  *(undefined8 *)&(this->CategoryMap).field_0x8 = 0;
  *(undefined8 *)&(this->CategoryMap).field_0x20 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x28 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CategoryMap).field_0x34 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CategoryMap).field_0x40 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  *(undefined8 *)&this->StatSeriesMap = 0;
  *(undefined8 *)&(this->StatSeriesMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatSeriesMap).field_0x20 = 0;
  *(undefined4 *)&(this->StatSeriesMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatSeriesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatSeriesMap).field_0x34 = 0;
  *(undefined4 *)&(this->StatSeriesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StatSeriesMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatSeriesMap).field_0x48 = 0;
  *(undefined8 *)&this->StatSeriesStringMap = 0;
  *(undefined8 *)&(this->StatSeriesStringMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatSeriesStringMap).field_0x20 = 0;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x34 = 0;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StatSeriesStringMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x48 = 0;
  (this->StatSeriesDefinitionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSeriesDefinitionArray).ArrayNum = 0;
  (this->StatSeriesDefinitionArray).ArrayMax = 0;
  (this->StatSeriesInstanceArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSeriesInstanceArray).ArrayNum = 0;
  (this->StatSeriesInstanceArray).ArrayMax = 0;
  this->RenderThreadId = 0;
  this->RHIThreadId = 0;
  this->bEnableCounts = false;
  this->UndefinedStatSeriesCount = 0;
  this->FrameBoundaries[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FrameBoundaries[0].ArrayNum = 0;
  this->FrameBoundaries[0].ArrayMax = 0;
  this->FrameBoundaries[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FrameBoundaries[1].ArrayNum = 0;
  this->FrameBoundaries[1].ArrayMax = 0;
  return this;
}

// ~FCsvProfilerAnalyzer @ 14d3d0430

void __thiscall
TraceServices::FCsvProfilerAnalyzer::~FCsvProfilerAnalyzer(FCsvProfilerAnalyzer *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong lVar3;
  FCsvProfilerAnalyzer *pFVar4;
  
  this->_padding_ = (longlong)&___7FCsvProfilerAnalyzer_TraceServices__6B_;
  OnAnalysisEnd(this);
  pFVar4 = this + 1;
  lVar3 = 2;
  do {
    pFVar1 = pFVar4[-1].FrameBoundaries[1].AllocatorInstance.Data;
    pFVar4 = (FCsvProfilerAnalyzer *)(pFVar4[-1].FrameBoundaries + 1);
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  pFVar1 = (this->StatSeriesInstanceArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatSeriesDefinitionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StatSeriesStringMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StatSeriesStringMap);
  *(undefined4 *)&(this->StatSeriesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StatSeriesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StatSeriesMap);
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CategoryMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategoryMap);
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ThreadStatesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadStatesMap);
  return;
}

// CreateStatSeries @ 14d3d7470

FStatSeriesDefinition * __thiscall
TraceServices::FCsvProfilerAnalyzer::CreateStatSeries
          (FCsvProfilerAnalyzer *this,wchar_t *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FStatSeriesDefinition *pFVar7;
  TArray<TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FStatSeriesDefinition *local_18 [2];
  
  local_18[0] = ::operator_new(0x10);
  if (local_18[0] != (FStatSeriesDefinition *)0x0) {
    local_18[0]->Name = (wchar_t *)0x0;
    local_18[0]->CategoryIndex = -1;
    local_18[0]->ColumnIndex = -1;
  }
  pwVar6 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,param_1);
  local_18[0]->Name = pwVar6;
  local_18[0]->CategoryIndex = param_2;
  pTVar8 = &this->StatSeriesDefinitionArray;
  local_18[0]->ColumnIndex = (this->StatSeriesDefinitionArray).ArrayNum;
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->StatSeriesDefinitionArray).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FStatSeriesDefinition *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->StatSeriesDefinitionArray).ArrayNum;
  piVar1 = &(this->StatSeriesDefinitionArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->StatSeriesDefinitionArray).ArrayNum = iVar5 + 1;
  *(FStatSeriesDefinition **)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return local_18[0];
}

// DefineStatSeries @ 14d3d7830

void __thiscall
TraceServices::FCsvProfilerAnalyzer::DefineStatSeries
          (FCsvProfilerAnalyzer *this,ulong64 param_1,wchar_t *param_2,int param_3,bool param_4)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  FStatSeriesDefinition **ppFVar6;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>
  local_res8;
  FStatSeriesDefinition *local_68;
  FStatSeriesDefinition **local_60;
  undefined1 local_58 [8];
  FString local_50;
  int local_40 [2];
  FString local_38;
  
  local_res8.Value = (FStatSeriesDefinition **)param_1;
  ppFVar6 = TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
                    *)&this->StatSeriesMap,param_1);
  if (param_4 != false) {
    if (ppFVar6 != (FStatSeriesDefinition **)0x0) {
      return;
    }
    local_58._0_4_ = param_3;
    ::FString::FString(&local_50,param_2);
    uVar3 = local_58._0_4_;
    iVar5 = local_50.Data.ArrayNum + -1;
    FVar2.Data = local_50.Data.AllocatorInstance.Data;
    if (local_50.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
    iVar5 = TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TTuple<int,FString>_>
                      ((TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                        *)&this->StatSeriesStringMap,
                       uVar3 * 0x40 + ((uint)uVar3 >> 2) + 0x9e3779b9 + uVar4 ^ uVar3,
                       (TTuple<int,FString> *)local_58);
    if (iVar5 == -1) {
      ppFVar6 = (FStatSeriesDefinition **)0x0;
    }
    else {
      lVar1 = *(longlong *)&this->StatSeriesStringMap + (longlong)iVar5 * 0x28;
      ppFVar6 = (FStatSeriesDefinition **)(lVar1 + 0x18);
      if (lVar1 == 0) {
        ppFVar6 = (FStatSeriesDefinition **)0x0;
      }
      if (ppFVar6 != (FStatSeriesDefinition **)0x0) {
        local_68 = (FStatSeriesDefinition *)&local_res8.Value;
        local_60 = ppFVar6;
        TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>_>
                  ((TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                    *)&this->StatSeriesMap,&local_res8,(bool *)&local_68);
      }
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (ppFVar6 == (FStatSeriesDefinition **)0x0) {
    local_68 = CreateStatSeries(this,param_2,param_3);
    local_58 = (undefined1  [8])&local_res8.Value;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_68;
    TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                *)&this->StatSeriesMap,&local_res8,(bool *)local_58);
    if (param_4 != false) {
      local_40[0] = param_3;
      ::FString::FString(&local_38,param_2);
      local_58 = (undefined1  [8])local_40;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_68;
      TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TTuple<int,FString>_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>_>
                ((TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                  *)&this->StatSeriesStringMap,
                 (TPairInitializer<TTuple<int,FString>_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>
                  *)&param_4,(bool *)local_58);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// Flush @ 14d3dea40

void __thiscall
TraceServices::FCsvProfilerAnalyzer::Flush(FCsvProfilerAnalyzer *this,FStatSeriesInstance *param_1)

{
  IFrameProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint7 uStack_1f;
  
  pIVar1 = this->FrameProvider;
  if (param_1->CurrentFrame == 0) {
    lVar4 = (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,param_1->FrameType,0);
    if (lVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Frame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                         ,0x1b8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar4 + 8);
  }
  else {
    lVar4 = (**(code **)((longlong)*pIVar1 + 0x48))
                      (pIVar1,param_1->FrameType,param_1->CurrentFrame - 1);
    lVar5 = (**(code **)((longlong)*this->FrameProvider + 0x48))
                      (this->FrameProvider,param_1->FrameType,param_1->CurrentFrame);
    if (lVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                         ,0x1bf,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x10);
  }
  if (param_1->Type == CsvStatSeriesType_CustomStatInt) {
    FCsvProfilerProvider::SetValue
              (this->CsvProfilerProvider,param_1->ProviderHandle,param_1->CurrentFrame,
               (param_1->CurrentValue).Value.AsInt);
    (**(code **)((longlong)*param_1->Counter + 0x50))
              (param_1->Counter,uVar6,(param_1->CurrentValue).Value.AsInt);
  }
  else {
    FCsvProfilerProvider::SetValue
              (this->CsvProfilerProvider,param_1->ProviderHandle,param_1->CurrentFrame,
               (param_1->CurrentValue).Value.AsDouble);
    (**(code **)((longlong)*param_1->Counter + 0x48))
              (param_1->Counter,uVar6,(param_1->CurrentValue).Value.AsInt);
  }
  if (this->bEnableCounts != false) {
    FCsvProfilerProvider::SetValue
              (this->CsvProfilerProvider,param_1->ProviderCountHandle,param_1->CurrentFrame,
               param_1->CurrentCount);
  }
  param_1->CurrentCount = 0;
  (param_1->CurrentValue).Value.AsInt = 0;
  *(ulonglong *)&(param_1->CurrentValue).bIsValid = (ulonglong)uStack_1f << 8;
  return;
}

// FlushAtEndOfCapture @ 14d3deba0

void __thiscall
TraceServices::FCsvProfilerAnalyzer::FlushAtEndOfCapture
          (FCsvProfilerAnalyzer *this,FStatSeriesInstance *param_1,uint param_2)

{
  IFrameProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint7 uStack_1f;
  
  if (((param_1->CurrentValue).bIsValid != false) && (param_1->CurrentFrame < param_2)) {
    pIVar1 = this->FrameProvider;
    if (param_1->CurrentFrame == 0) {
      lVar4 = (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,param_1->FrameType,0);
      if (lVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Frame",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                           ,0x1b8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = (undefined4)*(undefined8 *)(lVar4 + 8);
    }
    else {
      lVar4 = (**(code **)((longlong)*pIVar1 + 0x48))
                        (pIVar1,param_1->FrameType,param_1->CurrentFrame - 1);
      lVar5 = (**(code **)((longlong)*this->FrameProvider + 0x48))
                        (this->FrameProvider,param_1->FrameType,param_1->CurrentFrame);
      if (lVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextFrame",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                           ,0x1bf,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x10);
    }
    if (param_1->Type == CsvStatSeriesType_CustomStatInt) {
      FCsvProfilerProvider::SetValue
                (this->CsvProfilerProvider,param_1->ProviderHandle,param_1->CurrentFrame,
                 (param_1->CurrentValue).Value.AsInt);
      (**(code **)((longlong)*param_1->Counter + 0x50))
                (param_1->Counter,uVar6,(param_1->CurrentValue).Value.AsInt);
    }
    else {
      FCsvProfilerProvider::SetValue
                (this->CsvProfilerProvider,param_1->ProviderHandle,param_1->CurrentFrame,
                 (param_1->CurrentValue).Value.AsDouble);
      (**(code **)((longlong)*param_1->Counter + 0x48))
                (param_1->Counter,uVar6,(param_1->CurrentValue).Value.AsInt);
    }
    if (this->bEnableCounts != false) {
      FCsvProfilerProvider::SetValue
                (this->CsvProfilerProvider,param_1->ProviderCountHandle,param_1->CurrentFrame,
                 param_1->CurrentCount);
    }
    param_1->CurrentCount = 0;
    (param_1->CurrentValue).Value.AsInt = 0;
    *(ulonglong *)&(param_1->CurrentValue).bIsValid = (ulonglong)uStack_1f << 8;
    return;
  }
  return;
}

// FlushIfNewFrame @ 14d3dee70

void __thiscall
TraceServices::FCsvProfilerAnalyzer::FlushIfNewFrame
          (FCsvProfilerAnalyzer *this,FStatSeriesInstance *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2 != param_1->CurrentFrame) && ((param_1->CurrentValue).bIsValid != false)) {
    if (param_2 <= param_1->CurrentFrame) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameNumber > StatSeries.CurrentFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Flush(this,param_1);
    param_1->CurrentFrame = param_2;
    return;
  }
  param_1->CurrentFrame = param_2;
  return;
}

// GetStatSeries @ 14d3e2560

FStatSeriesInstance * __thiscall
TraceServices::FCsvProfilerAnalyzer::GetStatSeries
          (FCsvProfilerAnalyzer *this,ulong64 param_1,ECsvStatSeriesType param_2,
          FThreadState *param_3)

{
  TArray<TraceServices::FCsvProfilerAnalyzer::FStatSeriesInstance_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FCsvProfilerProvider *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FStatSeriesDefinition **ppFVar8;
  FStatSeriesInstance *pFVar9;
  FStatSeriesInstance *pFVar10;
  wchar_t *pwVar11;
  ulong64 uVar12;
  wchar_t *pwVar13;
  IEditableCounter *pIVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  int iVar17;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>
  local_res8;
  FStatSeriesDefinition *local_res20;
  FStatSeriesInstance *local_68;
  FString local_60;
  FStatSeriesDefinition ***local_50;
  FStatSeriesDefinition **local_48;
  
  local_res8.Value = (FStatSeriesDefinition **)param_1;
  ppFVar8 = TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
            ::Find((TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
                    *)&this->StatSeriesMap,param_1);
  if (ppFVar8 == (FStatSeriesDefinition **)0x0) {
    this->UndefinedStatSeriesCount = this->UndefinedStatSeriesCount + 1;
    ::FString::PrintfImpl(&local_60,L"[unknown%d]");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar16.Data = local_60.Data.AllocatorInstance.Data;
    }
    local_res20 = CreateStatSeries(this,(wchar_t *)FVar16.Data,0);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    local_50 = &local_res8.Value;
    local_48 = &local_res20;
    TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>_>
              ((TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                *)&this->StatSeriesMap,&local_res8,(bool *)&local_50);
  }
  else {
    local_res20 = *ppFVar8;
  }
  iVar7 = (param_3->StatSeries).ArrayNum;
  pTVar1 = &param_3->StatSeries;
  if (iVar7 <= local_res20->ColumnIndex) {
    iVar17 = (local_res20->ColumnIndex - iVar7) + 1;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar17,&pTVar1->AllocatorInstance,&(param_3->StatSeries).ArrayNum,
                       &(param_3->StatSeries).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8,0,(longlong)iVar17 << 3);
  }
  uVar3 = local_res20->ColumnIndex;
  pFVar9 = (FStatSeriesInstance *)0x0;
  uVar15 = 0;
  if ((int)uVar3 < (param_3->StatSeries).ArrayNum) {
    uVar15 = ~uVar3 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FStatSeriesInstance *)(*pcVar5)();
    return pFVar9;
  }
  local_68 = *(FStatSeriesInstance **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8);
  if (local_68 == (FStatSeriesInstance *)0x0) {
    pFVar10 = ::operator_new(0x40);
    if (pFVar10 != (FStatSeriesInstance *)0x0) {
      *(undefined8 *)&pFVar10->CurrentFrame = 0;
      *(undefined4 *)&(pFVar10->CurrentValue).field_0x9 = 0;
      *(undefined2 *)&(pFVar10->CurrentValue).field_0xd = 0;
      (pFVar10->CurrentValue).field_0xf = 0;
      pFVar10->ProviderHandle = 0xffffffffffffffff;
      pFVar10->ProviderCountHandle = 0xffffffffffffffff;
      pFVar10->Counter = (IEditableCounter *)0x0;
      (pFVar10->CurrentValue).bIsValid = false;
      (pFVar10->CurrentValue).Value.AsInt = 0;
      pFVar10->CurrentCount = 0;
      pFVar10->Type = CsvStatSeriesType_CustomStatInt;
      pFVar10->FrameType = TraceFrameType_Game;
      pFVar9 = pFVar10;
    }
    pTVar1 = &this->StatSeriesInstanceArray;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    local_68 = pFVar9;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar4 + (longlong)(this->StatSeriesInstanceArray).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FStatSeriesInstance *)(*pcVar5)();
      return pFVar9;
    }
    iVar7 = (this->StatSeriesInstanceArray).ArrayNum;
    piVar2 = &(this->StatSeriesInstanceArray).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    pFVar9 = local_68;
    (this->StatSeriesInstanceArray).ArrayNum = iVar7 + 1;
    *(FStatSeriesInstance **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_68;
    uVar3 = local_res20->ColumnIndex;
    uVar15 = 0;
    if ((int)uVar3 < (param_3->StatSeries).ArrayNum) {
      uVar15 = ~uVar3 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FStatSeriesInstance *)(*pcVar5)();
      return pFVar9;
    }
    *(FStatSeriesInstance **)
     ((param_3->StatSeries).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) = pFVar9;
    pwVar11 = GetStatSeriesName(this,local_res20,param_2,param_3,false);
    uVar12 = FCsvProfilerProvider::AddSeries(this->CsvProfilerProvider,pwVar11,param_2);
    local_68->ProviderHandle = uVar12;
    this_00 = this->CsvProfilerProvider;
    pwVar13 = GetStatSeriesName(this,local_res20,param_2,param_3,true);
    uVar12 = FCsvProfilerProvider::AddSeries(this_00,pwVar13,CsvStatSeriesType_CustomStatInt);
    local_68->ProviderCountHandle = uVar12;
    pIVar14 = (IEditableCounter *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
    local_68->Counter = pIVar14;
    (**(code **)((longlong)*pIVar14 + 8))(pIVar14,pwVar11);
    (**(code **)((longlong)*local_68->Counter + 0x20))
              (local_68->Counter,param_2 != CsvStatSeriesType_CustomStatInt);
    local_68->Type = param_2;
    local_68->FrameType = param_3->FrameType;
  }
  return local_68;
}

// GetStatSeriesName @ 14d3e28d0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
TraceServices::FCsvProfilerAnalyzer::GetStatSeriesName
          (FCsvProfilerAnalyzer *this,FStatSeriesDefinition *param_1,ECsvStatSeriesType param_2,
          FThreadState *param_3,bool param_4)

{
  wchar_t **ppwVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_58,param_1->Name);
  if ((param_2 == CsvStatSeriesType_Timer) || (param_4)) {
    ::FString::ConcatFC(&local_38,&param_3->ThreadName,L"/");
    ::FString::ConcatFF(&local_48,&local_38,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (0 < param_1->CategoryIndex) {
    ppwVar1 = TMapBase<int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>_>
              ::FindChecked((TMapBase<int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>_>
                             *)&this->CategoryMap,param_1->CategoryIndex);
    pFVar2 = ::FString::FString(&local_28,*ppwVar1);
    ::FString::ConcatFC(&local_38,pFVar2,L"/");
    ::FString::ConcatFF(&local_48,&local_38,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (param_4) {
    ::FString::ConcatCF(&local_48,L"COUNTS/",&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
  }
  if (local_58.Data.ArrayNum < 2) {
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    ::FString::PrintfImpl(&local_48,L"<noname CSV column %d>");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  pwVar3 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar4.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return pwVar3;
}

// GetThreadState @ 14d3e3060

FThreadState * __thiscall
TraceServices::FCsvProfilerAnalyzer::GetThreadState(FCsvProfilerAnalyzer *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  FThreadState *pFVar3;
  FThreadState *pFVar4;
  wchar_t *pwVar5;
  undefined1 *puVar6;
  TPairInitializer<unsigned_int_const_&,TraceServices::FCsvProfilerAnalyzer::FThreadState_*_const_&>
  local_res8;
  FThreadState *local_res18 [2];
  FThreadState ***local_28;
  FThreadState **local_20;
  
  pFVar4 = (FThreadState *)0x0;
  if (*(int *)&(this->ThreadStatesMap).field_0x8 != *(int *)&(this->ThreadStatesMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ThreadStatesMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ThreadStatesMap).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ThreadStatesMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->ThreadStatesMap + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->ThreadStatesMap + (longlong)iVar2 * 0x18) == param_1) {
          pFVar3 = (FThreadState *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar3 = pFVar4;
          }
          if (pFVar3 != (FThreadState *)0x0) {
            return (FThreadState *)(pFVar3->MarkerStack).AllocatorInstance.Data;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res8.Value._0_4_ = param_1;
  pFVar3 = ::operator_new(0x48);
  if (pFVar3 != (FThreadState *)0x0) {
    *(undefined8 *)&pFVar3->FrameType = 0;
    (pFVar3->MarkerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->MarkerStack).ArrayNum = 0;
    (pFVar3->MarkerStack).ArrayMax = 0;
    (pFVar3->ExclusiveMarkerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ExclusiveMarkerStack).ArrayNum = 0;
    (pFVar3->ExclusiveMarkerStack).ArrayMax = 0;
    (pFVar3->StatSeries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->StatSeries).ArrayNum = 0;
    (pFVar3->StatSeries).ArrayMax = 0;
    (pFVar3->ThreadName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->ThreadName).Data.ArrayNum = 0;
    (pFVar3->ThreadName).Data.ArrayMax = 0;
    pFVar4 = pFVar3;
  }
  if (((uint)local_res8.Value == this->RenderThreadId) ||
     ((uint)local_res8.Value == this->RHIThreadId)) {
    pFVar4->FrameType = TraceFrameType_Rendering;
  }
  local_res18[0] = pFVar4;
  if ((uint)local_res8.Value == this->RenderThreadId) {
    pwVar5 = L"RenderThread";
  }
  else {
    pwVar5 = (wchar_t *)(**(code **)((longlong)*this->ThreadProvider + 0x30))();
  }
  ::FString::operator=(&local_res18[0]->ThreadName,pwVar5);
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FCsvProfilerAnalyzer::FThreadState_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
              *)&this->ThreadStatesMap,&local_res8,(bool *)&local_28);
  return local_res18[0];
}

// HandleCustomStatEvent @ 14d3e4380

void __thiscall
TraceServices::FCsvProfilerAnalyzer::HandleCustomStatEvent
          (FCsvProfilerAnalyzer *this,FOnEventContext *param_1,bool param_2)

{
  double dVar1;
  IFrameProvider *pIVar2;
  FEventTime *this_00;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FThreadState *pFVar9;
  ulong64 uVar10;
  FStatSeriesInstance *pFVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  
  uVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_1->EventData,"ThreadId",0);
  if (uVar6 == 0) {
    uVar7 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1->ThreadInfo);
  }
  else {
    uVar7 = 0x70000000;
  }
  pFVar9 = GetThreadState(this,uVar7 | uVar6);
  uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                     (param_1->EventData,"StatId",0);
  pFVar11 = GetStatSeries(this,uVar10,param_2 + CsvStatSeriesType_CustomStatInt,pFVar9);
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                    (param_1->EventData,"OpType",'\0');
  pIVar2 = this->FrameProvider;
  this_00 = param_1->EventTime;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0x50);
  uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                     (param_1->EventData,"Cycle",0);
  UE::Trace::IAnalyzer::FEventTime::AsSeconds(this_00,uVar10);
  uVar6 = (*pcVar3)(pIVar2,pFVar9->FrameType);
  if (!param_2) {
    iVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(param_1->EventData,"Value",0);
    lVar13 = (longlong)iVar8;
    if ((uVar6 != pFVar11->CurrentFrame) && ((pFVar11->CurrentValue).bIsValid != false)) {
      if ((uVar6 <= pFVar11->CurrentFrame) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FrameNumber > StatSeries.CurrentFrame",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                             ,0x1d8,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      Flush(this,pFVar11);
    }
    bVar5 = (pFVar11->CurrentValue).bIsValid;
    pFVar11->CurrentFrame = uVar6;
    if ((bVar5 == false) || (uVar4 == '\0')) {
      (pFVar11->CurrentValue).Value.AsInt = lVar13;
    }
    else if (uVar4 == '\x01') {
      lVar12 = (pFVar11->CurrentValue).Value.AsInt;
      if (lVar13 < lVar12) {
        lVar12 = lVar13;
      }
      (pFVar11->CurrentValue).Value.AsInt = lVar12;
    }
    else if (uVar4 == '\x02') {
      lVar12 = (pFVar11->CurrentValue).Value.AsInt;
      if (lVar12 < lVar13) {
        lVar12 = lVar13;
      }
      (pFVar11->CurrentValue).Value.AsInt = lVar12;
    }
    else if (uVar4 == '\x03') {
      (pFVar11->CurrentValue).Value.AsInt = (pFVar11->CurrentValue).Value.AsInt + lVar13;
    }
    pFVar11->CurrentCount = pFVar11->CurrentCount + 1;
    (pFVar11->CurrentValue).bIsValid = true;
    return;
  }
  fVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<float>(param_1->EventData,"Value",0.0);
  FlushIfNewFrame(this,pFVar11,uVar6);
  if (((pFVar11->CurrentValue).bIsValid == false) || (uVar4 == '\0')) {
    dVar15 = (double)fVar14;
  }
  else if (uVar4 == '\x01') {
    dVar1 = (pFVar11->CurrentValue).Value.AsDouble;
    dVar15 = (double)fVar14;
    if (dVar1 <= (double)fVar14) {
      dVar15 = dVar1;
    }
  }
  else if (uVar4 == '\x02') {
    dVar1 = (pFVar11->CurrentValue).Value.AsDouble;
    dVar15 = (double)fVar14;
    if ((double)fVar14 <= dVar1) {
      dVar15 = dVar1;
    }
  }
  else {
    if (uVar4 != '\x03') goto LAB_14d3e44fe;
    dVar15 = (double)fVar14 + (pFVar11->CurrentValue).Value.AsDouble;
  }
  (pFVar11->CurrentValue).Value.AsDouble = dVar15;
LAB_14d3e44fe:
  pFVar11->CurrentCount = pFVar11->CurrentCount + 1;
  (pFVar11->CurrentValue).bIsValid = true;
  return;
}

// HandleEventEvent @ 14d3e45e0

void __thiscall
TraceServices::FCsvProfilerAnalyzer::HandleEventEvent
          (FCsvProfilerAnalyzer *this,FOnEventContext *param_1)

{
  IFrameProvider *pIVar1;
  code *pcVar2;
  FCsvProfilerProvider *this_00;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FThreadState *pFVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  wchar_t **ppwVar11;
  ForAnyElementType FVar12;
  double dVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_1->EventData,"ThreadId",0);
  if (uVar4 == 0) {
    uVar5 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1->ThreadInfo);
  }
  else {
    uVar5 = 0x70000000;
  }
  pFVar7 = GetThreadState(this,uVar5 | uVar4);
  uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_1->EventData,"Cycle",0)
  ;
  pIVar1 = this->FrameProvider;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x50);
  dVar13 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime,uVar8);
  uVar4 = (*pcVar2)(pIVar1,pFVar7->FrameType,SUB84(dVar13,0));
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar3 = UE::Trace::IAnalyzer::FEventData::GetString(param_1->EventData,"Text",&local_58);
  if (!bVar3) {
    uVar5 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_1->EventData);
    pwVar9 = (wchar_t *)UE::Trace::IAnalyzer::FEventData::GetAttachment(param_1->EventData);
    pFVar10 = ::FString::ConstructFromPtrSize(&local_38,pwVar9,uVar5 >> 1);
    if (&local_58 != pFVar10) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar6 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(param_1->EventData,"CategoryIndex",0);
  if (0 < iVar6) {
    ppwVar11 = TMapBase<int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>_>
               ::FindChecked((TMapBase<int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>_>
                              *)&this->CategoryMap,iVar6);
    pFVar10 = ::FString::FString(&local_28,*ppwVar11);
    ::FString::ConcatFC(&local_38,pFVar10,L"/");
    ::FString::ConcatFF(&local_48,&local_38,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this_00 = this->CsvProfilerProvider;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar12.Data = local_58.Data.AllocatorInstance.Data;
  }
  pwVar9 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar12.Data);
  FCsvProfilerProvider::AddEvent(this_00,uVar4,pwVar9);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleMarker @ 14d3e4a90

void __thiscall
TraceServices::FCsvProfilerAnalyzer::HandleMarker
          (FCsvProfilerAnalyzer *this,FOnEventContext *param_1,FThreadState *param_2,
          FTimingMarker *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FTimingMarker *pFVar4;
  FScriptContainerElement *pFVar5;
  FEventTime *this_00;
  code *pcVar6;
  double dVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FStatSeriesInstance *pFVar18;
  int iVar19;
  uint uVar20;
  double dVar22;
  FTimingMarker local_68;
  undefined8 local_40;
  ulonglong uVar21;
  
  bVar11 = false;
  local_68.StatId = 0;
  local_68.Cycle = 0;
  local_68._16_8_ = local_68._16_8_ & 0xffffffffff000000;
  uVar16 = 0;
  if ((param_3->bIsExclusive & param_3->bIsExclusiveInsertedMarker == false) == 0)
  goto LAB_14d3e4d1c;
  iVar13 = (param_2->ExclusiveMarkerStack).ArrayNum;
  if (param_3->bIsBegin == false) {
    if (iVar13 < 1) goto LAB_14d3e4d1c;
    pFVar3 = (param_2->ExclusiveMarkerStack).AllocatorInstance.Data +
             (longlong)(int)(iVar13 - 1U) * 0x18;
    iVar13 = ~(iVar13 - 1U) + iVar13;
    if (iVar13 != 0) {
      memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar13 * 0x18);
    }
    iVar13 = (param_2->ExclusiveMarkerStack).ArrayNum;
    iVar19 = iVar13 + -1;
    (param_2->ExclusiveMarkerStack).ArrayNum = iVar19;
    if (iVar19 < 1) goto LAB_14d3e4d1c;
    uVar14 = iVar13 - 2;
    uVar20 = uVar16;
    if ((int)uVar14 < iVar19) {
      uVar20 = ~uVar14 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar17 = (longlong)(param_2->ExclusiveMarkerStack).ArrayNum;
    pFVar3 = (param_2->ExclusiveMarkerStack).AllocatorInstance.Data;
    local_68.StatId = *(ulong64 *)(pFVar3 + lVar17 * 0x18 + -0x18);
    uVar2 = *(undefined8 *)(pFVar3 + lVar17 * 0x18 + -8);
    local_68.Cycle = param_3->Cycle;
    local_68._17_7_ = SUB87((ulonglong)uVar2 >> 8,0);
    local_68.bIsBegin = true;
    uVar10 = local_68._16_8_;
    local_68._19_5_ = SUB85((ulonglong)uVar2 >> 0x18,0);
    local_68._16_2_ = SUB82(uVar10,0);
    local_68.bIsExclusiveInsertedMarker = true;
  }
  else {
    if (0 < iVar13) {
      uVar14 = uVar16;
      if ((int)(iVar13 - 1U) < iVar13) {
        uVar14 = ~(iVar13 - 1U) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar17 = (longlong)(param_2->ExclusiveMarkerStack).ArrayNum;
      pFVar3 = (param_2->ExclusiveMarkerStack).AllocatorInstance.Data;
      local_68.StatId = *(ulong64 *)(pFVar3 + lVar17 * 0x18 + -0x18);
      uVar2 = *(undefined8 *)(pFVar3 + lVar17 * 0x18 + -8);
      local_68.Cycle = param_3->Cycle;
      local_68._16_2_ = (ushort)uVar2 & 0xff00;
      bVar11 = true;
      local_68._16_3_ = CONCAT12(true,local_68._16_2_);
      local_68._16_8_ = CONCAT53((int5)((ulonglong)uVar2 >> 0x18),local_68._16_3_);
    }
    pFVar4 = (FTimingMarker *)(param_2->ExclusiveMarkerStack).AllocatorInstance.Data;
    if (((pFVar4 <= param_3) && (param_3 < pFVar4 + (param_2->ExclusiveMarkerStack).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (param_2->ExclusiveMarkerStack).ArrayNum;
    piVar1 = &(param_2->ExclusiveMarkerStack).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&(param_2->ExclusiveMarkerStack).AllocatorInstance,piVar1);
      (param_2->ExclusiveMarkerStack).ArrayNum = iVar13;
    }
    (param_2->ExclusiveMarkerStack).ArrayNum = iVar13 + 1;
    uVar8 = param_3->Cycle;
    pFVar5 = (param_2->ExclusiveMarkerStack).AllocatorInstance.Data;
    pFVar3 = pFVar5 + (longlong)iVar13 * 0x18;
    *(ulong64 *)pFVar3 = param_3->StatId;
    *(ulong64 *)(pFVar3 + 8) = uVar8;
    *(undefined8 *)(pFVar5 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)&param_3->bIsBegin;
    if (!bVar11) goto LAB_14d3e4d1c;
  }
  HandleMarker(this,param_1,param_2,&local_68);
LAB_14d3e4d1c:
  dVar22 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime,param_3->Cycle);
  uVar14 = (**(code **)((longlong)*this->FrameProvider + 0x50))
                     (this->FrameProvider,param_2->FrameType,SUB84(dVar22,0));
  if (param_3->bIsBegin == false) {
    iVar13 = (param_2->MarkerStack).ArrayNum;
    if ((0 < iVar13) && (uVar20 = iVar13 - 1, -1 < (int)uVar20)) {
      lVar17 = (longlong)(int)uVar20 * 0x18;
      do {
        uVar21 = (ulonglong)uVar20;
        uVar15 = uVar16;
        if ((int)uVar20 < (param_2->MarkerStack).ArrayNum) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(ulong64 *)((param_2->MarkerStack).AllocatorInstance.Data + lVar17) == param_3->StatId)
        {
          if ((int)uVar20 < (param_2->MarkerStack).ArrayNum) {
            uVar16 = ~uVar20 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (param_2->MarkerStack).AllocatorInstance.Data;
          local_40 = *(undefined8 *)(pFVar3 + uVar21 * 0x18 + 0x10);
          pFVar3 = pFVar3 + uVar21 * 0x18;
          uVar8 = *(ulong64 *)pFVar3;
          uVar9 = *(ulonglong *)(pFVar3 + 8);
          uVar16 = 0;
          if ((int)uVar20 < (param_2->MarkerStack).ArrayNum) {
            uVar16 = ~uVar20 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (param_2->MarkerStack).AllocatorInstance.Data + uVar21 * 0x18;
          iVar13 = (param_2->MarkerStack).ArrayNum + ~uVar20;
          if (iVar13 != 0) {
            memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar13 * 0x18);
          }
          piVar1 = &(param_2->MarkerStack).ArrayNum;
          *piVar1 = *piVar1 + -1;
          if ((param_3->StatId != uVar8) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Marker.StatId == StartMarker.StatId",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                                  ,0x182,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((param_3->Cycle < uVar9) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Marker.Cycle >= StartMarker.Cycle",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\CsvProfilerTraceAnalysis.cpp"
                                  ,0x183,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (param_3->Cycle <= uVar9) {
            return;
          }
          this_00 = param_1->EventTime;
          dVar22 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(this_00,param_3->Cycle);
          dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(this_00,uVar9);
          pFVar18 = GetStatSeries(this,param_3->StatId,CsvStatSeriesType_Timer,param_2);
          bVar11 = param_3->bIsExclusiveInsertedMarker;
          FlushIfNewFrame(this,pFVar18,uVar14);
          dVar22 = (dVar22 - dVar7) * __real_408f400000000000;
          (pFVar18->CurrentValue).bIsValid = true;
          (pFVar18->CurrentValue).Value.AsDouble = dVar22 + (pFVar18->CurrentValue).Value.AsDouble;
          if (bVar11 != false) {
            return;
          }
          pFVar18->CurrentCount = pFVar18->CurrentCount + 1;
          return;
        }
        lVar17 = lVar17 + -0x18;
        uVar20 = uVar20 - 1;
      } while (-1 < (int)uVar20);
    }
  }
  else {
    pFVar4 = (FTimingMarker *)(param_2->MarkerStack).AllocatorInstance.Data;
    if (((pFVar4 <= param_3) && (param_3 < pFVar4 + (param_2->MarkerStack).ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (param_2->MarkerStack).ArrayNum;
    piVar1 = &(param_2->MarkerStack).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)param_2,piVar1);
    }
    (param_2->MarkerStack).ArrayNum = iVar13 + 1;
    uVar8 = param_3->Cycle;
    pFVar5 = (param_2->MarkerStack).AllocatorInstance.Data;
    pFVar3 = pFVar5 + (longlong)iVar13 * 0x18;
    *(ulong64 *)pFVar3 = param_3->StatId;
    *(ulong64 *)(pFVar3 + 8) = uVar8;
    *(undefined8 *)(pFVar5 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)&param_3->bIsBegin;
  }
  return;
}

// HandleMarkerEvent @ 14d3e5060

void __thiscall
TraceServices::FCsvProfilerAnalyzer::HandleMarkerEvent
          (FCsvProfilerAnalyzer *this,FOnEventContext *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  FThreadState *pFVar3;
  FTimingMarker local_28;
  
  uVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_1->EventData,"ThreadId",0);
  if (uVar1 == 0) {
    uVar2 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_1->ThreadInfo);
  }
  else {
    uVar2 = 0x70000000;
  }
  pFVar3 = GetThreadState(this,uVar2 | uVar1);
  local_28.StatId =
       UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_1->EventData,"StatId",0);
  local_28.bIsExclusiveInsertedMarker = false;
  local_28.bIsBegin = param_3;
  local_28.bIsExclusive = param_2;
  local_28.Cycle =
       UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_1->EventData,"Cycle",0);
  HandleMarker(this,param_1,pFVar3,&local_28);
  return;
}

// OnAnalysisBegin @ 14d3e87b0

void __thiscall
TraceServices::FCsvProfilerAnalyzer::OnAnalysisBegin
          (FCsvProfilerAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"CsvProfiler","RegisterCategory",0);
  (**(code **)*pFVar1)(pFVar1,1,"CsvProfiler","DefineInlineStat",0);
  (**(code **)*pFVar1)(pFVar1,2,"CsvProfiler","DefineDeclaredStat",0);
  (**(code **)*pFVar1)(pFVar1,3,"CsvProfiler","BeginStat",0);
  (**(code **)*pFVar1)(pFVar1,4,"CsvProfiler","EndStat",0);
  (**(code **)*pFVar1)(pFVar1,5,"CsvProfiler","BeginExclusiveStat",0);
  (**(code **)*pFVar1)(pFVar1,6,"CsvProfiler","EndExclusiveStat",0);
  (**(code **)*pFVar1)(pFVar1,7,"CsvProfiler","CustomStatInt",0);
  (**(code **)*pFVar1)(pFVar1,8,"CsvProfiler","CustomStatFloat",0);
  (**(code **)*pFVar1)(pFVar1,9,"CsvProfiler","Event",0);
  (**(code **)*pFVar1)(pFVar1,10,"CsvProfiler","Metadata",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"CsvProfiler","BeginCapture",0);
  (**(code **)*pFVar1)(pFVar1,0xc,"CsvProfiler","EndCapture",0);
  return;
}

// OnAnalysisEnd @ 14d3ea3a0

void __thiscall TraceServices::FCsvProfilerAnalyzer::OnAnalysisEnd(FCsvProfilerAnalyzer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>_>
  *this_00;
  TMap<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
  *this_01;
  TMap<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
  *this_02;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pFVar12 = (this->StatSeriesInstanceArray).AllocatorInstance.Data;
  iVar5 = (this->StatSeriesInstanceArray).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->StatSeriesInstanceArray).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TraceServices::FCsvProfilerAnalyzer::FStatSeriesInstance_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar3) break;
    ::operator_delete(*(void **)pFVar12,0x40);
    pFVar12 = pFVar12 + 8;
  }
  piVar1 = &(this->StatSeriesInstanceArray).ArrayMax;
  (this->StatSeriesInstanceArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->StatSeriesInstanceArray).AllocatorInstance,0,piVar1);
  }
  pFVar12 = (this->StatSeriesDefinitionArray).AllocatorInstance.Data;
  iVar5 = (this->StatSeriesDefinitionArray).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->StatSeriesDefinitionArray).ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar3) break;
    ::operator_delete(*(void **)pFVar12,0x10);
    pFVar12 = pFVar12 + 8;
  }
  piVar1 = &(this->StatSeriesDefinitionArray).ArrayMax;
  (this->StatSeriesDefinitionArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->StatSeriesDefinitionArray).AllocatorInstance,0,piVar1);
  }
  this_01 = &this->StatSeriesMap;
  bVar8 = 1 < *(int *)&(this->StatSeriesMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar2 = &(this->StatSeriesMap).field_0xc;
  *(undefined4 *)&(this->StatSeriesMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->StatSeriesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatSeriesMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->StatSeriesMap).field_0x2c;
  *(undefined4 *)&(this->StatSeriesMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->StatSeriesMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StatSeriesMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->StatSeriesMap).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->StatSeriesStringMap;
  bVar8 = 1 < *(int *)&(this->StatSeriesStringMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->StatSeriesStringMap).field_0x8);
  puVar2 = &(this->StatSeriesStringMap).field_0xc;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_02,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->StatSeriesStringMap).field_0x2c;
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->StatSeriesStringMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StatSeriesStringMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->StatSeriesStringMap).field_0x48 = 1;
    TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
              *)this_02);
  }
  iVar5 = *(int *)&(this->ThreadStatesMap).field_0x28;
  puVar2 = &(this->ThreadStatesMap).field_0x10;
  this_00 = &this->ThreadStatesMap;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->ThreadStatesMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    iVar16 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d3ea63d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res20;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14d3ea63d:
  uVar13 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar14);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ThreadStatesMap).field_0x8 -
                       *(int *)&(this->ThreadStatesMap).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->ThreadStatesMap).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->ThreadStatesMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d3ea740;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14d3ea740:
  while( true ) {
    if (*(int *)&(this->ThreadStatesMap).field_0x8 - *(int *)&(this->ThreadStatesMap).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    puVar6 = *(undefined8 **)
              (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      if ((void *)puVar6[7] != (void *)0x0) {
        FMemory::Free((void *)puVar6[7]);
      }
      if ((void *)puVar6[5] != (void *)0x0) {
        FMemory::Free((void *)puVar6[5]);
      }
      if ((void *)puVar6[2] != (void *)0x0) {
        FMemory::Free((void *)puVar6[2]);
      }
      if ((void *)*puVar6 != (void *)0x0) {
        FMemory::Free((void *)*puVar6);
      }
      ::operator_delete(puVar6,0x48);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  bVar8 = 1 < *(int *)&(this->ThreadStatesMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->ThreadStatesMap).field_0xc;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ThreadStatesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x34 = 0;
  iVar5 = *(int *)&(this->ThreadStatesMap).field_0x2c;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ThreadStatesMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ThreadStatesMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 1;
    TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// OnEvent @ 14d3f0b60

bool __thiscall
TraceServices::FCsvProfilerAnalyzer::OnEvent
          (FCsvProfilerAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  FScriptContainerElement *pFVar1;
  IAnalysisSession *pIVar2;
  FEventData *this_00;
  FCsvProfilerProvider *this_01;
  IFrameProvider *pIVar3;
  FEventTime *pFVar4;
  code *pcVar5;
  FStatSeriesInstance *pFVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  FStatSeriesDefinition **ppFVar14;
  uchar *puVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  ulong64 uVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  double dVar22;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  int *local_res20;
  FString local_78;
  FMemScope local_68;
  FString local_60;
  int **local_50;
  FString *local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name72,L"Insights/FCsvProfilerAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name72,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name72,true);
  pIVar2 = this->Session;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  this_00 = param_3->EventData;
  switch(param_1) {
  case 0:
    local_res10[0] = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"Index",0);
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>(&local_60,"Name",param_3);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar19.Data = local_60.Data.AllocatorInstance.Data;
    }
    local_78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data);
    local_50 = (int **)local_res10;
    local_48 = &local_78;
    TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,wchar_t_const_*_&&>_>
              ((TSet<TTuple<int,wchar_t_const_*>,TDefaultMapHashableKeyFuncs<int,wchar_t_const_*,0>,FDefaultSetAllocator>
                *)&this->CategoryMap,
               (TPairInitializer<int_const_&,wchar_t_const_*_&&> *)&local_res20,(bool *)&local_50);
    goto LAB_14d3f100e;
  case 1:
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"StatId",0);
    iVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"CategoryIndex",0);
    FTraceAnalyzerUtils::LegacyAttachmentString<char>(&local_60,"Name",param_3);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar19.Data = local_60.Data.AllocatorInstance.Data;
    }
    DefineStatSeries(this,uVar18,(wchar_t *)FVar19.Data,iVar9,true);
    goto LAB_14d3f100e;
  case 2:
    piVar13 = (int *)UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                               (this_00,"StatId",0);
    iVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<int>(this_00,"CategoryIndex",0);
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>(&local_60,"Name",param_3);
    FVar19.Data = local_60.Data.AllocatorInstance.Data;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar21.Data = local_60.Data.AllocatorInstance.Data;
    }
    local_res20 = piVar13;
    ppFVar14 = TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
               ::Find((TMapBase<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>_>
                       *)&this->StatSeriesMap,(ulong64)piVar13);
    if (ppFVar14 == (FStatSeriesDefinition **)0x0) {
      local_78.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CreateStatSeries(this,FVar21.Data,iVar9);
      local_50 = &local_res20;
      local_48 = &local_78;
      TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>_>
                ((TSet<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*,0>,FDefaultSetAllocator>
                  *)&this->StatSeriesMap,
                 (TPairInitializer<unsigned___int64_const_&,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*_const_&>
                  *)local_res10,(bool *)&local_50);
      FVar19.Data = local_60.Data.AllocatorInstance.Data;
    }
    if (FVar19.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar19.Data);
    }
    break;
  case 3:
    HandleMarkerEvent(this,param_3,false,true);
    break;
  case 4:
    HandleMarkerEvent(this,param_3,false,false);
    break;
  case 5:
    HandleMarkerEvent(this,param_3,true,true);
    break;
  case 6:
    HandleMarkerEvent(this,param_3,true,false);
    break;
  case 7:
    HandleCustomStatEvent(this,param_3,false);
    break;
  case 8:
    HandleCustomStatEvent(this,param_3,true);
    break;
  case 9:
    HandleEventEvent(this,param_3);
    break;
  case 10:
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    bVar7 = UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Key",&local_60);
    if (bVar7) {
      UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Value",&local_78);
    }
    else {
      pwVar17 = (wchar_t *)UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      ::FString::operator=(&local_60,pwVar17);
      uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ValueOffset",0);
      puVar15 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_00);
      ::FString::operator=(&local_78,(wchar_t *)(puVar15 + uVar8));
    }
    this_01 = this->CsvProfilerProvider;
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar19.Data = local_78.Data.AllocatorInstance.Data;
    }
    pwVar17 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar19.Data = local_60.Data.AllocatorInstance.Data;
    }
    pwVar16 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data);
    FCsvProfilerProvider::SetMetadata(this_01,pwVar16,pwVar17);
    if ((FStatSeriesDefinition *)local_78.Data.AllocatorInstance.Data !=
        (FStatSeriesDefinition *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    goto LAB_14d3f100e;
  case 0xb:
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"RenderThreadId",0);
    uVar11 = 0x70000000;
    if (uVar12 == 0) {
      uVar10 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    else {
      uVar10 = 0x70000000;
    }
    this->RenderThreadId = uVar12 | uVar10;
    uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (param_3->EventData,"RHIThreadId",0);
    if (uVar12 == 0) {
      uVar11 = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
    }
    pIVar3 = this->FrameProvider;
    this->RHIThreadId = uVar12 | uVar11;
    pFVar4 = param_3->EventTime;
    pcVar5 = *(code **)((longlong)*pIVar3 + 0x50);
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar22 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar4,uVar18);
    uVar12 = (*pcVar5)(pIVar3,0,SUB84(dVar22,0));
    bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_00,"EnableCounts",false);
    this->bEnableCounts = bVar7;
    FTraceAnalyzerUtils::LegacyAttachmentString<wchar_t>(&local_60,"FileName",param_3);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar19.Data = local_60.Data.AllocatorInstance.Data;
    }
    pwVar17 = (wchar_t *)(**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar19.Data);
    FCsvProfilerProvider::StartCapture(this->CsvProfilerProvider,pwVar17,uVar12);
LAB_14d3f100e:
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    break;
  case 0xc:
    pIVar3 = this->FrameProvider;
    pFVar4 = param_3->EventTime;
    pcVar5 = *(code **)((longlong)*pIVar3 + 0x50);
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Cycle",0);
    dVar22 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar4,uVar18);
    uVar12 = (*pcVar5)(pIVar3,0,SUB84(dVar22,0));
    pFVar20 = (this->StatSeriesInstanceArray).AllocatorInstance.Data;
    iVar9 = (this->StatSeriesInstanceArray).ArrayNum;
    pFVar1 = pFVar20 + (longlong)iVar9 * 8;
    while( true ) {
      if ((this->StatSeriesInstanceArray).ArrayNum != iVar9) {
        `TCheckedPointerIterator<TraceServices::FCsvProfilerAnalyzer::FStatSeriesInstance_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar20 == pFVar1) break;
      pFVar6 = *(FStatSeriesInstance **)pFVar20;
      if (((pFVar6->CurrentValue).bIsValid != false) && (pFVar6->CurrentFrame < uVar12)) {
        Flush(this,pFVar6);
      }
      pFVar20 = pFVar20 + 8;
    }
    FCsvProfilerProvider::EndCapture(this->CsvProfilerProvider,uVar12);
  }
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

// SetCustomStatValue @ 14d4021f0

void __thiscall
TraceServices::FCsvProfilerAnalyzer::SetCustomStatValue
          (FCsvProfilerAnalyzer *this,FStatSeriesInstance *param_1,uint param_2,ECsvOpType param_3,
          int param_4)

{
  longlong lVar1;
  
  FlushIfNewFrame(this,param_1,param_2);
  if (((param_1->CurrentValue).bIsValid == false) || (param_3 == CsvOpType_Set)) {
    (param_1->CurrentValue).Value = (<unnamed_type_Value>)(longlong)param_4;
  }
  else {
    if (param_3 == CsvOpType_Min) {
      lVar1 = (param_1->CurrentValue).Value.AsInt;
      (param_1->CurrentValue).bIsValid = true;
      if (param_4 < lVar1) {
        lVar1 = (longlong)param_4;
      }
      param_1->CurrentCount = param_1->CurrentCount + 1;
      (param_1->CurrentValue).Value.AsInt = lVar1;
      return;
    }
    if (param_3 == CsvOpType_Max) {
      lVar1 = (param_1->CurrentValue).Value.AsInt;
      (param_1->CurrentValue).bIsValid = true;
      if (lVar1 < param_4) {
        lVar1 = (longlong)param_4;
      }
      param_1->CurrentCount = param_1->CurrentCount + 1;
      (param_1->CurrentValue).Value.AsInt = lVar1;
      return;
    }
    if (param_3 == CsvOpType_Accumulate) {
      (param_1->CurrentValue).Value.AsInt = (param_1->CurrentValue).Value.AsInt + (longlong)param_4;
      param_1->CurrentCount = param_1->CurrentCount + 1;
      (param_1->CurrentValue).bIsValid = true;
      return;
    }
  }
  param_1->CurrentCount = param_1->CurrentCount + 1;
  (param_1->CurrentValue).bIsValid = true;
  return;
}

// SetCustomStatValue @ 14d4022b0

void __thiscall
TraceServices::FCsvProfilerAnalyzer::SetCustomStatValue
          (FCsvProfilerAnalyzer *this,FStatSeriesInstance *param_1,uint param_2,ECsvOpType param_3,
          float param_4)

{
  double dVar1;
  double dVar2;
  
  FlushIfNewFrame(this,param_1,param_2);
  if (((param_1->CurrentValue).bIsValid == false) || (param_3 == CsvOpType_Set)) {
    dVar2 = (double)param_4;
  }
  else if (param_3 == CsvOpType_Min) {
    dVar1 = (param_1->CurrentValue).Value.AsDouble;
    dVar2 = (double)param_4;
    if (dVar1 <= (double)param_4) {
      dVar2 = dVar1;
    }
  }
  else if (param_3 == CsvOpType_Max) {
    dVar1 = (param_1->CurrentValue).Value.AsDouble;
    dVar2 = (double)param_4;
    if ((double)param_4 <= dVar1) {
      dVar2 = dVar1;
    }
  }
  else {
    if (param_3 != CsvOpType_Accumulate) goto LAB_14d40231c;
    dVar2 = (double)param_4 + (param_1->CurrentValue).Value.AsDouble;
  }
  (param_1->CurrentValue).Value.AsDouble = dVar2;
LAB_14d40231c:
  param_1->CurrentCount = param_1->CurrentCount + 1;
  (param_1->CurrentValue).bIsValid = true;
  return;
}

// SetTimerValue @ 14d402440

void __thiscall
TraceServices::FCsvProfilerAnalyzer::SetTimerValue
          (FCsvProfilerAnalyzer *this,FStatSeriesInstance *param_1,uint param_2,double param_3,
          bool param_4)

{
  FlushIfNewFrame(this,param_1,param_2);
  (param_1->CurrentValue).bIsValid = true;
  (param_1->CurrentValue).Value.AsDouble = param_3 + (param_1->CurrentValue).Value.AsDouble;
  if (param_4) {
    param_1->CurrentCount = param_1->CurrentCount + 1;
  }
  return;
}

