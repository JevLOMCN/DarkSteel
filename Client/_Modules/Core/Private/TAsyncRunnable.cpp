// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Run @ 141967d70

uint __thiscall TAsyncRunnable<void>::Run(TAsyncRunnable<void> *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>(&this->Promise,&this->Function);
  if (*(longlong *)&this->ThreadFuture == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (*(longlong *)&this->ThreadFuture == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
  }
  lVar1 = *(longlong *)&this->ThreadFuture;
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_58.Thread = *(FRunnableThread **)(lVar1 + 0x70);
  local_58.__this = this;
  Async<_TAsyncRunnable<void>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 141b4d1e0

uint __thiscall TAsyncRunnable<int>::Run(TAsyncRunnable<int> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<int,TUniqueFunction<int___cdecl(void)>_&>(&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<int>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 141d039a0

uint __thiscall TAsyncRunnable<TTwoSmoothies<1>_>::Run(TAsyncRunnable<TTwoSmoothies<1>_> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<TTwoSmoothies<1>,TUniqueFunction<TTwoSmoothies<1>___cdecl(void)>_&>
            (&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<TTwoSmoothies<1>_>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

// Run @ 141d03a10

uint __thiscall TAsyncRunnable<bool>::Run(TAsyncRunnable<bool> *this)

{
  FRunnableThread **ppFVar1;
  <lambda_1> local_58;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>(&this->Promise,&this->Function);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  ppFVar1 = TFutureBase<FRunnableThread_*>::Get
                      ((TFutureBase<FRunnableThread_*> *)&this->ThreadFuture);
  local_58.Thread = *ppFVar1;
  local_58.__this = this;
  Async<_TAsyncRunnable<bool>::Run_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  return 0;
}

