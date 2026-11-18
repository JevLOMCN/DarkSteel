// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 36

// FHittestGrid @ 1424e9ad0

FHittestGrid * __thiscall FHittestGrid::FHittestGrid(FHittestGrid *this)

{
  *(undefined8 *)&(this->WidgetMap).field_0x10 = 0;
  *(undefined8 *)&(this->WidgetMap).field_0x18 = 0;
  *(undefined8 *)&(this->WidgetMap).field_0x38 = 0;
  *(undefined8 *)&(this->WidgetMap).field_0x48 = 0;
  *(undefined8 *)&(this->WidgetMap).field_0x8 = 0;
  *(undefined8 *)&this->WidgetMap = 0;
  *(undefined8 *)&(this->WidgetMap).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetMap).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetMap).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetMap).field_0x40 = 0;
  *(undefined8 *)&(this->WidgetArray).field_0x10 = 0;
  *(undefined8 *)&(this->WidgetArray).field_0x18 = 0;
  *(undefined8 *)&(this->WidgetArray).field_0x8 = 0;
  *(undefined8 *)&this->WidgetArray = 0;
  *(undefined8 *)&(this->WidgetArray).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetArray).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetArray).field_0x34 = 0;
  (this->Cells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cells).ArrayNum = 0;
  (this->Cells).ArrayMax = 0;
  (this->AppendedGridArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppendedGridArray).ArrayNum = 0;
  (this->AppendedGridArray).ArrayMax = 0;
  this->Owner = (SWidget *)0x0;
  (this->CullingRect).Left = -1.0;
  (this->CullingRect).Top = -1.0;
  (this->CullingRect).Right = -1.0;
  (this->CullingRect).Bottom = -1.0;
  (this->NumCells).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->GridOrigin).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->GridSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->CurrentUserIndex = -1;
  (this->LastNavigationMethod).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       (UScriptStruct *)0x0;
  (this->LastNavigationMethod).InstancedStruct.StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->LastNavigationMethod).InstancedStruct);
  return this;
}

// operator() @ 1424f8530

void __thiscall
`FHittestGrid::AddGrid'::__l2::<lambda_1>::operator()
          (void *this,FHittestGrid *param_1,
          TArray<FHittestGrid_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  ForElementType<FHittestGrid_const_*> FVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  atomic<int> aVar10;
  int iVar11;
  ForElementType<FHittestGrid_const_*> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  FHittestGrid *local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_48 [2];
  
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
  if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar12 = FVar2;
  }
  local_res10 = param_1;
  if ((ulonglong)FVar12 <= &local_res10) {
    FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
    if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
      FVar12 = FVar2;
    }
    if ((&local_res10 < (FHittestGrid **)((longlong)FVar12 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = param_2->ArrayNum;
  if (iVar8 == param_2->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar8 + 1;
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
  if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar12 = FVar2;
  }
  uVar15 = 0;
  *(FHittestGrid **)((longlong)FVar12 + (longlong)iVar8 * 8) = local_res10;
  iVar8 = param_2->ArrayNum;
  if (0 < iVar8) {
    local_res20 = 0;
    do {
      lVar1 = local_res20;
      uVar9 = 0;
      if ((int)uVar15 < iVar8) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
      if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
        FVar12 = FVar2;
      }
      lVar3 = *(longlong *)(lVar1 + (longlong)FVar12);
      iVar8 = *(int *)(lVar3 + 0xa0);
      lVar14 = *(longlong *)(lVar3 + 0x98);
      lVar1 = lVar14 + (longlong)iVar8 * 0x18;
      while( true ) {
        if (*(int *)(lVar3 + 0xa0) != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FHittestGrid::FAppendedGridData_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (lVar14 == lVar1) break;
        pTVar13 = *(TReferenceControllerBase<1> **)(lVar14 + 0x10);
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_1424f8710:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          lVar14 = lVar14 + 0x18;
        }
        else {
          aVar6 = pTVar13->SharedReferenceCount;
          do {
            if (aVar6 == (atomic<int>)0x0) {
              pTVar13 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1424f8710;
            }
            LOCK();
            aVar10 = pTVar13->SharedReferenceCount;
            bVar7 = aVar6 == aVar10;
            if (bVar7) {
              pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar10 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar10;
          } while (!bVar7);
          lVar4 = *(longlong *)(lVar14 + 8);
          if (lVar4 == 0) goto LAB_1424f8710;
          FVar2 = (param_2->AllocatorInstance).SecondaryData;
          FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
          if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
            FVar12 = FVar2;
          }
          local_48[0] = lVar4;
          if ((ulonglong)FVar12 <= local_48) {
            FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
            if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
              FVar12 = FVar2;
            }
            if ((local_48 < (longlong *)((longlong)FVar12 + (longlong)param_2->ArrayMax * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = param_2->ArrayNum;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_>
                               (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          FVar2 = (param_2->AllocatorInstance).SecondaryData;
          FVar12 = (ForElementType<FHittestGrid_const_*>)param_2;
          if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
            FVar12 = FVar2;
          }
          *(longlong *)((longlong)FVar12 + (longlong)iVar11 * 8) = local_48[0];
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          lVar14 = lVar14 + 0x18;
        }
      }
      uVar15 = uVar15 + 1;
      iVar8 = param_2->ArrayNum;
      local_res20 = local_res20 + 8;
    } while ((int)uVar15 < iVar8);
  }
  return;
}

// operator() @ 1424f9bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FHittestGrid::DisplayGrid'::__l2::<lambda_1>::operator()(void *this,FHittestGrid *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  SWidget *this_00;
  FSlateBrush *pFVar4;
  FSlateWindowElementList *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  char cVar8;
  atomic<int> aVar9;
  FGeometry *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  bool bVar13;
  FLinearColor_u_0 local_98;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TVector2<float>_u_0 local_60;
  float local_58;
  undefined8 local_54;
  FDeprecateSlateVector2D local_4c;
  float local_44 [2];
  float afStack_3c [2];
  TVector2<float>_u_0 local_34;
  byte local_2c;
  
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::TConstIterator::
  TConstIterator((TConstIterator *)&local_88,&param_1->WidgetArray);
  if (local_80.CurrentBitIndex < (local_80.Array)->NumBits) {
    do {
      lVar12 = (longlong)local_80.CurrentBitIndex * 0x40;
      lVar3 = *local_88;
      pTVar11 = *(TReferenceControllerBase<1> **)(lVar12 + 8 + lVar3);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_1424f9c54:
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<171237520003040422>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                            ,0x4a6,"CachedWidget.IsValid()");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        aVar7 = pTVar11->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1424f9c54;
          }
          LOCK();
          aVar9 = pTVar11->SharedReferenceCount;
          bVar13 = aVar7 == aVar9;
          if (bVar13) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar13);
        this_00 = *(SWidget **)(lVar12 + lVar3);
        if (this_00 == (SWidget *)0x0) goto LAB_1424f9c54;
        if ((((**(uint **)this & 1) == 0) ||
            (this_00->EnabledStateAttribute !=
             (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) &&
           (((**(uint **)this & 2) == 0 ||
            (cVar8 = (**(code **)(this_00->_padding_ + 0x198))(this_00), cVar8 != '\0')))) {
          iVar1 = *(int *)(lVar12 + 0x3c + lVar3);
          if (iVar1 == 0) {
            local_98._s_0.R = (float)FLinearColor::Red.field0_0x0._0_4_;
            local_98._s_0.G = (float)FLinearColor::Red.field0_0x0._4_4_;
            local_98._s_0.B = (float)FLinearColor::Red.field0_0x0._8_4_;
            local_98._s_0.A = (float)FLinearColor::Red.field0_0x0._12_4_;
          }
          else if (iVar1 == 1) {
            local_98._s_0.R = (float)FLinearColor::Green.field0_0x0._0_4_;
            local_98._s_0.G = (float)FLinearColor::Green.field0_0x0._4_4_;
            local_98._s_0.B = (float)FLinearColor::Green.field0_0x0._8_4_;
            local_98._s_0.A = (float)FLinearColor::Green.field0_0x0._12_4_;
          }
          else if (iVar1 == 2) {
            local_98._s_0.R = (float)FLinearColor::Blue.field0_0x0._0_4_;
            local_98._s_0.G = (float)FLinearColor::Blue.field0_0x0._4_4_;
            local_98._s_0.B = (float)FLinearColor::Blue.field0_0x0._8_4_;
            local_98._s_0.A = (float)FLinearColor::Blue.field0_0x0._12_4_;
          }
          else if (iVar1 == 3) {
            local_98._s_0.R = (float)FLinearColor::Yellow.field0_0x0._0_4_;
            local_98._s_0.G = (float)FLinearColor::Yellow.field0_0x0._4_4_;
            local_98._s_0.B = (float)FLinearColor::Yellow.field0_0x0._8_4_;
            local_98._s_0.A = (float)FLinearColor::Yellow.field0_0x0._12_4_;
          }
          else {
            local_98._s_0.R = (float)FLinearColor::White.field0_0x0._0_4_;
            local_98._s_0.G = (float)FLinearColor::White.field0_0x0._4_4_;
            local_98._s_0.B = (float)FLinearColor::White.field0_0x0._8_4_;
            local_98._s_0.A = (float)FLinearColor::White.field0_0x0._12_4_;
          }
          pFVar4 = (FSlateBrush *)**(undefined8 **)((longlong)this + 0x18);
          pFVar10 = SWidget::GetPaintSpaceGeometry(this_00);
          pFVar5 = *(FSlateWindowElementList **)((longlong)this + 8);
          local_54 = 0;
          local_60 = (pFVar10->AbsolutePosition).field0_0x0;
          local_58 = pFVar10->Scale;
          local_34 = (pFVar10->AccumulatedRenderTransform).Trans.field0_0x0;
          local_4c = pFVar10->Size;
          local_44 = (pFVar10->AccumulatedRenderTransform).M.M[0];
          afStack_3c = (pFVar10->AccumulatedRenderTransform).M.M[1];
          local_2c = pFVar10->bHasRenderTransform * '\x02' | local_2c & 0xfc;
          uVar2 = **(uint **)((longlong)this + 0x10);
          FPaintGeometry::CommitTransformsIfUsingLegacyConstructor((FPaintGeometry *)&local_60._s_0)
          ;
          bVar13 = ShouldCull(pFVar5,(FPaintGeometry *)&local_60._s_0,pFVar4,
                              (FLinearColor *)&local_98._s_0);
          if (!bVar13) {
            FSlateDrawElement::MakeBoxInternal
                      (pFVar5,uVar2,(FPaintGeometry *)&local_60._s_0,pFVar4,None,
                       (FLinearColor *)&local_98._s_0);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
    } while (local_80.CurrentBitIndex < (local_80.Array)->NumBits);
  }
  return;
}

// AddGrid @ 1424ff3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FHittestGrid::AddGrid(FHittestGrid *this,TSharedRef<FHittestGrid_const_,1> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<FHittestGrid_const_*> FVar3;
  FScriptContainerElement *pFVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  FHittestGrid *pFVar7;
  FHittestGrid *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FAppendedGridData *pFVar12;
  ForElementType<FHittestGrid_const_*> FVar13;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  <lambda_2> local_d0;
  TArray<FHittestGrid_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  local_d0.OtherGrid.Object = param_1->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->AppendedGridArray;
  local_d0.OtherGrid.SharedReferenceCount.ReferenceController = pTVar6;
  pFVar12 = TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FHittestGrid::AddGrid_::__l2::<lambda_2>_>(this_00,&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar7 = param_1->Object;
  if ((((pFVar7 == (FHittestGrid *)0x0) || (pFVar7->Owner == (SWidget *)0x0)) || (this == pFVar7))
     || (bVar10 = SameSize(this,pFVar7), !bVar10)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<171237520003039980>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                        ,0x2ec,"CanBeAppended(&OtherGrid.Get())");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    RemoveGrid(this,param_1);
  }
  else if (pFVar12 == (FAppendedGridData *)0x0) {
    local_c0.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid_const_*>)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0x10;
    `FHittestGrid::AddGrid'::__l2::<lambda_1>::operator()(local_d8,this,&local_c0);
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar7 = param_1->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar13 = (ForElementType<FHittestGrid_const_*>)&local_c0;
    if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
      FVar13 = local_c0.AllocatorInstance.SecondaryData;
    }
    FVar3 = (ForElementType<FHittestGrid_const_*>)
            ((longlong)FVar13 + (longlong)local_c0.ArrayNum * 8);
    for (; FVar13 != FVar3; FVar13 = (ForElementType<FHittestGrid_const_*>)((longlong)FVar13 + 8)) {
      if (pFVar7 == *(FHittestGrid **)FVar13) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        if (FVar13 == (ForElementType<FHittestGrid_const_*>)0x0) goto LAB_1424ff52a;
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<171237520003039988>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                            ,0x2f4,"!bIsInCollapsed");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_1424ff603;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_1424ff52a:
    iVar11 = (this->AppendedGridArray).ArrayNum;
    piVar1 = &(this->AppendedGridArray).ArrayMax;
    pFVar7 = param_1->Object;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&this_00->AllocatorInstance,piVar1);
    }
    (this->AppendedGridArray).ArrayNum = iVar11 + 1;
    pFVar8 = param_1->Object;
    pFVar4 = (this_00->AllocatorInstance).Data + (longlong)iVar11 * 0x18;
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      *(SWidget **)pFVar4 = pFVar7->Owner;
      *(FHittestGrid **)(pFVar4 + 8) = pFVar8;
      *(undefined8 *)(pFVar4 + 0x10) = 0;
    }
    else {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
      *(SWidget **)pFVar4 = pFVar7->Owner;
      *(FHittestGrid **)(pFVar4 + 8) = pFVar8;
      *(TReferenceControllerBase<1> **)(pFVar4 + 0x10) = pTVar6;
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
LAB_1424ff603:
    if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
      FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// AddWidget @ 142500a60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHittestGrid::AddWidget
          (FHittestGrid *this,SWidget *param_1,int param_2,int param_3,
          FSlateInvalidationWidgetSortOrder param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TVector2<float>_u_0_s_0 TVar10;
  bool bVar11;
  FNameEntryId FVar12;
  SWidget *pSVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  atomic<int> aVar18;
  uint uVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_SlateHTG_AddWidget> FVar22;
  FGeometry *pFVar23;
  FSlateRotatedRect *pFVar24;
  int *piVar25;
  longlong lVar26;
  int *piVar27;
  FName FVar28;
  FName FVar29;
  FName FVar30;
  FScriptContainerElement *pFVar31;
  FName FVar32;
  uint uVar33;
  FName FVar34;
  FName FVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  FName local_210;
  int local_208 [2];
  FNameEntryId local_200;
  float fStack_1fc;
  int local_1f8;
  SWidget *local_1f0;
  FColor_u_0 local_1e8;
  TKeyInitializer<SWidget_const_*_const_&> local_1e4;
  FName local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  FName local_1c0;
  FName local_1b8;
  TVector2<float>_u_0 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  SWidget **local_190;
  FName local_188;
  longlong local_180;
  FName local_178;
  undefined8 local_16c;
  undefined4 local_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  TTransform2<float> TStack_144;
  undefined4 uStack_12c;
  FSparseArrayAllocationInfo local_128;
  TTransform2<float> local_118;
  TTransform2<float> local_100;
  TVector2<float>_u_0_s_0 local_e8;
  FSlateRotatedRect local_c8 [6];
  
  local_1e4.Key._4_4_ = 0;
  local_1f0 = param_1;
  if ((param_1 == (SWidget *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InWidget",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                          ,0x330,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((byte)local_1f0->VisibilityAttribute & 8) == 0) {
    return;
  }
  FVar22 = StatPtr_STAT_SlateHTG_AddWidget;
  if (StatPtr_STAT_SlateHTG_AddWidget == (FThreadSafeStaticStat<FStat_STAT_SlateHTG_AddWidget>)0x0)
  {
    pFVar21 = ::FName::FName(&local_178,"STAT_SlateHTG_AddWidget");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_SlateHTG_AddWidget>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_AddWidget,*pFVar21,
                        L"HitTestGrid AddWidget","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar22;
  bVar15 = false;
  bVar11 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  bVar14 = false;
  bVar36 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_142500c49:
    bVar11 = bVar36;
    bVar15 = bVar14;
    bVar14 = false;
    local_1c0 = local_1b8;
    FVar28 = local_1b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar15 = false;
      bVar11 = true;
      bVar14 = false;
      bVar36 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_1d8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                   ,0x337);
        bVar15 = true;
        bVar11 = true;
        bVar14 = true;
        bVar36 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142500c49;
    local_1c0 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar14 = true;
  }
  pFVar23 = SWidget::GetPaintSpaceGeometry(local_1f0);
  uVar3 = *(undefined8 *)&(pFVar23->AbsolutePosition).field0_0x0._s_0.Y;
  uVar7 = *(undefined8 *)&(pFVar23->Position).field0_0x0._s_0.Y;
  uVar8 = *(undefined8 *)((pFVar23->AccumulatedRenderTransform).M.M[0] + 1);
  uVar9 = *(undefined8 *)((pFVar23->AccumulatedRenderTransform).M.M[1] + 1);
  local_160 = *(undefined4 *)&pFVar23->Size;
  uStack_15c = *(undefined4 *)&(pFVar23->Size).field_0x4;
  fVar42 = pFVar23->Scale;
  fStack_154 = (pFVar23->AbsolutePosition).field0_0x0._s_0.X;
  TVar10 = (pFVar23->AbsolutePosition).field0_0x0._s_0;
  fStack_150 = (float)uVar3;
  uStack_14c = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_148 = (undefined4)uVar7;
  TStack_144.M.M[0][0] = (float)((ulonglong)uVar7 >> 0x20);
  uVar3 = *(undefined8 *)&(pFVar23->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  TStack_144.Trans.field0_0x0._s_0.Y = (float)uVar3;
  uStack_12c = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_118.Trans.field0_0x0._s_0.Y =
       (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.Y ^
              __xmm_80000000800000008000000080000000);
  TStack_144.M.M[0][1] = (float)uVar8;
  TStack_144.M.M[1][0] = (float)((ulonglong)uVar8 >> 0x20);
  TStack_144.M.M[1][1] = (float)uVar9;
  TStack_144.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar9 >> 0x20);
  local_118.Trans.field0_0x0._s_0.X =
       (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.X ^
              __xmm_80000000800000008000000080000000);
  local_210.ComparisonIndex.Value = (uint)TVar10.X;
  local_210.Number = (uint)TVar10.Y;
  local_16c._0_4_ = local_118.Trans.field0_0x0._s_0.X;
  local_16c._4_4_ = local_118.Trans.field0_0x0._s_0.Y;
  local_200.Value =
       (uint)((float)local_210.ComparisonIndex.Value + local_118.Trans.field0_0x0._s_0.X);
  fStack_1fc = (float)local_210.Number + local_118.Trans.field0_0x0._s_0.Y;
  local_1d0._0_4_ = local_118.Trans.field0_0x0._s_0.X;
  local_1d0._4_4_ = local_118.Trans.field0_0x0._s_0.Y;
  local_118.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_118.M.M[0][1] = _UNK_15076b184;
  local_118.M.M[1][0] = _UNK_15076b188;
  local_118.M.M[1][1] = _UNK_15076b18c;
  fStack_158 = fVar42;
  Concatenate<TTransform2<float>_>(&local_100,&TStack_144,&local_118);
  fStack_154 = (float)local_200.Value;
  fStack_150 = fStack_1fc;
  TStack_144.M.M[0][0] = local_100.M.M[0][0];
  TStack_144.M.M[0][1] = local_100.M.M[0][1];
  TStack_144.M.M[1][0] = local_100.M.M[1][0];
  TStack_144.M.M[1][1] = local_100.M.M[1][1];
  local_1a8 = (TVector2<float>_u_0)0x0;
  TStack_144.Trans.field0_0x0._s_0.X = local_100.Trans.field0_0x0._0_4_;
  TStack_144.Trans.field0_0x0._s_0.Y = local_100.Trans.field0_0x0._4_4_;
  local_1a0 = local_160;
  local_194 = uStack_15c;
  local_19c = 0;
  fStack_158 = fVar42;
  pFVar24 = TransformRect<TTransform2<float>_>
                      (local_c8,&TStack_144,(FSlateRotatedRect *)&local_1a8._s_0);
  pSVar13 = local_1f0;
  fVar38 = __real_3f800000 / CellSize.field0_0x0._s_0.Y;
  uVar33 = (this->NumCells).field0_0x0._s_0.Y - 1;
  local_e8 = (pFVar24->TopLeft).field0_0x0._s_0;
  fVar42 = (pFVar24->TopLeft).field0_0x0._s_0.Y;
  fVar39 = (pFVar24->ExtentY).field0_0x0._s_0.Y;
  fVar40 = fVar42 + (pFVar24->ExtentX).field0_0x0._s_0.Y;
  fVar45 = (pFVar24->TopLeft).field0_0x0._s_0.X;
  fVar42 = fVar42 + fVar39;
  fVar43 = (pFVar24->ExtentY).field0_0x0._s_0.X;
  fVar44 = fVar45 + (pFVar24->ExtentX).field0_0x0._s_0.X;
  fVar45 = fVar45 + fVar43;
  fVar39 = fVar39 + fVar40;
  fVar37 = fVar42;
  if (fVar40 <= fVar42) {
    fVar37 = fVar40;
  }
  fVar43 = fVar43 + fVar44;
  if (fVar39 <= fVar37) {
    fVar37 = fVar39;
  }
  if (local_e8.Y <= fVar37) {
    fVar37 = local_e8.Y;
  }
  fVar41 = __real_3f800000 / CellSize.field0_0x0._s_0.X;
  if (fVar42 <= fVar40) {
    fVar42 = fVar40;
  }
  if (fVar42 <= fVar39) {
    fVar42 = fVar39;
  }
  if (fVar42 <= local_e8.Y) {
    fVar42 = local_e8.Y;
  }
  fVar39 = fVar45;
  if (fVar45 <= fVar44) {
    fVar39 = fVar44;
  }
  if (fVar44 <= fVar45) {
    fVar45 = fVar44;
  }
  uVar16 = (int)ROUND(fVar37 * (fVar38 + fVar38) - __real_3f000000) >> 1;
  uVar19 = 0;
  if (0 < (int)uVar16) {
    uVar19 = uVar16;
  }
  if (fVar39 <= fVar43) {
    fVar39 = fVar43;
  }
  local_200.Value = (this->NumCells).field0_0x0._s_0.X - 1;
  if (fVar43 <= fVar45) {
    fVar45 = fVar43;
  }
  if (fVar39 <= local_e8.X) {
    fVar39 = local_e8.X;
  }
  if (local_e8.X <= fVar45) {
    fVar45 = local_e8.X;
  }
  uVar17 = (int)ROUND(fVar45 * (fVar41 + fVar41) - __real_3f000000) >> 1;
  uVar16 = 0;
  if (0 < (int)uVar17) {
    uVar16 = uVar17;
  }
  local_210.ComparisonIndex.Value = local_200.Value;
  if ((int)uVar16 < (int)local_200.Value) {
    local_210.ComparisonIndex.Value = uVar16;
  }
  local_210.Number = uVar33;
  if ((int)uVar19 < (int)uVar33) {
    local_210.Number = uVar19;
  }
  uVar16 = (int)ROUND(fVar42 * (fVar38 + fVar38) - __real_3f000000) >> 1;
  uVar19 = 0;
  if (0 < (int)uVar16) {
    uVar19 = uVar16;
  }
  uVar17 = (int)ROUND(fVar39 * (fVar41 + fVar41) - __real_3f000000) >> 1;
  uVar16 = 0;
  if (0 < (int)uVar17) {
    uVar16 = uVar17;
  }
  if ((int)uVar16 < (int)local_200.Value) {
    local_200.Value = uVar16;
  }
  if ((int)uVar19 < (int)uVar33) {
    uVar33 = uVar19;
  }
  FVar29 = (FName)((longlong)param_2 << 0x20 | (longlong)param_3);
  fStack_1fc = (float)uVar33;
  local_188 = FVar29;
  piVar25 = TMapBase<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
            ::Find((TMapBase<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
                    *)this,local_1f0);
  if (piVar25 != (int *)0x0) {
    lVar5 = *(longlong *)&this->WidgetArray;
    lVar26 = (longlong)*piVar25 * 0x40;
    if ((((*(uint *)(lVar26 + 0x20 + lVar5) == local_210.ComparisonIndex.Value) &&
         (*(uint *)(lVar26 + 0x24 + lVar5) == local_210.Number)) &&
        (*(uint *)(lVar26 + 0x28 + lVar5) == local_200.Value)) &&
       (*(uint *)(lVar26 + 0x2c + lVar5) == uVar33)) {
      *(uint *)(lVar26 + 0x38 + lVar5) = param_4.Order;
      *(FName *)(lVar26 + 0x30 + lVar5) = FVar29;
      *(int *)(lVar26 + 0x3c + lVar5) = this->CurrentUserIndex;
      goto LAB_14250139b;
    }
    RemoveWidget(this,pSVar13);
  }
  local_190 = &local_1f0;
  TSet<TTuple<SWidget_const_*,int>,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<SWidget_const_*_const_&>_>
            ((TSet<TTuple<SWidget_const_*,int>,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>,FDefaultSetAllocator>
              *)this,&local_1e4,(bool *)&local_190);
  FVar32.ComparisonIndex.Value = 0;
  FVar32.Number = 0;
  FVar34.ComparisonIndex.Value = 0;
  FVar34.Number = 0;
  local_180 = (longlong)(int)local_1e4.Key * 3;
  local_1c8 = *(longlong *)&this->WidgetMap;
  FVar29 = (FName)local_1f0->_padding_;
  FVar30 = FVar29;
  FVar35 = FVar32;
  if (FVar29 != (FName)0x0) {
    aVar2 = *(atomic<int> *)((longlong)FVar29 + 8);
    do {
      FVar30 = FVar32;
      FVar35 = FVar34;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142501007;
      LOCK();
      aVar18 = *(atomic<int> *)((longlong)FVar29 + 8);
      bVar36 = aVar2 == aVar18;
      if (bVar36) {
        *(atomic<int> *)((longlong)FVar29 + 8) = (atomic<int>)((int)aVar2 + 1);
        aVar18 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar18;
    } while (!bVar36);
    FVar30 = FVar29;
    FVar35 = (FName)local_1f0->_padding_;
  }
LAB_142501007:
  FVar29 = (FName)((longlong)FVar35 + 8);
  if (FVar35 == (FName)0x0) {
    FVar29 = FVar32;
  }
  if ((FVar29 != (FName)&local_1f0->_padding_) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (FVar35 == (FName)0x0) {
    bVar36 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar36) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar36 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar36) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  iVar20 = *(int *)&(this->WidgetArray).field_0x34;
  if (iVar20 == 0) {
    local_1f8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,1,(ForAnyElementType *)&this->WidgetArray,
                           (int *)&(this->WidgetArray).field_0x8,
                           (int *)&(this->WidgetArray).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetArray).field_0x10,false);
  }
  else {
    local_1f8 = *(int *)&(this->WidgetArray).field_0x30;
    lVar5 = *(longlong *)&this->WidgetArray;
    iVar4 = *(int *)((longlong)local_1f8 * 0x40 + 4 + lVar5);
    iVar20 = iVar20 + -1;
    *(int *)&(this->WidgetArray).field_0x30 = iVar4;
    *(int *)&(this->WidgetArray).field_0x34 = iVar20;
    if (iVar20 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x40 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)&this->WidgetArray,&local_128,
             local_1f8);
  uVar19 = local_1e4.Key._4_4_;
  if (local_128.Pointer != (FName *)0x0) {
    uVar19 = this->CurrentUserIndex;
    if (FVar30 == (FName)0x0) {
      *(FName *)local_128.Pointer = FVar35;
      ((FName *)((longlong)local_128.Pointer + 8))->ComparisonIndex = 0;
      ((FName *)((longlong)local_128.Pointer + 8))->Number = 0;
    }
    else {
      LOCK();
      *(atomic<int> *)((longlong)FVar30 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar30 + 0xc) + 1);
      UNLOCK();
      *(FName *)local_128.Pointer = FVar35;
      *(FName *)((longlong)local_128.Pointer + 8) = FVar30;
      LOCK();
      *(atomic<int> *)((longlong)FVar30 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar30 + 0xc) + 1);
      UNLOCK();
    }
    ((FName *)((longlong)local_128.Pointer + 0x10))->ComparisonIndex = 0;
    ((FName *)((longlong)local_128.Pointer + 0x10))->Number = 0;
    ((FName *)((longlong)local_128.Pointer + 0x18))->ComparisonIndex = 0;
    ((FName *)((longlong)local_128.Pointer + 0x18))->Number = 0;
    *(FName *)((longlong)local_128.Pointer + 0x20) = local_210;
    FVar29.Number = (uint)fStack_1fc;
    FVar29.ComparisonIndex.Value = local_200.Value;
    *(FName *)((longlong)local_128.Pointer + 0x28) = FVar29;
    *(FName *)((longlong)local_128.Pointer + 0x30) = local_188;
    (((FName *)((longlong)local_128.Pointer + 0x38))->ComparisonIndex).Value = param_4.Order;
    ((FName *)((longlong)local_128.Pointer + 0x38))->Number = uVar19;
    local_178 = FVar30;
    uVar19 = 1;
  }
  if (((uVar19 & 1) != 0) && (local_178 != (FName)0x0)) {
    LOCK();
    paVar1 = (atomic<int> *)((longlong)local_178 + 0xc);
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_178 + 8))(local_178,1);
    }
  }
  lVar26 = local_180;
  *(int *)(local_1c8 + 8 + local_180 * 8) = local_128.Index;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar30);
  lVar5 = local_1c8;
  uVar19 = local_210.Number;
  FVar12.Value = local_200.Value;
  if ((int)local_210.ComparisonIndex.Value <= (int)local_200.Value) {
    do {
      for (; FVar28 = local_1c0, local_1c0 = FVar28, (int)uVar19 <= (int)uVar33; uVar19 = uVar19 + 1
          ) {
        if ((((-1 < (int)local_210.ComparisonIndex.Value) &&
             (iVar20 = (this->NumCells).field0_0x0._s_0.X,
             (int)local_210.ComparisonIndex.Value < iVar20)) && (-1 < (int)uVar19)) &&
           ((int)uVar19 < (this->NumCells).field0_0x0._s_0.Y)) {
          uVar17 = iVar20 * uVar19 + local_210.ComparisonIndex.Value;
          uVar16 = 0;
          if ((int)uVar17 < (this->Cells).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_208[0] = *(int *)(lVar5 + 8 + lVar26 * 8);
          pFVar31 = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10;
          piVar27 = *(int **)&pFVar31->field_0x0;
          piVar25 = piVar27 + *(int *)&pFVar31[8].field_0x0;
          for (; piVar27 != piVar25; piVar27 = piVar27 + 1) {
            if (*piVar27 == local_208[0]) {
              bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!WidgetIndexes.Contains(WidgetIndex)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                                  ,0x91,L"");
              if (bVar36) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              break;
            }
          }
          if (((*(int **)&pFVar31->field_0x0 <= local_208) &&
              (local_208 < *(int **)&pFVar31->field_0x0 + *(int *)(pFVar31 + 0xc))) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar36)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar20 = *(int *)&pFVar31[8].field_0x0;
          if (iVar20 == *(int *)(pFVar31 + 0xc)) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
          }
          *(int *)&pFVar31[8].field_0x0 = iVar20 + 1;
          *(int *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar20 * 4) = local_208[0];
        }
        FVar12.Value = local_200.Value;
      }
      local_210.ComparisonIndex.Value = local_210.ComparisonIndex.Value + 1;
      uVar19 = local_210.Number;
    } while ((int)local_210.ComparisonIndex.Value <= (int)FVar12.Value);
  }
LAB_14250139b:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// CanBeAppended @ 1425038d0

bool __thiscall FHittestGrid::CanBeAppended(FHittestGrid *this,FHittestGrid *param_1)

{
  bool bVar1;
  
  if (((param_1 != (FHittestGrid *)0x0) && (param_1->Owner != (SWidget *)0x0)) && (this != param_1))
  {
    bVar1 = SameSize(this,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Clear @ 142503d40

void __thiscall FHittestGrid::Clear(FHittestGrid *this)

{
  ClearInternal(this,(this->Cells).ArrayNum);
  return;
}

// ClearInternal @ 1425041f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHittestGrid::ClearInternal(FHittestGrid *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FAppendedGridData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SlateHTG_Clear> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  TArray<FHittestGrid::FCell,TSizedDefaultAllocator<32>_> *this_02;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  
  FVar11 = StatPtr_STAT_SlateHTG_Clear;
  if (StatPtr_STAT_SlateHTG_Clear == (FThreadSafeStaticStat<FStat_STAT_SlateHTG_Clear>)0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_SlateHTG_Clear");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_SlateHTG_Clear>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_Clear,*pFVar10,
                        L"HitTestGrid Clear","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                   ,0x127);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar12.Value;
      local_78.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_142504343;
    }
  }
  bVar6 = false;
  FVar13 = local_68;
LAB_142504343:
  this_02 = &this->Cells;
  iVar2 = (this->Cells).ArrayNum;
  piVar1 = &(this->Cells).ArrayNum;
  pFVar15 = (this_02->AllocatorInstance).Data;
  pFVar16 = pFVar15 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (*piVar1 != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FHittestGrid::FCell,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar15 == pFVar16) break;
    if (*(int *)(pFVar15 + 0xc) < 0) {
      *(undefined4 *)&pFVar15[8].field_0x0 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar15,0,(int *)(pFVar15 + 0xc));
      pFVar15 = pFVar15 + 0x10;
    }
    else {
      *(undefined4 *)&pFVar15[8].field_0x0 = 0;
      pFVar15 = pFVar15 + 0x10;
    }
  }
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this_02->AllocatorInstance,piVar1,
                       &(this->Cells).ArrayMax);
    memset((this_02->AllocatorInstance).Data + (longlong)iVar9 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar14 = iVar2 - param_1;
      if ((int)(uVar14 | param_1) < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar14 != 0) {
        TArray<FHittestGrid::FCell,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_02,param_1,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_02->AllocatorInstance,*piVar1,&(this->Cells).ArrayMax);
      }
    }
  }
  TSet<TTuple<SWidget_const_*,int>,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<SWidget_const_*,int>,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>,FDefaultSetAllocator>
           *)this);
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::DestroyElements
            (&this->WidgetArray,0,*(int *)&(this->WidgetArray).field_0x8);
  *(undefined4 *)&(this->WidgetArray).field_0x8 = 0;
  if (*(int *)&(this->WidgetArray).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->WidgetArray,0,
               (int *)&(this->WidgetArray).field_0xc);
  }
  *(undefined4 *)&(this->WidgetArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetArray).field_0x34 = 0;
  *(undefined4 *)&(this->WidgetArray).field_0x28 = 0;
  piVar1 = &(this->AppendedGridArray).ArrayMax;
  pFVar3 = (FAppendedGridData *)(this->AppendedGridArray).AllocatorInstance.Data;
  iVar2 = (this->AppendedGridArray).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FHittestGrid::FAppendedGridData,int>(pFVar3,iVar2);
    (this->AppendedGridArray).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->AppendedGridArray).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FHittestGrid::FAppendedGridData,int>(pFVar3,iVar2);
    (this->AppendedGridArray).ArrayNum = 0;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ContainsWidget @ 1425055f0

bool __thiscall FHittestGrid::ContainsWidget(FHittestGrid *this,SWidget *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->WidgetMap).field_0x8 != *(int *)&(this->WidgetMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->WidgetMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->WidgetMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->WidgetMap).field_0x48 - 1U & (uVar3 >> 0x10 ^ uVar3))
                              * 4);
    if (iVar1 != -1) {
      do {
        if (*(SWidget **)(*(longlong *)&this->WidgetMap + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14250566f;
        iVar1 = *(int *)(*(longlong *)&this->WidgetMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14250566f:
  return iVar1 != -1;
}

// DisplayGrid @ 142507bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHittestGrid::DisplayGrid
          (FHittestGrid *this,int param_1,FGeometry *param_2,FSlateWindowElementList *param_3,
          EDisplayGridFlags param_4)

{
  ForElementType<FHittestGrid_const_*> FVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  atomic<int> aVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  ForElementType<FHittestGrid_const_*> FVar14;
  TReferenceControllerBase<1> *pTVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  int local_res10 [2];
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  uint local_1b4;
  undefined1 local_1b0 [16];
  FSlateBrush *local_1a0;
  EDisplayGridFlags *local_198;
  FSlateWindowElementList *local_190;
  int *local_188;
  FSlateBrush **local_180;
  FName local_178;
  FName local_170;
  ForElementType<FHittestGrid_const_*> local_168;
  int local_e0;
  int local_dc;
  TArray<FHittestGrid_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_res10[0] = param_1;
  if ((*piVar16 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar10 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar10 + 0x50);
    pFVar11 = ::FName::FName(&local_178,L"FocusRectangle");
    FocusRectangleBrush = (FSlateBrush *)(*pcVar4)(pIVar10,*pFVar11,0,0);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar16 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar10 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar10 + 0x50);
    pFVar11 = ::FName::FName(&local_170,L"Border");
    BorderBrush = (FSlateBrush *)(*pcVar4)(pIVar10,*pFVar11,0,0);
    _Init_thread_footer(&::_TSS1);
  }
  local_1a0 = BorderBrush;
  if ((param_4 & UseFocusBrush) != None) {
    local_1a0 = FocusRectangleBrush;
  }
  local_198 = &param_4;
  local_188 = local_res10;
  local_180 = &local_1a0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid_const_*>)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0x10;
  local_190 = param_3;
  GetCollapsedHittestGrid(this,&local_d8);
  iVar7 = local_d8.ArrayNum;
  uVar13 = (ulonglong)local_d8.ArrayNum;
  FVar14 = (ForElementType<FHittestGrid_const_*>)&local_d8;
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar14 = local_d8.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<FHittestGrid_const_*>)((longlong)FVar14 + uVar13 * 8);
  while( true ) {
    if ((uint)uVar13 != iVar7) {
      local_1b8 = 0;
      `TCheckedPointerIterator<FHittestGrid_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1b8);
    }
    if (FVar14 == FVar1) break;
    `FHittestGrid::DisplayGrid'::__l2::<lambda_1>::operator()(&local_198,*(FHittestGrid **)FVar14);
    uVar13 = (ulonglong)(uint)local_d8.ArrayNum;
    FVar14 = (ForElementType<FHittestGrid_const_*>)((longlong)FVar14 + 8);
  }
  local_dc = 0x10;
  local_168.SecondaryData = (ForElementType<FHittestGrid_const_*>)0x0;
  local_e0 = 0;
  iVar7 = 0;
  local_1b0._0_8_ = this;
  if ((&local_168 <= (ForElementType<FHittestGrid_const_*> *)local_1b0) &&
     (local_1b0 < &local_168.SecondaryData)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = local_e0;
    if (local_e0 == local_dc) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_>
                        (0x808,&local_168,&local_dc);
    }
  }
  local_e0 = iVar7 + 1;
  FVar14 = (ForElementType<FHittestGrid_const_*>)&local_168;
  if (local_168.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar14 = local_168.SecondaryData;
  }
  local_1b4 = 0;
  *(undefined8 *)((longlong)FVar14 + (longlong)iVar7 * 8) = local_1b0._0_8_;
  if (0 < local_e0) {
    lVar18 = 0;
    do {
      uVar8 = 0;
      if ((int)local_1b4 < local_e0) {
        uVar8 = ~local_1b4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar14 = (ForElementType<FHittestGrid_const_*>)&local_168;
      if (local_168.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
        FVar14 = local_168.SecondaryData;
      }
      lVar3 = *(longlong *)((longlong)FVar14 + lVar18);
      iVar7 = *(int *)(lVar3 + 0xa0);
      lVar17 = *(longlong *)(lVar3 + 0x98);
      lVar2 = lVar17 + (longlong)iVar7 * 0x18;
      while( true ) {
        if (*(int *)(lVar3 + 0xa0) != iVar7) {
          local_1b7[0] = 0;
          `TCheckedPointerIterator<FHittestGrid::FAppendedGridData_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_1b7);
        }
        if (lVar17 == lVar2) break;
        pTVar15 = *(TReferenceControllerBase<1> **)(lVar17 + 0x10);
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
LAB_142507ea1:
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<171237520003040461>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                             ,0x4cd,"OtherGridPin.IsValid()");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          lVar17 = lVar17 + 0x18;
        }
        else {
          aVar5 = pTVar15->SharedReferenceCount;
          do {
            if (aVar5 == (atomic<int>)0x0) {
              pTVar15 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_142507ea1;
            }
            LOCK();
            aVar9 = pTVar15->SharedReferenceCount;
            bVar6 = aVar5 == aVar9;
            if (bVar6) {
              pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
              aVar9 = aVar5;
            }
            UNLOCK();
            aVar5 = aVar9;
          } while (!bVar6);
          lVar12 = *(longlong *)(lVar17 + 8);
          if (lVar12 == 0) goto LAB_142507ea1;
          FVar14 = (ForElementType<FHittestGrid_const_*>)&local_168;
          if (local_168.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
            FVar14 = local_168.SecondaryData;
          }
          local_1b0._8_8_ = lVar12;
          if ((ulonglong)FVar14 <= (longlong)local_1b0 + 8U) {
            FVar14 = (ForElementType<FHittestGrid_const_*>)&local_168;
            if (local_168.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
              FVar14 = local_168.SecondaryData;
            }
            if ((local_1b0 + 8 < (undefined1 *)((longlong)FVar14 + (longlong)local_dc * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (local_e0 == local_dc) {
            local_e0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_>
                                 (0x808,&local_168,&local_dc);
          }
          lVar12 = (longlong)local_e0;
          FVar14 = (ForElementType<FHittestGrid_const_*>)&local_168;
          if (local_168.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
            FVar14 = local_168.SecondaryData;
          }
          local_e0 = local_e0 + 1;
          *(undefined8 *)((longlong)FVar14 + lVar12 * 8) = local_1b0._8_8_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          lVar17 = lVar17 + 0x18;
        }
      }
      lVar18 = lVar18 + 8;
      local_1b4 = local_1b4 + 1;
    } while ((int)local_1b4 < local_e0);
  }
  if (local_168.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
    FMemory::Free((void *)local_168.SecondaryData);
  }
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  return;
}

// DisplayNavigation @ 142508110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHittestGrid::DisplayNavigation
          (FHittestGrid *this,int param_1,FGeometry *param_2,FSlateWindowElementList *param_3)

{
  FNavigationMethod *pFVar1;
  
  if (((GSlateNavigationDebugging) &&
      ((this->LastNavigationMethod).InstancedStruct.StructMemory != (uchar *)0x0)) &&
     ((this->LastNavigationMethod).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr !=
      (UScriptStruct *)0x0)) {
    pFVar1 = TInstancedStruct<FNavigationMethod>::GetMutablePtr<FNavigationMethod,void>
                       (&this->LastNavigationMethod);
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_1,param_2,param_3);
  }
  return;
}

// FindNextFocusableWidget @ 142509c50

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::FindNextFocusableWidget
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FArrangedWidget *param_1
          ,EUINavigation param_2,FNavigationReply *param_3,FArrangedWidget *param_4,int param_5)

{
  if (GEnableNavigationExperimental) {
    FindNextFocusableWidgetExperimental
              (this,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5);
    return __return_storage_ptr__;
  }
  FindNextFocusableWidgetDefault
            (this,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5);
  return __return_storage_ptr__;
}

// FindNextFocusableWidgetDefault @ 142509cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::FindNextFocusableWidgetDefault
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FArrangedWidget *param_1
          ,EUINavigation param_2,FNavigationReply *param_3,FArrangedWidget *param_4,int param_5)

{
  float fVar1;
  undefined8 uVar2;
  TVector2<float>_u_0_s_0 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  SWidget *pSVar8;
  bool bVar9;
  FGeometry *pFVar10;
  FSlateRotatedRect *pFVar11;
  TSharedPtr<SWidget,1> *pTVar12;
  TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
  *pTVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_358 [32];
  <lambda_10> local_2e8;
  FSlateRect local_2d8;
  TVector2<float>_u_0 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float local_2b4;
  int local_2a8;
  float local_2a0;
  float fStack_29c;
  FSharedReferencer<1> local_298;
  FHittestGrid *local_290;
  TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
  local_288;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  TTransform2<float> TStack_25c;
  undefined4 uStack_244;
  FSlateRotatedRect local_240;
  undefined1 local_228 [24];
  undefined8 uStack_210;
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  ForElementType<FSetElementId> local_1f0;
  ulonglong local_1e0;
  undefined1 local_1d8 [112];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType FStack_160;
  int local_158;
  EUINavigationRule local_150;
  FDeprecateSlateVector2D local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128 [3] [2];
  SWidget *local_110;
  FSharedReferencer<1> local_108;
  int local_100;
  SWidget *local_f8;
  FSharedReferencer<1> local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2a8 = param_5;
  local_290 = this;
  pFVar10 = SWidget::GetPaintSpaceGeometry((param_1->Widget).Object);
  uVar7 = __xmm_80000000800000008000000080000000;
  uVar2 = *(undefined8 *)&(pFVar10->AbsolutePosition).field0_0x0._s_0.Y;
  uVar4 = *(undefined8 *)&(pFVar10->Position).field0_0x0._s_0.Y;
  uVar5 = *(undefined8 *)((pFVar10->AccumulatedRenderTransform).M.M[0] + 1);
  uVar6 = *(undefined8 *)((pFVar10->AccumulatedRenderTransform).M.M[1] + 1);
  local_278 = *(float *)&pFVar10->Size;
  fStack_274 = *(float *)&(pFVar10->Size).field_0x4;
  fVar17 = pFVar10->Scale;
  fStack_26c = (pFVar10->AbsolutePosition).field0_0x0._s_0.X;
  TVar3 = (pFVar10->AbsolutePosition).field0_0x0._s_0;
  fStack_268 = (float)uVar2;
  uStack_264 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_260 = (undefined4)uVar4;
  TStack_25c.M.M[0][0] = (float)((ulonglong)uVar4 >> 0x20);
  uVar2 = *(undefined8 *)&(pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  TStack_25c.Trans.field0_0x0._s_0.Y = (float)uVar2;
  uStack_244 = (undefined4)((ulonglong)uVar2 >> 0x20);
  TStack_25c.M.M[0][1] = (float)uVar5;
  TStack_25c.M.M[1][0] = (float)((ulonglong)uVar5 >> 0x20);
  TStack_25c.M.M[1][1] = (float)uVar6;
  TStack_25c.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar6 >> 0x20);
  local_2b4 = (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.Y ^
                     __xmm_80000000800000008000000080000000);
  fStack_2b8 = (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.X ^
                      __xmm_80000000800000008000000080000000);
  _local_2a0 = (SWidget *)CONCAT44(local_2b4,fStack_2b8);
  pSVar8 = _local_2a0;
  local_2a0 = TVar3.X;
  local_2d8.Left = fStack_2b8 + local_2a0;
  fStack_29c = TVar3.Y;
  local_2d8.Top = local_2b4 + fStack_29c;
  local_2c8._s_0.X = (float)___xmm_3f80000000000000000000003f800000;
  local_2c8._s_0.Y = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  fStack_2c0 = (float)_UNK_15076b188;
  fStack_2bc = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  _local_2a0 = pSVar8;
  fStack_270 = fVar17;
  Concatenate<TTransform2<float>_>
            ((TTransform2<float> *)&local_240,&TStack_25c,(TTransform2<float> *)&local_2c8._s_0);
  fStack_26c = local_2d8.Left;
  fStack_268 = local_2d8.Top;
  local_2d8.Top = fStack_274;
  local_2d8.Left = local_278;
  TStack_25c.M.M[0][0] = local_240.TopLeft.field0_0x0._0_4_;
  TStack_25c.M.M[0][1] = local_240.TopLeft.field0_0x0._4_4_;
  TStack_25c.M.M[1][0] = local_240.ExtentX.field0_0x0._0_4_;
  TStack_25c.M.M[1][1] = local_240.ExtentX.field0_0x0._4_4_;
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  TStack_25c.Trans.field0_0x0._s_0.X = local_240.ExtentY.field0_0x0._0_4_;
  TStack_25c.Trans.field0_0x0._s_0.Y = local_240.ExtentY.field0_0x0._4_4_;
  fStack_2c0 = local_278;
  local_2b4 = fStack_274;
  fStack_2bc = 0.0;
  fStack_2b8 = 0.0;
  fStack_270 = fVar17;
  pFVar11 = TransformRect<TTransform2<float>_>
                      (&local_240,&TStack_25c,(FSlateRotatedRect *)&local_2c8._s_0);
  TVar3 = (pFVar11->TopLeft).field0_0x0._s_0;
  fVar17 = (pFVar11->TopLeft).field0_0x0._s_0.X;
  fVar1 = (pFVar11->TopLeft).field0_0x0._s_0.Y;
  fVar14 = (pFVar11->ExtentY).field0_0x0._s_0.X;
  fVar16 = fVar17 + (pFVar11->ExtentX).field0_0x0._s_0.X;
  fVar15 = (pFVar11->ExtentY).field0_0x0._s_0.Y;
  uVar23 = fVar17 + fVar14;
  fVar17 = fVar1 + (pFVar11->ExtentX).field0_0x0._s_0.Y;
  local_2c8._s_0.X = TVar3.X;
  local_2c8._s_0.Y = TVar3.Y;
  uVar22 = fVar1 + fVar15;
  fVar14 = fVar14 + fVar16;
  fVar15 = fVar15 + fVar17;
  uVar25 = uVar23;
  if (fVar16 <= (float)uVar23) {
    uVar25 = fVar16;
  }
  uVar24 = uVar22;
  if (fVar17 <= (float)uVar22) {
    uVar24 = fVar17;
  }
  if ((float)uVar23 <= fVar16) {
    uVar23 = fVar16;
  }
  if ((float)uVar22 <= fVar17) {
    uVar22 = fVar17;
  }
  if (fVar14 <= (float)uVar25) {
    uVar25 = fVar14;
  }
  if (fVar15 <= (float)uVar24) {
    uVar24 = fVar15;
  }
  if ((float)uVar23 <= fVar14) {
    uVar23 = fVar14;
  }
  if ((float)uVar22 <= fVar15) {
    uVar22 = fVar15;
  }
  if (local_2c8._s_0.X <= (float)uVar25) {
    uVar25 = local_2c8._s_0.X;
  }
  if (local_2c8._s_0.Y <= (float)uVar24) {
    uVar24 = local_2c8._s_0.Y;
  }
  if ((float)uVar23 <= local_2c8._s_0.X) {
    uVar23 = local_2c8._s_0.X;
  }
  if ((float)uVar22 <= local_2c8._s_0.Y) {
    uVar22 = local_2c8._s_0.Y;
  }
  pFVar10 = SWidget::GetPaintSpaceGeometry((param_4->Widget).Object);
  uVar2 = *(undefined8 *)&(pFVar10->AbsolutePosition).field0_0x0._s_0.Y;
  uVar4 = *(undefined8 *)&(pFVar10->Position).field0_0x0._s_0.Y;
  uVar5 = *(undefined8 *)((pFVar10->AccumulatedRenderTransform).M.M[0] + 1);
  uVar6 = *(undefined8 *)((pFVar10->AccumulatedRenderTransform).M.M[1] + 1);
  local_278 = *(float *)&pFVar10->Size;
  fStack_274 = *(float *)&(pFVar10->Size).field_0x4;
  fVar17 = pFVar10->Scale;
  fStack_26c = (pFVar10->AbsolutePosition).field0_0x0._s_0.X;
  TVar3 = (pFVar10->AbsolutePosition).field0_0x0._s_0;
  fStack_268 = (float)uVar2;
  uStack_264 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_260 = (undefined4)uVar4;
  TStack_25c.M.M[0][0] = (float)((ulonglong)uVar4 >> 0x20);
  uVar2 = *(undefined8 *)&(pFVar10->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  TStack_25c.Trans.field0_0x0._s_0.Y = (float)uVar2;
  uStack_244 = (undefined4)((ulonglong)uVar2 >> 0x20);
  TStack_25c.M.M[0][1] = (float)uVar5;
  TStack_25c.M.M[1][0] = (float)((ulonglong)uVar5 >> 0x20);
  TStack_25c.M.M[1][1] = (float)uVar6;
  TStack_25c.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar6 >> 0x20);
  local_2b4 = (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.Y ^ uVar7);
  fStack_2b8 = (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.X ^ uVar7);
  local_2d8.Top = local_2b4;
  local_2d8.Left = fStack_2b8;
  uVar2 = local_2d8._0_8_;
  local_2d8.Left = TVar3.X;
  local_2a0 = fStack_2b8 + local_2d8.Left;
  local_2d8.Top = TVar3.Y;
  fStack_29c = local_2b4 + local_2d8.Top;
  local_2c8._s_0.X = (float)___xmm_3f80000000000000000000003f800000;
  local_2c8._s_0.Y = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  fStack_2c0 = (float)_UNK_15076b188;
  fStack_2bc = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  local_2d8._0_8_ = uVar2;
  fStack_270 = fVar17;
  Concatenate<TTransform2<float>_>
            ((TTransform2<float> *)&local_240,&TStack_25c,(TTransform2<float> *)&local_2c8._s_0);
  TStack_25c.M.M[0][0] = local_240.TopLeft.field0_0x0._0_4_;
  TStack_25c.M.M[0][1] = local_240.TopLeft.field0_0x0._4_4_;
  TStack_25c.M.M[1][0] = local_240.ExtentX.field0_0x0._0_4_;
  TStack_25c.M.M[1][1] = local_240.ExtentX.field0_0x0._4_4_;
  fStack_26c = local_2a0;
  fStack_268 = fStack_29c;
  local_2d8.Top = fStack_274;
  local_2d8.Left = local_278;
  fStack_2c0 = local_278;
  local_2b4 = fStack_274;
  TStack_25c.Trans.field0_0x0._s_0.X = local_240.ExtentY.field0_0x0._0_4_;
  TStack_25c.Trans.field0_0x0._s_0.Y = local_240.ExtentY.field0_0x0._4_4_;
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  fStack_2bc = 0.0;
  fStack_2b8 = 0.0;
  fStack_270 = fVar17;
  pFVar11 = TransformRect<TTransform2<float>_>
                      (&local_240,&TStack_25c,(FSlateRotatedRect *)&local_2c8._s_0);
  TVar3 = (pFVar11->TopLeft).field0_0x0._s_0;
  fVar17 = (pFVar11->TopLeft).field0_0x0._s_0.X;
  fVar1 = (pFVar11->TopLeft).field0_0x0._s_0.Y;
  fVar18 = fVar17 + (pFVar11->ExtentX).field0_0x0._s_0.X;
  local_2c8._s_0.X = TVar3.X;
  local_2c8._s_0.Y = TVar3.Y;
  fVar16 = fVar1 + (pFVar11->ExtentX).field0_0x0._s_0.Y;
  fVar14 = (pFVar11->ExtentY).field0_0x0._s_0.X;
  fVar15 = (pFVar11->ExtentY).field0_0x0._s_0.Y;
  uVar19 = fVar17 + fVar14;
  uVar21 = fVar1 + fVar15;
  __return_storage_ptr__->Object = (SWidget *)0x0;
  fVar14 = fVar14 + fVar18;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  fVar15 = fVar15 + fVar16;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  uVar20 = uVar19;
  if (fVar18 <= (float)uVar19) {
    uVar20 = fVar18;
  }
  if ((float)uVar19 <= fVar18) {
    uVar19 = fVar18;
  }
  uVar26 = uVar21;
  if ((float)uVar21 <= fVar16) {
    uVar26 = fVar16;
  }
  if (fVar16 <= (float)uVar21) {
    uVar21 = fVar16;
  }
  if (fVar14 <= (float)uVar20) {
    uVar20 = fVar14;
  }
  if ((float)uVar19 <= fVar14) {
    uVar19 = fVar14;
  }
  if ((float)uVar26 <= fVar15) {
    uVar26 = fVar15;
  }
  if (fVar15 <= (float)uVar21) {
    uVar21 = fVar15;
  }
  if (local_2c8._s_0.X <= (float)uVar20) {
    uVar20 = local_2c8._s_0.X;
  }
  if ((float)uVar19 <= local_2c8._s_0.X) {
    uVar19 = local_2c8._s_0.X;
  }
  if ((float)uVar26 <= local_2c8._s_0.Y) {
    uVar26 = local_2c8._s_0.Y;
  }
  if (local_2c8._s_0.Y <= (float)uVar21) {
    uVar21 = local_2c8._s_0.Y;
  }
  bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &OnFindNextFocusableWidgetExecuted);
  local_1fc = 0x80;
  local_1f0.InlineData[0] = '\0';
  local_1f0.InlineData[1] = '\0';
  local_1f0.InlineData[2] = '\0';
  local_1f0.InlineData[3] = '\0';
  local_1f0._padding_ = 0;
  pTVar13 = &local_288;
  local_1e0 = 0;
  if (!bVar9) {
    pTVar13 = (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
               *)0x0;
  }
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  local_228._16_8_ = 0;
  uStack_210 = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1f0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if (param_2 == Left) {
    local_2c8._s_0.Y = (float)uVar24 + __real_3f000000;
    fStack_2bc = (float)uVar22 - __real_3f000000;
    local_2d8.Top = (float)uVar24;
    local_2d8.Left = (float)uVar25;
    local_2d8.Right = (float)uVar23;
    local_2d8.Bottom = (float)uVar22;
    local_2c8._0_4_ = uVar20;
    fStack_2c0 = (float)uVar19;
    pTVar12 = FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_1>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_2>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_3>_>
                        (local_290,(TSharedPtr<SWidget,1> *)&local_2a0,&local_2d8,
                         (FSlateRect *)&local_2c8._s_0,0,-1,Left,param_3,(<lambda_1>)local_2e8,
                         (<lambda_2>)local_2e8,(<lambda_3>)local_2e8,local_2a8,pTVar13,
                         (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                          *)local_228);
  }
  else if (param_2 == Right) {
    local_2c8._s_0.Y = (float)uVar24 + __real_3f000000;
    fStack_2bc = (float)uVar22 - __real_3f000000;
    local_2d8.Top = (float)uVar24;
    local_2d8.Left = (float)uVar25;
    local_2d8.Right = (float)uVar23;
    local_2d8.Bottom = (float)uVar22;
    local_2c8._0_4_ = uVar20;
    fStack_2c0 = (float)uVar19;
    pTVar12 = FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_4>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_5>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_6>_>
                        (local_290,(TSharedPtr<SWidget,1> *)&local_2a0,&local_2d8,
                         (FSlateRect *)&local_2c8._s_0,0,1,Right,param_3,(<lambda_4>)local_2e8,
                         (<lambda_5>)local_2e8,(<lambda_6>)local_2e8,local_2a8,pTVar13,
                         (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                          *)local_228);
  }
  else if (param_2 == Up) {
    local_2c8._s_0.X = (float)uVar25 + __real_3f000000;
    fStack_2c0 = (float)uVar23 - __real_3f000000;
    local_2d8.Top = (float)uVar24;
    local_2d8.Left = (float)uVar25;
    local_2d8.Right = (float)uVar23;
    local_2d8.Bottom = (float)uVar22;
    local_2c8._4_4_ = uVar21;
    fStack_2bc = (float)uVar26;
    pTVar12 = FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_7>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_8>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_9>_>
                        (local_290,(TSharedPtr<SWidget,1> *)&local_2a0,&local_2d8,
                         (FSlateRect *)&local_2c8._s_0,1,-1,Up,param_3,(<lambda_7>)local_2e8,
                         (<lambda_8>)local_2e8,(<lambda_9>)local_2e8,local_2a8,pTVar13,
                         (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                          *)local_228);
  }
  else {
    if (param_2 != Down) goto LAB_14250a3a8;
    local_2c8._s_0.X = (float)uVar25 + __real_3f000000;
    fStack_2c0 = (float)uVar23 - __real_3f000000;
    local_2d8.Top = (float)uVar24;
    local_2d8.Left = (float)uVar25;
    local_2d8.Right = (float)uVar23;
    local_2d8.Bottom = (float)uVar22;
    local_2c8._4_4_ = uVar21;
    fStack_2bc = (float)uVar26;
    pTVar12 = FindFocusableWidget<_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_10>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_11>,_FHittestGrid::FindNextFocusableWidgetDefault_::__l4::<lambda_12>_>
                        (local_290,(TSharedPtr<SWidget,1> *)&local_2a0,&local_2d8,
                         (FSlateRect *)&local_2c8._s_0,1,1,Down,param_3,local_2e8,
                         (<lambda_11>)local_2e8,(<lambda_12>)local_2e8,local_2a8,pTVar13,
                         (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                          *)local_228);
  }
  if (__return_storage_ptr__ != pTVar12) {
    __return_storage_ptr__->Object = pTVar12->Object;
    pTVar12->Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.ReferenceController);
LAB_14250a3a8:
  if (pTVar13 !=
      (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
       *)0x0) {
    local_1d8._0_8_ = (param_1->Geometry).Size;
    local_1d8._8_8_ = *(undefined8 *)&(param_1->Geometry).Scale;
    local_1d8._56_8_ = (param_1->Widget).Object;
    local_1d8._16_8_ =
         *(undefined8 *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
    local_1d8._24_8_ = *(undefined8 *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
    local_1d8._64_8_ = (param_1->Widget).SharedReferenceCount.ReferenceController;
    local_1d8._32_8_ = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    local_1d8._40_8_ = *(undefined8 *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    local_1d8._48_8_ =
         *(undefined8 *)
          ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    if ((TReferenceControllerBase<1> *)local_1d8._64_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1d8._64_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1d8._64_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1d8._80_8_ = (param_3->EventHandler).Object;
    local_1d8._88_8_ = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
    if ((TReferenceControllerBase<1> *)local_1d8._88_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1d8._88_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1d8._88_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1d8._96_8_ = (param_3->FocusRecipient).Object;
    local_1d8._104_8_ = (param_3->FocusRecipient).SharedReferenceCount.ReferenceController;
    if ((TReferenceControllerBase<1> *)local_1d8._104_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1d8._104_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1d8._104_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158 = 0;
    local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_160.Data = (FScriptContainerElement *)0x0;
    local_1d8[0x48] = param_2;
    TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&local_168,&param_3->FocusDelegate);
    local_150 = param_3->BoundaryRule;
    local_148 = (param_4->Geometry).Size;
    uStack_140 = *(undefined8 *)&(param_4->Geometry).Scale;
    local_110 = (param_4->Widget).Object;
    local_108.ReferenceController = (param_4->Widget).SharedReferenceCount.ReferenceController;
    local_138 = *(undefined8 *)((longlong)&(param_4->Geometry).AbsolutePosition.field0_0x0 + 4);
    uStack_130 = *(undefined8 *)((longlong)&(param_4->Geometry).Position.field0_0x0 + 4);
    local_128[2] = (float  [2])
                   *(undefined8 *)
                    ((longlong)&(param_4->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
    ;
    local_128[0] = (float  [2])
                   *(undefined8 *)((param_4->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    local_128[1] = (float  [2])
                   *(undefined8 *)((param_4->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_100 = local_2a8;
    local_f8 = __return_storage_ptr__->Object;
    local_f0.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.Data = (FScriptContainerElement *)(pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_e0 = pTVar13->ArrayNum;
    local_dc = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    TMulticastDelegate<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&OnFindNextFocusableWidgetExecuted,local_290,
                (FDebuggingFindNextFocusableWidgetArgs *)local_1d8);
    DestructItems<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,int>
              ((FWidgetResult *)local_e8.Data,local_e0);
    if ((FWidgetResult *)local_e8.Data != (FWidgetResult *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_168,(FWriteAccessScope *)&local_2c8._s_0);
    if ((local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_160.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_160,0,0,0x10);
      local_158 = 0;
    }
    if (fStack_2b8._0_1_ == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_2bc,fStack_2c0),
                 (FDestructionSentinel *)&local_2c8._s_0);
    }
    if (FStack_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_160.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._104_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._88_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._64_8_);
  }
  local_1e0 = local_1e0 & 0xffffffff00000000;
  if (local_1f0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1f0.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_228,0,local_228._8_4_);
  bVar9 = local_228._12_4_ != 0;
  local_228._8_8_ = (ulonglong)(uint)local_228._12_4_ << 0x20;
  if (bVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
  }
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_200 = 0;
  if (0x80 < local_1fc) {
    local_1fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._0_8_);
  }
  DestructItems<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,int>
            ((FWidgetResult *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
  if ((FWidgetResult *)local_288.AllocatorInstance.Data != (FWidgetResult *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindNextFocusableWidgetExperimental @ 14250a710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FHittestGrid::FindNextFocusableWidgetExperimental
          (FHittestGrid *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,FArrangedWidget *param_1
          ,EUINavigation param_2,FNavigationReply *param_3,FArrangedWidget *param_4,int param_5)

{
  TInstancedStruct<FNavigationMethod> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  SWidget *pSVar6;
  FNavigationMetaData *pFVar7;
  bool bVar8;
  atomic<int> aVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  FNavigationMethod *pFVar11;
  FSharedReferencer<1> FVar12;
  SWidget *pSVar13;
  FHittestGrid *pFVar14;
  SWidget *pSVar15;
  undefined1 auStackY_278 [32];
  TSharedPtr<SWidget,1> local_230;
  TObjectPtr<UScriptStruct_const_>_u_0 local_220;
  uchar *local_218;
  FHittestGrid *local_210;
  FArrangedWidget *local_208;
  SWidget *local_200;
  FSharedReferencer<1> local_1f8;
  undefined1 local_1f0 [32];
  TSharedPtr<FNavigationMetaData,1> local_1d0;
  undefined1 local_1c0 [56];
  undefined1 local_188 [8];
  TVector2<float>_u_0 local_180;
  TSharedPtr<SWidget,1> local_178;
  TSharedPtr<SWidget,1> local_168;
  undefined1 local_158 [32];
  float local_138 [2];
  float aafStack_130 [2] [2];
  SWidget *local_120;
  FSharedReferencer<1> local_118;
  EUINavigation local_110;
  SWidget *local_108;
  FSharedReferencer<1> local_100;
  SWidget *local_f8;
  FSharedReferencer<1> local_f0;
  undefined1 local_e8 [16];
  float local_d8;
  FLinearColor_u_0 local_d0;
  FLinearColor_u_0 FStack_c0;
  FLinearColor_u_0 FStack_b0;
  FSlateCachedElementList *pFStack_a0;
  FWeakReferencer<1> local_98;
  SWidget *local_90;
  FSharedReferencer<1> local_88;
  TVector2<float>_u_0 local_80;
  SWidget *local_78;
  FSharedReferencer<1> local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_208 = param_4;
  if (((this->NumCells).field0_0x0._s_0.X < 1) || ((this->NumCells).field0_0x0._s_0.Y < 1)) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pSVar13 = (SWidget *)0x0;
    local_1f0._0_8_ = (FWidgetResult *)0x0;
    local_1f0._8_8_ = 0;
    local_210 = this;
    bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &OnFindNextFocusableWidgetExecuted);
    pSVar15 = (SWidget *)local_1f0;
    if (!bVar8) {
      pSVar15 = pSVar13;
    }
    local_230.Object = (SWidget *)0x0;
    local_230.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_220.ObjectPtr);
    local_1f8.ReferenceController = (param_1->Widget).SharedReferenceCount.ReferenceController;
    local_200 = (param_1->Widget).Object;
    if (local_1f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1f8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    while (((pSVar6 = local_200, local_218 == (uchar *)0x0 ||
            (local_220.DebugPtr == (UScriptStruct *)0x0)) && (local_200 != (SWidget *)0x0))) {
      SWidget::GetMetaData<FNavigationMetaData>(local_200,&local_1d0);
      pFVar7 = local_1d0.Object;
      if (local_1d0.Object != (FNavigationMetaData *)0x0) {
        if ((local_1d0.Object == (FNavigationMetaData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar1 = &pFVar7->NavigationMethodStruct;
        if (&local_220 != (TObjectPtr<UScriptStruct_const_>_u_0 *)pTVar1) {
          FInstancedStruct::InitializeAs
                    ((FInstancedStruct *)&local_220.ObjectPtr,
                     (pTVar1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                     (pFVar7->NavigationMethodStruct).InstancedStruct.StructMemory);
        }
      }
      if ((pSVar6 == (SWidget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar10;
      }
      local_1f0._24_8_ = (pSVar6->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      local_200 = pSVar13;
      if ((FSlateInvalidationRoot *)local_1f0._24_8_ != (FSlateInvalidationRoot *)0x0) {
        aVar5 = *(atomic<int> *)&((FSlateInvalidationRoot *)local_1f0._24_8_)->_padding_;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            local_1f0._24_8_ = (FSlateInvalidationRoot *)0x0;
            goto LAB_14250a8c2;
          }
          LOCK();
          aVar9 = *(atomic<int> *)&((FSlateInvalidationRoot *)local_1f0._24_8_)->_padding_;
          bVar8 = aVar5 == aVar9;
          if (bVar8) {
            *(atomic<int> *)&((FSlateInvalidationRoot *)local_1f0._24_8_)->_padding_ =
                 (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar8);
        local_200 = (pSVar6->ParentWidgetPtr).Object;
      }
LAB_14250a8c2:
      local_1f0._16_8_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_1f8,(FSharedReferencer<1> *)(local_1f0 + 0x18));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1f0._24_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d0.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.ReferenceController);
    if ((local_218 == (uchar *)0x0) || (local_220.DebugPtr == (UScriptStruct *)0x0)) {
      pTVar10 = FindNextFocusableWidgetDefault
                          (local_210,&local_178,param_1,param_2,param_3,local_208,param_5);
      if (&local_230 != pTVar10) {
        local_230.Object = pTVar10->Object;
        pTVar10->Object = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_230.SharedReferenceCount,&pTVar10->SharedReferenceCount);
      }
    }
    else {
      pFVar11 = TInstancedStruct<FNavigationMethod>::GetMutablePtr<FNavigationMethod,void>
                          ((TInstancedStruct<FNavigationMethod> *)&local_220.ObjectPtr);
      (**(code **)(pFVar11->_padding_ + 8))(pFVar11,local_210,pSVar15);
      pTVar10 = (TSharedPtr<SWidget,1> *)
                (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11,local_188,param_1,param_2);
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_180;
      if (&local_230 != pTVar10) {
        local_230.Object = pTVar10->Object;
        pTVar10->Object = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_230.SharedReferenceCount,&pTVar10->SharedReferenceCount);
        local_178.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)local_180;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    FVar12.ReferenceController = local_230.SharedReferenceCount.ReferenceController;
    pSVar13 = local_230.Object;
    if (local_230.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0._8_8_ = (param_1->Widget).SharedReferenceCount.ReferenceController;
    local_1c0._0_8_ = (param_1->Widget).Object;
    if ((TReferenceControllerBase<1> *)local_1c0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1c0._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1c0._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      ((TReferenceControllerBase<1> *)local_1c0._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_1c0._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0._16_8_ = local_230.Object;
    local_1c0._24_8_ = local_230.SharedReferenceCount.ReferenceController;
    if (local_230.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_230.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0._32_8_ = local_210;
    local_1c0._48_4_ = param_5;
    local_1c0._40_8_ = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1c0._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
    pTVar10 = FNavigationRouting::RouteNavigationFocus
                        (&local_168,(FNavigationRoutingParams *)local_1c0);
    if (&local_230 != pTVar10) {
      local_230.Object = pTVar10->Object;
      pTVar10->Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_230.SharedReferenceCount,&pTVar10->SharedReferenceCount);
      FVar12.ReferenceController = local_230.SharedReferenceCount.ReferenceController;
      pSVar13 = local_230.Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    pFVar14 = local_210;
    if (pSVar15 != (SWidget *)0x0) {
      local_158._0_8_ = (param_1->Geometry).Size;
      local_158._8_8_ = *(undefined8 *)&(param_1->Geometry).Scale;
      local_120 = (param_1->Widget).Object;
      local_158._16_8_ =
           *(undefined8 *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
      local_158._24_8_ = *(undefined8 *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
      local_118.ReferenceController = (param_1->Widget).SharedReferenceCount.ReferenceController;
      local_138 = *(float (*) [2])((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
      aafStack_130[0] = *(float (*) [2])((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
      aafStack_130[1] =
           *(float (*) [2])
            ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
      if ((FDeprecateSlateVector2D)local_118.ReferenceController != (FDeprecateSlateVector2D)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_118.ReferenceController + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_118.ReferenceController + 8) + 1);
        UNLOCK();
      }
      local_108 = (param_3->EventHandler).Object;
      local_100.ReferenceController =
           (param_3->EventHandler).SharedReferenceCount.ReferenceController;
      if (local_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_100.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_100.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8 = (param_3->FocusRecipient).Object;
      local_f0.ReferenceController =
           (param_3->FocusRecipient).SharedReferenceCount.ReferenceController;
      if (local_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8 = 0.0;
      local_e8._0_8_ = 0;
      local_e8._8_4_ = 0.0;
      local_e8._12_4_ = 0.0;
      local_110 = param_2;
      TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(local_e8,&param_3->FocusDelegate);
      pFVar14 = local_210;
      local_d0._0_1_ = param_3->BoundaryRule;
      local_90 = (local_208->Widget).Object;
      local_88.ReferenceController = (local_208->Widget).SharedReferenceCount.ReferenceController;
      local_d0._8_8_ = (local_208->Geometry).Size;
      FStack_c0._0_8_ = *(undefined8 *)&(local_208->Geometry).Scale;
      FStack_c0._8_8_ =
           *(undefined8 *)((longlong)&(local_208->Geometry).AbsolutePosition.field0_0x0 + 4);
      FStack_b0._0_8_ = *(undefined8 *)((longlong)&(local_208->Geometry).Position.field0_0x0 + 4);
      local_98.ReferenceController =
           *(TReferenceControllerBase<1> **)
            ((longlong)&(local_208->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
      FStack_b0._8_8_ = *(undefined8 *)((local_208->Geometry).AccumulatedRenderTransform.M.M[0] + 1)
      ;
      pFStack_a0 = *(FSlateCachedElementList **)
                    ((local_208->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
      if (local_88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_88.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80._s_0.X = (float)param_5;
      local_78 = pSVar13;
      local_70.ReferenceController = FVar12.ReferenceController;
      if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar12.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = (FScriptContainerElement *)pSVar15->_padding_;
      pSVar15->_padding_ = 0;
      local_68.Data = pFVar3;
      local_60 = (int)pSVar15->_padding_;
      iVar2 = *(int *)((longlong)&pSVar15->_padding_ + 4);
      pSVar15->_padding_ = 0;
      local_5c = iVar2;
      TMulticastDelegate<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&OnFindNextFocusableWidgetExecuted,local_210,
                  (FDebuggingFindNextFocusableWidgetArgs *)local_158);
      FDebuggingFindNextFocusableWidgetArgs::~FDebuggingFindNextFocusableWidgetArgs
                ((FDebuggingFindNextFocusableWidgetArgs *)local_158);
    }
    if ((((GSlateNavigationDebugging != false) && (local_218 != (uchar *)0x0)) &&
        (local_220.DebugPtr != (UScriptStruct *)0x0)) &&
       ((TObjectPtr<UScriptStruct_const_>_u_0 *)&pFVar14->LastNavigationMethod != &local_220)) {
      FInstancedStruct::InitializeAs
                (&(pFVar14->LastNavigationMethod).InstancedStruct,local_220.DebugPtr,local_218);
    }
    FInstancedStruct::Reset((FInstancedStruct *)&local_220.ObjectPtr);
    __return_storage_ptr__->Object = pSVar13;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar12.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1c0._24_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1c0._8_8_);
    FInstancedStruct::Reset((FInstancedStruct *)&local_220.ObjectPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    DestructItems<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,int>
              ((FWidgetResult *)local_1f0._0_8_,local_1f0._8_4_);
    if ((FWidgetResult *)local_1f0._0_8_ != (FWidgetResult *)0x0) {
      FMemory::Free((void *)local_1f0._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// GetAllWidgetSortDatas @ 14250bb00

TArray<FHittestGrid::FWidgetSortData,TSizedDefaultAllocator<32>_> * __thiscall
FHittestGrid::GetAllWidgetSortDatas
          (FHittestGrid *this,
          TArray<FHittestGrid::FWidgetSortData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator> *pTVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FHittestGrid::FWidgetSortData,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator> *pTVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  ForElementType<unsigned_int> local_res20;
  int local_c0;
  uint uStack_bc;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  int local_58;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar14 = *(int *)&(this->WidgetArray).field_0x8 - *(int *)&(this->WidgetArray).field_0x34;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar14,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pTVar2 = &this->WidgetArray;
  local_c0 = 0;
  iVar8 = *(int *)&(this->WidgetArray).field_0x28;
  local_res20 = (ForElementType<unsigned_int>)&(this->WidgetArray).field_0x10;
  uStack_bc = 1;
  iStack_ac = 0;
  iStack_a8 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(this->WidgetArray).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_res20;
    }
    uVar14 = *puVar16;
    iStack_a8 = 0;
    local_c0 = 0;
    while (uVar14 == 0) {
      lVar10 = (longlong)local_c0;
      iStack_a8 = iStack_a8 + 0x20;
      local_c0 = local_c0 + 1;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c0) goto LAB_14250bc09;
      uVar14 = (puVar16 + 1)[lVar10];
    }
    uStack_bc = -uVar14 & uVar14;
    uVar4 = (ulonglong)uStack_bc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_ac = local_res10 + -1 + iStack_a8;
    if (iVar8 < iStack_ac) {
LAB_14250bc09:
      iStack_ac = iVar8;
    }
  }
  uVar14 = *(uint *)&(this->WidgetArray).field_0x28;
  local_58 = *(int *)&(this->WidgetArray).field_0x8 - *(int *)&(this->WidgetArray).field_0x34;
  local_78._padding_ = CONCAT44(uStack_bc,local_c0);
  local_78.CurrentBitIndex = iStack_ac;
  local_78.UnvisitedBitMask = 0xffffffff;
  local_78._28_4_ = uStack_a4;
  local_78.BaseBitIndex = iStack_a8;
  iVar17 = (int)uVar14 >> 5;
  uVar18 = uVar14 & 0xffffffe0;
  local_80 = pTVar2;
  local_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TArray<FHittestGrid::FWidgetSortData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar9;
  }
  uVar5 = *(int *)((longlong)local_res20 + 0x18);
  pTVar13 = pTVar2;
  if (uVar14 != uVar5) {
    FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_res20;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar17 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14250bd05;
      uVar14 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar10 * 4);
    }
    uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    uVar14 = local_res18 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_14250bd05:
  while( true ) {
    if (*(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34 != local_58) {
      local_res8[0] = 0;
      `TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::TRangedForConstIterator
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_78.CurrentBitIndex == uVar14) &&
        ((ForElementType<unsigned_int>)local_78.Array == local_res20)) && (pTVar13 == pTVar2))
    break;
    puVar11 = (undefined8 *)((longlong)local_78.CurrentBitIndex * 0x40 + *(longlong *)pTVar13);
    local_a0 = *puVar11;
    local_98 = (longlong *)puVar11[1];
    if (local_98 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
      UNLOCK();
    }
    local_90 = puVar11[6];
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_88 = *(undefined4 *)(puVar11 + 7);
    if (((pFVar12 <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 < pFVar12 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<FHittestGrid::FWidgetSortData,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(undefined8 *)pFVar12 = local_a0;
    *(longlong **)(pFVar12 + 8) = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined8 *)(pFVar12 + 0x10) = local_90;
    *(undefined4 *)(pFVar12 + 0x18) = local_88;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)local_98 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
    local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
    pTVar13 = local_80;
  }
  return __return_storage_ptr__;
}

// GetBubblePath @ 14250bfe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> * __thiscall
FHittestGrid::GetBubblePath
          (FHittestGrid *this,
          TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FDeprecateVector2DParameter param_1,float param_2,bool param_3,int param_4)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TVector2<float>_u_0_s_0 TVar7;
  atomic<int> aVar8;
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  float afVar12 [2];
  FSharedReferencer<1> FVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  atomic<int> aVar18;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *pTVar19;
  FGeometry *pFVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  SWidget *pSVar24;
  atomic<int> *paVar25;
  SWidget *pSVar26;
  FWidgetAndPointer *_Dst;
  uint uVar27;
  SWidget *pSVar28;
  SWidget *pSVar29;
  int iVar30;
  int iVar31;
  TReferenceControllerBase<1> *pTVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float local_res18;
  float fStackX_1c;
  ForAnyElementType local_198;
  int local_190 [2];
  bool local_188;
  undefined8 local_180;
  undefined8 local_178;
  SWidget *local_170;
  FSharedReferencer<1> local_168;
  FWidgetData *local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  FWidgetAndPointer *local_140;
  int local_138;
  undefined8 local_130;
  FSharedReferencer<1> local_128;
  undefined8 local_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  TTransform2<float> TStack_f4;
  undefined4 uStack_dc;
  TIntPoint<int>_u_0 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  FIndexAndDistance local_c0;
  TTransform2<float> local_a8;
  undefined1 local_88 [16];
  TTransform2<float> local_78 [2];
  
  local_res18 = param_1._0_4_;
  fStackX_1c = param_1._4_4_;
  fVar34 = local_res18 - (this->GridOrigin).field0_0x0._s_0.X;
  fVar35 = fStackX_1c - (this->GridOrigin).field0_0x0._s_0.Y;
  local_188 = param_3;
  local_180 = (TIntPoint<int>_u_0)CONCAT44(fVar35,fVar34);
  if ((*(int *)&(this->WidgetArray).field_0x8 - *(int *)&(this->WidgetArray).field_0x34 < 1) ||
     ((this->Cells).ArrayNum < 1)) goto LAB_14250c1ba;
  local_158 = local_180;
  iVar31 = (this->NumCells).field0_0x0._s_0.Y + -1;
  fVar35 = fVar35 / CellSize.field0_0x0._s_0.Y;
  local_d0 = local_180;
  local_c8 = 0;
  local_c4 = 0;
  fVar34 = fVar34 / CellSize.field0_0x0._s_0.X;
  iVar16 = (int)ROUND((fVar35 + fVar35) - __real_3f000000) >> 1;
  iVar30 = 0;
  if (0 < iVar16) {
    iVar30 = iVar16;
  }
  local_180._0_4_ = (this->NumCells).field0_0x0._s_0.X + -1;
  iVar17 = (int)ROUND((fVar34 + fVar34) - __real_3f000000) >> 1;
  iVar16 = 0;
  if (0 < iVar17) {
    iVar16 = iVar17;
  }
  if (iVar16 < (int)(undefined4)local_180) {
    local_180._0_4_ = iVar16;
  }
  if (iVar30 < iVar31) {
    iVar31 = iVar30;
  }
  local_180._4_4_ = iVar31;
  local_d8 = local_180;
  GetHitIndexFromCellIndex(this,&local_c0,(FGridTestingParams *)&local_d8._s_0);
  if (((local_c0._padding_ == 0) || ((int)(uint)local_c0._padding_ < 0)) ||
     (*(int *)(local_c0._padding_ + 0x78) <= (int)(uint)local_c0._padding_)) goto LAB_14250c1ba;
  if ((*(int *)(local_c0._padding_ + 0x78) <= (int)(uint)local_c0._padding_) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5c6,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar19;
  }
  lVar21 = local_c0._padding_ + 0x60;
  if (*(longlong *)(local_c0._padding_ + 0x70) != 0) {
    lVar21 = *(longlong *)(local_c0._padding_ + 0x70);
  }
  if ((*(uint *)(lVar21 + (longlong)
                          ((int)((uint)local_c0._padding_ +
                                ((int)(uint)local_c0._padding_ >> 0x1f & 0x1fU)) >> 5) * 4) >>
       ((uint)local_c0._padding_ & 0x1f) & 1) == 0) goto LAB_14250c1ba;
  local_160 = FWidgetIndex::GetWidgetData((FWidgetIndex *)&local_c0);
  pTVar2 = (local_160->WeakWidget).WeakReferenceCount.ReferenceController;
  pTVar32 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar2->SharedReferenceCount;
    do {
      pTVar32 = (TReferenceControllerBase<1> *)0x0;
      if (aVar8 == (atomic<int>)0x0) goto LAB_14250c1b2;
      LOCK();
      aVar18 = pTVar2->SharedReferenceCount;
      bVar14 = aVar8 == aVar18;
      if (bVar14) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar18 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar18;
    } while (!bVar14);
    pSVar24 = (local_160->WeakWidget).Object;
    pTVar32 = pTVar2;
    if ((pSVar24 != (SWidget *)0x0) &&
       (((param_4 == -1 || (local_160->UserIndex == -1)) || (param_4 == local_160->UserIndex)))) {
      local_198.Data = (FScriptContainerElement *)0x0;
      local_190[0] = 0;
      local_190[1] = 0;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      afVar11 = _UNK_15076b188;
      afVar9 = ___xmm_3f80000000000000000000003f800000;
      UNLOCK();
      local_180 = (TIntPoint<int>_u_0)pSVar24;
      local_170 = pSVar24;
      local_168.ReferenceController = pTVar2;
      if ((pSVar24 == (SWidget *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar3 = (code *)swi(3);
        pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar19;
      }
      do {
        pFVar20 = SWidget::GetPaintSpaceGeometry(pSVar24);
        afVar12 = _UNK_15076b188;
        afVar10 = ___xmm_3f80000000000000000000003f800000;
        ___xmm_3f80000000000000000000003f800000 = afVar9[0];
        _UNK_15076b184 = afVar9[1];
        local_a8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_a8.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar11[0];
        _UNK_15076b18c = afVar11[1];
        local_a8.M.M[1][0] = _UNK_15076b188;
        local_a8.M.M[1][1] = _UNK_15076b18c;
        uVar1 = *(undefined8 *)&(pFVar20->AbsolutePosition).field0_0x0._s_0.Y;
        uVar4 = *(undefined8 *)&(pFVar20->Position).field0_0x0._s_0.Y;
        uVar5 = *(undefined8 *)((pFVar20->AccumulatedRenderTransform).M.M[0] + 1);
        uVar6 = *(undefined8 *)((pFVar20->AccumulatedRenderTransform).M.M[1] + 1);
        local_110 = *(undefined4 *)&pFVar20->Size;
        uStack_10c = *(undefined4 *)&(pFVar20->Size).field_0x4;
        fVar34 = pFVar20->Scale;
        fStack_104 = (pFVar20->AbsolutePosition).field0_0x0._s_0.X;
        TVar7 = (pFVar20->AbsolutePosition).field0_0x0._s_0;
        fStack_100 = (float)uVar1;
        uStack_fc = (undefined4)((ulonglong)uVar1 >> 0x20);
        uStack_f8 = (undefined4)uVar4;
        TStack_f4.M.M[0][0] = (float)((ulonglong)uVar4 >> 0x20);
        uVar1 = *(undefined8 *)&(pFVar20->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        TStack_f4.Trans.field0_0x0._s_0.Y = (float)uVar1;
        uStack_dc = (undefined4)((ulonglong)uVar1 >> 0x20);
        fStack_14c = (this->GridOrigin).field0_0x0._s_0.Y -
                     (this->GridWindowOrigin).field0_0x0._s_0.Y;
        TStack_f4.M.M[0][1] = (float)uVar5;
        TStack_f4.M.M[1][0] = (float)((ulonglong)uVar5 >> 0x20);
        TStack_f4.M.M[1][1] = (float)uVar6;
        TStack_f4.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar6 >> 0x20);
        local_150 = (this->GridOrigin).field0_0x0._s_0.X -
                    (this->GridWindowOrigin).field0_0x0._s_0.X;
        local_11c = CONCAT44(fStack_14c,local_150);
        local_178._0_4_ = TVar7.X;
        local_148 = local_150 + (float)local_178;
        local_178._4_4_ = TVar7.Y;
        fStack_144 = fStack_14c + local_178._4_4_;
        ___xmm_3f80000000000000000000003f800000 = afVar10;
        _UNK_15076b188 = afVar12;
        local_178 = local_11c;
        fStack_108 = fVar34;
        local_a8.Trans.field0_0x0._s_0.X = local_150;
        local_a8.Trans.field0_0x0._s_0.Y = fStack_14c;
        Concatenate<TTransform2<float>_>(local_78,&TStack_f4,&local_a8);
        TStack_f4.Trans.field0_0x0._s_0.X = local_78[0].Trans.field0_0x0._0_4_;
        TStack_f4.Trans.field0_0x0._s_0.Y = local_78[0].Trans.field0_0x0._4_4_;
        fStack_104 = local_148;
        fStack_100 = fStack_144;
        TStack_f4.M.M[0][0] = local_78[0].M.M[0][0];
        TStack_f4.M.M[0][1] = local_78[0].M.M[0][1];
        TStack_f4.M.M[1][0] = local_78[0].M.M[1][0];
        TStack_f4.M.M[1][1] = local_78[0].M.M[1][1];
        fStack_108 = fVar34;
        if ((pSVar24 == (SWidget *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar19;
        }
        FVar13.ReferenceController = local_168.ReferenceController;
        if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_168.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar24 == (SWidget *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar19;
        }
        if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          paVar25 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar25 = &(FVar13.ReferenceController)->SharedReferenceCount;
          LOCK();
          *paVar25 = (atomic<int>)((int)*paVar25 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar13.ReferenceController);
        iVar31 = local_190[0];
        if (local_190[0] == local_190[1]) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x860,&local_198,local_190 + 1);
        }
        local_190[0] = iVar31 + 1;
        lVar21 = (longlong)iVar31 * 0x60;
        *(ulonglong *)&local_198.Data[lVar21].field_0x0 = CONCAT44(uStack_10c,local_110);
        *(ulonglong *)(local_198.Data + lVar21 + 8) = CONCAT44(fStack_104,fStack_108);
        *(ulonglong *)(local_198.Data + lVar21 + 0x10) = CONCAT44(uStack_fc,fStack_100);
        *(ulonglong *)(local_198.Data + lVar21 + 0x10 + 8) = CONCAT44(TStack_f4.M.M[0][0],uStack_f8)
        ;
        *(ulonglong *)(local_198.Data + lVar21 + 0x20) =
             CONCAT44(TStack_f4.M.M[1][0],TStack_f4.M.M[0][1]);
        *(ulonglong *)(local_198.Data + lVar21 + 0x20 + 8) =
             CONCAT44(TStack_f4.Trans.field0_0x0._s_0.X,TStack_f4.M.M[1][1]);
        *(ulonglong *)(local_198.Data + lVar21 + 0x30) =
             CONCAT44(uStack_dc,TStack_f4.Trans.field0_0x0._s_0.Y);
        *(SWidget **)(local_198.Data + lVar21 + 0x38) = pSVar24;
        *(TReferenceControllerBase<1> **)(local_198.Data + lVar21 + 0x40) =
             FVar13.ReferenceController;
        if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar25 = (atomic<int>)((int)*paVar25 + 1);
          UNLOCK();
        }
        local_198.Data[lVar21 + 0x58] = (FScriptContainerElement)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar13.ReferenceController);
        if ((pSVar24 == (SWidget *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar19;
        }
        local_128.ReferenceController =
             (pSVar24->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
        pSVar26 = (SWidget *)0x0;
        local_170 = pSVar26;
        if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar8 = (local_128.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar8 == (atomic<int>)0x0) {
              local_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              local_170 = (SWidget *)0x0;
              goto LAB_14250c4a6;
            }
            LOCK();
            aVar18 = (local_128.ReferenceController)->SharedReferenceCount;
            bVar14 = aVar8 == aVar18;
            if (bVar14) {
              (local_128.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
              aVar18 = aVar8;
            }
            UNLOCK();
            aVar8 = aVar18;
          } while (!bVar14);
          local_170 = (pSVar24->PersistentState).PaintParent.Object;
        }
LAB_14250c4a6:
        local_130 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_168,&local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.ReferenceController);
        pSVar24 = local_170;
      } while (local_170 != (SWidget *)0x0);
      uVar23 = 0;
      if ((int)(local_190[0] - 1U) < local_190[0]) {
        uVar23 = ~(local_190[0] - 1U) >> 0x1f;
      }
      if (uVar23 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar19;
        }
      }
      cVar15 = (**(code **)(**(longlong **)
                              (local_198.Data + (longlong)(local_190[0] + -1) * 0x60 + 0x38) + 0x208
                           ))();
      if (cVar15 == '\0') {
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        __return_storage_ptr__->ArrayMax = 0;
        goto LAB_14250c83e;
      }
      AlgoImpl::Reverse<FWidgetAndPointer>((FWidgetAndPointer *)local_198.Data,local_190[0]);
      pSVar24 = (SWidget *)local_180;
      bVar14 = local_188;
      if (local_188 == false) {
        for (FVar22.Data = local_198.Data;
            (FWidgetAndPointer *)FVar22.Data !=
            (FWidgetAndPointer *)(local_198.Data + (longlong)local_190[0] * 0x60);
            FVar22.Data = FVar22.Data + 0x60) {
          if (*(char *)(((FWidgetAndPointer *)FVar22.Data)->_padding_ + 0x3a) == '\0') {
            lVar21 = ((longlong)FVar22.Data - (longlong)local_198.Data) / 6 +
                     ((longlong)FVar22.Data - (longlong)local_198.Data >> 0x3f);
            uVar23 = (int)(lVar21 >> 4) - (int)(lVar21 >> 0x3f);
            if (uVar23 != 0xffffffff) {
              uVar27 = local_190[0] - uVar23;
              if (((int)(uVar23 | uVar27) < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar14)) {
                pcVar3 = (code *)swi(3);
                pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
                return pTVar19;
              }
              if (uVar27 != 0) {
                _Dst = (FWidgetAndPointer *)(local_198.Data + (longlong)(int)uVar23 * 0x60);
                DestructItems<FWidgetAndPointer,int>(_Dst,uVar27);
                iVar31 = (local_190[0] - uVar23) - uVar27;
                if (iVar31 != 0) {
                  memmove(_Dst,_Dst + (int)uVar27,(longlong)iVar31 * 0x60);
                }
                iVar31 = local_190[0] - uVar27;
                local_190[0] = iVar31;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,8,&local_198,iVar31,local_190 + 1);
              }
              goto LAB_14250c815;
            }
            break;
          }
        }
      }
      if ((((0 < local_190[0]) && ((local_160->CustomPath).Object != (ICustomHitTestPath *)0x0)) &&
          (pTVar32 = (local_160->CustomPath).WeakReferenceCount.ReferenceController,
          pTVar32 != (TReferenceControllerBase<1> *)0x0)) &&
         (0 < (int)pTVar32->SharedReferenceCount)) {
        pSVar29 = (SWidget *)(local_160->CustomPath).WeakReferenceCount.ReferenceController;
        pSVar28 = pSVar29;
        if (pSVar29 == (SWidget *)0x0) {
LAB_14250c62c:
          bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pSVar29 = pSVar28;
          if (bVar33) {
            pcVar3 = (code *)swi(3);
            pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar19;
          }
        }
        else {
          aVar8 = *(atomic<int> *)&pSVar29->_padding_;
          do {
            pSVar28 = pSVar26;
            if (aVar8 == (atomic<int>)0x0) goto LAB_14250c62c;
            LOCK();
            aVar18 = *(atomic<int> *)&pSVar29->_padding_;
            bVar33 = aVar8 == aVar18;
            if (bVar33) {
              *(atomic<int> *)&pSVar29->_padding_ = (atomic<int>)((int)aVar8 + 1);
              aVar18 = aVar8;
            }
            UNLOCK();
            aVar8 = aVar18;
          } while (!bVar33);
          pSVar26 = (SWidget *)(local_160->CustomPath).Object;
          pSVar28 = pSVar29;
          if (pSVar26 == (SWidget *)0x0) goto LAB_14250c62c;
        }
        pcVar3 = *(code **)(pSVar26->_padding_ + 8);
        pFVar20 = SWidget::GetTickSpaceGeometry(pSVar24);
        local_88._8_4_ = SUB84((double)fStackX_1c,0);
        local_88._0_8_ = (double)local_res18;
        local_88._12_4_ = (int)((ulonglong)(double)fStackX_1c >> 0x20);
        (*pcVar3)(pSVar26,&local_140,pFVar20,local_88,bVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar29);
        if (local_138 != 0) {
          iVar31 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,8,local_138,&local_198,local_190,local_190 + 1);
          memmove(local_198.Data + (longlong)iVar31 * 0x60,local_140,(longlong)local_138 * 0x60);
          local_138 = 0;
        }
        DestructItems<FWidgetAndPointer,int>(local_140,local_138);
        if (local_140 != (FWidgetAndPointer *)0x0) {
          FMemory::Free(local_140);
        }
      }
LAB_14250c815:
      (__return_storage_ptr__->AllocatorInstance).Data = local_198.Data;
      __return_storage_ptr__->ArrayNum = local_190[0];
      __return_storage_ptr__->ArrayMax = local_190[1];
      local_190[0] = 0;
      local_190[1] = 0;
      local_198.Data = (FScriptContainerElement *)0x0;
LAB_14250c83e:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.ReferenceController);
      DestructItems<FWidgetAndPointer,int>((FWidgetAndPointer *)local_198.Data,local_190[0]);
      if ((FWidgetAndPointer *)local_198.Data != (FWidgetAndPointer *)0x0) {
        FMemory::Free(local_198.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return __return_storage_ptr__;
    }
  }
LAB_14250c1b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
LAB_14250c1ba:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCellCoordinate @ 14250c8b0

TIntPoint<int> __thiscall
FHittestGrid::GetCellCoordinate(FHittestGrid *this,FDeprecateVector2DParameter param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 in_R8;
  int iVar5;
  float local_res18;
  float fStackX_1c;
  
  iVar5 = (this->NumCells).field0_0x0._s_0.Y + -1;
  fStackX_1c = (float)((ulonglong)in_R8 >> 0x20);
  local_res18 = (float)in_R8;
  iVar2 = (int)ROUND((fStackX_1c / CellSize.field0_0x0._s_0.Y +
                     fStackX_1c / CellSize.field0_0x0._s_0.Y) - __real_3f000000) >> 1;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = (this->NumCells).field0_0x0._s_0.X + -1;
  iVar3 = (int)ROUND((local_res18 / CellSize.field0_0x0._s_0.X +
                     local_res18 / CellSize.field0_0x0._s_0.X) - __real_3f000000) >> 1;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  *(int *)param_1 = iVar2;
  if (iVar1 < iVar5) {
    iVar5 = iVar1;
  }
  *(int *)((longlong)param_1 + 4) = iVar5;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetCollapsedHittestGrid @ 14250cc30

void __thiscall
FHittestGrid::GetCollapsedHittestGrid
          (FHittestGrid *this,
          TArray<FHittestGrid_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FHittestGrid_const_*> FVar2;
  FHittestGrid *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  int iVar6;
  atomic<int> aVar7;
  ForElementType<FHittestGrid_const_*> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FHittestGrid *local_38 [2];
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FHittestGrid_const_*>)param_1;
  if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar8 = FVar2;
  }
  local_38[0] = this;
  if ((ulonglong)FVar8 <= local_38) {
    FVar8 = (ForElementType<FHittestGrid_const_*>)param_1;
    if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
      FVar8 = FVar2;
    }
    if ((local_38 < (FHittestGrid **)((longlong)FVar8 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid_const_*>_>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<FHittestGrid_const_*>)param_1;
  if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar8 = FVar2;
  }
  *(FHittestGrid **)((longlong)FVar8 + (longlong)iVar6 * 8) = local_38[0];
  iVar6 = (this->AppendedGridArray).ArrayNum;
  pFVar10 = (this->AppendedGridArray).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar6 * 0x18;
  do {
    while( true ) {
      if ((this->AppendedGridArray).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FHittestGrid::FAppendedGridData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) {
        return;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar10 + 0x10);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14250cda0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar10 = pFVar10 + 0x18;
    }
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14250cda0;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    this_00 = *(FHittestGrid **)(pFVar10 + 8);
    if (this_00 == (FHittestGrid *)0x0) goto LAB_14250cda0;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<FHittestGrid_const_*>)param_1;
    if (FVar2 != (ForElementType<FHittestGrid_const_*>)0x0) {
      FVar8 = FVar2;
    }
    FVar2 = (ForElementType<FHittestGrid_const_*>)
            ((longlong)FVar8 + (longlong)param_1->ArrayNum * 8);
    for (; FVar8 != FVar2; FVar8 = (ForElementType<FHittestGrid_const_*>)((longlong)FVar8 + 8)) {
      if (*(FHittestGrid **)FVar8 == this_00) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<171237520003040255>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                           ,0x3ff,"!OutResult.Contains(AppendedGrid.Get())");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto LAB_14250cda0;
      }
    }
    if (((((this_00->GridOrigin).field0_0x0._s_0.X != (this->GridOrigin).field0_0x0._s_0.X) ||
         ((this_00->GridOrigin).field0_0x0._s_0.Y != (this->GridOrigin).field0_0x0._s_0.Y)) ||
        ((this_00->GridWindowOrigin).field0_0x0._s_0.X != (this->GridWindowOrigin).field0_0x0._s_0.X
        )) || ((((this_00->GridWindowOrigin).field0_0x0._s_0.Y !=
                 (this->GridWindowOrigin).field0_0x0._s_0.Y ||
                ((this_00->GridSize).field0_0x0._s_0.X != (this->GridSize).field0_0x0._s_0.X)) ||
               ((this_00->GridSize).field0_0x0._s_0.Y != (this->GridSize).field0_0x0._s_0.Y)))) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<171237520003040257>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                         ,0x401,"SameSize(AppendedGrid.Get())");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_14250cda0;
    }
    GetCollapsedHittestGrid(this_00,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pFVar10 = pFVar10 + 0x18;
  } while( true );
}

// GetCollapsedWidgets @ 14250cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHittestGrid::GetCollapsedWidgets
          (FHittestGrid *this,
          TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
          *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  FName FVar4;
  longlong lVar5;
  ForElementType<FHittestGrid::FWidgetIndex> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ForElementType<FHittestGrid_const_*> FVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SlateHTG_GetCollapsedWidgets> FVar16;
  int iVar17;
  ulonglong uVar18;
  ForElementType<FHittestGrid::FWidgetIndex> FVar19;
  uint uVar20;
  undefined4 *puVar21;
  ForElementType<FHittestGrid_const_*> FVar22;
  undefined8 *puVar23;
  undefined1 auStackY_198 [32];
  undefined1 local_137;
  undefined1 local_136;
  FIdentityFunctor local_135 [5];
  FName local_130;
  FColor_u_0 local_128;
  int local_124;
  int local_120;
  FName local_118;
  FName local_110;
  longlong local_100;
  ForElementType<FHittestGrid_const_*> local_f8;
  FName local_f0;
  TArray<FHittestGrid_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FVar16 = StatPtr_STAT_SlateHTG_GetCollapsedWidgets;
  local_124 = param_2;
  local_120 = param_3;
  if (StatPtr_STAT_SlateHTG_GetCollapsedWidgets ==
      (FThreadSafeStaticStat<FStat_STAT_SlateHTG_GetCollapsedWidgets>)0x0) {
    pFVar15 = ::FName::FName(&local_f0,"STAT_SlateHTG_GetCollapsedWidgets");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_SlateHTG_GetCollapsedWidgets>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_GetCollapsedWidgets,
                        *pFVar15,L"HitTestGrid GetCollapsedWidgets","STATGROUP_Slate",
                        "STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar16;
  bVar8 = false;
  bVar9 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_118.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                   ,0x412);
        bVar8 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar11 = true;
      goto LAB_14250d0b2;
    }
  }
  bVar9 = bVar12;
  bVar8 = bVar11;
  bVar11 = false;
  local_130 = local_110;
LAB_14250d0b2:
  iVar17 = param_3 * (this->NumCells).field0_0x0._s_0.X + param_2;
  if (((iVar17 < 0) || ((this->Cells).ArrayNum <= iVar17)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cells.IsValidIndex(CellIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                          ,0x415,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid_const_*>)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0x10;
  GetCollapsedHittestGrid(this,&local_e8);
  iVar17 = local_e8.ArrayNum;
  uVar18 = (ulonglong)local_e8.ArrayNum;
  FVar22 = (ForElementType<FHittestGrid_const_*>)&local_e8;
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
    FVar22 = local_e8.AllocatorInstance.SecondaryData;
  }
  local_f8 = (ForElementType<FHittestGrid_const_*>)((longlong)FVar22 + uVar18 * 8);
  while( true ) {
    FVar10 = local_f8;
    if ((uint)uVar18 != iVar17) {
      local_137 = 0;
      `TCheckedPointerIterator<FHittestGrid_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_137);
    }
    if (FVar22 == FVar10) break;
    lVar5 = *(longlong *)FVar22;
    uVar20 = param_3 * *(int *)(lVar5 + 0xc0) + param_2;
    uVar13 = 0;
    if ((int)uVar20 < *(int *)(lVar5 + 0x90)) {
      uVar13 = ~uVar20 >> 0x1f;
    }
    local_100 = lVar5;
    if (uVar13 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    puVar23 = (undefined8 *)((longlong)(int)uVar20 * 0x10 + *(longlong *)(lVar5 + 0x88));
    puVar21 = (undefined4 *)*puVar23;
    iVar2 = *(int *)(puVar23 + 1);
    puVar1 = puVar21 + iVar2;
    while( true ) {
      if (*(int *)(puVar23 + 1) != iVar2) {
        local_136 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_136);
      }
      if (puVar21 == puVar1) break;
      iVar14 = param_1->ArrayNum;
      uVar3 = *puVar21;
      if (iVar14 == param_1->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FHittestGrid::FWidgetIndex>_>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar14 + 1;
      FVar6 = (param_1->AllocatorInstance).SecondaryData;
      FVar19 = (ForElementType<FHittestGrid::FWidgetIndex>)param_1;
      if (FVar6 != (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FVar19 = FVar6;
      }
      puVar21 = puVar21 + 1;
      *(longlong *)((longlong)FVar19 + (longlong)iVar14 * 0x10) = local_100;
      *(undefined4 *)((uchar *)((longlong)FVar19 + 8) + (longlong)iVar14 * 0x10) = uVar3;
    }
    uVar18 = (ulonglong)(uint)local_e8.ArrayNum;
    FVar22 = (ForElementType<FHittestGrid_const_*>)((longlong)FVar22 + 8);
    param_3 = local_120;
    param_2 = local_124;
  }
  FVar6 = (param_1->AllocatorInstance).SecondaryData;
  FVar19 = (ForElementType<FHittestGrid::FWidgetIndex>)param_1;
  if (FVar6 != (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
    FVar19 = FVar6;
  }
  AlgoImpl::
  StableSortInternal<FHittestGrid::FWidgetIndex,FIdentityFunctor,TDereferenceWrapper<FHittestGrid::FWidgetIndex,_FHittestGrid::GetCollapsedWidgets_::__l10::<lambda_1>_>_>
            ((FWidgetIndex *)FVar19,param_1->ArrayNum,local_135[0],(<lambda_1> *)local_135);
  FVar4 = local_130;
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid_const_*>)0x0) {
    FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar4,CycleScopeEnd);
  }
  return;
}

// GetHitIndexFromCellIndex @ 14250d870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FIndexAndDistance * __thiscall
FHittestGrid::GetHitIndexFromCellIndex
          (FHittestGrid *this,FIndexAndDistance *__return_storage_ptr__,FGridTestingParams *param_1)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *this_00;
  code *pcVar7;
  atomic<int> aVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  atomic<int> aVar15;
  FIndexAndDistance *pFVar16;
  FWidgetData *pFVar17;
  ForElementType<FHittestGrid::FWidgetIndex> FVar18;
  TVector2<float>_u_0 TVar19;
  TVector2<float> TVar20;
  uint uVar21;
  longlong lVar22;
  TOptional<FSlateClippingZone> *pTVar23;
  FScriptContainerElement *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  longlong lVar26;
  uint uVar27;
  TVector2<float> *pTVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_898 [32];
  longlong local_878;
  longlong local_870;
  undefined1 local_868 [4];
  undefined8 local_864;
  TVector2<float>_u_0 local_858;
  TVector2<float>_u_0 local_850;
  FGridTestingParams *local_848;
  float local_840;
  float fStack_83c;
  float local_838;
  float fStack_834;
  float local_830;
  float fStack_82c;
  longlong local_828;
  FIndexAndDistance *local_820;
  undefined8 local_818;
  float local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  float fStack_804;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  TTransform2<float> local_7e8;
  TVector2<float>_u_0 local_7d0;
  float local_7c8;
  undefined8 local_7c4;
  float local_7bc;
  FHittestGrid *local_7b8;
  FGeometry *local_7b0;
  longlong local_7a8;
  TVector2<float>_u_0_s_0 local_79c;
  TVector2<float>_u_0_s_0 local_790;
  TVector2<float> local_788;
  TVector2<float> local_780;
  FSlateRotatedRect local_778;
  undefined8 local_760;
  TTransform2<float> local_740;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_728;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_898;
  iVar3 = (param_1->CellCoord).field0_0x0._s_0.Y;
  iVar4 = (param_1->CellCoord).field0_0x0._s_0.X;
  if ((((-1 < iVar4) && (iVar4 < (this->NumCells).field0_0x0._s_0.X)) && (-1 < iVar3)) &&
     (iVar3 < (this->NumCells).field0_0x0._s_0.Y)) {
    local_728.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
    local_728.ArrayNum = 0;
    local_728.ArrayMax = 100;
    local_848 = param_1;
    local_820 = __return_storage_ptr__;
    local_7b8 = this;
    GetCollapsedWidgets(this,&local_728,iVar4,iVar3);
    uVar31 = __xmm_80000000800000008000000080000000;
    fVar9 = __real_bf800000;
    fVar38 = __real_3f800000;
    uVar32 = local_728.ArrayNum - 1;
    if (-1 < (int)uVar32) {
      fVar37 = 0.0;
      lVar26 = (longlong)(int)uVar32;
LAB_14250d980:
      uVar30 = ~uVar32 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar32 < local_728.ArrayNum) {
        uVar21 = uVar30;
      }
      local_828 = lVar26;
      if (uVar21 == 0) {
        local_878 = (longlong)(int)uVar32;
        local_870 = (longlong)local_728.ArrayNum;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FIndexAndDistance *)(*pcVar7)();
          return pFVar16;
        }
      }
      FVar18 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_728;
      if (local_728.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FVar18 = local_728.AllocatorInstance.SecondaryData;
      }
      lVar5 = *(longlong *)((longlong)FVar18 + lVar26 * 0x10);
      if (((lVar5 == 0) ||
          (uVar21 = *(uint *)((uchar *)((longlong)FVar18 + 8) + lVar26 * 0x10), (int)uVar21 < 0)) ||
         (*(int *)(lVar5 + 0x78) <= (int)uVar21)) {
LAB_14250da2e:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("WidgetIndexes[i].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                            ,0x3c1,L"");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FIndexAndDistance *)(*pcVar7)();
          return pFVar16;
        }
      }
      else {
        lVar22 = *(longlong *)(lVar5 + 0x70);
        if (lVar22 == 0) {
          lVar22 = lVar5 + 0x60;
        }
        uVar27 = uVar21 & 0x1f;
        if ((int)uVar21 < 0) {
          uVar21 = uVar21 + 0x1f;
        }
        if ((*(uint *)(lVar22 + (longlong)((int)uVar21 >> 5) * 4) >> uVar27 & 1) == 0)
        goto LAB_14250da2e;
      }
      uVar21 = 0;
      if ((int)uVar32 < local_728.ArrayNum) {
        uVar21 = uVar30;
      }
      if (uVar21 == 0) {
        local_878 = (longlong)(int)uVar32;
        local_870 = (longlong)local_728.ArrayNum;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FIndexAndDistance *)(*pcVar7)();
          return pFVar16;
        }
      }
      FVar18 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_728;
      if (local_728.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FVar18 = local_728.AllocatorInstance.SecondaryData;
      }
      local_7a8 = (longlong)(int)uVar32 * 0x10;
      pFVar17 = FWidgetIndex::GetWidgetData((FWidgetIndex *)(local_7a8 + (longlong)FVar18));
      pTVar6 = (pFVar17->WeakWidget).WeakReferenceCount.ReferenceController;
      pTVar25 = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar6->SharedReferenceCount;
        do {
          pTVar25 = (TReferenceControllerBase<1> *)0x0;
          if (aVar8 == (atomic<int>)0x0) goto LAB_14250dca7;
          LOCK();
          aVar15 = pTVar6->SharedReferenceCount;
          bVar12 = aVar8 == aVar15;
          if (bVar12) {
            pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar15 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar15;
        } while (!bVar12);
        this_00 = (pFVar17->WeakWidget).Object;
        pTVar25 = pTVar6;
        if ((this_00 == (SWidget *)0x0) ||
           ((param_1->bTestWidgetIsInteractive != false &&
            (cVar13 = (**(code **)(this_00->_padding_ + 0x1b0))(this_00), cVar13 == '\0'))))
        goto LAB_14250dca7;
        local_858._s_0.X =
             (param_1->CursorPositionInGrid).field0_0x0._s_0.X +
             (local_7b8->GridWindowOrigin).field0_0x0._s_0.X;
        local_858._s_0.Y =
             (param_1->CursorPositionInGrid).field0_0x0._s_0.Y +
             (local_7b8->GridWindowOrigin).field0_0x0._s_0.Y;
        local_7b0 = SWidget::GetPaintSpaceGeometry(this_00);
        bVar12 = true;
        uVar21 = 0;
        if ((int)uVar32 < local_728.ArrayNum) {
          uVar21 = uVar30;
        }
        if (uVar21 == 0) {
          local_878 = (longlong)(int)uVar32;
          local_870 = (longlong)local_728.ArrayNum;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            pFVar16 = (FIndexAndDistance *)(*pcVar7)();
            return pFVar16;
          }
        }
        FVar18 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_728;
        if (local_728.AllocatorInstance.SecondaryData !=
            (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
          FVar18 = local_728.AllocatorInstance.SecondaryData;
        }
        lVar5 = *(longlong *)((longlong)FVar18 + lVar26 * 0x10);
        fVar35 = *(float *)(lVar5 + 0xb0);
        if (((((fVar35 == fVar9) && (fVar9 == *(float *)(lVar5 + 0xb8))) &&
             (fVar9 == *(float *)(lVar5 + 0xbc))) && (fVar9 == *(float *)(lVar5 + 0xb4))) ||
           ((*(float *)(lVar5 + 0xb8) <= fVar35 && fVar35 != *(float *)(lVar5 + 0xb8) ||
            (*(float *)(lVar5 + 0xbc) <= *(float *)(lVar5 + 0xb4) &&
             *(float *)(lVar5 + 0xb4) != *(float *)(lVar5 + 0xbc))))) {
          TVar19._s_0.Y = local_858._s_0.Y;
          TVar19._s_0.X = local_858._s_0.X;
        }
        else {
          uVar21 = 0;
          if ((int)uVar32 < local_728.ArrayNum) {
            uVar21 = uVar30;
          }
          if (uVar21 == 0) {
            local_870 = (longlong)local_728.ArrayNum;
            local_878 = (longlong)(int)uVar32;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              pFVar16 = (FIndexAndDistance *)(*pcVar7)();
              return pFVar16;
            }
          }
          FVar18 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_728;
          if (local_728.AllocatorInstance.SecondaryData !=
              (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
            FVar18 = local_728.AllocatorInstance.SecondaryData;
          }
          lVar26 = *(longlong *)((longlong)FVar18 + lVar26 * 0x10);
          TVar19._s_0.Y = local_858._s_0.Y;
          TVar19._s_0.X = local_858._s_0.X;
          param_1 = local_848;
          local_864 = TVar19;
          if (((local_858._s_0.X < *(float *)(lVar26 + 0xb0)) ||
              (*(float *)(lVar26 + 0xb8) <= local_858._s_0.X &&
               local_858._s_0.X != *(float *)(lVar26 + 0xb8))) ||
             ((local_858._s_0.Y < *(float *)(lVar26 + 0xb4) ||
              (*(float *)(lVar26 + 0xbc) <= local_858._s_0.Y &&
               local_858._s_0.Y != *(float *)(lVar26 + 0xbc))))) goto LAB_14250dca7;
        }
        if ((this_00->PersistentState).InitialClipState.bIsSet != false) {
          local_850 = TVar19;
          if ((this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.bIsSet == false) {
            if (((this_00->PersistentState).InitialClipState.TypedValue.StencilQuads.ArrayNum < 1)
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StencilQuads.Num() > 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                                       ,0xda,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              pFVar16 = (FIndexAndDistance *)(*pcVar7)();
              return pFVar16;
            }
            iVar3 = (this_00->PersistentState).InitialClipState.TypedValue.StencilQuads.ArrayNum;
            pFVar24 = (this_00->PersistentState).InitialClipState.TypedValue.StencilQuads.
                      AllocatorInstance.Data;
            uVar11 = local_850._s_0.Y;
            uVar10 = local_850._s_0.X;
            pFVar2 = pFVar24 + (longlong)iVar3 * 0x24;
            do {
              if ((this_00->PersistentState).InitialClipState.TypedValue.StencilQuads.ArrayNum !=
                  iVar3) {
                local_868[0] = 0;
                `TCheckedPointerIterator<FSlateClippingZone_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_868);
              }
              if (pFVar24 == pFVar2) goto LAB_14250de98;
              if ((pFVar24[0x20].field_0x0 & 1) == 0) {
                pFVar29 = pFVar24 + 8;
                bVar12 = IsPointInTriangle((TVector2<float> *)&local_850._s_0,
                                           (TVector2<float> *)pFVar24,(TVector2<float> *)pFVar29,
                                           (TVector2<float> *)(pFVar24 + 0x10));
                if ((!bVar12) &&
                   (bVar12 = IsPointInTriangle((TVector2<float> *)&local_850._s_0,
                                               (TVector2<float> *)(pFVar24 + 0x10),
                                               (TVector2<float> *)pFVar29,
                                               (TVector2<float> *)(pFVar24 + 0x18)), !bVar12))
                goto LAB_14250de59;
              }
              else if (((((float)uVar10 < *(float *)&pFVar24->field_0x0) ||
                        (*(float *)&pFVar24[8].field_0x0 <= (float)uVar10 &&
                         (float)uVar10 != *(float *)&pFVar24[8].field_0x0)) ||
                       ((float)uVar11 < *(float *)(pFVar24 + 4))) ||
                      (*(float *)(pFVar24 + 0x14) <= (float)uVar11 &&
                       (float)uVar11 != *(float *)(pFVar24 + 0x14))) goto LAB_14250de59;
              pFVar24 = pFVar24 + 0x24;
            } while( true );
          }
          pTVar23 = &(this_00->PersistentState).InitialClipState.TypedValue.ScissorRect;
          if ((this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.
              bIsAxisAligned == 0) {
            pTVar28 = &(this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue
                       .TopRight;
            bVar12 = IsPointInTriangle((TVector2<float> *)&local_850._s_0,(TVector2<float> *)pTVar23
                                       ,pTVar28,&(this_00->PersistentState).InitialClipState.
                                                 TypedValue.ScissorRect.TypedValue.BottomLeft);
            if ((bVar12) ||
               (bVar12 = IsPointInTriangle((TVector2<float> *)&local_850._s_0,
                                           &(pTVar23->TypedValue).BottomLeft,pTVar28,
                                           &(pTVar23->TypedValue).BottomRight), bVar12))
            goto LAB_14250de98;
            bVar12 = false;
          }
          else {
            local_850._s_0.X = TVar19._s_0.X;
            if (((((float)local_850._0_4_ < (pTVar23->TypedValue).TopLeft.field0_0x0._s_0.X) ||
                 (pTVar28 = &(this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.
                             TypedValue.TopRight,
                 (pTVar28->field0_0x0)._s_0.X <= (float)local_850._0_4_ &&
                 local_850._s_0.X != (pTVar28->field0_0x0)._s_0.X)) ||
                (local_850._s_0.Y = TVar19._s_0.Y,
                (float)local_850._4_4_ <
                *(float *)((longlong)
                           &(this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.
                            TypedValue.TopLeft.field0_0x0 + 4))) ||
               (pfVar1 = (float *)((longlong)
                                   &(this_00->PersistentState).InitialClipState.TypedValue.
                                    ScissorRect.TypedValue.BottomLeft.field0_0x0 + 4),
               bVar12 = local_850._s_0.Y != *pfVar1, bVar14 = *pfVar1 <= (float)local_850._4_4_,
               bVar14 && bVar12)) {
              bVar12 = false;
            }
            else {
LAB_14250de98:
              bVar12 = true;
            }
          }
        }
        goto LAB_14250de9a;
      }
      goto LAB_14250dca7;
    }
LAB_14250dccb:
    if (local_728.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid::FWidgetIndex>)0x0
       ) {
      FMemory::Free((void *)local_728.AllocatorInstance.SecondaryData);
    }
  }
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xffffffff;
  __return_storage_ptr__->DistanceSqToWidget = 0.0;
  return __return_storage_ptr__;
LAB_14250de59:
  bVar12 = false;
LAB_14250de9a:
  param_1 = local_848;
  if (bVar12) {
    uStack_80c = 0;
    uStack_808 = 0;
    local_818 = 0;
    local_7c4 = 0;
    local_7e8.M.M[0][0] = local_7b0->Scale;
    local_79c = (local_7b0->AbsolutePosition).field0_0x0._s_0;
    local_864._0_4_ = SUB84(local_7b0->Size,0);
    local_810 = (float)local_864;
    local_864._4_4_ = SUB84(local_7b0->Size,4);
    fStack_804 = local_864._4_4_;
    fStack_82c = local_864._4_4_ * local_7e8.M.M[0][0];
    local_830 = local_7e8.M.M[0][0] * 0.0;
    fStack_834 = local_7e8.M.M[0][0] * 0.0;
    local_838 = (float)local_864 * local_7e8.M.M[0][0];
    local_864 = (TVector2<float>_u_0)0x0;
    fStack_83c = local_7e8.M.M[0][0] * 0.0 + local_79c.Y;
    local_7f8 = CONCAT44(fStack_834,local_838);
    local_7f0 = CONCAT44(fStack_82c,local_830);
    local_840 = local_7e8.M.M[0][0] * 0.0 + local_79c.X;
    local_800 = CONCAT44(fStack_83c,local_840);
    local_7d0._s_0.Y = fStack_83c + fStack_82c;
    fVar36 = fStack_83c + fStack_834;
    local_7c8 = local_830 + local_840;
    fVar35 = local_840 + local_838;
    local_7bc = local_7d0._s_0.Y;
    if (local_7d0._s_0.Y <= fVar36) {
      local_7bc = fVar36;
    }
    fVar34 = fVar36 + fStack_82c;
    fVar33 = local_830 + fVar35;
    local_7d0._s_0.X = local_7c8;
    if (fVar35 <= local_7c8) {
      local_7d0._s_0.X = fVar35;
    }
    if (local_7c8 <= fVar35) {
      local_7c8 = fVar35;
    }
    if (fVar36 <= local_7d0._s_0.Y) {
      local_7d0._s_0.Y = fVar36;
    }
    if (local_7bc <= fVar34) {
      local_7bc = fVar34;
    }
    if (fVar33 <= local_7d0._s_0.X) {
      local_7d0._s_0.X = fVar33;
    }
    if (local_7c8 <= fVar33) {
      local_7c8 = fVar33;
    }
    if (fVar34 <= local_7d0._s_0.Y) {
      local_7d0._s_0.Y = fVar34;
    }
    if (local_7bc <= fStack_83c) {
      local_7bc = fStack_83c;
    }
    if (local_840 <= local_7d0._s_0.X) {
      local_7d0._s_0.X = local_840;
    }
    if (local_7c8 <= local_840) {
      local_7c8 = local_840;
    }
    if (fStack_83c <= local_7d0._s_0.Y) {
      local_7d0._s_0.Y = fStack_83c;
    }
    local_7c8 = local_7c8 - local_7d0._s_0.X;
    local_7bc = local_7bc - local_7d0._s_0.Y;
    local_7e8.M.M[0][0] = fVar38 / local_7e8.M.M[0][0];
    local_7e8.M.M[0][1] = 0.0;
    local_7e8.M.M[1][0] = 0.0;
    local_7e8.Trans.field0_0x0._s_0.X = (float)((uint)(local_7e8.M.M[0][0] * local_79c.X) ^ uVar31);
    local_7e8.Trans.field0_0x0._s_0.Y = (float)((uint)(local_7e8.M.M[0][0] * local_79c.Y) ^ uVar31);
    local_7e8.M.M[1][1] = local_7e8.M.M[0][0];
    local_790 = local_79c;
    local_760 = local_800;
    Concatenate<TTransform2<float>_>(&local_740,&local_7e8,&local_7b0->AccumulatedRenderTransform);
    TransformRect<TTransform2<float>_>(&local_778,&local_740,(FSlateRotatedRect *)&local_7d0._s_0);
    param_1 = local_848;
    fVar35 = local_848->Radius;
    TVar20 = ClosestPointOnSlateRotatedRect(&local_788,(FSlateRotatedRect *)&local_858._s_0);
    fVar36 = local_858._s_0.Y - *(float *)((longlong)TVar20.field0_0x0 + 4);
    if (fVar36 * fVar36 +
        (local_858._s_0.X - *(float *)TVar20.field0_0x0) *
        (local_858._s_0.X - *(float *)TVar20.field0_0x0) <= fVar35 * fVar35) {
      if (0.0 < param_1->Radius) {
        TVar20 = ClosestPointOnSlateRotatedRect(&local_780,(FSlateRotatedRect *)&local_858._s_0);
        fVar38 = local_858._s_0.Y - *(float *)((longlong)TVar20.field0_0x0 + 4);
        fVar37 = fVar38 * fVar38 +
                 (local_858._s_0.X - *(float *)TVar20.field0_0x0) *
                 (local_858._s_0.X - *(float *)TVar20.field0_0x0);
      }
      uVar31 = 0;
      if ((int)uVar32 < local_728.ArrayNum) {
        uVar31 = uVar30;
      }
      if (uVar31 == 0) {
        local_878 = (longlong)(int)uVar32;
        local_870 = (longlong)local_728.ArrayNum;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          pFVar16 = (FIndexAndDistance *)(*pcVar7)();
          return pFVar16;
        }
      }
      pFVar16 = local_820;
      FVar18 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_728;
      if (local_728.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FVar18 = local_728.AllocatorInstance.SecondaryData;
      }
      lVar26 = *(longlong *)((longlong)FVar18 + local_7a8);
      lVar5 = ((longlong *)((longlong)FVar18 + local_7a8))[1];
      local_820->DistanceSqToWidget = fVar37;
      local_820->_padding_ = lVar26;
      local_820->_padding_ = lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      if (local_728.AllocatorInstance.SecondaryData ==
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        return pFVar16;
      }
      FMemory::Free((void *)local_728.AllocatorInstance.SecondaryData);
      return pFVar16;
    }
  }
LAB_14250dca7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  lVar26 = local_828 + -1;
  uVar32 = uVar32 - 1;
  __return_storage_ptr__ = local_820;
  local_828 = lVar26;
  if ((int)uVar32 < 0) goto LAB_14250dccb;
  goto LAB_14250d980;
}

// GetNavigationMethod @ 14250e380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TInstancedStruct<FNavigationMethod> * __thiscall
FHittestGrid::GetNavigationMethod
          (FHittestGrid *this,TInstancedStruct<FNavigationMethod> *__return_storage_ptr__,
          FArrangedWidget *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  FNavigationMetaData *pFVar3;
  SWidget *pSVar4;
  bool bVar5;
  atomic<int> aVar6;
  TInstancedStruct<FNavigationMethod> *pTVar7;
  SWidget *this_00;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<FNavigationMetaData,1> local_18;
  
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->InstancedStruct);
  local_30.ReferenceController = (param_1->Widget).SharedReferenceCount.ReferenceController;
  this_00 = (param_1->Widget).Object;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  do {
    if ((((__return_storage_ptr__->InstancedStruct).StructMemory != (uchar *)0x0) &&
        ((__return_storage_ptr__->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr !=
         (UScriptStruct *)0x0)) || (this_00 == (SWidget *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
      return __return_storage_ptr__;
    }
    SWidget::GetMetaData<FNavigationMetaData>(this_00,&local_18);
    pFVar3 = local_18.Object;
    if (local_18.Object != (FNavigationMetaData *)0x0) {
      if ((local_18.Object == (FNavigationMetaData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TInstancedStruct<FNavigationMethod> *)(*pcVar1)();
        return pTVar7;
      }
      pTVar7 = &pFVar3->NavigationMethodStruct;
      if (__return_storage_ptr__ != pTVar7) {
        FInstancedStruct::InitializeAs
                  (&__return_storage_ptr__->InstancedStruct,
                   (pTVar7->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                   (pFVar3->NavigationMethodStruct).InstancedStruct.StructMemory);
      }
    }
    if ((this_00 == (SWidget *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TInstancedStruct<FNavigationMethod> *)(*pcVar1)();
      return pTVar7;
    }
    local_20.ReferenceController = (this_00->ParentWidgetPtr).WeakReferenceCount.ReferenceController
    ;
    pSVar4 = (SWidget *)0x0;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_20.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14250e4a3;
        }
        LOCK();
        aVar6 = (local_20.ReferenceController)->SharedReferenceCount;
        bVar5 = aVar2 == aVar6;
        if (bVar5) {
          (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar5);
      pSVar4 = (this_00->ParentWidgetPtr).Object;
    }
LAB_14250e4a3:
    this_00 = pSVar4;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  } while( true );
}

// GetWidgetRenderBoundingRect @ 14250fbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateRect * __thiscall
FHittestGrid::GetWidgetRenderBoundingRect
          (FHittestGrid *this,FSlateRect *__return_storage_ptr__,TSharedPtr<SWidget,1> *param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TVector2<float>_u_0_s_0 TVar6;
  FGeometry *pFVar7;
  FSlateRotatedRect *this_00;
  float local_98;
  float fStack_94;
  TVector2<float>_u_0 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  TTransform2<float> TStack_54;
  undefined4 uStack_3c;
  FSlateRotatedRect local_38 [2];
  
  if (param_1->Object == (SWidget *)0x0) {
    __return_storage_ptr__->Left = -1.0;
    __return_storage_ptr__->Top = -1.0;
    __return_storage_ptr__->Right = -1.0;
    __return_storage_ptr__->Bottom = -1.0;
  }
  else {
    pFVar7 = SWidget::GetPaintSpaceGeometry(param_1->Object);
    uVar1 = *(undefined8 *)&(pFVar7->AbsolutePosition).field0_0x0._s_0.Y;
    uVar3 = *(undefined8 *)&(pFVar7->Position).field0_0x0._s_0.Y;
    uVar4 = *(undefined8 *)((pFVar7->AccumulatedRenderTransform).M.M[0] + 1);
    uVar5 = *(undefined8 *)((pFVar7->AccumulatedRenderTransform).M.M[1] + 1);
    local_70 = *(undefined4 *)&pFVar7->Size;
    uStack_6c = *(undefined4 *)&(pFVar7->Size).field_0x4;
    fVar2 = pFVar7->Scale;
    fStack_64 = (pFVar7->AbsolutePosition).field0_0x0._s_0.X;
    TVar6 = (pFVar7->AbsolutePosition).field0_0x0._s_0;
    fStack_60 = (float)uVar1;
    uStack_5c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_58 = (undefined4)uVar3;
    TStack_54.M.M[0][0] = (float)((ulonglong)uVar3 >> 0x20);
    uVar1 = *(undefined8 *)&(pFVar7->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    TStack_54.Trans.field0_0x0._s_0.Y = (float)uVar1;
    uStack_3c = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_74 = (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.Y ^
                      __xmm_80000000800000008000000080000000);
    TStack_54.M.M[0][1] = (float)uVar4;
    TStack_54.M.M[1][0] = (float)((ulonglong)uVar4 >> 0x20);
    TStack_54.M.M[1][1] = (float)uVar5;
    TStack_54.Trans.field0_0x0._s_0.X = (float)((ulonglong)uVar5 >> 0x20);
    fStack_78 = (float)((uint)(this->GridWindowOrigin).field0_0x0._s_0.X ^
                       __xmm_80000000800000008000000080000000);
    local_98 = TVar6.X;
    local_98 = fStack_78 + local_98;
    fStack_94 = TVar6.Y;
    fStack_94 = local_74 + fStack_94;
    local_88._s_0.X = (float)___xmm_3f80000000000000000000003f800000;
    local_88._s_0.Y = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    uStack_80 = (undefined4)_UNK_15076b188;
    uStack_7c = (undefined4)((ulonglong)_UNK_15076b188 >> 0x20);
    fStack_68 = fVar2;
    Concatenate<TTransform2<float>_>
              ((TTransform2<float> *)local_38,&TStack_54,(TTransform2<float> *)&local_88._s_0);
    TStack_54.M.M[0][0] = local_38[0].TopLeft.field0_0x0._0_4_;
    TStack_54.M.M[0][1] = local_38[0].TopLeft.field0_0x0._4_4_;
    TStack_54.M.M[1][0] = local_38[0].ExtentX.field0_0x0._0_4_;
    TStack_54.M.M[1][1] = local_38[0].ExtentX.field0_0x0._4_4_;
    local_88._s_0.X = 0.0;
    local_88._s_0.Y = 0.0;
    TStack_54.Trans.field0_0x0._s_0.X = local_38[0].ExtentY.field0_0x0._0_4_;
    TStack_54.Trans.field0_0x0._s_0.Y = local_38[0].ExtentY.field0_0x0._4_4_;
    uStack_80 = local_70;
    local_74 = (float)uStack_6c;
    uStack_7c = 0;
    fStack_78 = 0.0;
    fStack_68 = fVar2;
    fStack_64 = local_98;
    fStack_60 = fStack_94;
    this_00 = TransformRect<TTransform2<float>_>
                        (local_38,&TStack_54,(FSlateRotatedRect *)&local_88._s_0);
    FSlateRotatedRect::ToBoundingRect(this_00,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// InsertCustomHitTestPath @ 142510a80

void __thiscall
FHittestGrid::InsertCustomHitTestPath
          (FHittestGrid *this,SWidget *param_1,TSharedRef<ICustomHitTestPath,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  bool bVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  piVar5 = TMapBase<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
           ::Find((TMapBase<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
                   *)this,param_1);
  if ((piVar5 == (int *)0x0) &&
     (bVar4 = `FHittestGrid::InsertCustomHitTestPath'::__l3::<lambda_1>::operator()(local_res8),
     !bVar4)) {
    return;
  }
  lVar6 = (longlong)*piVar5 * 0x40 + *(longlong *)&this->WidgetArray;
  *(ICustomHitTestPath **)(lVar6 + 0x10) = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != *(TReferenceControllerBase<1> **)(lVar6 + 0x18)) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar3 = *(longlong **)(lVar6 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar5 = (int *)((longlong)plVar3 + 0xc);
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    *(TReferenceControllerBase<1> **)(lVar6 + 0x18) = pTVar2;
  }
  return;
}

// IsDescendantOf @ 142511060

bool __thiscall
FHittestGrid::IsDescendantOf(FHittestGrid *this,SWidget *param_1,FWidgetData *param_2)

{
  FSlateWidgetPersistentState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_2->WeakWidget).WeakReferenceCount.ReferenceController;
  pSVar5 = (SWidget *)0x0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142511094;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pSVar5 = (param_2->WeakWidget).Object;
  }
LAB_142511094:
  if (pSVar5 != param_1) {
    while (pSVar5 != (SWidget *)0x0) {
      if (param_1 == pSVar5) {
        bVar7 = true;
        goto LAB_1425110d7;
      }
      pTVar2 = (pSVar5->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
      pFVar1 = &pSVar5->PersistentState;
      pSVar5 = (SWidget *)0x0;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar2->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            goto LAB_1425110d5;
          }
          LOCK();
          aVar4 = pTVar2->SharedReferenceCount;
          bVar7 = aVar3 == aVar4;
          if (bVar7) {
            pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar7);
        pSVar5 = (pFVar1->PaintParent).Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
LAB_1425110d5:
  bVar7 = false;
LAB_1425110d7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar7;
}

// IsValidCellCoord @ 142511980

bool __thiscall FHittestGrid::IsValidCellCoord(FHittestGrid *this,TIntPoint<int> *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((-1 < iVar1) && (iVar1 < (this->NumCells).field0_0x0._s_0.X)) &&
      (iVar1 = (param_1->field0_0x0)._s_0.Y, -1 < iVar1)) &&
     (iVar1 < (this->NumCells).field0_0x0._s_0.Y)) {
    return true;
  }
  return false;
}

// IsValidCellCoord @ 1425119b0

bool __thiscall FHittestGrid::IsValidCellCoord(FHittestGrid *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < (this->NumCells).field0_0x0._s_0.X)) && (-1 < param_2)) &&
     (param_2 < (this->NumCells).field0_0x0._s_0.Y)) {
    return true;
  }
  return false;
}

// LogGrid @ 142511c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHittestGrid::LogGrid(FHittestGrid *this)

{
  longlong lVar1;
  int iVar2;
  SWidget *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  FGeometry *this_00;
  uint uVar8;
  longlong lVar9;
  SWidget *pSVar10;
  SWidget *this_01;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined1 local_res10 [8];
  uint local_res18;
  FString local_a8;
  FString local_98;
  void *local_88 [2];
  FString local_78;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  iVar13 = 0;
  local_res18 = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if (0 < (this->NumCells).field0_0x0._s_0.Y) {
    do {
      iVar15 = 0;
      if (0 < (this->NumCells).field0_0x0._s_0.X) {
        do {
          ::FString::AppendChars(&local_a8,"\t",1);
          ::FString::AppendChars(&local_a8,"[",1);
          uVar8 = iVar13 * (this->NumCells).field0_0x0._s_0.X + iVar15;
          uVar14 = 0;
          if ((int)uVar8 < (this->Cells).ArrayNum) {
            uVar14 = ~uVar8 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
          lVar9 = *(longlong *)pFVar11;
          iVar2 = *(int *)(pFVar11 + 8);
          lVar1 = lVar9 + (longlong)iVar2 * 4;
          while( true ) {
            if (*(int *)(pFVar11 + 8) != iVar2) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            if (lVar9 == lVar1) break;
            ::FString::PrintfImpl(&local_98,L"%d,");
            iVar12 = local_98.Data.ArrayNum + -1;
            if (local_98.Data.ArrayNum == 0) {
              iVar12 = 0;
            }
            ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar12)
            ;
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            lVar9 = lVar9 + 4;
          }
          ::FString::AppendChars(&local_a8,"]",1);
          iVar15 = iVar15 + 1;
        } while (iVar15 < (this->NumCells).field0_0x0._s_0.X);
      }
      ::FString::AppendChars(&local_a8,"\n",1);
      iVar13 = iVar13 + 1;
    } while (iVar13 < (this->NumCells).field0_0x0._s_0.Y);
  }
  uVar14 = local_res18;
  ::FString::AppendChars(&local_a8,"\n",1);
  if (2 < (byte)LogHittestDebug._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHittestDebug);
  }
  TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::TConstIterator::
  TConstIterator((TConstIterator *)&local_68,&this->WidgetArray);
  if (local_60.CurrentBitIndex < (local_60.Array)->NumBits) {
    do {
      this_01 = (SWidget *)0x0;
      puVar16 = (undefined8 *)((longlong)local_60.CurrentBitIndex * 0x40 + *local_68);
      pSVar3 = (SWidget *)puVar16[1];
      pSVar10 = pSVar3;
      if (pSVar3 != (SWidget *)0x0) {
        aVar5 = *(atomic<int> *)&pSVar3->_padding_;
        do {
          pSVar10 = this_01;
          if (aVar5 == (atomic<int>)0x0) goto LAB_142511e52;
          LOCK();
          aVar7 = *(atomic<int> *)&pSVar3->_padding_;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        this_01 = (SWidget *)*puVar16;
        pSVar10 = pSVar3;
      }
LAB_142511e52:
      if (2 < (byte)LogHittestDebug._0_1_) {
        if (this_01 != (SWidget *)0x0) {
          this_00 = SWidget::GetPaintSpaceGeometry(this_01);
          FGeometry::ToString(this_00,&local_78);
          uVar14 = uVar14 | 3;
          (**(code **)(this_01->_padding_ + 0x1e0))(this_01,local_88);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHittestDebug);
        if (((uVar14 & 2) != 0) && (uVar14 = uVar14 & 0xfffffffd, local_88[0] != (void *)0x0)) {
          FMemory::Free(local_88[0]);
        }
        if (((uVar14 & 1) != 0) &&
           (uVar14 = uVar14 & 0xfffffffe,
           local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar10);
      local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveGrid @ 14251ba40

void __thiscall
FHittestGrid::RemoveGrid(FHittestGrid *this,TSharedRef<FHittestGrid_const_,1> *param_1)

{
  undefined1 *puVar1;
  TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FHittestGrid *pFVar4;
  FScriptContainerElement *pFVar5;
  FHittestGrid *pFVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  FHittestGrid *pFVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FHittestGrid *pFVar15;
  FHittestGrid *pFVar16;
  bool bVar17;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = &this->AppendedGridArray;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (this_00->AllocatorInstance).Data;
  iVar2 = (this->AppendedGridArray).ArrayNum;
  if (pFVar5 != pFVar5 + (longlong)iVar2 * 0x18) {
    pFVar15 = (FHittestGrid *)0x0;
    pFVar13 = pFVar5;
    do {
      pFVar6 = *(FHittestGrid **)(pFVar13 + 0x10);
      pFVar10 = pFVar6;
      pFVar16 = pFVar15;
      if (pFVar6 != (FHittestGrid *)0x0) {
        iVar8 = *(int *)&(pFVar6->WidgetMap).field_0x8;
        do {
          pFVar10 = pFVar15;
          if (iVar8 == 0) goto LAB_14251bab7;
          puVar1 = &(pFVar6->WidgetMap).field_0x8;
          LOCK();
          iVar9 = *(int *)puVar1;
          bVar17 = iVar8 == iVar9;
          if (bVar17) {
            *(int *)puVar1 = iVar8 + 1;
            iVar9 = iVar8;
          }
          UNLOCK();
          iVar8 = iVar9;
        } while (!bVar17);
        pFVar10 = pFVar6;
        pFVar16 = *(FHittestGrid **)(pFVar13 + 8);
      }
LAB_14251bab7:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      if (pFVar4 == pFVar16) {
        lVar11 = ((longlong)pFVar13 - (longlong)pFVar5) / 6 +
                 ((longlong)pFVar13 - (longlong)pFVar5 >> 0x3f);
        uVar12 = (int)(lVar11 >> 2) - (int)(lVar11 >> 0x3f);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (uVar12 == 0xffffffff) {
          return;
        }
        uVar14 = 0;
        if ((int)uVar12 < (this->AppendedGridArray).ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar12);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_00->AllocatorInstance,(this->AppendedGridArray).ArrayNum,
                   &(this->AppendedGridArray).ArrayMax);
        return;
      }
      pFVar13 = pFVar13 + 0x18;
    } while (pFVar13 != pFVar5 + (longlong)iVar2 * 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// RemoveGrid @ 14251bbb0

void __thiscall FHittestGrid::RemoveGrid(FHittestGrid *this,SWidget *param_1)

{
  TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  this_00 = &this->AppendedGridArray;
  pFVar2 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->AppendedGridArray).ArrayNum;
  pFVar9 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x18) {
    while (*(SWidget **)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 0x18;
      if (pFVar9 == pFVar2 + (longlong)iVar1 * 0x18) {
        return;
      }
    }
    lVar10 = ((longlong)pFVar9 - (longlong)pFVar2) / 6 +
             ((longlong)pFVar9 - (longlong)pFVar2 >> 0x3f);
    uVar11 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
    if (uVar11 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar11 < iVar1) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this_00->AllocatorInstance).Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar11 * 0x18 + 0x10);
      pTVar12 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar3->SharedReferenceCount;
        do {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          if (aVar5 == (atomic<int>)0x0) goto LAB_14251bcd5;
          LOCK();
          aVar8 = pTVar3->SharedReferenceCount;
          bVar6 = aVar5 == aVar8;
          if (bVar6) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar6);
        lVar10 = *(longlong *)(pFVar2 + (longlong)(int)uVar11 * 0x18 + 8);
        pTVar12 = pTVar3;
        if (((lVar10 != 0) && (*(SWidget **)(lVar10 + 0xa8) != param_1)) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<171237520003040029>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                               ,0x31d,"Pin->Owner == OtherGridOwner"), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
LAB_14251bcd5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      uVar7 = 0;
      if ((int)uVar11 < (this->AppendedGridArray).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (this_00,uVar11);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&this_00->AllocatorInstance,(this->AppendedGridArray).ArrayNum,
                 &(this->AppendedGridArray).ArrayMax);
    }
  }
  return;
}

// RemoveStaleAppendedHittestGrid @ 14251c1b0

void __thiscall FHittestGrid::RemoveStaleAppendedHittestGrid(FHittestGrid *this)

{
  TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  uint uVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = (this->AppendedGridArray).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    this_00 = &this->AppendedGridArray;
    lVar10 = (longlong)(int)uVar9 * 0x18;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->AppendedGridArray).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this_00->AllocatorInstance).Data;
      lVar7 = 0;
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 0x10);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar8->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14251c274;
          }
          LOCK();
          aVar5 = pTVar8->SharedReferenceCount;
          bVar4 = aVar3 == aVar5;
          if (bVar4) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar4);
        lVar7 = *(longlong *)(pFVar1 + lVar10 + 8);
      }
      if (lVar7 == 0) {
LAB_14251c274:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14251c27c:
        uVar6 = 0;
        if ((int)uVar9 < (this->AppendedGridArray).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this_00->AllocatorInstance,(this->AppendedGridArray).ArrayNum,
                   &(this->AppendedGridArray).ArrayMax);
      }
      else {
        if (((((*(float *)(lVar7 + 200) == (this->GridOrigin).field0_0x0._s_0.X) &&
              (*(float *)(lVar7 + 0xcc) == (this->GridOrigin).field0_0x0._s_0.Y)) &&
             (*(float *)(lVar7 + 0xd0) == (this->GridWindowOrigin).field0_0x0._s_0.X)) &&
            ((*(float *)(lVar7 + 0xd4) == (this->GridWindowOrigin).field0_0x0._s_0.Y &&
             (*(float *)(lVar7 + 0xd8) == (this->GridSize).field0_0x0._s_0.X)))) &&
           (*(float *)(lVar7 + 0xdc) == (this->GridSize).field0_0x0._s_0.Y)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        if (bVar4) goto LAB_14251c27c;
      }
      lVar10 = lVar10 + -0x18;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// RemoveWidget @ 14251c610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHittestGrid::RemoveWidget(FHittestGrid *this,SWidget *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_SlateHTG_RemoveWidget> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int local_res18 [2];
  int local_res20;
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar9 = StatPtr_STAT_SlateHTG_RemoveWidget;
  if (StatPtr_STAT_SlateHTG_RemoveWidget ==
      (FThreadSafeStaticStat<FStat_STAT_SlateHTG_RemoveWidget>)0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_SlateHTG_RemoveWidget");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_SlateHTG_RemoveWidget>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateHTG_RemoveWidget,*pFVar8,
                       L"HitTestGrid RemoveWidget","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar9;
  bVar4 = false;
  bVar3 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar10.ComparisonIndex.Value.Value != 0) || (FVar10.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar3 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar10.ComparisonIndex.Value.Value;
        local_90.Number = FVar10.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                   ,0x36e);
        bVar4 = true;
        bVar3 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar6 = true;
      goto LAB_14251c790;
    }
  }
  bVar4 = bVar7;
  bVar3 = bVar6;
  bVar6 = false;
  local_88 = local_70;
  FVar10 = local_70;
LAB_14251c790:
  local_res18[0] = -1;
  bVar7 = TMap<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
          ::RemoveAndCopyValue(&this->WidgetMap,param_1,local_res18);
  iVar5 = local_res18[0];
  if (bVar7) {
    lVar15 = (longlong)local_res18[0] * 0x40 + *(longlong *)&this->WidgetArray;
    iVar11 = *(int *)(lVar15 + 0x20);
    local_res20 = iVar11;
    if (iVar11 <= *(int *)(lVar15 + 0x28)) {
      do {
        iVar17 = *(int *)(lVar15 + 0x24);
        local_res20 = iVar11;
        if (iVar17 <= *(int *)(lVar15 + 0x2c)) {
          do {
            uVar12 = iVar17 * (this->NumCells).field0_0x0._s_0.X + iVar11;
            uVar13 = 0;
            if ((int)uVar12 < (this->Cells).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar16 = (this->Cells).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
            piVar1 = *(int **)&pFVar16->field_0x0;
            for (piVar14 = piVar1; piVar14 != piVar1 + *(int *)&pFVar16[8].field_0x0;
                piVar14 = piVar14 + 1) {
              if (*piVar14 == iVar5) {
                uVar13 = (uint)((longlong)piVar14 - (longlong)piVar1 >> 2);
                if (uVar13 != 0xffffffff) {
                  uVar12 = 0;
                  if ((int)(uVar13 + 1) <= *(int *)&pFVar16[8].field_0x0) {
                    uVar12 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x458,
                                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar11 = ~uVar13 + *(int *)&pFVar16[8].field_0x0;
                  if (1 < iVar11) {
                    iVar11 = 1;
                  }
                  if (iVar11 != 0) {
                    memmove((void *)(*(longlong *)&pFVar16->field_0x0 + (longlong)(int)uVar13 * 4),
                            (void *)(*(longlong *)&pFVar16->field_0x0 +
                                    (longlong)(*(int *)&pFVar16[8].field_0x0 - iVar11) * 4),
                            (longlong)iVar11 << 2);
                  }
                  *(int *)&pFVar16[8].field_0x0 = *(int *)&pFVar16[8].field_0x0 + -1;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,(ForAnyElementType *)pFVar16,*(int *)&pFVar16[8].field_0x0,
                             (int *)(pFVar16 + 0xc));
                  iVar11 = local_res20;
                }
                break;
              }
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 <= *(int *)(lVar15 + 0x2c));
        }
        iVar11 = iVar11 + 1;
        FVar10 = local_88;
        local_res20 = iVar11;
      } while (iVar11 <= *(int *)(lVar15 + 0x28));
    }
    TSparseArray<FHittestGrid::FWidgetData,FDefaultSparseArrayAllocator>::RemoveAt
              (&this->WidgetArray,iVar5,1);
  }
  RemoveGrid(this,param_1);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SameSize @ 14251f100

bool __thiscall FHittestGrid::SameSize(FHittestGrid *this,FHittestGrid *param_1)

{
  if (((((param_1->GridOrigin).field0_0x0._s_0.X == (this->GridOrigin).field0_0x0._s_0.X) &&
       ((param_1->GridOrigin).field0_0x0._s_0.Y == (this->GridOrigin).field0_0x0._s_0.Y)) &&
      ((param_1->GridWindowOrigin).field0_0x0._s_0.X == (this->GridWindowOrigin).field0_0x0._s_0.X))
     && ((((param_1->GridWindowOrigin).field0_0x0._s_0.Y ==
           (this->GridWindowOrigin).field0_0x0._s_0.Y &&
          ((param_1->GridSize).field0_0x0._s_0.X == (this->GridSize).field0_0x0._s_0.X)) &&
         ((param_1->GridSize).field0_0x0._s_0.Y == (this->GridSize).field0_0x0._s_0.Y)))) {
    return true;
  }
  return false;
}

// SetHittestArea @ 14251f400

bool __thiscall
FHittestGrid::SetHittestArea
          (FHittestGrid *this,FDeprecateVector2DParameter *param_1,
          FDeprecateVector2DParameter *param_2,FDeprecateVector2DParameter *param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  TIntPoint<int>_u_0 local_res8;
  
  fVar1 = __real_bf000000;
  fVar4 = __real_3f800000;
  bVar2 = false;
  if ((*(float *)param_2 != (this->GridSize).field0_0x0._s_0.X) ||
     (*(float *)&param_2->field_0x4 != (this->GridSize).field0_0x0._s_0.Y)) {
    (this->GridSize).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_2;
    fVar5 = fVar4 / CellSize.field0_0x0._s_0.Y;
    fVar4 = fVar4 / CellSize.field0_0x0._s_0.X;
    local_res8._s_0.Y =
         -((int)ROUND(fVar1 - (fVar5 + fVar5) * (this->GridSize).field0_0x0._s_0.Y) >> 1);
    local_res8._s_0.X =
         -((int)ROUND(fVar1 - (fVar4 + fVar4) * (this->GridSize).field0_0x0._s_0.X) >> 1);
    iVar3 = local_res8._s_0.Y * local_res8._s_0.X;
    (this->NumCells).field0_0x0 = local_res8;
    if (iVar3 < 0) {
      local_res8 = (TIntPoint<int>_u_0)this;
      `FHittestGrid::SetHittestArea'::__l8::<lambda_1>::operator()(&local_res8);
      iVar3 = 0;
      (this->GridSize).field0_0x0 = (TVector2<float>_u_0)0x0;
      local_res8 = (TIntPoint<int>_u_0)0x0;
      (this->NumCells).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    }
    ClearInternal(this,iVar3);
    bVar2 = true;
  }
  (this->GridOrigin).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_1;
  (this->GridWindowOrigin).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_3;
  return bVar2;
}

// UpdateWidget @ 142524290

void __thiscall
FHittestGrid::UpdateWidget
          (FHittestGrid *this,SWidget *param_1,FSlateInvalidationWidgetSortOrder param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  
  if (param_1 == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                       ,0x38b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  piVar3 = TMapBase<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
           ::Find((TMapBase<SWidget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,int,0>_>
                   *)this,param_1);
  if (piVar3 != (int *)0x0) {
    *(uint *)((longlong)*piVar3 * 0x40 + 0x38 + *(longlong *)&this->WidgetArray) = param_2.Order;
  }
  return;
}

// operator() @ 15048f7c0

bool __thiscall `FHittestGrid::InsertCustomHitTestPath'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<171237520003040154>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<171237520003040154>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048f9b0

bool __thiscall `FHittestGrid::SetHittestArea'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<171237520003039499>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<171237520003039499>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

