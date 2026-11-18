// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 3

// Call @ 14eb0bd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,ID3D12CommandQueue_*>
::Call(void *param_1,ID3D12CommandQueue **param_2)

{
  ```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'
  ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14eb0bd20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,ID3D12CommandQueue_*>
::Call(void *param_1,ID3D12CommandQueue **param_2)

{
  ``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::
  <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14eb0bd30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TArrayView<UE::NNE::FTensorShape_const_,int> local_18;
  
  local_18.DataPtr = *(FTensorShape **)((longlong)param_1 + 8);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread
            (*(FModelInstanceORTDmlRDG **)param_1,&local_18);
                    /* WARNING: Could not recover jumptable at 0x00014eb0bd5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
  return;
}

