// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// ApplyAndCallLegacyFunctions @ 144230240

void __cdecl
UE::Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyFunctions
          (FContext *param_1,FNetSerializationContext *param_2)

{
  FStateData *pFVar1;
  uint uVar2;
  FReplicationFragment *pFVar3;
  code *pcVar4;
  bool bVar5;
  FStateData *pFVar6;
  bool bVar7;
  bool bVar8;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res18 [8];
  <lambda_2> local_res20 [8];
  FReplicationStateDescriptor *local_78;
  FNetSerializationContext *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  FReplicationStateDescriptor *local_50;
  FNetSerializationContext *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId240,"FDequantizeAndApplyHelper_ApplyAndCallLegacyFunctions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DequantizeAndApplyHelper.cpp"
               ,0xf0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId240);
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId216,"FDequantizeAndApplyHelper_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DequantizeAndApplyHelper.cpp"
               ,0xd8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId216);
  }
  CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyPreApplyFunction_::__l2::<lambda_1>_>
            (param_1,local_res8);
  uVar2 = param_1->CachedStateCount;
  pFVar6 = param_1->CachedStateData;
  if (((int)uVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = pFVar6 + (int)uVar2;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
    local_78 = pFVar6->Descriptor;
    local_68 = *(undefined4 *)&pFVar6->StateBufferData;
    uStack_64 = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 4);
    uStack_60 = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 8);
    uStack_5c = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 0xc);
    local_58 = ((pFVar6->bMightHaveUnresolvableInitReferences & 1) * 2 |
               pFVar6->bHasUnresolvableReferences & 1) * 2 | param_1->bIsInitialState |
               local_58 & 0xfffffff8;
    local_70 = param_2;
    (**(code **)(pFVar6->Fragment->_padding_ + 8))(pFVar6->Fragment,&local_78);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId248,"FDequantizeAndApplyHelper_CallLegacyPostApplyFunctions"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DequantizeAndApplyHelper.cpp"
               ,0xf8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
  }
  if (__CsvProfilerStat249 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RepNotifies");
    __CsvProfilerStat249 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RepNotifies","CSV_RepNotifies");
  CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions_::__l2::<lambda_1>_>
            (param_1,local_res18);
  if (param_1->bNeedsLegacyCallbacks != 0) {
    uVar2 = param_1->CachedStateCount;
    pFVar6 = param_1->CachedStateData;
    if (((int)uVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar6 + (int)uVar2;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      pFVar3 = pFVar6->Fragment;
      if ((pFVar3->Traits & HasRepNotifies) != None) {
        local_50 = pFVar6->Descriptor;
        local_40 = *(undefined4 *)&pFVar6->StateBufferData;
        uStack_3c = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 4);
        uStack_38 = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 8);
        uStack_34 = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 0xc);
        local_30 = param_1->bIsInitialState | local_30 & 0xfffffffe;
        local_48 = param_2;
        (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,&local_50);
      }
    }
  }
  CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions_::__l2::<lambda_2>_>
            (param_1,local_res20);
  FCsvProfiler::EndExclusiveStat("RepNotifies");
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyAndCallLegacyPreApplyFunction @ 144230510

void __cdecl
UE::Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyPreApplyFunction
          (FContext *param_1,FNetSerializationContext *param_2)

{
  FStateData *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FStateData *pFVar5;
  bool bVar6;
  <lambda_1> local_res8 [8];
  FReplicationStateDescriptor *local_48;
  FNetSerializationContext *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId216,"FDequantizeAndApplyHelper_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DequantizeAndApplyHelper.cpp"
               ,0xd8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId216);
  }
  CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyPreApplyFunction_::__l2::<lambda_1>_>
            (param_1,local_res8);
  uVar2 = param_1->CachedStateCount;
  pFVar5 = param_1->CachedStateData;
  if (((int)uVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar5 + (int)uVar2;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 1) {
    local_48 = pFVar5->Descriptor;
    local_38 = *(undefined4 *)&pFVar5->StateBufferData;
    uStack_34 = *(undefined4 *)((longlong)&pFVar5->StateBufferData + 4);
    uStack_30 = *(undefined4 *)((longlong)&pFVar5->StateBufferData + 8);
    uStack_2c = *(undefined4 *)((longlong)&pFVar5->StateBufferData + 0xc);
    local_28 = ((pFVar5->bMightHaveUnresolvableInitReferences & 1) * 2 |
               pFVar5->bHasUnresolvableReferences & 1) * 2 | param_1->bIsInitialState |
               local_28 & 0xfffffff8;
    local_40 = param_2;
    (**(code **)(pFVar5->Fragment->_padding_ + 8))(pFVar5->Fragment,&local_48);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CallLegacyPostApplyFunctions @ 144232df0

void __cdecl
UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions
          (FContext *param_1,FNetSerializationContext *param_2)

{
  FStateData *pFVar1;
  uint uVar2;
  FReplicationFragment *pFVar3;
  code *pcVar4;
  bool bVar5;
  FStateData *pFVar6;
  bool bVar7;
  <lambda_1> local_res8 [8];
  <lambda_2> local_res18 [8];
  FReplicationStateDescriptor *local_48;
  FNetSerializationContext *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId248,"FDequantizeAndApplyHelper_CallLegacyPostApplyFunctions"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DequantizeAndApplyHelper.cpp"
               ,0xf8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
  }
  if (__CsvProfilerStat249 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RepNotifies");
    __CsvProfilerStat249 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RepNotifies","CSV_RepNotifies");
  CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions_::__l2::<lambda_1>_>
            (param_1,local_res8);
  if (param_1->bNeedsLegacyCallbacks != 0) {
    uVar2 = param_1->CachedStateCount;
    pFVar6 = param_1->CachedStateData;
    if (((int)uVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar6 + (int)uVar2;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      pFVar3 = pFVar6->Fragment;
      if ((pFVar3->Traits & HasRepNotifies) != None) {
        local_48 = pFVar6->Descriptor;
        local_38 = *(undefined4 *)&pFVar6->StateBufferData;
        uStack_34 = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 4);
        uStack_30 = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 8);
        uStack_2c = *(undefined4 *)((longlong)&pFVar6->StateBufferData + 0xc);
        local_28 = param_1->bIsInitialState | local_28 & 0xfffffffe;
        local_40 = param_2;
        (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,&local_48);
      }
    }
  }
  CallLegacyFunctionForEachOwner<_UE::Net::Private::FDequantizeAndApplyHelper::CallLegacyPostApplyFunctions_::__l2::<lambda_2>_>
            (param_1,local_res18);
  FCsvProfiler::EndExclusiveStat("RepNotifies");
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// Deinitialize @ 144236340

void __cdecl UE::Net::Private::FDequantizeAndApplyHelper::Deinitialize(FContext *param_1)

{
  FStateData *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FStateData *pFVar5;
  
  if (param_1 != (FContext *)0x0) {
    pFVar5 = param_1->CachedStateData;
    uVar2 = param_1->CachedStateCount;
    if (((int)uVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = pFVar5 + (int)uVar2;
    for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->FragmentTraits & HasPersistentTargetStateBuffer) == None) {
        (*pFVar5->Descriptor->DestructReplicationState)
                  ((pFVar5->StateBufferData).ExternalStateBuffer,pFVar5->Descriptor);
      }
    }
  }
  return;
}

// Initialize @ 144241c20

FContext * __cdecl
UE::Net::Private::FDequantizeAndApplyHelper::Initialize
          (FNetSerializationContext *param_1,FDequantizeAndApplyParameters *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  FReplicationFragment *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  FReplicationProtocol *pFVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  FContext *pFVar9;
  ulong64 uVar10;
  FStateData *pFVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  UObject **ppUVar15;
  FReplicationStateOwnerCollector *pFVar16;
  FStateData *pFVar17;
  FMemStackBase *this;
  uchar *puVar18;
  uint uVar19;
  bool bVar20;
  uint local_f8;
  uint local_f4;
  FNetBitArrayView local_f0;
  uint local_e0;
  FMemStackBase *local_d8;
  uchar *local_d0;
  uint local_c4;
  FReplicationInstanceProtocol *local_c0;
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  FReplicationProtocol *local_a8;
  FStateData *local_a0;
  FReplicationStateDescriptor **local_98;
  FReplicationFragment **local_90;
  uint *local_88;
  FContext *local_80;
  FNetBitArrayView local_78;
  FNetBitStreamReader local_68;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId68,"FDequantizeAndApplyHelper_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DequantizeAndApplyHelper.cpp"
               ,0x44);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId68);
  }
  this = param_2->Allocator;
  local_d8 = this;
  pFVar9 = FMemStackBase::Alloc(this,0x20,0x10);
  pFVar9->CachedStateData = (FStateData *)0x0;
  pFVar9->OwnerCollector = (FReplicationStateOwnerCollector *)0x0;
  pFVar9->UnresolvedReferencesChangeMaskData = (uint *)0x0;
  *(undefined8 *)&pFVar9->CachedStateCount = 0;
  local_c0 = param_2->InstanceProtocol;
  local_a8 = param_2->Protocol;
  local_88 = param_2->UnresolvedReferencesChangeMaskData;
  auVar4 = ZEXT816(0x28) * ZEXT416(local_a8->ReplicationStateCount);
  uVar10 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  local_80 = pFVar9;
  pFVar11 = FMemStackBase::Alloc(this,uVar10,0x10);
  local_a0 = pFVar11;
  memset(pFVar11,0,uVar10);
  pFVar5 = local_a8;
  puVar18 = param_2->SrcObjectStateBuffer;
  local_f8 = 0;
  local_98 = local_a8->ReplicationStateDescriptors;
  local_90 = local_c0->Fragments;
  FNetBitStreamReader::FNetBitStreamReader(&local_68);
  FNetBitStreamReader::InitBits(&local_68,param_2->ChangeMaskData,pFVar5->ChangeMaskBitCount);
  local_c4 = pFVar5->ReplicationStateCount;
  uVar12 = 0;
  local_f4 = 0;
  local_e0 = 0;
  pFVar17 = pFVar11;
  if (local_c4 != 0) {
    do {
      pFVar1 = local_98[uVar12];
      local_d0 = (uchar *)((ulonglong)(puVar18 + ((ulonglong)pFVar1->InternalAlignment - 1)) &
                          -(ulonglong)pFVar1->InternalAlignment);
      uVar8 = pFVar1->ChangeMaskBitCount;
      uVar19 = uVar8 + 0x1f >> 5;
      uVar10 = SUB168(ZEXT816(4) * ZEXT416(uVar19),0);
      if (SUB168(ZEXT816(4) * ZEXT416(uVar19),8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar13 = FMemStackBase::Alloc(this,uVar10,0x10);
      local_f0.BitCount = (uint)uVar8;
      if (local_f0.BitCount == 0) {
        local_f0.Storage = &local_f0.BitCount;
      }
      else {
        puVar13[uVar19 - 1] = puVar13[uVar19 - 1] & 0xffffffffU >> (-(char)uVar8 & 0x1fU);
        local_f0.Storage = puVar13;
      }
      local_f0.WordCount = uVar19;
      FNetBitStreamReader::ReadBitStream(&local_68,puVar13,(uint)uVar8);
      if ((param_1->bIsInitState == 0) || ((pFVar1->Traits & InitOnly) == None)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      uVar14 = 0;
      puVar18 = local_d0;
      if (local_f0.WordCount != 0) {
        do {
          if (local_f0.Storage[uVar14] != 0) goto LAB_144241e68;
          uVar19 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar19;
        } while (uVar19 < local_f0.WordCount);
      }
      if (bVar7) {
LAB_144241e68:
        pFVar17 = pFVar11 + local_f8;
        pFVar17->Descriptor = pFVar1;
        pFVar2 = local_90[uVar12];
        pFVar17->Fragment = pFVar2;
        pFVar17->FragmentTraits = pFVar2->Traits;
        if ((pFVar2->Traits & HasPersistentTargetStateBuffer) == None) {
          uVar8 = pFVar1->ExternalAlignment;
          uVar12 = (ulonglong)uVar8;
          uVar19 = pFVar1->ExternalSize;
          if (((local_d8->bShouldEnforceAllocMarks != false) && (local_d8->NumMarks < 1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!bShouldEnforceAllocMarks || NumMarks > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                 ,0x8a,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FContext *)(*pcVar3)();
            return pFVar9;
          }
          puVar13 = (uint *)((ulonglong)(local_d8->Top + (uVar12 - 1)) & ~(uVar12 - 1));
          puVar18 = (uchar *)((longlong)puVar13 + (ulonglong)uVar19);
          if (local_d8->End < puVar18) {
            FMemStackBase::AllocateNewChunk(local_d8,uVar8 + uVar19);
            puVar13 = (uint *)((ulonglong)(local_d8->Top + (uVar12 - 1)) & ~(uVar12 - 1));
            puVar18 = (uchar *)((longlong)puVar13 + (ulonglong)uVar19);
          }
          local_d8->Top = puVar18;
          (*pFVar1->ConstructReplicationState)((uchar *)puVar13,pFVar1);
          uVar8 = pFVar1->ChangeMaskBitCount;
          local_ac = (uint)uVar8;
          local_b0 = uVar8 + 0x1f >> 5;
          local_b8 = &local_ac;
          if (local_ac != 0) {
            local_b8 = (uint *)((ulonglong)pFVar1->ChangeMasksExternalOffset + (longlong)puVar13);
          }
          if (((local_b8 == local_f0.Storage) || (uVar8 != local_f0.BitCount)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x5d8,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FContext *)(*pcVar3)();
            return pFVar9;
          }
          if ((local_b0 != 0) && (local_f0.WordCount != 0)) {
            memcpy(local_b8,local_f0.Storage,(ulonglong)local_b0 << 2);
          }
          puVar18 = local_d0;
          if (((bVar7) || (bCVarForceFullDequantizeAndApply != false)) ||
             ((pFVar17->Fragment->Traits & SupportsPartialDequantizedState) == None)) {
            FReplicationStateOperations::Dequantize(param_1,(uchar *)puVar13,local_d0,pFVar1);
          }
          else {
            param_1->ChangeMask = &local_f0;
            FReplicationStateOperations::DequantizeWithMask
                      (param_1,&local_f0,0,(uchar *)puVar13,local_d0,pFVar1);
          }
        }
        else {
          (pFVar17->StateBufferData)._s_1.RawStateBuffer = local_d0;
        }
        bVar7 = false;
        (pFVar17->StateBufferData).ExternalStateBuffer = (uchar *)puVar13;
        bVar6 = false;
        if ((pFVar1->Traits & HasObjectReference) != None) {
          if (local_88 != (uint *)0x0) {
            FNetBitArrayView::FNetBitArrayView(&local_78,local_88,local_a8->ChangeMaskBitCount);
            bVar7 = FNetBitArrayView::IsAnyBitSet
                              (&local_78,local_f4,(uint)pFVar1->ChangeMaskBitCount);
          }
          if (((param_2->bHasUnresolvedInitReferences == false) || (param_1->bIsInitState == 0)) ||
             ((pFVar1->Traits & InitOnly) == None)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
        }
        local_f8 = local_f8 + 1;
        pFVar17->bHasUnresolvableReferences = bVar7;
        pFVar17->bMightHaveUnresolvableInitReferences = bVar6;
        this = local_d8;
      }
      puVar18 = puVar18 + pFVar1->InternalSize;
      local_f4 = local_f4 + pFVar1->ChangeMaskBitCount;
      local_e0 = local_e0 + 1;
      uVar12 = (ulonglong)local_e0;
      pFVar17 = local_a0;
      pFVar9 = local_80;
    } while (local_e0 != local_c4);
  }
  pFVar9->CachedStateData = pFVar17;
  pFVar9->CachedStateCount = local_f8;
  pFVar9->UnresolvedReferencesChangeMaskData = param_2->UnresolvedReferencesChangeMaskData;
  uVar8 = local_c0->InstanceTraits >> 1;
  uVar19 = ((uint)(byte)uVar8 ^ pFVar9->bNeedsLegacyCallbacks) & 1 ^ *(uint *)&pFVar9->field_0x1c;
  *(uint *)&pFVar9->field_0x1c = uVar19;
  *(uint *)&pFVar9->field_0x1c = ((uint)(byte)param_1->field_0x360 * 2 ^ uVar19) & 2 ^ uVar19;
  if ((uVar8 & 1) != 0) {
    ppUVar15 = FMemStackBase::Alloc(this,(ulonglong)local_c0->FragmentCount << 3,8);
    pFVar16 = FMemStackBase::Alloc(this,0x10,0x10);
    if (pFVar16 != (FReplicationStateOwnerCollector *)0x0) {
      pFVar16->MaxOwnerCount = (uint)local_c0->FragmentCount;
      pFVar16->Owners = ppUVar15;
      pFVar16->OwnerCount = 0;
    }
    pFVar9->OwnerCollector = pFVar16;
    if (((int)local_f8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FContext *)(*pcVar3)();
      return pFVar9;
    }
    pFVar11 = pFVar17 + (int)local_f8;
    for (; pFVar17 != pFVar11; pFVar17 = pFVar17 + 1) {
      pFVar2 = pFVar17->Fragment;
      if ((pFVar2->Traits & NeedsLegacyCallbacks) != None) {
        (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,pFVar9->OwnerCollector);
      }
    }
  }
  FNetBitStreamReader::~FNetBitStreamReader(&local_68);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar9;
}

