// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 9

// AddUniqueImpl<FWidgetDrawerConfig_const_&> @ 142d54980

int __thiscall
TArray<FWidgetDrawerConfig,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FWidgetDrawerConfig_const_&>
          (TArray<FWidgetDrawerConfig,TSizedDefaultAllocator<32>_> *this,
          FWidgetDrawerConfig *param_1)

{
  FWidgetDrawerConfig *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWidgetDrawerConfig *pFVar5;
  
  pFVar1 = (FWidgetDrawerConfig *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar5 = pFVar1;
    do {
      if (pFVar5->UniqueId == param_1->UniqueId) {
        iVar4 = (int)(((longlong)pFVar5 - (longlong)pFVar1) / 0x98);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  FWidgetDrawerConfig::FWidgetDrawerConfig
            ((FWidgetDrawerConfig *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x98),
             param_1);
  return iVar4;
}

// Append<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> @ 142d54ac0

void __thiscall
TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::
Append<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<TSharedPtr<FString,1>,TSharedPtr<FString,1>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,
               (TSharedPtr<FString,1> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// CopyToEmpty<FLinearColor,int> @ 142d559a0

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::CopyToEmpty<FLinearColor,int>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,FLinearColor *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 4);
  }
  return;
}

// CopyToEmpty<TSharedRef<ITextDecorator,1>,int> @ 142d55a30

void __thiscall
TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TSharedRef<ITextDecorator,1>,int>
          (TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<ITextDecorator,1> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 142d67b80

TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FText,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FText,1>,int>
              ((TSharedPtr<FText,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FText,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FText,1>,TSharedPtr<FText,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142d67c20

TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<CheckBoxList::FItemPair,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<CheckBoxList::FItemPair,1>,int>
              ((TSharedRef<CheckBoxList::FItemPair,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<CheckBoxList::FItemPair,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<CheckBoxList::FItemPair,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Insert @ 142db50a0

int __thiscall
TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FText,1> *param_1,int param_2)

{
  TSharedPtr<FText,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pTVar1 = (TSharedPtr<FText,1> *)(this->AllocatorInstance).Data;
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
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0x10;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0x10,pFVar5,(longlong)(iVar4 - param_2) << 4);
  pFVar5 = (this->AllocatorInstance).Data;
  *(FText **)(pFVar5 + lVar6) = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar5 + lVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FText *)0x0;
  return param_2;
}

// Remove @ 142dd4470

int __thiscall
TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedRef<SSidebarDrawer,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<SSidebarDrawer,1> *param_1)

{
  TSharedRef<SSidebarDrawer,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedRef<SSidebarDrawer,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
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
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(SSidebarDrawer **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(SSidebarDrawer **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedRef<SSidebarDrawer,1>,int>
                ((TSharedRef<SSidebarDrawer,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 142dd4ab0

void __thiscall
TArray<FOpenDrawerData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FOpenDrawerData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x28 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(pFVar2 + (longlong)param_1 * 0x28 + 0x10));
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x28,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,
            (longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

