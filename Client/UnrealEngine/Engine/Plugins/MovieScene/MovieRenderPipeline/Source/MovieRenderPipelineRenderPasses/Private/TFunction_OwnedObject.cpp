// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 80

// ~TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0> @ 14ddc9460

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AX__QEAV__TUniquePtr_UFImagePixelData__U__TDefaultDelete_UFImagePixelData______V__TSharedRef_UFMovieGraphSampleState_MovieGraph_UE___00__V__TSharedRef_UIMoviePipelineAccumulationArgs_MoviePipeline___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0> @ 14ddc9480

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0>::
~TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0>
          (TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0> *this)

{
  FImagePixelData *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFColor_____00_0A__Function_Private_Core_UE__6B_
  ;
  pFVar1 = (this->Obj).ImageToComposite.Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc949b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0> @ 14ddc94b0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0>::
~TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0>
          (TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0> *this)

{
  FImagePixelData *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFLinearColor_____00_0A__Function_Private_Core_UE__6B_
  ;
  pFVar1 = (this->Obj).ImageToComposite.Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc94cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0> @ 14ddc94e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0>::
~TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0>
          (TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0> *this)

{
  FImagePixelData *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_VFFloat16Color_____00_0A__Function_Private_Core_UE__6B_
  ;
  pFVar1 = (this->Obj).ImageToComposite.Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc94fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1> @ 14ddc9510

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1>::
~TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1>
          (TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1> *this)

{
  FImagePixelData *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_U__TAsyncCropImage_UFColor_____00_00_Function_Private_Core_UE__6B_
  ;
  pFVar1 = (this->Obj).OutCroppedImage.Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc952b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1> @ 14ddc9540

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1>::
~TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1>
          (TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1> *this)

{
  FImagePixelData *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_U__TAsyncCropImage_UFLinearColor_____00_00_Function_Private_Core_UE__6B_
  ;
  pFVar1 = (this->Obj).OutCroppedImage.Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc955b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1> @ 14ddc9570

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1>::
~TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1>
          (TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1> *this)

{
  FImagePixelData *pFVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_U__TAsyncCropImage_VFFloat16Color_____00_00_Function_Private_Core_UE__6B_
  ;
  pFVar1 = (this->Obj).OutCroppedImage.Ptr;
  if (pFVar1 != (FImagePixelData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ddc958b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0> @ 14ddc95a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0>::
~TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0>
          (TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFAsyncImageQuantization_MoviePipeline_UE___00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14ddd90d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AX__QEAV__TUniquePtr_UFImagePixelData__U__TDefaultDelete_UFImagePixelData______V__TSharedRef_UFMovieGraphSampleState_MovieGraph_UE___00__V__TSharedRef_UIMoviePipelineAccumulationArgs_MoviePipeline___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_ptr_TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>_TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>
    **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ddd90f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0> *this,
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

// CloneToEmptyStorage @ 14ddd9130

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0> *this,
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

// CloneToEmptyStorage @ 14ddd9170

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0> *this,
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

// CloneToEmptyStorage @ 14ddd91b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1>::CloneToEmptyStorage
          (TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1> *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14ddd91f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1>::
CloneToEmptyStorage(TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1> *this,
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

// CloneToEmptyStorage @ 14ddd9230

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1>::
CloneToEmptyStorage(TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1> *this,
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

// CloneToEmptyStorage @ 14ddd9270

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0> *this,
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

// CloneToEmptyStorage @ 14ddd92b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14ddd92f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14ddd9330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  lVar1 = *(longlong *)((longlong)this + 0x38);
  puVar2[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14ddd93d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x78,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  ::MoviePipeline::FImageSampleAccumulationArgs::FImageSampleAccumulationArgs
            ((FImageSampleAccumulationArgs *)(puVar2 + 4),
             (FImageSampleAccumulationArgs *)((longlong)this + 0x20));
  puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
  lVar1 = *(longlong *)((longlong)this + 0x70);
  puVar2[0xe] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14ddd9460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14ddd94a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14ddd94e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14ddd9520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEXRImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ddd9560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEXRImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 14ddd95a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14ddd95e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14ddd9620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14ddd9660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::__l53::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::`53'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14ddd9680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 14ddd96c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>,1,1>
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

// CloneToEmptyStorage @ 14ddd9700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::<lambda_2>,1,0>
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

// Destroy @ 14dddab10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddab15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14dddab20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0>::Destroy
          (TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddab25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14dddab30

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0>::Destroy
          (TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddab35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14dddab40

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0>::Destroy
          (TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddab45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14dddab50

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1>::Destroy
          (TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1> *this)

{
  (**(code **)(this->_padding_ + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddab80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1>::Destroy
          (TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1> *this)

{
  (**(code **)(this->_padding_ + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddabb0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1>::Destroy
          (TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1> *this)

{
  (**(code **)(this->_padding_ + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddabe0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0>::
Destroy(TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddabe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14dddabf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddac20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddac50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddac80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddacb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddace0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddad10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddad40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEXRImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddad70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEXRImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddada0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddada5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dddadb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddadb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dddadc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddadc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dddadd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::__l53::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddadd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14dddade0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddae10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14dddae40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014dddae45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14dddf0b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf0c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0>::GetAddress
          (TFunction_OwnedObject<TAsyncCompositeImage<FColor>,1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf0d0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0>::
GetAddress(TFunction_OwnedObject<TAsyncCompositeImage<FLinearColor>,1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf0e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0>::
GetAddress(TFunction_OwnedObject<TAsyncCompositeImage<FFloat16Color>,1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf0f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1>::GetAddress
          (TFunction_OwnedObject<TAsyncCropImage<FColor>,1,1> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf100

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1>::GetAddress
          (TFunction_OwnedObject<TAsyncCropImage<FLinearColor>,1,1> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf110

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1>::GetAddress
          (TFunction_OwnedObject<TAsyncCropImage<FFloat16Color>,1,1> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf120

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0>::
GetAddress(TFunction_OwnedObject<UE::MoviePipeline::FAsyncImageQuantization,1,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14dddf130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEXRImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14dddf1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEXRImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14dddf1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf1f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::__l53::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14dddf220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

