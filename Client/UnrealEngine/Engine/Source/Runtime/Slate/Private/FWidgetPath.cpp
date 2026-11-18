// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FWidgetPath @ 1426a9a80

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall FWidgetPath::FWidgetPath(FWidgetPath *this,FWidgetPath *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  
  (this->Widgets).VisibilityFilter.Value.Value = (param_1->Widgets).VisibilityFilter.Value.Value;
  (this->Widgets).Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  if ((param_1->Widgets).Array.AllocatorInstance.SecondaryData ==
      (ForElementType<FArrangedWidget>)0x0) {
    memmove(&(this->Widgets).Array,&(param_1->Widgets).Array,0x120);
  }
  FVar1 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Widgets).Array.AllocatorInstance.SecondaryData =
       (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
  (param_1->Widgets).Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  (this->Widgets).Array.ArrayNum = (param_1->Widgets).Array.ArrayNum;
  (this->Widgets).Array.ArrayMax = (param_1->Widgets).Array.ArrayMax;
  (param_1->Widgets).Array.ArrayNum = 0;
  (param_1->Widgets).Array.ArrayMax = 4;
  (this->Widgets).bAllow3DWidgets = (param_1->Widgets).bAllow3DWidgets;
  (this->TopLevelWindow).Object = (param_1->TopLevelWindow).Object;
  (this->TopLevelWindow).SharedReferenceCount.ReferenceController =
       (param_1->TopLevelWindow).SharedReferenceCount.ReferenceController;
  (param_1->TopLevelWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->TopLevelWindow).Object = (SWindow *)0x0;
  (this->VirtualPointerPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualPointerPositions).AllocatorInstance.Data =
       (param_1->VirtualPointerPositions).AllocatorInstance.Data;
  (param_1->VirtualPointerPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualPointerPositions).ArrayNum = (param_1->VirtualPointerPositions).ArrayNum;
  (this->VirtualPointerPositions).ArrayMax = (param_1->VirtualPointerPositions).ArrayMax;
  (param_1->VirtualPointerPositions).ArrayNum = 0;
  (param_1->VirtualPointerPositions).ArrayMax = 0;
  return this;
}

// operator= @ 1426ac6c0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall FWidgetPath::operator=(FWidgetPath *this,FWidgetPath *param_1)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWindow *pSVar7;
  TOptional<FVirtualPointerPosition> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  ForElementType<FArrangedWidget> FVar11;
  
  (this->Widgets).VisibilityFilter.Value.Value = (param_1->Widgets).VisibilityFilter.Value.Value;
  pTVar1 = &(this->Widgets).Array;
  if (this != param_1) {
    FVar10 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,(this->Widgets).Array.ArrayNum);
    FVar10 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
    piVar2 = &(this->Widgets).Array.ArrayMax;
    iVar4 = (param_1->Widgets).Array.ArrayNum;
    iVar5 = *piVar2;
    if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
    }
    (this->Widgets).Array.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                (0x48,8,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar2);
      FVar11 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FArrangedWidget>)0x0) {
        FVar11 = (ForElementType<FArrangedWidget>)pTVar1;
      }
      ConstructItems<FArrangedWidget,FArrangedWidget,int>
                ((void *)FVar11,(FArrangedWidget *)FVar10,iVar4);
    }
  }
  (this->Widgets).bAllow3DWidgets = (param_1->Widgets).bAllow3DWidgets;
  pTVar6 = (param_1->TopLevelWindow).SharedReferenceCount.ReferenceController;
  pSVar7 = (param_1->TopLevelWindow).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (this->TopLevelWindow).SharedReferenceCount.ReferenceController;
  (this->TopLevelWindow).Object = pSVar7;
  (this->TopLevelWindow).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pTVar3 = &this->VirtualPointerPositions;
  if (pTVar3 != &param_1->VirtualPointerPositions) {
    iVar4 = (param_1->VirtualPointerPositions).ArrayNum;
    piVar2 = &(this->VirtualPointerPositions).ArrayMax;
    pTVar8 = (TOptional<FVirtualPointerPosition> *)
             (param_1->VirtualPointerPositions).AllocatorInstance.Data;
    (this->VirtualPointerPositions).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TOptional<FVirtualPointerPosition>,TOptional<FVirtualPointerPosition>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar8,iVar4);
    }
  }
  return this;
}

// GetLastWidget @ 1426bdaf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FWidgetPath::GetLastWidget(FWidgetPath *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArrangedWidget *pFVar5;
  
  bVar3 = IsValid(this);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                       ,0xac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar5 = FArrangedChildren::operator[](&this->Widgets,(this->Widgets).Array.ArrayNum + -1);
  __return_storage_ptr__->Object = (pFVar5->Widget).Object;
  pTVar1 = (pFVar5->Widget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVirtualPointerPosition @ 1426c01e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FVirtualPointerPosition> * __thiscall
FWidgetPath::GetVirtualPointerPosition
          (FWidgetPath *this,TOptional<FVirtualPointerPosition> *__return_storage_ptr__,int param_1)

{
  FDeprecateSlateVector2D *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FDeprecateSlateVector2D FVar5;
  bool bVar6;
  uint uVar7;
  TOptional<FVirtualPointerPosition> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->VirtualPointerPositions).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TOptional<FVirtualPointerPosition> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->VirtualPointerPositions).AllocatorInstance.Data;
  __return_storage_ptr__->bIsSet = false;
  pFVar1 = (FDeprecateSlateVector2D *)(pFVar3 + (longlong)param_1 * 0x14);
  FVar2 = pFVar3[(longlong)param_1 * 0x14 + 0x10];
  __return_storage_ptr__->bIsSet = (bool)FVar2;
  if (FVar2 != (FScriptContainerElement)0x0) {
    FVar5 = pFVar1[1];
    (__return_storage_ptr__->TypedValue).CurrentCursorPosition = *pFVar1;
    (__return_storage_ptr__->TypedValue).LastCursorPosition = FVar5;
  }
  return __return_storage_ptr__;
}

// FWidgetPath @ 1426fe500

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall FWidgetPath::FWidgetPath(FWidgetPath *this,FWidgetPath *param_1)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TOptional<FVirtualPointerPosition> *pTVar6;
  ForElementType<FArrangedWidget> FVar7;
  ForElementType<FArrangedWidget> FVar8;
  
  pTVar1 = &(this->Widgets).Array;
  (this->Widgets).VisibilityFilter.Value.Value = (param_1->Widgets).VisibilityFilter.Value.Value;
  (this->Widgets).Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  FVar8 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
  iVar4 = (param_1->Widgets).Array.ArrayNum;
  (this->Widgets).Array.ArrayNum = iVar4;
  if (FVar8 == (ForElementType<FArrangedWidget>)0x0) {
    FVar8 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
  }
  piVar2 = &(this->Widgets).Array.ArrayMax;
  if (iVar4 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
              (0x48,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    FVar7 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FArrangedWidget>)0x0) {
      FVar7 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    ConstructItems<FArrangedWidget,FArrangedWidget,int>
              ((void *)FVar7,(FArrangedWidget *)FVar8,iVar4);
  }
  (this->Widgets).bAllow3DWidgets = (param_1->Widgets).bAllow3DWidgets;
  (this->TopLevelWindow).Object = (param_1->TopLevelWindow).Object;
  pTVar5 = (param_1->TopLevelWindow).SharedReferenceCount.ReferenceController;
  (this->TopLevelWindow).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->VirtualPointerPositions;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VirtualPointerPositions).ArrayMax;
  iVar4 = (param_1->VirtualPointerPositions).ArrayNum;
  pTVar6 = (TOptional<FVirtualPointerPosition> *)
           (param_1->VirtualPointerPositions).AllocatorInstance.Data;
  (this->VirtualPointerPositions).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    ConstructItems<TOptional<FVirtualPointerPosition>,TOptional<FVirtualPointerPosition>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar6,iVar4);
  }
  return this;
}

