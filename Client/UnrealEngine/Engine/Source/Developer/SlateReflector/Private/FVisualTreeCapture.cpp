// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 25

// operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de2dc0

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *local_res10;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de2e4b;
    }
  }
  bVar8 = false;
LAB_142de2e4b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 0x98 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateBoxElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de2ee3;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de2ee3:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de30b7;
                goto LAB_142de3160;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de30b7:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de3160:
      pFVar20 = (FSlateDrawElement *)(pFVar20[2].RenderTransform.M.M + 1);
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de3390

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de341b;
    }
  }
  bVar8 = false;
LAB_142de341b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 0x58 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateCustomDrawerElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de34b3;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de34b3:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de3687;
                goto LAB_142de3730;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de3687:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de3730:
      pFVar20 = (FSlateDrawElement *)&pFVar20[1].RenderTransform.Trans;
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de3960

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  SWidget *this_00;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FSlateDrawElement *pFVar8;
  bool bVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar14;
  ulonglong uVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  FSlateDrawElement *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  if (this_00 != (SWidget *)0x0) {
    pTVar14 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar14->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar9 = true;
      goto LAB_142de39e8;
    }
  }
  bVar9 = false;
LAB_142de39e8:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    local_res20 = (FSlateDrawElement *)(uVar15 * 0x80 + (longlong)pFVar20);
    while( true ) {
      pFVar8 = local_res20;
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateCustomVertsElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar8) break;
      pSVar16 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar16;
      pSVar19 = pSVar21;
      if (pSVar16 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar16->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de3a83;
          LOCK();
          aVar10 = *(atomic<int> *)&pSVar16->_padding_;
          bVar23 = aVar7 == aVar10;
          if (bVar23) {
            *(atomic<int> *)&pSVar16->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar23);
        pSVar17 = pSVar16;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de3a83:
      pSVar16 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar16 = pSVar21;
      }
      if ((pSVar16 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar11 = *(uint *)(lVar22 + 0x18);
      if (uVar11 == *(uint *)(lVar22 + 0x1c)) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar11 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(lVar22 + 0x18)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar13 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar13 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar13 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar13;
                if (iVar13 == -1) goto LAB_142de3c57;
                goto LAB_142de3d00;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar13 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de3c57:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = *(int *)(lVar5 + 0x38);
        if (iVar13 == *(int *)(lVar5 + 0x3c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar13 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar13 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar13;
      }
LAB_142de3d00:
      pFVar20 = (FSlateDrawElement *)&pFVar20[1].ClipStateHandle.PrecachedClipIndex;
      uVar15 = (ulonglong)local_res18;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de3f30

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de3fbb;
    }
  }
  bVar8 = false;
LAB_142de3fbb:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 0x70 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateGradientElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de4053;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de4053:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de4227;
                goto LAB_142de42d0;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de4227:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de42d0:
      pFVar20 = (FSlateDrawElement *)&pFVar20[1].LayerId;
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de4500

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *local_res10
  ;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de458b;
    }
  }
  bVar8 = false;
LAB_142de458b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 0x88 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateLineElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de4623;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de4623:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de47f7;
                goto LAB_142de48a0;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de47f7:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de48a0:
      pFVar20 = (FSlateDrawElement *)&pFVar20[1].BatchFlags;
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de4ad0

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  SWidget *this_00;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FSlateDrawElement *pFVar8;
  bool bVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar14;
  ulonglong uVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  FSlateDrawElement *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  if (this_00 != (SWidget *)0x0) {
    pTVar14 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar14->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar9 = true;
      goto LAB_142de4b58;
    }
  }
  bVar9 = false;
LAB_142de4b58:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    local_res20 = (FSlateDrawElement *)(uVar15 * 0x80 + (longlong)pFVar20);
    while( true ) {
      pFVar8 = local_res20;
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlatePostProcessElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar8) break;
      pSVar16 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar16;
      pSVar19 = pSVar21;
      if (pSVar16 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar16->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de4bf3;
          LOCK();
          aVar10 = *(atomic<int> *)&pSVar16->_padding_;
          bVar23 = aVar7 == aVar10;
          if (bVar23) {
            *(atomic<int> *)&pSVar16->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar23);
        pSVar17 = pSVar16;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de4bf3:
      pSVar16 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar16 = pSVar21;
      }
      if ((pSVar16 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar11 = *(uint *)(lVar22 + 0x18);
      if (uVar11 == *(uint *)(lVar22 + 0x1c)) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar11 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(lVar22 + 0x18)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar13 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar13 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar13 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar13;
                if (iVar13 == -1) goto LAB_142de4dc7;
                goto LAB_142de4e70;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar13 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de4dc7:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = *(int *)(lVar5 + 0x38);
        if (iVar13 == *(int *)(lVar5 + 0x3c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar13 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar13 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar13;
      }
LAB_142de4e70:
      pFVar20 = (FSlateDrawElement *)&pFVar20[1].ClipStateHandle.PrecachedClipIndex;
      uVar15 = (ulonglong)local_res18;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de50a0

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de512b;
    }
  }
  bVar8 = false;
LAB_142de512b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 0xd0 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateRoundedBoxElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de51c3;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de51c3:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de5397;
                goto LAB_142de5440;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de5397:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de5440:
      pFVar20 = (FSlateDrawElement *)&pFVar20[2].BatchFlags;
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de5670

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  SWidget *this_00;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FSlateDrawElement *pFVar8;
  bool bVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar14;
  SWidget *pSVar15;
  ulonglong uVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  FSlateDrawElement *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  if (this_00 != (SWidget *)0x0) {
    pTVar14 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar14->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar9 = true;
      goto LAB_142de56f8;
    }
  }
  bVar9 = false;
LAB_142de56f8:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    local_res18 = param_1->ArrayNum;
    uVar16 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    local_res20 = pFVar20 + uVar16 * 2;
    while( true ) {
      pFVar8 = local_res20;
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar16) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateShapedTextElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar8) break;
      pSVar15 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar15;
      pSVar19 = pSVar21;
      if (pSVar15 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar15->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de5794;
          LOCK();
          aVar10 = *(atomic<int> *)&pSVar15->_padding_;
          bVar23 = aVar7 == aVar10;
          if (bVar23) {
            *(atomic<int> *)&pSVar15->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar23);
        pSVar17 = pSVar15;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de5794:
      pSVar15 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar15 = pSVar21;
      }
      if ((pSVar15 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar11 = *(uint *)(lVar22 + 0x18);
      if (uVar11 == *(uint *)(lVar22 + 0x1c)) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar11 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(lVar22 + 0x18)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar13 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar13 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar13 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar13;
                if (iVar13 == -1) goto LAB_142de5968;
                goto LAB_142de5a11;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar13 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de5968:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = *(int *)(lVar5 + 0x38);
        if (iVar13 == *(int *)(lVar5 + 0x3c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar13 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar13 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar13;
      }
LAB_142de5a11:
      pFVar20 = pFVar20 + 2;
      uVar16 = (ulonglong)local_res18;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de5c40

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  SWidget *this_00;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  FSlateDrawElement *pFVar8;
  bool bVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar14;
  SWidget *pSVar15;
  ulonglong uVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  FSlateDrawElement *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  if (this_00 != (SWidget *)0x0) {
    pTVar14 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar14->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar9 = true;
      goto LAB_142de5cc8;
    }
  }
  bVar9 = false;
LAB_142de5cc8:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    local_res18 = param_1->ArrayNum;
    uVar16 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    local_res20 = pFVar20 + uVar16 * 2;
    while( true ) {
      pFVar8 = local_res20;
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar16) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateSplineElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar8) break;
      pSVar15 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar15;
      pSVar19 = pSVar21;
      if (pSVar15 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar15->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de5d64;
          LOCK();
          aVar10 = *(atomic<int> *)&pSVar15->_padding_;
          bVar23 = aVar7 == aVar10;
          if (bVar23) {
            *(atomic<int> *)&pSVar15->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar23);
        pSVar17 = pSVar15;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de5d64:
      pSVar15 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar15 = pSVar21;
      }
      if ((pSVar15 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar11 = *(uint *)(lVar22 + 0x18);
      if (uVar11 == *(uint *)(lVar22 + 0x1c)) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar11 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(lVar22 + 0x18)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar13 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar13 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar13 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar13;
                if (iVar13 == -1) goto LAB_142de5f38;
                goto LAB_142de5fe1;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar13 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de5f38:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = *(int *)(lVar5 + 0x38);
        if (iVar13 == *(int *)(lVar5 + 0x3c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar13 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar13 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar13;
      }
LAB_142de5fe1:
      pFVar20 = pFVar20 + 2;
      uVar16 = (ulonglong)local_res18;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de6210

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *local_res10
  ;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de629b;
    }
  }
  bVar8 = false;
LAB_142de629b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 200 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateTextElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de6333;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de6333:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de6507;
                goto LAB_142de65b0;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de6507:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de65b0:
      pFVar20 = (FSlateDrawElement *)&pFVar20[2].ClipStateHandle.PrecachedClipIndex;
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de67e0

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  EClippingFlags EVar1;
  longlong *plVar2;
  FSlateClippingState *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar13;
  SWidget *pSVar14;
  ulonglong uVar15;
  FSlateDrawElement *pFVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
  *local_res10;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar2 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar2 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(SWidget **)(*plVar2 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar13 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar13->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar8 = true;
      goto LAB_142de686b;
    }
  }
  bVar8 = false;
LAB_142de686b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    local_res18 = param_1->ArrayNum;
    uVar15 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar16 = (FSlateDrawElement *)(uVar15 * 0x68 + (longlong)pFVar20);
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar15) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateViewportElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar16) break;
      pSVar14 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar14;
      pSVar19 = pSVar21;
      if (pSVar14 != (SWidget *)0x0) {
        aVar7 = *(atomic<int> *)&pSVar14->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142de6903;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar14->_padding_;
          bVar23 = aVar7 == aVar9;
          if (bVar23) {
            *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar23);
        pSVar17 = pSVar14;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de6903:
      pSVar14 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar14 = pSVar21;
      }
      if ((pSVar14 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = *(uint *)(lVar22 + 0x18);
      if (uVar10 == *(uint *)(lVar22 + 0x1c)) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar10 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar3 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar3 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar11 = 0;
        if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar10 * 0x40;
        puVar4 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar12 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar4 != puVar4 + (longlong)iVar12 * 9) {
          EVar1 = pFVar3->Flags;
          puVar18 = puVar4;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar1) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar3->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar3->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar3->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar3->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar12 = (int)(((longlong)puVar18 - (longlong)puVar4) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar12;
                if (iVar12 == -1) goto LAB_142de6ad7;
                goto LAB_142de6b80;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar4 + (longlong)iVar12 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de6ad7:
        lVar5 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar5 + 0x30) <= pFVar3) &&
            (pFVar3 < *(FSlateClippingState **)(lVar5 + 0x30) + *(int *)(lVar5 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)(lVar5 + 0x38);
        if (iVar12 == *(int *)(lVar5 + 0x3c)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar5 + 0x30),(int *)(lVar5 + 0x3c));
        }
        *(int *)(lVar5 + 0x38) = iVar12 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 0x48),
                   pFVar3);
        *(int *)(lVar22 + 0x24) = iVar12;
      }
LAB_142de6b80:
      pFVar20 = (FSlateDrawElement *)&pFVar20[1].LocalSize;
      uVar15 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// operator()<TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_> @ 142de6db0

void __thiscall
`FVisualTreeCapture::AddInvalidationRootCachedEntries'::__l13::<lambda_1>::
operator()<TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
          (void *this,
          TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>
          *param_1)

{
  FSlateDrawElement *pFVar1;
  EClippingFlags EVar2;
  longlong *plVar3;
  FSlateClippingState *pFVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  atomic<int> aVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar14;
  SWidget *pSVar15;
  ulonglong uVar16;
  SWidget *pSVar17;
  undefined8 *puVar18;
  SWidget *this_00;
  SWidget *pSVar19;
  FSlateDrawElement *pFVar20;
  SWidget *pSVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8 [2];
  TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_> *local_res10
  ;
  uint local_res18;
  SWidget *local_res20;
  TSharedRef<SWidget_const_,1> local_70;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_60 [2];
  
  bVar23 = false;
  local_res8[0] = 0;
  plVar3 = *(longlong **)this;
  local_res10 = param_1;
  if ((*plVar3 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = *(SWidget **)(*plVar3 + 0x160);
  local_res20 = this_00;
  if (this_00 != (SWidget *)0x0) {
    pTVar14 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(this_00,local_60);
    bVar23 = true;
    if (pTVar14->Object == (FInvisibleToWidgetReflectorMetaData *)0x0) {
      bVar9 = true;
      goto LAB_142de6e3b;
    }
  }
  bVar9 = false;
LAB_142de6e3b:
  if (bVar23) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    local_res18 = param_1->ArrayNum;
    uVar16 = (ulonglong)(int)local_res18;
    pFVar20 = (FSlateDrawElement *)(param_1->AllocatorInstance)._padding_;
    pFVar1 = pFVar20 + uVar16;
    while( true ) {
      pSVar21 = (SWidget *)0x0;
      if (param_1->ArrayNum != (int)uVar16) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSlateDrawElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar20 == pFVar1) break;
      pSVar15 = (SWidget *)this_00->_padding_;
      lVar22 = **(longlong **)((longlong)this + 8);
      pSVar17 = pSVar15;
      pSVar19 = pSVar21;
      if (pSVar15 != (SWidget *)0x0) {
        aVar8 = *(atomic<int> *)&pSVar15->_padding_;
        do {
          pSVar17 = pSVar21;
          if (aVar8 == (atomic<int>)0x0) goto LAB_142de6ed2;
          LOCK();
          aVar10 = *(atomic<int> *)&pSVar15->_padding_;
          bVar23 = aVar8 == aVar10;
          if (bVar23) {
            *(atomic<int> *)&pSVar15->_padding_ = (atomic<int>)((int)aVar8 + 1);
            aVar10 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar10;
        } while (!bVar23);
        pSVar17 = pSVar15;
        pSVar19 = (SWidget *)this_00->_padding_;
      }
LAB_142de6ed2:
      pSVar15 = (SWidget *)&pSVar19->_padding_;
      if (pSVar19 == (SWidget *)0x0) {
        pSVar15 = pSVar21;
      }
      if ((pSVar15 != (SWidget *)&this_00->_padding_) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x69a,L""), bVar23)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar23)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_70.Object = pSVar19;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar17;
      if ((pSVar19 == (SWidget *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar23)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar11 = *(uint *)(lVar22 + 0x18);
      if (uVar11 == *(uint *)(lVar22 + 0x1c)) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)(lVar22 + 0x10),(int *)(lVar22 + 0x1c));
      }
      *(uint *)(lVar22 + 0x18) = uVar11 + 1;
      FVisualEntry::FVisualEntry
                ((FVisualEntry *)(*(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40),
                 &local_70,pFVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar17);
      pFVar4 = (pFVar20->ClipStateHandle).CachedClipState;
      if (pFVar4 != (FSlateClippingState *)0x0) {
        lVar22 = **(longlong **)((longlong)this + 8);
        uVar12 = 0;
        if ((int)uVar11 < *(int *)(lVar22 + 0x18)) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar22 = *(longlong *)(lVar22 + 0x10) + (longlong)(int)uVar11 * 0x40;
        puVar5 = *(undefined8 **)(**(longlong **)((longlong)this + 8) + 0x30);
        iVar13 = *(int *)(**(longlong **)((longlong)this + 8) + 0x38);
        if (puVar5 != puVar5 + (longlong)iVar13 * 9) {
          EVar2 = pFVar4->Flags;
          puVar18 = puVar5;
          do {
            if (*(EClippingFlags *)(puVar18 + 7) == EVar2) {
              if ((((bool)*(char *)((longlong)puVar18 + 0x34) == (pFVar4->ScissorRect).bIsSet) &&
                  (((*(char *)((longlong)puVar18 + 0x34) == '\0' ||
                    (bVar23 = FSlateClippingZone::operator==
                                        ((FSlateClippingZone *)(puVar18 + 2),
                                         &(pFVar4->ScissorRect).TypedValue), bVar23)) &&
                   (*(int *)(puVar18 + 1) == (pFVar4->StencilQuads).ArrayNum)))) &&
                 (bVar23 = CompareItems<FSlateClippingZone,int>
                                     ((FSlateClippingZone *)*puVar18,
                                      (FSlateClippingZone *)
                                      (pFVar4->StencilQuads).AllocatorInstance.Data,
                                      *(int *)(puVar18 + 1)), bVar23)) {
                iVar13 = (int)(((longlong)puVar18 - (longlong)puVar5) / 0x48);
                *(int *)(lVar22 + 0x24) = iVar13;
                if (iVar13 == -1) goto LAB_142de70a5;
                goto LAB_142de714d;
              }
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != puVar5 + (longlong)iVar13 * 9);
        }
        *(undefined4 *)(lVar22 + 0x24) = 0xffffffff;
LAB_142de70a5:
        lVar6 = **(longlong **)((longlong)this + 8);
        if (((*(FSlateClippingState **)(lVar6 + 0x30) <= pFVar4) &&
            (pFVar4 < *(FSlateClippingState **)(lVar6 + 0x30) + *(int *)(lVar6 + 0x3c))) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = *(int *)(lVar6 + 0x38);
        if (iVar13 == *(int *)(lVar6 + 0x3c)) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,(ForAnyElementType *)(lVar6 + 0x30),(int *)(lVar6 + 0x3c));
        }
        *(int *)(lVar6 + 0x38) = iVar13 + 1;
        FSlateClippingState::FSlateClippingState
                  ((FSlateClippingState *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar13 * 0x48),
                   pFVar4);
        *(int *)(lVar22 + 0x24) = iVar13;
      }
LAB_142de714d:
      pFVar20 = pFVar20 + 1;
      uVar16 = (ulonglong)local_res18;
      this_00 = local_res20;
      param_1 = local_res10;
    }
  }
  return;
}

// FVisualTreeCapture @ 142e0b7a0

FVisualTreeCapture * __thiscall FVisualTreeCapture::FVisualTreeCapture(FVisualTreeCapture *this)

{
  *(undefined8 *)&this->VisualTrees = 0;
  *(undefined8 *)&(this->VisualTrees).field_0x8 = 0;
  *(undefined8 *)&(this->VisualTrees).field_0x20 = 0;
  *(undefined4 *)&(this->VisualTrees).field_0x28 = 0;
  *(undefined4 *)&(this->VisualTrees).field_0x2c = 0x80;
  *(undefined4 *)&(this->VisualTrees).field_0x34 = 0;
  *(undefined4 *)&(this->VisualTrees).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VisualTrees).field_0x40 = 0;
  *(undefined4 *)&(this->VisualTrees).field_0x48 = 0;
  this->bIsEnabled = false;
  this->WindowIsInvalidationRootCounter = 0;
  this->WidgetIsInvalidationRootCounter = 0;
  this->WidgetIsInvisibleToWidgetReflectorCounter = 0;
  return this;
}

// ~FVisualTreeCapture @ 142e14430

void __thiscall FVisualTreeCapture::~FVisualTreeCapture(FVisualTreeCapture *this)

{
  void *pvVar1;
  
  Disable(this);
  *(undefined4 *)&(this->VisualTrees).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VisualTrees).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddInvalidationRootCachedEntries @ 142e2a9d0

void __thiscall
FVisualTreeCapture::AddInvalidationRootCachedEntries
          (FVisualTreeCapture *this,TSharedRef<FVisualTreeSnapshot,1> *param_1,
          FSlateInvalidationRoot *param_2)

{
  int iVar1;
  FSlateCachedElementData *pFVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FSlateCachedElementList,1> *pTVar5;
  TSharedPtr<FSlateCachedElementList,1> *pTVar6;
  undefined1 local_res10 [8];
  <lambda_1> local_28;
  
  if (param_2 == (FSlateInvalidationRoot *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InvalidationRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\VisualTreeCapture.cpp"
                       ,0xb9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->CachedElementData;
  iVar1 = (pFVar2->CachedElementLists).ArrayNum;
  pTVar5 = (TSharedPtr<FSlateCachedElementList,1> *)
           (pFVar2->CachedElementLists).AllocatorInstance.Data;
  pTVar6 = pTVar5 + iVar1;
  while( true ) {
    if ((pFVar2->CachedElementLists).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSlateCachedElementList,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pTVar5 == pTVar6) break;
    local_28.CachedElement = pTVar5;
    local_28.Tree = param_1;
    if (pTVar5->Object == (FSlateCachedElementList *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::Core::Private::Tuple::
    TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
    Do<_FVisualTreeCapture::AddInvalidationRootCachedEntries_::__l13::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
              (&local_28,&pTVar5->Object->DrawElements);
    pTVar5 = pTVar5 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BeginWidgetPaint @ 142e2c900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualTreeCapture::BeginWidgetPaint
          (FVisualTreeCapture *this,SWidget *param_1,FPaintArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6)

{
  longlong lVar1;
  FInvisibleToWidgetReflectorMetaData *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  SWindow *pSVar7;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  TSharedRef<SWidget_const_,1> local_28;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_18;
  
  pSVar7 = FSlateWindowElementList::GetPaintWindow(param_5);
  pTVar8 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                   *)this,pSVar7);
  if (pTVar8 == (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
    lVar1 = *(longlong *)&pTVar8->field_0x8;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 != 0) {
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_28);
      local_38 = pTVar9->Object;
      local_30 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->WeakReferenceCount = (atomic<int>)((int)local_30->WeakReferenceCount + 1);
        UNLOCK();
      }
      if ((*(SWidget ***)(lVar1 + 0x40) <= &local_38) &&
         (&local_38 < *(SWidget ***)(lVar1 + 0x40) + (longlong)*(int *)(lVar1 + 0x4c) * 2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = *(int *)(lVar1 + 0x48);
      if (iVar6 == *(int *)(lVar1 + 0x4c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)(lVar1 + 0x40),(int *)(lVar1 + 0x4c));
      }
      *(int *)(lVar1 + 0x48) = iVar6 + 1;
      puVar11 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar1 + 0x40));
      *puVar11 = local_38;
      puVar11[1] = local_30;
      local_30 = (TReferenceControllerBase<1> *)0x0;
      local_38 = (SWidget *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      cVar5 = (**(code **)(param_1->_padding_ + 0x210))(param_1);
      if (cVar5 != '\0') {
        this->WidgetIsInvalidationRootCounter = this->WidgetIsInvalidationRootCounter + 1;
      }
      pTVar10 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(param_1,&local_18);
      pFVar2 = pTVar10->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if (pFVar2 != (FInvisibleToWidgetReflectorMetaData *)0x0) {
        this->WidgetIsInvisibleToWidgetReflectorCounter =
             this->WidgetIsInvisibleToWidgetReflectorCounter + 1;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// BeginWindow @ 142e2cab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualTreeCapture::BeginWindow(FVisualTreeCapture *this,FSlateWindowElementList *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  SWindow *pSVar8;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  SWindow *local_res18 [2];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> local_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  SWindow **local_48;
  TReferenceControllerBase<1> **local_40;
  
  pSVar8 = FSlateWindowElementList::GetPaintWindow(param_1);
  pTVar9 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                   *)this,pSVar8);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
    local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_68 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x8;
    local_60.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar9->field_0x10;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_68 != (TReferenceControllerBase<1> *)0x0) goto LAB_142e2ccba;
    local_68 = (TReferenceControllerBase<1> *)0x0;
  }
  pTVar10 = ::operator_new(0x60);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_142e2cbc0:
    if (((pTVar12->_padding_ == 0) || (*(longlong *)&pTVar12->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&pTVar12->SharedReferenceCount + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar12->_padding_ = (longlong)pTVar12;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pTVar12->SharedReferenceCount;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12 = pTVar10 + 1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFVisualTreeSnapshot___00_SharedPointerInternals__6B_;
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[3]._padding_ = 0;
    pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[4]._padding_ = 0;
    pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[5]._padding_ = 0;
    pTVar10[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11 = pTVar10;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) goto LAB_142e2cbc0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = 0;
  local_68 = pTVar12;
  local_50.ReferenceController = pTVar11;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  local_res18[0] = FSlateWindowElementList::GetPaintWindow(param_1);
  local_48 = local_res18;
  local_40 = &local_68;
  TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<SWindow_const_*_&&,TSharedPtr<FVisualTreeSnapshot,1>_const_&>_>
            ((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<SWindow_const_*_&&,TSharedPtr<FVisualTreeSnapshot,1>_const_&>
                      *)&stack0x00000008,(bool *)&local_48);
  if (local_68 == (TReferenceControllerBase<1> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
LAB_142e2ccba:
  pTVar11 = local_68;
  paVar2 = &local_68[1].WeakReferenceCount;
  if ((int)*paVar2 < 0) {
    DestructItems<FVisualEntry,int>
              ((FVisualEntry *)local_68[1]._padding_,(int)local_68[1].SharedReferenceCount);
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    if (*paVar2 != (atomic<int>)0x0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)(pTVar11 + 1),0,(int *)paVar2);
    }
  }
  else {
    DestructItems<FVisualEntry,int>
              ((FVisualEntry *)local_68[1]._padding_,(int)local_68[1].SharedReferenceCount);
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
  }
  if (local_68 == (TReferenceControllerBase<1> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar11 = local_68;
  paVar2 = &local_68[2].WeakReferenceCount;
  if ((int)*paVar2 < 0) {
    DestructItems<FSlateClippingState,int>
              ((FSlateClippingState *)local_68[2]._padding_,(int)local_68[2].SharedReferenceCount);
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    if (*paVar2 != (atomic<int>)0x0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)(pTVar11 + 2),0,(int *)paVar2);
    }
  }
  else {
    DestructItems<FSlateClippingState,int>
              ((FSlateClippingState *)local_68[2]._padding_,(int)local_68[2].SharedReferenceCount);
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
  }
  if (local_68 == (TReferenceControllerBase<1> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar11 = local_68;
  paVar2 = &local_68[3].WeakReferenceCount;
  if ((int)*paVar2 < 0) {
    DestructItems<FSlateClippingState,int>
              ((FSlateClippingState *)local_68[3]._padding_,(int)local_68[3].SharedReferenceCount);
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    if (*paVar2 != (atomic<int>)0x0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)(pTVar11 + 3),0,(int *)paVar2);
    }
  }
  else {
    DestructItems<FSlateClippingState,int>
              ((FSlateClippingState *)local_68[3]._padding_,(int)local_68[3].SharedReferenceCount);
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
  }
  pSVar8 = FSlateWindowElementList::GetPaintWindow(param_1);
  cVar7 = (**(code **)(pSVar8->_padding_ + 0x210))(pSVar8);
  if (cVar7 != '\0') {
    this->WindowIsInvalidationRootCounter = this->WindowIsInvalidationRootCounter + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  return;
}

// Disable @ 142e722b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVisualTreeCapture::Disable(FVisualTreeCapture *this)

{
  FSlateApplication *pFVar1;
  
  if (this->bIsEnabled != false) {
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      pFVar1 = FSlateApplication::Get();
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar1->WindowBeingDestroyedEvent,this);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::BeginWindow,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::EndWindow,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::BeginWidgetPaint,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::EndWidgetPaint,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FSlateDebugging::ElementTypeAdded,this);
    this->bIsEnabled = false;
  }
  return;
}

// ElementTypeAdded @ 142e733a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualTreeCapture::ElementTypeAdded
          (FVisualTreeCapture *this,FSlateDebuggingElementTypeAddedEventArgs *param_1)

{
  FScriptContainerElement FVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  SWindow *pSVar7;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  
  if (((this->WindowIsInvalidationRootCounter < 1) && (this->WidgetIsInvalidationRootCounter < 1))
     && (this->WidgetIsInvisibleToWidgetReflectorCounter < 1)) {
    pSVar7 = FSlateWindowElementList::GetPaintWindow(param_1->ElementList);
    pTVar8 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                     *)this,pSVar7);
    if (pTVar8 == (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar11 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
      lVar2 = *(longlong *)&pTVar8->field_0x8;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x48))) {
        uVar10 = *(int *)(lVar2 + 0x48) - 1;
        uVar9 = 0;
        if ((int)uVar10 < *(int *)(lVar2 + 0x48)) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
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
        iVar6 = *(int *)(lVar2 + 0x18);
        lVar12 = *(longlong *)(lVar2 + 0x40) + (longlong)*(int *)(lVar2 + 0x48) * 0x10;
        if (iVar6 == *(int *)(lVar2 + 0x1c)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
        }
        *(int *)(lVar2 + 0x18) = iVar6 + 1;
        FVar1 = (FScriptContainerElement)param_1->ElementType;
        pFVar3 = ((ForAnyElementType *)(lVar2 + 0x10))->Data;
        *(int *)(pFVar3 + (longlong)iVar6 * 0x40 + 0x28) = param_1->ElementIndex;
        pFVar3[(longlong)iVar6 * 0x40 + 0x2c] = FVar1;
        pFVar3[(longlong)iVar6 * 0x40 + 0x2d] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x40 + 0x30) = *(undefined8 *)(lVar12 + -0x10);
        lVar2 = *(longlong *)(lVar12 + -8);
        *(longlong *)(pFVar3 + (longlong)iVar6 * 0x40 + 0x38) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
          UNLOCK();
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  return;
}

// Enable @ 142e73940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVisualTreeCapture::Enable(FVisualTreeCapture *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  undefined1 local_18 [16];
  
  if (this->bIsEnabled == false) {
    pFVar3 = FSlateApplication::Get();
    TMulticastDelegateRegistration<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>::
    AddRaw<FVisualTreeCapture>
              ((TMulticastDelegateRegistration<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
                *)&pFVar3->WindowBeingDestroyedEvent,(FVisualTreeCapture *)&stack0x00000008,
               (pmf_7b5a04c4)this);
    TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FVisualTreeCapture>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::BeginWindow,(FVisualTreeCapture *)&stack0x00000010,
               (pmf_0818e570)this);
    TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FVisualTreeCapture>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::EndWindow,(FVisualTreeCapture *)&stack0x00000018,
               (pmf_0818e570)this);
    TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
    ::AddRaw<FVisualTreeCapture>
              ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::BeginWidgetPaint,(FVisualTreeCapture *)&stack0x00000020,
               (pmf_f586e512)this);
    TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
    ::AddRaw<FVisualTreeCapture>
              ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::EndWidgetPaint,(FVisualTreeCapture *)local_18,(pmf_3824bdf4)this
              );
    TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<FVisualTreeCapture>
              ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::ElementTypeAdded,(FVisualTreeCapture *)(local_18 + 8),
               (pmf_d29daee2)this);
    this->bIsEnabled = true;
    this->WindowIsInvalidationRootCounter = 0;
    this->WidgetIsInvalidationRootCounter = 0;
    this->WidgetIsInvisibleToWidgetReflectorCounter = 0;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4767386614496231561>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\VisualTreeCapture.cpp"
                       ,0x89,"bIsEnabled == false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// EndWidgetPaint @ 142e73d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualTreeCapture::EndWidgetPaint
          (FVisualTreeCapture *this,SWidget *param_1,FSlateWindowElementList *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FVisualTreeSnapshot *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  FInvisibleToWidgetReflectorMetaData *pFVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  SWindow *pSVar11;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar12;
  FSlateInvalidationRoot *pFVar13;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> *pTVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  TSharedRef<FVisualTreeSnapshot,1> local_50;
  TSharedPtr<FInvisibleToWidgetReflectorMetaData,1> local_40;
  
  pSVar11 = FSlateWindowElementList::GetPaintWindow(param_2);
  pTVar12 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                    *)this,pSVar11);
  if (pTVar12 == (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar17 = *(TReferenceControllerBase<1> **)&pTVar12->field_0x10;
    pFVar3 = *(FVisualTreeSnapshot **)&pTVar12->field_0x8;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FVisualTreeSnapshot *)0x0) {
      if ((pFVar3->WidgetStack).ArrayNum < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar15 = (longlong)(pFVar3->WidgetStack).ArrayNum;
      pFVar16 = (pFVar3->WidgetStack).AllocatorInstance.Data;
      plVar4 = *(longlong **)(pFVar16 + lVar15 * 0x10 + -8);
      *(undefined8 *)(pFVar16 + lVar15 * 0x10 + -8) = 0;
      *(undefined8 *)(pFVar16 + lVar15 * 0x10 + -0x10) = 0;
      iVar10 = (pFVar3->WidgetStack).ArrayNum;
      pFVar16 = (pFVar3->WidgetStack).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
      plVar5 = *(longlong **)(pFVar16 + -8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      iVar10 = (pFVar3->WidgetStack).ArrayNum - iVar10;
      if (iVar10 != 0) {
        memmove(pFVar16 + -0x10,pFVar16,(longlong)iVar10 << 4);
      }
      piVar1 = &(pFVar3->WidgetStack).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(pFVar3->WidgetStack).AllocatorInstance,(pFVar3->WidgetStack).ArrayNum,
                 &(pFVar3->WidgetStack).ArrayMax);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      cVar9 = (**(code **)(param_1->_padding_ + 0x210))(param_1);
      if (cVar9 != '\0') {
        this->WidgetIsInvalidationRootCounter = this->WidgetIsInvalidationRootCounter + -1;
        pFVar13 = (FSlateInvalidationRoot *)(**(code **)(param_1->_padding_ + 0x218))(param_1);
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_50.Object = pFVar3;
        local_50.SharedReferenceCount.ReferenceController = pTVar17;
        if (pFVar3 == (FVisualTreeSnapshot *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        AddInvalidationRootCachedEntries(this,&local_50,pFVar13);
      }
      pTVar14 = SWidget::GetMetaData<FInvisibleToWidgetReflectorMetaData>(param_1,&local_40);
      pFVar6 = pTVar14->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      if (pFVar6 != (FInvisibleToWidgetReflectorMetaData *)0x0) {
        this->WidgetIsInvisibleToWidgetReflectorCounter =
             this->WidgetIsInvisibleToWidgetReflectorCounter + -1;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return;
}

// EndWindow @ 142e73f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualTreeCapture::EndWindow(FVisualTreeCapture *this,FSlateWindowElementList *param_1)

{
  TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FVisualTreeSnapshot *pFVar4;
  FSlateClippingState *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  SWindow *pSVar9;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar10;
  FSlateInvalidationRoot *pFVar11;
  TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *pTVar12;
  FVisualEntry *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FVisualEntry *pFVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  <lambda_1> local_res20;
  TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
  local_58;
  TSharedRef<FVisualTreeSnapshot,1> local_48;
  
  pSVar9 = FSlateWindowElementList::GetPaintWindow(param_1);
  cVar7 = (**(code **)(pSVar9->_padding_ + 0x210))(pSVar9);
  if (cVar7 != '\0') {
    this->WindowIsInvalidationRootCounter = this->WindowIsInvalidationRootCounter + -1;
  }
  pSVar9 = FSlateWindowElementList::GetPaintWindow(param_1);
  pTVar10 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                    *)this,pSVar9);
  if (pTVar10 == (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar14 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x10;
    pFVar4 = *(FVisualTreeSnapshot **)&pTVar10->field_0x8;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FVisualTreeSnapshot *)0x0) {
      pFVar13 = (FVisualEntry *)(pFVar4->Entries).AllocatorInstance.Data;
      iVar3 = (pFVar4->Entries).ArrayNum;
      pFVar15 = pFVar13 + iVar3;
      while( true ) {
        if ((pFVar4->Entries).ArrayNum != iVar3) {
          local_res8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FVisualEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar13 == pFVar15) break;
        if (pFVar13->bFromCache == false) {
          local_58._0_4_ = 0x3020100;
          local_58._4_4_ = 0x7060504;
          local_58._8_4_ = 0xb0a0908;
          local_58._12_2_ = 0xd0c;
          local_res20.__this = pFVar13;
          UE::Core::Private::Tuple::
          TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>
          ::
          Do<_FVisualEntry::Resolve_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_const_&,TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>_>
                    (&local_res20,&param_1->UncachedDrawElements,&local_58);
        }
        pFVar13 = pFVar13 + 1;
      }
      pSVar9 = FSlateWindowElementList::GetPaintWindow(param_1);
      cVar7 = (**(code **)(pSVar9->_padding_ + 0x210))(pSVar9);
      if (cVar7 != '\0') {
        pSVar9 = FSlateWindowElementList::GetPaintWindow(param_1);
        pFVar11 = (FSlateInvalidationRoot *)(**(code **)(pSVar9->_padding_ + 0x218))(pSVar9);
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar4;
        local_48.SharedReferenceCount.ReferenceController = pTVar14;
        if (pFVar4 == (FVisualTreeSnapshot *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        AddInvalidationRootCachedEntries(this,&local_48,pFVar11);
      }
      pTVar12 = FSlateClippingManager::GetClippingStates(&param_1->ClippingManager);
      pTVar1 = &pFVar4->ClippingStates;
      if (pTVar1 != pTVar12) {
        DestructItems<FSlateClippingState,int>
                  ((FSlateClippingState *)(pTVar1->AllocatorInstance).Data,
                   (pFVar4->ClippingStates).ArrayNum);
        iVar3 = pTVar12->ArrayNum;
        piVar2 = &(pFVar4->ClippingStates).ArrayMax;
        pFVar5 = (FSlateClippingState *)(pTVar12->AllocatorInstance).Data;
        (pFVar4->ClippingStates).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
          ConstructItems<FSlateClippingState,FSlateClippingState,int>
                    ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
        }
      }
      AlgoImpl::
      IntroSortInternal<FVisualEntry,int,FIdentityFunctor,TDereferenceWrapper<FVisualEntry,_FVisualTreeCapture::EndWindow_::__l8::<lambda_1>_>_>
                ((FVisualEntry *)(pFVar4->Entries).AllocatorInstance.Data,(pFVar4->Entries).ArrayNum
                 ,local_res8[0],(<lambda_1> *)local_res18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// GetVisualTreeForWindow @ 142ea9d90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FVisualTreeSnapshot,1> * __thiscall
FVisualTreeCapture::GetVisualTreeForWindow
          (FVisualTreeCapture *this,TSharedPtr<FVisualTreeSnapshot,1> *__return_storage_ptr__,
          SWindow *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                   *)this,param_1);
  if (pTVar2 == (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FVisualTreeSnapshot *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FVisualTreeSnapshot **)&pTVar2->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// OnWindowBeingDestroyed @ 142ee0a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualTreeCapture::OnWindowBeingDestroyed(FVisualTreeCapture *this,SWindow *param_1)

{
  uint uVar1;
  SWindow *local_res8 [4];
  
  if (*(int *)&(this->VisualTrees).field_0x8 != *(int *)&(this->VisualTrees).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_res8[0] = param_1;
    TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<SWindow_const_*>
              ((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                *)this,uVar1 >> 0x10 ^ uVar1,local_res8);
  }
  return;
}

// Reset @ 142ef9f40

void __thiscall FVisualTreeCapture::Reset(FVisualTreeCapture *this)

{
  if (*(int *)&(this->VisualTrees).field_0x8 != *(int *)&(this->VisualTrees).field_0x34) {
    TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                      *)this);
    TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->VisualTrees).field_0x8);
    *(undefined4 *)&(this->VisualTrees).field_0x8 = 0;
    if (*(int *)&(this->VisualTrees).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->VisualTrees).field_0xc);
    }
    *(undefined4 *)&(this->VisualTrees).field_0x34 = 0;
    *(undefined4 *)&(this->VisualTrees).field_0x28 = 0;
    *(undefined4 *)&(this->VisualTrees).field_0x30 = 0xffffffff;
  }
  return;
}

