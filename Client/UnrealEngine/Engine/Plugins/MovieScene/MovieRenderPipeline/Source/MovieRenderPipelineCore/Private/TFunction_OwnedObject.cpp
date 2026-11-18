// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 31

// CloneToEmptyStorage @ 14dc78c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::`147'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 14dc7d6c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14dc7ec00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphConfig::CreateFlattenedGraph'::__l147::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0> @ 14dcb1450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0>::
~TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0>
          (TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0> *this)

{
  TPimplPtr<FOpenColorIOProcessorPimpl,1> TVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFOpenColorIOPixelPreProcessor_FMovieGraphOCIOHelper___00_0A__Function_Private_Core_UE__6B_
  ;
  TVar1 = (this->Obj).Processor.Pimpl;
  if (TVar1 != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dcb146b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
    return;
  }
  return;
}

// CloneToEmptyStorage @ 14dcbe670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0> *this,
          FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14dcbe6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14dcbe6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14dcc0280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0>::Destroy
          (TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dcc0285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14dcc0290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dcc02c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dcc02c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14dcca570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0>::GetAddress
          (TFunction_OwnedObject<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dcca580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::FMovieGraphOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dcca590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphDefaultRenderer::FlushAsyncEngineSystems'::__l18::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14dd18a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14dd19f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14dd22f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14dd7b0f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14dd7b130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14dd7b170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14dd7b1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14dd7b1f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14dd7e870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd7e875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dd7e880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd7e885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dd7e890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd7e895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dd7e8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd7e8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dd7e8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd7e8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14dd85cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::FlushAsyncEngineSystems'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dd85d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineOutputMerger::OnSingleSampleDataAvailable_AnyThread'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dd85d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dd85d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dd85d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipeline::RenderFrame'::__l122::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

