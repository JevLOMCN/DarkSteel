// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// ~<lambda_1> @ 14dd6b8c0

void __thiscall
`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::
Push<`UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x180));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x170));
  if (*(longlong *)((longlong)this + 0x130) != 0) {
    plVar2 = (longlong *)((longlong)this + 0x140);
    if (*(longlong **)((longlong)this + 0x158) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)this + 0x158);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  puVar1 = *(undefined8 **)((longlong)this + 0x120);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dd6b91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

