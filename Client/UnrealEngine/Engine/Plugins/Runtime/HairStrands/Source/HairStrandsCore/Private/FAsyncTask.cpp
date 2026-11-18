// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FAsyncTask<FGroomBindingAsyncBuildWorker><UGroomBindingAsset_*_&,FGroomBindingBuildContext> @ 14df95810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FGroomBindingAsyncBuildWorker> * __thiscall
FAsyncTask<FGroomBindingAsyncBuildWorker>::
FAsyncTask<FGroomBindingAsyncBuildWorker><UGroomBindingAsset_*_&,FGroomBindingBuildContext>
          (FAsyncTask<FGroomBindingAsyncBuildWorker> *this,UGroomBindingAsset **param_1,
          FGroomBindingBuildContext *param_2)

{
  UGroomBindingAsset *pUVar1;
  void *pvVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  ulonglong uVar5;
  FName local_res8;
  FReadAccessScope local_28;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFGroomBindingAsyncBuildWorker____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  pUVar1 = *param_1;
  (this->Task).BuildContext.TypedValue.MeshLODReferences.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Task).GroomBinding = pUVar1;
  (this->Task).BuildContext.TypedValue.MeshLODReferences.AllocatorInstance.Data =
       (param_2->MeshLODReferences).AllocatorInstance.Data;
  (param_2->MeshLODReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).BuildContext.TypedValue.MeshLODReferences.ArrayNum =
       (param_2->MeshLODReferences).ArrayNum;
  (this->Task).BuildContext.TypedValue.MeshLODReferences.ArrayMax =
       (param_2->MeshLODReferences).ArrayMax;
  (param_2->MeshLODReferences).ArrayNum = 0;
  (param_2->MeshLODReferences).ArrayMax = 0;
  *(undefined8 *)&(this->Task).BuildContext.TypedValue.DynamicCompletionDelegate = 0;
  *(undefined8 *)&(this->Task).BuildContext.TypedValue.DynamicCompletionDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Task).BuildContext.TypedValue.DynamicCompletionDelegate.field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_2->DynamicCompletionDelegate,&local_28);
  *(undefined8 *)&(this->Task).BuildContext.TypedValue.DynamicCompletionDelegate.field_0x8 =
       *(undefined8 *)&(param_2->DynamicCompletionDelegate).field_0x8;
  *(undefined8 *)&(this->Task).BuildContext.TypedValue.DynamicCompletionDelegate.field_0x10 =
       *(undefined8 *)&(param_2->DynamicCompletionDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->Task).BuildContext.TypedValue.NativeCompletionDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->NativeCompletionDelegate);
  uVar5 = (ulonglong)_tls_index;
  (this->Task).BuildContext.TypedValue.SourceMeshLOD = param_2->SourceMeshLOD;
  (this->Task).BuildContext.TypedValue.TargetMeshMinLOD = param_2->TargetMeshMinLOD;
  (this->Task).BuildContext.TypedValue.bReloadResource = param_2->bReloadResource;
  pvVar2 = ThreadLocalStoragePointer;
  (this->Task).BuildContext.bIsSet = true;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) <
       `public:_struct_TStatId___cdecl_FGroomBindingAsyncBuildWorker::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FGroomBindingAsyncBuildWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FGroomBindingAsyncBuildWorker::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FGroomBindingAsyncBuildWorker = (TStatIdData *)0x0;
    pFVar3 = ::FName::FName(&local_res8,"FGroomBindingAsyncBuildWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FGroomBindingAsyncBuildWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FGroomBindingAsyncBuildWorker,*pFVar3,
               L"FGroomBindingAsyncBuildWorker","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
               L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FGroomBindingAsyncBuildWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar4 = _StatPtr_FGroomBindingAsyncBuildWorker;
  if (_StatPtr_FGroomBindingAsyncBuildWorker == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"FGroomBindingAsyncBuildWorker");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FGroomBindingAsyncBuildWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FGroomBindingAsyncBuildWorker,*pFVar3,
                        L"FGroomBindingAsyncBuildWorker","STATGROUP_ThreadPoolAsyncTasks",
                        "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 14dfbe850

void __thiscall
FAsyncTask<FGroomBindingAsyncBuildWorker>::DoTaskWork
          (FAsyncTask<FGroomBindingAsyncBuildWorker> *this)

{
  if ((this->Task).BuildContext.bIsSet != false) {
    UGroomBindingAsset::ExecuteCacheDerivedDatas
              ((this->Task).GroomBinding,&(this->Task).BuildContext.TypedValue);
    return;
  }
  return;
}

// MarkAsCanceled @ 14dfd09c0

void __thiscall
FAsyncTask<FGroomBindingAsyncBuildWorker>::MarkAsCanceled
          (FAsyncTask<FGroomBindingAsyncBuildWorker> *this)

{
  return;
}

// TryAbandonTask @ 14dfda2b0

bool __thiscall
FAsyncTask<FGroomBindingAsyncBuildWorker>::TryAbandonTask
          (FAsyncTask<FGroomBindingAsyncBuildWorker> *this)

{
  return false;
}

