// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 27

// Call @ 14ddd8d80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>_>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2,
      TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *param_3,
      TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *param_4)

{
  code *pcVar1;
  IMoviePipelineAccumulationArgs *local_28;
  TReferenceControllerBase<1> *local_20;
  FMovieGraphSampleState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)param_1;
  local_28 = param_4->Object;
  local_20 = (param_4->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = param_3->Object;
  local_10 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(param_2,&local_18,&local_28);
  return;
}

// Call @ 14ddd8df0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<TAsyncCompositeImage<FColor>,void,FImagePixelData_*>
::Call(void *param_1,FImagePixelData **param_2)

{
  TAsyncCompositeImage<FColor>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TAsyncCompositeImage<FLinearColor>,void,FImagePixelData_*>::Call
          (void *param_1,FImagePixelData **param_2)

{
  TAsyncCompositeImage<FLinearColor>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TAsyncCompositeImage<FFloat16Color>,void,FImagePixelData_*>::Call
          (void *param_1,FImagePixelData **param_2)

{
  TAsyncCompositeImage<FFloat16Color>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e20

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<TAsyncCropImage<FColor>,void,FImagePixelData_*>::
Call(void *param_1,FImagePixelData **param_2)

{
  TAsyncCropImage<FColor>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TAsyncCropImage<FLinearColor>,void,FImagePixelData_*>::Call
          (void *param_1,FImagePixelData **param_2)

{
  TAsyncCropImage<FLinearColor>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TAsyncCropImage<FFloat16Color>,void,FImagePixelData_*>::Call
          (void *param_1,FImagePixelData **param_2)

{
  TAsyncCropImage<FFloat16Color>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::MoviePipeline::FAsyncImageQuantization,void,FImagePixelData_*>::Call
          (void *param_1,FImagePixelData **param_2)

{
  MoviePipeline::FAsyncImageQuantization::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  ::MoviePipeline::AccumulateSample_TaskThread
            (param_1,(FImageSampleAccumulationArgs *)((longlong)param_1 + 8));
  if (*(char *)((longlong)param_1 + 0x50) != '\0') {
    if (*(longlong *)((longlong)param_1 + 0x58) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar3 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 0x58) + 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x58) + 0x40) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (*(longlong *)((longlong)param_1 + 0x58) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x58) + 0x38) = 0;
    UNLOCK();
  }
  return;
}

// Call @ 14ddd8e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  ::MoviePipeline::AccumulateSample_TaskThread
            (param_1,(FImageSampleAccumulationArgs *)((longlong)param_1 + 8));
  if (*(char *)((longlong)param_1 + 0x50) != '\0') {
    if (*(longlong *)((longlong)param_1 + 0x58) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x58) + 0x38) = 0;
    UNLOCK();
    if (*(longlong *)((longlong)param_1 + 0x58) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar3 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 0x58) + 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x58) + 0x40) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ddccb91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
    }
  }
  return;
}

// Call @ 14ddd8e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddcd8f0) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  int *piVar1;
  int iVar2;
  EImagePixelType EVar3;
  FImagePixelData *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  longlong *plVar10;
  FTaskBase *pFVar11;
  undefined1 auStackY_158 [32];
  ETaskFlags in_stack_fffffffffffffed0;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TStack_118;
  undefined8 *puStack_110;
  TIntPoint<int>_u_0 TStack_108;
  TIntPoint<int>_u_0 TStack_100;
  TIntPoint<int>_u_0 TStack_f8;
  TSharedPtr<IImagePixelDataPayload,1> TStack_f0;
  TSharedPtr<IImagePixelDataPayload,1> TStack_e0;
  TSharedPtr<IImagePixelDataPayload,1> TStack_d0;
  FTaskHandle FStack_b8;
  undefined8 uStack_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  undefined8 uStack_a0;
  TReferenceControllerBase<1> *pTStack_98;
  longlong lStack_88;
  longlong alStack_78 [3];
  longlong *plStack_60;
  longlong alStack_58 [2];
  longlong alStack_48 [3];
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar11 = (FTaskBase *)0x0;
  TStack_118.Reference = (FTaskBase *)0x0;
  pFVar4 = param_2->Ptr;
  EVar3 = pFVar4->Type;
  if (EVar3 == Color) {
    TStack_f8 = (pFVar4->Size).field0_0x0;
    TStack_100 = (TIntPoint<int>_u_0)::operator_new(0x40);
    TStack_118.Reference = pFVar11;
    if (TStack_100 != (TIntPoint<int>_u_0)0x0) {
      TStack_d0.Object = *(IImagePixelDataPayload **)((longlong)param_1 + 0x18);
      TStack_d0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
      if (TStack_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_118.Reference =
           (FTaskBase *)
           TImagePixelData<FColor>::TImagePixelData<FColor>
                     ((TImagePixelData<FColor> *)TStack_100,(TIntPoint<int> *)&TStack_f8._s_0,
                      (TArray<FColor,TSizedDefaultAllocator<64>_> *)(pFVar4 + 1),&TStack_d0);
    }
  }
  else if (EVar3 == Float16) {
    TStack_100 = (pFVar4->Size).field0_0x0;
    TStack_f8 = (TIntPoint<int>_u_0)::operator_new(0x40);
    TStack_118.Reference = pFVar11;
    if (TStack_f8 != (TIntPoint<int>_u_0)0x0) {
      TStack_e0.Object = *(IImagePixelDataPayload **)((longlong)param_1 + 0x18);
      TStack_e0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
      if (TStack_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_118.Reference =
           (FTaskBase *)
           TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                     ((TImagePixelData<FFloat16Color> *)TStack_f8,(TIntPoint<int> *)&TStack_100._s_0
                      ,(TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)(pFVar4 + 1),&TStack_e0)
      ;
    }
  }
  else if (EVar3 == Float32) {
    TStack_108 = (pFVar4->Size).field0_0x0;
    TStack_f8 = (TIntPoint<int>_u_0)::operator_new(0x40);
    TStack_118.Reference = pFVar11;
    if (TStack_f8 != (TIntPoint<int>_u_0)0x0) {
      TStack_f0.Object = *(IImagePixelDataPayload **)((longlong)param_1 + 0x18);
      TStack_f0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
      if (TStack_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_118.Reference =
           (FTaskBase *)
           TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                     ((TImagePixelData<FLinearColor> *)TStack_f8,(TIntPoint<int> *)&TStack_108._s_0,
                      (TArray<FLinearColor,TSizedDefaultAllocator<64>_> *)(pFVar4 + 1),&TStack_f0);
    }
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
                       ,0x253,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  (**(code **)(**(longlong **)param_1 + 200))(*(longlong **)param_1,alStack_58);
  lVar5 = *(longlong *)((longlong)param_1 + 0x28);
  if ((*(longlong *)(lVar5 + 0x10) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  FStack_b8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TStack_118.Reference;
  uStack_b0 = *(undefined8 *)((longlong)param_1 + 8);
  pTStack_a8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTStack_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a8->SharedReferenceCount = (atomic<int>)((int)pTStack_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_a0 = *(undefined8 *)((longlong)param_1 + 0x28);
  pTStack_98 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30);
  if (pTStack_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_98->SharedReferenceCount = (atomic<int>)((int)pTStack_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  lStack_88 = alStack_58[0];
  plStack_60 = (longlong *)0x0;
  if (alStack_58[0] != 0) {
    plVar10 = alStack_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar10 = plStack_30;
    }
    (**(code **)*plVar10)(plVar10,alStack_78);
  }
  Tasks::
  Launch<__UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>
            ((wchar_t *)&puStack_110,
             (<lambda_1> *)
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp(600)"
             ,&FStack_b8,(char)uVar6 + 0x60,Inline,in_stack_fffffffffffffed0 & 0xffffff00);
  if (lStack_88 != 0) {
    plVar10 = alStack_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar10 = plStack_60;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a8);
  if (FStack_b8.Pimpl.Reference != (FTaskBase *)0x0) {
    (*(code *)**(undefined8 **)FStack_b8.Pimpl.Reference)(FStack_b8.Pimpl.Reference,1);
  }
  lVar5 = *(longlong *)((longlong)param_1 + 0x28);
  if ((*(longlong *)(lVar5 + 0x10) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x10);
  puVar7 = *(undefined8 **)(lVar5 + 0x60);
  if (puVar7 != puStack_110) {
    *(undefined8 **)(lVar5 + 0x60) = puStack_110;
    if (puStack_110 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puStack_110 + 6) = *(int *)(puStack_110 + 6) + 1;
      UNLOCK();
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if (puStack_110 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_110 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puStack_110)(puStack_110,1);
    }
  }
  if (alStack_58[0] != 0) {
    plVar10 = alStack_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar10 = plStack_30;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// Call @ 14ddd8e90

/* WARNING: Removing unreachable block (ram,0x00014ddcde06) */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  int *piVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar2;
  uchar *puVar3;
  EImagePixelType EVar4;
  FImagePixelData *pFVar5;
  longlong lVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  FMoviePipelineBackgroundAccumulateTask FVar11;
  FMoviePipelineBackgroundAccumulateTask FVar12;
  bool bVar13;
  int iVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar15;
  TImagePixelData<FLinearColor> *pTVar16;
  undefined1 uVar17;
  TImagePixelData<FLinearColor> *pTStackX_8;
  FMoviePipelineBackgroundAccumulateTask FStackX_10;
  TIntPoint<int>_u_0 TStackX_18;
  TIntPoint<int>_u_0 TStackX_20;
  undefined1 auStack_128 [8];
  TIntPoint<int>_u_0 TStack_120;
  TSharedPtr<IImagePixelDataPayload,1> TStack_118;
  TSharedPtr<IImagePixelDataPayload,1> TStack_108;
  TSharedPtr<IImagePixelDataPayload,1> TStack_f8;
  TImagePixelData<FLinearColor> *pTStack_e8;
  FImageSampleAccumulationArgs FStack_e0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  code *pcStack_78;
  undefined8 *puStack_50;
  
  pTVar16 = (TImagePixelData<FLinearColor> *)0x0;
  pTStackX_8 = (TImagePixelData<FLinearColor> *)0x0;
  pFVar5 = param_2->Ptr;
  EVar4 = pFVar5->Type;
  if (EVar4 == Color) {
    TStack_120 = (pFVar5->Size).field0_0x0;
    TStackX_18 = (TIntPoint<int>_u_0)::operator_new(0x40);
    pTStackX_8 = pTVar16;
    if (TStackX_18 != (TIntPoint<int>_u_0)0x0) {
      TStack_f8.Object = *(IImagePixelDataPayload **)((longlong)param_1 + 8);
      TStack_f8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      if (TStack_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTStackX_8 = (TImagePixelData<FLinearColor> *)
                   TImagePixelData<FColor>::TImagePixelData<FColor>
                             ((TImagePixelData<FColor> *)TStackX_18,
                              (TIntPoint<int> *)&TStack_120._s_0,
                              (TArray<FColor,TSizedDefaultAllocator<64>_> *)(pFVar5 + 1),&TStack_f8)
      ;
    }
  }
  else if (EVar4 == Float16) {
    TStackX_20 = (pFVar5->Size).field0_0x0;
    TStackX_18 = (TIntPoint<int>_u_0)::operator_new(0x40);
    pTStackX_8 = pTVar16;
    if (TStackX_18 != (TIntPoint<int>_u_0)0x0) {
      TStack_108.Object = *(IImagePixelDataPayload **)((longlong)param_1 + 8);
      TStack_108.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      if (TStack_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTStackX_8 = (TImagePixelData<FLinearColor> *)
                   TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                             ((TImagePixelData<FFloat16Color> *)TStackX_18,
                              (TIntPoint<int> *)&TStackX_20._s_0,
                              (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)(pFVar5 + 1),
                              &TStack_108);
    }
  }
  else if (EVar4 == Float32) {
    TStackX_18 = (pFVar5->Size).field0_0x0;
    TStackX_20 = (TIntPoint<int>_u_0)::operator_new(0x40);
    pTStackX_8 = pTVar16;
    if (TStackX_20 != (TIntPoint<int>_u_0)0x0) {
      TStack_118.Object = *(IImagePixelDataPayload **)((longlong)param_1 + 8);
      TStack_118.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      if (TStack_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTStackX_8 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                             ((TImagePixelData<FLinearColor> *)TStackX_20,
                              (TIntPoint<int> *)&TStackX_18._s_0,
                              (TArray<FLinearColor,TSizedDefaultAllocator<64>_> *)(pFVar5 + 1),
                              &TStack_118);
    }
  }
  else {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineDeferredPasses.cpp"
                        ,0x39f,L"");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar6 = *(longlong *)((longlong)param_1 + 8);
  if ((((*(int *)(lVar6 + 0x38) == *(int *)(lVar6 + 0x30) + -1) &&
       (*(int *)(lVar6 + 0x3c) == *(int *)(lVar6 + 0x34) + -1)) &&
      (*(int *)(lVar6 + 0x70) == *(int *)(lVar6 + 0x6c) + -1)) &&
     (*(int *)(lVar6 + 0x7c) == *(int *)(lVar6 + 0x78) + -1)) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  FStackX_10.LastCompletionEvent.Reference = (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)0x0;
  if ((*(longlong *)((longlong)param_1 + 0x60) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar11.LastCompletionEvent.Reference = FStackX_10.LastCompletionEvent.Reference;
  TVar7.Reference = *(FBaseGraphTask **)(*(longlong *)((longlong)param_1 + 0x60) + 0x40);
  FVar12.LastCompletionEvent.Reference = FStackX_10.LastCompletionEvent.Reference;
  if (FStackX_10.LastCompletionEvent.Reference != (TRefCountPtr<FBaseGraphTask>)TVar7.Reference) {
    if (TVar7.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(TVar7.Reference)->field_0x30 = *(int *)&(TVar7.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FVar12.LastCompletionEvent.Reference =
         (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
    if (FStackX_10.LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FStackX_10.LastCompletionEvent.Reference + 0x30);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        puVar8 = *(undefined8 **)FStackX_10.LastCompletionEvent.Reference;
        FStackX_10.LastCompletionEvent.Reference =
             (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar7.Reference;
        (*(code *)*puVar8)(FVar11.LastCompletionEvent.Reference,1);
        FVar12.LastCompletionEvent.Reference = FStackX_10.LastCompletionEvent.Reference;
      }
    }
  }
  FStackX_10.LastCompletionEvent.Reference = FVar12.LastCompletionEvent.Reference;
  pTStack_e8 = pTStackX_8;
  ::MoviePipeline::FImageSampleAccumulationArgs::FImageSampleAccumulationArgs
            (&FStack_e0,(FImageSampleAccumulationArgs *)((longlong)param_1 + 0x18));
  uVar9 = *(undefined8 *)((longlong)param_1 + 0x60);
  lVar6 = *(longlong *)((longlong)param_1 + 0x68);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  pcStack_78 = (code *)0x0;
  puStack_50 = (undefined8 *)0x0;
  uStack_98 = uVar17;
  uStack_90 = uVar9;
  lStack_88 = lVar6;
  puStack_50 = FMemory::Malloc(0x70,8);
  *puStack_50 = &TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
  puStack_50[1] = pTStack_e8;
  pTStack_e8 = (TImagePixelData<FLinearColor> *)0x0;
  puStack_50[2] = FStack_e0.ImageAccumulator.Object;
  puStack_50[3] = FStack_e0.ImageAccumulator.WeakReferenceCount.ReferenceController;
  FStack_e0.ImageAccumulator.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_e0.ImageAccumulator.Object = (FImageOverlappedAccumulator *)0x0;
  puStack_50[4] = FStack_e0.OutputMerger.Object;
  puStack_50[5] = FStack_e0.OutputMerger.WeakReferenceCount.ReferenceController;
  FStack_e0.OutputMerger.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FStack_e0.OutputMerger.Object = (IMoviePipelineOutputMerger *)0x0;
  *(bool *)(puStack_50 + 6) = FStack_e0.bAccumulateAlpha;
  *(TIntPoint<int> *)((longlong)puStack_50 + 0x34) =
       FStack_e0.LetterboxData.FrameActiveArea.field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int> *)((longlong)puStack_50 + 0x3c) =
       FStack_e0.LetterboxData.FrameActiveArea.field0_0x0._s_0.Max.field0_0x0;
  *(bool *)((longlong)puStack_50 + 0x44) = FStack_e0.LetterboxData.bDrawLetterboxBorder;
  *(int *)(puStack_50 + 9) = FStack_e0.LetterboxData.LeftSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)puStack_50 + 0x4c) =
       FStack_e0.LetterboxData.RightSamplePixelsClearedBeforeAccumulation;
  *(int *)(puStack_50 + 10) = FStack_e0.LetterboxData.TopSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)puStack_50 + 0x54) =
       FStack_e0.LetterboxData.BottomSamplePixelsClearedBeforeAccumulation;
  *(undefined1 *)(puStack_50 + 0xb) = uVar17;
  puStack_50[0xc] = uVar9;
  puStack_50[0xd] = lVar6;
  lStack_88 = 0;
  uStack_90 = 0;
  if (puStack_50 + 1 != (undefined8 *)0x0) {
    pcStack_78 = TFunctionRefCaller<``UMoviePipelineDeferredPassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                 ::Call;
  }
  FMoviePipelineBackgroundAccumulateTask::Execute
            (&FStackX_10,(TUniqueFunction<void___cdecl(void)> *)auStack_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((*(longlong *)((longlong)param_1 + 0x60) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  puVar8 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 0x60) + 0x40);
  if ((undefined1  [8])puVar8 != auStack_128) {
    *(undefined1 (*) [8])(*(longlong *)((longlong)param_1 + 0x60) + 0x40) = auStack_128;
    if (auStack_128 != (undefined1  [8])0x0) {
      LOCK();
      *(int *)((longlong)auStack_128 + 0x30) = *(int *)((longlong)auStack_128 + 0x30) + 1;
      UNLOCK();
    }
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar8 + 6);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  }
  lVar6 = *(longlong *)param_1;
  pFVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(lVar6 + 0x148);
  pFVar15 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar15 = pFVar2;
  }
  if (((pFVar15 <= (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)auStack_128) &&
      (auStack_128 < pFVar15->InlineData + (longlong)*(int *)(lVar6 + 0x174) * 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar14 = *(int *)(lVar6 + 0x170);
  if (iVar14 == *(int *)(lVar6 + 0x174)) {
    iVar14 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,pFVar2,(int *)(lVar6 + 0x174));
  }
  *(int *)(lVar6 + 0x170) = iVar14 + 1;
  pFVar15 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar6 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar15 = pFVar2;
  }
  puVar3 = pFVar15->InlineData + (longlong)iVar14 * 8;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *(undefined1 (*) [8])puVar3 = auStack_128;
  if (auStack_128 != (undefined1  [8])0x0) {
    LOCK();
    *(int *)((longlong)auStack_128 + 0x30) = *(int *)((longlong)auStack_128 + 0x30) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)auStack_128 + 0x30);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar14 == 1) && (auStack_128 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)auStack_128)(auStack_128,1);
    }
  }
  if (FStackX_10.LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FStackX_10.LastCompletionEvent.Reference + 0x30);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (*(code *)**(undefined8 **)FStackX_10.LastCompletionEvent.Reference)
                (FStackX_10.LastCompletionEvent.Reference,1);
    }
  }
  return;
}

// Call @ 14ddd8ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>,void,FLinearColor_*,UE::Math::TIntPoint<int>_>
::Call(void *param_1,FLinearColor **param_2,TIntPoint<int> *param_3)

{
  `UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::
  OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>::operator()
            (param_1,*param_2,(TIntPoint<int>)(param_3->field0_0x0)._s_0);
  return;
}

// Call @ 14ddd8ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  UMovieGraphDefaultRenderer *this;
  longlong *plVar8;
  undefined1 auStackY_118 [32];
  ETaskFlags in_stack_ffffffffffffff10;
  undefined1 auStack_d8 [8];
  undefined8 *puStack_d0;
  undefined8 *apuStack_c8 [2];
  FTaskHandle FStack_b8;
  undefined8 uStack_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  undefined8 uStack_a0;
  TReferenceControllerBase<1> *pTStack_98;
  longlong lStack_88;
  longlong alStack_78 [3];
  longlong *plStack_60;
  longlong alStack_58 [2];
  longlong alStack_48 [3];
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  (**(code **)(**(longlong **)param_1 + 200))(*(longlong **)param_1,alStack_58);
  lVar3 = *(longlong *)((longlong)param_1 + 0x18);
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  FStack_b8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_2->Ptr;
  param_2->Ptr = (FImagePixelData *)0x0;
  uStack_b0 = *(undefined8 *)((longlong)param_1 + 8);
  pTStack_a8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTStack_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_a8->SharedReferenceCount = (atomic<int>)((int)pTStack_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_a0 = *(undefined8 *)((longlong)param_1 + 0x18);
  pTStack_98 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
  if (pTStack_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_98->SharedReferenceCount = (atomic<int>)((int)pTStack_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  lStack_88 = alStack_58[0];
  plStack_60 = (longlong *)0x0;
  if (alStack_58[0] != 0) {
    plVar8 = alStack_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)*plVar8)(plVar8,alStack_78);
  }
  Tasks::
  Launch<__UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>
            ((wchar_t *)&puStack_d0,
             (<lambda_1> *)
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp(507)"
             ,&FStack_b8,(char)uVar4 + 0x60,Inline,in_stack_ffffffffffffff10 & 0xffffff00);
  if (lStack_88 != 0) {
    plVar8 = alStack_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar8 = plStack_60;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a8);
  if (FStack_b8.Pimpl.Reference != (FTaskBase *)0x0) {
    (*(code *)**(undefined8 **)FStack_b8.Pimpl.Reference)(FStack_b8.Pimpl.Reference,1);
  }
  lVar3 = *(longlong *)((longlong)param_1 + 0x18);
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  puVar5 = *(undefined8 **)(lVar3 + 0x60);
  if (puVar5 != puStack_d0) {
    *(undefined8 **)(lVar3 + 0x60) = puStack_d0;
    if (puStack_d0 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puStack_d0 + 6) = *(int *)(puStack_d0 + 6) + 1;
      UNLOCK();
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar5)();
      }
    }
  }
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)param_1 + 8),false,true);
  if (!bVar7) {
    bVar7 = ``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::
            <lambda_1>::operator()'::__l2::<lambda_2>::operator()(auStack_d8);
    if (!bVar7) goto LAB_14ddce3f3;
  }
  this = (UMovieGraphDefaultRenderer *)
         FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(*(longlong *)param_1 + 8));
  apuStack_c8[0] = puStack_d0;
  if (puStack_d0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStack_d0 + 6) = *(int *)(puStack_d0 + 6) + 1;
    UNLOCK();
  }
  UMovieGraphDefaultRenderer::AddOutstandingRenderTask_AnyThread(this,(FTaskHandle)apuStack_c8);
LAB_14ddce3f3:
  if (puStack_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_d0 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puStack_d0)(puStack_d0,1);
    }
  }
  if (alStack_58[0] != 0) {
    plVar8 = alStack_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// Call @ 14ddd8ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  int *piVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar2;
  uchar *puVar3;
  longlong lVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  FMoviePipelineBackgroundAccumulateTask FVar9;
  FMoviePipelineBackgroundAccumulateTask FVar10;
  bool bVar11;
  int iVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar13;
  undefined1 uVar14;
  FMoviePipelineBackgroundAccumulateTask aFStackX_8 [2];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  FImageSampleAccumulationArgs FStack_b8;
  undefined1 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  code *pcStack_58;
  undefined8 *puStack_30;
  
  lVar4 = *(longlong *)((longlong)param_1 + 8);
  if ((((*(int *)(lVar4 + 0x38) == *(int *)(lVar4 + 0x30) + -1) &&
       (*(int *)(lVar4 + 0x3c) == *(int *)(lVar4 + 0x34) + -1)) &&
      (*(int *)(lVar4 + 0x70) == *(int *)(lVar4 + 0x6c) + -1)) &&
     (*(int *)(lVar4 + 0x7c) == *(int *)(lVar4 + 0x78) + -1)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  aFStackX_8[0].LastCompletionEvent.Reference = (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)0x0;
  if ((*(longlong *)((longlong)param_1 + 0x60) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar9.LastCompletionEvent.Reference = aFStackX_8[0].LastCompletionEvent.Reference;
  TVar5.Reference = *(FBaseGraphTask **)(*(longlong *)((longlong)param_1 + 0x60) + 0x40);
  FVar10.LastCompletionEvent.Reference = aFStackX_8[0].LastCompletionEvent.Reference;
  if (aFStackX_8[0].LastCompletionEvent.Reference != (TRefCountPtr<FBaseGraphTask>)TVar5.Reference)
  {
    if (TVar5.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(TVar5.Reference)->field_0x30 = *(int *)&(TVar5.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FVar10.LastCompletionEvent.Reference =
         (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
    if (aFStackX_8[0].LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)aFStackX_8[0].LastCompletionEvent.Reference + 0x30);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        puVar6 = *(undefined8 **)aFStackX_8[0].LastCompletionEvent.Reference;
        aFStackX_8[0].LastCompletionEvent.Reference =
             (TRefCountPtr<FBaseGraphTask>)(TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
        (*(code *)*puVar6)(FVar9.LastCompletionEvent.Reference,1);
        FVar10.LastCompletionEvent.Reference = aFStackX_8[0].LastCompletionEvent.Reference;
      }
    }
  }
  aFStackX_8[0].LastCompletionEvent.Reference = FVar10.LastCompletionEvent.Reference;
  uStack_c0 = param_2->Ptr;
  param_2->Ptr = (FImagePixelData *)0x0;
  ::MoviePipeline::FImageSampleAccumulationArgs::FImageSampleAccumulationArgs
            (&FStack_b8,(FImageSampleAccumulationArgs *)((longlong)param_1 + 0x18));
  uVar7 = *(undefined8 *)((longlong)param_1 + 0x60);
  lVar4 = *(longlong *)((longlong)param_1 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  pcStack_58 = (code *)0x0;
  puStack_30 = (undefined8 *)0x0;
  uStack_70 = uVar14;
  uStack_68 = uVar7;
  lStack_60 = lVar4;
  puStack_30 = FMemory::Malloc(0x70,8);
  *puStack_30 = &TFunction_OwnedObject<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
  puStack_30[1] = uStack_c0;
  uStack_c0 = (FImagePixelData *)0x0;
  puStack_30[2] = FStack_b8.ImageAccumulator.Object;
  puStack_30[3] = FStack_b8.ImageAccumulator.WeakReferenceCount.ReferenceController;
  FStack_b8.ImageAccumulator.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_b8.ImageAccumulator.Object = (FImageOverlappedAccumulator *)0x0;
  *(IMoviePipelineOutputMerger **)(puStack_30 + 4) = FStack_b8.OutputMerger.Object;
  puStack_30[5] = FStack_b8.OutputMerger.WeakReferenceCount.ReferenceController;
  FStack_b8.OutputMerger.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FStack_b8.OutputMerger.Object = (IMoviePipelineOutputMerger *)0x0;
  *(bool *)(puStack_30 + 6) = FStack_b8.bAccumulateAlpha;
  *(TIntPoint<int> *)((longlong)puStack_30 + 0x34) =
       FStack_b8.LetterboxData.FrameActiveArea.field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int> *)((longlong)puStack_30 + 0x3c) =
       FStack_b8.LetterboxData.FrameActiveArea.field0_0x0._s_0.Max.field0_0x0;
  *(bool *)((longlong)puStack_30 + 0x44) = FStack_b8.LetterboxData.bDrawLetterboxBorder;
  *(int *)(puStack_30 + 9) = FStack_b8.LetterboxData.LeftSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)puStack_30 + 0x4c) =
       FStack_b8.LetterboxData.RightSamplePixelsClearedBeforeAccumulation;
  *(int *)(puStack_30 + 10) = FStack_b8.LetterboxData.TopSamplePixelsClearedBeforeAccumulation;
  *(int *)((longlong)puStack_30 + 0x54) =
       FStack_b8.LetterboxData.BottomSamplePixelsClearedBeforeAccumulation;
  *(undefined1 *)(puStack_30 + 0xb) = uVar14;
  puStack_30[0xc] = uVar7;
  puStack_30[0xd] = lVar4;
  lStack_60 = 0;
  uStack_68 = 0;
  if (puStack_30 + 1 != (undefined8 *)0x0) {
    pcStack_58 = TFunctionRefCaller<``UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                 ::Call;
  }
  FMoviePipelineBackgroundAccumulateTask::Execute
            (aFStackX_8,(TUniqueFunction<void___cdecl(void)> *)auStack_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((*(longlong *)((longlong)param_1 + 0x60) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar6 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 0x60) + 0x40);
  if ((undefined1  [8])puVar6 != auStack_c8) {
    *(undefined1 (*) [8])(*(longlong *)((longlong)param_1 + 0x60) + 0x40) = auStack_c8;
    if (auStack_c8 != (undefined1  [8])0x0) {
      LOCK();
      *(int *)((longlong)auStack_c8 + 0x30) = *(int *)((longlong)auStack_c8 + 0x30) + 1;
      UNLOCK();
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 6);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  lVar4 = *(longlong *)param_1;
  pFVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)(lVar4 + 0x148);
  pFVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar13 = pFVar2;
  }
  if (((pFVar13 <= (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)auStack_c8) &&
      (auStack_c8 < pFVar13->InlineData + (longlong)*(int *)(lVar4 + 0x174) * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = *(int *)(lVar4 + 0x170);
  if (iVar12 == *(int *)(lVar4 + 0x174)) {
    iVar12 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,pFVar2,(int *)(lVar4 + 0x174));
  }
  *(int *)(lVar4 + 0x170) = iVar12 + 1;
  pFVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)(lVar4 + 0x168) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
    pFVar13 = pFVar2;
  }
  puVar3 = pFVar13->InlineData + (longlong)iVar12 * 8;
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *(undefined1 (*) [8])puVar3 = auStack_c8;
  if (auStack_c8 != (undefined1  [8])0x0) {
    LOCK();
    *(int *)((longlong)auStack_c8 + 0x30) = *(int *)((longlong)auStack_c8 + 0x30) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)auStack_c8 + 0x30);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar12 == 1) && (auStack_c8 != (undefined1  [8])0x0)) {
      (*(code *)**(undefined8 **)auStack_c8)(auStack_c8,1);
    }
  }
  if (aFStackX_8[0].LastCompletionEvent.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)aFStackX_8[0].LastCompletionEvent.Reference + 0x30);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (*(code *)**(undefined8 **)aFStackX_8[0].LastCompletionEvent.Reference)
                (aFStackX_8[0].LastCompletionEvent.Reference,1);
    }
  }
  return;
}

// Call @ 14ddd8ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEXRImageWriteTask::OnAbandoned'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 14ddd8f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEXRImageWriteTask::RunTask'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = *(undefined1 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar1 = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 14ddd8f90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> TStack_48;
  FRHITransitionInfo FStack_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)param_1 + 0x10))();
  TStack_48.ArrayNum = 1;
  FStack_38.field1_0x8 = *pFVar1;
  FStack_38._padding_._4_2_ = 0xffff;
  TStack_48.DataPtr = &FStack_38;
  FStack_38._padding_._0_4_ = 0xffffffff;
  FStack_38.Type = Texture;
  FStack_38.AccessBefore = RTV;
  FStack_38.AccessAfter = SRVGraphicsPixel;
  FStack_38.Flags = None;
  FStack_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_48,None);
  return;
}

// Call @ 14ddd8fa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> TStack_48;
  FRHITransitionInfo FStack_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)param_1 + 0x10))();
  TStack_48.ArrayNum = 1;
  FStack_38.field1_0x8 = *pFVar1;
  FStack_38._padding_._4_2_ = 0xffff;
  TStack_48.DataPtr = &FStack_38;
  FStack_38._padding_._0_4_ = 0xffffffff;
  FStack_38.Type = Texture;
  FStack_38.AccessBefore = RTV;
  FStack_38.AccessAfter = SRVGraphicsPixel;
  FStack_38.Flags = None;
  FStack_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_48,None);
  return;
}

// Call @ 14ddd8fb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphDeferredPass::Render'::__l38::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> TStack_48;
  FRHITransitionInfo FStack_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)param_1 + 0x10))();
  TStack_48.ArrayNum = 1;
  FStack_38.field1_0x8 = *pFVar1;
  FStack_38._padding_._4_2_ = 0xffff;
  TStack_48.DataPtr = &FStack_38;
  FStack_38._padding_._0_4_ = 0xffffffff;
  FStack_38.Type = Texture;
  FStack_38.AccessBefore = RTV;
  FStack_38.AccessAfter = SRVGraphicsPixel;
  FStack_38.Flags = None;
  FStack_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_48,None);
  return;
}

// Call @ 14ddd8fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::__l53::<lambda_1>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 14ddd8fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncCompositeImage<FColor>::operator()'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `TAsyncCompositeImage<FColor>::operator()'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8fe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncCompositeImage<FLinearColor>::operator()'::__l2::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `TAsyncCompositeImage<FLinearColor>::operator()'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd8ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TAsyncCompositeImage<FFloat16Color>::operator()'::__l2::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `TAsyncCompositeImage<FFloat16Color>::operator()'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14ddd9000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMoviePipelineSurfaceQueue *this;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined1 auStack_a8 [32];
  FRHIResource *apFStack_88 [2];
  TSharedRef<FImagePixelDataPayload,1> TStack_78;
  TSharedRef<FImagePixelDataPayload,1> TStack_68;
  TSharedRef<FImagePixelDataPayload,1> *pTStack_58;
  code *apcStack_48 [2];
  code *apcStack_38 [3];
  code **ppcStack_20;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  MakeShared<FImagePixelDataPayload,1>(&TStack_68);
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(FMoviePipelineSurfaceQueue **)param_1;
  apcStack_48[0] = (code *)0x0;
  ppcStack_20 = (code **)0x0;
  ppcStack_20 = FMemory::Malloc(0x30,8);
  *ppcStack_20 = (code *)&TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::`2'::<lambda_1>,1,1>
                          ::_vftable_;
  ppcStack_20[1] = *(code **)((longlong)param_1 + 0x10);
  ppcStack_20[2] = *(code **)((longlong)param_1 + 0x18);
  pcVar1 = *(code **)((longlong)param_1 + 0x20);
  ppcStack_20[3] = pcVar1;
  if (pcVar1 != (code *)0x0) {
    LOCK();
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + 1;
    UNLOCK();
  }
  ppcStack_20[4] = *(code **)((longlong)param_1 + 0x28);
  pcVar1 = *(code **)((longlong)param_1 + 0x30);
  ppcStack_20[5] = pcVar1;
  if (pcVar1 != (code *)0x0) {
    LOCK();
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + 1;
    UNLOCK();
  }
  if (ppcStack_20 + 1 != (code **)0x0) {
    apcStack_48[0] =
         TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
         ::Call;
  }
  pTStack_58 = &TStack_78;
  TStack_78.Object = TStack_68.Object;
  TStack_78.SharedReferenceCount.ReferenceController =
       TStack_68.SharedReferenceCount.ReferenceController;
  if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x38) + 0x10))();
  apFStack_88[0] = (FRHIResource *)*puVar3;
  if (apFStack_88[0] != (FRHIResource *)0x0) {
    FRHIResource::AddRef(apFStack_88[0]);
  }
  FMoviePipelineSurfaceQueue::OnRenderTargetReady_RenderThread
            (this,(FRHITexture *)apFStack_88,&TStack_78,
             (TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
              *)apcStack_48);
  if (apcStack_48[0] != (code *)0x0) {
    ppcVar4 = apcStack_48 + 2;
    if (ppcStack_20 != (code **)0x0) {
      ppcVar4 = ppcStack_20;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 14ddd9010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FMoviePipelineSurfaceQueue *this;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined1 auStack_98 [32];
  FRHIResource *pFStack_78;
  TSharedRef<FImagePixelDataPayload,1> TStack_70;
  TSharedRef<FImagePixelDataPayload,1> *pTStack_60;
  code *apcStack_48 [2];
  code *apcStack_38 [3];
  code **ppcStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = *(FMoviePipelineSurfaceQueue **)param_1;
  apcStack_48[0] = (code *)0x0;
  ppcStack_20 = (code **)0x0;
  ppcStack_20 = FMemory::Malloc(0x78,8);
  *ppcStack_20 = (code *)&TFunction_OwnedObject<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::`2'::<lambda_1>,1,1>
                          ::_vftable_;
  ppcVar4 = ppcStack_20 + 1;
  `UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>::<lambda_1>
            (ppcVar4,(<lambda_1> *)((longlong)param_1 + 0x20));
  if (ppcVar4 != (code **)0x0) {
    apcStack_48[0] =
         TFunctionRefCaller<`UMoviePipelineDeferredPassBase::PostRendererSubmission'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
         ::Call;
  }
  pTStack_60 = &TStack_70;
  TStack_70.Object = *(FImagePixelDataPayload **)((longlong)param_1 + 0x10);
  TStack_70.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
  if (TStack_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x90) + 0x10))();
  pFStack_78 = (FRHIResource *)*puVar3;
  if (pFStack_78 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFStack_78);
  }
  FMoviePipelineSurfaceQueue::OnRenderTargetReady_RenderThread
            (this,(FRHITexture *)&pFStack_78,&TStack_70,
             (TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
              *)apcStack_48);
  if (apcStack_48[0] != (code *)0x0) {
    ppcVar4 = apcStack_48 + 2;
    if (ppcStack_20 != (code **)0x0) {
      ppcVar4 = ppcStack_20;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// Call @ 14ddd9020

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l87::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> TStack_48;
  FRHITransitionInfo FStack_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)param_1 + 0x10))();
  TStack_48.ArrayNum = 1;
  FStack_38.field1_0x8 = *pFVar1;
  FStack_38._padding_._4_2_ = 0xffff;
  TStack_48.DataPtr = &FStack_38;
  FStack_38._padding_._0_4_ = 0xffffffff;
  FStack_38.Type = Texture;
  FStack_38.AccessBefore = RTV;
  FStack_38.AccessAfter = SRVGraphicsPixel;
  FStack_38.Flags = None;
  FStack_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&TStack_48,None);
  return;
}

