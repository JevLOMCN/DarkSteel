// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ExecuteTask @ 14dddbbe0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  ``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()((longlong *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x110) != 0) {
    plVar2 = (longlong *)((longlong)this + 0x120);
    if (*(longlong **)((longlong)this + 0x138) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)this + 0x138);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x100));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  puVar1 = *(undefined8 **)((longlong)this + 0xe0);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dddbc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ExecuteTask @ 14dddbc50

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  ``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()((longlong *)((longlong)this + 0xe0));
  if (*(longlong *)((longlong)this + 0x110) != 0) {
    plVar2 = (longlong *)((longlong)this + 0x120);
    if (*(longlong **)((longlong)this + 0x138) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)this + 0x138);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x100));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xf0));
  puVar1 = *(undefined8 **)((longlong)this + 0xe0);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dddbcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

