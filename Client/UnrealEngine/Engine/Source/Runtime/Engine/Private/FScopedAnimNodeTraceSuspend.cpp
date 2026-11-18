// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedAnimNodeTraceSuspend @ 147531aa0

FScopedAnimNodeTraceSuspend * __thiscall
FAnimTrace::FScopedAnimNodeTraceSuspend::FScopedAnimNodeTraceSuspend
          (FScopedAnimNodeTraceSuspend *this)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  *(int *)(pFVar1 + 2) = *(int *)(pFVar1 + 2) + 1;
  return this;
}

// ~FScopedAnimNodeTraceSuspend @ 147533510

void __thiscall
FAnimTrace::FScopedAnimNodeTraceSuspend::~FScopedAnimNodeTraceSuspend
          (FScopedAnimNodeTraceSuspend *this)

{
  code *pcVar1;
  bool bVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  code *local_18;
  undefined1 *local_10;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FSuspendCounter>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  *(int *)(pFVar3 + 2) = *(int *)(pFVar3 + 2) + -1;
  local_10 = local_res18;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSuspendCounter>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar3 + 2) < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSuspendCounter::Get().SuspendCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimTrace.cpp"
                       ,0x168,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

