// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 16

// operator() @ 142d69d70

void __thiscall `SCheckBoxList::HandleGenerateRow'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SCheckBoxList *this_00;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  FReadAccessScope local_28;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  this_00 = *(SCheckBoxList **)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SCheckBoxList::UpdateAllChecked(this_00);
  pFVar3 = (this_00->Items).AllocatorInstance.Data;
  pFVar5 = pFVar3;
  do {
    if (pFVar5 == pFVar3 + (longlong)(this_00->Items).ArrayNum * 0x10) {
      uVar6 = 0xffffffff;
LAB_142d69dd6:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_00->OnItemCheckStateChanged,&local_28);
      if ((*(int *)&(this_00->OnItemCheckStateChanged).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this_00->OnItemCheckStateChanged).field_0x8,
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,uVar6 & 0xffffffff);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    }
    if (*(longlong *)pFVar5 == lVar2) {
      uVar6 = (longlong)pFVar5 - (longlong)pFVar3 >> 4;
      goto LAB_142d69dd6;
    }
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// AddItem @ 142d71540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall SCheckBoxList::AddItem(SCheckBoxList *this,FText *param_1,bool param_2)

{
  int *piVar1;
  TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  STextBlock *pSVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FArguments *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_618;
  TReferenceControllerBase<1> *pTStack_610;
  FText local_608;
  bool local_5f8;
  undefined1 local_5f0 [8];
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  FName local_5d8;
  FMemScope local_5d0;
  FDestructionSentinel local_5c8;
  TSharedRef<STextBlock,1> local_5b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a0;
  FArguments local_588;
  
  pTVar2 = &this->Items;
  pFVar8 = STextBlock::FArguments::FArguments(&local_588);
  local_608.TextData.Reference = (param_1->TextData).Reference;
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 8))
              (local_608.TextData.Reference,local_res20);
  }
  local_608.Flags = param_1->Flags;
  local_5e0 = 0;
  local_5f8 = true;
  local_5f0 = (undefined1  [8])0x0;
  FStack_5e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar8->_Text).Value,&local_608);
  (pFVar8->_Text).bIsSet = local_5f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_5c8);
  if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e8,0,0,0x10);
    local_5e0 = local_5e0 & 0xffffffff00000000;
  }
  if (local_5c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c8.Accessor,&local_5c8);
  }
  if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5d0,&local_5d8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5a0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
             ,0x88,local_res8);
  FMemScope::~FMemScope(&local_5d0);
  FLLMScope::~FLLMScope(local_res10);
  pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_5a0,&local_5b0,pFVar8);
  pTStack_610 = ::operator_new(0x28);
  if (pTStack_610 == (TReferenceControllerBase<1> *)0x0) {
    pTStack_610 = _UNK_150651568;
    local_618 = ___xmm_00000000000000000000000000000010;
  }
  else {
    pTStack_610->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_610->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_610->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFItemPair_CheckBoxList___00_SharedPointerInternals__6B_
    ;
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar9->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTStack_610[1]._padding_ = (longlong)pSVar4;
      pTStack_610[1].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_610[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      pTStack_610[1]._padding_ = (longlong)pSVar4;
      *(TReferenceControllerBase<1> **)&pTStack_610[1].SharedReferenceCount = pTVar3;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(bool *)&pTStack_610[2]._padding_ = param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_618 = pTStack_610 + 1;
    if (local_618 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
  }
  pFVar10 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar10 <= (FScriptContainerElement *)&local_618) &&
     ((FScriptContainerElement *)&local_618 < pFVar10 + (longlong)(this->Items).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->Items).ArrayNum;
  piVar1 = &(this->Items).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Items).ArrayNum = iVar7 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar10 = local_618;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTStack_610;
  if (pTStack_610 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_610->SharedReferenceCount = (atomic<int>)((int)pTStack_610->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_610);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_588);
  UpdateAllChecked(this);
  if ((this->ListView).Object == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  (**(code **)(((this->ListView).Object)->_padding_ + 0x250))();
  return iVar7;
}

// AddItem @ 142d718e0

int __thiscall
SCheckBoxList::AddItem(SCheckBoxList *this,TSharedRef<SWidget,1> *param_1,bool param_2)

{
  int *piVar1;
  TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<CheckBoxList::FItemPair,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<CheckBoxList::FItemPair,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  bool local_res18 [16];
  TSharedRef<CheckBoxList::FItemPair,1> local_28;
  
  pTVar2 = &this->Items;
  local_res18[0] = param_2;
  pTVar8 = MakeShared<CheckBoxList::FItemPair,1,TSharedRef<SWidget,1>_&,bool_&>
                     (&local_28,param_1,local_res18);
  pTVar3 = (TSharedRef<CheckBoxList::FItemPair,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= pTVar8) && (pTVar8 < pTVar3 + (this->Items).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->Items).ArrayNum;
  piVar1 = &(this->Items).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Items).ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FItemPair **)pFVar9 = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  UpdateAllChecked(this);
  if ((this->ListView).Object == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  (**(code **)(((this->ListView).Object)->_padding_ + 0x250))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar7;
}

// Construct @ 142d7a930

void __thiscall SCheckBoxList::Construct(SCheckBoxList *this,FArguments *param_1)

{
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Construct(this,param_1,&local_18,false);
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TSharedRef<SWidget,1> *)local_18.AllocatorInstance.Data != (TSharedRef<SWidget,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// Construct @ 142d7a980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCheckBoxList::Construct
          (SCheckBoxList *this,FArguments *param_1,
          TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  byte *pbVar2;
  TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  SCheckBox *pSVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  SCheckBoxList *pSVar12;
  FArguments *pFVar13;
  FSharedReferencer<1> FVar14;
  FSharedReferencer<1> FVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  ulonglong uVar20;
  TReferenceControllerBase<1> *pTVar21;
  FArguments *pFVar22;
  FArguments *pFVar23;
  undefined8 *puVar24;
  TSharedRef<SWidget_const_,1> *pTVar25;
  ulong64 uVar26;
  TSharedRef<SWidget,1> *pTVar27;
  TSharedRef<SCheckBox,1> *pTVar28;
  TAttribute<FText> *this_01;
  SHeaderRow *pSVar29;
  SHeaderRow *pSVar30;
  FArguments *pFVar31;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *pSVar32;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *pSVar33;
  undefined ***pppuVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  FScriptContainerElement *pFVar37;
  atomic<int> *paVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  FScriptContainerElement *pFVar41;
  FMemScope FVar42;
  ECheckBoxState EVar43;
  undefined1 auStackY_1798 [32];
  undefined1 local_1748;
  undefined1 local_1747;
  T0RequiredArgs local_1746;
  T0RequiredArgs local_1745;
  T0RequiredArgs local_1744 [4];
  FArguments *local_1740;
  FMemScope local_1738;
  TReferenceControllerBase<1> *local_1730;
  TReferenceControllerBase<1> *pTStack_1728;
  FLLMScope local_1720;
  FLLMScope local_171c;
  FLLMScope local_1718 [2];
  FName local_1710;
  uint uStack_1708;
  undefined4 uStack_1704;
  SCheckBoxList *local_1700;
  undefined1 local_16f8 [8];
  ForAnyElementType local_16f0;
  uint local_16e8;
  uint local_16e0;
  uint local_16dc;
  FArguments *local_16d8;
  TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
  local_16d0;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_16b8;
  FName local_16a0;
  undefined4 uStack_1698;
  undefined4 uStack_1694;
  SWidget *local_1690;
  TReferenceControllerBase<1> *pTStack_1688;
  undefined4 local_1680;
  undefined1 local_167c;
  undefined1 local_1678 [8];
  void *pvStack_1670;
  undefined8 local_1668;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *local_1660;
  undefined8 uStack_1658;
  float local_1650;
  undefined1 local_164c;
  undefined1 local_1648 [8];
  void *pvStack_1640;
  undefined8 local_1638;
  FName local_1630;
  FMemScope local_1628;
  FMemScope local_1620;
  undefined8 local_1618;
  FSharedReferencer<1> FStack_1610;
  TSharedRef<SWidget,1> local_1608;
  FDestructionSentinel local_15f8;
  FDestructionSentinel local_15e0;
  undefined1 *local_15c8;
  FDestructionSentinel local_15c0;
  undefined1 *local_15a8;
  FDestructionSentinel local_15a0;
  longlong *local_1588;
  FDestructionSentinel local_1580;
  undefined1 *local_1568;
  TSharedRef<SCheckBox,1> local_1560;
  TSharedRef<SWidget,1> local_1550;
  SHeaderRow *local_1540;
  TReferenceControllerBase<1> *pTStack_1538;
  TSharedRef<SWidget_const_,1> local_1530;
  TSharedRef<SWidget,1> local_1520;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1510;
  FReadAccessScope local_14f8;
  TAttribute<FText> local_14e0;
  undefined1 local_14b0 [528];
  undefined1 local_12a0 [24];
  undefined1 local_1288 [40];
  ForAnyElementType local_1260;
  undefined1 local_1250 [24];
  FArguments local_1238;
  FArguments local_dc0;
  FArguments local_948;
  FArguments local_568;
  code *local_88;
  undefined **local_78;
  undefined1 local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1798;
  pTVar3 = &this->Items;
  this->CheckBoxStyle = param_1->_CheckBoxStyle;
  uVar39 = param_2->ArrayNum;
  local_16dc = 0;
  local_1747 = param_3;
  local_1740 = (FArguments *)param_2;
  local_1700 = this;
  local_16d8 = param_1;
  if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
  }
  piVar1 = &(this->Items).ArrayMax;
  if (*piVar1 < (int)uVar39) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar39,&pTVar3->AllocatorInstance,(this->Items).ArrayNum,piVar1);
  }
  pTVar11 = _UNK_150651568;
  pTVar8 = ___xmm_00000000000000000000000000000010;
  local_16e0 = param_2->ArrayNum;
  uVar20 = (ulonglong)(int)local_16e0;
  pFVar41 = (param_2->AllocatorInstance).Data;
  pFVar37 = pFVar41 + uVar20 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar20) {
      local_1748 = 0;
      `TCheckedPointerIterator<TSharedRef<SWidget,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1748);
    }
    pFVar13 = local_16d8;
    uVar39 = local_16dc;
    pSVar12 = local_1700;
    if (pFVar41 == pFVar37) break;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar41 + 8);
    lVar5 = *(longlong *)pFVar41;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar38 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar38 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    pTVar21 = ::operator_new(0x28);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      pTStack_1728 = pTVar11;
      local_1730 = pTVar8;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFItemPair_CheckBoxList___00_SharedPointerInternals__6B_
      ;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        pTVar21[1]._padding_ = lVar5;
        pTVar21[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar21[1].WeakReferenceCount = (atomic<int>)0x0;
      }
      else {
        LOCK();
        *paVar38 = (atomic<int>)((int)*paVar38 + 1);
        UNLOCK();
        pTVar21[1]._padding_ = lVar5;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar4;
        LOCK();
        *paVar38 = (atomic<int>)((int)*paVar38 + 1);
        UNLOCK();
      }
      *(undefined1 *)&pTVar21[2]._padding_ = local_1747;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_1730 = pTVar21 + 1;
      pTStack_1728 = pTVar21;
      if ((local_1730 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar35 = (pTVar3->AllocatorInstance).Data;
    piVar1 = &(this->Items).ArrayMax;
    if (((pFVar35 <= (FScriptContainerElement *)&local_1730) &&
        ((FScriptContainerElement *)&local_1730 < pFVar35 + (longlong)*piVar1 * 0x10)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar19 = (this->Items).ArrayNum;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    pFVar35 = (pTVar3->AllocatorInstance).Data;
    (this->Items).ArrayNum = iVar19 + 1;
    *(TReferenceControllerBase<1> **)(pFVar35 + (longlong)iVar19 * 0x10) = local_1730;
    *(TReferenceControllerBase<1> **)(pFVar35 + (longlong)iVar19 * 0x10 + 8) = pTStack_1728;
    if (pTStack_1728 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_1728->SharedReferenceCount =
           (atomic<int>)((int)pTStack_1728->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1728);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar20 = (ulonglong)local_16e0;
    pFVar41 = pFVar41 + 0x10;
    param_2 = (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)local_1740;
  }
  bVar16 = local_16d8->_IncludeGlobalCheckBoxInHeaderRow;
  this_00 = &local_1700->OnItemCheckStateChanged;
  if (&local_16d8->_OnItemCheckStateChanged != this_00) {
    local_16f8 = (undefined1  [8])0x0;
    local_16f0.Data = (FScriptContainerElement *)0x0;
    local_16e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &local_16d8->_OnItemCheckStateChanged,&local_14f8);
    if ((*(uint *)&(pFVar13->_OnItemCheckStateChanged).field_0x10 != uVar39) &&
       (plVar6 = *(longlong **)&(pFVar13->_OnItemCheckStateChanged).field_0x8,
       plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x50))(plVar6,local_16f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_14f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16f8,
               (FWriteAccessScope *)&local_15f8);
    if ((local_16e8 != uVar39) && (local_16f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_16f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_16f0,0,0,0x10);
      local_16e8 = 0;
    }
    if (local_15f8.bDestroyed == (bool)(char)uVar39) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_15f8.Accessor,&local_15f8);
    }
    if (local_16f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_16f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_16f8);
  }
  pFVar22 = SHeaderRow::FArguments::FArguments((FArguments *)local_14b0);
  local_1740 = pFVar22;
  SHeaderRow::FColumn::FArguments::FArguments(&local_dc0);
  local_dc0._ColumnId = CheckBoxList::ColumnID_CheckBox;
  pFVar23 = SCheckBox::FArguments::FArguments(&local_948);
  pFVar23->_Style = local_16d8->_CheckBoxStyle;
  (pFVar23->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_15e0);
  local_15c8 = &(pFVar23->_IsChecked).Getter.field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_15c8);
  FVar42 = local_1738;
  if (puVar24 != (undefined8 *)0x0) {
    uStack_1704 = uStack_1658._4_4_;
    local_1710 = (FName)GetToggleSelectedState;
    uStack_1708 = uVar39;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar12->_padding_,&local_1530);
    FVar42 = (FMemScope)(pTVar25->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar25->Object;
    if (FVar42 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 8) + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSCheckBoxList___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = pSVar7;
    *(FMemScope *)(puVar24 + 4) = FVar42;
    if (FVar42 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 0xc) + 1);
      UNLOCK();
    }
    uVar39 = 0x38;
    *(FName *)(puVar24 + 5) = local_1710;
    puVar24[6] = CONCAT44(uStack_1704,uStack_1708);
  }
  if ((uVar39 & 0x20) != 0) {
    uVar39 = uVar39 & 0xffffffdf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar42);
  }
  if ((uVar39 & 0x10) != 0) {
    uVar39 = uVar39 & 0xffffffef;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar42);
  }
  if ((uVar39 & 8) != 0) {
    uVar39 = uVar39 & 0xfffffff7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1530.SharedReferenceCount.ReferenceController);
  }
  if (local_15e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_15e0.Accessor,&local_15e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar23->_OnCheckStateChanged,(FWriteAccessScope *)&local_15c0);
  local_15a8 = &(pFVar23->_OnCheckStateChanged).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_15a8);
  FVar42 = local_1738;
  if (puVar24 != (undefined8 *)0x0) {
    uStack_1704 = uStack_1658._4_4_;
    local_1710 = (FName)OnToggleSelectedCheckBox;
    uStack_1708 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&local_1700->_padding_,&local_1520);
    FVar42 = (FMemScope)(pTVar27->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar27->Object;
    if (FVar42 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 8) + 1);
      UNLOCK();
    }
    uVar39 = uVar39 | 7;
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCheckBoxList___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = pSVar7;
    *(FMemScope *)(puVar24 + 4) = FVar42;
    if (FVar42 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 0xc) + 1);
      UNLOCK();
    }
    *(FName *)(puVar24 + 5) = local_1710;
    puVar24[6] = CONCAT44(uStack_1704,uStack_1708);
    pFVar22 = local_1740;
  }
  if ((uVar39 & 4) != 0) {
    uVar39 = uVar39 & 0xfffffffb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar42);
  }
  if ((uVar39 & 2) != 0) {
    uVar39 = uVar39 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar42);
  }
  if ((uVar39 & 1) != 0) {
    uVar39 = uVar39 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1520.SharedReferenceCount.ReferenceController);
  }
  if (local_15c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_15c0.Accessor,&local_15c0);
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SCheckBoxList::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SCheckBoxList::Construct'::__l2::<lambda_1>,EVisibility>::Call;
  local_60 = (undefined ***)0x0;
  *(undefined1 *)((longlong)&pFVar23->_padding_ + 1) = 1;
  local_70 = bVar16;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar23->_padding_,
             (FWriteAccessScope *)&local_15a0);
  local_1588 = &pFVar23->_padding_;
  puVar24 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1588);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar24[4] = local_88;
    puVar24[9] = 0;
    if (local_88 != (code *)0x0) {
      pppuVar34 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar34 = local_60;
      }
      (*(code *)**pppuVar34)();
    }
  }
  if (local_15a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_15a0.Accessor,&local_15a0);
  }
  FLLMScope::FLLMScope(&local_1720,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1630 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_1630,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_1510,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
             ,0x6e,&local_1746);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(&local_1720);
  pTVar28 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1510,&local_1560,pFVar23);
  FVar15.ReferenceController =
       local_dc0._HeaderContent.Widget.SharedReferenceCount.ReferenceController;
  pTVar8 = (pTVar28->SharedReferenceCount).ReferenceController;
  pSVar9 = pTVar28->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1690 = local_dc0._HeaderContent.Widget.Object;
  pTStack_1688 = local_dc0._HeaderContent.Widget.SharedReferenceCount.ReferenceController;
  local_dc0._HeaderContent.Widget.Object = (SWidget *)pSVar9;
  local_dc0._HeaderContent.Widget.SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  local_dc0._FixedWidth.TypedValue = 23.0;
  local_dc0._FixedWidth.bIsSet = true;
  pFVar22 = SHeaderRow::FArguments::operator+(pFVar22,&local_dc0);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1238);
  local_1238._ColumnId = CheckBoxList::ColumnID_Item;
  this_01 = TAttribute<FText>::TAttribute<FText><FText>(&local_14e0,&local_16d8->_ItemHeaderLabel);
  FText::operator=(&local_1238._DefaultLabel.Value,&this_01->Value);
  local_1238._DefaultLabel.bIsSet = this_01->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1238._DefaultLabel.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->Getter);
  TAttribute<FText>::~TAttribute<FText>(this_01);
  local_1650 = __real_3f800000;
  local_1638 = 0;
  local_1238._FillWidth.Value = __real_3f800000;
  local_164c = 1;
  local_1648 = (undefined1  [8])0x0;
  pvStack_1640 = (void *)0x0;
  local_1238._FillWidth.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1238._FillWidth.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1648);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1648);
  if (pvStack_1640 != (void *)0x0) {
    FMemory::Free(pvStack_1640);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1648);
  pFVar22 = SHeaderRow::FArguments::operator+(pFVar22,&local_1238);
  FLLMScope::FLLMScope(local_1718,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1710 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1620,&local_1710,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_16b8,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
             ,0x6b,&local_1745);
  FMemScope::~FMemScope(&local_1620);
  FLLMScope::~FLLMScope(local_1718);
  pSVar29 = TSharedPtr<SHeaderRow,1>::operator->(&local_16b8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar29,(FSlateBaseNamedArgs *)pFVar22);
  pSVar29 = local_16b8._Widget.Object;
  SHeaderRow::Construct(local_16b8._Widget.Object,pFVar22);
  pSVar30 = TSharedPtr<SHeaderRow,1>::operator->(&local_16b8._Widget);
  if ((pSVar30->_padding_ & 0x10) == 0) {
    cVar17 = (**(code **)(pSVar30->_padding_ + 0x228))(pSVar30);
    bVar18 = 0;
    if (cVar17 != '\0') goto LAB_142d7b2bd;
  }
  else {
LAB_142d7b2bd:
    bVar18 = 0x20;
  }
  *(byte *)&pSVar30->_padding_ = (byte)pSVar30->_padding_ & 0xdf;
  *(byte *)&pSVar30->_padding_ = (byte)pSVar30->_padding_ | bVar18;
  pSVar30 = TSharedPtr<SHeaderRow,1>::operator->(&local_16b8._Widget);
  pbVar2 = (byte *)((longlong)&pSVar30->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_16b8._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar15.ReferenceController = local_16b8._Widget.SharedReferenceCount.ReferenceController;
  local_16b8._Widget.Object = (SHeaderRow *)0x0;
  local_16b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((pSVar29 == (SHeaderRow *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1560.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1510._Widget.SharedReferenceCount.ReferenceController);
  if (local_88 != (code *)0x0) {
    pppuVar34 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar34 = local_60;
    }
    (*(code *)(*pppuVar34)[2])();
  }
  SCheckBox::FArguments::~FArguments(&local_948);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_dc0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1250);
  if ((void *)local_1250._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1250._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1250);
  if (local_1260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1260.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1288);
  if ((void *)local_1288._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1288._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1288);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_12a0);
  if ((void *)local_12a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12a0);
  if ((FScriptContainerElement *)local_14b0._512_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_14b0._512_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_14b0);
  pSVar12 = local_1700;
  pFVar31 = SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::FArguments(&local_568);
  local_1618 = 0;
  FStack_1610.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar31->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar31->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
  if (&pFVar31->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>,1>
       *)&local_1618) {
    (pFVar31->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar31->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_1610)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1610.ReferenceController);
  pFVar31->_ListItemsSource_ArrayPointer = &pSVar12->Items;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnGenerateRow,
             (FWriteAccessScope *)&local_1580);
  local_1568 = &(pFVar31->_OnGenerateRow).field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1568);
  FVar42 = local_1738;
  if (puVar24 != (undefined8 *)0x0) {
    uStack_1694 = uStack_1658._4_4_;
    local_16a0 = (FName)HandleGenerateRow;
    uStack_1698 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&pSVar12->_padding_,&local_1550);
    FVar42 = (FMemScope)(pTVar27->SharedReferenceCount).ReferenceController;
    local_1740 = (FArguments *)pTVar27->Object;
    if (FVar42 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 8) + 1);
      UNLOCK();
    }
    uVar39 = uVar39 | 0x1c0;
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_UFItemPair_CheckBoxList___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar26;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCheckBoxList___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_UFItemPair_CheckBoxList___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar24[3] = local_1740;
    *(FMemScope *)(puVar24 + 4) = FVar42;
    if (FVar42 != (FMemScope)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar42 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar42 + 0xc) + 1);
      UNLOCK();
    }
    *(FName *)(puVar24 + 5) = local_16a0;
    puVar24[6] = CONCAT44(uStack_1694,uStack_1698);
  }
  if ((uVar39 >> 8 & 1) != 0) {
    uVar39 = uVar39 & 0xfffffeff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar42);
  }
  if ((char)uVar39 < '\0') {
    uVar39 = uVar39 & 0xffffff7f;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar42);
  }
  if ((uVar39 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1550.SharedReferenceCount.ReferenceController);
  }
  if (local_1580.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1580.Accessor,&local_1580);
  }
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1540 = (pFVar31->_HeaderRow).Object;
  pTStack_1538 = (pFVar31->_HeaderRow).SharedReferenceCount.ReferenceController;
  (pFVar31->_HeaderRow).Object = pSVar29;
  (pFVar31->_HeaderRow).SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  local_167c = 1;
  pFVar41 = (FScriptContainerElement *)0x0;
  local_1668 = 0;
  local_1680 = 0;
  local_1678 = (undefined1  [8])0x0;
  pvStack_1670 = (void *)0x0;
  (pFVar31->_SelectionMode).Value = None;
  (pFVar31->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1678);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1678);
  if (pvStack_1670 != (void *)0x0) {
    FMemory::Free(pvStack_1670);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1678);
  FLLMScope::FLLMScope(&local_171c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1738,&local_16a0,true);
  TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_16d0,"SListView<TSharedRef<CheckBoxList::FItemPair>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
             ,0x7b,local_1744);
  FMemScope::~FMemScope(&local_1738);
  FLLMScope::~FLLMScope(&local_171c);
  pSVar12 = local_1700;
  if (local_16d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_16d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1660 = (local_1700->ListView).Object;
  uStack_1658 = (local_1700->ListView).SharedReferenceCount.ReferenceController;
  (local_1700->ListView).Object = local_16d0._Widget.Object;
  (local_1700->ListView).SharedReferenceCount.ReferenceController =
       local_16d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1658);
  pSVar32 = TSharedPtr<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::operator->
                      (&local_16d0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar32,(FSlateBaseNamedArgs *)pFVar31);
  pSVar32 = local_16d0._Widget.Object;
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::Construct(local_16d0._Widget.Object,pFVar31);
  pSVar33 = TSharedPtr<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::operator->
                      (&local_16d0._Widget);
  if ((pSVar33->_padding_ & 0x10) == 0) {
    cVar17 = (**(code **)(pSVar33->_padding_ + 0x228))(pSVar33);
    bVar18 = 0;
    if (cVar17 == '\0') goto LAB_142d7b780;
  }
  bVar18 = 0x20;
LAB_142d7b780:
  *(byte *)&pSVar33->_padding_ = (byte)pSVar33->_padding_ & 0xdf;
  *(byte *)&pSVar33->_padding_ = (byte)pSVar33->_padding_ | bVar18;
  pSVar33 = TSharedPtr<SListView<TSharedRef<CheckBoxList::FItemPair,1>_>,1>::operator->
                      (&local_16d0._Widget);
  pbVar2 = (byte *)((longlong)&pSVar33->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_16d0._Widget.Object == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar14.ReferenceController = local_16d0._Widget.SharedReferenceCount.ReferenceController;
  local_16d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_16d0._Widget.Object = (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
  if ((pSVar32 == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1608.Object = (SWidget *)pSVar32;
  local_1608.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &pSVar12->_padding_,&local_1608);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::~FArguments(&local_568);
  pFVar37 = (pSVar12->Items).AllocatorInstance.Data;
  pFVar35 = pFVar37 + (longlong)(pSVar12->Items).ArrayNum * 0x10;
  for (; pFVar37 != pFVar35; pFVar37 = pFVar37 + 0x10) {
    if (*(char *)(*(longlong *)pFVar37 + 0x10) != '\0') {
      pFVar35 = (pSVar12->Items).AllocatorInstance.Data;
      pFVar40 = pFVar35 + (longlong)(pSVar12->Items).ArrayNum * 0x10;
      goto LAB_142d7b8a0;
    }
  }
  pFVar35 = (pSVar12->Items).AllocatorInstance.Data;
  pFVar40 = pFVar35 + (longlong)(pSVar12->Items).ArrayNum * 0x10;
  pFVar36 = pFVar41;
  pFVar37 = pFVar41;
  if (pFVar35 != pFVar40) {
LAB_142d7b8a0:
    do {
      pFVar36 = pFVar35;
      if (*(char *)(*(longlong *)pFVar35 + 0x10) == '\0') break;
      pFVar35 = pFVar35 + 0x10;
      pFVar36 = pFVar41;
    } while (pFVar35 != pFVar40);
  }
  if ((pFVar37 == (FScriptContainerElement *)0x0) || (pFVar36 == (FScriptContainerElement *)0x0)) {
    EVar43 = pFVar37 != (FScriptContainerElement *)0x0;
  }
  else {
    EVar43 = Undetermined;
  }
  pSVar12->bAllCheckedState = EVar43;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  return;
}

// Construct @ 142d7b920

void __thiscall
SCheckBoxList::Construct
          (SCheckBoxList *this,FArguments *param_1,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  STextBlock *this_00;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  FArguments *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [8];
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> local_638;
  T0RequiredArgs local_628 [4];
  FLLMScope local_624;
  TSharedRef<SWidget,1> local_620;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_610;
  FText local_5f8;
  bool local_5e8;
  undefined1 local_5e0 [8];
  ForAnyElementType FStack_5d8;
  ulonglong local_5d0;
  undefined1 local_5c8 [4];
  FName local_5c4;
  FMemScope local_5b8;
  FDestructionSentinel local_5b0;
  FArguments local_598;
  
  uVar2 = param_2->ArrayNum;
  local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_638.ArrayNum = 0;
  local_638.ArrayMax = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&local_638.AllocatorInstance,0,&local_638.ArrayMax);
  }
  iVar3 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar3 * 0x10;
  do {
    if (param_2->ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FText_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar11 == pFVar12) {
      Construct(this,param_1,&local_638,param_3);
      DestructItems<TSharedRef<SWidget,1>,int>
                ((TSharedRef<SWidget,1> *)local_638.AllocatorInstance.Data,local_638.ArrayNum);
      if ((TSharedRef<SWidget,1> *)local_638.AllocatorInstance.Data != (TSharedRef<SWidget,1> *)0x0)
      {
        FMemory::Free(local_638.AllocatorInstance.Data);
      }
      return;
    }
    pFVar10 = STextBlock::FArguments::FArguments(&local_598);
    local_5f8.TextData.Reference = *(ITextData **)pFVar11;
    if (local_5f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5f8.TextData.Reference + 8))
                (local_5f8.TextData.Reference,local_5c8);
    }
    local_5f8.Flags = *(uint *)(pFVar11 + 8);
    local_5d0 = 0;
    local_5e8 = true;
    local_5e0 = (undefined1  [8])0x0;
    FStack_5d8.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar10->_Text).Value,&local_5f8);
    (pFVar10->_Text).bIsSet = local_5e8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e0,
               (FWriteAccessScope *)&local_5b0);
    if (((int)local_5d0 != 0) && (FStack_5d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5d8,0,0,0x10);
      local_5d0 = local_5d0 & 0xffffffff00000000;
    }
    if (local_5b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
    }
    if (FStack_5d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5e0);
    if (local_5f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(&local_624,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_5c4 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_5b8,&local_5c4,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_610,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
               ,0x59,local_628);
    FMemScope::~FMemScope(&local_5b8);
    FLLMScope::~FLLMScope(&local_624);
    this_00 = local_610._Widget.Object;
    if ((local_610._Widget.Object == (STextBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar10);
    STextBlock::Construct(this_00,pFVar10);
    if ((this_00 == (STextBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_00->_padding_ & 0x10) == 0) {
      cVar7 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
      bVar8 = 0;
      if (cVar7 != '\0') goto LAB_142d7bbc0;
    }
    else {
LAB_142d7bbc0:
      bVar8 = 0x20;
    }
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar8;
    if ((this_00 == (STextBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((this_00 == (STextBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar5.ReferenceController = local_610._Widget.SharedReferenceCount.ReferenceController;
    local_610._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_610._Widget.Object = (STextBlock *)0x0;
    if ((this_00 == (STextBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_620.Object = (SWidget *)this_00;
    local_620.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_638.AllocatorInstance.Data <= &local_620) &&
        (&local_620 <
         (TSharedRef<SWidget,1> *)
         (local_638.AllocatorInstance.Data + (longlong)local_638.ArrayMax * 0x10))) &&
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
    iVar9 = local_638.ArrayNum;
    if (local_638.ArrayNum == local_638.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_638.AllocatorInstance,&local_638.ArrayMax);
    }
    local_638.ArrayNum = iVar9 + 1;
    *(SWidget **)&local_638.AllocatorInstance.Data[(longlong)iVar9 * 0x10].field_0x0 =
         local_620.Object;
    *(TReferenceControllerBase<1> **)(local_638.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8)
         = local_620.SharedReferenceCount.ReferenceController;
    if (local_620.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_620.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_620.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_620.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_610._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_598);
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// GetNumCheckboxes @ 142dad220

int __thiscall SCheckBoxList::GetNumCheckboxes(SCheckBoxList *this)

{
  return (this->Items).ArrayNum;
}

// GetToggleSelectedState @ 142db2270

ECheckBoxState __thiscall SCheckBoxList::GetToggleSelectedState(SCheckBoxList *this)

{
  return this->bAllCheckedState;
}

// GetValues @ 142db2990

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
SCheckBoxList::GetValues
          (SCheckBoxList *this,TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->Items).ArrayNum;
  pFVar8 = (this->Items).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Items).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<CheckBoxList::FItemPair,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar9 = (FScriptContainerElement *)(*(longlong *)pFVar8 + 0x10);
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar8 = pFVar8 + 0x10;
    (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = *pFVar9;
  }
  return __return_storage_ptr__;
}

// HandleGenerateRow @ 142db2f00

TSharedRef<ITableRow,1> * __thiscall
SCheckBoxList::HandleGenerateRow
          (SCheckBoxList *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<CheckBoxList::FItemPair,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FItemPair *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TSlateDecl<CheckBoxList::SItemPair,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>_>
  *this_00;
  TSharedRef<CheckBoxList::SItemPair,1> *pTVar7;
  atomic<int> *paVar8;
  undefined1 local_2c8 [8];
  FDelegateAllocation local_2c0;
  FDestructionSentinel local_2b0;
  FDelegateAllocation *local_298;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>
  local_290;
  TSharedRef<CheckBoxList::SItemPair,1> local_280;
  TSlateDecl<CheckBoxList::SItemPair,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>_>
  local_270;
  undefined1 local_258 [512];
  undefined1 local_58 [32];
  
  pFVar4 = CheckBoxList::SItemPair::FArguments::FArguments((FArguments *)local_258);
  pFVar4->_CheckBoxStyle = this->CheckBoxStyle;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_2c8 = (undefined1  [8])0x0;
  local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_2b0);
  local_298 = &local_2c0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_2c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SCheckBoxList::HandleGenerateRow'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[4] = pFVar2;
    puVar5[3] = this;
    puVar5[5] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar4->_OnCheckUpdated,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_2b0);
  if ((local_2c0.DelegateSize != 0) &&
     (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_2c0,0,0,0x10);
    local_2c0.DelegateSize = 0;
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_2c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  local_290.Arg0 = param_2;
  local_290.Arg1 = param_1;
  this_00 = MakeTDecl<CheckBoxList::SItemPair,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>_>
                      (&local_270,"CheckBoxList::SItemPair",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SCheckBoxList.cpp"
                       ,0xdb,&local_290);
  pTVar7 = TSlateDecl<CheckBoxList::SItemPair,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedRef<CheckBoxList::FItemPair,1>_&>_>
           ::operator<<=(this_00,&local_280,pFVar4);
  __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// IsItemChecked @ 142db57f0

bool __thiscall SCheckBoxList::IsItemChecked(SCheckBoxList *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Items).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)*(undefined1 *)
                  (*(longlong *)((this->Items).AllocatorInstance.Data + (longlong)param_1 * 0x10) +
                  0x10);
  }
  return false;
}

// OnItemCheckBox @ 142dbfa10

void __thiscall
SCheckBoxList::OnItemCheckBox(SCheckBoxList *this,TSharedRef<CheckBoxList::FItemPair,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  FReadAccessScope local_28;
  
  UpdateAllChecked(this);
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Items).ArrayNum * 0x10) {
    pFVar3 = pFVar1;
    do {
      if (*(FItemPair **)pFVar3 == param_1->Object) {
        uVar4 = (longlong)pFVar3 - (longlong)pFVar1 >> 4;
        goto LAB_142dbfa63;
      }
      pFVar3 = pFVar3 + 0x10;
    } while (pFVar3 != pFVar1 + (longlong)(this->Items).ArrayNum * 0x10);
  }
  uVar4 = 0xffffffff;
LAB_142dbfa63:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnItemCheckStateChanged,&local_28);
  if ((*(int *)&(this->OnItemCheckStateChanged).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnItemCheckStateChanged).field_0x8, plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar4 & 0xffffffff);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnToggleSelectedCheckBox @ 142dca3d0

void __thiscall SCheckBoxList::OnToggleSelectedCheckBox(SCheckBoxList *this,ECheckBoxState param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FReadAccessScope local_38;
  
  iVar1 = (this->Items).ArrayNum;
  pFVar4 = (this->Items).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Items).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<CheckBoxList::FItemPair,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar5) break;
    lVar2 = *(longlong *)pFVar4;
    pFVar4 = pFVar4 + 0x10;
    *(bool *)(lVar2 + 0x10) = param_1 == Checked;
  }
  this->bAllCheckedState = param_1 == Checked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnItemCheckStateChanged,&local_38);
  if ((*(int *)&(this->OnItemCheckStateChanged).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnItemCheckStateChanged).field_0x8, plVar3 != (longlong *)0x0))
  {
    (**(code **)(*plVar3 + 0x68))(plVar3,0xffffffff);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return;
}

// RemoveAll @ 142dd4760

void __thiscall SCheckBoxList::RemoveAll(SCheckBoxList *this)

{
  int *piVar1;
  int iVar2;
  TSharedRef<CheckBoxList::FItemPair,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  piVar1 = &(this->Items).ArrayMax;
  pTVar3 = (TSharedRef<CheckBoxList::FItemPair,1> *)(this->Items).AllocatorInstance.Data;
  iVar2 = (this->Items).ArrayNum;
  if ((this->Items).ArrayMax < 0) {
    DestructItems<TSharedRef<CheckBoxList::FItemPair,1>,int>(pTVar3,iVar2);
    (this->Items).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Items).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<CheckBoxList::FItemPair,1>,int>(pTVar3,iVar2);
    (this->Items).ArrayNum = 0;
  }
  UpdateAllChecked(this);
  if ((this->ListView).Object == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142dd4812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ListView).Object)->_padding_ + 0x250))();
  return;
}

// RemoveItem @ 142dd5380

void __thiscall SCheckBoxList::RemoveItem(SCheckBoxList *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  if ((-1 < param_1) && (param_1 < (this->Items).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Items).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
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
    _Dst = (this->Items).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(_Dst + 8));
    iVar5 = (this->Items).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
    }
    piVar1 = &(this->Items).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Items).AllocatorInstance,(this->Items).ArrayNum,
               &(this->Items).ArrayMax);
    UpdateAllChecked(this);
    if (((this->ListView).Object == (SListView<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(((this->ListView).Object)->_padding_ + 0x250))();
  }
  return;
}

// UpdateAllChecked @ 142ddc5f0

void __thiscall SCheckBoxList::UpdateAllChecked(SCheckBoxList *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Items).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(this->Items).ArrayNum * 0x10;
  for (pFVar2 = pFVar1; pFVar2 != pFVar3; pFVar2 = pFVar2 + 0x10) {
    if (*(char *)(*(longlong *)pFVar2 + 0x10) != '\0') goto LAB_142ddc630;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
  for (; pFVar1 != pFVar3; pFVar1 = pFVar1 + 0x10) {
LAB_142ddc630:
    if (*(char *)(*(longlong *)pFVar1 + 0x10) == '\0') goto LAB_142ddc644;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_142ddc644:
  if ((pFVar2 != (FScriptContainerElement *)0x0) && (pFVar1 != (FScriptContainerElement *)0x0)) {
    this->bAllCheckedState = Undetermined;
    return;
  }
  this->bAllCheckedState = pFVar2 != (FScriptContainerElement *)0x0;
  return;
}

