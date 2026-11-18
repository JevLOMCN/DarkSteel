// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 28

// FUICommandList @ 1426fe400

FUICommandList * __thiscall FUICommandList::FUICommandList(FUICommandList *this)

{
  this->_padding_ = (longlong)&___7FUICommandList__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->ContextsInList).Elements = 0;
  *(undefined8 *)&(this->ContextsInList).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ContextsInList).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ContextsInList).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ContextsInList).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextsInList).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextsInList).Elements.field_0x34 = 0;
  (this->ContextsInList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ContextsInList).HashSize = 0;
  *(undefined8 *)&this->UICommandBindingMap = 0;
  *(undefined8 *)&(this->UICommandBindingMap).field_0x8 = 0;
  *(undefined8 *)&(this->UICommandBindingMap).field_0x20 = 0;
  *(undefined4 *)&(this->UICommandBindingMap).field_0x28 = 0;
  *(undefined4 *)&(this->UICommandBindingMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UICommandBindingMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UICommandBindingMap).field_0x34 = 0;
  *(undefined8 *)&(this->UICommandBindingMap).field_0x40 = 0;
  *(undefined4 *)&(this->UICommandBindingMap).field_0x48 = 0;
  *(undefined8 *)&this->UICommandContextMap = 0;
  *(undefined8 *)&(this->UICommandContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->UICommandContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->UICommandContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->UICommandContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UICommandContextMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UICommandContextMap).field_0x34 = 0;
  *(undefined8 *)&(this->UICommandContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->UICommandContextMap).field_0x48 = 0;
  (this->ParentUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentUICommandLists).ArrayNum = 0;
  (this->ParentUICommandLists).ArrayMax = 0;
  (this->ChildUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildUICommandLists).ArrayNum = 0;
  (this->ChildUICommandLists).ArrayMax = 0;
  *(undefined8 *)&this->CanProduceActionForCommand = 0;
  *(undefined8 *)&(this->CanProduceActionForCommand).field_0x8 = 0;
  *(undefined4 *)&(this->CanProduceActionForCommand).field_0x10 = 0;
  return this;
}

// ~FUICommandList @ 142701aa0

void __thiscall FUICommandList::~FUICommandList(FUICommandList *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FUICommandList__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CanProduceActionForCommand);
  pvVar3 = *(void **)&(this->CanProduceActionForCommand).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CanProduceActionForCommand);
  DestructItems<TWeakPtr<FUICommandList,1>,int>
            ((TWeakPtr<FUICommandList,1> *)(this->ChildUICommandLists).AllocatorInstance.Data,
             (this->ChildUICommandLists).ArrayNum);
  pFVar4 = (this->ChildUICommandLists).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TWeakPtr<FUICommandList,1>,int>
            ((TWeakPtr<FUICommandList,1> *)(this->ParentUICommandLists).AllocatorInstance.Data,
             (this->ParentUICommandLists).ArrayNum);
  pFVar4 = (this->ParentUICommandLists).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->UICommandContextMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->UICommandContextMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UICommandContextMap);
  *(undefined4 *)&(this->UICommandBindingMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->UICommandBindingMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UICommandBindingMap);
  (this->ContextsInList).HashSize = 0;
  FVar5 = (this->ContextsInList).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ContextsInList).Elements);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// Append @ 14270d090

void __thiscall FUICommandList::Append(FUICommandList *this,TSharedRef<FUICommandList,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FUICommandList *pFVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  FUICommandList *pFVar7;
  FUICommandList *pFVar8;
  FUICommandList *pFVar9;
  FUICommandList *pFVar10;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  TWeakPtr<FUICommandList,1> local_38;
  TWeakPtr<FUICommandList,1> local_28;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  if ((param_1->Object == this) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("&InCommandsToAppend.Get() != this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandList.cpp"
                         ,0x55,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  CleanupPointerArray<FUICommandList>(&this->ParentUICommandLists);
  CleanupPointerArray<FUICommandList>(&this->ChildUICommandLists);
  local_38.Object = param_1->Object;
  local_38.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TWeakPtr<FUICommandList,1>_>(&this->ParentUICommandLists,&local_38);
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  pFVar3 = param_1->Object;
  pFVar7 = (FUICommandList *)this->_padding_;
  pFVar10 = (FUICommandList *)0x0;
  pFVar8 = pFVar7;
  pFVar9 = pFVar10;
  if (pFVar7 != (FUICommandList *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar7->_padding_;
    do {
      pFVar8 = pFVar10;
      pFVar9 = (FUICommandList *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14270d1b5;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar7->_padding_;
      bVar5 = aVar2 == aVar6;
      if (bVar5) {
        *(atomic<int> *)&pFVar7->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar5);
    pFVar8 = pFVar7;
    pFVar9 = (FUICommandList *)this->_padding_;
  }
LAB_14270d1b5:
  pFVar7 = (FUICommandList *)&pFVar9->_padding_;
  if (pFVar9 == (FUICommandList *)0x0) {
    pFVar7 = pFVar10;
  }
  if ((pFVar7 != (FUICommandList *)&this->_padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar9 == (FUICommandList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar8 != (FUICommandList *)0x0) {
    LOCK();
    ((atomic<int> *)&pFVar8->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pFVar8->_padding_)[1] + 1);
    UNLOCK();
  }
  local_28.Object = pFVar9;
  local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
  TArray<TWeakPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TWeakPtr<FUICommandList,1>_>(&pFVar3->ChildUICommandLists,&local_28);
  if ((FUICommandList *)local_28.WeakReferenceCount.ReferenceController != (FUICommandList *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CanExecuteAction @ 142710480

bool __thiscall
FUICommandList::CanExecuteAction(FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1)

{
  bool bVar1;
  FUIAction *this_00;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = GetActionForCommand(this,&local_18);
  if (this_00 != (FUIAction *)0x0) {
    bVar1 = FUIAction::CanExecute(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return bVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ConditionalProcessCommandBindings @ 1427159d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FUICommandList::ConditionalProcessCommandBindings
          (FUICommandList *this,FKey *param_1,bool param_2,bool param_3,bool param_4,bool param_5,
          bool param_6)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  code *pcVar6;
  uint uVar7;
  FUICommandInfo *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  FSlateApplication *this_00;
  FInputBindingManager *this_01;
  FUIAction *this_02;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  FSharedReferencer<1> FVar16;
  int iVar17;
  uint *puVar18;
  undefined1 auStackY_1c8 [32];
  FInputChord local_198;
  int local_178;
  TSharedPtr<FUICommandInfo,1> local_168;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  TSharedPtr<FUICommandInfo_const_,1> local_f8;
  undefined1 local_e8 [32];
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = FSlateApplication::Get();
  bVar9 = FSlateApplication::IsDragDropping(this_00);
  if (!bVar9) {
    bVar11 = param_2 | 2;
    if (!param_3) {
      bVar11 = param_2;
    }
    bVar12 = bVar11 | 4;
    if (!param_4) {
      bVar12 = bVar11;
    }
    local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    local_198.Key.KeyName = param_1->KeyName;
    bVar11 = bVar12 | 8;
    if (!param_5) {
      bVar11 = bVar12;
    }
    local_198.Key.KeyDetails.Object = (param_1->KeyDetails).Object;
    if (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198._24_4_ =
         bVar11 >> 2 & 1 | (bVar11 & 3) * 2 | local_198._24_4_ & 0xfffffff0 | bVar11 & 8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    bVar9 = FKey::IsValid(&local_198.Key);
    if ((bVar9) && (bVar9 = FKey::IsModifierKey(&local_198.Key), !bVar9)) {
      local_bc = 0x80;
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (uint *)0x0;
      iVar17 = 0;
      local_c0 = 0;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      local_b8 = 0xffffffff;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      GatherContextsForListRecursively
                (this,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_e8,
                 (TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
                  *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar13 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      uStack_14c = 1;
      local_138 = iVar17;
      iVar13 = 0;
      if (local_c0 != 0) {
        puVar18 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar18 = local_c8;
        }
        uVar2 = *puVar18;
        local_138 = 0;
        iVar17 = 0;
        while (uVar2 == 0) {
          lVar15 = (longlong)iVar17;
          local_138 = local_138 + 0x20;
          iVar17 = iVar17 + 1;
          iVar13 = local_c0;
          if ((int)(local_c0 + -1 + (local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_142715c62;
          uVar2 = (puVar18 + 1)[lVar15];
        }
        uStack_14c = -uVar2 & uVar2;
        uVar1 = (ulonglong)uStack_14c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_178 = (int)lVar15;
        iVar13 = local_178 + -1 + local_138;
        if (local_c0 < iVar13) {
          iVar13 = local_c0;
        }
      }
LAB_142715c62:
      local_158 = (longlong *)local_e8;
      local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      uStack_140 = 0xffffffff;
      TStack_120._padding_ = CONCAT44(uStack_14c,iVar17);
      TStack_120.CurrentBitIndex = iVar13;
      TStack_120.UnvisitedBitMask = 0xffffffff;
      TStack_120._28_4_ = iVar13;
      TStack_120.BaseBitIndex = local_138;
      iStack_150 = iVar17;
      iStack_13c = iVar13;
      iStack_134 = iVar13;
      local_128 = local_158;
      TStack_120.Array = local_148;
      if (iVar13 < local_c0) {
        do {
          FVar4 = *(FName *)(*local_128 + (longlong)iVar13 * 0x10);
          this_01 = FInputBindingManager::Get();
          FInputBindingManager::FindCommandInContext(this_01,&local_168,FVar4,&local_198,false);
          pFVar8 = local_168.Object;
          FVar16.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
          if (local_168.Object != (FUICommandInfo *)0x0) {
            if ((local_168.Object == (FUICommandInfo *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            FVar16.ReferenceController =
                 local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController;
            FVar4 = local_198.Key.KeyName;
            if (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar14 = local_198._24_4_ & 0xf;
            uVar7 = local_198.bShift;
            uVar2 = local_198.bShift;
            if (((pFVar8->ActiveChords).ArrayNum < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            pFVar5 = *(FName **)(pFVar8->ActiveChords).AllocatorInstance.Data;
            if ((((*pFVar5 != FVar4) ||
                 (uVar3 = pFVar5[3].ComparisonIndex.Value, ((uVar2 ^ uVar3) & 1) != 0)) ||
                (((uVar14 ^ uVar3) & 2) != 0)) ||
               ((((uVar14 ^ uVar3) & 4) != 0 || (((uVar14 ^ uVar3) & 8) != 0)))) {
              if (((pFVar8->ActiveChords).ArrayNum < 2) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              pFVar5 = *(FName **)((pFVar8->ActiveChords).AllocatorInstance.Data + 0x10);
              if (((*pFVar5 != FVar4) ||
                  (uVar2 = pFVar5[3].ComparisonIndex.Value, ((uVar7 ^ uVar2) & 1) != 0)) ||
                 ((((uVar2 ^ uVar14) & 2) != 0 ||
                  ((((uVar2 ^ uVar14) & 4) != 0 || (((uVar2 ^ uVar14) & 8) != 0)))))) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar16.ReferenceController);
                FVar16.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
                goto LAB_142715f61;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar16.ReferenceController);
            FVar16.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
            local_f8.Object = local_168.Object;
            local_f8.SharedReferenceCount.ReferenceController =
                 local_168.SharedReferenceCount.ReferenceController;
            if (local_168.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            this_02 = GetActionForCommand(this,&local_f8);
            if (this_02 != (FUIAction *)0x0) {
              bVar9 = FUIAction::CanExecute(this_02);
              if ((bVar9) && ((!param_6 || (this_02->RepeatMode == RepeatEnabled)))) {
                FUIAction::Execute(this_02);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar16.ReferenceController);
                local_a0 = 0;
                if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_a8);
                }
                iVar17 = SUB84(local_e8._8_8_,4);
                local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
                if (iVar17 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
                }
                local_b8 = 0xffffffff;
                local_b4 = 0;
                local_c0 = 0;
                if (0x80 < local_bc) {
                  local_bc = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
                }
                if (local_c8 != (uint *)0x0) {
                  FMemory::Free(local_c8);
                }
                if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_e8._0_8_);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
                return true;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar16.ReferenceController);
              local_a0 = 0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_a8);
              }
              iVar17 = SUB84(local_e8._8_8_,4);
              local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
              if (iVar17 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
              }
              local_b8 = 0xffffffff;
              local_b4 = 0;
              local_c0 = 0;
              if (0x80 < local_bc) {
                local_bc = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
              }
              if (local_c8 != (uint *)0x0) {
                FMemory::Free(local_c8);
              }
              if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_e8._0_8_);
              }
              goto LAB_142715fa5;
            }
          }
LAB_142715f61:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar16.ReferenceController);
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
          iVar13 = TStack_120.CurrentBitIndex;
        } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
    }
LAB_142715fa5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// ExecuteAction @ 1427315f0

bool __thiscall
FUICommandList::ExecuteAction(FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1)

{
  FUICommandInfo *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  FUIAction *this_00;
  uint uVar9;
  longlong lVar10;
  FName local_res10;
  TSharedPtr<FUICommandInfo_const_,1> local_58;
  FDestructionSentinel local_48;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = GetActionForCommand(this,&local_58);
  if (this_00 == (FUIAction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  pFVar1 = param_1->Object;
  local_res10 = pFVar1->CommandName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FSlateDebugging::CommandRun,
             (FWriteAccessScope *)&local_48);
  bVar4 = false;
  FSlateDebugging::CommandRun._28_4_ = FSlateDebugging::CommandRun._28_4_ + 1;
  uVar9 = FSlateDebugging::CommandRun._16_4_ - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar4 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (int)FSlateDebugging::CommandRun._16_4_) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((*(int *)(lVar10 + 8 + FSlateDebugging::CommandRun._8_8_) == 0) ||
          (plVar2 = *(longlong **)(lVar10 + FSlateDebugging::CommandRun._8_8_),
          plVar2 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_res10,&pFVar1->Label), cVar7 == '\0'))
      {
        bVar4 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  FSlateDebugging::CommandRun._28_4_ = FSlateDebugging::CommandRun._28_4_ + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FSlateDebugging::CommandRun,
               false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  FUIAction::Execute(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GatherContextsForList @ 142737760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUICommandList::GatherContextsForList
          (FUICommandList *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  GatherContextsForListRecursively
            (this,param_1,
             (TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// GatherContextsForListRecursively @ 142737870

void __thiscall
FUICommandList::GatherContextsForListRecursively
          (FUICommandList *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
          *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  atomic<int> aVar8;
  uint uVar9;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<FUICommandList_const_,1> local_48;
  TSharedRef<FUICommandList_const_,1> local_38;
  
  TSharedFromThis<FUICommandList,1>::AsShared
            ((TSharedFromThis<FUICommandList,1> *)&this->_padding_,&local_48);
  local_38.Object = local_48.Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = ((uint)((ulonglong)local_48.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_48.Object >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  iVar7 = TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FUICommandList_const_,1>_>
                    (param_2,uVar9 >> 0x10 ^ uVar9,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (iVar7 != -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return;
  }
  TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedRef<FUICommandList_const_,1>_const_&>
            (param_2,(TSharedRef<FUICommandList_const_,1> *)&stack0x00000008,(bool *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (param_1,&this->ContextsInList);
  iVar7 = 0;
  do {
    if ((iVar7 < 0) || ((this->ParentUICommandLists).ArrayNum <= iVar7)) {
      return;
    }
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->ParentUICommandLists).AllocatorInstance.Data;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar7 * 0x10 + 8);
    this_00 = *(FUICommandList **)(pFVar3 + (longlong)iVar7 * 0x10);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FUICommandList *)0x0) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) goto LAB_142737a48;
    }
    else if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      if (0 < (int)pTVar4->SharedReferenceCount) {
        aVar2 = pTVar4->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            this_00 = (FUICommandList *)0x0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
          LOCK();
          aVar8 = pTVar4->SharedReferenceCount;
          bVar6 = aVar2 == aVar8;
          if (bVar6) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          pTVar10 = pTVar4;
          aVar2 = aVar8;
        } while (!bVar6);
        GatherContextsForListRecursively(this_00,param_1,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
      }
LAB_142737a48:
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

// GetActionForCommand @ 142739440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUIAction * __thiscall
FUICommandList::GetActionForCommand
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  FUICommandInfo *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FUIAction *pFVar5;
  undefined1 auStackY_c8 [32];
  TSharedRef<FUICommandInfo_const_,1> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = param_1->Object;
  if (pFVar1 == (FUICommandInfo *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<183905753675858177>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandList.cpp"
                       ,0x101,"Command.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FUIAction *)(*pcVar2)();
      return pFVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    pFVar5 = (FUIAction *)0x0;
  }
  else {
    pFVar5 = TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>_>
             ::Find((TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>_>
                     *)&this->UICommandBindingMap,param_1);
    if (pFVar5 == (FUIAction *)0x0) {
      local_98.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98.Object = pFVar1;
      if (pFVar1 == (FUICommandInfo *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FUIAction *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar5 = GetActionForCommandRecursively
                         (this,&local_98,true,true,
                          (TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
                           *)local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      iVar3 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_54 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return pFVar5;
}

// GetActionForCommandRecursively @ 142739640

/* WARNING: Removing unreachable block (ram,0x000142739992) */

FUIAction * __thiscall
FUICommandList::GetActionForCommandRecursively
          (FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1,bool param_2,
          bool param_3,
          TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FUICommandInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FUIAction *pFVar12;
  uint uVar13;
  ulonglong *puVar14;
  undefined1 *puVar15;
  FUICommandList *pFVar16;
  FUICommandList *pFVar17;
  FUICommandList *pFVar18;
  FUICommandList *pFVar19;
  TSharedRef<FUICommandList_const_,1> local_res8;
  TSharedRef<FUICommandList_const_,1> local_88;
  TSharedRef<FUICommandList_const_,1> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
  TSharedFromThis<FUICommandList,1>::AsShared
            ((TSharedFromThis<FUICommandList,1> *)&this->_padding_,&local_88);
  local_78.Object = local_88.Object;
  local_78.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar13 = ((uint)((ulonglong)local_88.Object >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_88.Object >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  iVar10 = TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TSharedRef<FUICommandList_const_,1>_>
                     (param_4,uVar13 >> 0x10 ^ uVar13,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (iVar10 != -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    return (FUIAction *)0x0;
  }
  TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedRef<FUICommandList_const_,1>_const_&>(param_4,&local_res8,(bool *)&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CanProduceActionForCommand,&local_68);
  if (((*(int *)&(this->CanProduceActionForCommand).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->CanProduceActionForCommand).field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar3 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CanProduceActionForCommand,&local_50);
    pFVar12 = (FUIAction *)0x0;
    if (*(int *)&(this->CanProduceActionForCommand).field_0x10 != 0) {
      pFVar12 = *(FUIAction **)&(this->CanProduceActionForCommand).field_0x8;
    }
    cVar8 = (**(code **)(*(ulonglong *)&pFVar12->ExecuteAction + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (cVar8 == '\0') goto LAB_1427399ef;
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar13 = ((uint)((ulonglong)pFVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar5 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  if (*(int *)&(this->UICommandBindingMap).field_0x8 !=
      *(int *)&(this->UICommandBindingMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->UICommandBindingMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->UICommandBindingMap).field_0x38;
    }
    iVar10 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(this->UICommandBindingMap).field_0x48 - 1U &
                     (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar10 != -1) {
      do {
        puVar14 = (ulonglong *)((longlong)iVar10 * 0x80 + *(longlong *)&this->UICommandBindingMap);
        if ((FUICommandInfo *)*puVar14 == pFVar5) {
          pFVar12 = (FUIAction *)(puVar14 + 2);
          if (puVar14 == (ulonglong *)0x0) {
            pFVar12 = (FUIAction *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          if (pFVar12 != (FUIAction *)0x0) {
            return pFVar12;
          }
          goto LAB_142739853;
        }
        iVar10 = (int)puVar14[0xf];
      } while (iVar10 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_142739853:
  iVar10 = 0;
  if (param_2) {
    for (; (-1 < iVar10 && (iVar10 < (this->ChildUICommandLists).ArrayNum)); iVar10 = iVar10 + 1) {
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FUIAction *)(*pcVar7)();
        return pFVar12;
      }
      pFVar6 = (this->ChildUICommandLists).AllocatorInstance.Data;
      pFVar16 = *(FUICommandList **)(pFVar6 + (longlong)iVar10 * 0x10 + 8);
      pFVar17 = *(FUICommandList **)(pFVar6 + (longlong)iVar10 * 0x10);
      if (pFVar16 != (FUICommandList *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (pFVar17 == (FUICommandList *)0x0) {
        if (pFVar16 != (FUICommandList *)0x0) goto LAB_1427399c6;
      }
      else if (pFVar16 != (FUICommandList *)0x0) {
        if (0 < (int)pFVar16->_padding_) {
          iVar2 = (int)pFVar16->_padding_;
          do {
            if (iVar2 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              pFVar17 = (FUICommandList *)0x0;
              pFVar18 = (FUICommandList *)0x0;
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                pFVar12 = (FUIAction *)(*pcVar7)();
                return pFVar12;
              }
              break;
            }
            LOCK();
            iVar11 = (int)pFVar16->_padding_;
            bVar9 = iVar2 == iVar11;
            if (bVar9) {
              *(int *)&pFVar16->_padding_ = iVar2 + 1;
              iVar11 = iVar2;
            }
            UNLOCK();
            pFVar18 = pFVar16;
            iVar2 = iVar11;
          } while (!bVar9);
          pFVar12 = GetActionForCommandRecursively
                              (pFVar17,(TSharedRef<FUICommandInfo_const_,1> *)
                                       local_res8.SharedReferenceCount.ReferenceController,true,
                               false,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar18);
          if (pFVar12 != (FUIAction *)0x0) goto LAB_14273996f;
        }
LAB_1427399c6:
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pFVar16->_padding_ + 8))(pFVar16);
        }
      }
    }
  }
LAB_1427399ef:
  if (param_3) {
    pFVar17 = (FUICommandList *)0x0;
    pFVar16 = pFVar17;
    while ((iVar10 = (int)pFVar16, -1 < iVar10 && (iVar10 < (this->ParentUICommandLists).ArrayNum)))
    {
      if ((iVar10 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FUIAction *)(*pcVar7)();
        return pFVar12;
      }
      pFVar6 = (this->ParentUICommandLists).AllocatorInstance.Data;
      pFVar16 = *(FUICommandList **)(pFVar6 + (longlong)iVar10 * 0x10 + 8);
      pFVar18 = *(FUICommandList **)(pFVar6 + (longlong)iVar10 * 0x10);
      if (pFVar16 != (FUICommandList *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (pFVar18 == (FUICommandList *)0x0) {
        if (pFVar16 != (FUICommandList *)0x0) goto LAB_142739b18;
      }
      else if (pFVar16 != (FUICommandList *)0x0) {
        if (0 < (int)pFVar16->_padding_) {
          iVar2 = (int)pFVar16->_padding_;
          do {
            if (iVar2 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              pFVar18 = pFVar17;
              pFVar19 = pFVar17;
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                pFVar12 = (FUIAction *)(*pcVar7)();
                return pFVar12;
              }
              break;
            }
            LOCK();
            iVar11 = (int)pFVar16->_padding_;
            bVar9 = iVar2 == iVar11;
            if (bVar9) {
              *(int *)&pFVar16->_padding_ = iVar2 + 1;
              iVar11 = iVar2;
            }
            UNLOCK();
            pFVar19 = pFVar16;
            iVar2 = iVar11;
          } while (!bVar9);
          pFVar12 = GetActionForCommandRecursively
                              (pFVar18,(TSharedRef<FUICommandInfo_const_,1> *)
                                       local_res8.SharedReferenceCount.ReferenceController,false,
                               true,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar19);
          if (pFVar12 != (FUIAction *)0x0) {
LAB_14273996f:
            LOCK();
            piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 != 1) {
              return pFVar12;
            }
            (**(code **)(pFVar16->_padding_ + 8))(pFVar16,1);
            return pFVar12;
          }
        }
LAB_142739b18:
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(pFVar16->_padding_ + 8))(pFVar16,1);
        }
      }
      pFVar16 = (FUICommandList *)(ulonglong)(iVar10 + 1);
    }
  }
  return (FUIAction *)0x0;
}

// GetCheckState @ 14273b730

ECheckBoxState __thiscall
FUICommandList::GetCheckState(FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1)

{
  char cVar1;
  ECheckBoxState EVar2;
  FUIAction *pFVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  local_28.DestructionSentinel._0_8_ = param_1->Object;
  local_28.DestructionSentinel.Accessor =
       (FMRSWRecursiveAccessDetector *)(param_1->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = GetActionForCommand(this,(TSharedPtr<FUICommandInfo_const_,1> *)&local_28);
  if (pFVar3 == (FUIAction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return Unchecked;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->GetActionCheckState,
             &local_28);
  if ((*(int *)&(pFVar3->GetActionCheckState).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(pFVar3->GetActionCheckState).field_0x8, plVar4 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar4 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar3->GetActionCheckState,&local_28);
      if (*(int *)&(pFVar3->GetActionCheckState).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(pFVar3->GetActionCheckState).field_0x8;
      }
      EVar2 = (**(code **)(*plVar4 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      goto LAB_14273b7db;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar2 = Unchecked;
LAB_14273b7db:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return EVar2;
}

// GetContextForCommand @ 14273ca80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUIActionContext * __thiscall
FUICommandList::GetContextForCommand
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  FUICommandInfo *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FUIActionContext *pFVar5;
  undefined1 auStackY_c8 [32];
  TSharedRef<FUICommandInfo_const_,1> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = param_1->Object;
  if (pFVar1 == (FUICommandInfo *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<183905753675858202>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandList.cpp"
                       ,0x11a,"Command.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FUIActionContext *)(*pcVar2)();
      return pFVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    pFVar5 = (FUIActionContext *)0x0;
  }
  else {
    pFVar5 = TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>_>
             ::Find((TMapBase<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>_>
                     *)&this->UICommandContextMap,param_1);
    if (pFVar5 == (FUIActionContext *)0x0) {
      local_98.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98.Object = pFVar1;
      if (pFVar1 == (FUICommandInfo *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FUIActionContext *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar5 = GetContextForCommandRecursively
                         (this,&local_98,true,true,
                          (TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
                           *)local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TSharedRef<FUICommandList_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      iVar3 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_54 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return pFVar5;
}

// GetContextForCommandRecursively @ 14273cc80

/* WARNING: Removing unreachable block (ram,0x00014273cfd3) */
/* WARNING: Type propagation algorithm not settling */

FUIActionContext * __thiscall
FUICommandList::GetContextForCommandRecursively
          (FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1,bool param_2,
          bool param_3,
          TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
          *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FUICommandInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FUIActionContext *pFVar13;
  uint uVar14;
  undefined1 *puVar15;
  FUICommandList *pFVar16;
  FUICommandList *pFVar17;
  FUICommandList *pFVar18;
  FUICommandList *pFVar19;
  TSharedRef<FUICommandList_const_,1> local_res8;
  TSharedRef<FUICommandList_const_,1> local_88;
  TSharedRef<FUICommandList_const_,1> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  local_res8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
  TSharedFromThis<FUICommandList,1>::AsShared
            ((TSharedFromThis<FUICommandList,1> *)&this->_padding_,&local_88);
  local_78.Object = local_88.Object;
  local_78.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar14 = ((uint)((ulonglong)local_88.Object >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_88.Object >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  iVar11 = TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TSharedRef<FUICommandList_const_,1>_>
                     (param_4,uVar14 >> 0x10 ^ uVar14,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (iVar11 != -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    return (FUIActionContext *)0x0;
  }
  TSet<TSharedRef<FUICommandList_const_,1>,DefaultKeyFuncs<TSharedRef<FUICommandList_const_,1>,0>,FDefaultSetAllocator>
  ::Emplace<TSharedRef<FUICommandList_const_,1>_const_&>(param_4,&local_res8,(bool *)&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CanProduceActionForCommand,&local_68);
  if (((*(int *)&(this->CanProduceActionForCommand).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->CanProduceActionForCommand).field_0x8,
      plVar4 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar4 + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->CanProduceActionForCommand,&local_50);
    pFVar13 = (FUIActionContext *)0x0;
    if (*(int *)&(this->CanProduceActionForCommand).field_0x10 != 0) {
      pFVar13 = *(FUIActionContext **)&(this->CanProduceActionForCommand).field_0x8;
    }
    cVar9 = (**(code **)((pFVar13->Contexts).AllocatorInstance.Data + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (cVar9 == '\0') goto LAB_14273d030;
  }
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar6 = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar14 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (*(int *)&(this->UICommandContextMap).field_0x8 !=
      *(int *)&(this->UICommandContextMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->UICommandContextMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->UICommandContextMap).field_0x38;
    }
    iVar11 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(this->UICommandContextMap).field_0x48 - 1U &
                     (uVar14 >> 0x10 ^ uVar14)) * 4);
    if (iVar11 != -1) {
      do {
        lVar2 = *(longlong *)&this->UICommandContextMap + (longlong)iVar11 * 0x28;
        if (*(FUICommandInfo **)(*(longlong *)&this->UICommandContextMap + (longlong)iVar11 * 0x28)
            == pFVar6) {
          pFVar13 = (FUIActionContext *)(lVar2 + 0x10);
          if (lVar2 == 0) {
            pFVar13 = (FUIActionContext *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          if (pFVar13 != (FUIActionContext *)0x0) {
            return pFVar13;
          }
          goto LAB_14273ce94;
        }
        iVar11 = *(int *)(lVar2 + 0x20);
      } while (iVar11 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_14273ce94:
  iVar11 = 0;
  if (param_2) {
    for (; (-1 < iVar11 && (iVar11 < (this->ChildUICommandLists).ArrayNum)); iVar11 = iVar11 + 1) {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FUIActionContext *)(*pcVar8)();
        return pFVar13;
      }
      pFVar7 = (this->ChildUICommandLists).AllocatorInstance.Data;
      pFVar16 = *(FUICommandList **)(pFVar7 + (longlong)iVar11 * 0x10 + 8);
      pFVar17 = *(FUICommandList **)(pFVar7 + (longlong)iVar11 * 0x10);
      if (pFVar16 != (FUICommandList *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (pFVar17 == (FUICommandList *)0x0) {
        if (pFVar16 != (FUICommandList *)0x0) goto LAB_14273d007;
      }
      else if (pFVar16 != (FUICommandList *)0x0) {
        if (0 < (int)pFVar16->_padding_) {
          iVar3 = (int)pFVar16->_padding_;
          do {
            if (iVar3 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L"");
              pFVar17 = (FUICommandList *)0x0;
              pFVar18 = (FUICommandList *)0x0;
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                pFVar13 = (FUIActionContext *)(*pcVar8)();
                return pFVar13;
              }
              break;
            }
            LOCK();
            iVar12 = (int)pFVar16->_padding_;
            bVar10 = iVar3 == iVar12;
            if (bVar10) {
              *(int *)&pFVar16->_padding_ = iVar3 + 1;
              iVar12 = iVar3;
            }
            UNLOCK();
            pFVar18 = pFVar16;
            iVar3 = iVar12;
          } while (!bVar10);
          pFVar13 = GetContextForCommandRecursively
                              (pFVar17,(TSharedRef<FUICommandInfo_const_,1> *)
                                       local_res8.SharedReferenceCount.ReferenceController,true,
                               false,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar18);
          if (pFVar13 != (FUIActionContext *)0x0) goto LAB_14273cfb0;
        }
LAB_14273d007:
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(pFVar16->_padding_ + 8))(pFVar16);
        }
      }
    }
  }
LAB_14273d030:
  if (param_3) {
    pFVar17 = (FUICommandList *)0x0;
    pFVar16 = pFVar17;
    while ((iVar11 = (int)pFVar16, -1 < iVar11 && (iVar11 < (this->ParentUICommandLists).ArrayNum)))
    {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FUIActionContext *)(*pcVar8)();
        return pFVar13;
      }
      pFVar7 = (this->ParentUICommandLists).AllocatorInstance.Data;
      pFVar16 = *(FUICommandList **)(pFVar7 + (longlong)iVar11 * 0x10 + 8);
      pFVar18 = *(FUICommandList **)(pFVar7 + (longlong)iVar11 * 0x10);
      if (pFVar16 != (FUICommandList *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (pFVar18 == (FUICommandList *)0x0) {
        if (pFVar16 != (FUICommandList *)0x0) goto LAB_14273d158;
      }
      else if (pFVar16 != (FUICommandList *)0x0) {
        if (0 < (int)pFVar16->_padding_) {
          iVar3 = (int)pFVar16->_padding_;
          do {
            if (iVar3 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L"");
              pFVar18 = pFVar17;
              pFVar19 = pFVar17;
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                pFVar13 = (FUIActionContext *)(*pcVar8)();
                return pFVar13;
              }
              break;
            }
            LOCK();
            iVar12 = (int)pFVar16->_padding_;
            bVar10 = iVar3 == iVar12;
            if (bVar10) {
              *(int *)&pFVar16->_padding_ = iVar3 + 1;
              iVar12 = iVar3;
            }
            UNLOCK();
            pFVar19 = pFVar16;
            iVar3 = iVar12;
          } while (!bVar10);
          pFVar13 = GetContextForCommandRecursively
                              (pFVar18,(TSharedRef<FUICommandInfo_const_,1> *)
                                       local_res8.SharedReferenceCount.ReferenceController,false,
                               true,param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar19);
          if (pFVar13 != (FUIActionContext *)0x0) {
LAB_14273cfb0:
            LOCK();
            piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 != 1) {
              return pFVar13;
            }
            (**(code **)(pFVar16->_padding_ + 8))(pFVar16,1);
            return pFVar13;
          }
        }
LAB_14273d158:
        LOCK();
        piVar1 = (int *)((longlong)&pFVar16->_padding_ + 4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(pFVar16->_padding_ + 8))(pFVar16,1);
        }
      }
      pFVar16 = (FUICommandList *)(ulonglong)(iVar11 + 1);
    }
  }
  return (FUIActionContext *)0x0;
}

// GetVisibility @ 142745df0

EVisibility __thiscall
FUICommandList::GetVisibility(FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  EVisibility EVar2;
  EVisibility EVar3;
  char cVar4;
  FUIAction *pFVar5;
  longlong *plVar6;
  undefined8 *in_R8;
  FReadAccessScope local_28;
  
  local_28.DestructionSentinel._0_8_ = *in_R8;
  local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)in_R8[1];
  if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = GetActionForCommand(this,(TSharedPtr<FUICommandInfo_const_,1> *)&local_28);
  EVar3.Value.Value = SUB81(param_1,0);
  if (pFVar5 != (FUIAction *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar5->IsActionVisibleDelegate,&local_28);
    if ((*(int *)&(pFVar5->IsActionVisibleDelegate).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(pFVar5->IsActionVisibleDelegate).field_0x8,
       plVar6 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar6 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar5->IsActionVisibleDelegate,&local_28);
        if (*(int *)&(pFVar5->IsActionVisibleDelegate).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(pFVar5->IsActionVisibleDelegate).field_0x8;
        }
        cVar4 = (**(code **)(*plVar6 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        EVar2 = EVisibility::Collapsed;
        if (cVar4 != '\0') {
          EVar2 = EVisibility::Visible;
        }
        pTVar1 = (TReferenceControllerBase<1> *)in_R8[1];
        *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVar2.Value.Value;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return (EVisibility)EVar3.Value.Value;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pTVar1 = (TReferenceControllerBase<1> *)in_R8[1];
    *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVisibility::Visible.Value.Value;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return (EVisibility)EVar3.Value.Value;
  }
  pTVar1 = (TReferenceControllerBase<1> *)in_R8[1];
  *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVisibility::Visible.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (EVisibility)EVar3.Value.Value;
}

// IsActionMapped @ 14274cab0

bool __thiscall
FUICommandList::IsActionMapped(FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  FUICommandInfo *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  
  pFVar1 = param_1->Object;
  uVar4 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->UICommandBindingMap).field_0x8 !=
      *(int *)&(this->UICommandBindingMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->UICommandBindingMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->UICommandBindingMap).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->UICommandBindingMap).field_0x48 - 1U &
                              (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FUICommandInfo **)((longlong)iVar3 * 0x80 + *(longlong *)&this->UICommandBindingMap)
            == pFVar1) goto LAB_14274cb4b;
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this->UICommandBindingMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14274cb4b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar3 != -1;
}

// MapAction @ 14275b150

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_5,
          EUIActionRepeatMode param_6)

{
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_98;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_80;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_68;
  TSharedPtr<FUICommandInfo_const_,1> local_50;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> local_40;
  
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_98,param_5);
  pTVar1 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateStatic<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_&>
                     (&local_40,FUIAction::IsActionCheckedPassthrough,param_4);
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_80._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_80,param_3);
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  local_68._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_68,param_2);
  local_50.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_50.Object = param_1->Object;
  if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MapAction(this,&local_50,&local_68,&local_80,pTVar1,&local_98,param_6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  return;
}

// MapAction @ 14275b300

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          EUIActionRepeatMode param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  atomic<int> *paVar3;
  FDestructionSentinel local_108;
  undefined1 local_f0 [8];
  ForAnyElementType local_e8;
  int local_e0;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  undefined1 local_c0 [8];
  ForAnyElementType local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  ulonglong local_98;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_90;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_78;
  TSharedPtr<FUICommandInfo_const_,1> local_60;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> local_50;
  
  local_98 = 0;
  local_a8 = (undefined1  [8])0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_c0 = (undefined1  [8])0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0,param_4);
  local_d8 = (undefined1  [8])0x0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8,param_3);
  local_f0 = (undefined1  [8])0x0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f0,param_2);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_60.Object = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_90._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_90,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_a8);
  pTVar2 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateStatic<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_&>
                     (&local_50,FUIAction::IsActionCheckedPassthrough,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_c0);
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_78._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_78,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8);
  local_108.AccessType = Reader;
  local_108._4_4_ = 0;
  local_108.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_108.bDestroyed = false;
  local_108._17_3_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_108,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f0);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_60.SharedReferenceCount.ReferenceController = pTVar1;
  MapAction(this,&local_60,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_108,
            &local_78,pTVar2,&local_90,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_108);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_108);
  if ((local_c8 != 0) && (local_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_108);
  if ((local_b0 != 0) && (local_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,0x10);
    local_b0 = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_108);
  if (((int)local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// MapAction @ 14275b6b0

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_5,
          EUIActionRepeatMode param_6)

{
  code *pcVar1;
  FUICommandInfo *local_a8;
  TReferenceControllerBase<1> *local_a0;
  bool local_98;
  undefined1 local_90 [8];
  ForAnyElementType local_88;
  ulonglong local_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  ulonglong local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType FStack_58;
  ulonglong local_50;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  EUIActionRepeatMode local_30;
  
  local_68 = 0;
  local_50 = 0;
  local_38 = 0;
  local_80 = 0;
  local_90 = (undefined1  [8])0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_90,param_2);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_78,param_3);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_60,param_4);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,param_5);
  local_30 = param_6;
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  local_a8 = param_1->Object;
  local_a0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_a8);
  if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_80 != 0) && (local_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,0x10);
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0,(FDestructionSentinel *)&local_a8);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  return;
}

// MapAction @ 14275b9e0

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          EUIActionRepeatMode param_5)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_88;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> local_70;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_58;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_40;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  
  local_88._16_8_ = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_70._16_4_ = 0;
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_70,param_4);
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_58._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_58,param_3);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_40._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_40,param_2);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MapAction(this,&local_28,&local_40,&local_58,&local_70,&local_88,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  return;
}

// MapAction @ 14275bb60

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          EUIActionRepeatMode param_4)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_78;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  local_78._16_8_ = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_60._16_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_48._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_48,param_3);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_30._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_30,param_2);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MapAction(this,&local_18,&local_30,&local_48,&local_60,&local_78,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// MapAction @ 14275bcb0

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          EUIActionRepeatMode param_3)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_78;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  local_78._16_8_ = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_60._16_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_48._16_8_ = 0;
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_30._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_30,param_2);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MapAction(this,&local_18,&local_30,&local_48,&local_60,&local_78,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// MapAction @ 14275bdb0

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,FUIAction *param_2)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  FName local_res20;
  undefined1 local_38 [12];
  FName local_2c;
  FMemScope local_20;
  TSharedPtr<FUICommandInfo_const_,1> *local_18;
  FUIAction *local_10;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_38._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_38._8_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope(&local_20,(FName *)(local_38 + 4),true);
  if (param_1->Object == (FUICommandInfo *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<183905753675857978>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandList.cpp"
                       ,0x3a,"InUICommandInfo.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_2c = param_1->Object->BindingContext;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ContextsInList,&local_res20,(bool *)&local_2c);
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIAction_const_&>_>
              ((TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>,FDefaultSetAllocator>
                *)&this->UICommandBindingMap,
               (TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIAction_const_&> *)
               local_38,(bool *)&local_18);
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// MapAction @ 14275bec0

void __thiscall
FUICommandList::MapAction
          (FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,FUIAction *param_2,
          FUIActionContext *param_3)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  undefined1 local_58 [8];
  undefined1 local_50 [12];
  FName local_44;
  FMemScope local_38;
  TSharedPtr<FUICommandInfo_const_,1> *local_30;
  FUIAction *local_28;
  TSharedPtr<FUICommandInfo_const_,1> *local_20;
  FUIActionContext *local_18;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_50._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_50._8_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope(&local_38,(FName *)(local_50 + 4),true);
  if (param_1->Object == (FUICommandInfo *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<183905753675857991>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\UICommandList.cpp"
                       ,0x47,"InUICommandInfo.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_44 = param_1->Object->BindingContext;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->ContextsInList,(FName *)local_58,(bool *)&local_44);
    local_30 = param_1;
    local_28 = param_2;
    TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIAction_const_&>_>
              ((TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>,FDefaultSetAllocator>
                *)&this->UICommandBindingMap,
               (TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIAction_const_&> *)
               (local_58 + 4),(bool *)&local_30);
    local_20 = param_1;
    local_18 = param_3;
    TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIActionContext_const_&>_>
              ((TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>,FDefaultSetAllocator>
                *)&this->UICommandContextMap,
               (TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIActionContext_const_&>
                *)local_50,(bool *)&local_20);
  }
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessCommandBindings @ 1427741a0

bool __thiscall FUICommandList::ProcessCommandBindings(FUICommandList *this,FKeyEvent *param_1)

{
  longlong lVar1;
  bool bVar2;
  FKey local_28;
  
  lVar1 = param_1->_padding_;
  bVar2 = *(bool *)((longlong)&param_1->_padding_ + 2);
  local_28.KeyName = (param_1->Key).KeyName;
  local_28.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar2 = ConditionalProcessCommandBindings
                    (this,&local_28,(lVar1 & 0xc) != 0,(lVar1 & 0x30) != 0,(lVar1 & 3) != 0,
                     (lVar1 & 0xc0) != 0,bVar2);
  return bVar2;
}

// ProcessCommandBindings @ 142774210

bool __thiscall FUICommandList::ProcessCommandBindings(FUICommandList *this,FPointerEvent *param_1)

{
  longlong lVar1;
  bool bVar2;
  FKey local_28;
  
  lVar1 = param_1->_padding_;
  bVar2 = *(bool *)((longlong)&param_1->_padding_ + 2);
  local_28.KeyName = (param_1->EffectingButton).KeyName;
  local_28.KeyDetails.Object = (param_1->EffectingButton).KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar2 = ConditionalProcessCommandBindings
                    (this,&local_28,(lVar1 & 0xc) != 0,(lVar1 & 0x30) != 0,(lVar1 & 3) != 0,
                     (lVar1 & 0xc0) != 0,bVar2);
  return bVar2;
}

// ProcessCommandBindings @ 142774280

bool __thiscall
FUICommandList::ProcessCommandBindings
          (FUICommandList *this,FKey *param_1,FModifierKeysState *param_2,bool param_3)

{
  FModifierKeysState FVar1;
  FModifierKeysState FVar2;
  FModifierKeysState FVar3;
  FModifierKeysState FVar4;
  FModifierKeysState FVar5;
  FModifierKeysState FVar6;
  FModifierKeysState FVar7;
  FModifierKeysState FVar8;
  bool bVar9;
  FKey local_28;
  
  local_28.KeyName = param_1->KeyName;
  local_28.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar9 = ConditionalProcessCommandBindings
                    (this,&local_28,
                     param_2->bIsLeftControlDown != 0 || param_2->bIsRightControlDown != 0,
                     param_2->bIsLeftAltDown != 0 || param_2->bIsRightAltDown != 0,
                     param_2->bIsLeftShiftDown != 0 || param_2->bIsRightShiftDown != 0,
                     param_2->bIsLeftCommandDown != 0 || param_2->bIsRightCommandDown != 0,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return bVar9;
}

// TryExecuteAction @ 14278e4e0

bool __thiscall
FUICommandList::TryExecuteAction(FUICommandList *this,TSharedRef<FUICommandInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FUIAction *this_00;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  this_00 = GetActionForCommand(this,&local_18);
  if (this_00 == (FUIAction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    bVar3 = FUIAction::CanExecute(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (!bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
  }
  pcVar2 = *(code **)(this->_padding_ + 0x18);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (*pcVar2)(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar4;
}

// UnmapAction @ 142790030

void __thiscall
FUICommandList::UnmapAction(FUICommandList *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  uint uVar1;
  
  if (*(int *)&(this->UICommandBindingMap).field_0x8 !=
      *(int *)&(this->UICommandBindingMap).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>,FDefaultSetAllocator>
    ::RemoveImpl<TSharedPtr<FUICommandInfo_const_,1>_>
              ((TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction,0>,FDefaultSetAllocator>
                *)&this->UICommandBindingMap,uVar1 >> 0x10 ^ uVar1,param_1);
  }
  if (*(int *)&(this->UICommandContextMap).field_0x8 !=
      *(int *)&(this->UICommandContextMap).field_0x34) {
    uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
            (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>,FDefaultSetAllocator>
    ::RemoveImpl<TSharedPtr<FUICommandInfo_const_,1>_>
              ((TSet<TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>,TDefaultMapHashableKeyFuncs<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext,0>,FDefaultSetAllocator>
                *)&this->UICommandContextMap,uVar1 >> 0x10 ^ uVar1,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

