// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// FindWidgetsUnderPoint @ 142e85490

bool __cdecl
`SScrollableSnapshotImage::OnMouseMove'::__l2::FWidgetPicker::FindWidgetsUnderPoint
          (TVector2<float> *param_1,TVector2<float> *param_2,
          TSharedRef<FWidgetReflectorNodeBase,1> *param_3,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  FWidgetReflectorNodeBase *pFVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<float>_u_0_s_0 TVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar11;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar12;
  TVector2<float>_u_0_s_0 local_res18;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  
  pFVar2 = param_3->Object;
  if (((pFVar2->HitTestInfo).IsHitTestVisible != false) ||
     ((pFVar2->HitTestInfo).AreChildrenHitTestVisible != false)) {
    FVar3 = (pFVar2->WidgetGeometry).Size;
    fVar1 = (pFVar2->WidgetGeometry).Scale;
    TVar4 = (pFVar2->WidgetGeometry).AbsolutePosition.field0_0x0._s_0;
    local_30 = FVar3._0_4_;
    local_38 = TVar4.X;
    local_38 = local_38 - (param_2->field0_0x0)._s_0.X;
    fStack_34 = TVar4.Y;
    fStack_34 = fStack_34 - (param_2->field0_0x0)._s_0.Y;
    local_res18 = (param_1->field0_0x0)._s_0;
    fStack_2c = FVar3._4_4_;
    if ((local_38 <= local_res18.X) &&
       (((local_res18.X <= fVar1 * local_30 + local_38 && (fStack_34 <= local_res18.Y)) &&
        (local_res18.Y <= fVar1 * fStack_2c + fStack_34)))) {
      pTVar11 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_4->AllocatorInstance).Data;
      if ((pTVar11 <= param_3) && (param_3 < pTVar11 + param_4->ArrayMax)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
      }
      iVar10 = param_4->ArrayNum;
      if (iVar10 == param_4->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar10 + 1;
      pFVar5 = (param_4->AllocatorInstance).Data;
      *(FWidgetReflectorNodeBase **)(pFVar5 + (longlong)iVar10 * 0x10) = param_3->Object;
      pTVar6 = (param_3->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar10 * 0x10 + 8) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = param_3->Object;
      if ((pFVar2->HitTestInfo).AreChildrenHitTestVisible == false) {
LAB_142e8567d:
        uVar9 = (param_3->Object->HitTestInfo).IsHitTestVisible;
      }
      else {
        iVar10 = (pFVar2->ChildNodes).ArrayNum;
        pTVar11 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
                  (pFVar2->ChildNodes).AllocatorInstance.Data;
        pTVar12 = pTVar11 + iVar10;
        while( true ) {
          if ((pFVar2->ChildNodes).ArrayNum != iVar10) {
            `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_res18);
          }
          if (pTVar11 == pTVar12) goto LAB_142e8567d;
          bVar8 = FindWidgetsUnderPoint(param_1,param_2,pTVar11,param_4);
          if (bVar8) break;
          pTVar11 = pTVar11 + 1;
        }
        uVar9 = 1;
      }
      return (bool)uVar9;
    }
  }
  return false;
}

