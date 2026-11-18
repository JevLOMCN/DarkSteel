// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 3

// ~FMoviePipelineBackgroundAccumulateTask @ 14ddcb3b0

void __thiscall
FMoviePipelineBackgroundAccumulateTask::~FMoviePipelineBackgroundAccumulateTask
          (FMoviePipelineBackgroundAccumulateTask *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  pFVar3 = (this->LastCompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ddcb3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      return;
    }
  }
  return;
}

// Execute @ 14dddba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FMoviePipelineBackgroundAccumulateTask::Execute
          (FMoviePipelineBackgroundAccumulateTask *this,TUniqueFunction<void___cdecl(void)> *param_1
          )

{
  undefined1 *puVar1;
  TUniqueFunction<void___cdecl(void)> *pTVar2;
  int iVar3;
  TAtomic<FMinimalName> TVar4;
  FBaseGraphTask *pFVar5;
  TStatId TVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  longlong *plVar8;
  longlong *in_R8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  TUniqueFunction<void___cdecl(void)> *local_88 [4];
  longlong local_68 [2];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88[0] = param_1;
  if ((this->LastCompletionEvent).Reference == (FBaseGraphTask *)0x0) {
    TVar6 = GetStatId(this);
    TVar4 = (TVar6.StatIdPtr)->Name;
    local_68[0] = *in_R8;
    local_40 = in_R8[5];
    in_R8[5] = 0;
    local_58 = in_R8[2];
    lStack_50 = in_R8[3];
    local_48 = in_R8[4];
    if (local_68[0] != 0) {
      *in_R8 = 0;
    }
    local_98 = 0xff;
    TVar7 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)local_88,(TStatIdData *)local_68,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)TVar4,MainQueue);
  }
  else {
    TVar6 = GetStatId(this);
    TVar4 = (TVar6.StatIdPtr)->Name;
    local_68[0] = *in_R8;
    local_40 = in_R8[5];
    in_R8[5] = 0;
    local_58 = in_R8[2];
    lStack_50 = in_R8[3];
    local_48 = in_R8[4];
    if (local_68[0] != 0) {
      *in_R8 = 0;
    }
    local_98 = 0xff;
    TVar7 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)local_88,(TStatIdData *)local_68,
                       (TRefCountPtr<FBaseGraphTask> *)TVar4,(Type)this);
  }
  if ((FBaseGraphTask *)this != TVar7.Reference) {
    pFVar5 = (this->LastCompletionEvent).Reference;
                    /* WARNING: Load size is inaccurate */
    (this->LastCompletionEvent).Reference = *TVar7.Reference;
    *(undefined8 *)TVar7.Reference = 0;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar5->field_0x30;
      iVar3 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
  }
  if (local_88[0] != (TUniqueFunction<void___cdecl(void)> *)0x0) {
    LOCK();
    pTVar2 = local_88[0] + 1;
    iVar3 = *(int *)pTVar2;
    *(int *)pTVar2 = *(int *)pTVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_88[0] != (TUniqueFunction<void___cdecl(void)> *)0x0)) {
      (*(code *)**(undefined8 **)local_88[0])(local_88[0],1);
    }
  }
  *(undefined8 *)param_1 = 0;
  pFVar5 = (this->LastCompletionEvent).Reference;
  *(FBaseGraphTask **)param_1 = pFVar5;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar5->field_0x30 = *(int *)&pFVar5->field_0x30 + 1;
    UNLOCK();
  }
  if (*in_R8 != 0) {
    plVar8 = in_R8 + 2;
    if ((longlong *)in_R8[5] != (longlong *)0x0) {
      plVar8 = (longlong *)in_R8[5];
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// GetStatId @ 14dde5f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
FMoviePipelineBackgroundAccumulateTask::GetStatId(FMoviePipelineBackgroundAccumulateTask *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FMoviePipelineBackgroundAccumulateTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FMoviePipelineBackgroundAccumulateTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FMoviePipelineBackgroundAccumulateTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FMoviePipelineBackgroundAccumulateTask = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FMoviePipelineBackgroundAccumulateTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FMoviePipelineBackgroundAccumulateTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FMoviePipelineBackgroundAccumulateTask,*pFVar1,
               L"FMoviePipelineBackgroundAccumulateTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FMoviePipelineBackgroundAccumulateTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FMoviePipelineBackgroundAccumulateTask;
  if (_StatPtr_FMoviePipelineBackgroundAccumulateTask == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FMoviePipelineBackgroundAccumulateTask");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_struct_TStatId___cdecl_FMoviePipelineBackgroundAccumulateTask::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FMoviePipelineBackgroundAccumulateTask,*pFVar1,
                       L"FMoviePipelineBackgroundAccumulateTask","STATGROUP_ThreadPoolAsyncTasks",
                       "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

