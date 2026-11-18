// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// Execute @ 142e7a090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SlateNavigationSimulationInternal::FAppendSimulateRecursive::Execute
          (FAppendSimulateRecursive *this,FWidgetPath *param_1,TSharedRef<SWidget,1> *param_2)

{
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> *pTVar1;
  FSimulationResult *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FSimulationResult *pFVar7;
  longlong *plVar8;
  FGeometry *pFVar9;
  atomic<int> *paVar10;
  int iVar11;
  undefined1 auStackY_418 [32];
  TSharedRef<SWidget,1> local_3c8;
  FArrangedWidget local_3b8;
  FSimulationResult local_368;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  cVar4 = (**(code **)(param_2->Object->_padding_ + 0x198))();
  if (cVar4 != '\0') {
    pTVar1 = this->Result;
    pFVar7 = FSlateNavigationEventSimulator::Simulate
                       (this->Self,&local_368,param_1,this->UserIndex,this->Genesis,this->Navigation
                       );
    pFVar2 = (FSimulationResult *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + pTVar1->ArrayMax)) &&
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
    iVar6 = pTVar1->ArrayNum;
    if (iVar6 == pTVar1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (800,8,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pTVar1->ArrayNum = iVar6 + 1;
    FSlateNavigationEventSimulator::FSimulationResult::FSimulationResult
              ((FSimulationResult *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 800),
               pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.FocusedWidgetPath.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.WidgetThatShouldReceivedFocus.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.NavigationReply.FocusRecipient.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.NavigationReply.EventHandler.SharedReferenceCount.ReferenceController);
    FWidgetPath::~FWidgetPath(&local_368.NavigationDestination);
    FWidgetPath::~FWidgetPath(&local_368.NavigationSource);
  }
  plVar8 = (longlong *)(**(code **)(param_2->Object->_padding_ + 0x180))();
  if (plVar8 != (longlong *)0x0) {
    iVar11 = 0;
    iVar6 = (**(code **)*plVar8)(plVar8);
    if (0 < iVar6) {
      do {
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_3c8,iVar11);
        if (((((byte)(local_3c8.Object)->VisibilityAttribute & 0x19) != 0) &&
            ((local_3c8.Object)->EnabledStateAttribute !=
             (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) &&
           (cVar4 = (**(code **)(param_2->Object->_padding_ + 0x158))(), cVar4 != '\0')) {
          pFVar9 = SWidget::GetCachedGeometry(local_3c8.Object);
          if (local_3c8.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar10 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar10 = &(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar10 = (atomic<int>)((int)*paVar10 + 1);
            UNLOCK();
          }
          local_3b8.Geometry.Size = pFVar9->Size;
          local_3b8.Geometry._8_8_ = *(undefined8 *)&pFVar9->Scale;
          local_3b8.Geometry._16_8_ =
               *(undefined8 *)((longlong)&(pFVar9->AbsolutePosition).field0_0x0 + 4);
          local_3b8.Geometry._24_8_ = *(undefined8 *)((longlong)&(pFVar9->Position).field0_0x0 + 4);
          local_3b8.Geometry.AccumulatedRenderTransform.M.M._4_8_ =
               *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[0] + 1);
          local_3b8.Geometry.AccumulatedRenderTransform._12_8_ =
               *(undefined8 *)((pFVar9->AccumulatedRenderTransform).M.M[1] + 1);
          local_3b8.Geometry._48_8_ =
               *(undefined8 *)((longlong)&(pFVar9->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
          ;
          local_3b8.Widget.Object = local_3c8.Object;
          local_3b8.Widget.SharedReferenceCount.ReferenceController =
               local_3c8.SharedReferenceCount.ReferenceController;
          if (local_3c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar10 = (atomic<int>)((int)*paVar10 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3c8.SharedReferenceCount.ReferenceController);
          FArrangedChildren::AddWidget(&param_1->Widgets,&local_3b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3b8.Widget.SharedReferenceCount.ReferenceController);
          Execute(this,param_1,&local_3c8);
          iVar6 = (param_1->Widgets).Array.ArrayNum + -1;
          if ((iVar6 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
          RemoveAtImpl(&(param_1->Widgets).Array,iVar6,1);
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,&(param_1->Widgets).Array.AllocatorInstance,
                     (param_1->Widgets).Array.ArrayNum,&(param_1->Widgets).Array.ArrayMax);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3c8.SharedReferenceCount.ReferenceController);
        iVar11 = iVar11 + 1;
        iVar6 = (**(code **)*plVar8)(plVar8);
      } while (iVar11 < iVar6);
    }
  }
  return;
}

