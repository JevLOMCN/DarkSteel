// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FScopedAnimNodeTrace @ 147531750

FScopedAnimNodeTrace * __thiscall
FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace
          (FScopedAnimNodeTrace *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  int iVar2;
  FTlsAutoCleanup *pFVar3;
  LARGE_INTEGER local_res8;
  code *local_18;
  LARGE_INTEGER *local_10;
  
  this->Context = (FAnimationBaseContext *)param_1;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar3 + 2) == 0) {
    iVar1 = *(int *)&param_1->field_0x14;
    iVar2 = *(int *)&param_1->field_0x18;
    QueryPerformanceCounter(&local_res8);
    OutputAnimNodeStart((FAnimationBaseContext *)param_1,local_res8.QuadPart,iVar2,iVar1,0.0,0.0,
                        '\x03');
  }
  return this;
}

// FScopedAnimNodeTrace @ 1475317f0

FScopedAnimNodeTrace * __thiscall
FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace
          (FScopedAnimNodeTrace *this,FAnimationInitializeContext *param_1)

{
  int iVar1;
  int iVar2;
  FTlsAutoCleanup *pFVar3;
  LARGE_INTEGER local_res8;
  code *local_18;
  LARGE_INTEGER *local_10;
  
  this->Context = (FAnimationBaseContext *)param_1;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar3 + 2) == 0) {
    iVar1 = *(int *)&param_1->field_0x14;
    iVar2 = *(int *)&param_1->field_0x18;
    QueryPerformanceCounter(&local_res8);
    OutputAnimNodeStart((FAnimationBaseContext *)param_1,local_res8.QuadPart,iVar2,iVar1,0.0,0.0,
                        '\0');
  }
  return this;
}

// FScopedAnimNodeTrace @ 147531890

FScopedAnimNodeTrace * __thiscall
FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace
          (FScopedAnimNodeTrace *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  FTlsAutoCleanup *pFVar5;
  LARGE_INTEGER local_res8;
  code *local_38;
  LARGE_INTEGER *local_30;
  
  local_30 = &local_res8;
  this->Context = (FAnimationBaseContext *)param_1;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar5 + 2) == 0) {
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    lVar4 = param_1->_padding_;
    fVar1 = param_1->RootMotionWeightModifier;
    fVar2 = param_1->CurrentWeight;
    QueryPerformanceCounter(&local_res8);
    OutputAnimNodeStart((FAnimationBaseContext *)param_1,local_res8.QuadPart,(int)lVar4,iVar3,fVar2,
                        fVar1,'\x02');
  }
  return this;
}

// FScopedAnimNodeTrace @ 147531960

FScopedAnimNodeTrace * __thiscall
FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace
          (FScopedAnimNodeTrace *this,FComponentSpacePoseContext *param_1)

{
  int iVar1;
  longlong lVar2;
  FTlsAutoCleanup *pFVar3;
  LARGE_INTEGER local_res8;
  code *local_18;
  LARGE_INTEGER *local_10;
  
  this->Context = (FAnimationBaseContext *)param_1;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar3 + 2) == 0) {
    iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
    lVar2 = param_1->_padding_;
    QueryPerformanceCounter(&local_res8);
    OutputAnimNodeStart((FAnimationBaseContext *)param_1,local_res8.QuadPart,(int)lVar2,iVar1,0.0,
                        0.0,'\x04');
  }
  return this;
}

// FScopedAnimNodeTrace @ 147531a00

FScopedAnimNodeTrace * __thiscall
FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace
          (FScopedAnimNodeTrace *this,FPoseContext *param_1)

{
  int iVar1;
  longlong lVar2;
  FTlsAutoCleanup *pFVar3;
  LARGE_INTEGER local_res8;
  code *local_18;
  LARGE_INTEGER *local_10;
  
  this->Context = (FAnimationBaseContext *)param_1;
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar3 + 2) == 0) {
    iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
    lVar2 = param_1->_padding_;
    QueryPerformanceCounter(&local_res8);
    OutputAnimNodeStart((FAnimationBaseContext *)param_1,local_res8.QuadPart,(int)lVar2,iVar1,0.0,
                        0.0,'\x04');
  }
  return this;
}

// ~FScopedAnimNodeTrace @ 1475334b0

void __thiscall FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(FScopedAnimNodeTrace *this)

{
  FTlsAutoCleanup *pFVar1;
  LARGE_INTEGER local_res10 [3];
  code *local_18;
  LARGE_INTEGER *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar1 + 2) == 0) {
    QueryPerformanceCounter(local_res10);
    OutputAnimNodeEnd(this->Context,local_res10[0].QuadPart);
    return;
  }
  return;
}

