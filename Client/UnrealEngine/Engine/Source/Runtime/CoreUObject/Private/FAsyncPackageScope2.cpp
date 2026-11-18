// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FAsyncPackageScope2 @ 142308670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncPackageScope2 * __thiscall
FAsyncPackageScope2::FAsyncPackageScope2(FAsyncPackageScope2 *this,FAsyncPackage2 *param_1)

{
  uint *puVar1;
  FUObjectThreadContext *pFVar2;
  IAsyncPackageLoader *pIVar3;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = (FUObjectThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  this->ThreadContext = pFVar2;
  this->PreviousPackage = pFVar2->AsyncPackage;
  pFVar2->AsyncPackage = param_1;
  this->PreviousAsyncPackageLoader = this->ThreadContext->AsyncPackageLoader;
  pIVar3 = (IAsyncPackageLoader *)&param_1->AsyncLoadingThread->_padding_;
  if (param_1->AsyncLoadingThread == (FAsyncLoadingThread2 *)0x0) {
    pIVar3 = (IAsyncPackageLoader *)0x0;
  }
  this->ThreadContext->AsyncPackageLoader = pIVar3;
  return this;
}

