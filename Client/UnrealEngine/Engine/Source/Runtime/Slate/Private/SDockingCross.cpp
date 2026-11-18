// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// ComputeDesiredSize @ 142715570

TVector2<double> * __thiscall
SDockingCross::ComputeDesiredSize
          (SDockingCross *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 16.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 16.0;
  return __return_storage_ptr__;
}

// Construct @ 1427186c0

void __thiscall
SDockingCross::Construct
          (SDockingCross *this,FArguments *param_1,TSharedPtr<SDockingNode,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->OwnerNode).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->OwnerNode).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->OwnerNode).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->OwnerNode).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return;
}

// OnDragLeave @ 1427622e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingCross::OnDragLeave(SDockingCross *this,FDragDropEvent *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDragDropOperation *pFVar3;
  code *pcVar4;
  FDockingDragOperation *this_00;
  char cVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDockTarget local_28;
  
  pFVar3 = (param_1->Content).Object;
  if (pFVar3 != (FDragDropOperation *)0x0) {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    pFVar6 = FDockingDragOperation::GetTypeId();
    cVar5 = (*pcVar4)(pFVar3,pFVar6);
    if (cVar5 != '\0') {
      pTVar7 = (param_1->Content).SharedReferenceCount.ReferenceController;
      this_00 = (FDockingDragOperation *)(param_1->Content).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FDockingDragOperation *)0x0) {
        local_28.DockDirection = LeftOf;
        local_28.TargetNode.Object = (SDockingNode *)0x0;
        local_28.TargetNode.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        FDockingDragOperation::SetHoveredTarget(this_00,&local_28,(FInputEvent *)param_1);
        if (local_28.TargetNode.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_28.TargetNode.WeakReferenceCount.ReferenceController)->WeakReferenceCount
          ;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_28.TargetNode.WeakReferenceCount.ReferenceController)->_padding_ + 8
                        ))(local_28.TargetNode.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
      goto LAB_142762378;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_142762378:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// OnDragOver @ 142762a70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingCross::OnDragOver
          (SDockingCross *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDragDropOperation *pFVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  char cVar6;
  atomic<int> aVar7;
  FDockingDragOperation *this_00;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TSharedPtr<SDockingNode,1> local_48;
  FDockTarget local_38;
  
  pFVar3 = (param_2->Content).Object;
  if (pFVar3 != (FDragDropOperation *)0x0) {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar6 = (*pcVar4)(pFVar3);
    if (cVar6 != '\0') {
      pTVar8 = (param_2->Content).SharedReferenceCount.ReferenceController;
      this_00 = (FDockingDragOperation *)(param_2->Content).Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_142762adb;
    }
  }
  this_00 = (FDockingDragOperation *)0x0;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
LAB_142762adb:
  if (this_00 == (FDockingDragOperation *)0x0) {
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    local_48.SharedReferenceCount.ReferenceController =
         (this->OwnerNode).WeakReferenceCount.ReferenceController;
    local_48.Object = (SDockingNode *)0x0;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142762b1a;
        }
        LOCK();
        aVar7 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar7;
        if (bVar9) {
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar7;
      } while (!bVar9);
      local_48.Object = (this->OwnerNode).Object;
    }
LAB_142762b1a:
    FVar5.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    GetDropTarget(&local_38,&local_48,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    FDockingDragOperation::SetHoveredTarget(this_00,&local_38,(FInputEvent *)param_2);
    FReply::FReply(__return_storage_ptr__,true);
    if (local_38.TargetNode.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.TargetNode.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.TargetNode.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.TargetNode.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// OnDrop @ 1427636c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingCross::OnDrop
          (SDockingCross *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  char cVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  FWeakReferencer<1> FVar8;
  FDragDropOperation *pFVar9;
  bool bVar10;
  TSharedPtr<SDockingNode,1> local_48;
  FDockTarget local_38;
  
  pFVar9 = (param_2->Content).Object;
  if (pFVar9 != (FDragDropOperation *)0x0) {
    pcVar3 = *(code **)(pFVar9->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar5 = (*pcVar3)();
    if (cVar5 != '\0') {
      pTVar7 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar9 = (param_2->Content).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_142763725;
    }
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pFVar9 = (FDragDropOperation *)0x0;
LAB_142763725:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pFVar9 != (FDragDropOperation *)0x0) {
    local_48.SharedReferenceCount.ReferenceController =
         (this->OwnerNode).WeakReferenceCount.ReferenceController;
    local_48.Object = (SDockingNode *)0x0;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142763779;
        }
        LOCK();
        aVar6 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar10);
      local_48.Object = (this->OwnerNode).Object;
    }
LAB_142763779:
    FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    GetDropTarget(&local_38,&local_48,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    FVar8.ReferenceController = local_38.TargetNode.WeakReferenceCount.ReferenceController;
    if (local_38.TargetNode.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_38.TargetNode.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1427637c0;
        }
        LOCK();
        aVar6 = (local_38.TargetNode.WeakReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          (local_38.TargetNode.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar10);
      if (local_38.TargetNode.Object != (SDockingNode *)0x0) {
        (**(code **)((local_38.TargetNode.Object)->_padding_ + 0x278))
                  (local_38.TargetNode.Object,__return_storage_ptr__,local_38.DockDirection,param_2)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.TargetNode.WeakReferenceCount.ReferenceController);
        LOCK();
        paVar1 = &(local_38.TargetNode.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 != (atomic<int>)0x1) {
          return __return_storage_ptr__;
        }
        (**(code **)((local_38.TargetNode.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.TargetNode.WeakReferenceCount.ReferenceController,1);
        return __return_storage_ptr__;
      }
    }
LAB_1427637c0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    if (local_38.TargetNode.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.TargetNode.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.TargetNode.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.TargetNode.WeakReferenceCount.ReferenceController);
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 142767820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDockingCross::OnPaint
          (SDockingCross *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_308 [32];
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  ForAnyElementType local_298;
  undefined8 local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  float local_258;
  float fStack_254;
  undefined8 local_250;
  FDeprecateSlateVector2D local_248;
  undefined8 local_240;
  float local_238;
  undefined4 uStack_234;
  float local_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  undefined4 local_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_1a0;
  TVector2<float>_u_0 local_188;
  float local_180;
  undefined8 local_17c;
  FDeprecateSlateVector2D local_174;
  float local_16c [2];
  float afStack_164 [2];
  TVector2<float>_u_0 local_15c;
  byte local_154;
  TVector2<float>_u_0 local_150;
  float local_148;
  undefined8 local_144;
  FDeprecateSlateVector2D local_13c;
  float local_134 [2];
  float afStack_12c [2];
  TVector2<float>_u_0 local_124;
  byte local_11c;
  TVector2<float>_u_0 local_118;
  float local_110;
  undefined8 local_10c;
  FDeprecateSlateVector2D local_104;
  float local_fc [2];
  float afStack_f4 [2];
  TVector2<float>_u_0 local_ec;
  byte local_e4;
  TVector2<float>_u_0 local_e0;
  float local_d8;
  undefined8 local_d4;
  FDeprecateSlateVector2D local_cc;
  float local_c4 [2];
  float afStack_bc [2];
  TVector2<float>_u_0 local_b4;
  byte local_ac;
  TVector2<float>_u_0 local_a8;
  float local_a0;
  undefined8 local_9c;
  FDeprecateSlateVector2D local_94;
  float local_8c [2];
  float afStack_84 [2];
  TVector2<float>_u_0 local_7c;
  byte local_74;
  TVector2<float>_u_0 local_70;
  float local_68;
  undefined8 local_64;
  FDeprecateSlateVector2D local_5c;
  float local_54 [2];
  float afStack_4c [2];
  TVector2<float>_u_0 local_44;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_250 = param_2->Size;
  local_258 = (float)local_250 * __real_3e99999a;
  if (__real_43160000 <= (float)local_250 * __real_3e99999a) {
    local_258 = __real_43160000;
  }
  fStack_254 = local_250._4_4_ * __real_3e99999a;
  if (__real_43160000 <= local_250._4_4_ * __real_3e99999a) {
    fStack_254 = __real_43160000;
  }
  if (local_258 <= __real_40a00000) {
    local_258 = __real_40a00000;
  }
  if (fStack_254 <= __real_40a00000) {
    fStack_254 = __real_40a00000;
  }
  local_240 = 0;
  uStack_234 = 0;
  local_230 = (float)local_250 - local_258;
  fStack_21c = local_250._4_4_ - fStack_254;
  local_218 = 0;
  local_220 = (float)local_250 - local_258;
  fStack_224 = local_250._4_4_;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  fStack_20c = local_250._4_4_ - fStack_254;
  local_2b0 = 0;
  local_238 = (float)local_250;
  local_228 = (float)local_250;
  fStack_214 = local_250._4_4_;
  local_248 = local_250;
  fStack_22c = fStack_254;
  local_210 = local_258;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  iVar6 = iVar5 + 1;
  *(ulonglong *)(local_2b8.Data + (longlong)iVar5 * 8) = CONCAT44(fStack_254,local_258);
  local_2b0._0_4_ = iVar6;
  if (((local_2b8.Data <= (FScriptContainerElement *)&local_230) &&
      ((FScriptContainerElement *)&local_230 < local_2b8.Data + (longlong)local_2b0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2b0 == local_2b0._4_4_) {
    local_2b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  iVar6 = (int)local_2b0 + 1;
  *(ulonglong *)(local_2b8.Data + (longlong)(int)local_2b0 * 8) = CONCAT44(fStack_22c,local_230);
  local_2b0._0_4_ = iVar6;
  if (((local_2b8.Data <= (FScriptContainerElement *)&local_220) &&
      ((FScriptContainerElement *)&local_220 < local_2b8.Data + (longlong)local_2b0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2b0 == local_2b0._4_4_) {
    local_2b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  iVar6 = (int)local_2b0 + 1;
  *(ulonglong *)(local_2b8.Data + (longlong)(int)local_2b0 * 8) = CONCAT44(fStack_21c,local_220);
  local_2b0._0_4_ = iVar6;
  if (((local_2b8.Data <= (FScriptContainerElement *)&local_210) &&
      ((FScriptContainerElement *)&local_210 < local_2b8.Data + (longlong)local_2b0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2b0 == local_2b0._4_4_) {
    local_2b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  iVar6 = (int)local_2b0 + 1;
  *(ulonglong *)(local_2b8.Data + (longlong)(int)local_2b0 * 8) = CONCAT44(fStack_20c,local_210);
  local_2b0._0_4_ = iVar6;
  if (((local_2b8.Data <= (FScriptContainerElement *)&local_258) &&
      ((FScriptContainerElement *)&local_258 < local_2b8.Data + (longlong)local_2b0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2b0 == local_2b0._4_4_) {
    local_2b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  fVar3 = __real_3f800000;
  local_1f0.ArrayNum = (int)local_2b0 + 1;
  *(ulonglong *)(local_2b8.Data + (longlong)(int)local_2b0 * 8) = CONCAT44(fStack_254,local_258);
  local_180 = param_2->Scale;
  local_15c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1f0.AllocatorInstance.Data = local_2b8.Data;
  local_1f0.ArrayMax = local_2b0._4_4_;
  local_188 = (param_2->AbsolutePosition).field0_0x0;
  local_174 = param_2->Size;
  local_16c = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_164 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_154 = param_2->bHasRenderTransform * '\x02' | local_154 & 0xfc;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = 0;
  local_17c = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_188._s_0,&local_1f0,None,&FLinearColor::White,
             true,fVar3);
  if (local_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data);
  }
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_2a8,(int *)((longlong)&local_2a0 + 4));
  iVar6 = iVar5 + 1;
  *(undefined8 *)(local_2a8.Data + (longlong)iVar5 * 8) = local_240;
  local_2a0._0_4_ = iVar6;
  if (((local_2a8.Data <= (FScriptContainerElement *)&local_238) &&
      ((FScriptContainerElement *)&local_238 < local_2a8.Data + (longlong)local_2a0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2a0 == local_2a0._4_4_) {
    local_2a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2a8,(int *)((longlong)&local_2a0 + 4));
  }
  iVar6 = (int)local_2a0 + 1;
  *(ulonglong *)(local_2a8.Data + (longlong)(int)local_2a0 * 8) = CONCAT44(uStack_234,local_238);
  local_2a0._0_4_ = iVar6;
  if (((local_2a8.Data <= (FScriptContainerElement *)&local_228) &&
      ((FScriptContainerElement *)&local_228 < local_2a8.Data + (longlong)local_2a0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2a0 == local_2a0._4_4_) {
    local_2a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2a8,(int *)((longlong)&local_2a0 + 4));
  }
  iVar6 = (int)local_2a0 + 1;
  *(ulonglong *)(local_2a8.Data + (longlong)(int)local_2a0 * 8) = CONCAT44(fStack_224,local_228);
  local_2a0._0_4_ = iVar6;
  if (((local_2a8.Data <= (FScriptContainerElement *)&local_218) &&
      ((FScriptContainerElement *)&local_218 < local_2a8.Data + (longlong)local_2a0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2a0 == local_2a0._4_4_) {
    local_2a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2a8,(int *)((longlong)&local_2a0 + 4));
  }
  iVar6 = (int)local_2a0 + 1;
  *(ulonglong *)(local_2a8.Data + (longlong)(int)local_2a0 * 8) = CONCAT44(fStack_214,local_218);
  local_2a0._0_4_ = iVar6;
  if (((local_2a8.Data <= (FScriptContainerElement *)&local_240) &&
      ((FScriptContainerElement *)&local_240 < local_2a8.Data + (longlong)local_2a0._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_2a0 == local_2a0._4_4_) {
    local_2a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_2a8,(int *)((longlong)&local_2a0 + 4));
  }
  local_1e0.ArrayNum = (int)local_2a0 + 1;
  *(undefined8 *)(local_2a8.Data + (longlong)(int)local_2a0 * 8) = local_240;
  local_148 = param_2->Scale;
  local_124 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1e0.AllocatorInstance.Data = local_2a8.Data;
  local_1e0.ArrayMax = local_2a0._4_4_;
  local_150 = (param_2->AbsolutePosition).field0_0x0;
  local_13c = param_2->Size;
  local_134 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_12c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_11c = param_2->bHasRenderTransform * '\x02' | local_11c & 0xfc;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  local_144 = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_150._s_0,&local_1e0,None,&FLinearColor::White,
             true,fVar3);
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_298,(int *)((longlong)&local_290 + 4));
  iVar6 = iVar5 + 1;
  *(undefined8 *)(local_298.Data + (longlong)iVar5 * 8) = local_240;
  local_290._0_4_ = iVar6;
  if (((local_298.Data <= (FScriptContainerElement *)&local_258) &&
      ((FScriptContainerElement *)&local_258 < local_298.Data + (longlong)local_290._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_290 == local_290._4_4_) {
    local_290._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_298,(int *)((longlong)&local_290 + 4));
  }
  local_1d0.ArrayNum = (int)local_290 + 1;
  *(ulonglong *)(local_298.Data + (longlong)(int)local_290 * 8) = CONCAT44(fStack_254,local_258);
  local_110 = param_2->Scale;
  local_ec = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1d0.AllocatorInstance.Data = local_298.Data;
  local_1d0.ArrayMax = local_290._4_4_;
  local_118 = (param_2->AbsolutePosition).field0_0x0;
  local_104 = param_2->Size;
  local_fc = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_f4 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_e4 = param_2->bHasRenderTransform * '\x02' | local_e4 & 0xfc;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_10c = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_118._s_0,&local_1d0,None,&FLinearColor::White,
             true,fVar3);
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  uVar2 = CONCAT44(uStack_234,local_238);
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_288,(int *)((longlong)&local_280 + 4));
  iVar6 = iVar5 + 1;
  *(undefined8 *)(local_288.Data + (longlong)iVar5 * 8) = uVar2;
  local_208 = CONCAT44(fStack_22c,local_230);
  local_280._0_4_ = iVar6;
  if (((local_288.Data <= (FScriptContainerElement *)&local_208) &&
      ((FScriptContainerElement *)&local_208 < local_288.Data + (longlong)local_280._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_280 == local_280._4_4_) {
    local_280._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_288,(int *)((longlong)&local_280 + 4));
  }
  local_1c0.ArrayNum = (int)local_280 + 1;
  *(undefined8 *)(local_288.Data + (longlong)(int)local_280 * 8) = local_208;
  local_d8 = param_2->Scale;
  local_b4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1c0.AllocatorInstance.Data = local_288.Data;
  local_1c0.ArrayMax = local_280._4_4_;
  local_e0 = (param_2->AbsolutePosition).field0_0x0;
  local_cc = param_2->Size;
  local_c4 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_bc = (param_2->AccumulatedRenderTransform).M.M[1];
  local_ac = param_2->bHasRenderTransform * '\x02' | local_ac & 0xfc;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_d4 = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_e0._s_0,&local_1c0,None,&FLinearColor::White,
             true,fVar3);
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  uVar2 = CONCAT44(fStack_224,local_228);
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_278,(int *)((longlong)&local_270 + 4));
  iVar6 = iVar5 + 1;
  *(undefined8 *)(local_278.Data + (longlong)iVar5 * 8) = uVar2;
  local_200 = CONCAT44(fStack_21c,local_220);
  local_270._0_4_ = iVar6;
  if (((local_278.Data <= (FScriptContainerElement *)&local_200) &&
      ((FScriptContainerElement *)&local_200 < local_278.Data + (longlong)local_270._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_270 == local_270._4_4_) {
    local_270._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_278,(int *)((longlong)&local_270 + 4));
  }
  local_1b0.ArrayNum = (int)local_270 + 1;
  *(undefined8 *)(local_278.Data + (longlong)(int)local_270 * 8) = local_200;
  local_a0 = param_2->Scale;
  local_7c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1b0.AllocatorInstance.Data = local_278.Data;
  local_1b0.ArrayMax = local_270._4_4_;
  local_a8 = (param_2->AbsolutePosition).field0_0x0;
  local_94 = param_2->Size;
  local_8c = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_84 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_74 = param_2->bHasRenderTransform * '\x02' | local_74 & 0xfc;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_9c = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_a8._s_0,&local_1b0,None,&FLinearColor::White,
             true,fVar3);
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  uVar2 = CONCAT44(fStack_214,local_218);
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_268,(int *)((longlong)&local_260 + 4));
  iVar6 = iVar5 + 1;
  *(undefined8 *)(local_268.Data + (longlong)iVar5 * 8) = uVar2;
  local_1f8 = CONCAT44(fStack_20c,local_210);
  local_260._0_4_ = iVar6;
  if (((local_268.Data <= (FScriptContainerElement *)&local_1f8) &&
      ((FScriptContainerElement *)&local_1f8 < local_268.Data + (longlong)local_260._4_4_ * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
  if ((int)local_260 == local_260._4_4_) {
    local_260._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_268,(int *)((longlong)&local_260 + 4));
  }
  local_1a0.ArrayNum = (int)local_260 + 1;
  *(undefined8 *)(local_268.Data + (longlong)(int)local_260 * 8) = local_1f8;
  local_68 = param_2->Scale;
  local_44 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_1a0.AllocatorInstance.Data = local_268.Data;
  local_1a0.ArrayMax = local_260._4_4_;
  local_70 = (param_2->AbsolutePosition).field0_0x0;
  local_5c = param_2->Size;
  local_54 = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_4c = (param_2->AccumulatedRenderTransform).M.M[1];
  local_3c = param_2->bHasRenderTransform * '\x02' | local_3c & 0xfc;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_64 = 0;
  FSlateDrawElement::MakeLines
            (param_4,param_5,(FPaintGeometry *)&local_70._s_0,&local_1a0,None,&FLinearColor::White,
             true,fVar3);
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  return param_5;
}

