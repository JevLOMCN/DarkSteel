// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// ~<lambda_1> @ 14d78baa0

void __thiscall
`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x40));
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// operator() @ 14d78e0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::
<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x40);
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  uVar3 = *(undefined8 *)((longlong)this + 0x18);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_50,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x28,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>::operator()'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  puVar1 = local_10 + 1;
  *puVar1 = uVar3;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_10 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

