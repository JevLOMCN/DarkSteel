// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 11

// AddUniqueImpl<TSharedPtr<FExtender,1>_const_&> @ 142c30b50

int __thiscall
TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<FExtender,1>_const_&>
          (TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FExtender,1> *param_1)

{
  TSharedPtr<FExtender,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FExtender,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedPtr<FExtender,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FExtender **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UObject_const_>_> @ 142c30c80

int __thiscall
TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UObject_const_>_>
          (TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UObject_const_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UObject **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UObject **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UObject>_> @ 142c30d90

int __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UObject> *param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UObject **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UObject **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<TWeakPtr<SWidget,1>_> @ 142c30ea0

int __thiscall
TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TWeakPtr<SWidget,1>_>
          (TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<SWidget,1> *param_1)

{
  TWeakPtr<SWidget,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pTVar1 = (TWeakPtr<SWidget,1> *)(this->AllocatorInstance).Data;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(SWidget **)pFVar5 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (SWidget *)0x0;
  }
  return iVar4;
}

// CopyToEmpty<TAttribute<EVisibility>,int> @ 142c31e90

void __thiscall
TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TAttribute<EVisibility>,int>
          (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *this,
          TAttribute<EVisibility> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// CopyToEmpty<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int> @ 142c31f10

void __thiscall
TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
          (TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// Find @ 142c59810

int __thiscall
TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<SWidget,1> *param_1)

{
  int iVar1;
  TWeakPtr<SWidget,1> *pTVar2;
  bool bVar3;
  TWeakPtr<SWidget,1> *this_00;
  
  pTVar2 = (TWeakPtr<SWidget,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<SWidget,1>::UEOpEquals<SWidget>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Insert @ 142c63330

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *this,FToolMenuSection *param_1,
          int param_2)

{
  FToolMenuSection *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  
  pFVar1 = (FToolMenuSection *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x238,8,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x238;
  memmove(pFVar6 + 0x238,pFVar6,(longlong)(iVar5 - param_2) * 0x238);
  pFVar7 = (FName *)((this->AllocatorInstance).Data + (longlong)param_2 * 0x238);
  *pFVar7 = param_1->Name;
  FVar2 = *(FName *)&(param_1->Owner).ValueType;
  *(FToolMenuOwner_u_0 *)(pFVar7 + 1) = (param_1->Owner).field0_0x0;
  pFVar7[2] = FVar2;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)(param_1->Blocks).AllocatorInstance.Data;
  (param_1->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = (param_1->Blocks).ArrayNum;
  pFVar7[4].Number = (param_1->Blocks).ArrayMax;
  (param_1->Blocks).ArrayNum = 0;
  (param_1->Blocks).ArrayMax = 0;
  pFVar7[5] = (param_1->InsertPosition).Name;
  pFVar7[6].ComparisonIndex.Value = *(uint *)&(param_1->InsertPosition).Position;
  FToolMenuContext::FToolMenuContext((FToolMenuContext *)(pFVar7 + 7),&param_1->Context);
  FVar2 = (FName)(param_1->ToolMenuSectionDynamic).field0_0x0.DebugPtr;
  pFVar7[0x14] = FVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar2);
  }
  FText::FText((FText *)(pFVar7 + 0x15),&(param_1->Label).Value);
  *(bool *)&pFVar7[0x17].ComparisonIndex.Value = (param_1->Label).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x18),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter);
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
              *)(pFVar7 + 0x1b),&(param_1->Visibility).Value);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x20),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Construct);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x23),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->Construct).NewToolMenuDelegateLegacy);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x26),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->Construct).NewToolBarDelegateLegacy);
  *(EToolMenuSectionAlign *)&pFVar7[0x29].ComparisonIndex.Value = param_1->Alignment;
  FMenuEntryResizeParams::FMenuEntryResizeParams
            ((FMenuEntryResizeParams *)(pFVar7 + 0x2a),&param_1->ResizeParams);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 0x43),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Sorter);
  *(bool *)&pFVar7[0x46].ComparisonIndex.Value = param_1->bIsRegistering;
  *(bool *)((longlong)&pFVar7[0x46].ComparisonIndex.Value + 1) = param_1->bAddedDuringRegister;
  return param_2;
}

// InsertUninitializedImpl @ 142c63570

void __thiscall
TArray<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// InsertUninitializedImpl @ 142c635f0

void __thiscall
TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x238,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x238;
  memmove(_Src + (longlong)param_2 * 0x238,_Src,(longlong)(iVar1 - param_1) * 0x238);
  return;
}

// RemoveAt @ 142c6e6c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FToolMenuSection *this_00;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FToolMenuSection *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x238);
  FToolMenuSection::~FToolMenuSection(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x238);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x238,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

