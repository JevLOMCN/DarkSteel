// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// GetAccumulatorInstance_GameThread<FImageOverlappedAccumulator> @ 14ddc1010

/* WARNING: Removing unreachable block (ram,0x00014ddc180a) */
/* WARNING: Removing unreachable block (ram,0x00014ddc1818) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> * __thiscall
UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::
GetAccumulatorInstance_GameThread<FImageOverlappedAccumulator>
          (FSurfaceAccumulatorPool *this,
          TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
          *__return_storage_ptr__,int param_1,FMovieGraphRenderDataIdentifier *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *pTVar9;
  TSharedRef<FImageOverlappedAccumulator,1> *pTVar10;
  TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
  *pTVar11;
  TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
  *pTVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
  *pTVar17;
  uint uVar18;
  longlong local_c8 [2];
  TTypeCompatibleBytes<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance>
  *local_b8;
  TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
  *pTStack_b0;
  LPCRITICAL_SECTION local_a8;
  TTypeCompatibleBytes<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance>
  *local_98;
  TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
  *pTStack_90;
  FName local_84;
  TSharedPtr<FImageOverlappedAccumulator,1> local_78;
  longlong local_68;
  TSharedRef<FImageOverlappedAccumulator,1> local_60;
  FString local_50;
  
  pTVar12 = (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
             *)0x0;
  local_a8 = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (local_a8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_a8);
  uVar16 = 0;
  pTVar11 = pTVar12;
  pTVar17 = pTVar12;
  if (0 < (this->Accumulators).ArrayNum) {
    do {
      uVar15 = (uint)pTVar11;
      uVar18 = ~uVar15 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar15 < (this->Accumulators).ArrayNum) {
        uVar7 = uVar18;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                  *)(*pcVar5)();
        return pTVar9;
      }
      pFVar14 = (this->Accumulators).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar14 + -0x10 + (longlong)(pTVar17->ObjectStorage).Pad) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                  *)(*pcVar5)();
        return pTVar9;
      }
      if (param_1 ==
          *(int *)(*(longlong *)(pFVar14 + -0x10 + (longlong)(pTVar17->ObjectStorage).Pad) + 0x10))
      {
        uVar7 = uVar16;
        if ((int)uVar15 < (this->Accumulators).ArrayNum) {
          uVar7 = uVar18;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                    *)(*pcVar5)();
          return pTVar9;
        }
        pFVar14 = (this->Accumulators).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar14 + -0x10 + (longlong)(pTVar17->ObjectStorage).Pad) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                    *)(*pcVar5)();
          return pTVar9;
        }
        lVar2 = *(longlong *)(pFVar14 + -0x10 + (longlong)(pTVar17->ObjectStorage).Pad);
        if (param_2->RootBranchName == *(FName *)(lVar2 + 0x18)) {
          iVar8 = (param_2->LayerName).Data.ArrayNum;
          if (iVar8 == *(int *)(lVar2 + 0x28)) {
            if (1 < iVar8) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->LayerName).Data.AllocatorInstance.Data,
                                 *(wchar_t **)(lVar2 + 0x20));
              bVar6 = iVar8 == 0;
              goto LAB_14ddc11af;
            }
          }
          else {
            bVar6 = iVar8 + *(int *)(lVar2 + 0x28) == 1;
LAB_14ddc11af:
            if (!bVar6) goto LAB_14ddc1249;
          }
          iVar8 = (param_2->RendererName).Data.ArrayNum;
          if (iVar8 == *(int *)(lVar2 + 0x38)) {
            if (1 < iVar8) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->RendererName).Data.AllocatorInstance.Data,
                                 *(wchar_t **)(lVar2 + 0x30));
              bVar6 = iVar8 == 0;
              goto LAB_14ddc11e0;
            }
          }
          else {
            bVar6 = iVar8 + *(int *)(lVar2 + 0x38) == 1;
LAB_14ddc11e0:
            if (!bVar6) goto LAB_14ddc1249;
          }
          iVar8 = (param_2->SubResourceName).Data.ArrayNum;
          if (iVar8 == *(int *)(lVar2 + 0x48)) {
            if (1 < iVar8) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->SubResourceName).Data.AllocatorInstance.Data,
                                 *(wchar_t **)(lVar2 + 0x40));
              bVar6 = iVar8 == 0;
              goto LAB_14ddc120d;
            }
          }
          else {
            bVar6 = iVar8 + *(int *)(lVar2 + 0x48) == 1;
LAB_14ddc120d:
            if (!bVar6) goto LAB_14ddc1249;
          }
          iVar8 = (param_2->CameraName).Data.ArrayNum;
          if (iVar8 == *(int *)(lVar2 + 0x58)) {
            if (1 < iVar8) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->CameraName).Data.AllocatorInstance.Data,
                                 *(wchar_t **)(lVar2 + 0x50));
              bVar6 = iVar8 == 0;
              goto LAB_14ddc123e;
            }
          }
          else {
            bVar6 = iVar8 + *(int *)(lVar2 + 0x58) == 1;
LAB_14ddc123e:
            if (!bVar6) goto LAB_14ddc1249;
          }
          if ((int)uVar15 < (this->Accumulators).ArrayNum) {
            uVar16 = uVar18;
          }
          if (uVar16 != 0) goto LAB_14ddc1871;
          goto LAB_14ddc184b;
        }
      }
LAB_14ddc1249:
      iVar8 = (this->Accumulators).ArrayNum;
      pTVar11 = (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                 *)(ulonglong)(uVar15 + 1);
      pTVar17 = (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                 *)&pTVar17->ObjectStorage;
    } while ((int)(uVar15 + 1) < iVar8);
    pTVar11 = pTVar12;
    pTVar17 = pTVar12;
    if (0 < iVar8) {
      do {
        uVar15 = (uint)pTVar11;
        uVar7 = uVar16;
        if ((int)uVar15 < (this->Accumulators).ArrayNum) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                    *)(*pcVar5)();
          return pTVar9;
        }
        pFVar14 = (this->Accumulators).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar14 + -0x10 + (longlong)(pTVar17->ObjectStorage).Pad) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                    *)(*pcVar5)();
          return pTVar9;
        }
        if (*(int *)(*(longlong *)(pFVar14 + -0x10 + (longlong)(pTVar17->ObjectStorage).Pad) + 0x68)
            == 0) {
          if (uVar15 != 0xffffffff) goto LAB_14ddc152d;
          break;
        }
        pTVar11 = (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                   *)(ulonglong)(uVar15 + 1);
        pTVar17 = (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                   *)&pTVar17->ObjectStorage;
      } while ((int)(uVar15 + 1) < (this->Accumulators).ArrayNum);
    }
  }
  uVar15 = (this->Accumulators).ArrayNum;
  pTVar10 = MakeShared<FImageOverlappedAccumulator,1>(&local_60);
  local_78.Object = pTVar10->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  pTVar11 = ::operator_new(0x80);
  if (pTVar11 !=
      (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
       *)0x0) {
    pTVar12 = SharedPointerInternals::
              TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
              ::
              TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1><TSharedPtr<FImageOverlappedAccumulator,1>_&>
                        (pTVar11,&local_78);
  }
  local_98 = &pTVar12->ObjectStorage;
  pTStack_90 = pTVar12;
  if ((local_98 ==
       (TTypeCompatibleBytes<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance> *)
       0x0) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  local_b8 = local_98;
  pTStack_b0 = pTStack_90;
  if (pTVar12 !=
      (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
       *)0x0) {
    LOCK();
    *(int *)&pTVar12->_padding_ = (int)pTVar12->_padding_ + 1;
    UNLOCK();
  }
  pFVar14 = (this->Accumulators).AllocatorInstance.Data;
  if (((pFVar14 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       pFVar14 + (longlong)(this->Accumulators).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  piVar1 = &(this->Accumulators).ArrayMax;
  iVar8 = (this->Accumulators).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Accumulators).AllocatorInstance,piVar1);
  }
  (this->Accumulators).ArrayNum = iVar8 + 1;
  pFVar14 = (this->Accumulators).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(TTypeCompatibleBytes<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance> **)
   pFVar14 = local_b8;
  *(TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
    **)(pFVar14 + 8) = pTStack_b0;
  pTStack_b0 = (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                *)0x0;
  local_b8 = (TTypeCompatibleBytes<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance>
              *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar12);
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                      ::__l2::Name,"ImageOverlappedAccumulator");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_84 = `public:_static_class_FName___cdecl_FImageOverlappedAccumulator::GetName(void)'::__l2
               ::Name;
    ::FName::ToString(&local_84,&local_50);
    Logging::Private::BasicLog<5>
              (&`public:_class_TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>___cdecl_UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::GetAccumulatorInstance_GameThread<FImageOverlappedAccumulator>(int,FMovieGraphRenderDataIdentifier_const&___ptr64)___ptr64'
                ::__l16::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
LAB_14ddc152d:
  if ((int)uVar15 < (this->Accumulators).ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  pFVar14 = (this->Accumulators).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  if ((*(longlong *)pFVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  lVar2 = *(longlong *)pFVar14;
  LOCK();
  *(undefined4 *)(lVar2 + 0x68) = 1;
  UNLOCK();
  *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
  plVar13 = (longlong *)(lVar2 + 0x60);
  if (plVar13 != &local_68) {
    puVar3 = (undefined8 *)*plVar13;
    *plVar13 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  uVar7 = 0;
  uVar16 = uVar7;
  if ((int)uVar15 < (this->Accumulators).ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  pFVar14 = (this->Accumulators).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  if ((*(longlong *)pFVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  *(int *)(*(longlong *)pFVar14 + 0x10) = param_1;
  uVar16 = uVar7;
  if ((int)uVar15 < (this->Accumulators).ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  pFVar14 = (this->Accumulators).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  if ((*(longlong *)pFVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  lVar2 = *(longlong *)pFVar14;
  *(FName *)(lVar2 + 0x18) = param_2->RootBranchName;
  ::FString::operator=((FString *)(lVar2 + 0x20),&param_2->LayerName);
  ::FString::operator=((FString *)(lVar2 + 0x30),&param_2->RendererName);
  ::FString::operator=((FString *)(lVar2 + 0x40),&param_2->SubResourceName);
  ::FString::operator=((FString *)(lVar2 + 0x50),&param_2->CameraName);
  local_c8[0] = 0;
  uVar16 = uVar7;
  if ((int)uVar15 < (this->Accumulators).ArrayNum) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  pFVar14 = (this->Accumulators).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  if ((*(longlong *)pFVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
             (*pcVar5)();
    return pTVar9;
  }
  plVar13 = (longlong *)(*(longlong *)pFVar14 + 0x60);
  if (plVar13 != local_c8) {
    puVar3 = (undefined8 *)*plVar13;
    *plVar13 = 0;
    local_c8[0] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((int)uVar15 < (this->Accumulators).ArrayNum) {
    uVar7 = ~uVar15 >> 0x1f;
  }
  if (uVar7 == 0) {
LAB_14ddc184b:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *)
               (*pcVar5)();
      return pTVar9;
    }
  }
LAB_14ddc1871:
  pFVar14 = (this->Accumulators).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  __return_storage_ptr__->Object = *(FInstance **)pFVar14;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a8 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_a8);
  }
  return __return_storage_ptr__;
}

