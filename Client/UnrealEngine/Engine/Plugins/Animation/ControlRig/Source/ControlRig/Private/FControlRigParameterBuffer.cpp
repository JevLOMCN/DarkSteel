// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FControlRigParameterBuffer @ 14a3b5cd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigParameterBuffer * __thiscall
UE::MovieScene::FControlRigParameterBuffer::FControlRigParameterBuffer
          (FControlRigParameterBuffer *this,UControlRig *param_1,
          EControlRigParameterBufferIndexStability param_2)

{
  UControlRig *local_res8;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UControlRig *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  FControlRigParameterValues::FControlRigParameterValues(&this->Values,param_2);
  return this;
}

// Apply @ 14a3ea570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UE::MovieScene::FControlRigParameterBuffer::Apply(FControlRigParameterBuffer *this)

{
  FControlRigParameterValueHeader *this_00;
  FControlRigParameterBuffer *pFVar1;
  int *piVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  LARGE_INTEGER LVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  FName *pFVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  wchar_t *pwVar13;
  ulonglong uVar14;
  FName FVar15;
  ushort *puVar16;
  uint uVar17;
  uchar *puVar18;
  uchar *puVar19;
  uchar *puVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  FColor_u_0 local_d8 [2];
  LARGE_INTEGER local_d0;
  FName *local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a0;
  FControlRigParameterBuffer *local_98;
  FStatMessage local_90;
  FName *local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  FName local_60;
  void *local_58 [3];
  
  local_d0 = (LARGE_INTEGER)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((UControlRig *)local_d0.QuadPart == (UControlRig *)0x0) {
    return;
  }
  puVar11 = (undefined8 *)(**(code **)(*(longlong *)local_d0 + 0x2d8))(local_d0.QuadPart,local_58);
  if (*(int *)(puVar11 + 1) == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)*puVar11;
  }
  local_res18[0] = 1;
  local_res10[0] = 1;
  local_res20[0] = 2;
  pFVar12 = ::FName::FName(&local_60,pwVar13);
  local_a0 = *pFVar12;
  local_80 = &local_a0;
  local_78 = local_res20;
  local_70 = local_res10;
  local_68 = local_res18;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_80);
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  bVar6 = false;
  bVar5 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  FVar15 = *local_c8;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8[0]._s_0,(char *)local_c8[2]);
      bVar6 = false;
      bVar5 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_c0.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)local_c8[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                   ,0x456);
        bVar6 = true;
        bVar5 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a3ea6ef;
    }
  }
  bVar6 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_b8 = local_b0;
  FVar15 = local_b0;
LAB_14a3ea6ef:
  LVar7 = local_d0;
  local_98 = this + 1;
  if ((FControlRigParameterBuffer *)&this->Values != local_98) {
    puVar16 = &(this->Values).Headers[0].NumElements;
    do {
      uVar3 = *puVar16;
      this_00 = (FControlRigParameterValueHeader *)(puVar16 + -5);
      puVar18 = (uchar *)0x0;
      uVar21 = 0;
      puVar20 = puVar18;
      if (uVar3 != 0) {
        uVar21 = (uint)uVar3;
        puVar20 = this_00->Data;
      }
      puVar19 = puVar18;
      if (this_00->Data != (uchar *)0x0) {
        uVar14 = (ulonglong)((byte)puVar16[1] & 0x7f);
        puVar19 = (uchar *)((ulonglong)(this_00->Data + (uVar14 - 1) + (ulonglong)puVar16[-1] * 8) &
                           -uVar14);
      }
      if (uVar3 != 0) {
        do {
          uVar17 = (uint)puVar18;
          uVar10 = 0;
          if ((int)uVar17 < (int)uVar21) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FControlRigParameterValueHeader::Apply
                    (this_00,(UControlRig *)LVar7,*(FName *)(puVar20 + (longlong)(int)uVar17 * 8),
                     uVar17,puVar19);
          puVar18 = (uchar *)(ulonglong)(uVar17 + 1);
        } while ((int)(uVar17 + 1) < (int)(uint)*puVar16);
      }
      pFVar1 = (FControlRigParameterBuffer *)(puVar16 + 3);
      FVar15 = local_b8;
      puVar16 = puVar16 + 8;
    } while (pFVar1 != local_98);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_90.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_90.StatData.Pad = (uchar  [8])(local_d0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_90);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Populate @ 14a432ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterBuffer::Populate(FControlRigParameterBuffer *this)

{
  undefined8 *puVar1;
  UControlRig *pUVar2;
  int iVar3;
  FControlRigParameterBuffer *this_00;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined8 *local_28 [2];
  
  pUVar2 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 != (UControlRig *)0x0) {
    this_00 = (FControlRigParameterBuffer *)&this->Values;
    (**(code **)(pUVar2->_padding_ + 0x3c0))(pUVar2,local_28);
    iVar3 = (int)local_28[1];
    puVar1 = local_28[0] + iVar3;
    puVar4 = local_28[0];
    while( true ) {
      if ((int)local_28[1] != iVar3) {
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar4 == puVar1) break;
      FControlRigParameterValues::AddCurrentValue
                ((FControlRigParameterValues *)this_00,pUVar2,(FRigControlElement *)*puVar4);
      puVar4 = puVar4 + 1;
    }
    if (local_28[0] != (undefined8 *)0x0) {
      FMemory::Free(local_28[0]);
    }
    for (; this_00 != this + 1;
        this_00 = (FControlRigParameterBuffer *)&(this_00->Values).Headers[0].Capacity) {
      FControlRigParameterValueHeader::Resort((FControlRigParameterValueHeader *)this_00);
    }
  }
  return;
}

