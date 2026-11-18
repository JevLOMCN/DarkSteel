// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// Signal @ 146c0d6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal
          (void *this,uint param_1)

{
  code *pcVar1;
  code *pcVar2;
  code **ppcVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  TUniqueFunction<void___cdecl(void)> local_78;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pcVar1 = *(code **)((longlong)this + 0x18);
  pcVar2 = *(code **)((longlong)this + 0x10);
  if (pcVar1 != (code *)0x0) {
    LOCK();
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + 1;
    UNLOCK();
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  local_20[1] = pcVar2;
  local_20[2] = pcVar1;
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<``FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::Signal'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(uint *)(local_20 + 3) = param_1;
  if (local_20 != (code **)&DAT_fffffffffffffff8) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,void>
                  ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  Async<TFunction<void___cdecl(void)>_&>
            ((TFuture<void> *)local_88,TaskGraphMainThread,(TFunction<void___cdecl(void)> *)local_48
             ,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_88._8_8_);
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  return;
}

