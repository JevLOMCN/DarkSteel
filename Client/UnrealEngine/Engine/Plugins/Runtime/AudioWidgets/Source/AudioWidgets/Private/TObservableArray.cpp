// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// RemoveAt<int> @ 14d8a25d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Slate::Containers::
TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
RemoveAt<int>(TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
              *this,int param_1,int param_2,EAllowShrinking param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  FVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  EAllowShrinking local_res20;
  ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_150;
  undefined8 local_148;
  FMemMark local_140;
  longlong local_118;
  longlong local_110;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> local_f8;
  undefined8 local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined1 *local_d0;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int iStack_b4;
  EObservableArrayChangedAction EStack_b0;
  undefined7 uStack_af;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  EObservableArrayChangedAction EStack_90;
  undefined7 uStack_8f;
  TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_88;
  TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_68;
  
  lVar13 = (longlong)param_2;
  uVar12 = 0;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar7 = uVar12;
  if (0 < param_2) {
    uVar7 = uVar11;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (((param_1 + param_2 <= (this->Array).ArrayNum & uVar7) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(NumToRemove > 0) & (Index >= 0) & (Index + NumToRemove <= Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x15c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0 < param_2) {
    if (param_2 == 1) {
      uVar7 = uVar12;
      if (param_1 < (this->Array).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->Array).AllocatorInstance.Data + (longlong)param_1 * 0x10;
      local_f8.Object = *(FLoudnessMetric **)pFVar8;
      local_f8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar8 + 8);
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_1 + param_2 <= (this->Array).ArrayNum) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Array,param_1,1);
      if (param_3 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Array).ArrayNum,&(this->Array).ArrayMax);
      }
      iStack_100 = 1;
      local_108 = &local_f8;
      iStack_b4 = -1;
      EStack_b0 = Remove;
      uStack_c0 = 1;
      uStack_bc = uStack_fc;
      local_b8 = param_1;
      local_c8 = local_108;
      if (param_1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x47,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_88.MoveIndex = iStack_b4;
      local_88.StartIndex = local_b8;
      local_88._25_7_ = uStack_af;
      local_88.Action = EStack_b0;
      local_88.Array.ArrayNum = iStack_100;
      local_88.Array.DataPtr = local_108;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ArrayChangedDelegate,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
    }
    else {
      puVar5 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_d0 = local_res8;
      local_d8 = Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar5);
      local_150.Data =
           (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)0x0;
      local_148 = 0;
      local_140.Mem = (FMemStackBase *)(pFVar6 + 2);
      local_140.Top = (local_140.Mem)->Top;
      local_140.SavedChunk = *(FTaggedMemory **)(pFVar6 + 4);
      local_140.bPopped = false;
      local_140.NextTopmostMark = *(FMemMark **)(pFVar6 + 5);
      pFVar6[5] = (FTlsAutoCleanup)&local_140;
      *(int *)(pFVar6 + 6) = *(int *)(pFVar6 + 6) + 1;
      Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
                (0x10,8,param_2,&local_150,0,(int *)((longlong)&local_148 + 4));
      FVar9.Data = local_150.Data;
      iVar10 = (int)local_148;
      local_110 = lVar13;
      if (param_2 != 0) {
        lVar15 = (longlong)param_1 << 4;
        local_118 = lVar13;
        do {
          uVar7 = 0;
          if (param_1 < (this->Array).ArrayNum) {
            uVar7 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar14 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
                    ((this->Array).AllocatorInstance.Data + lVar15);
          if (((FVar9.Data <= pTVar14) && (pTVar14 < FVar9.Data + local_148._4_4_)) &&
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
          iVar4 = iVar10;
          if (iVar10 == local_148._4_4_) {
            iVar4 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>
                              (0x810,&local_150,(int *)((longlong)&local_148 + 4));
            FVar9.Data = local_150.Data;
          }
          iVar10 = iVar4 + 1;
          local_148 = CONCAT44(local_148._4_4_,iVar10);
          FVar9.Data[iVar4].Object = pTVar14->Object;
          pTVar1 = (pTVar14->SharedReferenceCount).ReferenceController;
          FVar9.Data[iVar4].SharedReferenceCount.ReferenceController = pTVar1;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          param_1 = param_1 + 1;
          lVar15 = lVar15 + 0x10;
          local_118 = local_118 + -1;
        } while (local_118 != 0);
        local_118 = 0;
        param_3 = local_res20;
        param_2 = local_res18;
        param_1 = local_res10;
      }
      uVar7 = 0;
      if (param_1 + param_2 <= (this->Array).ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if (((uVar11 & uVar7) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Array,param_1,param_2);
      if (param_3 == Default) {
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Array).ArrayNum,&(this->Array).ArrayMax);
      }
      iStack_94 = -1;
      EStack_90 = Remove;
      local_e8._0_4_ = SUB84(FVar9.Data,0);
      local_e8._4_4_ = (undefined4)((ulonglong)FVar9.Data >> 0x20);
      local_a8 = (undefined4)local_e8;
      uStack_a4 = local_e8._4_4_;
      uStack_9c = uStack_dc;
      local_68.Array.DataPtr._4_4_ = local_e8._4_4_;
      pTVar14 = FVar9.Data;
      uStack_e0 = param_2;
      uStack_a0 = param_2;
      local_98 = param_1;
      if (param_1 < 0) {
        local_e8 = FVar9.Data;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                           ,0x47,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_68.Array.DataPtr._4_4_ = local_e8._4_4_;
        pTVar14 = local_e8;
      }
      local_e8 = pTVar14;
      local_68.MoveIndex = iStack_94;
      local_68.StartIndex = local_98;
      local_68._25_7_ = uStack_8f;
      local_68.Action = EStack_90;
      local_68.Array.DataPtr._0_4_ = (undefined4)local_e8;
      local_68.Array.ArrayNum = uStack_e0;
      TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->ArrayChangedDelegate,&local_68);
      DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
                (FVar9.Data,iVar10);
      if (local_140.bPopped == false) {
        if (((local_140.Mem)->TopMark != &local_140) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_140.bPopped = true;
        (local_140.Mem)->NumMarks = (local_140.Mem)->NumMarks + -1;
        if (local_140.SavedChunk != (local_140.Mem)->TopChunk) {
          FMemStackBase::FreeChunks(local_140.Mem,local_140.SavedChunk);
        }
        (local_140.Mem)->Top = local_140.Top;
        (local_140.Mem)->TopMark = local_140.NextTopmostMark;
      }
    }
  }
  return;
}

// Add @ 14d8d9cb0

int __thiscall
UE::Slate::Containers::
TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::Add
          (TObservableArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
                 *param_1)

{
  int *piVar1;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined7 uStack_2f;
  TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
  local_28;
  
  pTVar2 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (this->Array).AllocatorInstance.Data;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Array).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  iVar7 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  (this->Array).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x10;
  *(FLoudnessMetric **)(pFVar3 + lVar8) = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar3 + lVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = (this->Array).AllocatorInstance.Data;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Array.Num() > 0 && Result.StartIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Containers\\ObservableArray.h"
                         ,0x3d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  local_28.Array.ArrayNum = 1;
  local_28.MoveIndex = -1;
  local_28.StartIndex = iVar7;
  local_28._25_7_ = uStack_2f;
  local_28.Action = Add;
  local_28.Array.DataPtr =
       (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
       (pFVar3 + lVar8);
  TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->ArrayChangedDelegate,&local_28);
  return iVar7;
}

