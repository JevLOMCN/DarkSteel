// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// TRenderAssetUpdate<FSkelMeshUpdateContext> @ 14733df90

TRenderAssetUpdate<FSkelMeshUpdateContext> * __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::TRenderAssetUpdate<FSkelMeshUpdateContext>
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this,UStreamableRenderAsset *param_1)

{
  FRenderAssetUpdate::FRenderAssetUpdate((FRenderAssetUpdate *)this,param_1);
  this->_padding_ = (longlong)&___7__TRenderAssetUpdate_UFSkelMeshUpdateContext____6B_;
  this->TaskThread = TT_None;
  *(undefined8 *)&this->TaskCallback = 0;
  *(undefined8 *)&(this->TaskCallback).field_0x28 = 0;
  this->CancelationThread = TT_None;
  *(undefined8 *)&this->CancelationCallback = 0;
  *(undefined8 *)&(this->CancelationCallback).field_0x28 = 0;
  return this;
}

// ~TRenderAssetUpdate<FSkelMeshUpdateContext> @ 1473413a0

void __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::~TRenderAssetUpdate<FSkelMeshUpdateContext>
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// ClearCallbacks @ 147347c70

void __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::ClearCallbacks
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->TaskThread = TT_None;
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->TaskCallback = 0;
  }
  this->CancelationThread = TT_None;
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->CancelationCallback = 0;
  }
  return;
}

// GetRelevantThread @ 1473507d0

EThreadType __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::GetRelevantThread
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this)

{
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    return this->CancelationThread;
  }
  return this->TaskThread;
}

// PushTask @ 1473538e0

void __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::PushTask
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this,FSkelMeshUpdateContext *param_1,
          EThreadType param_2,TFunction<void___cdecl(FSkelMeshUpdateContext_const_&)> *param_3,
          EThreadType param_4,TFunction<void___cdecl(FSkelMeshUpdateContext_const_&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->TaskThread = param_2;
  TFunction<void___cdecl(FSkelMeshUpdateContext_const_&)>::operator=(&this->TaskCallback,param_3);
  this->CancelationThread = param_4;
  TFunction<void___cdecl(FSkelMeshUpdateContext_const_&)>::operator=
            (&this->CancelationCallback,param_5);
  return;
}

// TickInternal @ 147359e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ETaskState __thiscall
TRenderAssetUpdate<FSkelMeshUpdateContext>::TickInternal
          (TRenderAssetUpdate<FSkelMeshUpdateContext> *this,EThreadType param_1,bool param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  ETaskState EVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  EThreadType EVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  EThreadType local_84;
  undefined4 local_74;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((int)this->_padding_ != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskState == TS_Locked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                         ,0x28,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  local_68[0] = *(code **)&this->TaskCallback;
  EVar5 = TS_Done;
  EVar10 = this->TaskThread;
  local_40 = (longlong *)0x0;
  if (local_68[0] != (code *)0x0) {
    puVar2 = *(undefined8 **)&(this->TaskCallback).field_0x28;
    puVar8 = (undefined8 *)&(this->TaskCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar8 = puVar2;
    }
    (**(code **)*puVar8)(puVar8,local_58);
  }
  plVar9 = (longlong *)this->_padding_;
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') || (plVar9 == (longlong *)0x0)) {
    EVar10 = this->CancelationThread;
    TFunction<void___cdecl(FSkelMeshUpdateContext_const_&)>::operator=
              ((TFunction<void___cdecl(FSkelMeshUpdateContext_const_&)> *)local_68,
               &this->CancelationCallback);
  }
  if (EVar10 == TT_None) {
    ClearCallbacks(this);
    goto LAB_14735a0eb;
  }
  if (0 < (int)this->_padding_) {
    EVar5 = TS_Suspended;
    goto LAB_14735a0eb;
  }
  if ((param_2) && (bVar4 = IsAssetStreamingSuspended(), bVar4)) {
    EVar5 = TS_Suspended;
    goto LAB_14735a0eb;
  }
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    EVar5 = TS_Suspended;
    goto LAB_14735a0eb;
  }
  if (EVar10 != param_1) {
    if (EVar10 == TT_GameThread) {
      if ((int)this->_padding_ == 0) {
        FRenderAssetUpdate::ScheduleGTTask((FRenderAssetUpdate *)this);
        EVar5 = TS_Locked;
        goto LAB_14735a0eb;
      }
    }
    else if (EVar10 == TT_Render) {
      if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (GIsThreadedRendering != false)) {
        FRenderAssetUpdate::ScheduleRenderTask((FRenderAssetUpdate *)this);
        EVar5 = TS_Locked;
        goto LAB_14735a0eb;
      }
    }
    else if ((EVar10 == TT_Async) && ((int)this->_padding_ == 0)) {
      FRenderAssetUpdate::ScheduleAsyncTask((FRenderAssetUpdate *)this);
      EVar5 = TS_Locked;
      goto LAB_14735a0eb;
    }
    EVar5 = TS_InProgress;
    goto LAB_14735a0eb;
  }
  ClearCallbacks(this);
  local_84 = param_1;
  if (plVar9 == (longlong *)0x0) {
LAB_147359fe6:
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    local_90 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x1f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(plVar9[2] + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar9[2] + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_147359fe6;
    local_98 = 0;
    local_90 = 0;
    local_a8 = plVar9;
  }
  local_a0 = (longlong *)(**(code **)(*local_a8 + 0x398))(local_a8);
  local_88 = (uint)*(byte *)((longlong)local_a8 + 0xdc);
  if (local_a0 != (longlong *)0x0) {
    local_98 = *local_a0 + (ulonglong)*(byte *)((longlong)local_a8 + 0xdc) * 8;
    local_90 = (uint)*(byte *)((longlong)local_a8 + 0xdb);
    local_8c = local_74;
  }
  UE::Core::Private::Function::CheckCallable(local_68[0]);
  pcVar3 = local_68[0];
  plVar9 = local_58;
  if (local_40 != (longlong *)0x0) {
    plVar9 = local_40;
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  (*pcVar3)(uVar7,&local_a8);
  EVar5 = TS_Locked;
LAB_14735a0eb:
  if (local_68[0] != (code *)0x0) {
    plVar9 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return EVar5;
}

// TRenderAssetUpdate<FStaticMeshUpdateContext> @ 148776520

TRenderAssetUpdate<FStaticMeshUpdateContext> * __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::TRenderAssetUpdate<FStaticMeshUpdateContext>
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this,UStreamableRenderAsset *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  TRenderAssetUpdate<FStaticMeshUpdateContext> *pTVar7;
  
  this->_padding_ = (longlong)&___7FRenderAssetUpdate__6B_;
  this->_padding_ = (longlong)(param_1->CachedSRRState).field0_0x0;
  *(uint *)&this->_padding_ =
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.MaxNumLODs -
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.NumResidentLODs;
  *(uint *)((longlong)&this->_padding_ + 4) =
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.MaxNumLODs -
       (uint)(param_1->CachedSRRState).field0_0x0._s_0.NumRequestedLODs;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined4 *)&this->_padding_ = 4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if ((this->_padding_ & 1) != 0) {
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    bVar2 = *(byte *)((longlong)&this->_padding_ + 1);
    if (((((bVar2 <= bVar1) && (bVar3 = *(byte *)((longlong)&this->_padding_ + 3), bVar1 <= bVar3))
         && (bVar3 < 0x11)) &&
        ((bVar1 = *(byte *)((longlong)&this->_padding_ + 5), bVar2 <= bVar1 && (bVar1 <= bVar3))))
       && ((bVar4 = *(byte *)((longlong)&this->_padding_ + 6), bVar2 <= bVar4 &&
           ((bVar4 <= bVar3 && (bVar1 != bVar4)))))) goto LAB_148776613;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8014357864225177769>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                     ,0xa9,"ResourceState.IsValidForStreamingRequest()");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TRenderAssetUpdate<FStaticMeshUpdateContext> *)(*pcVar5)();
    return pTVar7;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
LAB_148776613:
  this->_padding_ = (longlong)&___7__TRenderAssetUpdate_UFStaticMeshUpdateContext____6B_;
  *(undefined8 *)&this->TaskCallback = 0;
  *(undefined8 *)&(this->TaskCallback).field_0x28 = 0;
  *(undefined8 *)&this->CancelationCallback = 0;
  *(undefined8 *)&(this->CancelationCallback).field_0x28 = 0;
  this->TaskThread = TT_None;
  this->CancelationThread = TT_None;
  return this;
}

// ~TRenderAssetUpdate<FStaticMeshUpdateContext> @ 14877e2b0

void __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::~TRenderAssetUpdate<FStaticMeshUpdateContext>
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// ClearCallbacks @ 14878d1b0

void __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::ClearCallbacks
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->TaskThread = TT_None;
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->TaskCallback = 0;
  }
  this->CancelationThread = TT_None;
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->CancelationCallback = 0;
  }
  return;
}

// GetRelevantThread @ 1487a3c10

EThreadType __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::GetRelevantThread
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this)

{
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    return this->CancelationThread;
  }
  return this->TaskThread;
}

// PushTask @ 1487b4820

void __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::PushTask
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this,FStaticMeshUpdateContext *param_1,
          EThreadType param_2,TFunction<void___cdecl(FStaticMeshUpdateContext_const_&)> *param_3,
          EThreadType param_4,TFunction<void___cdecl(FStaticMeshUpdateContext_const_&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->TaskThread = param_2;
  TFunction<void___cdecl(FStaticMeshUpdateContext_const_&)>::operator=(&this->TaskCallback,param_3);
  this->CancelationThread = param_4;
  TFunction<void___cdecl(FStaticMeshUpdateContext_const_&)>::operator=
            (&this->CancelationCallback,param_5);
  return;
}

// TickInternal @ 1487c9320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ETaskState __thiscall
TRenderAssetUpdate<FStaticMeshUpdateContext>::TickInternal
          (TRenderAssetUpdate<FStaticMeshUpdateContext> *this,EThreadType param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  FQueuedThreadPool *pFVar6;
  bool bVar7;
  ETaskState EVar8;
  UClass *pUVar9;
  undefined8 uVar10;
  UStaticMesh *pUVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined ***pppuVar15;
  ulonglong uVar16;
  UStaticMesh *this_02;
  EThreadType EVar17;
  undefined1 auStackY_148 [32];
  EExtendedTaskPriority local_118;
  ETaskPriority local_117 [7];
  UStaticMesh *local_110;
  FStaticMeshRenderData *local_108;
  FScriptContainerElement *local_100;
  uint local_f8;
  undefined4 local_f4;
  EThreadType local_f0;
  undefined4 local_dc;
  code *local_d8 [2];
  undefined **local_c8;
  TRenderAssetUpdate<FStaticMeshUpdateContext> *pTStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  code *local_a8 [2];
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  TRenderAssetUpdate<FStaticMeshUpdateContext> *pTStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((int)this->_padding_ != 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskState == TS_Locked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                         ,0x28,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    EVar8 = (*pcVar4)();
    return EVar8;
  }
  this_02 = (UStaticMesh *)0x0;
  EVar8 = TS_Done;
  EVar17 = this->TaskThread;
  local_a8[0] = *(code **)&this->TaskCallback;
  local_80 = (longlong *)0x0;
  if (*(code **)&this->TaskCallback != (code *)0x0) {
    puVar3 = *(undefined8 **)&(this->TaskCallback).field_0x28;
    puVar13 = (undefined8 *)&(this->TaskCallback).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar13 = puVar3;
    }
    (**(code **)*puVar13)(puVar13,local_98);
  }
  pUVar11 = (UStaticMesh *)this->_padding_;
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') || (pUVar11 == (UStaticMesh *)0x0)) {
    EVar17 = this->CancelationThread;
    TFunction<void___cdecl(FStaticMeshUpdateContext_const_&)>::operator=
              ((TFunction<void___cdecl(FStaticMeshUpdateContext_const_&)> *)local_a8,
               &this->CancelationCallback);
  }
  if (EVar17 == TT_None) {
    ClearCallbacks(this);
    goto LAB_1487c986d;
  }
  if (0 < (int)this->_padding_) {
    EVar8 = TS_Suspended;
    goto LAB_1487c986d;
  }
  if ((param_2) && (0 < (int)GRenderAssetStreamingSuspension)) {
    EVar8 = TS_Suspended;
    goto LAB_1487c986d;
  }
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    EVar8 = TS_Suspended;
    goto LAB_1487c986d;
  }
  if (EVar17 != param_1) {
    if (EVar17 == TT_GameThread) {
      if ((int)this->_padding_ != 0) goto LAB_1487c9868;
      if (((int)this->_padding_ != 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskState == TS_Locked",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                             ,0x11e,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        EVar8 = (*pcVar4)();
        return EVar8;
      }
      bVar7 = IsInGameThread();
      if (bVar7) {
        FRenderAssetUpdate::Tick((FRenderAssetUpdate *)this,TT_GameThread);
        EVar8 = TS_Locked;
        goto LAB_1487c986d;
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      pUVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
      if (pUVar11 != (UStaticMesh *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)pUVar11,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        pUVar11->_padding_ = (longlong)&___7__TGraphTask_VFRenderAssetUpdateTickGTTask____6B_;
        this_02 = pUVar11;
      }
      this_02->_padding_ = (longlong)this;
      LOCK();
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      UE::Tasks::Private::TranslatePriority(GameThread,local_117,&local_118);
      UE::Tasks::Private::FTaskBase::Init
                ((FTaskBase *)this_02,L"GraphTask",local_117[0],local_118,None);
      if (this_02 == (UStaticMesh *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xe0);
        EVar8 = TS_Locked;
        goto LAB_1487c986d;
      }
      LOCK();
      *(int *)&this_02->_padding_ = (int)this_02->_padding_ + 1;
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_02,0xe0);
      LOCK();
      plVar14 = &this_02->_padding_;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)this_02->_padding_)(this_02,1);
        EVar8 = TS_Locked;
        goto LAB_1487c986d;
      }
    }
    else if (EVar17 == TT_Render) {
      if ((*(int *)((longlong)&this->_padding_ + 4) != 0) || (GIsThreadedRendering == false)) {
LAB_1487c9868:
        EVar8 = TS_InProgress;
        goto LAB_1487c986d;
      }
      if (((int)this->_padding_ != 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskState == TS_Locked",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                             ,0x12f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        EVar8 = (*pcVar4)();
        return EVar8;
      }
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      LOCK();
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      local_b0 = (undefined ***)0x0;
      local_c8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FRenderAssetUpdate::ScheduleRenderTask'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pTStack_c0 = this;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FRenderAssetUpdate::ScheduleRenderTask_::__l2::TSTR_RenderAssetUpdateCommand310>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_d8[0];
        local_d8[0] = (code *)0x0;
        local_50 = local_b0;
        local_68 = local_c8;
        pTStack_60 = pTStack_c0;
        local_58 = local_b8;
        local_48 = 2;
        pFVar12 = (FRenderCommandTag *)
                  TRenderCommandTag<`FRenderAssetUpdate::ScheduleRenderTask'::__l2::TSTR_RenderAssetUpdateCommand310>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar12);
        uVar16 = (ulonglong)local_48;
        if ((2 < uVar16) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          EVar8 = (*pcVar4)();
          return EVar8;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            pppuVar15 = (undefined ***)(local_78 + 0x10);
            if (local_50 != (undefined ***)0x0) {
              pppuVar15 = local_50;
            }
            (*(code *)(*pppuVar15)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16])(local_78);
        }
      }
      if (local_d8[0] != (code *)0x0) {
        pppuVar15 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar15 = local_b0;
        }
        (*(code *)(*pppuVar15)[2])();
        EVar8 = TS_Locked;
        goto LAB_1487c986d;
      }
    }
    else {
      if ((EVar17 != TT_Async) || ((int)this->_padding_ != 0)) goto LAB_1487c9868;
      if (((int)this->_padding_ != 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskState == TS_Locked",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                             ,0x145,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        EVar8 = (*pcVar4)();
        return EVar8;
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      pUVar11 = ::operator_new(0x40);
      if (pUVar11 != (UStaticMesh *)0x0) {
        pUVar11->_padding_ = 0;
        pUVar11->_padding_ =
             (longlong)&___7__FAutoDeleteAsyncTask_VFMipUpdateTask_FRenderAssetUpdate____6B_;
        pUVar11->_padding_ = (longlong)this;
        LOCK();
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        this_02 = pUVar11;
      }
      pFVar6 = GThreadPool;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_02->_padding_);
      if (pFVar6 != (FQueuedThreadPool *)0x0) {
        (**(code **)((longlong)*pFVar6 + 0x18))(pFVar6,this_02,3);
        EVar8 = TS_Locked;
        goto LAB_1487c986d;
      }
      FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask>::DoWork
                ((FAutoDeleteAsyncTask<FRenderAssetUpdate::FMipUpdateTask> *)this_02);
    }
    EVar8 = TS_Locked;
    goto LAB_1487c986d;
  }
  ClearCallbacks(this);
  local_f0 = param_1;
  if (pUVar11 == (UStaticMesh *)0x0) {
LAB_1487c947b:
    local_110 = (UStaticMesh *)0x0;
    local_100 = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x24,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      EVar8 = (*pcVar4)();
      return EVar8;
    }
  }
  else {
    pUVar9 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) goto LAB_1487c947b;
    local_100 = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    this_02 = pUVar11;
    local_110 = pUVar11;
  }
  local_108 = UStaticMesh::GetRenderData(this_02);
  if (local_108 != (FStaticMeshRenderData *)0x0) {
    local_100 = (local_108->LODResources).Array.AllocatorInstance.Data +
                (ulonglong)*(byte *)((longlong)&this_02->_padding_ + 4) * 8;
    local_f8 = (uint)*(byte *)((longlong)&this_02->_padding_ + 3);
    local_f4 = local_dc;
  }
  UE::Core::Private::Function::CheckCallable(local_a8[0]);
  pcVar4 = local_a8[0];
  plVar14 = local_98;
  if (local_80 != (longlong *)0x0) {
    plVar14 = local_80;
  }
  uVar10 = (**(code **)(*plVar14 + 8))();
  (*pcVar4)(uVar10,&local_110);
  EVar8 = TS_Locked;
LAB_1487c986d:
  if (local_a8[0] != (code *)0x0) {
    plVar14 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar14 = local_80;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return EVar8;
}

// TRenderAssetUpdate<FTexture2DUpdateContext> @ 1488048b0

TRenderAssetUpdate<FTexture2DUpdateContext> * __thiscall
TRenderAssetUpdate<FTexture2DUpdateContext>::TRenderAssetUpdate<FTexture2DUpdateContext>
          (TRenderAssetUpdate<FTexture2DUpdateContext> *this,UStreamableRenderAsset *param_1)

{
  FRenderAssetUpdate::FRenderAssetUpdate((FRenderAssetUpdate *)this,param_1);
  this->_padding_ = (longlong)&___7__TRenderAssetUpdate_UFTexture2DUpdateContext____6B_;
  this->TaskThread = TT_None;
  *(undefined8 *)&this->TaskCallback = 0;
  *(undefined8 *)&(this->TaskCallback).field_0x28 = 0;
  this->CancelationThread = TT_None;
  *(undefined8 *)&this->CancelationCallback = 0;
  *(undefined8 *)&(this->CancelationCallback).field_0x28 = 0;
  return this;
}

// TRenderAssetUpdate<FTextureUpdateContext> @ 148804900

TRenderAssetUpdate<FTextureUpdateContext> * __thiscall
TRenderAssetUpdate<FTextureUpdateContext>::TRenderAssetUpdate<FTextureUpdateContext>
          (TRenderAssetUpdate<FTextureUpdateContext> *this,UStreamableRenderAsset *param_1)

{
  FRenderAssetUpdate::FRenderAssetUpdate((FRenderAssetUpdate *)this,param_1);
  this->_padding_ = (longlong)&___7__TRenderAssetUpdate_UFTextureUpdateContext____6B_;
  this->TaskThread = TT_None;
  *(undefined8 *)&this->TaskCallback = 0;
  *(undefined8 *)&(this->TaskCallback).field_0x28 = 0;
  this->CancelationThread = TT_None;
  *(undefined8 *)&this->CancelationCallback = 0;
  *(undefined8 *)&(this->CancelationCallback).field_0x28 = 0;
  return this;
}

// ~TRenderAssetUpdate<FTexture2DUpdateContext> @ 14880b380

void __thiscall
TRenderAssetUpdate<FTexture2DUpdateContext>::~TRenderAssetUpdate<FTexture2DUpdateContext>
          (TRenderAssetUpdate<FTexture2DUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// ~TRenderAssetUpdate<FTextureUpdateContext> @ 14880b3e0

void __thiscall
TRenderAssetUpdate<FTextureUpdateContext>::~TRenderAssetUpdate<FTextureUpdateContext>
          (TRenderAssetUpdate<FTextureUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// ClearCallbacks @ 148829d70

void __thiscall
TRenderAssetUpdate<FTexture2DUpdateContext>::ClearCallbacks
          (TRenderAssetUpdate<FTexture2DUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->TaskThread = TT_None;
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->TaskCallback = 0;
  }
  this->CancelationThread = TT_None;
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->CancelationCallback = 0;
  }
  return;
}

// ClearCallbacks @ 148829de0

void __thiscall
TRenderAssetUpdate<FTextureUpdateContext>::ClearCallbacks
          (TRenderAssetUpdate<FTextureUpdateContext> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->TaskThread = TT_None;
  if (*(longlong *)&this->TaskCallback != 0) {
    plVar1 = *(longlong **)&(this->TaskCallback).field_0x28;
    plVar2 = (longlong *)&(this->TaskCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->TaskCallback = 0;
  }
  this->CancelationThread = TT_None;
  if (*(longlong *)&this->CancelationCallback != 0) {
    plVar1 = *(longlong **)&(this->CancelationCallback).field_0x28;
    plVar2 = (longlong *)&(this->CancelationCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->CancelationCallback = 0;
  }
  return;
}

// GetRelevantThread @ 148841100

EThreadType __thiscall
TRenderAssetUpdate<FTexture2DUpdateContext>::GetRelevantThread
          (TRenderAssetUpdate<FTexture2DUpdateContext> *this)

{
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    return this->CancelationThread;
  }
  return this->TaskThread;
}

// GetRelevantThread @ 148841120

EThreadType __thiscall
TRenderAssetUpdate<FTextureUpdateContext>::GetRelevantThread
          (TRenderAssetUpdate<FTextureUpdateContext> *this)

{
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    return this->CancelationThread;
  }
  return this->TaskThread;
}

// PushTask @ 14884fb20

void __thiscall
TRenderAssetUpdate<FTexture2DUpdateContext>::PushTask
          (TRenderAssetUpdate<FTexture2DUpdateContext> *this,FTexture2DUpdateContext *param_1,
          EThreadType param_2,TFunction<void___cdecl(FTexture2DUpdateContext_const_&)> *param_3,
          EThreadType param_4,TFunction<void___cdecl(FTexture2DUpdateContext_const_&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->TaskThread = param_2;
  TFunction<void___cdecl(FTexture2DUpdateContext_const_&)>::operator=(&this->TaskCallback,param_3);
  this->CancelationThread = param_4;
  TFunction<void___cdecl(FTexture2DUpdateContext_const_&)>::operator=
            (&this->CancelationCallback,param_5);
  return;
}

// PushTask @ 14884fbb0

void __thiscall
TRenderAssetUpdate<FTextureUpdateContext>::PushTask
          (TRenderAssetUpdate<FTextureUpdateContext> *this,FTextureUpdateContext *param_1,
          EThreadType param_2,TFunction<void___cdecl(FTextureUpdateContext_const_&)> *param_3,
          EThreadType param_4,TFunction<void___cdecl(FTextureUpdateContext_const_&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->TaskThread = param_2;
  TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=(&this->TaskCallback,param_3);
  this->CancelationThread = param_4;
  TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
            (&this->CancelationCallback,param_5);
  return;
}

// TickInternal @ 14885b6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ETaskState __thiscall
TRenderAssetUpdate<FTexture2DUpdateContext>::TickInternal
          (TRenderAssetUpdate<FTexture2DUpdateContext> *this,EThreadType param_1,bool param_2)

{
  int iVar1;
  undefined8 *puVar2;
  UTexture *this_00;
  code *pcVar3;
  bool bVar4;
  ETaskState EVar5;
  UClass *pUVar6;
  FTextureResource *pFVar7;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  EThreadType EVar12;
  undefined1 auStack_c8 [32];
  UTexture *local_a8;
  FStreamableTextureResource *pFStack_a0;
  FTexture2DMipMap **ppFStack_98;
  undefined8 local_90;
  EThreadType local_88;
  TArrayView<FTexture2DMipMap_const_*,int> local_80;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((int)this->_padding_ != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  local_68[0] = *(code **)&this->TaskCallback;
  EVar5 = TS_Done;
  EVar12 = this->TaskThread;
  local_40 = (longlong *)0x0;
  if (local_68[0] != (code *)0x0) {
    puVar2 = *(undefined8 **)&(this->TaskCallback).field_0x28;
    puVar10 = (undefined8 *)&(this->TaskCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar10 = puVar2;
    }
    (**(code **)*puVar10)(puVar10,local_58);
  }
  this_00 = (UTexture *)this->_padding_;
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') || (this_00 == (UTexture *)0x0)) {
    EVar12 = this->CancelationThread;
    TFunction<void___cdecl(FTexture2DUpdateContext_const_&)>::operator=
              ((TFunction<void___cdecl(FTexture2DUpdateContext_const_&)> *)local_68,
               &this->CancelationCallback);
  }
  if (EVar12 == TT_None) {
    ClearCallbacks(this);
    goto LAB_14885b8f0;
  }
  if (0 < (int)this->_padding_) {
    EVar5 = TS_Suspended;
    goto LAB_14885b8f0;
  }
  if (param_2) {
    bVar4 = IsAssetStreamingSuspended();
    if (bVar4) {
      EVar5 = TS_Suspended;
      goto LAB_14885b8f0;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    EVar5 = TS_Suspended;
    goto LAB_14885b8f0;
  }
  if (EVar12 != param_1) {
    if (EVar12 == TT_GameThread) {
      if ((int)this->_padding_ == 0) {
        FRenderAssetUpdate::ScheduleGTTask((FRenderAssetUpdate *)this);
        EVar5 = TS_Locked;
        goto LAB_14885b8f0;
      }
    }
    else if (EVar12 == TT_Render) {
      if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (GIsThreadedRendering != false)) {
        FRenderAssetUpdate::ScheduleRenderTask((FRenderAssetUpdate *)this);
        EVar5 = TS_Locked;
        goto LAB_14885b8f0;
      }
    }
    else if ((EVar12 == TT_Async) && ((int)this->_padding_ == 0)) {
      FRenderAssetUpdate::ScheduleAsyncTask((FRenderAssetUpdate *)this);
      EVar5 = TS_Locked;
      goto LAB_14885b8f0;
    }
    EVar5 = TS_InProgress;
    goto LAB_14885b8f0;
  }
  ClearCallbacks(this);
  local_88 = param_1;
  if (this_00 == (UTexture *)0x0) {
LAB_14885b855:
    ppFStack_98 = (FTexture2DMipMap **)0x0;
    local_a8 = (UTexture *)0x0;
    pFStack_a0 = (FStreamableTextureResource *)0x0;
    local_90 = (ulonglong)local_90._4_4_ << 0x20;
  }
  else {
    pUVar6 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14885b855;
    local_90 = local_90 & 0xffffffff00000000;
    pFStack_a0 = (FStreamableTextureResource *)0x0;
    ppFStack_98 = (FTexture2DMipMap **)0x0;
    local_a8 = this_00;
    pFVar7 = UTexture::GetResource(this_00);
    if (pFVar7 != (FTextureResource *)0x0) {
      pFVar7 = UTexture::GetResource(local_a8);
      pFStack_a0 = (FStreamableTextureResource *)(**(code **)(pFVar7->_padding_ + 0x58))(pFVar7);
      if (pFStack_a0 != (FStreamableTextureResource *)0x0) {
        pTVar8 = FStreamableTextureResource::GetPlatformMipsView(pFStack_a0,&local_80);
        ppFStack_98 = pTVar8->DataPtr;
        local_90 = *(ulonglong *)&pTVar8->ArrayNum;
      }
    }
  }
  UE::Core::Private::Function::CheckCallable(local_68[0]);
  pcVar3 = local_68[0];
  plVar11 = local_58;
  if (local_40 != (longlong *)0x0) {
    plVar11 = local_40;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  (*pcVar3)(uVar9,&local_a8);
  EVar5 = TS_Locked;
LAB_14885b8f0:
  if (local_68[0] != (code *)0x0) {
    plVar11 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar11 = local_40;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return EVar5;
}

// TickInternal @ 14885b940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ETaskState __thiscall
TRenderAssetUpdate<FTextureUpdateContext>::TickInternal
          (TRenderAssetUpdate<FTextureUpdateContext> *this,EThreadType param_1,bool param_2)

{
  int iVar1;
  undefined8 *puVar2;
  UTexture *this_00;
  code *pcVar3;
  bool bVar4;
  ETaskState EVar5;
  UClass *pUVar6;
  FTextureResource *pFVar7;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar8;
  undefined8 uVar9;
  FString *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  EThreadType EVar15;
  undefined1 auStack_f8 [32];
  UTexture *local_d8;
  FStreamableTextureResource *local_d0;
  FTexture2DMipMap **ppFStack_c8;
  undefined8 local_c0;
  EThreadType local_b8;
  FString local_b0;
  TArrayView<FTexture2DMipMap_const_*,int> local_a0;
  FString local_90;
  FString local_80;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pwVar14 = L"";
  if ((int)this->_padding_ != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  local_68[0] = *(code **)&this->TaskCallback;
  EVar5 = TS_Done;
  EVar15 = this->TaskThread;
  local_40 = (longlong *)0x0;
  if (local_68[0] != (code *)0x0) {
    puVar2 = *(undefined8 **)&(this->TaskCallback).field_0x28;
    puVar11 = (undefined8 *)&(this->TaskCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar11 = puVar2;
    }
    (**(code **)*puVar11)(puVar11,local_58);
  }
  this_00 = (UTexture *)this->_padding_;
  if ((*(char *)((longlong)&this->_padding_ + 4) != '\0') || (this_00 == (UTexture *)0x0)) {
    EVar15 = this->CancelationThread;
    TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
              ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_68,
               &this->CancelationCallback);
  }
  if (EVar15 == TT_None) {
    ClearCallbacks(this);
  }
  else if ((int)this->_padding_ < 1) {
    if (param_2) {
      bVar4 = IsAssetStreamingSuspended();
      if (bVar4) {
        EVar5 = TS_Suspended;
        goto LAB_14885bb95;
      }
    }
    if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
      if (EVar15 == param_1) {
        ClearCallbacks(this);
        if (this_00 == (UTexture *)0x0) {
          pFVar10 = GetTypeName<UTexture>(&local_b0);
          if ((pFVar10->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar14);
        }
        pUVar6 = Z_Construct_UClass_UTexture_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          pFVar10 = GetTypeName<UTexture>(&local_90);
          if ((pFVar10->Data).ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
          pFVar10 = GetFullNameForCastLogError<UStreamableRenderAsset_const_>
                              (&local_80,(UStreamableRenderAsset *)this_00);
          if ((pFVar10->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar14,pwVar13);
        }
        local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
        local_d0 = (FStreamableTextureResource *)0x0;
        ppFStack_c8 = (FTexture2DMipMap **)0x0;
        local_d8 = this_00;
        local_b8 = param_1;
        pFVar7 = UTexture::GetResource(this_00);
        if (pFVar7 != (FTextureResource *)0x0) {
          pFVar7 = UTexture::GetResource(local_d8);
          local_d0 = (FStreamableTextureResource *)(**(code **)(pFVar7->_padding_ + 0x88))(pFVar7);
          if (local_d0 != (FStreamableTextureResource *)0x0) {
            pTVar8 = FStreamableTextureResource::GetPlatformMipsView(local_d0,&local_a0);
            ppFStack_c8 = pTVar8->DataPtr;
            local_c0 = *(longlong *)&pTVar8->ArrayNum;
          }
        }
        UE::Core::Private::Function::CheckCallable(local_68[0]);
        pcVar3 = local_68[0];
        plVar12 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar12 = local_40;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar9,&local_d8);
        EVar5 = TS_Locked;
      }
      else {
        if (EVar15 == TT_GameThread) {
          if ((int)this->_padding_ == 0) {
            FRenderAssetUpdate::ScheduleGTTask((FRenderAssetUpdate *)this);
            EVar5 = TS_Locked;
            goto LAB_14885bb95;
          }
        }
        else if (EVar15 == TT_Render) {
          if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (GIsThreadedRendering != false)) {
            FRenderAssetUpdate::ScheduleRenderTask((FRenderAssetUpdate *)this);
            EVar5 = TS_Locked;
            goto LAB_14885bb95;
          }
        }
        else if ((EVar15 == TT_Async) && ((int)this->_padding_ == 0)) {
          FRenderAssetUpdate::ScheduleAsyncTask((FRenderAssetUpdate *)this);
          EVar5 = TS_Locked;
          goto LAB_14885bb95;
        }
        EVar5 = TS_InProgress;
      }
    }
    else {
      *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
      EVar5 = TS_Suspended;
    }
  }
  else {
    EVar5 = TS_Suspended;
  }
LAB_14885bb95:
  if (local_68[0] != (code *)0x0) {
    plVar12 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar12 = local_40;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return EVar5;
}

