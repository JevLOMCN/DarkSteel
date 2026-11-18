// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 10

// FMetasoundDynamicGraphGenerator @ 14b2a67b0

FMetasoundDynamicGraphGenerator * __thiscall
Metasound::FMetasoundDynamicGraphGenerator::FMetasoundDynamicGraphGenerator
          (FMetasoundDynamicGraphGenerator *this,FOperatorSettings *param_1)

{
  FMetasoundGenerator::FMetasoundGenerator((FMetasoundGenerator *)this,param_1);
  this->_padding_ = (longlong)&___7FMetasoundDynamicGraphGenerator_Metasound__6B_;
  (this->AudioOutputNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputNames).ArrayNum = 0;
  (this->AudioOutputNames).ArrayMax = 0;
  (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
  return this;
}

// ~FMetasoundDynamicGraphGenerator @ 14b2a7ff0

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::~FMetasoundDynamicGraphGenerator
          (FMetasoundDynamicGraphGenerator *this)

{
  FAsyncTaskBase *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMetasoundDynamicGraphGenerator_Metasound__6B_;
  LOCK();
  NumActiveDynamicGraphs.Counter = NumActiveDynamicGraphs.Counter + -1;
  UNLOCK();
  if (__CsvProfilerStat1058 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumActiveDynamicGraphs",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat1058 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveDynamicGraphs",_GCsvCategory_Audio_Metasound.Index,
             NumActiveDynamicGraphs.Counter,Set);
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    FAsyncTaskBase::EnsureCompletion(pFVar1,true,false);
    pFVar1 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
    if (pFVar1 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
  }
  pFVar1 = (this->BuilderTask).Ptr;
  if (pFVar1 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  pFVar2 = (this->AudioOutputNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMetasoundGenerator::~FMetasoundGenerator((FMetasoundGenerator *)this);
  return;
}

// BuildGraph @ 14b2ace90

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::BuildGraph
          (FMetasoundDynamicGraphGenerator *this,FMetasoundDynamicGraphGeneratorInitParams *param_1)

{
  FAsyncTaskBase *pFVar1;
  bool bVar2;
  FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this_00;
  FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *pFVar3;
  bool local_res8 [8];
  FMetasoundDynamicGraphGenerator *local_res10;
  
  if (((char)param_1->_padding_ == '\0') &&
     (ConsoleVariables::bEnableAsyncMetaSoundGeneratorBuilder)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_res8[0] = true;
  local_res10 = this;
  this_00 = ::operator_new(0x140);
  pFVar3 = (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *)0x0;
  if (this_00 != (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *)0x0) {
    pFVar3 = FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::
             FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder><Metasound::FMetasoundDynamicGraphGenerator_*,Metasound::FMetasoundDynamicGraphGeneratorInitParams,bool>
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

// Init @ 14b2b1cc0

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::Init
          (FMetasoundDynamicGraphGenerator *this,FMetasoundDynamicGraphGeneratorInitParams *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  void *_Src;
  FAsyncTaskBase *pFVar4;
  bool bVar5;
  FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this_00;
  FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *pFVar6;
  bool local_res8 [8];
  FMetasoundDynamicGraphGenerator *local_res10;
  
  LOCK();
  NumActiveDynamicGraphs.Counter = NumActiveDynamicGraphs.Counter + 1;
  UNLOCK();
  if (!__CsvProfilerStat1070) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumActiveDynamicGraphs",_GCsvCategory_Audio_Metasound.Index);
    __CsvProfilerStat1070 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumActiveDynamicGraphs",_GCsvCategory_Audio_Metasound.Index,
             NumActiveDynamicGraphs.Counter,Set);
  FMetasoundGenerator::InitBase((FMetasoundGenerator *)this,(FGeneratorInitParams *)param_1);
  pFVar6 = (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *)0x0;
  pTVar2 = &this->AudioOutputNames;
  if (pTVar2 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_) {
    iVar3 = (int)param_1->_padding_;
    piVar1 = &(this->AudioOutputNames).ArrayMax;
    _Src = (void *)param_1->_padding_;
    (this->AudioOutputNames).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  if (((char)param_1->_padding_ == '\0') &&
     (ConsoleVariables::bEnableAsyncMetaSoundGeneratorBuilder != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  local_res8[0] = true;
  local_res10 = this;
  this_00 = ::operator_new(0x140);
  if (this_00 != (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *)0x0) {
    pFVar6 = FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::
             FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder><Metasound::FMetasoundDynamicGraphGenerator_*,Metasound::FMetasoundDynamicGraphGeneratorInitParams,bool>
                       (this_00,&local_res10,param_1,local_res8);
  }
  pFVar4 = (this->BuilderTask).Ptr;
  (this->BuilderTask).Ptr = (FAsyncTaskBase *)pFVar6;
  if (pFVar4 != (FAsyncTaskBase *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x28))();
  }
  pFVar4 = (this->BuilderTask).Ptr;
  if (!bVar5) {
    FAsyncTaskBase::Start(pFVar4,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
    pFVar4 = (this->BuilderTask).Ptr;
    (this->BuilderTask).Ptr = (FAsyncTaskBase *)0x0;
    if (pFVar4 != (FAsyncTaskBase *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
    }
    FMetasoundGenerator::UpdateGraphIfPending((FMetasoundGenerator *)this);
    return;
  }
  FAsyncTaskBase::Start(pFVar4,false,GBackgroundPriorityThreadPool,Normal,None,-1,(wchar_t *)0x0);
  return;
}

// OnInputAdded @ 14b2b3f10

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::OnInputAdded
          (FMetasoundDynamicGraphGenerator *this,FName *param_1,FInputVertexInterfaceData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IDataTypeRegistry *pIVar7;
  FAnyDataReference *pFVar8;
  FInputDataVertex *pFVar9;
  FName local_18;
  undefined4 local_10;
  
  FInputVertexInterfaceData::operator=((FInputVertexInterfaceData *)&this->_padding_,param_2);
  pIVar7 = Frontend::IDataTypeRegistry::Get();
  pFVar8 = FInputVertexInterfaceData::FindDataReference
                     ((FInputVertexInterfaceData *)&this->_padding_,param_1);
  if ((pFVar8 != (FAnyDataReference *)0x0) && (pFVar8->AccessType == Write)) {
    pFVar9 = FInputVertexInterfaceData::GetVertex
                       ((FInputVertexInterfaceData *)&this->_padding_,param_1);
    GeneratorBuilder::AddParameterSetter
              (pIVar7,pFVar9,pFVar8,
               (TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>
                *)&this->_padding_,
               (TMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>_>
                *)&this->_padding_);
  }
  local_18 = *param_1;
  plVar2 = &this->_padding_;
  local_10 = CONCAT22(local_10._2_2_,2);
  if (((FName *)*plVar2 <= &local_18) &&
     (&local_18 < (FName *)(*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  lVar3 = *plVar2;
  *(FName *)(lVar3 + (longlong)iVar6 * 0xc) = local_18;
  *(undefined4 *)(lVar3 + (longlong)iVar6 * 0xc + 8) = local_10;
  LOCK();
  *(undefined1 *)&this->_padding_ = 1;
  UNLOCK();
  return;
}

// OnInputRemoved @ 14b2b4090

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::OnInputRemoved
          (FMetasoundDynamicGraphGenerator *this,FName *param_1,FInputVertexInterfaceData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  undefined8 *puVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FName local_res8;
  FName local_res10;
  FName local_38;
  undefined4 local_30;
  
  FInputVertexInterfaceData::operator=((FInputVertexInterfaceData *)&this->_padding_,param_2);
  local_res8 = *param_1;
  plVar2 = &this->_padding_;
  uVar8 = Algo::
          BinarySearchBy<TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    ((TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>
                      *)plVar2,&local_res8,local_res8.ComparisonIndex.Value._0_1_,
                     (FNameFastLess)local_res8.ComparisonIndex.Value._0_1_);
  if (uVar8 != 0xffffffff) {
    uVar9 = 0;
    if ((int)uVar8 < (int)this->_padding_) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    _Dst = (void *)(*plVar2 + (longlong)(int)uVar8 * 0x28);
    puVar3 = *(undefined8 **)(*plVar2 + 0x20 + (longlong)(int)uVar8 * 0x28);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    iVar10 = (int)this->_padding_ + ~uVar8;
    if (iVar10 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)iVar10 * 0x28);
    }
    *(int *)&this->_padding_ = (int)this->_padding_ + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)plVar2,(int)this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
  }
  FVar4 = *param_1;
  local_res10 = FVar4;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter>,TDefaultMapHashableKeyFuncs<FName,Metasound::MetasoundGeneratorPrivate::FParameterPackSetter,0>,FDefaultSetAllocator>
                         *)&this->_padding_,FVar4.Number + uVar8,&local_res10);
  }
  local_38 = *param_1;
  plVar2 = &this->_padding_;
  local_30 = CONCAT22(local_30._2_2_,0x202);
  if (((FName *)*plVar2 <= &local_38) &&
     (&local_38 < (FName *)(*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar10 + 1;
  lVar5 = *plVar2;
  *(FName *)(lVar5 + (longlong)iVar10 * 0xc) = local_38;
  *(undefined4 *)(lVar5 + (longlong)iVar10 * 0xc + 8) = local_30;
  LOCK();
  *(undefined1 *)&this->_padding_ = 1;
  UNLOCK();
  return;
}

// OnOutputAdded @ 14b2b46d0

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::OnOutputAdded
          (FMetasoundDynamicGraphGenerator *this,FName *param_1,FOutputVertexInterfaceData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  TReferenceControllerBase<0> *pTVar5;
  bool bVar6;
  int iVar7;
  FOutputBinding *pFVar8;
  FName local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  MetasoundGeneratorPrivate::LogErrorIfIsAudioVertex
            (param_1,L"The MetaSound Generator cannot dynamically add audio outputs");
  FOutputVertexInterfaceData::operator=((FOutputVertexInterfaceData *)&this->_padding_,param_2);
  if (Frontend::SourceOneShotInterface::Outputs::OnFinished == *param_1) {
    pFVar8 = FOutputVertexInterfaceData::FindChecked(param_2,param_1);
    if ((pFVar8->Data).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x19a,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pFVar8->Data).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
              (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_28);
    lVar3 = this->_padding_;
    pTVar5 = (TReferenceControllerBase<0> *)this->_padding_;
    this->_padding_ = local_28._8_8_;
    this->_padding_ = local_28._16_8_;
    local_28._8_8_ = lVar3;
    local_28._16_8_ = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  local_38 = *param_1;
  plVar2 = &this->_padding_;
  local_30 = CONCAT22(local_30._2_2_,3);
  if (((FName *)*plVar2 <= &local_38) &&
     (&local_38 < (FName *)(*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  lVar3 = *plVar2;
  *(FName *)(lVar3 + (longlong)iVar7 * 0xc) = local_38;
  *(undefined4 *)(lVar3 + (longlong)iVar7 * 0xc + 8) = local_30;
  LOCK();
  *(undefined1 *)&this->_padding_ = 1;
  UNLOCK();
  return;
}

// OnOutputRemoved @ 14b2b48a0

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::OnOutputRemoved
          (FMetasoundDynamicGraphGenerator *this,FName *param_1,FOutputVertexInterfaceData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_18;
  undefined4 local_10;
  
  MetasoundGeneratorPrivate::LogErrorIfIsAudioVertex
            (param_1,L"The MetaSound Generator cannot dynamically remove audio outputs");
  FOutputVertexInterfaceData::operator=((FOutputVertexInterfaceData *)&this->_padding_,param_2);
  local_18 = *param_1;
  plVar2 = &this->_padding_;
  local_10 = CONCAT22(local_10._2_2_,0x203);
  if (((FName *)*plVar2 <= &local_18) &&
     (&local_18 < (FName *)(*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  lVar3 = *plVar2;
  *(FName *)(lVar3 + (longlong)iVar6 * 0xc) = local_18;
  *(undefined4 *)(lVar3 + (longlong)iVar6 * 0xc + 8) = local_10;
  LOCK();
  *(undefined1 *)&this->_padding_ = 1;
  UNLOCK();
  return;
}

// OnOutputUpdated @ 14b2b49c0

void __thiscall
Metasound::FMetasoundDynamicGraphGenerator::OnOutputUpdated
          (FMetasoundDynamicGraphGenerator *this,FName *param_1,FOutputVertexInterfaceData *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FName *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FOutputBinding *pFVar11;
  uint uVar12;
  FName *pFVar13;
  TReferenceControllerBase<0> *pTVar14;
  FName local_58;
  undefined4 local_50;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  FOutputVertexInterfaceData::operator=((FOutputVertexInterfaceData *)&this->_padding_,param_2);
  pFVar4 = (FName *)(this->AudioOutputNames).AllocatorInstance.Data;
  if (pFVar4 != pFVar4 + (this->AudioOutputNames).ArrayNum) {
    pFVar13 = pFVar4;
    do {
      if (*pFVar13 == *param_1) {
        uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar4 >> 3);
        if (uVar12 != 0xffffffff) {
          pFVar11 = FOutputVertexInterfaceData::FindChecked(param_2,param_1);
          VertexDataPrivate::FOutputBinding::
          GetDataReferenceAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                    (pFVar11,(TDataReadReference<Metasound::FAudioBuffer> *)local_48);
          uVar10 = 0;
          if ((int)uVar12 < (int)this->_padding_) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          puVar3 = (undefined8 *)((longlong)(int)uVar12 * 0x20 + 8 + this->_padding_);
          uVar7 = *puVar3;
          pTVar14 = (TReferenceControllerBase<0> *)puVar3[1];
          puVar3 = (undefined8 *)((longlong)(int)uVar12 * 0x20 + 8 + this->_padding_);
          *puVar3 = local_48._8_8_;
          puVar3[1] = local_48._16_8_;
          local_48._8_8_ = uVar7;
          local_48._16_8_ = pTVar14;
          goto LAB_14b2b4ac7;
        }
        break;
      }
      pFVar13 = pFVar13 + 1;
    } while (pFVar13 != pFVar4 + (this->AudioOutputNames).ArrayNum);
  }
  if (Frontend::SourceOneShotInterface::Outputs::OnFinished == *param_1) {
    pFVar11 = FOutputVertexInterfaceData::FindChecked(param_2,param_1);
    if ((pFVar11->Data).bIsSet == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                         ,0x19a,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((pFVar11->Data).bIsSet == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
              (&(pFVar11->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_28);
    lVar5 = this->_padding_;
    pTVar14 = (TReferenceControllerBase<0> *)this->_padding_;
    this->_padding_ = local_28._8_8_;
    this->_padding_ = local_28._16_8_;
    local_28._8_8_ = lVar5;
    local_28._16_8_ = pTVar14;
LAB_14b2b4ac7:
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  local_58 = *param_1;
  plVar2 = &this->_padding_;
  local_50 = CONCAT22(local_50._2_2_,0x103);
  if (((FName *)*plVar2 <= &local_58) &&
     (&local_58 < (FName *)(*plVar2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0xc))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar9 + 1;
  lVar5 = *plVar2;
  *(FName *)(lVar5 + (longlong)iVar9 * 0xc) = local_58;
  *(undefined4 *)(lVar5 + (longlong)iVar9 * 0xc + 8) = local_50;
  LOCK();
  *(undefined1 *)&this->_padding_ = 1;
  UNLOCK();
  return;
}

// ReleaseGraphOperator @ 14b2b6260

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FMetasoundDynamicGraphGenerator::ReleaseGraphOperator
          (FMetasoundDynamicGraphGenerator *this)

{
  undefined8 *puVar1;
  IOperator *in_RDX;
  
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *in_RDX = (IOperator)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)in_RDX;
  }
  *in_RDX = (IOperator)0x0;
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)in_RDX;
}

