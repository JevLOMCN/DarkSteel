// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_> @ 14cab0ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> * __thiscall
FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_>
          (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *this,
          TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          *param_1)

{
  undefined1 *puVar1;
  FDynamicMeshOperator *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  FName *pFVar6;
  TStatIdData *pTVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStackY_c8 [32];
  FName local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ =
       (longlong)
       &___7__FAsyncTask_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE____6B_;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  pFVar2 = param_1->Ptr;
  param_1->Ptr = (FDynamicMeshOperator *)0x0;
  *(undefined8 *)&this->Task = 0;
  (this->Task).field_0x10 = 0;
  *(undefined4 *)&(this->Task).field_0x18 = 0;
  *(undefined8 *)&(this->Task).field_0x1c = 0x3f800000;
  FText::FText((FText *)&(this->Task).field_0x28);
  FText::FText((FText *)&(this->Task).field_0x38);
  *(undefined4 *)&(this->Task).field_0x48 = 0xffffffff;
  *(undefined4 *)&(this->Task).field_0x4c = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Task).field_0x50,4000);
  *(undefined8 *)&(this->Task).field_0x80 = 0;
  *(undefined8 *)&(this->Task).field_0xa8 = 0;
  *(undefined ***)&(this->Task).field_0x90 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->Task).field_0x98;
  *(code **)puVar1 = FProgressCancel::<lambda_24_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&(this->Task).field_0x80 =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&(this->Task).field_0xb0 = 0;
  *(undefined8 *)&(this->Task).field_0xb8 = 0;
  local_58 = *(longlong *)&(this->Task).field_0x80;
  uVar4 = *(undefined8 *)&(this->Task).field_0x88;
  local_48 = *(longlong *)&(this->Task).field_0x90;
  uStack_40 = *(undefined8 *)&(this->Task).field_0x98;
  uVar3 = *(undefined8 *)&(this->Task).field_0xa0;
  plStack_30 = *(longlong **)&(this->Task).field_0xa8;
  *(code **)&(this->Task).field_0x80 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FAbortableBackgroundTask::FAbortableBackgroundTask'::__l2::<lambda_1>,bool>
       ::Call;
  *(undefined8 *)&(this->Task).field_0x88 = uStack_50;
  *(undefined4 *)&(this->Task).field_0x90 = 0x52912058;
  *(undefined4 *)&(this->Task).field_0x94 = 1;
  *(TModelingOpTask<UE::Geometry::FDynamicMeshOperator> **)&(this->Task).field_0x98 = &this->Task;
  *(undefined4 *)&(this->Task).field_0xa0 = (undefined4)local_38;
  *(undefined4 *)&(this->Task).field_0xa4 = local_38._4_4_;
  *(undefined4 *)&(this->Task).field_0xa8 = 0;
  *(undefined4 *)&(this->Task).field_0xac = 0;
  local_38 = uVar3;
  uStack_50 = uVar4;
  if (local_58 != 0) {
    plVar8 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pvVar5 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  (this->Task).Operator.Ptr = pFVar2;
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar9 * 8) + 0x9d4c) <
       `protected:_struct_TStatId___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_struct_TStatId___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_struct_TStatId___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_TModelingOpTask = (TStatIdData *)0x0;
    pFVar6 = ::FName::FName(local_68,"TModelingOpTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`protected:_struct_TStatId___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_TModelingOpTask,*pFVar6,L"TModelingOpTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`protected:_struct_TStatId___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar7 = _StatPtr_TModelingOpTask;
  if (_StatPtr_TModelingOpTask == (TStatIdData *)0x0) {
    pFVar6 = ::FName::FName(local_68,"TModelingOpTask");
    pTVar7 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`protected:_struct_TStatId___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_TModelingOpTask,*pFVar6,L"TModelingOpTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar7;
  return this;
}

// DoTaskWork @ 14cb02030

void __thiscall
FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::DoTaskWork
          (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *this)

{
  FDynamicMeshOperator *pFVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_void___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::DoWork(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId51,"ModelingOpTask_DoWork",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\BackgroundModelingComputeSource.h"
               ,0x33);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_void___cdecl_UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>::DoWork(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId51);
  }
  pFVar1 = (this->Task).Operator.Ptr;
  if (pFVar1 != (FDynamicMeshOperator *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,&(this->Task).field_0x10);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MarkAsCanceled @ 14cb238c0

void __thiscall
FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::MarkAsCanceled
          (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *this)

{
  return;
}

// TryAbandonTask @ 14cb436b0

bool __thiscall
FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::TryAbandonTask
          (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *this)

{
  return false;
}

