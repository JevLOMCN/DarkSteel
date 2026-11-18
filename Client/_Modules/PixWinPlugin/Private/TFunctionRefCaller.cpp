// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PixWinPlugin
// Functions: 2

// Call @ 14e2c54f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPixWinPluginModule::BeginFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPixGraphicsAnalysisInterface *this;
  FString local_18;
  
  this = *(FPixGraphicsAnalysisInterface **)param_1;
  if ((this != (FPixGraphicsAnalysisInterface *)0x0) &&
     (this->WinPixGpuCapturerHandle != (void *)0x0)) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::Impl::FPixGraphicsAnalysisInterface::BeginCapture
              (this,*(HWND__ **)((longlong)param_1 + 8),&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Call @ 14e2c5540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPixWinPluginModule::EndFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  bool bVar1;
  
  if ((*(longlong **)param_1 != (longlong *)0x0) && (**(longlong **)param_1 != 0)) {
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
    ::Impl::FPixGraphicsAnalysisInterface::EndCapture(*(FPixGraphicsAnalysisInterface **)param_1);
    if ((*(byte *)((longlong)param_1 + 8) & 1) != 0) {
      bVar1 = ::Impl::FPixGraphicsAnalysisInterface::IsAttached
                        (*(FPixGraphicsAnalysisInterface **)param_1);
      if (!bVar1) {
        ::Impl::FPixGraphicsAnalysisInterface::OpenCapture
                  (*(FPixGraphicsAnalysisInterface **)param_1,(FString *)((longlong)param_1 + 0x10))
        ;
        return;
      }
    }
  }
  return;
}

