// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState> @ 148a40a90

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
* __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
          (TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,EReplicationFragmentTraits param_1,UObject *param_2,
          FReplicationStateDescriptor *param_3,bool param_4)

{
  TUniquePtr<FWorldPartitionDestructibleHLODState,TDefaultDelete<FWorldPartitionDestructibleHLODState>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  FWorldPartitionDestructibleHLODState *pFVar3;
  FWorldPartitionDestructibleHLODState *this_00;
  undefined8 local_18 [2];
  
  Net::Private::FFastArrayReplicationFragmentBase::FFastArrayReplicationFragmentBase
            ((FFastArrayReplicationFragmentBase *)this,param_1,param_2,param_3,param_4);
  this_00 = (FWorldPartitionDestructibleHLODState *)0x0;
  this->_padding_ =
       (longlong)
       &
       ___7__TFastArrayReplicationFragment_UFWorldPartitionDestructibleHLODDamagedActorState__UFWorldPartitionDestructibleHLODState___Net_UE__6B_
  ;
  pTVar1 = &this->AccumulatedReceivedState;
  pTVar1->Ptr = (FWorldPartitionDestructibleHLODState *)0x0;
  if ((param_1 & CanReceive) != None) {
    pFVar3 = ::operator_new(0x138);
    if (pFVar3 != (FWorldPartitionDestructibleHLODState *)0x0) {
      memset(pFVar3,0,0x138);
      FFastArraySerializer::FFastArraySerializer((FFastArraySerializer *)pFVar3);
      (pFVar3->DamagedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->DamagedActors).ArrayNum = 0;
      (pFVar3->DamagedActors).ArrayMax = 0;
      (pFVar3->OwnerComponent).field0_0x0.DebugPtr = (UWorldPartitionDestructibleHLODComponent *)0x0
      ;
      (pFVar3->ActorsToDamagedActorsMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      (pFVar3->ActorsToDamagedActorsMapping).ArrayNum = 0;
      (pFVar3->ActorsToDamagedActorsMapping).ArrayMax = 0;
      pFVar3->bIsServer = false;
      pFVar3->bIsClient = false;
      pFVar3->NumDestructibleActors = 0;
      this_00 = pFVar3;
    }
    if (pTVar1 == (TUniquePtr<FWorldPartitionDestructibleHLODState,TDefaultDelete<FWorldPartitionDestructibleHLODState>_>
                   *)local_18) {
      if (this_00 == (FWorldPartitionDestructibleHLODState *)0x0) {
        return this;
      }
      pFVar2 = (this_00->ActorsToDamagedActorsMapping).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (this_00->DamagedActors).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      FFastArraySerializer::~FFastArraySerializer((FFastArraySerializer *)this_00);
    }
    else {
      pFVar3 = pTVar1->Ptr;
      pTVar1->Ptr = this_00;
      if (pFVar3 == (FWorldPartitionDestructibleHLODState *)0x0) {
        return this;
      }
      pFVar2 = (pFVar3->ActorsToDamagedActorsMapping).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar3->DamagedActors).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      FFastArraySerializer::~FFastArraySerializer((FFastArraySerializer *)pFVar3);
      this_00 = pFVar3;
    }
    ::operator_delete(this_00,0x138);
  }
  return this;
}

// ApplyReplicatedState @ 148a49ff0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::ApplyReplicatedState
          (TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,FReplicationStateApplyContext *param_1)

{
  longlong lVar1;
  FWorldPartitionDestructibleHLODState *pFVar2;
  longlong lVar3;
  FReplicationStateDescriptor *pFVar4;
  FWorldPartitionDestructibleHLODState *pFVar5;
  
  lVar1 = this->_padding_;
  pFVar5 = (FWorldPartitionDestructibleHLODState *)
           ((longlong)*(int *)(**(longlong **)(this->_padding_ + 0x38) + 0x44) + this->_padding_);
  pFVar4 = Net::Private::FFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
                     ((FFastArrayReplicationFragmentBase *)this);
  Net::Private::FFastArrayReplicationFragmentBase::InternalPartialDequantizeFastArray
            (param_1,(uchar *)(this->AccumulatedReceivedState).Ptr,
             (param_1->StateBufferData)._s_1.RawStateBuffer,pFVar4);
  pFVar2 = (this->AccumulatedReceivedState).Ptr;
  lVar3 = this->_padding_;
  pFVar4 = Net::Private::FFastArrayReplicationFragmentBase::GetArrayElementDescriptor
                     ((FFastArrayReplicationFragmentBase *)this);
  Net::Private::FFastArrayReplicationFragmentHelper::
  ApplyReplicatedState<FWorldPartitionDestructibleHLODState,TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>_>
            (pFVar5,(TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>
                     *)((longlong)&pFVar5->_padding_ + lVar1),pFVar2,
             (TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *
             )((longlong)&pFVar2->_padding_ + lVar3),pFVar4,param_1);
  return;
}

// CallRepNotifies @ 148a4c420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::CallRepNotifies(TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                  *this,FReplicationStateApplyContext *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  FReplicationStateDescriptor *pFVar5;
  undefined1 auStack_2d8 [32];
  FFastArraySerializer local_2b8;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined4 local_184;
  FFastArraySerializer local_178;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  lVar1 = this->_padding_;
  lVar2 = **(longlong **)(lVar1 + 0x40);
  if (lVar2 != 0) {
    if (param_1->bIsInit != 0) {
      FFastArraySerializer::FFastArraySerializer(&local_2b8);
      local_1b0 = (void *)0x0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = 0;
      local_184 = 0;
      FFastArraySerializer::FFastArraySerializer(&local_178);
      local_70 = (void *)0x0;
      local_68 = 0;
      local_60 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_48 = 0;
      local_44 = 0;
      pFVar5 = Net::Private::FFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
                         ((FFastArrayReplicationFragmentBase *)this);
      Net::Private::FFastArrayReplicationFragmentBase::InternalDequantizeFastArray
                (param_1->NetSerializationContext,(uchar *)&local_2b8,
                 (param_1->StateBufferData)._s_1.RawStateBuffer,pFVar5);
      pFVar5 = Net::Private::FFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
                         ((FFastArrayReplicationFragmentBase *)this);
      Net::Private::FFastArrayReplicationFragmentBase::InternalDequantizeExtraProperties
                (param_1->NetSerializationContext,(uchar *)&local_2b8,
                 (param_1->StateBufferData)._s_1.RawStateBuffer,pFVar5);
      plVar3 = (longlong *)**(undefined8 **)(lVar1 + 0x38);
      cVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,&local_2b8,&local_178,0);
      if (cVar4 != '\0') {
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if (local_70 != (void *)0x0) {
          FMemory::Free(local_70);
        }
        FFastArraySerializer::~FFastArraySerializer(&local_178);
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
        if (local_1b0 != (void *)0x0) {
          FMemory::Free(local_1b0);
        }
        FFastArraySerializer::~FFastArraySerializer(&local_2b8);
        return;
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      FFastArraySerializer::~FFastArraySerializer(&local_178);
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      if (local_1b0 != (void *)0x0) {
        FMemory::Free(local_1b0);
      }
      FFastArraySerializer::~FFastArraySerializer(&local_2b8);
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x260))((longlong *)this->_padding_,lVar2,0);
  }
  return;
}

// IsDirty @ 148a5e270

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::IsDirty(TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
          *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this->_padding_ + 8);
  if ((*(uint *)(this->_padding_ + 0xb8) & 0x800) != 0) {
    return SUB41((uint)*(undefined4 *)
                        ((longlong)puVar1 + ((ulonglong)*(uint *)(this->_padding_ + 0x88) - 4)) >>
                 0x1f,0);
  }
  return SUB41((uint)*puVar1 >> 0x1f,0);
}

// IsDirtyForPolling @ 148a5e2b0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::IsDirtyForPolling(TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
                    *this)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  uint local_c [3];
  
  lVar2 = this->_padding_;
  lVar3 = *(longlong *)(this->_padding_ + 8);
  uVar5 = 0;
  uVar6 = uVar5;
  if ((*(uint *)(lVar2 + 0xb8) >> 0xb & 1) != 0) {
    uVar6 = (ulonglong)*(uint *)(lVar2 + 0x88) - 4;
  }
  if (-1 < *(int *)(lVar3 + uVar6)) {
    uVar1 = *(ushort *)(lVar2 + 0x7c);
    if ((*(uint *)(lVar2 + 0xb8) & 2) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (*(ushort *)(lVar2 + 0x86) + 0x1f >> 5) << 2;
    }
    local_c[0] = (uint)uVar1;
    puVar8 = local_c;
    if (uVar1 != 0) {
      puVar8 = (uint *)((ulonglong)
                        (*(uint *)(lVar2 + 0x88) + (*(ushort *)(lVar2 + 0x86) + 0x1f >> 5) * 4 +
                        iVar7) + lVar3);
    }
    if (uVar1 + 0x1f >> 5 != 0) {
      do {
        if (puVar8[uVar5] != 0) {
          return true;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar1 + 0x1f >> 5);
    }
    return false;
  }
  return true;
}

// PollAllState @ 148a60a60

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::PollAllState(TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
               *this,bool param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  FReplicationStateDescriptor *pFVar10;
  uint *puVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uVar14;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this_00;
  byte bVar17;
  longlong lVar15;
  int *piVar16;
  longlong lVar18;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *this_01;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  uint local_74;
  longlong local_70;
  ulonglong local_68;
  FReplicationStateDescriptor *local_60;
  TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *local_58;
  
  lVar18 = this->_padding_;
  this_00 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            ((longlong)*(int *)(**(longlong **)(this->_padding_ + 0x38) + 0x44) + this->_padding_);
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)**(undefined8 **)(this->_padding_ + 0x60),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.h"
               ,0xc6);
  }
  uVar19 = 0;
  plVar1 = (longlong *)(this->_padding_ + 8);
  uVar12 = uVar19;
  if (this->_padding_ != 0) {
    uVar12 = (ulonglong)**(uint **)this->_padding_ + *plVar1;
  }
  this_01 = (TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_> *)
            (this->_padding_ + uVar12);
  local_68 = uVar12;
  local_58 = this_01;
  if ((param_1) || (*(int *)&this_00[1].Elements.field_0x4 != *(int *)(uVar12 + 0x54))) {
    uVar4 = this_01->ArrayNum;
    uVar20 = *(uint *)((longlong)(&this_00->Hash + -3) + lVar18);
    lVar15 = (longlong)(int)uVar20;
    bVar8 = false;
    if (uVar4 != uVar20) {
      TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>::SetNum
                (this_01,uVar20,Default);
    }
    pFVar10 = Net::Private::FFastArrayReplicationFragmentBase::GetArrayElementDescriptor
                        ((FFastArrayReplicationFragmentBase *)this);
    lVar5 = this->_padding_;
    local_74 = (uint)*(ushort *)(lVar5 + 0x86);
    puVar11 = &local_74;
    if (local_74 != 0) {
      puVar11 = (uint *)((ulonglong)*(uint *)(lVar5 + 0x88) + *(longlong *)(this->_padding_ + 8));
    }
    uVar3 = **(ushort **)(lVar5 + 8);
    uVar14 = 0;
    lVar18 = *(longlong *)((this_00->Hash).InlineData + lVar18 + -0x38);
    local_70 = lVar15;
    local_60 = pFVar10;
    if (0 < (int)uVar20) {
      piVar16 = (int *)(lVar18 + 4);
      uVar20 = (*(ushort **)(lVar5 + 8))[1] - 1;
      lVar18 = (longlong)(this_01->AllocatorInstance).Data - lVar18;
      uVar12 = uVar19;
      do {
        local_70 = lVar15;
        if (piVar16[-1] == -1) {
          *(int *)&this_00[1].Elements = *(int *)&this_00[1].Elements + 1;
          piVar16[-1] = *(int *)&this_00[1].Elements;
          if (*(int *)&this_00[1].Elements == -1) {
            *(undefined4 *)&this_00[1].Elements = 0;
          }
          *piVar16 = *piVar16 + 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                    (this_00);
          puVar2 = &this_00[1].Elements.field_0x4;
          *(int *)puVar2 = *(int *)puVar2 + 1;
          if (*(int *)&this_00[1].Elements.field_0x4 == -1) {
            *(undefined4 *)&this_00[1].Elements.field_0x4 = 0;
          }
          *(undefined8 *)&this_00[3].Elements.field_0x8 = 0xffffffffffffffff;
        }
        if (((*piVar16 != *(int *)((longlong)piVar16 + lVar18)) ||
            (piVar13 = (int *)(lVar18 + -4 + (longlong)piVar16), piVar16[-1] != *piVar13)) ||
           ((param_1 &&
            (bVar7 = Net::Private::FFastArrayReplicationFragmentBase::InternalCompareArrayElement
                               (pFVar10,piVar13,piVar16 + -1), !bVar7)))) {
          Net::Private::FFastArrayReplicationFragmentBase::InternalCopyArrayElement
                    (pFVar10,(void *)((longlong)piVar16 + lVar18 + -4),piVar16 + -1);
          *(int *)((longlong)piVar16 + lVar18) = *piVar16;
          if (uVar20 != 0) {
            uVar14 = uVar3 + 1 + (int)(uVar12 % (ulonglong)uVar20);
            if ((local_74 <= uVar14) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < BitCount",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x2a2,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11[uVar14 >> 5] = puVar11[uVar14 >> 5] | 1 << (uVar14 & 0x1f);
            lVar15 = local_70;
          }
          bVar8 = true;
        }
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
        piVar16 = piVar16 + 5;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      local_70 = 0;
      uVar12 = local_68;
    }
    if (local_58->ArrayNum != uVar14) {
      TArray<FWorldPartitionDestructibleHLODDamagedActorState,TSizedDefaultAllocator<32>_>::SetNum
                (local_58,uVar14,No);
    }
    if ((bVar8) || (uVar4 != uVar14)) {
      *(undefined4 *)(uVar12 + 0x54) = *(undefined4 *)&this_00[1].Elements.field_0x4;
      bVar8 = FPropertyReplicationState::IsCustomConditionEnabled
                        ((FPropertyReplicationState *)this->_padding_,0);
      if (bVar8) {
        if ((local_74 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        *puVar11 = *puVar11 | 1;
        uVar12 = uVar19;
        if ((*(uint *)(this->_padding_ + 0xb8) & 0x800) != 0) {
          uVar12 = (ulonglong)*(uint *)(this->_padding_ + 0x88) - 4;
        }
        puVar11 = (uint *)(uVar12 + *(longlong *)(this->_padding_ + 8));
        *puVar11 = *puVar11 | 0x80000000;
      }
    }
    else {
      *(undefined4 *)(uVar12 + 0x54) = *(undefined4 *)&this_00[1].Elements.field_0x4;
    }
    if ((*(uint *)(this->_padding_ + 0xb8) & 0x800) != 0) {
      uVar19 = (ulonglong)*(uint *)(this->_padding_ + 0x88) - 4;
    }
    bVar17 = (byte)((uint)*(undefined4 *)(uVar19 + *(longlong *)(this->_padding_ + 8)) >> 0x18);
  }
  else {
    if ((*(uint *)(this->_padding_ + 0xb8) & 0x800) != 0) {
      uVar19 = (ulonglong)*(uint *)(this->_padding_ + 0x88) - 4;
    }
    bVar17 = (byte)((uint)*(undefined4 *)(*plVar1 + uVar19) >> 0x18);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)(bVar17 >> 7);
}

// PollReplicatedState @ 148a60e70

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::PollReplicatedState
          (TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,EReplicationFragmentPollFlags param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint local_c;
  
  if ((param_1 & ForceRefreshCachedObjectReferencesAfterGC) != None) {
    bVar4 = PollAllState(this,true);
    return bVar4;
  }
  if ((param_1 & PollAllState) == None) {
    iVar7 = 0;
    uVar8 = 0;
    if ((param_1 & PollDirtyState) == None) {
LAB_148a60f5f:
      if ((*(uint *)(this->_padding_ + 0xb8) & 0x800) != 0) {
        uVar8 = (ulonglong)*(uint *)(this->_padding_ + 0x88) - 4;
      }
      return SUB41((uint)*(undefined4 *)(*(longlong *)(this->_padding_ + 8) + uVar8) >> 0x1f,0);
    }
    if ((this->_padding_ & 0x400) != 0) {
      lVar2 = this->_padding_;
      lVar3 = *(longlong *)(this->_padding_ + 8);
      uVar5 = uVar8;
      if ((*(uint *)(lVar2 + 0xb8) >> 0xb & 1) != 0) {
        uVar5 = (ulonglong)*(uint *)(lVar2 + 0x88) - 4;
      }
      if (-1 < *(int *)(lVar3 + uVar5)) {
        uVar1 = *(ushort *)(lVar2 + 0x7c);
        if ((*(uint *)(lVar2 + 0xb8) & 2) != 0) {
          iVar7 = (*(ushort *)(lVar2 + 0x86) + 0x1f >> 5) << 2;
        }
        local_c = (uint)uVar1;
        puVar9 = &local_c;
        if (uVar1 != 0) {
          puVar9 = (uint *)((ulonglong)
                            (*(uint *)(lVar2 + 0x88) + (*(ushort *)(lVar2 + 0x86) + 0x1f >> 5) * 4 +
                            iVar7) + lVar3);
        }
        uVar5 = uVar8;
        if (uVar1 + 0x1f >> 5 != 0) {
          do {
            if (puVar9[uVar5] != 0) goto LAB_148a60f91;
            uVar6 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar6;
          } while (uVar6 < uVar1 + 0x1f >> 5);
        }
        goto LAB_148a60f5f;
      }
    }
  }
LAB_148a60f91:
  bVar4 = PollAllState(this,false);
  return bVar4;
}

// ReplicatedStateToString @ 148a65e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UE::Net::
TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
::ReplicatedStateToString
          (TFastArrayReplicationFragment<FWorldPartitionDestructibleHLODDamagedActorState,FWorldPartitionDestructibleHLODState>
           *this,TStringBuilderBase<wchar_t> *param_1,FReplicationStateApplyContext *param_2,
          EReplicationStateToStringFlags param_3)

{
  FReplicationStateDescriptor *pFVar1;
  undefined1 auStack_188 [32];
  FFastArraySerializer local_168;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  FFastArraySerializer::FFastArraySerializer(&local_168);
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  pFVar1 = Net::Private::FFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
                     ((FFastArrayReplicationFragmentBase *)this);
  Net::Private::FFastArrayReplicationFragmentBase::InternalDequantizeFastArray
            (param_2->NetSerializationContext,(uchar *)&local_168,
             (param_2->StateBufferData)._s_1.RawStateBuffer,pFVar1);
  pFVar1 = Net::Private::FFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
                     ((FFastArrayReplicationFragmentBase *)this);
  Net::Private::FFastArrayReplicationFragmentBase::ToString(param_1,(uchar *)&local_168,pFVar1);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  FFastArraySerializer::~FFastArraySerializer(&local_168);
  return;
}

