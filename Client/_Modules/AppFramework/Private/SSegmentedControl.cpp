// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 11

// ~SSegmentedControl<int> @ 142f382b0

void __thiscall SSegmentedControl<int>::~SSegmentedControl<int>(SSegmentedControl<int> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UniformPadding).Getter);
  pvVar1 = *(void **)&(this->UniformPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UniformPadding).Getter);
  if (*(void **)&this->CurrentValues != (void *)0x0) {
    FMemory::Free(*(void **)&this->CurrentValues);
  }
  TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy>
            (&this->OnValueChecked);
  TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
            (&this->OnValuesChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  DestructItems<TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>,int>
            ((TUniquePtr<SSegmentedControl<int>::FSlot,TDefaultDelete<SSegmentedControl<int>::FSlot>_>
              *)(this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum)
  ;
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142f479b0

ECheckBoxState __thiscall
`SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>::operator()(void *this)

{
  void *_Src;
  ForAnyElementType FVar1;
  ECheckBoxState EVar2;
  longlong lVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = *(int *)(*(longlong *)this + 0x328);
  lVar3 = (longlong)local_10;
  _Src = *(void **)(*(longlong *)this + 800);
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar3 << 2);
  }
  if (local_18.Data != local_18.Data + (longlong)local_10 * 4) {
    FVar1.Data = local_18.Data;
    do {
      if (*(int *)FVar1.Data == *(int *)((longlong)this + 8)) {
        EVar2 = Checked;
        goto LAB_142f47a52;
      }
      FVar1.Data = FVar1.Data + 4;
    } while (FVar1.Data != local_18.Data + (longlong)local_10 * 4);
  }
  EVar2 = Unchecked;
LAB_142f47a52:
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return EVar2;
}

// operator() @ 142f48a10

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`SSegmentedControl<int>::SetValue'::__l5::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = (FScriptContainerElement *)TAttribute<int>::Get(this);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= pFVar5) && (pFVar5 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 4) = *(int *)pFVar5;
  return __return_storage_ptr__;
}

// operator() @ 142f48c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
`SSegmentedControl<int>::RebuildChildren'::__l7::<lambda_1>::operator()
          (void *this,TVector2<double> *__return_storage_ptr__)

{
  bool bVar1;
  FSlateBrush **ppFVar2;
  FText *this_00;
  TVector2<double>_u_0 TVar3;
  double local_18;
  double dStack_10;
  
  ppFVar2 = TAttribute<FSlateBrush_const_*>::Get
                      ((TAttribute<FSlateBrush_const_*> *)(*(longlong *)this + 0xb8));
  TVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (*ppFVar2 != (FSlateBrush *)0x0) {
    this_00 = TAttribute<FText>::Get((TAttribute<FText> *)(*(longlong *)this + 0x28));
    bVar1 = FText::IsEmpty(this_00);
    TVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    if (!bVar1) {
      TVar3 = ___xmm_3ff00000000000004020000000000000;
    }
  }
  local_18 = TVar3._s_0.X;
  dStack_10 = TVar3._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_10;
  return __return_storage_ptr__;
}

// CommitValue @ 142f5c220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSegmentedControl<int>::CommitValue(SSegmentedControl<int> *this,ECheckBoxState param_1,int param_2)

{
  TDelegate<void___cdecl(int,ECheckBoxState),FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FModifierKeysState FVar6;
  FSlateApplication *pFVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  longlong *plVar10;
  FReadAccessScope *__return_storage_ptr__;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  TSlateAttribute<TArray<int,TSizedDefaultAllocator<32>_>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_01;
  int local_res18 [2];
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec [3];
  TSlateAttribute<TArray<int,TSizedDefaultAllocator<32>_>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *local_e0;
  FScriptContainerElement *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  __return_storage_ptr__ = &local_68;
  this_01 = &this->CurrentValues;
  iVar16 = 0;
  local_f0 = *(int *)&(this->CurrentValues).field_0x8;
  lVar12 = (longlong)local_f0;
  _Src = *(void **)this_01;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = param_2;
  local_e0 = this_01;
  if (local_f0 == 0) {
    local_ec[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f0,0,&local_f8,local_f0,local_ec);
    memcpy(local_f8.Data,_Src,lVar12 << 2);
  }
  iVar11 = local_f0;
  FVar8.Data = local_f8.Data;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = local_f0;
  if (local_f0 == 0) {
    local_118.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_f0,0,&local_118.AllocatorInstance,local_f0,&local_118.ArrayMax);
    memcpy(local_118.AllocatorInstance.Data,FVar8.Data,(longlong)iVar11 << 2);
  }
  if (((param_1 != Checked) && (local_118.ArrayNum == 1)) && (this->SupportsEmptySelection == false)
     ) {
    UpdateCheckboxValuesIfNeeded(this);
    goto LAB_142f5c814;
  }
  if (this->SupportsMultiSelection == false) {
LAB_142f5c370:
    if (param_1 == Checked) {
LAB_142f5c4df:
      local_118.ArrayNum = 0;
      if (local_118.ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_118.AllocatorInstance,0,&local_118.ArrayMax);
      }
      if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 <
           local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_118.ArrayNum == local_118.ArrayMax) {
        local_118.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_118.AllocatorInstance,&local_118.ArrayMax);
      }
      *(int *)(local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 4) = local_res18[0]
      ;
      local_118.ArrayNum = local_118.ArrayNum + 1;
    }
    else {
      for (FVar8.Data = local_118.AllocatorInstance.Data;
          FVar8.Data != local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 4;
          FVar8.Data = FVar8.Data + 4) {
        if (*(int *)FVar8.Data == local_res18[0]) goto LAB_142f5c4df;
      }
    }
    bVar4 = false;
  }
  else {
    pFVar7 = FSlateApplication::Get();
    FVar6 = FSlateApplication::GetModifierKeys(pFVar7);
    if ((*(byte *)CONCAT62(extraout_var,FVar6) & 3) == 0) {
      pFVar7 = FSlateApplication::Get();
      FVar6 = FSlateApplication::GetModifierKeys(pFVar7);
      if ((*(byte *)CONCAT62(extraout_var_00,FVar6) & 0xc) == 0) goto LAB_142f5c370;
    }
    bVar4 = true;
    if (param_1 == Checked) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_118,local_res18);
    }
    else {
      if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)local_res18) &&
          ((FScriptContainerElement *)local_res18 <
           local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8.Data = local_118.AllocatorInstance.Data;
      lVar12 = (longlong)local_118.ArrayNum;
      if (local_118.ArrayNum != 0) {
        bVar4 = *(int *)local_118.AllocatorInstance.Data != local_res18[0];
        lVar13 = 0;
        iVar11 = local_res18[0];
        iVar14 = 0;
        do {
          iVar15 = iVar14;
          do {
            lVar13 = lVar13 + 1;
            iVar15 = iVar15 + 1;
            if (lVar12 <= lVar13) break;
          } while (bVar4 == (*(int *)(FVar8.Data + lVar13 * 4) != iVar11));
          if (bVar4 != false) {
            if (iVar16 != iVar14) {
              memmove(FVar8.Data + (longlong)iVar16 * 4,FVar8.Data + (longlong)iVar14 * 4,
                      (longlong)(iVar15 - iVar14) << 2);
              iVar11 = local_res18[0];
            }
            iVar16 = iVar16 + (iVar15 - iVar14);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar14 = iVar15;
        } while (lVar13 < lVar12);
        bVar4 = true;
        this_01 = local_e0;
        local_118.ArrayNum = iVar16;
      }
    }
  }
  if (this->CurrentValuesIsBound == false) {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)this_01,(SWidget *)this,&local_118);
    UpdateCheckboxValuesIfNeeded(this);
  }
  this_00 = &this->OnValueChecked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_c8);
  if ((*(int *)&(this->OnValueChecked).field_0x10 == 0) ||
     (plVar10 = *(longlong **)&(this->OnValueChecked).field_0x8, plVar10 == (longlong *)0x0)) {
LAB_142f5c6fb:
    __return_storage_ptr__ = &local_c8;
  }
  else {
    cVar5 = (**(code **)(*plVar10 + 0x38))();
    if (cVar5 == '\0') goto LAB_142f5c6fb;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c8);
    iVar16 = local_f0;
    if ((!bVar4) && (param_1 == Checked)) {
      pFVar1 = local_f8.Data + (longlong)local_f0 * 4;
      FVar8.Data = local_f8.Data;
      while( true ) {
        if (local_f0 != iVar16) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar8.Data == pFVar1) break;
        iVar11 = *(int *)FVar8.Data;
        for (FVar9.Data = local_118.AllocatorInstance.Data;
            FVar9.Data != local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 4;
            FVar9.Data = FVar9.Data + 4) {
          if (*(int *)FVar9.Data == iVar11) goto LAB_142f5c6ae;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_80);
        plVar10 = (longlong *)0x0;
        if (*(int *)&(this->OnValueChecked).field_0x10 != 0) {
          plVar10 = *(longlong **)&(this->OnValueChecked).field_0x8;
        }
        (**(code **)(*plVar10 + 0x60))(plVar10,iVar11,0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
LAB_142f5c6ae:
        FVar8.Data = FVar8.Data + 4;
      }
    }
    iVar16 = local_res18[0];
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               __return_storage_ptr__);
    if (*(int *)&(this->OnValueChecked).field_0x10 == 0) {
      (**(code **)(_DAT_00000000 + 0x60))(0,iVar16,param_1);
    }
    else {
      plVar10 = *(longlong **)&(this->OnValueChecked).field_0x8;
      (**(code **)(*plVar10 + 0x60))(plVar10,iVar16,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (__return_storage_ptr__);
  iVar16 = local_res18[0];
  if (param_1 == Checked) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               &local_b0);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar10 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x68))(plVar10,iVar16);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
  }
  FVar8.Data = local_118.AllocatorInstance.Data;
  lVar12 = (longlong)local_118.ArrayNum;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = CONCAT44(local_100._4_4_,local_118.ArrayNum);
  if (local_118.ArrayNum == 0) {
    local_100 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_118.ArrayNum,0,&local_108,local_118.ArrayNum,
               (int *)((longlong)&local_100 + 4));
    memcpy(local_108.Data,FVar8.Data,lVar12 << 2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValuesChanged,
             &local_98);
  if ((*(int *)&(this->OnValuesChanged).field_0x10 != 0) &&
     (plVar10 = *(longlong **)&(this->OnValuesChanged).field_0x8, plVar10 != (longlong *)0x0)) {
    local_d8 = local_108.Data;
    local_d0 = (undefined4)local_100;
    local_cc = local_100._4_4_;
    local_100 = 0;
    local_108.Data = (FScriptContainerElement *)0x0;
    (**(code **)(*plVar10 + 0x68))(plVar10,&local_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
LAB_142f5c814:
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// Construct @ 142f66ae0

void __thiscall SSegmentedControl<int>::Construct(SSegmentedControl<int> *this,FArguments *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  FSlotArguments *pFVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  FSlotArguments *pFVar11;
  uint uVar12;
  longlong lVar13;
  TDelegateBase<FNotThreadSafeDelegateMode> local_f8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_e0;
  TAttribute<int> local_c8;
  TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> local_a8;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if (param_1->_Style == (FSegmentedControlStyle *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                       ,0xbb,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->Style = param_1->_Style;
  this->TextStyle = param_1->_TextStyle;
  this->SupportsMultiSelection = param_1->_SupportsMultiSelection;
  this->SupportsEmptySelection = param_1->_SupportsEmptySelection;
  this->CurrentValuesIsBound = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Value).Getter,
             &local_78);
  if ((*(int *)&(param_1->_Value).Getter.field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(param_1->_Value).Getter.field_0x8, plVar3 == (longlong *)0x0)) {
LAB_142f66da1:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if ((param_1->_Value).bIsSet == false) {
      bVar9 = TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::IsBound(&param_1->_Values);
      if ((bVar9) || ((param_1->_Values).bIsSet != false)) {
        local_a8.Value.ArrayNum = (param_1->_Values).Value.ArrayNum;
        lVar13 = (longlong)local_a8.Value.ArrayNum;
        _Src = (param_1->_Values).Value.AllocatorInstance.Data;
        local_a8.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_a8.Value.ArrayNum == 0) {
          local_a8.Value.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_a8.Value.ArrayNum,0,(ForAnyElementType *)&local_a8,
                     local_a8.Value.ArrayNum,&local_a8.Value.ArrayMax);
          memcpy(local_a8.Value.AllocatorInstance.Data,_Src,lVar13 << 2);
        }
        local_a8.bIsSet = (param_1->_Values).bIsSet;
        TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
        ::
        TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  (&local_a8.Getter,&(param_1->_Values).Getter);
        SetValues(this,&local_a8,false);
      }
      goto LAB_142f66c01;
    }
  }
  else {
    cVar10 = (**(code **)(*plVar3 + 0x38))();
    if (cVar10 == '\0') goto LAB_142f66da1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
  }
  local_c8.Value = (param_1->_Value).Value;
  local_c8.bIsSet = (param_1->_Value).bIsSet;
  local_c8.Getter._0_8_ = 0;
  local_c8.Getter._8_8_ = 0;
  local_c8.Getter._16_4_ = 0;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_c8.Getter,&(param_1->_Value).Getter);
  SetValue(this,&local_c8,false);
LAB_142f66c01:
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  if (&param_1->_OnValuesChanged != &this->OnValuesChanged) {
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_f8._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnValuesChanged,
               &local_60);
    if ((*(int *)&(param_1->_OnValuesChanged).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnValuesChanged).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValuesChanged,&local_f8);
    TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                *)&local_f8);
  }
  if (&param_1->_OnValueChecked != &this->OnValueChecked) {
    local_e0._0_8_ = 0;
    local_e0._8_8_ = 0;
    local_e0._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnValueChecked,
               &local_48);
    if ((*(int *)&(param_1->_OnValueChecked).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnValueChecked).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChecked,&local_e0);
    TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(int,enum_ECheckBoxState),FDefaultDelegateUserPolicy>(&local_e0);
  }
  fVar6 = (param_1->_UniformPadding).Value.Top;
  fVar7 = (param_1->_UniformPadding).Value.Right;
  fVar8 = (param_1->_UniformPadding).Value.Bottom;
  (this->UniformPadding).Value.Left = (param_1->_UniformPadding).Value.Left;
  (this->UniformPadding).Value.Top = fVar6;
  (this->UniformPadding).Value.Right = fVar7;
  (this->UniformPadding).Value.Bottom = fVar8;
  (this->UniformPadding).bIsSet = (param_1->_UniformPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->UniformPadding).Getter,&(param_1->_UniformPadding).Getter);
  this->MaxSegmentsPerLine = param_1->_MaxSegmentsPerLine;
  pFVar4 = (FSlotArguments *)(param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_1->_Slots).ArrayNum;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  iVar2 = (this->Children).Children.ArrayNum;
  uVar12 = iVar2 + iVar1;
  if (-1 < (int)uVar12) {
    if ((this->Children).Children.ArrayMax < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar12,&(this->Children).Children.AllocatorInstance,iVar2,
                 &(this->Children).Children.ArrayMax);
    }
    for (pFVar11 = pFVar4; pFVar11 != pFVar4 + iVar1; pFVar11 = pFVar11 + 1) {
      TPanelChildren<SSegmentedControl<int>::FSlot>::AddSlot(&this->Children,pFVar11);
    }
    DestructItems<SSegmentedControl<int>::FSlot::FSlotArguments,int>(pFVar4,iVar1);
    if (pFVar4 != (FSlotArguments *)0x0) {
      FMemory::Free(pFVar4);
    }
    RebuildChildren(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// RebuildChildren @ 143004930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SSegmentedControl<int>::RebuildChildren(SSegmentedControl<int> *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  byte *pbVar3;
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar4;
  atomic<int> aVar5;
  FSegmentedControlStyle *pFVar6;
  longlong lVar7;
  SHorizontalBox *pSVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  SBorder *pSVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  TReferenceControllerBase<1> *pTVar22;
  SCheckBox *this_00;
  FSharedReferencer<1> FVar23;
  undefined4 uVar24;
  uint uVar25;
  bool bVar26;
  char cVar27;
  ECheckBoxState EVar28;
  byte bVar29;
  bool bVar30;
  uint uVar31;
  int iVar32;
  FArguments *pFVar33;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SUniformGridPanel,1> *pTVar34;
  undefined8 *puVar35;
  ulong64 uVar36;
  FArguments *pFVar37;
  FSlot *this_02;
  FSlot *pFVar38;
  undefined8 uVar39;
  FText *this_03;
  FSizeParam *pFVar40;
  FArguments *pFVar41;
  TSharedRef<SImage,1> *pTVar42;
  FSlot *pFVar43;
  FArguments *pFVar44;
  TSharedRef<SSpacer,1> *pTVar45;
  FArguments *pFVar46;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<STextBlock,1> *pTVar47;
  TSharedRef<SHorizontalBox,1> *pTVar48;
  FScopedWidgetSlotArguments *pFVar49;
  FArguments *this_05;
  TSharedRef<SWidget,1> *pTVar50;
  longlong lVar51;
  FArguments *pFVar52;
  TSharedRef<SBorder,1> *pTVar53;
  FMRSWRecursiveAccessDetector *this_06;
  FSharedReferencer<1> FVar54;
  uint uVar55;
  SUniformGridPanel *pSVar56;
  uint uVar57;
  int iVar58;
  TReferenceControllerBase<1> *pTVar59;
  longlong *plVar60;
  FCheckBoxStyle *pFVar61;
  undefined8 unaff_XMM6_Qb;
  undefined1 auStackY_2198 [32];
  T0RequiredArgs local_2144;
  T0RequiredArgs local_2143;
  T0RequiredArgs local_2142;
  T0RequiredArgs local_2141;
  T0RequiredArgs local_2140;
  T0RequiredArgs local_213f;
  T0RequiredArgs local_213e [2];
  uint local_213c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2138;
  FDelegateAllocation local_2130;
  int local_2120;
  FLLMScope local_211c;
  FLLMScope local_2118;
  FLLMScope local_2114;
  FLLMScope local_2110;
  FLLMScope local_210c;
  undefined1 local_2108 [8];
  FDelegateAllocation local_2100;
  SSegmentedControl<int> *local_20f0;
  TReferenceControllerBase<1> *local_20e8;
  undefined2 local_20e0;
  undefined1 local_20d8 [8];
  ForElementType<TAlignedBytes<16,16>_> FStack_20d0;
  ulonglong local_20c8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_20c0;
  undefined8 local_20a8;
  undefined8 uStack_20a0;
  undefined1 local_2098;
  undefined1 local_2090 [8];
  ForAnyElementType FStack_2088;
  ulonglong local_2080;
  undefined4 local_2078;
  SCheckBox *local_2070;
  FSharedReferencer<1> local_2068;
  code *local_2060;
  ulonglong uStack_2058;
  TSharedRef<SUniformGridPanel,1> local_2050;
  SHorizontalBox *local_2040;
  longlong local_2038;
  SUniformGridPanel *local_2030;
  TSharedRef<SCheckBox,1> local_2028;
  SUniformGridPanel *local_2018;
  TReferenceControllerBase<1> *pTStack_2010;
  SBorder *local_2008;
  TReferenceControllerBase<1> *pTStack_2000;
  undefined8 local_1ff8;
  FSharedReferencer<1> local_1ff0;
  undefined8 local_1fe8;
  FSharedReferencer<1> local_1fe0;
  undefined8 local_1fd8;
  FSharedReferencer<1> local_1fd0;
  TSharedPtr<SSegmentedControl<int>,1> local_1fc8;
  TSharedRef<SSegmentedControl<int>,1> local_1fb8;
  longlong local_1fa8;
  FSharedReferencer<1> local_1fa0;
  undefined1 local_1f98;
  undefined1 local_1f90 [24];
  FSlateBrush *local_1f78;
  bool local_1f70;
  undefined1 local_1f68 [8];
  void *pvStack_1f60;
  undefined4 local_1f58;
  undefined8 local_1f50;
  undefined8 uStack_1f48;
  undefined4 local_1f40;
  undefined1 local_1f3c;
  undefined1 local_1f38 [8];
  void *pvStack_1f30;
  undefined8 local_1f28;
  undefined4 local_1f20 [2];
  undefined1 local_1f18 [8];
  FSlot *local_1f10;
  FName local_1f08;
  FSlot *local_1f00;
  FName local_1ef8;
  FMemScope local_1ef0;
  TReferenceControllerBase<1> *local_1ee8;
  FName local_1ee0;
  FMemScope local_1ed8;
  SSegmentedControl<int> *local_1ed0;
  undefined4 uStack_1ec8;
  undefined4 uStack_1ec4;
  FMemScope local_1ec0;
  FName local_1eb8;
  FMemScope local_1eb0;
  FName local_1ea8;
  FSlot *local_1ea0;
  FMemScope local_1e98;
  FText local_1e90;
  undefined1 local_1e80;
  undefined1 local_1e78 [24];
  undefined8 local_1e60;
  undefined8 uStack_1e58;
  bool local_1e50;
  undefined1 local_1e48 [8];
  void *pvStack_1e40;
  undefined4 local_1e38;
  undefined4 local_1e30;
  undefined4 uStack_1e2c;
  undefined4 uStack_1e28;
  undefined4 uStack_1e24;
  undefined1 local_1e20;
  undefined1 local_1e18 [8];
  void *pvStack_1e10;
  undefined8 local_1e08;
  TAttribute<FMargin> local_1e00;
  undefined8 local_1dd0;
  undefined8 uStack_1dc8;
  undefined4 local_1dc0;
  TSharedRef<SBorder,1> local_1db8;
  double local_1da8;
  double dStack_1da0;
  undefined1 local_1d98;
  undefined1 local_1d90 [24];
  double local_1d78;
  double dStack_1d70;
  bool local_1d68;
  undefined1 local_1d60 [24];
  TAttribute<FSlateBrush_const_*> local_1d48;
  FDestructionSentinel local_1d20;
  FDestructionSentinel local_1d08;
  FDestructionSentinel local_1cf0;
  FDestructionSentinel local_1cd8;
  FDestructionSentinel local_1cc0;
  FDelegateAllocation *local_1ca8;
  FDestructionSentinel local_1ca0;
  FDelegateAllocation *local_1c88;
  FDestructionSentinel local_1c80;
  undefined1 *local_1c68;
  code *local_1c60;
  ulonglong uStack_1c58;
  bool local_1c50;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_1c48;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1c30;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1c18;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_1c00;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1be8;
  TSharedRef<SHorizontalBox,1> local_1bd0;
  TSharedRef<SUniformGridPanel,1> local_1bc0;
  TSharedRef<SImage,1> local_1bb0;
  TSharedRef<SWidget,1> local_1ba0;
  SWidget *local_1b90;
  TReferenceControllerBase<1> *pTStack_1b88;
  TSharedRef<STextBlock,1> local_1b80;
  TSharedRef<SSpacer,1> local_1b70;
  FReadAccessScope local_1b60;
  TAttribute<FText> local_1b48;
  undefined1 local_1b18 [16];
  undefined1 local_1b08 [32];
  undefined1 local_1ae8 [24];
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_1ad0;
  FReadAccessScope local_1ab8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1aa0;
  undefined8 local_1a88 [2];
  undefined1 local_1a78 [16];
  FSharedReferencer<1> local_1a68 [8];
  undefined4 local_1a28;
  undefined1 local_1a24;
  TOptional<FSizeParam> local_1a20;
  undefined1 local_1990 [16];
  FSharedReferencer<1> local_1980 [8];
  undefined4 local_1940;
  undefined1 local_193c;
  TOptional<FSizeParam> local_1938;
  undefined1 local_18a8 [16];
  FSharedReferencer<1> local_1898 [9];
  TOptional<FSizeParam> local_1850;
  FAuto local_17c0;
  FAuto local_1778;
  undefined1 local_1730 [536];
  undefined1 local_1518 [32];
  undefined1 local_14f8 [64];
  undefined1 local_14b8 [64];
  undefined1 local_1478 [48];
  undefined1 local_1448 [32];
  undefined1 local_1428 [216];
  undefined1 local_1350 [520];
  undefined1 local_1148 [48];
  undefined1 local_1118 [56];
  undefined1 local_10e0 [32];
  undefined1 local_10c0 [24];
  FArguments local_10a8;
  undefined1 local_ea0 [528];
  undefined1 local_c90 [24];
  FArguments local_c78;
  FArguments local_a00;
  FArguments local_620;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_58;
  undefined8 uStack_30;
  
  uStack_30 = 0x143004954;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2198;
  pFVar6 = this->Style;
  bVar15 = false;
  bVar14 = false;
  bVar30 = false;
  local_2060 = *(code **)&pFVar6->UniformPadding;
  uStack_2058._0_4_ = (pFVar6->UniformPadding).Right;
  uStack_2058._4_4_ = (pFVar6->UniformPadding).Bottom;
  uStack_2058 = uStack_2058 & 0xffffffff00000000;
  local_20f0 = this;
  pFVar33 = SUniformGridPanel::FArguments::FArguments(&local_c78);
  local_1c50 = true;
  local_1c60 = local_2060;
  uStack_1c58 = uStack_2058;
  local_1c48._16_8_ = 0;
  local_1c48._0_8_ = 0;
  local_1c48._8_8_ = 0;
  pFVar33 = SUniformGridPanel::FArguments::SlotPadding(pFVar33,(TAttribute<FMargin> *)&local_1c60);
  this_01 = MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_1ad0,"SUniformGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                       ,0xde,&local_2144);
  pTVar34 = TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_1bc0,pFVar33);
  pTVar59 = (pTVar34->SharedReferenceCount).ReferenceController;
  pSVar56 = pTVar34->Object;
  if (pTVar59 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar59->SharedReferenceCount = (atomic<int>)((int)pTVar59->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2030 = pSVar56;
  local_1ee8 = pTVar59;
  TSharedRef<SUniformGridPanel,1>::~TSharedRef<SUniformGridPanel,1>(&local_1bc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ad0._Widget.SharedReferenceCount.ReferenceController);
  SUniformGridPanel::FArguments::~FArguments(&local_c78);
  uVar25 = local_1db8.SharedReferenceCount.ReferenceController._4_4_;
  uVar21 = _UNK_150a1c8cc;
  uVar20 = _UNK_150a1c8c8;
  uVar19 = _UNK_150a1c8c4;
  uVar18 = ___xmm_3ff00000000000004020000000000000;
  uVar17 = _UNK_15090c6d8;
  uVar16 = ___xmm_3f8000003f800000000000003f800000;
  local_2120 = (this->Children).Children.ArrayNum;
  local_213c = 0;
  if (0 < local_2120) {
    local_2038 = 0;
    uStack_30 = unaff_XMM6_Qb;
    do {
      lVar51 = local_2038;
      uVar55 = local_213c;
      uVar57 = ~local_213c;
      uVar31 = 0;
      if ((int)local_213c < (this->Children).Children.ArrayNum) {
        uVar31 = uVar57 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar7 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar51 * 8);
      local_20e8 = *(TReferenceControllerBase<1> **)(lVar7 + 0x18);
      pSVar8 = *(SHorizontalBox **)(lVar7 + 0x10);
      if (local_20e8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20e8->SharedReferenceCount = (atomic<int>)((int)local_20e8->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar31 = 0;
      if ((int)uVar55 < (this->Children).Children.ArrayNum) {
        uVar31 = uVar57 >> 0x1f;
      }
      local_2040 = pSVar8;
      if ((uVar31 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar51 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar51 * 8);
      pFVar43 = (FSlot *)0x0;
      local_2078 = *(undefined4 *)(lVar51 + 0xe0);
      local_2080 = 0;
      local_20a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uStack_20a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2098 = 1;
      local_2090 = (undefined1  [8])0x0;
      FStack_2088.Data = (FScriptContainerElement *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar51 + 200),
                 &local_1b60);
      if (((*(int *)(lVar51 + 0xd8) == 0) || (*(longlong **)(lVar51 + 0xd0) == (longlong *)0x0)) ||
         (cVar27 = (**(code **)(**(longlong **)(lVar51 + 0xd0) + 0x38))(), cVar27 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b60);
        bVar26 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar51 + 0x40));
        if (bVar26) goto LAB_143004bf4;
        bVar26 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar51 + 200));
        if (bVar26) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar51 + 200),
                     &local_1ab8);
          pFVar38 = pFVar43;
          if (*(int *)(lVar51 + 0xd8) != 0) {
            pFVar38 = *(FSlot **)(lVar51 + 0xd0);
          }
          uVar39 = (**(code **)(*(longlong *)pFVar38 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1ab8);
          *(undefined8 *)(lVar51 + 0xb8) = uVar39;
        }
        if (*(longlong *)(lVar51 + 0xb8) == 0) {
LAB_143004e46:
          local_1e30 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
          uStack_1e2c = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
          uStack_1e28 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
          uStack_1e24 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          this_03 = TAttribute<FText>::Get((TAttribute<FText> *)(lVar51 + 0x28));
          bVar26 = FText::IsEmpty(this_03);
          local_1e30 = uVar18;
          uStack_1e2c = uVar19;
          uStack_1e28 = uVar20;
          uStack_1e24 = uVar21;
          if (bVar26) goto LAB_143004e46;
        }
        local_1e20 = 1;
        local_1e08 = 0;
        local_2098 = 1;
        local_1e18 = (undefined1  [8])0x0;
        pvStack_1e10 = (void *)0x0;
        local_20a8 = (double)CONCAT44(uStack_1e2c,local_1e30);
        uStack_20a0 = (double)CONCAT44(uStack_1e24,uStack_1e28);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2090,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e18);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e18);
        if (pvStack_1e10 != (void *)0x0) {
          FMemory::Free(pvStack_1e10);
        }
        this_06 = (FMRSWRecursiveAccessDetector *)local_1e18;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b60);
LAB_143004bf4:
        local_2108 = (undefined1  [8])0x0;
        local_2100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2100.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2108,
                   (FWriteAccessScope *)&local_1cc0);
        local_1ca8 = &local_2100;
        puVar35 = UE::Core::Private::DelegateAllocate(0x20,&local_2100);
        if (puVar35 != (undefined8 *)0x0) {
          *puVar35 = &
                     ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar36 = FDelegateHandle::GenerateNewID();
          puVar35[2] = uVar36;
          *puVar35 = &
                     ___7__TBaseFunctorDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__V<lambda_1>__6__RebuildChildren___SSegmentedControl_H__QEAAXXZ___V__6B_
          ;
          puVar35[3] = lVar51;
        }
        if (local_1cc0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1cc0.Accessor,&local_1cc0);
        }
        local_1d98 = 1;
        local_1da8 = 0.0;
        dStack_1da0 = 0.0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d90,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2108);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2108,
                   (FWriteAccessScope *)&local_1d08);
        if ((local_2100.DelegateSize != 0) &&
           (local_2100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_2100.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2100,0,0,0x10);
          local_2100.DelegateSize = 0;
        }
        if (local_1d08.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d08.Accessor,&local_1d08);
        }
        if (local_2100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2100.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_2108);
        local_2098 = local_1d98;
        local_20a8 = local_1da8;
        uStack_20a0 = dStack_1da0;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2090,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d90);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d90);
        if ((void *)local_1d90._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1d90._8_8_);
        }
        this_06 = (FMRSWRecursiveAccessDetector *)local_1d90;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_06);
      if (pSVar8 == (SHorizontalBox *)SNullWidget::NullWidget.Object) {
        pFVar37 = SHorizontalBox::FArguments::FArguments(&local_10a8);
        this_02 = ::operator_new(0x58);
        pFVar38 = pFVar43;
        if (this_02 != (FSlot *)0x0) {
          *(undefined8 *)this_02 = 0;
          *(undefined8 *)&this_02->field_0x8 = 0;
          *(undefined8 *)&this_02->field_0x10 = 0;
          *(undefined8 *)&this_02->field_0x18 = 0;
          *(undefined8 *)&this_02->field_0x20 = 0;
          *(undefined8 *)&this_02->field_0x28 = 0;
          *(undefined8 *)&this_02->field_0x30 = 0;
          *(undefined8 *)&this_02->field_0x38 = 0;
          *(undefined8 *)&this_02->field_0x40 = 0;
          *(undefined8 *)&this_02->field_0x48 = 0;
          *(undefined8 *)&this_02->field_0x50 = 0;
          pFVar38 = SHorizontalBox::FSlot::FSlot(this_02);
        }
        local_1f10 = pFVar38;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_1990,(FSlot *)&local_1f10);
        pFVar40 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1b18);
        TOptional<FSizeParam>::operator=(&local_1938,pFVar40);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ae8);
        if ((void *)local_1ae8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1ae8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1ae8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b08);
        if ((void *)local_1b08._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1b08._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1b08);
        local_1940 = 2;
        local_193c = 1;
        pFVar41 = SImage::FArguments::FArguments((FArguments *)local_1350);
        local_1f3c = 1;
        local_1dc0 = CONCAT22(local_1dc0._2_2_,2);
        uVar24 = local_1dc0;
        local_1f40 = local_1dc0;
        local_1f28 = 0;
        local_1f50 = uVar16;
        uStack_1f48 = uVar17;
        local_1f38 = (undefined1  [8])0x0;
        pvStack_1f30 = (void *)0x0;
        *(undefined8 *)&(pFVar41->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = uVar16;
        *(undefined8 *)((longlong)&(pFVar41->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8)
             = uVar17;
        local_1dc0._0_1_ = (undefined1)2;
        local_1dc0._1_1_ = (undefined1)(2 >> 8);
        (pFVar41->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_1dc0;
        (pFVar41->_ColorAndOpacity).Value.ColorTableId = local_1dc0._1_1_;
        *(undefined2 *)&(pFVar41->_ColorAndOpacity).Value.field_0x12 = local_1dc0._2_2_;
        (pFVar41->_ColorAndOpacity).bIsSet = true;
        local_1dd0 = uVar16;
        uStack_1dc8 = uVar17;
        local_1dc0 = uVar24;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar41->_ColorAndOpacity).Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f38);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f38);
        if (pvStack_1f30 != (void *)0x0) {
          FMemory::Free(pvStack_1f30);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1f38);
        local_1f78 = *(FSlateBrush **)(lVar51 + 0xb8);
        local_1f70 = *(bool *)(lVar51 + 0xc0);
        local_1f68 = (undefined1  [8])0x0;
        pvStack_1f60 = (void *)0x0;
        local_1f58 = 0;
        TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                   local_1f68,
                   (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (lVar51 + 200));
        (pFVar41->_Image).Value = local_1f78;
        (pFVar41->_Image).bIsSet = local_1f70;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar41->_Image).Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f68);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f68);
        if (pvStack_1f60 != (void *)0x0) {
          FMemory::Free(pvStack_1f60);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1f68);
        FLLMScope::FLLMScope
                  (&local_211c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_1f08 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_1e98,&local_1f08,true);
        TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                  (&local_1be8,"SImage",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                   ,0xf9,&local_2143);
        FMemScope::~FMemScope(&local_1e98);
        FLLMScope::~FLLMScope(&local_211c);
        pTVar42 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_1be8,&local_1bb0,pFVar41);
        pTVar59 = (pTVar42->SharedReferenceCount).ReferenceController;
        local_1990._8_8_ = pTVar42->Object;
        if (pTVar59 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar59->SharedReferenceCount = (atomic<int>)((int)pTVar59->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar59->SharedReferenceCount = (atomic<int>)((int)pTVar59->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1ff8 = 0;
        local_1ff0.ReferenceController = pTVar59;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(local_1990 + 0x10),&local_1ff0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1ff0.ReferenceController);
        pTVar4 = &pFVar37->_Slots;
        pFVar9 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)local_1990) &&
            ((FScriptContainerElement *)local_1990 <
             pFVar9 + (longlong)(pFVar37->_Slots).ArrayMax * 0xe8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar32 = (pFVar37->_Slots).ArrayNum;
        piVar1 = &(pFVar37->_Slots).ArrayMax;
        if (iVar32 == *piVar1) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e8,&pTVar4->AllocatorInstance,piVar1);
        }
        (pFVar37->_Slots).ArrayNum = iVar32 + 1;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)((pTVar4->AllocatorInstance).Data + (longlong)iVar32 * 0xe8),
                   (FSlotArguments *)local_1990);
        pFVar38 = ::operator_new(0x58);
        if (pFVar38 != (FSlot *)0x0) {
          *(undefined8 *)pFVar38 = 0;
          *(undefined8 *)&pFVar38->field_0x8 = 0;
          *(undefined8 *)&pFVar38->field_0x10 = 0;
          *(undefined8 *)&pFVar38->field_0x18 = 0;
          *(undefined8 *)&pFVar38->field_0x20 = 0;
          *(undefined8 *)&pFVar38->field_0x28 = 0;
          *(undefined8 *)&pFVar38->field_0x30 = 0;
          *(undefined8 *)&pFVar38->field_0x38 = 0;
          *(undefined8 *)&pFVar38->field_0x40 = 0;
          *(undefined8 *)&pFVar38->field_0x48 = 0;
          *(undefined8 *)&pFVar38->field_0x50 = 0;
          pFVar43 = SHorizontalBox::FSlot::FSlot(pFVar38);
        }
        local_1f00 = pFVar43;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_18a8,(FSlot *)&local_1f00);
        pFVar40 = (FSizeParam *)FAuto::FAuto(&local_17c0);
        TOptional<FSizeParam>::operator=(&local_1850,pFVar40);
        FAuto::~FAuto(&local_17c0);
        pFVar44 = SSpacer::FArguments::FArguments((FArguments *)local_ea0);
        local_1d68 = (bool)local_2098;
        local_1d78 = local_20a8;
        dStack_1d70 = uStack_20a0;
        TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *
                   )local_1d60,
                   (TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *
                   )local_2090);
        (pFVar44->_Size).Value.field0_0x0._s_0.X = local_1d78;
        (pFVar44->_Size).Value.field0_0x0._s_0.Y = dStack_1d70;
        (pFVar44->_Size).bIsSet = local_1d68;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar44->_Size).Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d60);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d60);
        if ((void *)local_1d60._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1d60._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1d60);
        FLLMScope::FLLMScope
                  (&local_2118,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_1ef8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_1ef0,&local_1ef8,true);
        TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                  (&local_1c00,"SSpacer",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                   ,0x101,&local_2142);
        FMemScope::~FMemScope(&local_1ef0);
        FLLMScope::~FLLMScope(&local_2118);
        pTVar45 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_1c00,&local_1b70,pFVar44);
        pTVar10 = (pTVar45->SharedReferenceCount).ReferenceController;
        local_18a8._8_8_ = pTVar45->Object;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1fd8 = 0;
        local_1fd0.ReferenceController = pTVar10;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(local_18a8 + 0x10),&local_1fd0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1fd0.ReferenceController);
        pTVar4 = &pFVar37->_Slots;
        pFVar9 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)local_18a8) &&
            ((FScriptContainerElement *)local_18a8 <
             pFVar9 + (longlong)(pFVar37->_Slots).ArrayMax * 0xe8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar32 = (pFVar37->_Slots).ArrayNum;
        if (iVar32 == (pFVar37->_Slots).ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e8,&pTVar4->AllocatorInstance,&(pFVar37->_Slots).ArrayMax);
        }
        (pFVar37->_Slots).ArrayNum = iVar32 + 1;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)((pTVar4->AllocatorInstance).Data + (longlong)iVar32 * 0xe8),
                   (FSlotArguments *)local_18a8);
        pFVar38 = ::operator_new(0x58);
        pFVar43 = (FSlot *)0x0;
        if (pFVar38 != (FSlot *)0x0) {
          *(undefined8 *)pFVar38 = 0;
          *(undefined8 *)&pFVar38->field_0x8 = 0;
          *(undefined8 *)&pFVar38->field_0x10 = 0;
          *(undefined8 *)&pFVar38->field_0x18 = 0;
          *(undefined8 *)&pFVar38->field_0x20 = 0;
          *(undefined8 *)&pFVar38->field_0x28 = 0;
          *(undefined8 *)&pFVar38->field_0x30 = 0;
          *(undefined8 *)&pFVar38->field_0x38 = 0;
          *(undefined8 *)&pFVar38->field_0x40 = 0;
          *(undefined8 *)&pFVar38->field_0x48 = 0;
          *(undefined8 *)&pFVar38->field_0x50 = 0;
          pFVar43 = SHorizontalBox::FSlot::FSlot(pFVar38);
        }
        local_1ea0 = pFVar43;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_1a78,(FSlot *)&local_1ea0);
        local_1a28 = 2;
        local_1a24 = 1;
        pFVar40 = (FSizeParam *)FAuto::FAuto(&local_1778);
        TOptional<FSizeParam>::operator=(&local_1a20,pFVar40);
        FAuto::~FAuto(&local_1778);
        pFVar46 = STextBlock::FArguments::FArguments(&local_620);
        pFVar46->_TextStyle = local_20f0->TextStyle;
        FText::FText(&local_1b48.Value,(FText *)(lVar51 + 0x28));
        local_1b48.bIsSet = *(bool *)(lVar51 + 0x38);
        TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
                  (&local_1b48.Getter,
                   (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar51 + 0x40));
        TAttribute<FText>::operator=(&pFVar46->_Text,&local_1b48);
        TAttribute<FText>::~TAttribute<FText>(&local_1b48);
        this_04 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                            (&local_1aa0,"STextBlock",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                             ,0x109,&local_2141);
        pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (this_04,&local_1b80,pFVar46);
        pTVar11 = (pTVar47->SharedReferenceCount).ReferenceController;
        local_1a78._8_8_ = pTVar47->Object;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1fe8 = 0;
        local_1fe0.ReferenceController = pTVar11;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(local_1a78 + 0x10),&local_1fe0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1fe0.ReferenceController);
        pTVar4 = &pFVar37->_Slots;
        pFVar9 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)local_1a78) &&
            ((FScriptContainerElement *)local_1a78 <
             pFVar9 + (longlong)(pFVar37->_Slots).ArrayMax * 0xe8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar32 = (pFVar37->_Slots).ArrayNum;
        if (iVar32 == (pFVar37->_Slots).ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e8,&pTVar4->AllocatorInstance,&(pFVar37->_Slots).ArrayMax);
        }
        (pFVar37->_Slots).ArrayNum = iVar32 + 1;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)((pTVar4->AllocatorInstance).Data + (longlong)iVar32 * 0xe8),
                   (FSlotArguments *)local_1a78);
        FLLMScope::FLLMScope
                  (&local_2114,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_1ea8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_1eb0,&local_1ea8,true);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                  (&local_1c18,"SHorizontalBox",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                   ,0xf3,&local_2140);
        FMemScope::~FMemScope(&local_1eb0);
        FLLMScope::~FLLMScope(&local_2114);
        pTVar48 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_1c18,&local_1bd0,pFVar37);
        pTVar22 = local_20e8;
        local_20e8 = (pTVar48->SharedReferenceCount).ReferenceController;
        local_2040 = pTVar48->Object;
        if (local_20e8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20e8->SharedReferenceCount =
               (atomic<int>)((int)local_20e8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1bd0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c18._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b80.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1aa0._Widget.SharedReferenceCount.ReferenceController);
        STextBlock::FArguments::~FArguments(&local_620);
        SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
                  ((FSlotArguments *)local_1a78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b70.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c00._Widget.SharedReferenceCount.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c90);
        if ((void *)local_c90._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_c90._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_c90);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_ea0);
        SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
                  ((FSlotArguments *)local_18a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar59)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1bb0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1be8._Widget.SharedReferenceCount.ReferenceController);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10c0);
        if ((void *)local_10c0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_10c0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_10c0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10e0);
        if ((void *)local_10e0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_10e0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_10e0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1118);
        if ((void *)local_1118._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1118._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1118);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1148);
        if ((void *)local_1148._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1148._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1148);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1350);
        SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
                  ((FSlotArguments *)local_1990);
        DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
                  ((FSlotArguments *)local_10a8._Slots.AllocatorInstance.Data,
                   local_10a8._Slots.ArrayNum);
        if ((FSlotArguments *)local_10a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
          FMemory::Free(local_10a8._Slots.AllocatorInstance.Data);
        }
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_10a8);
        this = local_20f0;
        uVar55 = local_213c;
      }
      pSVar56 = local_2030;
      pFVar6 = this->Style;
      pFVar61 = &pFVar6->ControlStyle;
      if (uVar55 == 0) {
        pFVar61 = &pFVar6->FirstControlStyle;
      }
      else if (uVar55 == local_2120 - 1U) {
        pFVar61 = &pFVar6->LastControlStyle;
      }
      iVar32 = local_20f0->MaxSegmentsPerLine;
      if (iVar32 < 1) {
        iVar58 = 0;
      }
      else {
        iVar58 = (int)uVar55 / iVar32;
        uVar55 = (int)uVar55 % iVar32;
      }
      if ((local_2030 == (SUniformGridPanel *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar49 = SUniformGridPanel::AddSlot(pSVar56,&local_c8,uVar55,iVar58);
      if ((longlong *)local_1f20 != &pFVar49->_padding_) {
        *(undefined4 *)&pFVar49->_padding_ = *(undefined4 *)(lVar51 + 0x24);
        *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
      }
      plVar60 = &pFVar49->_padding_;
      if (pFVar49 == (FScopedWidgetSlotArguments *)0xffffffffffffffe8) {
        plVar60 = (longlong *)&DAT_00000008;
      }
      this_05 = SCheckBox::FArguments::FArguments((FArguments *)local_1730);
      *(undefined1 *)((longlong)&this_05->_padding_ + 2) = 1;
      this_05->_HAlign = *(EHorizontalAlignment *)(lVar51 + 0x20);
      local_1e90.TextData.Reference = *(ITextData **)(lVar51 + 0x58);
      if (local_1e90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e90.TextData.Reference + 8))
                  (local_1e90.TextData.Reference,local_1f18);
      }
      local_1e90.Flags = *(uint *)(lVar51 + 0x60);
      local_1e80 = *(undefined1 *)(lVar51 + 0x68);
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e78,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar51 + 0x70));
      FText::operator=((FText *)this_05,&local_1e90);
      *(undefined1 *)&this_05->_padding_ = local_1e80;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_05->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e78);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e78);
      if ((void *)local_1e78._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1e78._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1e78);
      if (local_1e90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e90.TextData.Reference + 0x10))();
      }
      local_1fa8 = *(longlong *)(lVar51 + 0x88);
      local_1fa0.ReferenceController = *(TReferenceControllerBase<1> **)(lVar51 + 0x90);
      if (local_1fa0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1fa0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1fa0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1f98 = *(undefined1 *)(lVar51 + 0x98);
      TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                 local_1f90,
                 (TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (lVar51 + 0xa0));
      if (&this_05->_padding_ != &local_1fa8) {
        this_05->_padding_ = local_1fa8;
        local_1fa8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this_05->_padding_,&local_1fa0);
      }
      *(undefined1 *)&this_05->_padding_ = local_1f98;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_05->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f90);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f90);
      if ((void *)local_1f90._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1f90._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1f90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1fa0.ReferenceController);
      uVar24 = local_2078;
      this = local_20f0;
      this_05->_Style = pFVar61;
      local_1ed0 = local_20f0;
      uStack_1ec8 = local_2078;
      if (local_20f0->CurrentValuesIsBound == false) {
        EVar28 = `SSegmentedControl<int>::GetCheckBoxStateAttribute'::__l2::<lambda_1>::operator()
                           (&local_1ed0);
        local_20c8 = 0;
        local_20e0 = CONCAT11(1,EVar28);
        local_20d8 = (undefined1  [8])0x0;
        FStack_20d0 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      }
      else {
        local_2138.AccessDetector.State =
             (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_2130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2130.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2138,(FWriteAccessScope *)&local_1ca0);
        local_1c88 = &local_2130;
        puVar35 = UE::Core::Private::DelegateAllocate(0x28,&local_2130);
        if (puVar35 != (undefined8 *)0x0) {
          *puVar35 = &
                     ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar36 = FDelegateHandle::GenerateNewID();
          puVar35[2] = uVar36;
          *puVar35 = &
                     ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__GetCheckBoxStateAttribute___SSegmentedControl_H__AEBA_AV__TAttribute_W4ECheckBoxState____H_Z___V__6B_
          ;
          puVar35[3] = local_1ed0;
          puVar35[4] = CONCAT44(uStack_1ec4,uStack_1ec8);
        }
        if (local_1ca0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ca0.Accessor,&local_1ca0);
        }
        local_20e0 = 0x100;
        local_20c8 = local_20c8 & 0xffffffff00000000;
        local_20d8 = (undefined1  [8])0x0;
        FStack_20d0 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2138,(FWriteAccessScope *)&local_1cf0);
        if (FStack_20d0 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_20d0);
        }
        FStack_20d0 = local_2130.DelegateAllocator;
        local_20c8 = CONCAT44(local_20c8._4_4_,local_2130.DelegateSize);
        local_2130.DelegateSize = 0;
        local_2130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        if (local_1cf0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1cf0.Accessor,&local_1cf0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2138,(FWriteAccessScope *)&local_1cd8);
        if ((local_2130.DelegateSize != 0) &&
           (local_2130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_2130.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2130,0,0,0x10);
          local_2130.DelegateSize = 0;
        }
        if (local_1cd8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1cd8.Accessor,&local_1cd8);
        }
        if (local_2130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2130.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2138.AccessDetector);
        EVar28 = (ECheckBoxState)local_20e0;
      }
      (this_05->_IsChecked).Value = EVar28;
      (this_05->_IsChecked).bIsSet = local_20e0._1_1_;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_05->_IsChecked).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20d8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20d8);
      if (FStack_20d0 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_20d0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_20d8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_05->_OnCheckStateChanged,(FWriteAccessScope *)&local_1c80);
      local_1c68 = &(this_05->_OnCheckStateChanged).field_0x8;
      puVar35 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1c68);
      if (puVar35 != (undefined8 *)0x0) {
        local_2060 = CommitValue;
        uStack_2058 = (ulonglong)uVar25 << 0x20;
        pTVar50 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1ba0);
        local_1fc8.Object = (SSegmentedControl<int> *)pTVar50->Object;
        local_1fc8.SharedReferenceCount.ReferenceController =
             (pTVar50->SharedReferenceCount).ReferenceController;
        if (local_1fc8.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
          LOCK();
          (local_1fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1fc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        bVar15 = true;
        bVar14 = true;
        bVar30 = true;
        *puVar35 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(undefined4 *)(puVar35 + 1) = uVar24;
        local_1fb8.Object = local_1fc8.Object;
        local_1fb8.SharedReferenceCount.ReferenceController =
             local_1fc8.SharedReferenceCount.ReferenceController;
        uVar36 = FDelegateHandle::GenerateNewID();
        puVar35[2] = uVar36;
        *puVar35 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_V__SSegmentedControl_H___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__H__6B_
        ;
        puVar35[3] = local_1fc8.Object;
        puVar35[4] = local_1fc8.SharedReferenceCount.ReferenceController;
        if (local_1fc8.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1fc8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_1fc8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar35[5] = local_2060;
        puVar35[6] = uStack_2058;
      }
      if (bVar30) {
        bVar30 = false;
        TSharedPtr<SSegmentedControl<int>,1>::~TSharedPtr<SSegmentedControl<int>,1>(&local_1fc8);
      }
      if (bVar14) {
        bVar14 = false;
        TSharedRef<SSegmentedControl<int>,1>::~TSharedRef<SSegmentedControl<int>,1>(&local_1fb8);
      }
      if (bVar15) {
        bVar15 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1ba0.SharedReferenceCount.ReferenceController);
      }
      if (local_1c80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c80.Accessor,&local_1c80);
      }
      local_1e60._0_4_ = (this->UniformPadding).Value.Left;
      local_1e60._4_4_ = (this->UniformPadding).Value.Top;
      uStack_1e58._0_4_ = (this->UniformPadding).Value.Right;
      uStack_1e58._4_4_ = (this->UniformPadding).Value.Bottom;
      local_1e50 = (this->UniformPadding).bIsSet;
      local_1e38 = 0;
      local_1e48 = (undefined1  [8])0x0;
      pvStack_1e40 = (void *)0x0;
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e48,
                 &(this->UniformPadding).Getter);
      (this_05->_Padding).Value.Left = (float)(undefined4)local_1e60;
      (this_05->_Padding).Value.Top = (float)local_1e60._4_4_;
      (this_05->_Padding).Value.Right = (float)(undefined4)uStack_1e58;
      (this_05->_Padding).Value.Bottom = (float)uStack_1e58._4_4_;
      (this_05->_Padding).bIsSet = local_1e50;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_05->_Padding).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e48);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e48);
      if (pvStack_1e40 != (void *)0x0) {
        FMemory::Free(pvStack_1e40);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1e48);
      if (local_20e8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20e8->SharedReferenceCount = (atomic<int>)((int)local_20e8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b90 = (this_05->_Content).Widget.Object;
      pTStack_1b88 = (this_05->_Content).Widget.SharedReferenceCount.ReferenceController;
      (this_05->_Content).Widget.Object = (SWidget *)local_2040;
      (this_05->_Content).Widget.SharedReferenceCount.ReferenceController = local_20e8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1b88);
      FLLMScope::FLLMScope
                (&local_2110,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1eb8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1ec0,&local_1eb8,true);
      TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                (&local_20c0,"SCheckBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
                 ,0x120,&local_213f);
      FMemScope::~FMemScope(&local_1ec0);
      FLLMScope::~FLLMScope(&local_2110);
      FVar23.ReferenceController = local_20c0._Widget.SharedReferenceCount.ReferenceController;
      this_00 = local_20c0._Widget.Object;
      if (local_20c0._Widget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20c0._Widget.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_20c0._Widget.SharedReferenceCount.ReferenceController)->WeakReferenceCount
             + 1);
        UNLOCK();
      }
      if ((undefined8 *)(lVar51 + 0xe8) == local_1a88) {
        if (local_20c0._Widget.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(local_20c0._Widget.SharedReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            lVar51 = (local_20c0._Widget.SharedReferenceCount.ReferenceController)->_padding_;
            FVar54.ReferenceController = local_20c0._Widget.SharedReferenceCount.ReferenceController
            ;
            goto LAB_1430060fc;
          }
        }
      }
      else {
        FVar54.ReferenceController = *(TReferenceControllerBase<1> **)(lVar51 + 0xf0);
        *(undefined8 *)(lVar51 + 0xe8) = local_20c0._Widget.Object;
        *(TReferenceControllerBase<1> **)(lVar51 + 0xf0) =
             local_20c0._Widget.SharedReferenceCount.ReferenceController;
        if (FVar54.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &(FVar54.ReferenceController)->WeakReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            lVar51 = (FVar54.ReferenceController)->_padding_;
LAB_1430060fc:
            (**(code **)(lVar51 + 8))(FVar54.ReferenceController,1);
          }
        }
      }
      if ((this_00 == (SCheckBox *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)this_05);
      SCheckBox::Construct(this_00,this_05);
      if ((this_00 == (SCheckBox *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((this_00->_padding_ & 0x10) == 0) {
        cVar27 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
        bVar29 = 0;
        if (cVar27 != '\0') goto LAB_143006196;
      }
      else {
LAB_143006196:
        bVar29 = 0x20;
      }
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar29;
      if ((this_00 == (SCheckBox *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pbVar3 = (byte *)((longlong)&this_00->_padding_ + 1);
      *pbVar3 = *pbVar3 | 4;
      if ((this_00 == (SCheckBox *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_2028.SharedReferenceCount.ReferenceController = FVar23.ReferenceController;
      local_2028.Object = this_00;
      local_20c0._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_20c0._Widget.Object = (SCheckBox *)0x0;
      if ((this_00 == (SCheckBox *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar23.ReferenceController = local_2028.SharedReferenceCount.ReferenceController;
      local_2068.ReferenceController = local_2028.SharedReferenceCount.ReferenceController;
      local_2070 = local_2028.Object;
      if (local_2028.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2028.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2028.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_2028.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2028.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((SCheckBox **)plVar60 != &local_2070) {
        *plVar60 = (longlong)local_2028.Object;
        local_2070 = (SCheckBox *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(plVar60 + 1),&local_2068);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2068.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar23.ReferenceController);
      TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_2028);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1428);
      if ((void *)local_1428._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1428._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1428);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1448);
      if ((void *)local_1448._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1448._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1448);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1478);
      if ((void *)local_1478._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1478._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1478);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
      if ((void *)local_14b8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_14b8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_14b8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14f8);
      if ((void *)local_14f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_14f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_14f8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1518);
      if ((void *)local_1518._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1518._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1518);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1730._512_8_);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1730);
      TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::
      ~FScopedWidgetSlotArguments(&local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2090,
                 (FWriteAccessScope *)&local_1d20);
      if (((int)local_2080 != 0) && (FStack_2088.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2088.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2088,0,0,0x10);
        local_2080 = local_2080 & 0xffffffff00000000;
      }
      if (local_1d20.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d20.Accessor,&local_1d20);
      }
      if (FStack_2088.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2088.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2090);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20e8);
      local_213c = local_213c + 1;
      local_2038 = local_2038 + 1;
      pSVar56 = local_2030;
      pTVar59 = local_1ee8;
    } while (local_2038 < local_2120);
  }
  pFVar52 = SBorder::FArguments::FArguments(&local_a00);
  local_1d48.Value = &this->Style->BackgroundBrush;
  local_1d48.bIsSet = true;
  local_1d48.Getter._0_8_ = 0;
  local_1d48.Getter._8_8_ = 0;
  local_1d48.Getter._16_8_ = 0;
  pFVar52 = SBorder::FArguments::BorderImage(pFVar52,&local_1d48);
  local_1e00.Value.Right = (this->Style->UniformPadding).Right;
  local_1e00.Value.Left = 0.0;
  local_1e00.Value.Top = 0.0;
  local_1e00.Value.Bottom = 0.0;
  local_1e00.bIsSet = true;
  local_1e00.Getter._0_8_ = 0;
  local_1e00.Getter._8_8_ = 0;
  local_1e00.Getter._16_8_ = 0;
  pFVar52 = SBorder::FArguments::Padding(pFVar52,&local_1e00);
  if ((pSVar56 == (SUniformGridPanel *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar30)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (pTVar59 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar59->SharedReferenceCount = (atomic<int>)((int)pTVar59->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2050.Object = pSVar56;
  local_2050.SharedReferenceCount.ReferenceController = pTVar59;
  if ((pSVar56 == (SUniformGridPanel *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar30)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FVar23.ReferenceController = local_2050.SharedReferenceCount.ReferenceController;
  local_2018 = local_2050.Object;
  pTStack_2010 = local_2050.SharedReferenceCount.ReferenceController;
  if (local_2050.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2050.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2050.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2050.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2050.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (pFVar52->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar52->_Content).Widget.Object = (SWidget *)local_2050.Object;
  (pFVar52->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_2050.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FLLMScope::FLLMScope(&local_210c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1ee0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1ed8,&local_1ee0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1c30,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SSegmentedControl.h"
             ,0x131,local_213e);
  FMemScope::~FMemScope(&local_1ed8);
  FLLMScope::~FLLMScope(&local_210c);
  pTVar53 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1c30,&local_1db8,pFVar52);
  plVar60 = &this->_padding_;
  pTVar10 = (pTVar53->SharedReferenceCount).ReferenceController;
  pSVar12 = pTVar53->Object;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar60);
  }
  else {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar60);
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar12;
  this->_padding_ = (longlong)pTVar10;
  local_2008 = pSVar12;
  pTStack_2000 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1db8.SharedReferenceCount.ReferenceController._4_4_,
                      local_1db8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c30._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  TSharedRef<SUniformGridPanel,1>::~TSharedRef<SUniformGridPanel,1>(&local_2050);
  SBorder::FArguments::~FArguments(&local_a00);
  UpdateCheckboxValuesIfNeeded(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar59);
  return;
}

// SetValue @ 14300dfb0

void __thiscall
SSegmentedControl<int>::SetValue(SSegmentedControl<int> *this,TAttribute<int> *param_1,bool param_2)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [8];
  char cVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int *piVar11;
  longlong lVar12;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  ForAnyElementType FStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  undefined1 local_60 [32];
  ForElementType<TAlignedBytes<16,16>_> FStack_40;
  undefined8 local_38;
  
  this_00 = &param_1->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_80);
  if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar8 = (**(code **)(*plVar2 + 0x38))();
    if (cVar8 != '\0') {
      bVar4 = true;
      goto LAB_14300e00b;
    }
  }
  bVar4 = false;
LAB_14300e00b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_80);
  auVar7 = local_b0;
  if (bVar4) {
    uVar5 = param_1->Value;
    uVar6 = param_1->bIsSet;
    local_b0[4] = uVar6;
    local_b0._0_4_ = uVar5;
    local_b0._5_3_ = auVar7._5_3_;
    local_a8 = (undefined1  [8])0x0;
    FStack_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = local_98 & 0xffffffff00000000;
    TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8,this_00);
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    local_68 = &local_c0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_c0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6A_AV__TArray_HV__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy__V<lambda_1>__4__SetValue___SSegmentedControl_H__QEAAXV__TAttribute_H___N_Z___V__6B_
      ;
      *(undefined4 *)(puVar9 + 3) = local_b0._0_4_;
      *(undefined1 *)((longlong)puVar9 + 0x1c) = local_b0[4];
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 4),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    local_60._0_8_ = (FScriptContainerElement *)0x0;
    local_60._8_4_ = 0;
    local_60._12_4_ = 0;
    local_60[0x10] = true;
    local_60._24_8_ = 0;
    FStack_40 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)&local_80);
    if (FStack_40 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_40);
    }
    FStack_40 = local_c0.DelegateAllocator;
    local_38._0_4_ = local_c0.DelegateSize;
    local_c0.DelegateSize = 0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *)local_c8);
    SetValues(this,(TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_60,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_80);
    if (((int)local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
      local_98 = local_98 & 0xffffffff00000000;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
  }
  else if (param_1->bIsSet == false) {
    local_60._0_8_ = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_60._8_4_ = 0;
    local_60._12_4_ = 0;
    local_60[0x10] = false;
    local_60._24_8_ = 0;
    FStack_40 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    SetValues(this,(TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_60,param_2);
  }
  else {
    piVar11 = TAttribute<int>::Get(param_1);
    iVar1 = *piVar11;
    local_c8 = (undefined1  [8])0x0;
    local_c0.DelegateAllocator._0_4_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,(ForAnyElementType *)local_c8,1,(int *)&local_c0.DelegateAllocator.field_0x4)
    ;
    auVar7 = local_c8;
    local_b0 = (undefined1  [8])0x0;
    *(int *)local_c8 = iVar1;
    lVar12 = (longlong)(int)local_c0.DelegateAllocator._0_4_;
    local_a8._0_4_ = local_c0.DelegateAllocator._0_4_;
    if (local_c0.DelegateAllocator._0_4_ == 0) {
      local_a8 = (undefined1  [8])((ulonglong)local_c0.DelegateAllocator & 0xffffffff);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c0.DelegateAllocator._0_4_,0,(ForAnyElementType *)local_b0,
                 local_c0.DelegateAllocator._0_4_,(int *)(local_a8 + 4));
      memcpy((void *)local_b0,(void *)auVar7,lVar12 << 2);
    }
    FStack_a0.Data._0_1_ = 1;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    SetValues(this,(TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_b0,param_2);
    if ((atomic<unsigned___int64>)local_c8 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_c8);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetValues @ 14300e310

void __thiscall
SSegmentedControl<int>::SetValues
          (SSegmentedControl<int> *this,
          TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,bool param_2)

{
  longlong *plVar1;
  char cVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_28);
  if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->CurrentValuesIsBound = true;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this->CurrentValues,(SWidget *)this,param_1,None);
      goto LAB_14300e3c2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this->CurrentValuesIsBound = false;
  if (param_1->bIsSet == false) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)&this->CurrentValues,(SWidget *)this,Member);
  }
  else {
    pTVar3 = TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::Get(param_1);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this->CurrentValues,(SWidget *)this,pTVar3);
  }
LAB_14300e3c2:
  if (param_2) {
    UpdateCheckboxValuesIfNeeded(this);
  }
  TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::
  ~TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>(param_1);
  return;
}

// Slot @ 14300e4f0

FSlotArguments * __cdecl
SSegmentedControl<int>::Slot(FSlotArguments *__return_storage_ptr__,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FSlotArguments *pFVar4;
  
  pFVar3 = ::operator_new(0xf8);
  if (pFVar3 == (FSlot *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
  }
  else {
    pFVar3 = FSlot::FSlot(pFVar3,param_1);
    __return_storage_ptr__->_padding_ = (longlong)pFVar3;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    if (pFVar3 != (FSlot *)0x0) goto LAB_14300e566;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSlotArguments *)(*pcVar1)();
    return pFVar4;
  }
LAB_14300e566:
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  FText::FText(&(__return_storage_ptr__->_Text).Value);
  (__return_storage_ptr__->_Text).bIsSet = false;
  *(undefined8 *)&(__return_storage_ptr__->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->_Text).Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->_Text).Getter.field_0x8 = 0;
  FText::FText(&(__return_storage_ptr__->_ToolTip).Value);
  (__return_storage_ptr__->_ToolTip).bIsSet = false;
  *(undefined8 *)&(__return_storage_ptr__->_ToolTip).Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->_ToolTip).Getter.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->_ToolTip).Getter.field_0x10 = 0;
  (__return_storage_ptr__->_ToolTipWidget).Value.Object = (IToolTip *)0x0;
  (__return_storage_ptr__->_ToolTipWidget).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->_ToolTipWidget).bIsSet = false;
  *(undefined8 *)&(__return_storage_ptr__->_ToolTipWidget).Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->_ToolTipWidget).Getter.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->_ToolTipWidget).Getter.field_0x10 = 0;
  (__return_storage_ptr__->_Icon).Value = (FSlateBrush *)0x0;
  (__return_storage_ptr__->_Icon).bIsSet = false;
  *(undefined8 *)&(__return_storage_ptr__->_Icon).Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->_Icon).Getter.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->_Icon).Getter.field_0x10 = 0;
  (__return_storage_ptr__->_Value).bIsSet = false;
  return __return_storage_ptr__;
}

// UpdateCheckboxValuesIfNeeded @ 143015430

void __thiscall SSegmentedControl<int>::UpdateCheckboxValuesIfNeeded(SSegmentedControl<int> *this)

{
  void *_Src;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  uint uVar4;
  atomic<int> aVar5;
  ForAnyElementType FVar6;
  int iVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TAttribute<ECheckBoxState> local_28;
  TReferenceControllerBase<1> *pTVar12;
  
  if (this->CurrentValuesIsBound == false) {
    local_30 = *(int *)&(this->CurrentValues).field_0x8;
    lVar8 = (longlong)local_30;
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    _Src = *(void **)&this->CurrentValues;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar8 << 2);
    }
    iVar7 = (this->Children).Children.ArrayNum;
    pTVar12 = pTVar10;
    pTVar13 = pTVar10;
    if (0 < iVar7) {
      do {
        uVar11 = (uint)pTVar12;
        uVar4 = 0;
        if ((int)uVar11 < iVar7) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar8 = *(longlong *)
                 ((longlong)&pTVar13->_padding_ +
                 (longlong)(this->Children).Children.AllocatorInstance.Data);
        pTVar12 = *(TReferenceControllerBase<1> **)(lVar8 + 0xf0);
        pTVar9 = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = pTVar12->SharedReferenceCount;
          do {
            pTVar9 = pTVar10;
            if (aVar2 == (atomic<int>)0x0) goto LAB_143015551;
            LOCK();
            aVar5 = pTVar12->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          pTVar9 = pTVar12;
          if (*(SCheckBox **)(lVar8 + 0xe8) != (SCheckBox *)0x0) {
            if (local_38.Data != local_38.Data + (longlong)local_30 * 4) {
              FVar6.Data = local_38.Data;
              do {
                if (*(int *)FVar6.Data == *(int *)(lVar8 + 0xe0)) {
                  local_28.Value = Checked;
                  goto LAB_1430155d7;
                }
                FVar6.Data = FVar6.Data + 4;
              } while (FVar6.Data != local_38.Data + (longlong)local_30 * 4);
            }
            local_28.Value = Unchecked;
LAB_1430155d7:
            local_28.bIsSet = true;
            local_28.Getter._16_8_ = 0;
            local_28.Getter._0_8_ = 0;
            local_28.Getter._8_8_ = 0;
            SCheckBox::SetIsChecked(*(SCheckBox **)(lVar8 + 0xe8),&local_28);
          }
        }
LAB_143015551:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        iVar7 = (this->Children).Children.ArrayNum;
        pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)(uVar11 + 1);
        pTVar13 = (TReferenceControllerBase<1> *)&pTVar13->SharedReferenceCount;
      } while ((int)(uVar11 + 1) < iVar7);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

