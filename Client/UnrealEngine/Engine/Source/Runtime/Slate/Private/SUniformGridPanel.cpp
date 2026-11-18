// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SUniformGridPanel @ 1429bb430

SUniformGridPanel * __thiscall SUniformGridPanel::SUniformGridPanel(SUniformGridPanel *this)

{
  TSlateAttribute<FMargin,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  SUniformGridPanel *pSVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SUniformGridPanel__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_UFSlot_SUniformGridPanel____6B_;
  pSVar6 = this + 1;
  pTVar1 = &this->SlotPadding;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->SlotPadding).field_0x8 = 0;
  if ((pTVar1 < this) || (pSVar6 <= pTVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SUniformGridPanel *)(*pcVar3)();
      return pSVar6;
    }
  }
  *(undefined8 *)&(this->CollapsedColumns).Elements.field_0x8 = 0;
  pTVar2 = &this->MinDesiredSlotWidth;
  *(undefined8 *)&(this->CollapsedColumns).Elements = 0;
  *(undefined8 *)&(this->CollapsedColumns).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CollapsedColumns).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CollapsedColumns).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CollapsedColumns).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollapsedColumns).Elements.field_0x34 = 0;
  (this->CollapsedColumns).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CollapsedColumns).HashSize = 0;
  *(undefined8 *)&(this->CollapsedRows).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CollapsedRows).Elements = 0;
  *(undefined8 *)&(this->CollapsedRows).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CollapsedRows).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CollapsedRows).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CollapsedRows).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollapsedRows).Elements.field_0x34 = 0;
  (this->CollapsedRows).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CollapsedRows).HashSize = 0;
  *(undefined4 *)&pTVar2->field_0x0 = 0;
  iVar5 = _finite(0.0);
  if (iVar5 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((pTVar2 < this) || (pSVar6 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SUniformGridPanel *)(*pcVar3)();
      return pSVar6;
    }
  }
  pTVar2 = &this->MinDesiredSlotHeight;
  *(undefined4 *)&pTVar2->field_0x0 = 0;
  iVar5 = _finite(0.0);
  if (iVar5 == 0) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res10);
  }
  if ((pTVar2 < this) || (pSVar6 <= pTVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SUniformGridPanel *)(*pcVar3)();
      return pSVar6;
    }
  }
  return this;
}

// ~SUniformGridPanel @ 1429c0290

void __thiscall SUniformGridPanel::~SUniformGridPanel(SUniformGridPanel *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7SUniformGridPanel__6B_;
  (this->CollapsedRows).HashSize = 0;
  FVar1 = (this->CollapsedRows).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CollapsedRows).Elements);
  (this->CollapsedColumns).HashSize = 0;
  FVar1 = (this->CollapsedColumns).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CollapsedColumns).Elements);
  DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddSlot @ 1429c5ae0

FScopedWidgetSlotArguments * __thiscall
SUniformGridPanel::AddSlot
          (SUniformGridPanel *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1,
          int param_2)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x30);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8[1]._padding_ = 0;
    local_res8->_padding_ = (longlong)&___7FSlot_SUniformGridPanel__6B_;
    *(int *)&local_res8[1].Owner = param_1;
    *(int *)((longlong)&local_res8[1].Owner + 4) = param_2;
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Children = &this->Children;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ClearChildren @ 1429cd1f0

void __thiscall SUniformGridPanel::ClearChildren(SUniformGridPanel *this)

{
  int *piVar1;
  TArray<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Children).Children;
  this->NumColumns = 0;
  this->NumRows = 0;
  piVar1 = &(this->Children).Children.ArrayMax;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Children).Children.ArrayNum;
  local_10._4_4_ = (this->Children).Children.ArrayMax;
  *piVar1 = 0;
  (this->Children).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
             local_18.Data,(int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
              ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Children).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Children).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformGridPanel::FSlot,TDefaultDelete<SUniformGridPanel::FSlot>_> *)
             local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1429cf020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector2<double> * __thiscall
SUniformGridPanel::ComputeDesiredSize
          (SUniformGridPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TVector2<double> *pTVar8;
  FDeprecateSlateVector2D FVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar22;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0 [2];
  uint local_198 [2];
  undefined4 local_190;
  undefined4 local_18c;
  float local_188;
  float fStack_184;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  int local_168;
  int local_164;
  int local_160 [6];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_148;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  ulonglong local_a8;
  double dVar21;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  fVar15 = *(float *)&(this->SlotPadding).field_0x8 + *(float *)&this->SlotPadding;
  fVar16 = *(float *)&(this->SlotPadding).field_0xc + *(float *)&(this->SlotPadding).field_0x4;
  uVar13 = 0;
  uVar17 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar19 = (undefined4)((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar20 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar22 = (undefined4)((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  TVar1 = this->MinDesiredSlotWidth;
  local_180 = CONCAT44(fVar16,fVar15);
  TVar2 = this->MinDesiredSlotHeight;
  this->NumColumns = 0;
  this->NumRows = 0;
  local_188 = fVar15;
  fStack_184 = fVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->CollapsedColumns);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->CollapsedRows);
  iVar10 = (this->Children).Children.ArrayNum;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  uVar14 = uVar13;
  if (0 < iVar10) {
    do {
      uVar12 = (uint)uVar13;
      uVar6 = 0;
      if ((int)uVar12 < iVar10) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_1b0 = (longlong)iVar10;
        local_1b8 = (longlong)(int)uVar12;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector2<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      lVar3 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + uVar14);
      iVar7 = *(int *)(lVar3 + 0x28) + 1;
      iVar10 = this->NumColumns;
      if (this->NumColumns < iVar7) {
        iVar10 = iVar7;
      }
      this->NumColumns = iVar10;
      iVar7 = *(int *)(lVar3 + 0x2c) + 1;
      iVar10 = this->NumRows;
      if (this->NumRows < iVar7) {
        iVar10 = iVar7;
      }
      this->NumRows = iVar10;
      uVar6 = *(uint *)(lVar3 + 0x28);
      if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(*(longlong *)(lVar3 + 0x10) + 0x39) ==
          EVisibility::Collapsed.Value.Value) {
        if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_f8.Hash;
          if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_f8.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar11 + (ulonglong)(local_f8.HashSize - 1U & uVar6) * 4)
              ; iVar10 != -1;
              iVar10 = *(int *)(local_f8.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
            if (*(uint *)(local_f8.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar6)
            goto LAB_1429cf277;
          }
        }
        local_1a8 = uVar6;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (&this->CollapsedColumns,&local_168,(bool *)&local_1a8);
LAB_1429cf277:
        uVar6 = *(uint *)(lVar3 + 0x2c);
        if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)&local_148.Hash;
          if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = local_148.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar11 + (ulonglong)(local_148.HashSize - 1U & uVar6) * 4
                                ); iVar10 != -1;
              iVar10 = *(int *)(local_148.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
            if (*(uint *)(local_148.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar6)
            goto LAB_1429cf3de;
          }
        }
        local_1a4 = uVar6;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (&this->CollapsedRows,&local_164,(bool *)&local_1a4);
      }
      else {
        local_1a0[0] = uVar6;
        if (*(int *)&(this->CollapsedColumns).Elements.field_0x8 !=
            *(int *)&(this->CollapsedColumns).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&this->CollapsedColumns,uVar6,(int *)local_1a0);
        }
        local_198[0] = *(uint *)(lVar3 + 0x2c);
        if (*(int *)&(this->CollapsedRows).Elements.field_0x8 !=
            *(int *)&(this->CollapsedRows).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&this->CollapsedRows,local_198[0],(int *)local_198);
        }
        local_190 = *(undefined4 *)(lVar3 + 0x28);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (&local_f8,local_160,(bool *)&local_190);
        local_18c = *(undefined4 *)(lVar3 + 0x2c);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (&local_148,(int *)&local_188,(bool *)&local_18c);
        FVar9 = SWidget::GetDesiredSize(*(SWidget **)(lVar3 + 0x10));
        local_178 = fVar15 + *(float *)FVar9;
        fStack_174 = fVar16 + *(float *)((longlong)FVar9 + 4);
        local_170 = CONCAT44(fStack_174,local_178);
        dVar18 = (double)local_178;
        if ((double)local_178 <= (double)(float)TVar1) {
          dVar18 = (double)(float)TVar1;
        }
        if (dVar18 <= (double)CONCAT44(uVar19,uVar17)) {
          dVar18 = (double)CONCAT44(uVar19,uVar17);
        }
        dVar21 = (double)fStack_174;
        if ((double)fStack_174 <= (double)(float)TVar2) {
          dVar21 = (double)(float)TVar2;
        }
        uVar17 = SUB84(dVar18,0);
        uVar19 = (undefined4)((ulonglong)dVar18 >> 0x20);
        if (dVar21 <= (double)CONCAT44(uVar22,uVar20)) {
          dVar21 = (double)CONCAT44(uVar22,uVar20);
        }
        uVar20 = SUB84(dVar21,0);
        uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
LAB_1429cf3de:
      iVar10 = (this->Children).Children.ArrayNum;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar12 + 1) < iVar10);
  }
  iVar7 = (this->NumColumns - *(int *)&(this->CollapsedColumns).Elements.field_0x8) +
          *(int *)&(this->CollapsedColumns).Elements.field_0x34;
  this->NumColumns = iVar7;
  iVar10 = (*(int *)&(this->CollapsedRows).Elements.field_0x34 -
           *(int *)&(this->CollapsedRows).Elements.field_0x8) + this->NumRows;
  this->NumRows = iVar10;
  local_148.HashSize = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar10 * (double)CONCAT44(uVar22,uVar20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)iVar7 * (double)CONCAT44(uVar19,uVar17);
  if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148.Elements);
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  return __return_storage_ptr__;
}

// Construct @ 1429d8d90

void __thiscall SUniformGridPanel::Construct(SUniformGridPanel *this,FArguments *param_1)

{
  TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SlotPadding,(SWidget *)this,&param_1->_SlotPadding,None);
  this->NumColumns = 0;
  this->NumRows = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotWidth,(SWidget *)this,&param_1->_MinDesiredSlotWidth,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotHeight,(SWidget *)this,&param_1->_MinDesiredSlotHeight,None);
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SUniformGridPanel::FSlot>::AddSlots(&this->Children,&local_18);
  return;
}

// GetChildren @ 1429ea730

FChildren * __thiscall SUniformGridPanel::GetChildren(SUniformGridPanel *this)

{
  return (FChildren *)&this->Children;
}

// OnArrangeChildren @ 1429f84a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SUniformGridPanel::OnArrangeChildren
          (SUniformGridPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  FDeprecateSlateVector2D *pFVar2;
  float fVar3;
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  ForElementType<FArrangedWidget> FVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FDeprecateSlateVector2D FVar11;
  ForElementType<FArrangedWidget> FVar12;
  longlong lVar13;
  ForElementType<FArrangedWidget> FVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_1c8 [32];
  undefined8 local_178;
  undefined8 local_170;
  FSlateLayoutTransform local_168;
  FGeometry *local_158;
  undefined1 local_138 [32];
  float local_118 [3] [2];
  SWidget *local_100;
  FSharedReferencer<1> local_f8;
  ulonglong local_e8;
  
  fVar7 = __real_3f000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iVar10 = (this->Children).Children.ArrayNum;
  if (0 < iVar10) {
    local_170 = param_1->Size;
    uVar15 = 0;
    lVar16 = 0;
    local_178._0_4_ = (float)local_170;
    fVar18 = (float)local_178 / (float)this->NumColumns;
    fVar17 = local_170._4_4_ / (float)this->NumRows;
    local_158 = param_1;
    do {
      uVar9 = 0;
      if ((int)uVar15 < iVar10) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar13 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar16);
      TVar4 = (*(SWidget **)(lVar13 + 0x10))->VisibilityAttribute;
      if (((param_2->VisibilityFilter).Value.Value & (byte)TVar4) != 0) {
        fVar3 = *(float *)&(this->SlotPadding).field_0x8;
        fVar19 = *(float *)&this->SlotPadding;
        iVar10 = *(int *)(lVar13 + 0x20);
        fVar21 = fVar18 - (fVar3 + fVar19);
        if (iVar10 == 0) {
LAB_1429f867b:
          local_178._0_4_ = fVar21;
          if (fVar21 <= 0.0) {
            local_178._0_4_ = 0.0;
          }
        }
        else {
          FVar11 = SWidget::GetDesiredSize(*(SWidget **)(lVar13 + 0x10));
          local_178._0_4_ = fVar21;
          if (*(float *)FVar11 <= fVar21) {
            local_178._0_4_ = *(float *)FVar11;
          }
          if ((float)local_178 <= 0.0) {
            local_178._0_4_ = 0.0;
          }
          if (iVar10 != 1) {
            if (iVar10 == 2) {
              fVar19 = ((fVar18 - (float)local_178) * fVar7 + fVar19) - fVar3;
            }
            else {
              if (iVar10 != 3) goto LAB_1429f867b;
              fVar19 = (fVar18 - (float)local_178) - fVar3;
            }
          }
        }
        fVar3 = *(float *)&(this->SlotPadding).field_0xc;
        fVar21 = *(float *)&(this->SlotPadding).field_0x4;
        iVar10 = *(int *)(lVar13 + 0x24);
        fVar20 = fVar17 - (fVar3 + fVar21);
        if (iVar10 == 0) {
LAB_1429f8712:
          local_178._4_4_ = fVar20;
          if (fVar20 <= 0.0) {
            local_178._4_4_ = 0.0;
          }
        }
        else {
          FVar11 = SWidget::GetDesiredSize(*(SWidget **)(lVar13 + 0x10));
          local_178._4_4_ = *(float *)((longlong)FVar11 + 4);
          if (fVar20 <= *(float *)((longlong)FVar11 + 4)) {
            local_178._4_4_ = fVar20;
          }
          if (local_178._4_4_ <= 0.0) {
            local_178._4_4_ = 0.0;
          }
          if (iVar10 != 1) {
            if (iVar10 == 2) {
              fVar21 = ((fVar17 - local_178._4_4_) * fVar7 + fVar21) - fVar3;
            }
            else {
              if (iVar10 != 3) goto LAB_1429f8712;
              fVar21 = (fVar17 - local_178._4_4_) - fVar3;
            }
          }
        }
        local_168.Scale = 1.0;
        iVar10 = UE::Slate::Private::GetAdjustedIndex
                           (*(int *)(lVar13 + 0x28),&this->CollapsedColumns);
        local_168.Translation.field0_0x0._s_0.X = (float)iVar10 * fVar18 + fVar19;
        iVar10 = UE::Slate::Private::GetAdjustedIndex(*(int *)(lVar13 + 0x2c),&this->CollapsedRows);
        local_170 = local_178;
        local_168.Translation.field0_0x0._s_0.Y = (float)iVar10 * fVar17 + fVar21;
        FGeometry::MakeChild
                  (local_158,(FArrangedWidget *)local_138,(TSharedRef<SWidget,1> *)(lVar13 + 0x10),
                   (FDeprecateVector2DParameter *)&local_170,&local_168);
        if (((param_2->VisibilityFilter).Value.Value & (byte)TVar4) != 0) {
          FVar14 = (ForElementType<FArrangedWidget>)&param_2->Array;
          FVar5 = (param_2->Array).AllocatorInstance.SecondaryData;
          FVar12 = FVar14;
          if (FVar5 != (ForElementType<FArrangedWidget>)0x0) {
            FVar12 = FVar5;
          }
          if ((ulonglong)FVar12 <= local_138) {
            FVar12 = FVar14;
            if (FVar5 != (ForElementType<FArrangedWidget>)0x0) {
              FVar12 = FVar5;
            }
            if ((local_138 <
                 (undefined1 *)((longlong)FVar12 + (longlong)(param_2->Array).ArrayMax * 0x48)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar10 = (param_2->Array).ArrayNum;
          piVar1 = &(param_2->Array).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                               (0x848,(ForElementType<FArrangedWidget> *)FVar14,piVar1);
          }
          (param_2->Array).ArrayNum = iVar10 + 1;
          FVar5 = (param_2->Array).AllocatorInstance.SecondaryData;
          lVar13 = (longlong)iVar10;
          if (FVar5 != (ForElementType<FArrangedWidget>)0x0) {
            FVar14 = FVar5;
          }
          pFVar2 = (FDeprecateSlateVector2D *)((longlong)FVar14 + lVar13 * 0x48);
          *pFVar2 = (FDeprecateSlateVector2D)local_138._0_8_;
          pFVar2[1] = (FDeprecateSlateVector2D)local_138._8_8_;
          *(undefined8 *)((uchar *)((longlong)FVar14 + 0x10) + lVar13 * 0x48) = local_138._16_8_;
          *(undefined8 *)((uchar *)((longlong)FVar14 + 0x10) + lVar13 * 0x48 + 8) = local_138._24_8_
          ;
          *(float (*) [2])((uchar *)((longlong)FVar14 + 0x20) + lVar13 * 0x48) = local_118[0];
          *(float (*) [2])((uchar *)((longlong)FVar14 + 0x20) + lVar13 * 0x48 + 8) = local_118[1];
          *(float (*) [2])((uchar *)((longlong)FVar14 + 0x30) + lVar13 * 0x48) = local_118[2];
          *(SWidget **)((uchar *)((longlong)FVar14 + 0x38) + lVar13 * 0x48) = local_100;
          *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar14 + 0x40) + lVar13 * 0x48) =
               local_f8.ReferenceController;
          if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.ReferenceController);
      }
      iVar10 = (this->Children).Children.ArrayNum;
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar15 < iVar10);
  }
  return;
}

// RemoveSlot @ 142a05bd0

bool __thiscall
SUniformGridPanel::RemoveSlot(SUniformGridPanel *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SUniformGridPanel::FSlot>::Remove(&this->Children,param_1);
  return iVar1 != -1;
}

// SetMinDesiredSlotHeight @ 142a0ad90

void __thiscall
SUniformGridPanel::SetMinDesiredSlotHeight(SUniformGridPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotHeight,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetMinDesiredSlotWidth @ 142a0ae30

void __thiscall
SUniformGridPanel::SetMinDesiredSlotWidth(SUniformGridPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotWidth,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetSlotPadding @ 142a0bd90

void __thiscall
SUniformGridPanel::SetSlotPadding(SUniformGridPanel *this,TAttribute<FMargin> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SlotPadding,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// Slot @ 142a0e400

FSlotArguments * __cdecl
SUniformGridPanel::Slot(FSlotArguments *__return_storage_ptr__,int param_1,int param_2)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x30);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8[1]._padding_ = 0;
    local_res8->_padding_ = (longlong)&___7FSlot_SUniformGridPanel__6B_;
    *(int *)&local_res8[1].Owner = param_1;
    *(int *)((longlong)&local_res8[1].Owner + 4) = param_2;
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)&local_res8);
  return __return_storage_ptr__;
}

