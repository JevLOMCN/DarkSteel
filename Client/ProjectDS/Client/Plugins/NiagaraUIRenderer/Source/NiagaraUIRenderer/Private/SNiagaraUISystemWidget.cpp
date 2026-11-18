// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 17

// ~SNiagaraUISystemWidget @ 14d292c50

void __thiscall SNiagaraUISystemWidget::~SNiagaraUISystemWidget(SNiagaraUISystemWidget *this)

{
  int *piVar1;
  FRenderData *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__SLeafWidget__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pFVar2 = (FRenderData *)this->_padding_;
  if ((FRenderData *)this->_padding_ == (FRenderData *)0x0) {
    pFVar2 = (FRenderData *)&this->_padding_;
  }
  DestructItems<SMeshWidget::FRenderData,int>(pFVar2,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
              (0x50,8,0,(ForElementType<SMeshWidget::FRenderData> *)&this->_padding_,0,piVar1);
  }
  CheckForInvalidBrushes(this);
  SMeshWidget::~SMeshWidget((SMeshWidget *)this);
  return;
}

// AddReferencedObjects @ 14d2940a0

void __thiscall
SNiagaraUISystemWidget::AddReferencedObjects
          (SNiagaraUISystemWidget *this,FReferenceCollector *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  SMeshWidget::AddReferencedObjects((SMeshWidget *)this,param_1);
  iVar8 = 0;
  uVar4 = 1;
  uVar10 = MaterialBrushMap._40_4_;
  uVar5 = 0;
  iVar9 = iVar8;
  if (uVar10 != 0) {
    puVar11 = (uint *)&MaterialBrushMap.field_0x10;
    if (MaterialBrushMap._32_8_ != 0) {
      puVar11 = (uint *)MaterialBrushMap._32_8_;
    }
    uVar5 = *puVar11;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      uVar5 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_14d29414d;
      uVar5 = puVar11[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar5 = (int)lVar6 + -1 + iVar9;
    if ((int)uVar10 < (int)uVar5) {
      uVar5 = uVar10;
    }
  }
LAB_14d29414d:
  bVar2 = MaterialBrushMap._40_1_;
  uVar12 = uVar10 & 0xffffffe0;
  uVar13 = MaterialBrushMap._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar4,iVar8);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar10 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = iVar9;
  uStack_40 = CONCAT44(uStack_6c,MaterialBrushMap._8_4_ - MaterialBrushMap._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&MaterialBrushMap.field_0x10;
  if (((int)uVar10 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = MaterialBrushMap._40_4_;
  if (uVar10 != uVar5) {
    uVar13 = MaterialBrushMap._40_8_ & 0xffffffff;
    lVar6 = 0x154d82440;
    if (MaterialBrushMap._32_8_ != 0) {
      lVar6 = MaterialBrushMap._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar8 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14d294260;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar12 = (int)lVar6 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
    uVar13 = (ulonglong)uVar12;
  }
LAB_14d294260:
  while( true ) {
    if (MaterialBrushMap._8_4_ - MaterialBrushMap._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&MaterialBrushMap.field_0x10))
    break;
    lVar6 = MaterialBrushMap._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x20;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar6,0,0);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,lVar6 + 0x38);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddRenderData @ 14d294310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNiagaraUISystemWidget::AddRenderData
          (SNiagaraUISystemWidget *this,FSlateVertex **param_1,uint **param_2,
          UMaterialInterface *param_3,int param_4,int param_5)

{
  uint *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FSlateMaterialBrush,1> *pTVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  longlong *plVar9;
  ForAnyElementType *pFVar10;
  longlong lVar11;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  longlong local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FSlateResourceHandle local_88;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  ForAnyElementType local_68;
  FSharedReferencer<1> local_60;
  longlong local_58;
  TSharedPtr<FSlateMaterialBrush,1> local_50;
  undefined1 local_40 [8];
  TReferenceControllerBase<1> *local_38;
  
  if ((0 < param_4) && (0 < param_5)) {
    plVar2 = &this->_padding_;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_88.Data.Object = (FSlateSharedHandleData *)0x0;
    local_88.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_78 = 0;
    pTStack_70 = (TReferenceControllerBase<1> *)0x0;
    local_98 = 0;
    pTStack_90 = (TReferenceControllerBase<1> *)0x0;
    FSlateResourceHandle::FSlateResourceHandle(&local_88);
    local_78 = 0;
    pTStack_70 = (TReferenceControllerBase<1> *)0x0;
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = plVar2;
    }
    if (((plVar9 <= &local_b8) &&
        (&local_b8 < plVar9 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar5 = (uint)this->_padding_;
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    if (uVar5 == *puVar1) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
                        (0x850,(ForElementType<SMeshWidget::FRenderData> *)plVar2,(int *)puVar1);
    }
    lVar11 = (longlong)(int)uVar5;
    *(uint *)&this->_padding_ = uVar5 + 1;
    local_58 = lVar11 * 0x50;
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = plVar2;
    }
    plVar9[lVar11 * 10] = 0;
    plVar9[lVar11 * 10] = (longlong)local_b8;
    local_b8 = (void *)0x0;
    *(undefined4 *)(plVar9 + lVar11 * 10 + 1) = (undefined4)local_b0;
    *(undefined4 *)((longlong)plVar9 + local_58 + 0xc) = local_b0._4_4_;
    local_b0 = 0;
    plVar9[lVar11 * 10 + 2] = 0;
    plVar9[lVar11 * 10 + 2] = (longlong)local_a8;
    local_a8 = (void *)0x0;
    *(undefined4 *)(plVar9 + lVar11 * 10 + 3) = (undefined4)local_a0;
    *(undefined4 *)((longlong)plVar9 + local_58 + 0x1c) = local_a0._4_4_;
    local_a0 = 0;
    plVar9[lVar11 * 10 + 4] = local_98;
    plVar9[lVar11 * 10 + 5] = (longlong)pTStack_90;
    pTStack_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = 0;
    plVar9[lVar11 * 10 + 6] = (longlong)local_88.Data.Object;
    plVar9[lVar11 * 10 + 7] = (longlong)local_88.Data.SharedReferenceCount.ReferenceController;
    local_88.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_88.Data.Object = (FSlateSharedHandleData *)0x0;
    plVar9[lVar11 * 10 + 8] = local_78;
    plVar9[lVar11 * 10 + 9] = (longlong)pTStack_70;
    pTStack_70 = (TReferenceControllerBase<1> *)0x0;
    local_78 = 0;
    uVar8 = 0;
    if ((int)uVar5 < (int)this->_padding_) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = plVar2;
    }
    pFVar10 = (ForAnyElementType *)((longlong)plVar9 + local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Data.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,param_4,pFVar10,(int *)(pFVar10 + 1),(int *)((longlong)&pFVar10[1].Data + 4));
    if ((*(int *)&pFVar10[1].Data < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *param_1 = (FSlateVertex *)pFVar10->Data;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_5,pFVar10 + 2,(int *)(pFVar10 + 3),(int *)((longlong)&pFVar10[3].Data + 4))
    ;
    if ((*(int *)&pFVar10[3].Data < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *param_2 = (uint *)pFVar10[2].Data;
    if (param_3 != (UMaterialInterface *)0x0) {
      pTVar6 = CreateSlateMaterialBrush(this,&local_50,param_3);
      local_60.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
      local_68.Data = (FScriptContainerElement *)pTVar6->Object;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = pFVar10 + 4;
      if (pFVar7 != &local_68) {
        pFVar7->Data = local_68.Data;
        local_68.Data = (FScriptContainerElement *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar10 + 5),&local_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentApplication.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                             ,0x141,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = IsInGameThread();
      if ((((!bVar4) && (bVar4 = IsInSlateThread(), !bVar4)) &&
          (bVar4 = (*IsInAsyncLoadingThread)(), !bVar4)) &&
         ((bVar4 = IsInParallelLoadingThread(), !bVar4 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                              ,0x142,L""), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60;
      pcVar3 = *(code **)(*plVar2 + 0x80);
      if ((pFVar7->Data == (FScriptContainerElement *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (ForAnyElementType *)(*pcVar3)(plVar2,local_40,pFVar7->Data);
      if (pFVar10 + 6 != pFVar7) {
        pFVar10[6].Data = pFVar7->Data;
        pFVar7->Data = (FScriptContainerElement *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar10 + 7),(FSharedReferencer<1> *)(pFVar7 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    }
  }
  return;
}

// CheckForInvalidBrushes @ 14d296bc0

void __thiscall SNiagaraUISystemWidget::CheckForInvalidBrushes(SNiagaraUISystemWidget *this)

{
  TObjectPtr<UMaterialInterface_const_>_u_0 *pTVar1;
  TObjectPtr<UMaterialInterface_const_>_u_0 TVar2;
  code *pcVar3;
  byte bVar4;
  TMap<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_c8;
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  TMap<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>_>
  *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  TObjectPtr<UMaterialInterface_const_>_u_0 local_78;
  TMap<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uStack_a4 = 1;
  local_c8.Data = (FScriptContainerElement *)0x0;
  uStack_a8 = 0;
  local_c0 = 0;
  iStack_bc = 0;
  local_90 = 0;
  uVar12 = MaterialBrushMap._40_4_;
  uStack_94 = uStack_a8;
  if (uVar12 != 0) {
    puVar15 = (uint *)&MaterialBrushMap.field_0x10;
    if (MaterialBrushMap._32_8_ != 0) {
      puVar15 = (uint *)MaterialBrushMap._32_8_;
    }
    uVar11 = *puVar15;
    local_90 = 0;
    uStack_a8 = 0;
    while (uVar11 == 0) {
      lVar7 = (longlong)(int)uStack_a8;
      local_90 = local_90 + 0x20;
      uStack_a8 = uStack_a8 + 1;
      uStack_94 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a8)
      goto LAB_14d296c6d;
      uVar11 = puVar15[lVar7 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar16 = (ulonglong)uStack_a4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    uStack_94 = (local_90 - 1) + local_res20;
    if ((int)uVar12 < (int)uStack_94) {
      uStack_94 = uVar12;
    }
  }
LAB_14d296c6d:
  bVar4 = MaterialBrushMap._40_1_;
  iStack_88 = MaterialBrushMap._8_4_ - MaterialBrushMap._52_4_;
  uVar11 = uVar12 & 0xffffffe0;
  uVar16 = MaterialBrushMap._40_8_ & 0xffffffff;
  local_b0 = &MaterialBrushMap;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,uStack_a8);
  local_a0 = 0x154d82440;
  TStack_68.CurrentBitIndex = uStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  local_70 = &MaterialBrushMap;
  iVar10 = (int)uVar12 >> 5;
  TStack_68._28_4_ = uStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&MaterialBrushMap.field_0x10;
  uStack_8c = uStack_94;
  if (((int)uVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar14 = MaterialBrushMap._40_4_;
  if (uVar12 != uVar14) {
    uVar16 = MaterialBrushMap._40_8_ & 0xffffffff;
    lVar7 = 0x154d82440;
    if (MaterialBrushMap._32_8_ != 0) {
      lVar7 = MaterialBrushMap._32_8_;
    }
    uVar12 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14d296d80;
      uVar12 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_80 = (int)lVar7;
    uVar11 = local_80 + -1 + uVar11;
    if ((int)uVar14 < (int)uVar11) {
      uVar11 = uVar14;
    }
    uVar16 = (ulonglong)uVar11;
  }
LAB_14d296d80:
  while( true ) {
    pTVar5 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    iVar10 = local_c0;
    if (((TStack_68.CurrentBitIndex == (int)uVar16) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)&MaterialBrushMap.field_0x10))
       && (pTVar5 == &MaterialBrushMap)) break;
    puVar9 = (undefined8 *)((longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
    lVar7 = puVar9[2];
    if ((lVar7 == 0) || (*(int *)(lVar7 + 8) < 2)) {
      local_b8 = *puVar9;
      if ((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
         (((FScriptContainerElement *)&local_b8 < local_c8.Data + (longlong)iStack_bc * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_c0 == iStack_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_c8,&iStack_bc);
      }
      lVar7 = (longlong)local_c0;
      local_c0 = local_c0 + 1;
      *(undefined8 *)(local_c8.Data + lVar7 * 8) = local_b8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pTVar1 = (TObjectPtr<UMaterialInterface_const_>_u_0 *)(local_c8.Data + (longlong)local_c0 * 8);
  FVar13.Data = local_c8.Data;
  while( true ) {
    if (local_c0 != iVar10) {
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((TObjectPtr<UMaterialInterface_const_>_u_0 *)FVar13.Data == pTVar1) break;
    TVar2 = (TObjectPtr<UMaterialInterface_const_>_u_0)
            *(TObjectPtr<UMaterialInterface_const_>_u_0 *)FVar13.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    local_78 = TVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if (MaterialBrushMap._8_4_ != MaterialBrushMap._52_4_) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      uVar12 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UMaterialInterface_const_>_>
                ((TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
                  *)&MaterialBrushMap,uVar12 >> 0x10 ^ uVar12,
                 (TObjectPtr<UMaterialInterface_const_> *)&local_78.ObjectPtr);
    }
    FVar13.Data = FVar13.Data + 8;
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// ClearRenderData @ 14d296f70

void __thiscall SNiagaraUISystemWidget::ClearRenderData(SNiagaraUISystemWidget *this)

{
  int *piVar1;
  FRenderData *pFVar2;
  
  pFVar2 = (FRenderData *)this->_padding_;
  if ((FRenderData *)this->_padding_ == (FRenderData *)0x0) {
    pFVar2 = (FRenderData *)&this->_padding_;
  }
  DestructItems<SMeshWidget::FRenderData,int>(pFVar2,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
              (0x50,8,0,(ForElementType<SMeshWidget::FRenderData> *)&this->_padding_,0,piVar1);
  }
  return;
}

// ComputeDesiredSize @ 14d296fe0

TVector2<double> * __thiscall
SNiagaraUISystemWidget::ComputeDesiredSize
          (SNiagaraUISystemWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->DesiredSizeAttribute).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->DesiredSizeAttribute;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Construct @ 14d297000

void __thiscall SNiagaraUISystemWidget::Construct(SNiagaraUISystemWidget *this,FArguments *param_1)

{
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DesiredSizeAttribute,(SWidget *)this,&param_1->_DesiredSize,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorAndOpacityAttribute,(SWidget *)this,&param_1->_ColorAndOpacity,None);
  return;
}

// CreateSlateMaterialBrush @ 14d297060

/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FSlateMaterialBrush,1> * __thiscall
SNiagaraUISystemWidget::CreateSlateMaterialBrush
          (SNiagaraUISystemWidget *this,TSharedPtr<FSlateMaterialBrush,1> *__return_storage_ptr__,
          UMaterialInterface *param_1)

{
  TMap<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  TObjectPtr<UMaterialInterface> *pTVar3;
  longlong *plVar4;
  TObjectPtr<UMaterialInterface>_u_0 this_01;
  FString *pFVar5;
  FName *pFVar6;
  uint uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  TObjectPtr<UMaterialInterface>_u_0 this_02;
  TObjectPtr<UMaterialInterface>_u_0 local_res8;
  TObjectPtr<UMaterialInterface>_u_0 local_res18;
  TSharedPtr<FSlateMaterialBrush,1> local_38;
  ForAnyElementType local_28;
  TSharedPtr<FSlateMaterialBrush,1> *pTStack_20;
  
  this_00 = (this->WidgetProperties).MaterialRemapList;
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
           ::Find((TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
                   *)this_00,(TObjectPtr<UMaterialInterface_const_>)&local_res8);
  if ((pTVar3 == (TObjectPtr<UMaterialInterface> *)0x0) ||
     (this_02.DebugPtr = (pTVar3->field0_0x0).DebugPtr,
     (pTVar3->field0_0x0).DebugPtr == (UMaterialInterface *)0x0)) {
    this_02.DebugPtr = param_1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_02.DebugPtr != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
  }
  local_res8 = this_02;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_02.DebugPtr != (UMaterialInterface *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
    }
  }
  uVar7 = ((uint)((ulonglong)this_02.DebugPtr >> 0x14) & 0xffff ^
          (uint)((ulonglong)this_02.DebugPtr >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  iVar2 = TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_>
                    ((TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
                      *)&MaterialBrushMap,uVar7,
                     (TObjectPtr<UMaterialInterface_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_02.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
    }
    local_res8 = this_02;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_02.DebugPtr != (UMaterialInterface *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_02.DebugPtr != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
      }
    }
    iVar2 = TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_>
                      ((TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
                        *)&MaterialBrushMap,uVar7,
                       (TObjectPtr<UMaterialInterface_const_> *)&local_res8.ObjectPtr);
    plVar4 = (longlong *)0x0;
    if (iVar2 != -1) {
      plVar4 = (longlong *)((longlong)iVar2 * 0x20 + MaterialBrushMap._0_8_);
    }
    plVar8 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    if ((FSlateMaterialBrush *)*plVar8 != (FSlateMaterialBrush *)0x0) {
      __return_storage_ptr__->Object = (FSlateMaterialBrush *)*plVar8;
      pTVar1 = (TReferenceControllerBase<1> *)plVar8[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  this_01.DebugPtr = ::operator_new(0xb0);
  if (this_01.DebugPtr == (UMaterialInterface *)0x0) {
    this_01.DebugPtr = (UMaterialInterface *)0x0;
  }
  else {
    local_res8.DebugPtr = (UMaterialInterface *)0x3f8000003f800000;
    local_28.Data = (FScriptContainerElement *)0x0;
    pTStack_20 = (TSharedPtr<FSlateMaterialBrush,1> *)0x0;
    local_res18.DebugPtr = (UMaterialInterface *)0x0;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)this_01.DebugPtr,Image,(FName)0x0,(FMargin *)&local_28,NoTile,
               FullColor,(FDeprecateVector2DParameter *)&local_res8.ObjectPtr,&FLinearColor::White,
               (UObject *)this_02.DebugPtr,false);
    (this_01.DebugPtr)->_padding_ = (longlong)&___7FSlateMaterialBrush__6B_;
    pFVar5 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this_02.DebugPtr,(FString *)&local_28,(UObject *)0x0,
                        None);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName((FName *)&local_res18.ObjectPtr,pwVar9);
    uVar7 = pFVar6->Number;
    ((TArray<FMaterialTextureInfo,TSizedDefaultAllocator<32>_> *)((longlong)this_01 + 0xa0))->
    ArrayNum = (pFVar6->ComparisonIndex).Value;
    ((TArray<FMaterialTextureInfo,TSizedDefaultAllocator<32>_> *)((longlong)this_01 + 0xa0))->
    ArrayMax = uVar7;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  local_res18 = this_01;
  TSharedPtr<FSlateMaterialBrush,1>::TSharedPtr<FSlateMaterialBrush,1><FSlateMaterialBrush>
            (&local_38,(TRawPtrProxy<FSlateMaterialBrush> *)&local_res18.ObjectPtr);
  local_res18 = this_02;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_02.DebugPtr != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_02.DebugPtr);
  }
  local_28.Data = (FScriptContainerElement *)&local_res18;
  pTStack_20 = &local_38;
  TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<UMaterialInterface>_&&,TSharedPtr<FSlateMaterialBrush,1>_const_&>_>
            ((TSet<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>,0>,FDefaultSetAllocator>
              *)&MaterialBrushMap,
             (TPairInitializer<TObjectPtr<UMaterialInterface>_&&,TSharedPtr<FSlateMaterialBrush,1>_const_&>
              *)&local_res8.ObjectPtr,(bool *)&local_28);
  __return_storage_ptr__->Object = local_38.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.Object = (FSlateMaterialBrush *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 14d2978d0

FSlateWidgetClassData * __cdecl SNiagaraUISystemWidget::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18 [2];
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&local_res10,"SNiagaraUISystemWidget");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&local_res8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res18,"DesiredSize");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&local_res8,&local_48,*pFVar1,0x350,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14d297a27;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14d297a27:
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res18,"ColorAndOpacity");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&local_res8,&local_48,*pFVar1,0x360,(FInvalidateWidgetReasonAttribute *)local_38);
  if (((int)uStack_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
  atexit(`SNiagaraUISystemWidget::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetReferencerName @ 14d297ac0

FString * __thiscall
SNiagaraUISystemWidget::GetReferencerName
          (SNiagaraUISystemWidget *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SNiagaraUISystemWidget");
  return __return_storage_ptr__;
}

// GetWidgetClass @ 14d297b40

FSlateWidgetClassData * __thiscall
SNiagaraUISystemWidget::GetWidgetClass(SNiagaraUISystemWidget *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&FStackX_10,"SNiagaraUISystemWidget");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(aFStackX_18,"DesiredSize");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x350,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if ((int)uStack_28 != 0) {
    if (FStack_30.Data == (FScriptContainerElement *)0x0) goto LAB_14d297a27;
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
LAB_14d297a27:
  auStack_38[0] = Paint;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(aFStackX_18,"ColorAndOpacity");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x360,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SNiagaraUISystemWidget::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SNiagaraUISystemWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnPaint @ 14d297e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
SNiagaraUISystemWidget::OnPaint
          (SNiagaraUISystemWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  UNiagaraUIComponent *this_01;
  TQuat<double> *pTVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_208 [32];
  float local_1c8;
  float fStack_1c4;
  FNiagaraUIRenderProperties local_1b8;
  FSlateWindowElementList *local_198;
  TRotator<double> local_190;
  TQuat<double> local_178;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = param_4;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,"SNiagaraUISystemWidget::OnPaint",
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\SNiagaraUISystemWidget.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  bVar13 = FWeakObjectPtr::IsValid(&(this->NiagaraComponent).WeakPtr);
  if (bVar13) {
    fVar9 = (param_2->AccumulatedRenderTransform).M.M[0][0];
    fVar10 = (param_2->AccumulatedRenderTransform).M.M[0][1];
    fVar11 = (param_2->AccumulatedRenderTransform).M.M[1][0];
    fVar12 = (param_2->AccumulatedRenderTransform).M.M[1][1];
    local_190.Roll = *(double *)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    fStack_1c4 = SUB84(param_2->Size,4);
    fStack_1c4 = fStack_1c4 * __real_3f000000;
    local_1c8 = SUB84(param_2->Size,0);
    local_1c8 = local_1c8 * __real_3f000000;
    fVar1 = (param_2->AccumulatedRenderTransform).M.M[1][0];
    fVar2 = (param_2->AccumulatedRenderTransform).M.M[0][0];
    fVar3 = param_2->Scale;
    fVar4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    fVar5 = param_3->Left;
    fVar18 = __real_3f800000 / fVar3;
    fVar6 = param_3->Top;
    dVar8 = (double)(fVar18 * ((fStack_1c4 * (param_2->AccumulatedRenderTransform).M.M[1][1] +
                                local_1c8 * (param_2->AccumulatedRenderTransform).M.M[0][1] +
                               (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y) -
                              fVar6));
    fVar17 = 0.0;
    if (fVar12 < 0.0) {
      fVar17 = __real_43340000;
    }
    fVar16 = atanf(fVar11 / fVar12);
    this_00 = &this->ColorAndOpacityAttribute;
    cVar7 = (this->ColorAndOpacityAttribute).field_0x10;
    fVar17 = fVar16 * __real_42652ee0 + fVar17;
    if (cVar7 != '\0') {
      if (cVar7 == '\x01') {
        this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   *)FSlateColor::GetColorFromTable((FSlateColor *)this_00);
      }
      else if ((cVar7 == '\x02') || (cVar7 != '\x03')) {
        this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   *)&param_6->SubduedForeground;
      }
    }
    local_1b8.Tint.field0_0x0._s_0.G =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G *
         (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).G;
    local_1b8.Tint.field0_0x0._s_0.B =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B *
         (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).B;
    local_1b8.Tint.field0_0x0._s_0.A =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A *
         (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).A;
    local_1b8.Tint.field0_0x0._s_0.R =
         (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_1b8.ScaleFactor = fVar3;
    local_1b8.ParentTopLeft.field0_0x0._s_0.X = fVar5;
    local_1b8.ParentTopLeft.field0_0x0._s_0.Y = fVar6;
    this_01 = (UNiagaraUIComponent *)FWeakObjectPtr::Get(&(this->NiagaraComponent).WeakPtr);
    local_190.Pitch = (double)fVar17;
    this_01->WidgetRotationAngle = fVar17;
    local_190.Yaw = 0.0;
    local_190.Roll = 0.0;
    pTVar14 = UE::Math::TRotator<double>::Quaternion(&local_190,&local_178);
    local_158.Rotation.XY.m128d_f64[0] = pTVar14->X;
    local_158.Rotation.XY.m128d_f64[1] = pTVar14->Y;
    local_158.Rotation.ZW.m128d_f64[0] = pTVar14->Z;
    local_158.Rotation.ZW.m128d_f64[1] = pTVar14->W;
    local_158.Translation.XY.m128d_f64[1] = 0.0;
    local_158.Translation.ZW.m128d_f64[0] =
         (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_158.Translation.ZW.m128d_f64[1] = 0.0;
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ = (int)__real_3ff0000000000000;
    local_158.Scale3D.XY.m128d_f64[0] = (double)(SQRT(fVar10 * fVar10 + fVar9 * fVar9) * fVar18);
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_158.Scale3D.ZW.m128d_f64[0] = (double)(SQRT(fVar12 * fVar12 + fVar11 * fVar11) * fVar18);
    local_158.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_158.Translation.XY.m128d_f64[0] =
         (double)(fVar18 * ((fStack_1c4 * fVar1 + local_1c8 * fVar2 + fVar4) - fVar5));
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)this_01,&local_158,false,(FHitResult *)0x0,None);
    if (this_01->AutoActivateParticle != false) {
      if ((this_01->field_0x9a & 0x10) == 0) {
        (**(code **)(*(longlong *)this_01 + 0xaf0))(this_01,0);
      }
      this_01->AutoActivateParticle = false;
    }
    this_01->HasSetTransform = true;
    UNiagaraUIComponent::RenderUI(this_01,this,&local_1b8,&this->WidgetProperties);
    param_5 = SMeshWidget::OnPaint
                        ((SMeshWidget *)this,param_1,param_2,param_3,local_198,param_5,param_6,
                         param_7);
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return param_5;
}

// PrivateRegisterAttributes @ 14d298320

void __cdecl SNiagaraUISystemWidget::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"DesiredSize");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x350,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_14d2983b1;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_14d2983b1:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ColorAndOpacity");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x360,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// SetColorAndOpacity @ 14d2995e0

void __thiscall
SNiagaraUISystemWidget::SetColorAndOpacity(SNiagaraUISystemWidget *this,FLinearColor *param_1)

{
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint local_28;
  
  this_00 = &this->ColorAndOpacityAttribute;
  fVar1 = (param_1->field0_0x0)._s_0.R;
  fVar2 = (param_1->field0_0x0)._s_0.G;
  fVar3 = (param_1->field0_0x0)._s_0.B;
  fVar4 = (param_1->field0_0x0)._s_0.A;
  local_28 = local_28 & 0xffffff00;
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
            ((FSlateAttributeImpl *)this_00,(SWidget *)this,Member);
  if ((((fVar1 != *(float *)this_00) ||
       (fVar2 != *(float *)&(this->ColorAndOpacityAttribute).field_0x4)) ||
      (fVar3 != *(float *)&(this->ColorAndOpacityAttribute).field_0x8)) ||
     ((fVar4 != *(float *)&(this->ColorAndOpacityAttribute).field_0xc ||
      ((this->ColorAndOpacityAttribute).field_0x10 != '\0')))) {
    *(float *)this_00 = fVar1;
    *(float *)&(this->ColorAndOpacityAttribute).field_0x4 = fVar2;
    *(float *)&(this->ColorAndOpacityAttribute).field_0x8 = fVar3;
    *(float *)&(this->ColorAndOpacityAttribute).field_0xc = fVar4;
    *(uint *)&(this->ColorAndOpacityAttribute).field_0x10 = local_28;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)this_00,(SWidget *)this,Member,None);
  }
  return;
}

// SetDesiredSize @ 14d299730

void __thiscall
SNiagaraUISystemWidget::SetDesiredSize(SNiagaraUISystemWidget *this,TVector2<double> *param_1)

{
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Set((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *)&this->DesiredSizeAttribute,(SWidget *)this,param_1);
  return;
}

// SetNiagaraComponentReference @ 14d299800

void __thiscall
SNiagaraUISystemWidget::SetNiagaraComponentReference
          (SNiagaraUISystemWidget *this,TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8374471364253319302>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\SNiagaraUISystemWidget.cpp"
                       ,0x86,"NiagaraComponentIn != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (this->NiagaraComponent).WeakPtr = local_res10[0];
  }
  return;
}

// SetNiagaraWidgetProperties @ 14d299870

void __thiscall
SNiagaraUISystemWidget::SetNiagaraWidgetProperties
          (SNiagaraUISystemWidget *this,FNiagaraWidgetProperties *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  bVar1 = param_1->AutoActivate;
  bVar2 = param_1->ShowDebugSystemInWorld;
  bVar3 = param_1->PassDynamicParametersFromRibbon;
  bVar4 = param_1->FakeDepthScale;
  fVar5 = param_1->FakeDepthScaleDistance;
  (this->WidgetProperties).MaterialRemapList = param_1->MaterialRemapList;
  (this->WidgetProperties).AutoActivate = bVar1;
  (this->WidgetProperties).ShowDebugSystemInWorld = bVar2;
  (this->WidgetProperties).PassDynamicParametersFromRibbon = bVar3;
  (this->WidgetProperties).FakeDepthScale = bVar4;
  (this->WidgetProperties).FakeDepthScaleDistance = fVar5;
  return;
}

