// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 20

// SResponsiveGridPanel @ 1428ba410

SResponsiveGridPanel * __thiscall
SResponsiveGridPanel::SResponsiveGridPanel(SResponsiveGridPanel *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  SResponsiveGridPanel *pSVar5;
  FName local_res8 [4];
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SResponsiveGridPanel__6B_;
  pFVar4 = ::FName::FName(local_res8,5,L"Slots",FNAME_Add);
  FVar1 = *pFVar4;
  (this->Slots)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Slots)._padding_ = (longlong)this;
  (this->Slots)._padding_ = (longlong)FVar1;
  *(undefined2 *)&(this->Slots)._padding_ = 0xdc00;
  if (FVar1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SResponsiveGridPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  (this->Slots)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SResponsiveGridPanel____6B_;
  (this->Slots).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Slots).Children.ArrayNum = 0;
  (this->Slots).Children.ArrayMax = 0;
  (this->RowFillCoefficients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowFillCoefficients).ArrayNum = 0;
  (this->RowFillCoefficients).ArrayMax = 0;
  return this;
}

// ~SResponsiveGridPanel @ 1428c16b0

void __thiscall SResponsiveGridPanel::~SResponsiveGridPanel(SResponsiveGridPanel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SResponsiveGridPanel__6B_;
  pFVar1 = (this->RowFillCoefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
            ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_> *
             )(this->Slots).Children.AllocatorInstance.Data,(this->Slots).Children.ArrayNum);
  pFVar1 = (this->Slots).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Slots);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddSlot @ 1428d1520

FScopedWidgetSlotArguments * __thiscall
SResponsiveGridPanel::AddSlot
          (SResponsiveGridPanel *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SResponsiveGridPanel *pSVar4;
  code *pcVar5;
  FWeakReferencer<1> *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FSlot *this_00;
  FSlot *pFVar11;
  FScopedWidgetSlotArguments *pFVar12;
  TSharedRef<SWidget,1> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_38);
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = (SResponsiveGridPanel *)pTVar10->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this_00 = ::operator_new(0x68);
  pFVar11 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    pFVar11 = FSlot::FSlot(this_00,param_1);
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28 = *(undefined4 *)&(pFVar11->Panel).Object;
  uStack_24 = *(undefined4 *)((longlong)&(pFVar11->Panel).Object + 4);
  pFVar6 = &(pFVar11->Panel).WeakReferenceCount;
  uStack_20 = *(undefined4 *)&pFVar6->ReferenceController;
  uStack_1c = *(undefined4 *)
               ((longlong)&(pFVar11->Panel).WeakReferenceCount.ReferenceController + 4);
  pTVar7 = pFVar6->ReferenceController;
  (pFVar11->Panel).Object = pSVar4;
  (pFVar11->Panel).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  iVar9 = FindInsertSlotLocation(this,pFVar11);
  __return_storage_ptr__->_padding_ = (longlong)pFVar11;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  if ((pFVar11 == (FSlot *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                         ,0x9b,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FScopedWidgetSlotArguments *)(*pcVar5)();
    return pFVar12;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Children = &this->Slots;
  __return_storage_ptr__->Index = iVar9;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// CacheDesiredSize @ 1428d9f90

void __thiscall SResponsiveGridPanel::CacheDesiredSize(SResponsiveGridPanel *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSlot *pFVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  TArray<float,TSizedDefaultAllocator<32>_> local_48;
  TArray<float,TSizedDefaultAllocator<32>_> local_38 [3];
  ulonglong uVar8;
  
  uVar9 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  ComputeDesiredCellSizes(this,this->PreviousWidth,&local_48,&local_58,local_38);
  (this->TotalDesiredSizes).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (0 < (this->Slots).Children.ArrayNum) {
    uVar8 = uVar9;
    uVar10 = uVar9;
    iVar6 = local_48.ArrayNum;
    if (0 < local_48.ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = local_48.ArrayNum;
        }
        (this->TotalDesiredSizes).field0_0x0._s_0.X =
             (double)*(float *)(local_48.AllocatorInstance.Data + uVar10) +
             (this->TotalDesiredSizes).field0_0x0._s_0.X;
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar10 = uVar10 + 4;
      } while ((int)(uVar7 + 1) < iVar6);
    }
    (this->TotalDesiredSizes).field0_0x0._s_0.X =
         (double)((float)(this->TotalColumns + -1) * (this->ColumnGutter + this->ColumnGutter)) +
         (this->TotalDesiredSizes).field0_0x0._s_0.X;
    uVar8 = uVar9;
    iVar6 = local_58.ArrayNum;
    if (0 < local_58.ArrayNum) {
      do {
        uVar7 = (uint)uVar9;
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = local_58.ArrayNum;
        }
        uVar9 = (ulonglong)(uVar7 + 1);
        (this->TotalDesiredSizes).field0_0x0._s_0.Y =
             (double)*(float *)(local_58.AllocatorInstance.Data + uVar8) +
             (this->TotalDesiredSizes).field0_0x0._s_0.Y;
        uVar8 = uVar8 + 4;
      } while ((int)(uVar7 + 1) < iVar6);
    }
    fVar1 = this->RowGutter;
    pFVar5 = TPanelChildren<SResponsiveGridPanel::FSlot>::operator[]
                       (&this->Slots,(this->Slots).Children.ArrayNum + -1);
    (this->TotalDesiredSizes).field0_0x0._s_0.Y =
         (double)((float)pFVar5->RowParam * (fVar1 + fVar1)) +
         (this->TotalDesiredSizes).field0_0x0._s_0.Y;
  }
  SWidget::CacheDesiredSize((SWidget *)this,param_1);
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ClearChildren @ 1428db1c0

void __thiscall SResponsiveGridPanel::ClearChildren(SResponsiveGridPanel *this)

{
  int *piVar1;
  TArray<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Slots).Children;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->Slots).Children.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Slots).Children.ArrayNum;
  local_10._4_4_ = (this->Slots).Children.ArrayMax;
  *piVar1 = 0;
  (this->Slots).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
            ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_> *
             )(pTVar2->AllocatorInstance).Data,0);
  (this->Slots).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
            ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_> *
             )local_18.Data,(int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
              ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>
                *)(pTVar2->AllocatorInstance).Data,(this->Slots).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Slots).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_>,int>
            ((TUniquePtr<SResponsiveGridPanel::FSlot,TDefaultDelete<SResponsiveGridPanel::FSlot>_> *
             )local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredCellSizes @ 1428e00f0

void __thiscall
SResponsiveGridPanel::ComputeDesiredCellSizes
          (SResponsiveGridPanel *this,float param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EVisibility EVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FDeprecateSlateVector2D FVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int local_f8;
  int local_f4;
  longlong local_f0;
  int local_e4;
  longlong local_c0;
  int iStack_b4;
  
  memset((param_2->AllocatorInstance).Data,0,(longlong)param_2->ArrayNum << 2);
  memset((param_3->AllocatorInstance).Data,0,(longlong)param_3->ArrayNum << 2);
  iVar17 = (this->Slots).Children.ArrayNum;
  uVar20 = 0;
  local_f8 = 0;
  uVar21 = 0xffffffff;
  local_e4 = -1;
  if (0 < iVar17) {
    local_f0 = -4;
    local_c0 = 0;
    EVar10 = EVisibility::Collapsed;
    do {
      uVar15 = 0;
      if ((int)uVar20 < iVar17) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar10 = EVisibility::Collapsed, bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((this->Slots).Children.AllocatorInstance.Data + local_c0);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar4 + 0x10) + 0x39) !=
          EVar10.Value.Value) {
        iStack_b4 = this->TotalColumns;
        uVar15 = *(int *)(lVar4 + 0x60) - 1;
        local_f4 = 0;
        if (-1 < (int)uVar15) {
          lVar18 = (longlong)(int)uVar15 * 0xc;
          do {
            uVar12 = 0;
            if ((int)uVar15 < *(int *)(lVar4 + 0x60)) {
              uVar12 = ~uVar15 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar1 = (float *)(lVar18 + *(longlong *)(lVar4 + 0x58));
            if (*pfVar1 <= param_1 && param_1 != *pfVar1) {
              uVar12 = 0;
              if ((int)uVar15 < *(int *)(lVar4 + 0x60)) {
                uVar12 = ~uVar15 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_f4 = *(int *)(*(longlong *)(lVar4 + 0x58) + 8 + (longlong)(int)uVar15 * 0xc);
              iStack_b4 = (int)((ulonglong)
                                *(undefined8 *)
                                 (*(longlong *)(lVar4 + 0x58) + (longlong)(int)uVar15 * 0xc) >> 0x20
                               );
              EVar10.Value.Value = EVisibility::Collapsed.Value.Value;
              break;
            }
            lVar18 = lVar18 + -0xc;
            uVar15 = uVar15 - 1;
            EVar10.Value.Value = EVisibility::Collapsed.Value.Value;
          } while (-1 < (int)uVar15);
        }
        if (iStack_b4 != 0) {
          iVar17 = *(int *)(lVar4 + 0x50);
          if (iVar17 != local_e4) {
            local_f0 = local_f0 + 4;
            local_f8 = 0;
            piVar19 = &param_4->ArrayNum;
            uVar21 = uVar21 + 1;
            iVar16 = (uVar21 - *piVar19) + 1;
            iVar13 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar16,&param_4->AllocatorInstance,piVar19,&param_4->ArrayMax);
            memset((param_4->AllocatorInstance).Data + (longlong)iVar13 * 4,0,(longlong)iVar16 << 2)
            ;
            iVar13 = *(int *)(lVar4 + 0x50);
            uVar15 = 0;
            if ((int)uVar21 < *piVar19) {
              uVar15 = ~uVar21 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(float *)((param_4->AllocatorInstance).Data + local_f0) = (float)iVar13;
            local_e4 = iVar17;
          }
          piVar19 = &param_4->ArrayNum;
          fVar6 = *(float *)(lVar4 + 0x28);
          fVar7 = *(float *)(lVar4 + 0x2c);
          fVar8 = *(float *)(lVar4 + 0x30);
          fVar9 = *(float *)(lVar4 + 0x34);
          FVar14 = SWidget::GetDesiredSize(*(SWidget **)(lVar4 + 0x10));
          fVar2 = *(float *)FVar14;
          fVar3 = *(float *)((longlong)FVar14 + 4);
          local_f4 = local_f4 + local_f8;
          iVar17 = iStack_b4 + local_f4;
          if (local_f8 < iVar17) {
            local_f8 = iVar17;
          }
          if (this->TotalColumns < local_f8) {
            local_f0 = local_f0 + 4;
            uVar21 = uVar21 + 1;
            local_f4 = 0;
            iVar13 = (uVar21 - *piVar19) + 1;
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar13,&param_4->AllocatorInstance,piVar19,&param_4->ArrayMax);
            memset((param_4->AllocatorInstance).Data + (longlong)iVar17 * 4,0,(longlong)iVar13 << 2)
            ;
            iVar17 = *(int *)(lVar4 + 0x50);
            uVar15 = 0;
            if ((int)uVar21 < *piVar19) {
              uVar15 = ~uVar21 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(float *)((param_4->AllocatorInstance).Data + local_f0) = (float)iVar17;
            iVar17 = iStack_b4;
            local_f8 = iStack_b4;
          }
          iVar13 = local_f8 - param_2->ArrayNum;
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          iVar16 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar13,&param_2->AllocatorInstance,&param_2->ArrayNum,
                              &param_2->ArrayMax);
          memset((param_2->AllocatorInstance).Data + (longlong)iVar16 * 4,0,(longlong)iVar13 << 2);
          iVar16 = (uVar21 - param_3->ArrayNum) + 1;
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar16,&param_3->AllocatorInstance,&param_3->ArrayNum,
                              &param_3->ArrayMax);
          memset((param_3->AllocatorInstance).Data + (longlong)iVar13 * 4,0,(longlong)iVar16 << 2);
          DistributeSizeContributions
                    ((fVar8 + fVar6 + fVar2) / (float)iStack_b4,param_2,local_f4,iVar17);
          DistributeSizeContributions(fVar9 + fVar7 + fVar3,param_3,uVar21,uVar21 + 1);
          EVar10 = EVisibility::Collapsed;
        }
      }
      uVar20 = uVar20 + 1;
      iVar17 = (this->Slots).Children.ArrayNum;
      local_c0 = local_c0 + 8;
    } while ((int)uVar20 < iVar17);
  }
  return;
}

// ComputeDesiredSize @ 1428e11b0

TVector2<double> * __thiscall
SResponsiveGridPanel::ComputeDesiredSize
          (SResponsiveGridPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  dVar1 = (this->TotalDesiredSizes).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->TotalDesiredSizes).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// ComputePartialSums @ 1428e25d0

void __cdecl
SResponsiveGridPanel::ComputePartialSums(TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  fVar8 = 0.0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + lVar7);
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar8;
      lVar7 = lVar7 + 4;
      iVar5 = param_1->ArrayNum;
      fVar8 = fVar8 + fVar1;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// Construct @ 142900500

void __thiscall
SResponsiveGridPanel::Construct(SResponsiveGridPanel *this,FArguments *param_1,int param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TSharedRef<SWidget,1> *pTVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  FSlotArguments *pFVar19;
  undefined8 *local_78;
  undefined8 *local_70;
  SWidget *local_68;
  TSharedRef<SWidget,1> local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  this->TotalColumns = param_2;
  pTVar2 = &this->RowFillCoefficients;
  this->ColumnGutter = param_1->_ColumnGutter;
  this->RowGutter = param_1->_RowGutter;
  this->PreviousWidth = 0.0;
  if (pTVar2 != &param_1->RowFillCoefficients) {
    iVar12 = (param_1->RowFillCoefficients).ArrayNum;
    piVar1 = &(this->RowFillCoefficients).ArrayMax;
    pFVar5 = (param_1->RowFillCoefficients).AllocatorInstance.Data;
    (this->RowFillCoefficients).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,*piVar1,&pTVar2->AllocatorInstance,iVar12,piVar1);
      if (iVar12 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar12 << 2);
      }
    }
  }
  pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_60);
  pTVar6 = (pTVar13->SharedReferenceCount).ReferenceController;
  local_68 = pTVar13->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  uVar16 = (param_1->_Slots).ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(this->Slots).Children.ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar16,&(this->Slots).Children.AllocatorInstance,(this->Slots).Children.ArrayNum,
               piVar1);
  }
  uVar16 = 0;
  if (0 < (param_1->_Slots).ArrayNum) {
    lVar18 = 0;
    do {
      uVar15 = ~uVar16 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar16 < (param_1->_Slots).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = FindInsertSlotLocation
                         (this,*(FSlot **)((param_1->_Slots).AllocatorInstance.Data + lVar18));
      iVar12 = (param_1->_Slots).ArrayNum;
      lVar17 = (longlong)(int)uVar10;
      if (uVar10 == 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar16 < iVar12) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = (FSlotArguments *)((param_1->_Slots).AllocatorInstance.Data + lVar18);
        local_78 = (undefined8 *)pFVar19->_padding_;
        pFVar19->_padding_ = 0;
        if ((local_78 == (undefined8 *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewSlot.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                               ,0x1fd,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Slots).Children.AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar5 + (longlong)(this->Slots).Children.ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar10 = (this->Slots).Children.ArrayNum;
        piVar1 = &(this->Slots).Children.ArrayMax;
        if (uVar10 == *piVar1) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Slots).Children.AllocatorInstance,piVar1);
        }
        pFVar5 = (this->Slots).Children.AllocatorInstance.Data;
        (this->Slots).Children.ArrayNum = uVar10 + 1;
        *(undefined8 **)(pFVar5 + (longlong)(int)uVar10 * 8) = local_78;
        local_78 = (undefined8 *)0x0;
        uVar15 = 0;
        if ((int)uVar10 < (this->Slots).Children.ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FSlot::Construct(*(FSlot **)
                          ((this->Slots).Children.AllocatorInstance.Data + (longlong)(int)uVar10 * 8
                          ),(FChildren *)&this->Slots,pFVar19);
        puVar14 = local_78;
      }
      else {
        uVar11 = 0;
        if ((int)uVar16 < iVar12) {
          uVar11 = uVar15;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = (FSlotArguments *)((param_1->_Slots).AllocatorInstance.Data + lVar18);
        local_70 = (undefined8 *)pFVar19->_padding_;
        pFVar19->_padding_ = 0;
        if ((local_70 == (undefined8 *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewSlot.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                               ,0x23c,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Slots).Children.AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 <
             pFVar5 + (longlong)(this->Slots).Children.ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (this->Slots).Children.ArrayNum;
        piVar1 = &(this->Slots).Children.ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Slots).Children.AllocatorInstance,piVar1);
        }
        (this->Slots).Children.ArrayNum = iVar12 + 1;
        pFVar5 = (this->Slots).Children.AllocatorInstance.Data + lVar17 * 8;
        memmove(pFVar5 + 8,pFVar5,(longlong)(int)(iVar12 - uVar10) << 3);
        *(undefined8 **)((this->Slots).Children.AllocatorInstance.Data + lVar17 * 8) = local_70;
        local_70 = (undefined8 *)0x0;
        uVar15 = 0;
        if ((int)uVar10 < (this->Slots).Children.ArrayNum) {
          uVar15 = ~uVar10 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FSlot::Construct(*(FSlot **)((this->Slots).Children.AllocatorInstance.Data + lVar17 * 8),
                         (FChildren *)&this->Slots,pFVar19);
        puVar14 = local_70;
      }
      if (puVar14 != (undefined8 *)0x0) {
        (**(code **)*puVar14)(puVar14,1);
      }
      uVar15 = 0;
      if ((int)uVar10 < (this->Slots).Children.ArrayNum) {
        uVar15 = ~uVar10 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = *(longlong *)
                ((this->Slots).Children.AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_50 = *(undefined4 *)(lVar17 + 0x40);
      uStack_4c = *(undefined4 *)(lVar17 + 0x44);
      uStack_48 = *(undefined4 *)(lVar17 + 0x48);
      uStack_44 = *(undefined4 *)(lVar17 + 0x4c);
      plVar8 = *(longlong **)(lVar17 + 0x48);
      *(SWidget **)(lVar17 + 0x40) = local_68;
      *(TReferenceControllerBase<1> **)(lVar17 + 0x48) = pTVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 0x68;
    } while ((int)uVar16 < (param_1->_Slots).ArrayNum);
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar6->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  return;
}

// DistributeSizeContributions @ 1429260f0

void __cdecl
SResponsiveGridPanel::DistributeSizeContributions
          (float param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  
  uVar5 = (ulonglong)param_3;
  if (param_3 < param_4) {
    lVar6 = uVar5 * 4;
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar7 = *(float *)((param_2->AllocatorInstance).Data + lVar6);
      if (fVar7 <= param_1) {
        fVar7 = param_1;
      }
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = (ulonglong)(uVar4 + 1);
      *(float *)((param_2->AllocatorInstance).Data + lVar6) = fVar7;
      lVar6 = lVar6 + 4;
    } while ((int)(uVar4 + 1) < param_4);
  }
  return;
}

// FindInsertSlotLocation @ 142935650

int __thiscall
SResponsiveGridPanel::FindInsertSlotLocation(SResponsiveGridPanel *this,FSlot *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Slots).Children.ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (param_1->RowParam <
          *(int *)(*(longlong *)((this->Slots).Children.AllocatorInstance.Data + lVar6) + 0x50)) {
        return uVar5;
      }
      iVar4 = (this->Slots).Children.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// GetChildren @ 14293e530

FChildren * __thiscall SResponsiveGridPanel::GetChildren(SResponsiveGridPanel *this)

{
  return (FChildren *)&this->Slots;
}

// GetPrivateWidgetClass @ 1429470c0

FSlateWidgetClassData * __cdecl SResponsiveGridPanel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  FContainerInitializer local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SResponsiveGridPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(&local_res18,5,L"Slots",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&local_res8,&local_48,*pFVar1,0x218);
      local_38[0] = Layout;
      local_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = ::FName::FName(&local_res18,"Slot.Padding");
      FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                (&local_48,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
      if (((int)uStack_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SResponsiveGridPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14294c5e0

FSlateWidgetClassData * __thiscall SResponsiveGridPanel::GetWidgetClass(SResponsiveGridPanel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FContainerInitializer FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  FAttributeEntry FStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SResponsiveGridPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(&FStackX_18,5,L"Slots",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_48,*pFVar1,0x218);
      auStack_38[0] = Layout;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = ::FName::FName(&FStackX_18,"Slot.Padding");
      FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                (&FStack_48,&FStack_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)auStack_38);
      if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SResponsiveGridPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SResponsiveGridPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// LayoutDebugPaint @ 1429581f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SResponsiveGridPanel::LayoutDebugPaint
          (SResponsiveGridPanel *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4)

{
  return param_4;
}

// OnArrangeChildren @ 14295edd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SResponsiveGridPanel::OnArrangeChildren
          (SResponsiveGridPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  FDeprecateSlateVector2D *pFVar2;
  byte bVar3;
  ForElementType<FArrangedWidget> FVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  FArrangedChildren *pFVar9;
  bool bVar10;
  EVisibility EVar11;
  int iVar12;
  FSlot *pFVar13;
  FDeprecateSlateVector2D FVar14;
  ForElementType<FArrangedWidget> FVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<FArrangedWidget> FVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStackY_288 [32];
  uint local_234;
  uint local_230;
  TArray<float,TSizedDefaultAllocator<32>_> local_228;
  uint local_218;
  TArray<float,TSizedDefaultAllocator<32>_> local_210;
  TArray<float,TSizedDefaultAllocator<32>_> local_200;
  TArray<float,TSizedDefaultAllocator<32>_> local_1f0;
  longlong local_1e0;
  int local_1d8;
  TArray<float,TSizedDefaultAllocator<32>_> local_1d0;
  float local_1c0;
  float local_1bc;
  undefined8 local_1b8;
  float local_1b0;
  float fStack_1ac;
  longlong local_1a8;
  FSlateLayoutTransform local_1a0;
  FDeprecateVector2DParameter local_194;
  FGeometry *local_188;
  FArrangedChildren *local_180;
  double local_178;
  undefined8 local_170;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined1 local_138 [32];
  float local_118 [3] [2];
  SWidget *local_100;
  FSharedReferencer<1> local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if ((this->Slots).Children.ArrayNum != 0) {
    local_1b8 = param_1->Size;
    local_1c0 = this->ColumnGutter + this->ColumnGutter;
    uVar21 = 0;
    fVar40 = this->RowGutter + this->RowGutter;
    fVar41 = local_1b8._4_4_;
    dVar6 = (double)(float)local_1b8;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_200.ArrayNum = 0;
    local_200.ArrayMax = 0;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    this->PreviousWidth = (float)local_1b8;
    local_1bc = fVar40;
    local_188 = param_1;
    local_180 = param_2;
    local_178 = dVar6;
    ComputeDesiredCellSizes(this,(float)local_1b8,&local_1d0,&local_1f0,&local_200);
    if ((local_1f0.ArrayNum != local_200.ArrayNum) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Rows.Num() == RowToSlot.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SResponsiveGridPanel.cpp"
                            ,0x8d,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar23 = 0;
    local_228.ArrayNum = 0;
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayMax = 0;
    uVar30 = 0;
    uVar25 = uVar21;
    if (0 < local_1d0.ArrayNum) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1d0.ArrayNum,&local_228.AllocatorInstance,&local_228.ArrayNum,
                 &local_228.ArrayMax);
      uVar17 = local_228.ArrayNum - 1;
      uVar20 = uVar30;
      if ((int)uVar17 < local_228.ArrayNum) {
        uVar20 = ~uVar17 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = 0;
      iVar18 = (this->TotalColumns - local_1d0.ArrayNum) + 1;
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar18,&local_228.AllocatorInstance,&local_228.ArrayNum,
                          &local_228.ArrayMax);
      memset(local_228.AllocatorInstance.Data + (longlong)iVar12 * 4,0,(longlong)iVar18 << 2);
      uVar25 = (ulonglong)(uint)local_228.ArrayNum;
    }
    uVar20 = 0;
    if (0 < local_1d0.ArrayNum) {
      fVar33 = __real_3f800000 / (float)this->TotalColumns;
      uVar24 = uVar21;
      uVar29 = uVar21;
      while( true ) {
        uVar19 = (uint)uVar24;
        uVar17 = uVar20;
        if ((int)uVar19 < (int)uVar25) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar24 = (ulonglong)(uVar19 + 1);
        *(float *)(local_228.AllocatorInstance.Data + uVar29) = (float)((double)fVar33 * dVar6);
        uVar29 = uVar29 + 4;
        if (local_1d0.ArrayNum <= (int)(uVar19 + 1)) break;
        uVar25 = (ulonglong)(uint)local_228.ArrayNum;
      }
    }
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    fVar33 = 0.0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    if (0 < local_1f0.ArrayNum) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1f0.ArrayNum,&local_210.AllocatorInstance,&local_210.ArrayNum,
                 &local_210.ArrayMax);
      uVar19 = local_210.ArrayNum - 1;
      uVar17 = uVar20;
      if ((int)uVar19 < local_210.ArrayNum) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(local_210.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) = 0;
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,1,&local_210.AllocatorInstance,&local_210.ArrayNum,&local_210.ArrayMax
                         );
      *(undefined4 *)(local_210.AllocatorInstance.Data + (longlong)iVar12 * 4) = 0;
    }
    fVar34 = this->RowGutter;
    pFVar13 = TPanelChildren<SResponsiveGridPanel::FSlot>::operator[]
                        (&this->Slots,(this->Slots).Children.ArrayNum + -1);
    uVar17 = __xmm_80000000800000008000000080000000;
    iVar12 = (this->RowFillCoefficients).ArrayNum;
    fVar41 = fVar41 + (float)pFVar13->RowParam * fVar34 * __real_c0000000;
    uVar19 = 0;
    if (0 < local_1f0.ArrayNum) {
      fVar34 = (float)iVar12;
      uVar25 = uVar21;
      uVar24 = uVar21;
      do {
        uVar32 = (uint)uVar25;
        uVar27 = ~uVar32 >> 0x1f;
        uVar28 = uVar30;
        if ((int)uVar32 < local_200.ArrayNum) {
          uVar28 = uVar27;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (fVar34 < *(float *)(local_200.AllocatorInstance.Data + uVar24) ||
            fVar34 == *(float *)(local_200.AllocatorInstance.Data + uVar24)) {
LAB_14295f39d:
          uVar28 = uVar20;
          if ((int)uVar32 < local_1f0.ArrayNum) {
            uVar28 = uVar27;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar41 = fVar41 + (float)(*(uint *)(local_1f0.AllocatorInstance.Data + uVar24) ^ uVar17);
        }
        else {
          uVar28 = uVar30;
          if ((int)uVar32 < local_200.ArrayNum) {
            uVar28 = uVar27;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar31 = (uint)*(float *)(local_200.AllocatorInstance.Data + uVar24);
          uVar28 = uVar19;
          if ((int)uVar31 < (this->RowFillCoefficients).ArrayNum) {
            uVar28 = ~uVar31 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(float *)((this->RowFillCoefficients).AllocatorInstance.Data +
                        (longlong)(int)uVar31 * 4) == 0.0) goto LAB_14295f39d;
          uVar28 = uVar19;
          if ((int)uVar32 < local_200.ArrayNum) {
            uVar28 = uVar27;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar27 = (uint)*(float *)(local_200.AllocatorInstance.Data + uVar24);
          uVar28 = uVar20;
          if ((int)uVar27 < (this->RowFillCoefficients).ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar33 = fVar33 + *(float *)((this->RowFillCoefficients).AllocatorInstance.Data +
                                      (longlong)(int)uVar27 * 4);
        }
        uVar25 = (ulonglong)(uVar32 + 1);
        uVar24 = uVar24 + 4;
      } while ((int)(uVar32 + 1) < local_1f0.ArrayNum);
    }
    if (0 < local_1f0.ArrayNum) {
      fVar34 = (float)iVar12;
      uVar25 = uVar21;
      do {
        uVar17 = (uint)uVar21;
        uVar28 = ~uVar17 >> 0x1f;
        uVar30 = uVar19;
        if ((int)uVar17 < local_200.ArrayNum) {
          uVar30 = uVar28;
        }
        if ((uVar30 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (fVar34 < *(float *)(local_200.AllocatorInstance.Data + uVar25) ||
            fVar34 == *(float *)(local_200.AllocatorInstance.Data + uVar25)) {
LAB_14295f5ec:
          uVar30 = uVar20;
          if ((int)uVar17 < local_1f0.ArrayNum) {
            uVar30 = uVar28;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar37 = *(float *)(local_1f0.AllocatorInstance.Data + uVar25);
        }
        else {
          uVar30 = uVar19;
          if ((int)uVar17 < local_200.ArrayNum) {
            uVar30 = uVar28;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar32 = (uint)*(float *)(local_200.AllocatorInstance.Data + uVar25);
          uVar30 = uVar19;
          if ((int)uVar32 < (this->RowFillCoefficients).ArrayNum) {
            uVar30 = ~uVar32 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(float *)((this->RowFillCoefficients).AllocatorInstance.Data +
                        (longlong)(int)uVar32 * 4) == 0.0) goto LAB_14295f5ec;
          uVar30 = uVar19;
          if ((int)uVar17 < local_200.ArrayNum) {
            uVar30 = uVar28;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar32 = (uint)*(float *)(local_200.AllocatorInstance.Data + uVar25);
          uVar30 = uVar20;
          if ((int)uVar32 < (this->RowFillCoefficients).ArrayNum) {
            uVar30 = ~uVar32 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar37 = (*(float *)((this->RowFillCoefficients).AllocatorInstance.Data +
                              (longlong)(int)uVar32 * 4) / fVar33) * fVar41;
        }
        uVar30 = uVar19;
        if ((int)uVar17 < local_210.ArrayNum) {
          uVar30 = uVar28;
        }
        if ((uVar30 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (ulonglong)(uVar17 + 1);
        *(float *)(local_210.AllocatorInstance.Data + uVar25) = fVar37;
        uVar25 = uVar25 + 4;
      } while ((int)(uVar17 + 1) < local_1f0.ArrayNum);
    }
    ComputePartialSums(&local_228);
    ComputePartialSums(&local_210);
    iVar12 = (this->Slots).Children.ArrayNum;
    local_218 = 0;
    local_230 = 0;
    uVar30 = 0xffffffff;
    local_1d8 = -1;
    fVar41 = 0.0;
    if (0 < iVar12) {
      local_1a8 = 0;
      local_234 = 0;
      local_1e0 = -4;
      EVar11 = EVisibility::Collapsed;
      do {
        lVar16 = local_1a8;
        uVar20 = 0;
        if ((int)local_230 < iVar12) {
          uVar20 = ~local_230 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), EVar11 = EVisibility::Collapsed, bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar16 = *(longlong *)((this->Slots).Children.AllocatorInstance.Data + lVar16);
        bVar3 = *(byte *)(*(longlong *)(lVar16 + 0x10) + 0x39);
        if ((TEnumAsByte<EVisibility::Private>)bVar3 != EVar11.Value.Value) {
          iVar12 = 0;
          uVar20 = *(int *)(lVar16 + 0x60) - 1;
          local_170 = CONCAT44(this->TotalColumns,(undefined4)local_170);
          if (-1 < (int)uVar20) {
            lVar26 = (longlong)(int)uVar20 * 0xc;
            do {
              uVar23 = 0;
              if ((int)uVar20 < *(int *)(lVar16 + 0x60)) {
                uVar23 = ~uVar20 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((double)*(float *)(*(longlong *)(lVar16 + 0x58) + lVar26) < dVar6) {
                uVar23 = 0;
                if ((int)uVar20 < *(int *)(lVar16 + 0x60)) {
                  uVar23 = ~uVar20 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_170 = *(undefined8 *)(*(longlong *)(lVar16 + 0x58) + (ulonglong)uVar20 * 0xc);
                iVar12 = *(int *)(*(longlong *)(lVar16 + 0x58) + 8 + (ulonglong)uVar20 * 0xc);
                uVar23 = local_218;
                EVar11.Value.Value = EVisibility::Collapsed.Value.Value;
                break;
              }
              lVar26 = lVar26 + -0xc;
              uVar20 = uVar20 - 1;
              uVar23 = local_218;
              EVar11.Value.Value = EVisibility::Collapsed.Value.Value;
            } while (-1 < (int)uVar20);
          }
          uVar20 = (uint)((ulonglong)local_170 >> 0x20);
          if (uVar20 != 0) {
            iVar18 = *(int *)(lVar16 + 0x50);
            if (iVar18 != local_1d8) {
              local_234 = local_234 + 1;
              local_1e0 = local_1e0 + 4;
              uVar23 = 0;
              uVar30 = uVar30 + 1;
              local_1d8 = iVar18;
              if (0 < iVar18) {
                fVar41 = fVar41 + fVar40;
              }
            }
            uVar17 = iVar12 + uVar23;
            uVar19 = uVar20 + uVar17;
            if ((int)uVar23 < (int)uVar19) {
              uVar23 = uVar19;
            }
            if (this->TotalColumns < (int)uVar23) {
              local_234 = local_234 + 1;
              uVar17 = 0;
              uVar30 = uVar30 + 1;
              local_1e0 = local_1e0 + 4;
              uVar23 = uVar20;
              uVar19 = uVar20;
            }
            uVar20 = 0;
            if ((int)uVar30 < local_210.ArrayNum) {
              uVar20 = ~uVar30 >> 0x1f;
            }
            local_218 = uVar23;
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar40 = *(float *)(local_210.AllocatorInstance.Data + local_1e0);
            uVar20 = 0;
            if ((int)uVar17 < local_228.ArrayNum) {
              uVar20 = ~uVar17 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar33 = *(float *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
            if (0 < (int)uVar17) {
              fVar33 = fVar33 + local_1c0;
            }
            uVar20 = 0;
            if ((int)local_234 < local_210.ArrayNum) {
              uVar20 = ~local_234 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar20 = 0;
            if ((int)uVar19 < local_228.ArrayNum) {
              uVar20 = ~uVar19 >> 0x1f;
            }
            fVar34 = *(float *)(local_210.AllocatorInstance.Data + local_1e0 + 4) - fVar40;
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar36 = *(float *)(lVar16 + 0x28);
            fVar35 = *(float *)(lVar16 + 0x2c);
            fVar7 = *(float *)(lVar16 + 0x30);
            fVar8 = *(float *)(lVar16 + 0x34);
            iVar12 = *(int *)(lVar16 + 0x38);
            fVar37 = *(float *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) -
                     fVar33;
            local_150 = fVar36;
            fStack_14c = fVar35;
            fStack_148 = fVar7;
            fStack_144 = fVar8;
            if (iVar12 == 0) {
LAB_14295fb2c:
              fVar39 = fVar37 - (fVar7 + fVar36);
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
            }
            else {
              FVar14 = SWidget::GetDesiredSize(*(SWidget **)(lVar16 + 0x10));
              fVar38 = fVar37 - (fVar7 + fVar36);
              fVar39 = *(float *)FVar14;
              if (fVar38 <= *(float *)FVar14) {
                fVar39 = fVar38;
              }
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
              if (iVar12 != 1) {
                if (iVar12 == 2) {
                  fVar36 = ((fVar37 - fVar39) * __real_3f000000 + fVar36) - fVar7;
                }
                else {
                  if (iVar12 != 3) goto LAB_14295fb2c;
                  fVar36 = (fVar37 - fVar39) - fVar7;
                }
              }
            }
            iVar12 = *(int *)(lVar16 + 0x3c);
            fVar37 = fVar34 - (fVar8 + fVar35);
            if (iVar12 == 0) {
              fStack_1ac = fVar37;
              if (fVar37 <= 0.0) {
                fStack_1ac = 0.0;
              }
            }
            else {
              FVar14 = SWidget::GetDesiredSize(*(SWidget **)(lVar16 + 0x10));
              fStack_1ac = *(float *)((longlong)FVar14 + 4);
              if (fVar37 <= *(float *)((longlong)FVar14 + 4)) {
                fStack_1ac = fVar37;
              }
              if (fStack_1ac <= 0.0) {
                fStack_1ac = 0.0;
              }
              if (iVar12 != 1) {
                if (iVar12 == 2) {
                  fVar35 = ((fVar34 - fStack_1ac) * __real_3f000000 + fVar35) - fVar8;
                }
                else if (iVar12 == 3) {
                  fVar35 = (fVar34 - fStack_1ac) - fVar8;
                }
                else {
                  fStack_1ac = fVar37;
                  if (fVar37 <= 0.0) {
                    fStack_1ac = 0.0;
                  }
                }
              }
            }
            local_1a0.Scale = 1.0;
            local_194._4_4_ = fStack_1ac;
            local_194._0_4_ = fVar39;
            local_1a0.Translation.field0_0x0._s_0.X = fVar36 + fVar33;
            local_1a0.Translation.field0_0x0._s_0.Y = fVar41 + fVar40 + fVar35;
            local_1b0 = fVar39;
            FGeometry::MakeChild
                      (local_188,(FArrangedWidget *)local_138,
                       (TSharedRef<SWidget,1> *)(lVar16 + 0x10),&local_194,&local_1a0);
            pFVar9 = local_180;
            if (((local_180->VisibilityFilter).Value.Value & bVar3) != 0) {
              FVar22 = (ForElementType<FArrangedWidget>)&local_180->Array;
              FVar4 = (local_180->Array).AllocatorInstance.SecondaryData;
              FVar15 = FVar22;
              if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
                FVar15 = FVar4;
              }
              if ((ulonglong)FVar15 <= local_138) {
                FVar15 = FVar22;
                if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
                  FVar15 = FVar4;
                }
                if ((local_138 <
                     (undefined1 *)((longlong)FVar15 + (longlong)(local_180->Array).ArrayMax * 0x48)
                    ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              iVar12 = (pFVar9->Array).ArrayNum;
              piVar1 = &(pFVar9->Array).ArrayMax;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                   (0x848,(ForElementType<FArrangedWidget> *)FVar22,piVar1);
              }
              (pFVar9->Array).ArrayNum = iVar12 + 1;
              FVar4 = (pFVar9->Array).AllocatorInstance.SecondaryData;
              lVar16 = (longlong)iVar12;
              if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
                FVar22 = FVar4;
              }
              pFVar2 = (FDeprecateSlateVector2D *)((longlong)FVar22 + lVar16 * 0x48);
              *pFVar2 = (FDeprecateSlateVector2D)local_138._0_8_;
              pFVar2[1] = (FDeprecateSlateVector2D)local_138._8_8_;
              *(undefined8 *)((uchar *)((longlong)FVar22 + 0x10) + lVar16 * 0x48) = local_138._16_8_
              ;
              *(undefined8 *)((uchar *)((longlong)FVar22 + 0x10) + lVar16 * 0x48 + 8) =
                   local_138._24_8_;
              *(float (*) [2])((uchar *)((longlong)FVar22 + 0x20) + lVar16 * 0x48) = local_118[0];
              *(float (*) [2])((uchar *)((longlong)FVar22 + 0x20) + lVar16 * 0x48 + 8) =
                   local_118[1];
              *(float (*) [2])((uchar *)((longlong)FVar22 + 0x30) + lVar16 * 0x48) = local_118[2];
              *(SWidget **)((uchar *)((longlong)FVar22 + 0x38) + lVar16 * 0x48) = local_100;
              *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar22 + 0x40) + lVar16 * 0x48)
                   = local_f8.ReferenceController;
              if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_f8.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8.ReferenceController);
            fVar40 = local_1bc;
            dVar6 = local_178;
            EVar11 = EVisibility::Collapsed;
          }
        }
        local_230 = local_230 + 1;
        iVar12 = (this->Slots).Children.ArrayNum;
        local_1a8 = local_1a8 + 8;
      } while ((int)local_230 < iVar12);
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  return;
}

// OnPaint @ 14297f7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SResponsiveGridPanel::OnPaint
          (SResponsiveGridPanel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  SWidget *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ForElementType<FArrangedWidget> FVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStackY_1f8 [32];
  FPaintArgs local_1b0;
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_180.VisibilityFilter = (EVisibility)EVisibility::All.Value.Value;
  local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_180.Array.ArrayNum = 0;
  local_180.bAllow3DWidgets = false;
  local_180.Array.ArrayMax = 4;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_180,false);
  local_1b0.RootGrid = param_1->RootGrid;
  local_1b0.CurrentGrid = param_1->CurrentGrid;
  local_1b0.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_1b0.CurrentTime = param_1->CurrentTime;
  local_1b0.DeltaTime = param_1->DeltaTime;
  local_1b0._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  uVar7 = 0;
  iVar4 = local_180.Array.ArrayNum;
  iVar8 = param_5;
  local_1b0.PaintParentPtr = (SWidget *)this;
  if (0 < local_180.Array.ArrayNum) {
    lVar9 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar4) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar4 = local_180.Array.ArrayNum, bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      FVar6 = (ForElementType<FArrangedWidget>)&local_180.Array;
      if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar6 = local_180.Array.AllocatorInstance.SecondaryData;
      }
      this_00 = *(SWidget **)(lVar9 + 0x38 + (longlong)FVar6);
      iVar5 = iVar8;
      if (((byte)this_00->VisibilityAttribute & 0x19) != 0) {
        if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        iVar5 = SWidget::Paint(this_00,&local_1b0,(FGeometry *)(lVar9 + (longlong)FVar6),param_3,
                               param_4,param_5,param_6,bVar2);
        iVar4 = local_180.Array.ArrayNum;
        if (iVar5 < iVar8) {
          iVar5 = iVar8;
        }
      }
      iVar8 = iVar5;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x48;
    } while ((int)uVar7 < iVar4);
  }
  FVar6 = (ForElementType<FArrangedWidget>)&local_180.Array;
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar6 = local_180.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar6,iVar4);
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
  }
  return iVar8;
}

// PrivateRegisterAttributes @ 142985810

void __cdecl SResponsiveGridPanel::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  FContainerInitializer local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  pFVar1 = ::FName::FName(local_res10,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_48,*pFVar1,0x218);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res10,"Slot.Padding");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&local_48,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// RemoveSlot @ 142989cf0

bool __thiscall
SResponsiveGridPanel::RemoveSlot(SResponsiveGridPanel *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SResponsiveGridPanel::FSlot>::Remove(&this->Slots,param_1);
  return iVar1 != -1;
}

// SetRowFill @ 142998ab0

void __thiscall
SResponsiveGridPanel::SetRowFill(SResponsiveGridPanel *this,int param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->RowFillCoefficients).ArrayNum;
  if (iVar1 <= param_1) {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->RowFillCoefficients,(param_1 - iVar1) + 1);
  }
  uVar4 = 0;
  if (param_1 < (this->RowFillCoefficients).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)((this->RowFillCoefficients).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  return;
}

