// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 8

// FAsyncTask<Metasound::FAsyncMetaSoundBuilder><Metasound::FMetasoundConstGraphGenerator_*,Metasound::FGeneratorInitParams,bool> @ 14b2a21e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<Metasound::FAsyncMetaSoundBuilder> * __thiscall
FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::
FAsyncTask<Metasound::FAsyncMetaSoundBuilder><Metasound::FMetasoundConstGraphGenerator_*,Metasound::FGeneratorInitParams,bool>
          (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this,
          FMetasoundConstGraphGenerator **param_1,FGeneratorInitParams *param_2,bool *param_3)

{
  bool bVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncMetaSoundBuilder_Metasound____6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  bVar1 = *param_3;
  (this->Task)._padding_ = (longlong)*param_1;
  *(bool *)&(this->Task)._padding_ = bVar1;
  (this->Task)._padding_ = (longlong)&___7FAsyncMetaSoundBuilder_Metasound__6B_;
  Metasound::FGeneratorInitParams::FGeneratorInitParams(&(this->Task).InitParams,param_2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`Metasound::FAsyncMetaSoundBuilderBase::GetStatId'::__l2::FStat_FAsyncMetaSoundBuilder>
      ::
      FThreadSafeStaticStat<_Metasound::FAsyncMetaSoundBuilderBase::GetStatId_::__l2::FStat_FAsyncMetaSoundBuilder>
                (&`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAsyncMetaSoundBuilder);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar3 = _StatPtr_FAsyncMetaSoundBuilder;
  if (_StatPtr_FAsyncMetaSoundBuilder == (TStatIdData *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"FAsyncMetaSoundBuilder");
    pTVar3 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FAsyncMetaSoundBuilder,*pFVar2,L"FAsyncMetaSoundBuilder",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar3;
  return this;
}

// FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder><Metasound::FMetasoundDynamicGraphGenerator_*,Metasound::FMetasoundDynamicGraphGeneratorInitParams,bool> @ 14b2a2350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> * __thiscall
FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::
FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder><Metasound::FMetasoundDynamicGraphGenerator_*,Metasound::FMetasoundDynamicGraphGeneratorInitParams,bool>
          (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this,
          FMetasoundDynamicGraphGenerator **param_1,
          FMetasoundDynamicGraphGeneratorInitParams *param_2,bool *param_3)

{
  FMetasoundDynamicGraphGenerator *pFVar1;
  void *pvVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  ulonglong uVar5;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncDynamicMetaSoundBuilder_Metasound____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pFVar1 = *param_1;
  *(bool *)&(this->Task)._padding_ = *param_3;
  (this->Task)._padding_ = (longlong)pFVar1;
  (this->Task).DynamicGenerator = pFVar1;
  (this->Task)._padding_ = (longlong)&___7FAsyncDynamicMetaSoundBuilder_Metasound__6B_;
  Metasound::FGeneratorInitParams::FGeneratorInitParams
            ((FGeneratorInitParams *)&(this->Task).InitParams,(FGeneratorInitParams *)param_2);
  uVar5 = (ulonglong)_tls_index;
  (this->Task).InitParams.TransformQueue.Object = (param_2->TransformQueue).Object;
  (this->Task).InitParams.TransformQueue.SharedReferenceCount.ReferenceController =
       (param_2->TransformQueue).SharedReferenceCount.ReferenceController;
  pvVar2 = ThreadLocalStoragePointer;
  (param_2->TransformQueue).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->TransformQueue).Object =
       (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
        *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) <
      `public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`Metasound::FAsyncMetaSoundBuilderBase::GetStatId'::__l2::FStat_FAsyncMetaSoundBuilder>
      ::
      FThreadSafeStaticStat<_Metasound::FAsyncMetaSoundBuilderBase::GetStatId_::__l2::FStat_FAsyncMetaSoundBuilder>
                (&`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAsyncMetaSoundBuilder);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar4 = _StatPtr_FAsyncMetaSoundBuilder;
  if (_StatPtr_FAsyncMetaSoundBuilder == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"FAsyncMetaSoundBuilder");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Metasound::FAsyncMetaSoundBuilderBase::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FAsyncMetaSoundBuilder,*pFVar3,L"FAsyncMetaSoundBuilder",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 14b2af6a0

void __thiscall
FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::DoTaskWork
          (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this)

{
  Metasound::FAsyncDynamicMetaSoundBuilder::DoWork(&this->Task);
  return;
}

// DoTaskWork @ 14b2af6b0

void __thiscall
FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::DoTaskWork
          (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this)

{
  Metasound::FAsyncMetaSoundBuilder::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 14b2b2ac0

void __thiscall
FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::MarkAsCanceled
          (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this)

{
  return;
}

// MarkAsCanceled @ 14b2b2ad0

void __thiscall
FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::MarkAsCanceled
          (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this)

{
  return;
}

// TryAbandonTask @ 14b2b9860

bool __thiscall
FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder>::TryAbandonTask
          (FAsyncTask<Metasound::FAsyncDynamicMetaSoundBuilder> *this)

{
  return false;
}

// TryAbandonTask @ 14b2b9870

bool __thiscall
FAsyncTask<Metasound::FAsyncMetaSoundBuilder>::TryAbandonTask
          (FAsyncTask<Metasound::FAsyncMetaSoundBuilder> *this)

{
  return false;
}

