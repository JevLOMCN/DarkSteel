// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 3

// FNavigationSimulationWidgetInfo @ 142e0a1d0

/* WARNING: Type propagation algorithm not settling */

FNavigationSimulationWidgetInfo * __thiscall
FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
          (FNavigationSimulationWidgetInfo *this,FNavigationSimulationWidgetInfo *param_1)

{
  undefined8 uVar1;
  
  this->WidgetPtr = param_1->WidgetPtr;
  (this->WidgetLive).Object = (param_1->WidgetLive).Object;
  (this->WidgetLive).WeakReferenceCount.ReferenceController =
       (param_1->WidgetLive).WeakReferenceCount.ReferenceController;
  (param_1->WidgetLive).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->WidgetLive).Object = (SWidget *)0x0;
  FText::FText(&this->WidgetTypeAndShortName,&param_1->WidgetTypeAndShortName);
  uVar1 = *(undefined8 *)&(param_1->WidgetGeometry).Scale;
  (this->WidgetGeometry).Size = (param_1->WidgetGeometry).Size;
  *(undefined8 *)&(this->WidgetGeometry).Scale = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->WidgetGeometry).Position.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->WidgetGeometry).AbsolutePosition.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->WidgetGeometry).AbsolutePosition.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->WidgetGeometry).Position.field0_0x0 + 4) = uVar1;
  uVar1 = *(undefined8 *)((param_1->WidgetGeometry).AccumulatedRenderTransform.M.M[1] + 1);
  *(undefined8 *)((this->WidgetGeometry).AccumulatedRenderTransform.M.M[0] + 1) =
       *(undefined8 *)((param_1->WidgetGeometry).AccumulatedRenderTransform.M.M[0] + 1);
  *(undefined8 *)((this->WidgetGeometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar1;
  *(undefined8 *)((longlong)&(this->WidgetGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
       = *(undefined8 *)
          ((longlong)&(param_1->WidgetGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  this->bHasGeometry = param_1->bHasGeometry;
  return this;
}

// FNavigationSimulationWidgetInfo @ 142e0a250

FNavigationSimulationWidgetInfo * __thiscall
FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
          (FNavigationSimulationWidgetInfo *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->WidgetPtr = (ulong64)param_1->Object;
  (this->WidgetLive).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WidgetLive).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&this->WidgetTypeAndShortName,param_1);
  FGeometry::FGeometry(&this->WidgetGeometry);
  this->bHasGeometry = false;
  return this;
}

// FNavigationSimulationWidgetInfo @ 142e0a2a0

/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationSimulationWidgetInfo * __thiscall
FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo
          (FNavigationSimulationWidgetInfo *this,FWidgetPath *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FNavigationSimulationWidgetInfo *pFVar8;
  FArrangedWidget *pFVar9;
  FText *pFVar10;
  TSharedPtr<SWidget_const_,1> local_28;
  FText local_18;
  
  this->WidgetPtr = 0;
  (this->WidgetLive).Object = (SWidget *)0x0;
  (this->WidgetLive).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&this->WidgetTypeAndShortName);
  FGeometry::FGeometry(&this->WidgetGeometry);
  bVar7 = FWidgetPath::IsValid(param_1);
  this->bHasGeometry = bVar7;
  if (bVar7) {
    bVar7 = FWidgetPath::IsValid(param_1);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                         ,0xac,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FNavigationSimulationWidgetInfo *)(*pcVar6)();
        return pFVar8;
      }
    }
    pFVar9 = FArrangedChildren::operator[](&param_1->Widgets,(param_1->Widgets).Array.ArrayNum + -1)
    ;
    pTVar3 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
    pSVar4 = (pFVar9->Widget).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->WidgetLive).Object = pSVar4;
    if (pTVar3 != (this->WidgetLive).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->WidgetLive).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      (this->WidgetLive).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar7 = FWidgetPath::IsValid(param_1);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                         ,0xac,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FNavigationSimulationWidgetInfo *)(*pcVar6)();
        return pFVar8;
      }
    }
    pFVar9 = FArrangedChildren::operator[](&param_1->Widgets,(param_1->Widgets).Array.ArrayNum + -1)
    ;
    pTVar3 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
    pSVar4 = (pFVar9->Widget).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    this->WidgetPtr = (ulong64)pSVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar7 = FWidgetPath::IsValid(param_1);
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                         ,0xac,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FNavigationSimulationWidgetInfo *)(*pcVar6)();
        return pFVar8;
      }
    }
    pFVar9 = FArrangedChildren::operator[](&param_1->Widgets,(param_1->Widgets).Array.ArrayNum + -1)
    ;
    pTVar3 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
    local_28.Object = (pFVar9->Widget).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
    pFVar10 = FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&local_18,&local_28);
    FText::operator=(&this->WidgetTypeAndShortName,pFVar10);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar9 = FArrangedChildren::Last(&param_1->Widgets);
    FGeometry::operator=(&this->WidgetGeometry,&pFVar9->Geometry);
  }
  return this;
}

