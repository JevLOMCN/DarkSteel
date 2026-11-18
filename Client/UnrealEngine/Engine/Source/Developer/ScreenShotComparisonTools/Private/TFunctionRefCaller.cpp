// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 11

// Call @ 148c41a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageComparer::Compare'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FImageComparer::Compare'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 148c41a70

FImageComparisonResult * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>,FImageComparisonResult>
::Call(FImageComparisonResult *__return_storage_ptr__,void *param_1)

{
  FScreenShotManager::CompareScreenshot
            (*(FScreenShotManager **)param_1,__return_storage_ptr__,
             (FString *)((longlong)param_1 + 8),
             (FAutomationScreenshotMetadata *)((longlong)param_1 + 0x18),
             *(EScreenShotCompareOptions *)((longlong)param_1 + 0x158));
  return __return_storage_ptr__;
}

// Call @ 148c41ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScreenShotManager::CopyDirectory'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FScreenShotManager::CopyDirectory'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 148c41ac0

TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>,TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
::Call(TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *__return_storage_ptr__,
      void *param_1)

{
  `FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 148c41af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c41b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 148c41b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c41b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}

// Call @ 148c41b90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&>
            ((TPromise<FImageComparisonResult> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 148c41bb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&>
            ((TPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
             ((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 148c41bd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 148c41bf0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 148c41c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScreenShotManager::CompareImageSequence'::__l12::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FScreenShotManager::CompareImageSequence'::__l12::<lambda_1>::operator()(param_1,*param_2);
  return;
}

