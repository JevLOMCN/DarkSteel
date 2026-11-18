// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 32

// ~<lambda_1> @ 14ddc8b80

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::
~<lambda_1>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~<lambda_1> @ 14ddc8c90

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>::
~<lambda_1>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~<lambda_2> @ 14ddc8da0

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>::
~<lambda_2>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~FMovieGraphImagePassBase @ 14ddcb1b0

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::~FMovieGraphImagePassBase
          (FMovieGraphImagePassBase *this)

{
  return;
}

// operator() @ 14ddcd5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddcd8f0) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>::
operator()(void *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

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
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_118;
  undefined8 *local_110;
  TIntPoint<int>_u_0 local_108;
  TIntPoint<int>_u_0 local_100;
  TIntPoint<int>_u_0 local_f8;
  TSharedPtr<IImagePixelDataPayload,1> local_f0;
  TSharedPtr<IImagePixelDataPayload,1> local_e0;
  TSharedPtr<IImagePixelDataPayload,1> local_d0;
  FTaskHandle local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar11 = (FTaskBase *)0x0;
  local_118.Reference = (FTaskBase *)0x0;
  pFVar4 = param_1->Ptr;
  EVar3 = pFVar4->Type;
  if (EVar3 == Color) {
    local_f8 = (pFVar4->Size).field0_0x0;
    local_100 = (TIntPoint<int>_u_0)::operator_new(0x40);
    local_118.Reference = pFVar11;
    if (local_100 != (TIntPoint<int>_u_0)0x0) {
      local_d0.Object = *(IImagePixelDataPayload **)((longlong)this + 0x18);
      local_d0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
      if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118.Reference =
           (FTaskBase *)
           TImagePixelData<FColor>::TImagePixelData<FColor>
                     ((TImagePixelData<FColor> *)local_100,(TIntPoint<int> *)&local_f8._s_0,
                      (TArray<FColor,TSizedDefaultAllocator<64>_> *)(pFVar4 + 1),&local_d0);
    }
  }
  else if (EVar3 == Float16) {
    local_100 = (pFVar4->Size).field0_0x0;
    local_f8 = (TIntPoint<int>_u_0)::operator_new(0x40);
    local_118.Reference = pFVar11;
    if (local_f8 != (TIntPoint<int>_u_0)0x0) {
      local_e0.Object = *(IImagePixelDataPayload **)((longlong)this + 0x18);
      local_e0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
      if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118.Reference =
           (FTaskBase *)
           TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                     ((TImagePixelData<FFloat16Color> *)local_f8,(TIntPoint<int> *)&local_100._s_0,
                      (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)(pFVar4 + 1),&local_e0);
    }
  }
  else if (EVar3 == Float32) {
    local_108 = (pFVar4->Size).field0_0x0;
    local_f8 = (TIntPoint<int>_u_0)::operator_new(0x40);
    local_118.Reference = pFVar11;
    if (local_f8 != (TIntPoint<int>_u_0)0x0) {
      local_f0.Object = *(IImagePixelDataPayload **)((longlong)this + 0x18);
      local_f0.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118.Reference =
           (FTaskBase *)
           TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                     ((TImagePixelData<FLinearColor> *)local_f8,(TIntPoint<int> *)&local_108._s_0,
                      (TArray<FLinearColor,TSizedDefaultAllocator<64>_> *)(pFVar4 + 1),&local_f0);
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
  (**(code **)(**(longlong **)this + 200))(*(longlong **)this,local_58);
  lVar5 = *(longlong *)((longlong)this + 0x28);
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
  local_b8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)local_118.Reference;
  local_b0 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = *(undefined8 *)((longlong)this + 0x28);
  local_98 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = local_58[0];
  local_60 = (longlong *)0x0;
  if (local_58[0] != 0) {
    plVar10 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar10 = local_30;
    }
    (**(code **)*plVar10)(plVar10,local_78);
  }
  UE::Tasks::
  Launch<__UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>
            ((wchar_t *)&local_110,
             (<lambda_1> *)
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp(600)"
             ,&local_b8,(char)uVar6 + 0x60,Inline,in_stack_fffffffffffffed0 & 0xffffff00);
  if (local_88 != 0) {
    plVar10 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar10 = local_60;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  if (local_b8.Pimpl.Reference != (FTaskBase *)0x0) {
    (*(code *)**(undefined8 **)local_b8.Pimpl.Reference)(local_b8.Pimpl.Reference,1);
  }
  lVar5 = *(longlong *)((longlong)this + 0x28);
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
  if (puVar7 != local_110) {
    *(undefined8 **)(lVar5 + 0x60) = local_110;
    if (local_110 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_110 + 6) = *(int *)(local_110 + 6) + 1;
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
  if (local_110 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_110 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_110)(local_110,1);
    }
  }
  if (local_58[0] != 0) {
    plVar10 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar10 = local_30;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// operator() @ 14ddce1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>::
operator()(void *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  UMovieGraphDefaultRenderer *this_00;
  longlong *plVar8;
  undefined1 auStackY_118 [32];
  ETaskFlags in_stack_ffffffffffffff10;
  undefined1 local_d8 [8];
  undefined8 *local_d0;
  undefined8 *local_c8 [2];
  FTaskHandle local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  (**(code **)(**(longlong **)this + 200))(*(longlong **)this,local_58);
  lVar3 = *(longlong *)((longlong)this + 0x18);
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
  local_b8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1->Ptr;
  param_1->Ptr = (FImagePixelData *)0x0;
  local_b0 = *(undefined8 *)((longlong)this + 8);
  local_a8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0 = *(undefined8 *)((longlong)this + 0x18);
  local_98 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = local_58[0];
  local_60 = (longlong *)0x0;
  if (local_58[0] != 0) {
    plVar8 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)*plVar8)(plVar8,local_78);
  }
  UE::Tasks::
  Launch<__UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle_&>
            ((wchar_t *)&local_d0,
             (<lambda_1> *)
             L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp(507)"
             ,&local_b8,(char)uVar4 + 0x60,Inline,in_stack_ffffffffffffff10 & 0xffffff00);
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar8 = local_60;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  if (local_b8.Pimpl.Reference != (FTaskBase *)0x0) {
    (*(code *)**(undefined8 **)local_b8.Pimpl.Reference)(local_b8.Pimpl.Reference,1);
  }
  lVar3 = *(longlong *)((longlong)this + 0x18);
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
  if (puVar5 != local_d0) {
    *(undefined8 **)(lVar3 + 0x60) = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_d0 + 6) = *(int *)(local_d0 + 6) + 1;
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
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)this + 8),false,true);
  if (!bVar7) {
    bVar7 = ``UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::
            <lambda_1>::operator()'::__l2::<lambda_2>::operator()(local_d8);
    if (!bVar7) goto LAB_14ddce3f3;
  }
  this_00 = (UMovieGraphDefaultRenderer *)
            FWeakObjectPtr::GetEvenIfUnreachable((FWeakObjectPtr *)(*(longlong *)this + 8));
  local_c8[0] = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_d0 + 6) = *(int *)(local_d0 + 6) + 1;
    UNLOCK();
  }
  UMovieGraphDefaultRenderer::AddOutstandingRenderTask_AnyThread(this_00,(FTaskHandle)local_c8);
LAB_14ddce3f3:
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_d0 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  if (local_58[0] != 0) {
    plVar8 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// operator() @ 14ddcf2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>::
operator()(void *this,FRHICommandListImmediate *param_1)

{
  FMoviePipelineSurfaceQueue *this_00;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined1 auStack_a8 [32];
  FRHIResource *local_88 [2];
  TSharedRef<FImagePixelDataPayload,1> local_78;
  TSharedRef<FImagePixelDataPayload,1> local_68;
  TSharedRef<FImagePixelDataPayload,1> *local_58;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  MakeShared<FImagePixelDataPayload,1>(&local_68);
  if (*(longlong *)this == 0) {
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
  this_00 = *(FMoviePipelineSurfaceQueue **)this;
  local_48[0] = (code *)0x0;
  local_20 = (code **)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_20[1] = *(code **)((longlong)this + 0x10);
  local_20[2] = *(code **)((longlong)this + 0x18);
  pcVar1 = *(code **)((longlong)this + 0x20);
  local_20[3] = pcVar1;
  if (pcVar1 != (code *)0x0) {
    LOCK();
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + 1;
    UNLOCK();
  }
  local_20[4] = *(code **)((longlong)this + 0x28);
  pcVar1 = *(code **)((longlong)this + 0x30);
  local_20[5] = pcVar1;
  if (pcVar1 != (code *)0x0) {
    LOCK();
    *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + 1;
    UNLOCK();
  }
  if (local_20 + 1 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
                  ::Call;
  }
  local_58 = &local_78;
  local_78.Object = local_68.Object;
  local_78.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x38) + 0x10))();
  local_88[0] = (FRHIResource *)*puVar3;
  if (local_88[0] != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_88[0]);
  }
  FMoviePipelineSurfaceQueue::OnRenderTargetReady_RenderThread
            (this_00,(FRHITexture *)local_88,&local_78,
             (TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
              *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar4 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar4 = local_20;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// AddReferencedObjects @ 14ddd4200

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::AddReferencedObjects
          (FMovieGraphImagePassBase *this,FReferenceCollector *param_1)

{
  return;
}

// ApplyCameraManagerPostProcessBlends @ 14ddd4af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::ApplyCameraManagerPostProcessBlends
          (FMovieGraphImagePassBase *this,FSceneView *param_1,FMinimalViewInfo *param_2,bool param_3
          )

{
  APlayerCameraManager *pAVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  FWeakObjectPtr *this_00;
  UObject *pUVar9;
  UWorld *this_01;
  APlayerController *pAVar10;
  FMinimalViewInfo *pFVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_978 [32];
  longlong local_958;
  longlong local_950;
  TArray<float,TSizedDefaultAllocator<32>_> *local_948;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *local_940;
  undefined1 local_938 [24];
  double local_920;
  FMinimalViewInfo local_918;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_978;
  if ((param_1 == (FSceneView *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
                         ,0x72,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,local_938);
  pUVar9 = FWeakObjectPtr::Get(this_00);
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar9 == (UObject *)0x0) {
      return;
    }
  }
  else {
    if (pUVar9 == (UObject *)0x0) {
      return;
    }
    GC::MarkAsReachable(pUVar9);
  }
  this_01 = (UWorld *)(**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
  if (param_3) {
    pAVar10 = UWorld::GetFirstPlayerController(this_01);
    pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
    if (pAVar1 != (APlayerCameraManager *)0x0) {
      APlayerCameraManager::GetCachedPostProcessBlends(pAVar1,&local_940,&local_948);
      pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
      if (pAVar1->bEnableFading != 0) {
        uVar4 = *(undefined8 *)((longlong)&(pAVar1->FadeColor).field0_0x0 + 8);
        *(undefined8 *)&(param_1->OverlayColor).field0_0x0 =
             *(undefined8 *)&(pAVar1->FadeColor).field0_0x0;
        *(undefined8 *)((longlong)&(param_1->OverlayColor).field0_0x0 + 8) = uVar4;
        fVar14 = ((pAVar10->PlayerCameraManager).field0_0x0.DebugPtr)->FadeAmount;
        if (__real_3f800000 <= fVar14) {
          fVar14 = __real_3f800000;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        (param_1->OverlayColor).field0_0x0._s_0.A = fVar14;
      }
      pAVar1 = (pAVar10->PlayerCameraManager).field0_0x0.DebugPtr;
      if (pAVar1->bEnableColorScaling != 0) {
        dVar3 = (pAVar1->ColorScale).field0_0x0._s_0.Y;
        local_920 = (pAVar1->ColorScale).field0_0x0._s_0.Z;
        (param_1->ColorScale).field0_0x0._s_0.R = (float)(pAVar1->ColorScale).field0_0x0._s_0.X;
        (param_1->ColorScale).field0_0x0._s_0.G = (float)dVar3;
        (param_1->ColorScale).field0_0x0._s_0.B = (float)local_920;
        (param_1->ColorScale).field0_0x0._s_0.A = 1.0;
      }
      pFVar11 = (FMinimalViewInfo *)
                (**(code **)(((pAVar10->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x798
                            ))();
      FMinimalViewInfo::FMinimalViewInfo(&local_918,pFVar11);
      uVar12 = 0;
      if (0 < local_948->ArrayNum) {
        lVar13 = 0;
        do {
          pTVar5 = local_948;
          uVar8 = 0;
          if ((int)uVar12 < local_948->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_958 = (longlong)(int)uVar12;
            local_950 = (longlong)local_948->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pTVar6 = local_940;
          fVar14 = *(float *)((pTVar5->AllocatorInstance).Data + lVar13);
          uVar8 = 0;
          if ((int)uVar12 < local_940->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_958 = (longlong)(int)uVar12;
            local_950 = (longlong)local_940->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          FSceneView::OverridePostProcessSettings
                    (param_1,(FPostProcessSettings *)
                             ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x770),
                     fVar14);
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 4;
        } while ((int)uVar12 < local_948->ArrayNum);
      }
      FSceneView::OverridePostProcessSettings
                (param_1,&local_918.PostProcessSettings,local_918.PostProcessBlendWeight);
      if (local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data)
        ;
      }
    }
  }
  else {
    MoviePipeline::DoPostProcessBlend(&param_2->Location,this_01,param_2,param_1);
  }
  return;
}

// ApplyMovieGraphOverridesToSampleState @ 14ddd4df0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::ApplyMovieGraphOverridesToSampleState
          (FMovieGraphImagePassBase *this,FMovieGraphSampleState *param_1)

{
  return;
}

// ApplyMovieGraphOverridesToSceneView @ 14ddd4e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::ApplyMovieGraphOverridesToSceneView
          (FMovieGraphImagePassBase *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FViewFamilyInitData *param_2,FCameraInfo *param_3)

{
  undefined1 *puVar1;
  EAntiAliasingMethod EVar2;
  FSceneViewFamilyContext *pFVar3;
  FSceneView *this_00;
  code *pcVar4;
  bool bVar5;
  FStaticShaderPlatform FVar6;
  FStaticBasicLogRecord *pFVar7;
  float fVar8;
  double dVar9;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  pFVar3 = param_1->Object;
  if (*(int *)&pFVar3->field_0x10 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (FSceneView *)**(undefined8 **)&pFVar3->field_0x8;
  if ((TOptional<unsigned_int> *)&local_18 != &this_00->OverrideFrameIndexValue) {
    (this_00->OverrideFrameIndexValue).TypedValue = param_2->FrameIndex;
    (this_00->OverrideFrameIndexValue).bIsSet = true;
  }
  if ((TOptional<unsigned_int> *)local_14 != &this_00->OverrideOutputFrameIndexValue) {
    (this_00->OverrideOutputFrameIndexValue).TypedValue = (param_2->TimeData).OutputFrameNumber;
    (this_00->OverrideOutputFrameIndexValue).bIsSet = true;
  }
  this_00->bCameraCut = false;
  EVar2 = param_2->AntiAliasingMethod;
  this_00->AntiAliasingMethod = EVar2;
  this_00->bIsOfflineRender = true;
  dVar9 = (double)(param_2->TimeData).FrameRate.Numerator;
  fVar8 = (param_2->TimeData).WorldTimeDilation;
  if (fVar8 <= __real_322bcc77) {
    fVar8 = __real_322bcc77;
  }
  *(int *)&(this_00->FinalPostProcessSettings).field_0x6e0 =
       (int)((longlong)
             ROUND((dVar9 + dVar9) /
                   ((double)fVar8 * (double)(param_2->TimeData).FrameRate.Denominator) +
                   __real_3fe0000000000000) >> 1);
  *(float *)&(this_00->FinalPostProcessSettings).field_0x6d8 =
       (param_2->TimeData).MotionBlurFraction;
  *(undefined4 *)&(this_00->FinalPostProcessSettings).field_0x6dc = 0x42c80000;
  puVar1 = &(this_00->FinalPostProcessSettings).field_0x1e;
  *puVar1 = *puVar1 | 1;
  puVar1 = &(this_00->FinalPostProcessSettings).field_0x1d;
  *puVar1 = *puVar1 | 0xc0;
  if (EVar2 == AAM_TemporalAA) {
    FVar6.Platform = FSceneView::GetShaderPlatform(this_00);
    bVar5 = SupportsGen4TAA(FVar6);
    if (bVar5) goto LAB_14ddd4f69;
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      pFVar7 = &::LOG_Static;
LAB_14ddd4f96:
      Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
LAB_14ddd4f69:
    if (this_00->AntiAliasingMethod != AAM_TSR) goto LAB_14ddd4fac;
    FVar6.Platform = FSceneView::GetShaderPlatform(this_00);
    bVar5 = SupportsTSR(FVar6);
    if (bVar5) goto LAB_14ddd4fac;
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      pFVar7 = &::LOG_Static;
      goto LAB_14ddd4f96;
    }
  }
  this_00->AntiAliasingMethod = AAM_None;
LAB_14ddd4fac:
  if ((((param_1->Object->field_0x60 & 1) == 0) && (this_00->AntiAliasingMethod != AAM_TemporalAA))
     && (this_00->AntiAliasingMethod != AAM_TSR)) {
    FViewMatrices::HackAddTemporalAAProjectionJitter
              (&this_00->ViewMatrices,&param_3->ProjectionMatrixJitterAmount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ApplyMovieGraphOverridesToViewFamily @ 14ddd5320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::ApplyMovieGraphOverridesToViewFamily
          (FMovieGraphImagePassBase *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FViewFamilyInitData *param_2)

{
  undefined1 *puVar1;
  FSceneViewFamilyContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  FWeakObjectPtr *this_00;
  UObject *pUVar5;
  FLegacyScreenPercentageDriver *pFVar6;
  float fVar7;
  undefined1 local_res8 [8];
  TSharedRef<FSceneViewFamilyContext,1> *local_res10;
  FLegacyScreenPercentageDriver *local_res18;
  
  *(ESceneCaptureSource *)&param_1->Object->field_0xcc = param_2->SceneCaptureSource;
  param_1->Object->field_0xd5 = param_2->bWorldIsPaused;
  param_1->Object->field_0x10a = 1;
  local_res10 = param_1;
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,local_res8);
  pUVar5 = FWeakObjectPtr::Get(this_00);
  if (pUVar5 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5[1].field_0x10 == '\0') {
      pUVar5[1].field_0x10 = 1;
      param_1->Object->field_0xc7 = 1;
      param_1->Object->field_0xc0 = 0;
    }
    else {
      param_1->Object->field_0xc7 = 0;
      param_1->Object->field_0xc0 = 1;
    }
  }
  if ((float)((uint)(param_2->TimeData).MotionBlurFraction & __xmm_7fffffff7fffffff7fffffff7fffffff)
      <= __real_322bcc77) {
    puVar1 = &param_1->Object->field_0x4c;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffdff;
  }
  pFVar2 = param_1->Object;
  if (*(longlong *)&pFVar2->field_0x180 == 0) {
    pFVar6 = ::operator_new(0x18);
    local_res18 = pFVar6;
    if (pFVar6 == (FLegacyScreenPercentageDriver *)0x0) {
      pFVar6 = (FLegacyScreenPercentageDriver *)0x0;
    }
    else {
      fVar7 = FLegacyScreenPercentageDriver::GetCVarResolutionFraction();
      pFVar6 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                         (pFVar6,(FSceneViewFamily *)param_1->Object,fVar7);
    }
    if (pFVar6 == (FLegacyScreenPercentageDriver *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InScreenPercentageInterface",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                         ,0xa24,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)&pFVar2->field_0x180 != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScreenPercentageInterface == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                         ,0xa25,L"View family already had a screen percentage interface assigned.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(FLegacyScreenPercentageDriver **)&pFVar2->field_0x180 = pFVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CalculatePrinciplePointOffsetForTiling @ 14ddd78f0

TVector4<float> * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::CalculatePrinciplePointOffsetForTiling
          (FMovieGraphImagePassBase *this,TVector4<float> *__return_storage_ptr__,
          FMovieGraphTilingParams *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = (param_1->TileCount).field0_0x0._s_0.Y;
  iVar3 = (param_1->TileCount).field0_0x0._s_0.X;
  fVar7 = ((float)(param_1->TileIndexes).field0_0x0._s_0.X + __real_3f000000) -
          (float)iVar3 * __real_3f000000;
  fVar1 = (param_1->OverlapPad).field0_0x0._s_0.X;
  fVar8 = ((float)(param_1->TileIndexes).field0_0x0._s_0.Y + __real_3f000000) -
          (float)iVar2 * __real_3f000000;
  fVar5 = (fVar1 + fVar1) / (float)(param_1->TileSize).field0_0x0._s_0.X + __real_3f800000;
  fVar1 = (param_1->OverlapPad).field0_0x0._s_0.Y;
  fVar6 = (fVar1 + fVar1) / (float)(param_1->TileSize).field0_0x0._s_0.Y + __real_3f800000;
  fVar1 = fVar5 / (float)iVar3;
  fVar4 = fVar6 / (float)iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = ((fVar7 + fVar7) / fVar5) * fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (float)((uint)(((fVar8 + fVar8) / fVar6) * fVar4) ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  return __return_storage_ptr__;
}

// CalculateProjectionMatrix @ 14ddd7b40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::CalculateProjectionMatrix
          (FMovieGraphImagePassBase *this,FCameraInfo *param_1,FSceneViewProjectionData *param_2,
          TIntPoint<int> param_3,TIntPoint<int> param_4)

{
  undefined4 uVar1;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TIntRect<int>_u_0 local_28;
  TIntRect<int> local_18;
  
  local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  fVar4 = (float)param_3.field0_0x0._0_4_ / (float)param_3.field0_0x0._4_4_;
  if (param_1->bAllowCameraAspectRatio == false) {
    fVar5 = (param_1->ViewInfo).AspectRatio;
    fVar3 = fVar4;
  }
  else {
    fVar5 = (param_1->ViewInfo).AspectRatio;
    fVar3 = fVar5;
  }
  if ((param_1->ViewInfo).AspectRatioAxisConstraint.bIsSet == false) {
    TVar2.Value = '\x01';
  }
  else {
    TVar2.Value = (uchar)(param_1->ViewInfo).AspectRatioAxisConstraint.TypedValue;
  }
  if ((1 < (param_1->TilingParams).TileCount.field0_0x0._s_0.Y *
           (param_1->TilingParams).TileCount.field0_0x0._s_0.X) &&
     (uVar1 = *(undefined4 *)&(param_1->ViewInfo).field_0x68, ZPULL(uVar1,0,1) != 0)) {
    if (fVar4 <= fVar3) {
      if (fVar4 < fVar3) {
        TVar2.Value = '\x01';
        (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y =
             (double)(fVar4 / fVar3) *
             (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.Y;
      }
    }
    else {
      TVar2.Value = '\0';
      (param_1->ViewInfo).OrthoWidth = (fVar4 / fVar3) * (param_1->ViewInfo).OrthoWidth;
      (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X =
           (double)(fVar3 / fVar4) * (param_1->ViewInfo).OffCenterProjectionOffset.field0_0x0._s_0.X
      ;
    }
    *(uint *)&(param_1->ViewInfo).field_0x68 = uVar1 & 0xfffffffe;
  }
  local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)param_3.field0_0x0;
  FViewport::CalculateViewExtents(&local_18,fVar5,fVar4,(TIntRect<int> *)&local_28._s_0,&param_4);
  FMinimalViewInfo::CalculateProjectionMatrixGivenViewRectangle
            (&param_1->ViewInfo,TVar2,&local_18,param_2);
  return;
}

// CreateSceneView @ 14ddda190

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneView * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::CreateSceneView
          (FMovieGraphImagePassBase *this,FSceneViewInitOptions *param_1,
          TSharedRef<FSceneViewFamilyContext,1> *param_2,FCameraInfo *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FSceneView *pFVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  FSceneViewFamilyContext *pFVar11;
  FSceneView *local_58 [2];
  undefined1 local_48 [16];
  TVector<double>_u_0 local_38;
  
  pFVar7 = ::operator_new(0x1c30);
  local_58[0] = (FSceneView *)0x0;
  if (pFVar7 != (FSceneView *)0x0) {
    local_58[0] = FSceneView::FSceneView(pFVar7,param_1);
  }
  pFVar11 = param_2->Object;
  if ((*(FSceneView ***)&pFVar11->field_0x8 <= local_58) &&
     (local_58 < *(FSceneView ***)&pFVar11->field_0x8 + *(int *)&pFVar11->field_0x14)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSceneView *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar5 = *(int *)&pFVar11->field_0x10;
  if (iVar5 == *(int *)&pFVar11->field_0x14) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar11->field_0x8,(int *)&pFVar11->field_0x14);
  }
  *(int *)&pFVar11->field_0x10 = iVar5 + 1;
  *(FSceneView **)(*(longlong *)&pFVar11->field_0x8 + (longlong)iVar5 * 8) = local_58[0];
  local_38._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_1->ViewLocation).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  FSceneView::StartFinalPostprocessSettings(local_58[0],(TVector<double> *)&local_38._s_0);
  (**(code **)(this->_padding_ + 0x78))
            (this,local_58[0],param_3,param_3->bUseCameraManagerPostProcess);
  *(float *)&(local_58[0]->FinalPostProcessSettings).field_0x658 =
       param_3->DoFSensorScale * *(float *)&(local_58[0]->FinalPostProcessSettings).field_0x658;
  puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0x50))(this,local_48,&param_3->TilingParams)
  ;
  uVar3 = puVar8[1];
  *(undefined8 *)&(local_58[0]->LensPrincipalPointOffsetScale).field0_0x0 = *puVar8;
  *(undefined8 *)((longlong)&(local_58[0]->LensPrincipalPointOffsetScale).field0_0x0 + 8) = uVar3;
  FSceneView::EndFinalPostprocessSettings(local_58[0],param_1);
  MovieRenderPipeline::UpdateSceneViewForShowFlags(local_58[0]);
  uVar9 = 0;
  pFVar11 = param_2->Object;
  if (0 < *(int *)&pFVar11->field_0xf0) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < *(int *)&pFVar11->field_0xf0) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FSceneView *)(*pcVar2)();
          return pFVar7;
        }
      }
      plVar1 = *(longlong **)(lVar10 + *(longlong *)&pFVar11->field_0xe8);
      (**(code **)(*plVar1 + 8))(plVar1,param_2->Object,local_58[0]);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
      pFVar11 = param_2->Object;
    } while ((int)uVar9 < *(int *)&pFVar11->field_0xf0);
  }
  pFVar7 = local_58[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return pFVar7;
}

// CreateSceneViewFamily @ 14ddda3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<FSceneViewFamilyContext,1> * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::CreateSceneViewFamily
          (FMovieGraphImagePassBase *this,
          TSharedRef<FSceneViewFamilyContext,1> *__return_storage_ptr__,FViewFamilyInitData *param_1
          )

{
  undefined1 *puVar1;
  float fVar2;
  EViewModeIndex EVar3;
  int iVar4;
  FSceneViewFamilyContext *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  UEngine *pUVar9;
  bool bVar10;
  ConstructionValues *pCVar11;
  TSharedRef<FSceneViewFamilyContext,1> *pTVar12;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [4];
  undefined4 local_164;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> local_160;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_150;
  FSceneViewExtensionContext local_140;
  TSharedRef<FSceneViewFamilyContext,1> *local_120;
  FEngineShowFlags local_118;
  ConstructionValues local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_164 = 0;
  EVar3 = param_1->ViewModeIndex;
  local_120 = __return_storage_ptr__;
  FEngineShowFlags::FEngineShowFlags(&local_118,&param_1->ShowFlags);
  ApplyViewMode(EVar3,(param_1->ProjectionMode).Value == '\0',&local_118);
  EngineShowFlagOverride(ESFIM_Game,EVar3,&local_118,false);
  local_150.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pCVar11 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_d8,param_1->RenderTarget,param_1->World->Scene,&local_118,&local_150);
  fVar2 = (param_1->TimeData).FrameDeltaTime;
  dVar8 = (double)(param_1->TimeData).WorldSeconds;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  (pCVar11->Time).RealTimeSeconds = dVar8;
  (pCVar11->Time).WorldTimeSeconds = (double)auVar7._8_8_;
  (pCVar11->Time).DeltaRealTimeSeconds = fVar2;
  (pCVar11->Time).DeltaWorldTimeSeconds = fVar2;
  pCVar11->bRealtimeUpdate = 1;
  pCVar11->bTimesSet = 1;
  MakeShared<FSceneViewFamilyContext,1,FSceneViewFamily::ConstructionValues_&>
            (__return_storage_ptr__,pCVar11);
  local_164 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_d8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  pUVar9 = GEngine;
  pFVar5 = __return_storage_ptr__->Object;
  if ((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSharedRef<FSceneViewFamilyContext,1> *)(*pcVar6)();
      return pTVar12;
    }
  }
  local_140.Scene = param_1->World->Scene;
  local_140._padding_ = (longlong)&___7FSceneViewExtensionContext__6B_;
  local_140.Viewport = (FViewport *)0x0;
  local_140.bStereoEnabled = false;
  pTVar13 = FSceneViewExtensions::GatherActiveExtensions
                      ((pUVar9->ViewExtensions).Object,&local_160,&local_140);
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::
  Append<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>
            ((TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *)
             &pFVar5->field_0xe8,pTVar13);
  DestructItems<TSharedRef<ISceneViewExtension,1>,int>
            ((TSharedRef<ISceneViewExtension,1> *)local_160.AllocatorInstance.Data,
             local_160.ArrayNum);
  if ((TSharedRef<ISceneViewExtension,1> *)local_160.AllocatorInstance.Data !=
      (TSharedRef<ISceneViewExtension,1> *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  pFVar5 = __return_storage_ptr__->Object;
  puVar14 = *(undefined8 **)&pFVar5->field_0xe8;
  iVar4 = *(int *)&pFVar5->field_0xf0;
  puVar15 = puVar14 + (longlong)iVar4 * 2;
  while( true ) {
    if (*(int *)&pFVar5->field_0xf0 != iVar4) {
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_168);
    }
    if (puVar14 == puVar15) break;
    (*(code *)**(undefined8 **)*puVar14)((undefined8 *)*puVar14,__return_storage_ptr__->Object);
    puVar14 = puVar14 + 2;
  }
  __return_storage_ptr__->Object->field_0xca = 1;
  if (local_118.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_118.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateViewInitOptions @ 14ddda6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewInitOptions * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::CreateViewInitOptions
          (FMovieGraphImagePassBase *this,FSceneViewInitOptions *__return_storage_ptr__,
          FCameraInfo *param_1,FSceneViewFamilyContext *param_2,FSceneViewStateReference *param_3)

{
  (**(code **)(this->_padding_ + 0x60))();
  return __return_storage_ptr__;
}

// CreateViewInitOptions @ 14ddda720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewInitOptions * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::CreateViewInitOptions
          (FMovieGraphImagePassBase *this,FSceneViewInitOptions *__return_storage_ptr__,
          FCameraInfo *param_1,FSceneViewFamilyContext *param_2,FSceneViewStateInterface *param_3)

{
  TRotator<double> *pTVar1;
  code *pcVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  FSceneViewInitOptions *pFVar6;
  TInverseRotationMatrix<double> *pTVar7;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  longlong local_1d0;
  FSceneViewInitOptions *local_1c8;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TInverseRotationMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1d8 = 0;
  local_1c8 = __return_storage_ptr__;
  if (param_2 == (FSceneViewFamilyContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InViewFamily",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
                       ,0x2c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneViewInitOptions *)(*pcVar2)();
      return pFVar6;
    }
  }
  (**(code **)(**(longlong **)&param_2->field_0x30 + 0x28))
            (*(longlong **)&param_2->field_0x30,&local_1d0);
  FSceneViewInitOptions::FSceneViewInitOptions(__return_storage_ptr__);
  local_1d8 = 1;
  __return_storage_ptr__->ViewFamily = (FSceneViewFamily *)param_2;
  dVar3 = (param_1->ViewInfo).Location.field0_0x0._s_0.Y;
  __return_storage_ptr__->_padding_ = (longlong)(param_1->ViewInfo).Location.field0_0x0._s_0.X;
  __return_storage_ptr__->_padding_ = (longlong)dVar3;
  __return_storage_ptr__->_padding_ = (longlong)(param_1->ViewInfo).Location.field0_0x0._s_0.Z;
  dVar3 = (param_1->ViewInfo).Location.field0_0x0._s_0.Y;
  (__return_storage_ptr__->ViewLocation).field0_0x0._s_0.X =
       (param_1->ViewInfo).Location.field0_0x0._s_0.X;
  (__return_storage_ptr__->ViewLocation).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->ViewLocation).field0_0x0._s_0.Z =
       (param_1->ViewInfo).Location.field0_0x0._s_0.Z;
  pTVar1 = &(param_1->ViewInfo).Rotation;
  dVar3 = (param_1->ViewInfo).Rotation.Yaw;
  (__return_storage_ptr__->ViewRotation).Pitch = pTVar1->Pitch;
  (__return_storage_ptr__->ViewRotation).Yaw = dVar3;
  (__return_storage_ptr__->ViewRotation).Roll = (param_1->ViewInfo).Rotation.Roll;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = local_1d0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = local_1d0;
  pTVar7 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                     (&local_b8,pTVar1);
  lVar4 = *(longlong *)&pTVar7->field_0x8;
  __return_storage_ptr__->_padding_ = *(longlong *)pTVar7;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x18;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x10;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x28;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x20;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x38;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x30;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x48;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x40;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x58;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x50;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x68;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x60;
  __return_storage_ptr__->_padding_ = lVar4;
  lVar4 = *(longlong *)&pTVar7->field_0x78;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar7->field_0x70;
  __return_storage_ptr__->_padding_ = lVar4;
  FSceneViewOwner::operator=(&__return_storage_ptr__->ViewActor,param_1->ViewActor);
  local_1b8.M[0][0] = 0.0;
  local_1b8.M[0][1] = 0.0;
  local_1b8.M[0][2] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[0][3] = _UNK_150689518;
  local_1b8.M[1][0] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[1][1] = _UNK_150689518;
  local_1b8.M[1][2] = 0.0;
  local_1b8.M[1][3] = 0.0;
  local_1b8.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_1b8.M[2][1] = _UNK_15061cbc8;
  local_1b8.M[2][2] = 0.0;
  local_1b8.M[2][3] = 0.0;
  local_1b8.M[3][0] = 0.0;
  local_1b8.M[3][1] = 0.0;
  local_1b8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1b8.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_138,(TMatrix<double> *)&__return_storage_ptr__->_padding_,&local_1b8);
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[0][0];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[0][1];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[0][2];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[0][3];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[1][0];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[1][1];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[1][2];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[1][3];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[2][0];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[2][1];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[2][2];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[2][3];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[3][0];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[3][1];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[3][2];
  __return_storage_ptr__->_padding_ = (longlong)local_138.M[3][3];
  __return_storage_ptr__->SceneViewStateInterface = param_3;
  __return_storage_ptr__->FOV = (param_1->ViewInfo).FOV;
  __return_storage_ptr__->DesiredFOV = (param_1->ViewInfo).FOV;
  return __return_storage_ptr__;
}

// GatherOutputPasses @ 14dddc850

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GatherOutputPasses
          (FMovieGraphImagePassBase *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetAccumulateSampleFunction @ 14dddef20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
* __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GetAccumulateSampleFunction
          (FMovieGraphImagePassBase *this,
          TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AX__QEAV__TUniquePtr_UFImagePixelData__U__TDefaultDelete_UFImagePixelData______V__TSharedRef_UFMovieGraphSampleState_MovieGraph_UE___00__V__TSharedRef_UIMoviePipelineAccumulationArgs_MoviePipeline___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&__return_storage_ptr__->field_0x18 = AccumulateSample_TaskThread;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>_>
         ::Call;
  }
  return __return_storage_ptr__;
}

// GetBranchName @ 14dddf320

FName __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GetBranchName(FMovieGraphImagePassBase *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetOrCreateAccumulator @ 14dde2850

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GetOrCreateAccumulator
          (FMovieGraphImagePassBase *this,
          TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *__return_storage_ptr__,
          TObjectPtr<UMovieGraphDefaultRenderer> param_1,FMovieGraphSampleState *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IMovieGraphOutputMerger *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMoviePipelineOverlappedAccumulator *pIVar6;
  code *pcVar7;
  FMovieGraphRenderDataAccumulationArgs *pFVar8;
  bool bVar9;
  TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *pTVar10;
  UMovieGraphPipeline *pUVar11;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *pTVar12;
  TSharedRef<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1> local_60;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> local_50;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> local_40;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> local_30;
  
  UMovieGraphDefaultRenderer::GetOrCreateAccumulatorPool<FImageOverlappedAccumulator>
            (*(UMovieGraphDefaultRenderer **)param_1.field0_0x0,&local_50);
  if (local_50.Object == (FSurfaceAccumulatorPool *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  DefaultRenderer::FSurfaceAccumulatorPool::
  GetAccumulatorInstance_GameThread<FImageOverlappedAccumulator>
            (local_50.Object,&local_40,(param_2->TraversalContext).Time.OutputFrameNumber,
             &(param_2->TraversalContext).RenderDataIdentifier);
  MakeShared<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1>(&local_60);
  pUVar11 = UMovieGraphRendererBase::GetOwningGraph(*(UMovieGraphRendererBase **)param_1.field0_0x0)
  ;
  pFVar8 = local_60.Object;
  pIVar3 = (pUVar11->OutputMerger).Object;
  pTVar4 = (pUVar11->OutputMerger).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  ((local_60.Object)->OutputMerger).Object = pIVar3;
  if (pTVar4 != ((local_60.Object)->OutputMerger).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = ((local_60.Object)->OutputMerger).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (pFVar8->OutputMerger).WeakReferenceCount.ReferenceController = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_40.Object == (FInstance *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar8 = local_60.Object;
  pIVar6 = ((local_40.Object)->Accumulator).Object;
  pTVar4 = ((local_40.Object)->Accumulator).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  ((local_60.Object)->ImageAccumulator).Object = pIVar6;
  if (pTVar4 != ((local_60.Object)->ImageAccumulator).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = ((local_60.Object)->ImageAccumulator).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (pFVar8->ImageAccumulator).WeakReferenceCount.ReferenceController = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (local_50.Object == (FSurfaceAccumulatorPool *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pTVar12 = DefaultRenderer::FSurfaceAccumulatorPool::
            GetAccumulatorInstance_GameThread<FImageOverlappedAccumulator>
                      (local_50.Object,&local_30,(param_2->TraversalContext).Time.OutputFrameNumber,
                       &(param_2->TraversalContext).RenderDataIdentifier);
  if (&(local_60.Object)->AccumulatorInstance != pTVar12) {
    ((local_60.Object)->AccumulatorInstance).Object = pTVar12->Object;
    pTVar12->Object = (FInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&((local_60.Object)->AccumulatorInstance).SharedReferenceCount,
               &pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  __return_storage_ptr__->Object = (IMoviePipelineAccumulationArgs *)local_60.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_60.SharedReferenceCount.ReferenceController;
  if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetParentNode @ 14dde3320

UMovieGraphImagePassBaseNode * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GetParentNode
          (FMovieGraphImagePassBase *this,UMovieGraphEvaluatedConfig *param_1)

{
  return (UMovieGraphImagePassBaseNode *)0x0;
}

// GetRenderTargetInitParams @ 14dde46c0

FRenderTargetInitParams * __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GetRenderTargetInitParams
          (FMovieGraphImagePassBase *this,FRenderTargetInitParams *__return_storage_ptr__,
          FMovieGraphTimeStepData *param_1,TIntPoint<int> *param_2)

{
  float fVar1;
  
  __return_storage_ptr__->bIncludeInPreviewWindow = true;
  (__return_storage_ptr__->Size).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  __return_storage_ptr__->TargetGamma = 0.0;
  __return_storage_ptr__->bForceLinearGamma = false;
  __return_storage_ptr__->PixelFormat = PF_Unknown;
  (__return_storage_ptr__->Size).field0_0x0 = param_2->field0_0x0;
  fVar1 = UTextureRenderTarget::GetDefaultDisplayGamma();
  __return_storage_ptr__->TargetGamma = fVar1;
  __return_storage_ptr__->PixelFormat = PF_FloatRGBA;
  return __return_storage_ptr__;
}

// GetRenderer @ 14dde4700

TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::GetRenderer(FMovieGraphImagePassBase *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->WeakGraphRenderer).WeakPtr;
  return (TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr>)in_RDX;
}

// MakeForwardingEndpoint @ 14dde8010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> *
__thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint
          (FMovieGraphImagePassBase *this,
          TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          *__return_storage_ptr__,FMovieGraphSampleState *param_1,FMovieGraphTimeStepData *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> FVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWeakObjectPtr *this_00;
  undefined8 *puVar6;
  UObject *local_res8;
  TSharedRef<FImagePixelDataPayload,1> local_b0;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined8 local_90;
  TReferenceControllerBase<1> *local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  FMovieGraphImagePassBase *local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *local_60;
  FImagePixelDataPayload *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,&local_res8);
  local_res8 = FWeakObjectPtr::Get(this_00);
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (local_res8 == (UObject *)0x0) goto LAB_14dde821e;
  }
  else {
    if (local_res8 == (UObject *)0x0) {
LAB_14dde821e:
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      return __return_storage_ptr__;
    }
    GC::MarkAsReachable(local_res8);
  }
  pcVar1 = *(code **)(this->_padding_ + 0xc0);
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(local_res8);
  }
  puVar6 = (undefined8 *)(*pcVar1)(this,local_80,&local_res8,param_1);
  uVar2 = *puVar6;
  pTVar3 = (TReferenceControllerBase<1> *)puVar6[1];
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = uVar2;
  local_88 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_a0);
  MakeShared<FImagePixelDataPayload,1>(&local_b0);
  pTVar5 = local_98;
  FVar4.ReferenceController = local_b0.SharedReferenceCount.ReferenceController;
  local_68 = local_a0;
  local_60 = local_98;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = local_b0.Object;
  local_50 = local_b0.SharedReferenceCount.ReferenceController;
  if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  local_70 = this;
  local_48 = uVar2;
  local_40 = pTVar3;
  puVar6 = FMemory::Malloc(0x40,8);
  *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar6;
  *puVar6 = &Core::Private::Function::
             TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar6[1] = this;
  puVar6[2] = local_a0;
  puVar6[3] = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar6[4] = local_b0.Object;
  puVar6[5] = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar6[6] = uVar2;
  puVar6[7] = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (puVar6 + 1 != (undefined8 *)0x0) {
    *(code **)__return_storage_ptr__ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::MakeForwardingEndpoint'::__l2::<lambda_1>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
         ::Call;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ModifyProjectionMatrixForTiling @ 14dde8860

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::ModifyProjectionMatrixForTiling
          (FMovieGraphImagePassBase *this,FMovieGraphTilingParams *param_1,bool param_2,
          TMatrix<double> *param_3,float *param_4)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  
  fVar2 = __real_3f000000;
  fVar7 = (param_1->OverlapPad).field0_0x0._s_0.X;
  fVar3 = __real_3f800000;
  fVar5 = __real_3f800000;
  if ((0.0 < fVar7) && (fVar8 = (param_1->OverlapPad).field0_0x0._s_0.Y, 0.0 < fVar8)) {
    fVar5 = (float)(param_1->TileSize).field0_0x0._s_0.Y;
    fVar3 = (float)(param_1->TileSize).field0_0x0._s_0.X;
    fVar5 = (fVar8 + fVar8 + fVar5) / fVar5;
    fVar3 = (fVar7 + fVar7 + fVar3) / fVar3;
  }
  fVar7 = fVar3 / (float)(param_1->TileCount).field0_0x0._s_0.X;
  dVar10 = __real_3ff0000000000000 / (double)fVar7;
  dVar9 = __real_3ff0000000000000 / (double)(fVar5 / (float)(param_1->TileCount).field0_0x0._s_0.Y);
  param_3->M[0][0] = dVar10 * param_3->M[0][0];
  param_3->M[1][1] = dVar9 * param_3->M[1][1];
  *param_4 = fVar7;
  fVar8 = (float)(param_1->TileCount).field0_0x0._s_0.X * fVar2 -
          ((float)(param_1->TileIndexes).field0_0x0._s_0.X + fVar2);
  fVar7 = ((float)(param_1->TileIndexes).field0_0x0._s_0.Y + fVar2) -
          (float)(param_1->TileCount).field0_0x0._s_0.Y * fVar2;
  dVar4 = (double)((fVar8 + fVar8) / fVar3);
  dVar6 = (double)((fVar7 + fVar7) / fVar5);
  if (param_2) {
    dVar1 = param_3->M[3][1];
    param_3->M[3][0] = dVar10 * param_3->M[3][0] + dVar4;
    param_3->M[3][1] = dVar9 * dVar1 + dVar6;
    return;
  }
  dVar1 = param_3->M[2][1];
  param_3->M[2][0] = dVar10 * param_3->M[2][0] + dVar4;
  param_3->M[2][1] = dVar9 * dVar1 + dVar6;
  return;
}

// PostRendererSubmission @ 14ddf1de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission
          (FMovieGraphImagePassBase *this,FMovieGraphSampleState *param_1,
          FRenderTargetInitParams *param_2,FCanvas *param_3,FCameraInfo *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FWeakObjectPtr *this_00;
  UMovieGraphDefaultRenderer *this_01;
  longlong *plVar5;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  atomic<int> *paVar8;
  ulonglong uVar9;
  undefined1 auStack_1a8 [32];
  UMovieGraphDefaultRenderer *local_188;
  TSharedPtr<FMoviePipelineSurfaceQueue,1> local_180;
  FMoviePipelineSurfaceQueue *local_170;
  TReferenceControllerBase<1> *local_168;
  FMovieGraphImagePassBase *local_160;
  code *local_158;
  TReferenceControllerBase<1> *local_150;
  code *local_148;
  TReferenceControllerBase<1> *local_140;
  FRenderTarget *local_138;
  code *local_130;
  TReferenceControllerBase<1> *local_128;
  code *local_120;
  TReferenceControllerBase<1> *local_118;
  FMovieGraphImagePassBase *local_110;
  code *local_108;
  TReferenceControllerBase<1> *local_100;
  code *local_f8;
  TReferenceControllerBase<1> *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  TReferenceControllerBase<1> *local_d8;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,local_e8);
  this_01 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(this_00);
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UMovieGraphDefaultRenderer *)0x0) {
      return;
    }
  }
  else {
    if (this_01 == (UMovieGraphDefaultRenderer *)0x0) {
      return;
    }
    GC::MarkAsReachable((UObject *)this_01);
  }
  UMovieGraphDefaultRenderer::GetOrCreateSurfaceQueue(this_01,&local_180,param_2);
  if ((local_180.Object == (FMoviePipelineSurfaceQueue *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMoviePipelineSurfaceQueue::BlockUntilAnyAvailable(local_180.Object);
  pcVar2 = *(code **)(this->_padding_ + 0xc0);
  local_188 = this_01;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)this_01);
  }
  plVar5 = (longlong *)(*pcVar2)(this,local_e0,&local_188,param_1);
  local_148 = (code *)*plVar5;
  pTVar1 = (TReferenceControllerBase<1> *)plVar5[1];
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_120 = local_148;
  local_118 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_130);
  pTVar3 = local_128;
  local_108 = local_130;
  local_100 = local_128;
  if (local_128 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_138 = param_3->RenderTarget;
  local_170 = local_180.Object;
  local_168 = local_180.SharedReferenceCount.ReferenceController;
  if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158 = local_130;
  local_150 = local_128;
  if (local_128 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8[0] = (code *)0x0;
  local_a0 = (code **)0x0;
  local_160 = this;
  local_140 = pTVar1;
  local_110 = this;
  local_f8 = local_148;
  local_f0 = pTVar1;
  local_a0 = FMemory::Malloc(0x48,8);
  *local_a0 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::`2'::<lambda_2>,1,1>
                       ::_vftable_;
  local_a0[1] = (code *)local_170;
  local_a0[2] = (code *)local_168;
  local_168 = (TReferenceControllerBase<1> *)0x0;
  local_170 = (FMoviePipelineSurfaceQueue *)0x0;
  local_a0[3] = (code *)local_160;
  local_a0[4] = local_158;
  local_a0[5] = (code *)local_150;
  if (local_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0[6] = local_148;
  local_a0[7] = (code *)local_140;
  if (local_140 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a0[8] = (code *)local_138;
  if (local_a0 + 1 != (code **)0x0) {
    local_c8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission_::__l2::TSTR_CanvasRenderTargetResolveCommand539>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_98._0_8_ = local_c8[0];
    local_70 = local_a0;
    local_a0 = (code **)0x0;
    local_98._16_8_ = local_b8[0];
    local_98._24_8_ = local_b8[1];
    local_98._32_8_ = local_b8[2];
    local_c8[0] = (code *)0x0;
    local_68 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UE::MovieGraph::Rendering::FMovieGraphImagePassBase::PostRendererSubmission'::__l2::TSTR_CanvasRenderTargetResolveCommand539>
             ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_98,pFVar6);
    uVar9 = (ulonglong)local_68;
    if ((2 < uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if ((code *)local_98._0_8_ != (code *)0x0) {
        ppcVar7 = (code **)(local_98 + 0x10);
        if (local_70 != (code **)0x0) {
          ppcVar7 = local_70;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_98);
    }
  }
  if (local_c8[0] != (code *)0x0) {
    ppcVar7 = local_c8 + 2;
    if (local_a0 != (code **)0x0) {
      ppcVar7 = local_a0;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.SharedReferenceCount.ReferenceController);
  return;
}

// Render @ 14ddf94b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::Render
          (FMovieGraphImagePassBase *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  return;
}

// Setup @ 14ddfd580

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::Setup
          (FMovieGraphImagePassBase *this,
          TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UMovieGraphImagePassBaseNode,FWeakObjectPtr> param_2,
          FMovieGraphRenderPassLayerData *param_3)

{
  (this->WeakGraphRenderer).WeakPtr = param_1.WeakPtr;
  return;
}

// ShouldDiscardOutput @ 14ddff0e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::ShouldDiscardOutput
          (FMovieGraphImagePassBase *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FCameraInfo *param_2)

{
  return false;
}

// Teardown @ 14ddffad0

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphImagePassBase::Teardown(FMovieGraphImagePassBase *this)

{
  return;
}

