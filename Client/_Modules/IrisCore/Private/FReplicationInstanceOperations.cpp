// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// DequantizeAndApply @ 1442bb850

void __cdecl
UE::Net::FReplicationInstanceOperations::DequantizeAndApply
          (FNetSerializationContext *param_1,FMemStackBase *param_2,uint *param_3,
          FReplicationInstanceProtocol *param_4,uchar *param_5,FReplicationProtocol *param_6)

{
  FContext *pFVar1;
  FDequantizeAndApplyParameters local_48;
  
  local_48.UnresolvedReferencesChangeMaskData = (uint *)0x0;
  local_48.bHasUnresolvedInitReferences = false;
  local_48.SrcObjectStateBuffer = param_5;
  local_48.Protocol = param_6;
  local_48.Allocator = param_2;
  local_48.ChangeMaskData = param_3;
  local_48.InstanceProtocol = param_4;
  pFVar1 = Net::Private::FDequantizeAndApplyHelper::Initialize(param_1,&local_48);
  Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyFunctions(pFVar1,param_1);
  Net::Private::FDequantizeAndApplyHelper::Deinitialize(pFVar1);
  return;
}

// DequantizeAndApply @ 1442bb8c0

void __cdecl
UE::Net::FReplicationInstanceOperations::DequantizeAndApply
          (FNetSerializationContext *param_1,FDequantizeAndApplyParameters *param_2)

{
  FContext *pFVar1;
  
  pFVar1 = Net::Private::FDequantizeAndApplyHelper::Initialize(param_1,param_2);
  Net::Private::FDequantizeAndApplyHelper::ApplyAndCallLegacyFunctions(pFVar1,param_1);
  Net::Private::FDequantizeAndApplyHelper::Deinitialize(pFVar1);
  return;
}

// OutputInternalDefaultStateMemberHashesToString @ 1442c9020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FReplicationInstanceOperations::OutputInternalDefaultStateMemberHashesToString
          (UReplicationSystem *param_1,TStringBuilderBase<wchar_t> *param_2,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar1;
  FReplicationStateDescriptor *pFVar2;
  FNetRefHandle_u_0 FVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FNetRefHandle_u_0 FVar10;
  FNetRefHandle_u_0 FVar11;
  FNetRefHandle_u_0 FVar12;
  FNetRefHandle_u_0 FVar13;
  FNetRefHandle_u_0 *pFVar14;
  FNetSerializationContext *pFVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  FNetRefHandle_u_0 *pFVar20;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar21;
  undefined8 *puVar22;
  FNetSerializationContext *pFVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auStackY_7d8 [32];
  ForAnyElementType local_798;
  int local_790 [2];
  FNetBitStreamWriter local_788;
  FInternalNetSerializationContext local_768;
  FNetSerializationContext local_728;
  FNetRefHandle_u_0 local_3b8;
  undefined8 uStack_3b0;
  undefined8 auStack_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  FNetBitStreamWriter *local_98;
  undefined8 local_90;
  FInternalNetSerializationContext *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  iVar18 = param_3->ArrayNum;
  uVar25 = 0;
  uVar26 = uVar25;
  if (0 < iVar18) {
    do {
      uVar24 = (uint)uVar25;
      uVar17 = 0;
      if ((int)uVar24 < iVar18) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (param_3->AllocatorInstance).SecondaryData;
      FVar21 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_3;
      if (FVar1 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
        FVar21 = FVar1;
      }
      pFVar2 = *(FReplicationStateDescriptor **)(uVar26 + (longlong)FVar21);
      TStringBuilderBase<wchar_t>::AppendfImpl
                (param_2,
                 L"Printing default state hash for members of [%d/%d] Fragment: %s DescriptorId: 0x%llx DefaultStateHash: 0x%llx\n"
                );
      if ((param_1 != (UReplicationSystem *)0x0) && (pFVar2->DefaultStateBuffer != (uchar *)0x0)) {
        local_798.Data = (FScriptContainerElement *)0x0;
        local_790[0] = 0;
        local_790[1] = 0;
        iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,0x400,&local_798,local_790,local_790 + 1);
        memset(local_798.Data + (longlong)iVar18 * 4,0,0x1000);
        FNetBitStreamWriter::FNetBitStreamWriter(&local_788);
        FNetBitStreamWriter::InitBytes(&local_788,local_798.Data,0x1000);
        lVar19 = 0x20;
        local_3b8.Value = 0;
        puVar22 = auStack_3a0;
        uStack_3b0 = 0;
        do {
          *puVar22 = 0;
          puVar22 = puVar22 + 3;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        local_58 = local_58 & 0xfffffffc;
        local_98 = &local_788;
        local_88 = (FInternalNetSerializationContext *)0x0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_90 = 0;
        local_68 = 0;
        local_60 = 0;
        local_5c = 0xffffffff;
        Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
                  (&local_768,param_1);
        local_58 = local_58 | 2;
        local_88 = &local_768;
        lVar19 = 6;
        pFVar14 = &local_3b8;
        pFVar15 = &local_728;
        do {
          pFVar23 = pFVar15;
          pFVar20 = pFVar14;
          pFVar15 = (FNetSerializationContext *)&(pFVar23->ReadJournal).Entries[4].BitOffset;
          FVar3 = pFVar20[1];
          FVar10 = pFVar20[2];
          FVar11 = pFVar20[3];
          (pFVar23->ErrorContext).ObjectHandle.field0_0x0 = *pFVar20;
          (pFVar23->ErrorContext).Error = (FName)FVar3;
          FVar3 = pFVar20[4];
          FVar12 = pFVar20[5];
          (pFVar23->ReadJournal).Entries[0].Name = (wchar_t *)FVar10;
          (pFVar23->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar11;
          FVar10 = pFVar20[6];
          FVar11 = pFVar20[7];
          *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[0].BitOffset = FVar3;
          (pFVar23->ReadJournal).Entries[1].Name = (wchar_t *)FVar12;
          FVar3 = pFVar20[8];
          FVar12 = pFVar20[9];
          (pFVar23->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar10;
          *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[1].BitOffset = FVar11;
          FVar10 = pFVar20[10];
          FVar11 = pFVar20[0xb];
          (pFVar23->ReadJournal).Entries[2].Name = (wchar_t *)FVar3;
          (pFVar23->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar12;
          FVar3 = pFVar20[0xc];
          FVar12 = pFVar20[0xd];
          *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[2].BitOffset = FVar10;
          (pFVar23->ReadJournal).Entries[3].Name = (wchar_t *)FVar11;
          FVar10 = pFVar20[0xe];
          FVar11 = pFVar20[0xf];
          (pFVar23->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar3;
          *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[3].BitOffset = FVar12;
          (pFVar23->ReadJournal).Entries[4].Name = (wchar_t *)FVar10;
          (pFVar23->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar11;
          lVar19 = lVar19 + -1;
          pFVar14 = pFVar20 + 0x10;
        } while (lVar19 != 0);
        FVar10 = pFVar20[0x11];
        FVar3 = pFVar20[0x1c];
        FVar11 = pFVar20[0x12];
        FVar12 = pFVar20[0x13];
        *(FNetRefHandle_u_0 *)pFVar15 = pFVar20[0x10];
        (pFVar23->ReadJournal).Entries[5].Name = (wchar_t *)FVar10;
        FVar10 = pFVar20[0x14];
        FVar13 = pFVar20[0x15];
        (pFVar23->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar11;
        *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[5].BitOffset = FVar12;
        FVar11 = pFVar20[0x16];
        FVar12 = pFVar20[0x17];
        (pFVar23->ReadJournal).Entries[6].Name = (wchar_t *)FVar10;
        (pFVar23->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar13;
        FVar10 = pFVar20[0x18];
        FVar13 = pFVar20[0x19];
        *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[6].BitOffset = FVar11;
        (pFVar23->ReadJournal).Entries[7].Name = (wchar_t *)FVar12;
        uVar6 = *(undefined4 *)(pFVar20 + 0x1a);
        uVar7 = *(undefined4 *)((longlong)pFVar20 + 0xd4);
        uVar8 = *(undefined4 *)(pFVar20 + 0x1b);
        uVar9 = *(undefined4 *)((longlong)pFVar20 + 0xdc);
        puVar4 = pFVar2->DefaultStateBuffer;
        (pFVar23->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar10;
        *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[7].BitOffset = FVar13;
        *(undefined4 *)&(pFVar23->ReadJournal).Entries[8].Name = uVar6;
        *(undefined4 *)((longlong)&(pFVar23->ReadJournal).Entries[8].Name + 4) = uVar7;
        *(undefined4 *)&(pFVar23->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = uVar8;
        *(undefined4 *)((longlong)&(pFVar23->ReadJournal).Entries[8].NetRefHandle.field0_0x0 + 4) =
             uVar9;
        *(FNetRefHandle_u_0 *)&(pFVar23->ReadJournal).Entries[8].BitOffset = FVar3;
        OutputDescriptorMemberHashToString
                  (&local_728,(uint *)local_798.Data,0,param_2,puVar4,pFVar2);
        FNetBitStreamWriter::~FNetBitStreamWriter(&local_788);
        if (local_798.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_798.Data);
        }
      }
      iVar18 = param_3->ArrayNum;
      uVar25 = (ulonglong)(uVar24 + 1);
      uVar26 = uVar26 + 0x18;
    } while ((int)(uVar24 + 1) < iVar18);
  }
  return;
}

// OutputInternalDefaultStateToString @ 1442c9390

void __cdecl
UE::Net::FReplicationInstanceOperations::OutputInternalDefaultStateToString
          (FNetSerializationContext *param_1,TStringBuilderBase<wchar_t> *param_2,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar1;
  FReplicationStateDescriptor *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  uchar *puVar8;
  uint uVar9;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar10;
  uint uVar11;
  longlong lVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  FReplicationStateDescriptor *local_58;
  FNetSerializationContext *local_50;
  uchar *local_48;
  uchar *local_40;
  uint local_38;
  
  iVar6 = param_3->ArrayNum;
  uVar11 = 0;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < iVar6) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1 = (param_3->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_3;
      if (FVar1 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
        FVar10 = FVar1;
      }
      pFVar2 = *(FReplicationStateDescriptor **)(lVar12 + (longlong)FVar10);
      plVar3 = *(longlong **)(lVar12 + 0x10 + (longlong)FVar10);
      local_38 = param_1->bIsInitState | local_38 & 0xfffffffe;
      uVar14 = (pFVar2->DescriptorIdentifier).DefaultStateHash;
      uVar13 = (pFVar2->DescriptorIdentifier).Value;
      if ((pFVar2->DebugName == (FNetDebugName *)0x0) ||
         (pwVar7 = pFVar2->DebugName->Name, pwVar7 == (wchar_t *)0x0)) {
        pwVar7 = L"N/A";
      }
      uVar11 = uVar11 + 1;
      local_58 = pFVar2;
      local_50 = param_1;
      TStringBuilderBase<wchar_t>::AppendfImpl
                (param_2,L"[%d/%d] Fragment: %s DescriptorId: 0x%llx DefaultStateHash: 0x%llx\n");
      if ((*(byte *)(plVar3 + 1) & 0x10) == 0) {
        puVar8 = FMemory::Malloc((ulonglong)pFVar2->ExternalSize,(uint)pFVar2->ExternalAlignment);
        (*pFVar2->ConstructReplicationState)(puVar8,pFVar2);
        FReplicationStateOperations::Dequantize(param_1,puVar8,pFVar2->DefaultStateBuffer,pFVar2);
        local_48 = puVar8;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2,&local_58,0);
        (*pFVar2->DestructReplicationState)(puVar8,pFVar2);
        FMemory::Free(puVar8);
      }
      else {
        local_48 = (uchar *)0x0;
        local_40 = pFVar2->DefaultStateBuffer;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2,&local_58,0,pwVar7,uVar13,uVar14);
      }
      iVar6 = param_3->ArrayNum;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < iVar6);
  }
  return;
}

// OutputInternalStateToString @ 1442c9580

void __cdecl
UE::Net::FReplicationInstanceOperations::OutputInternalStateToString
          (FNetSerializationContext *param_1,TStringBuilderBase<wchar_t> *param_2,uint *param_3,
          uchar *param_4,FReplicationInstanceProtocol *param_5,FReplicationProtocol *param_6)

{
  uint uVar1;
  FReplicationStateDescriptor **ppFVar2;
  FReplicationFragment **ppFVar3;
  FReplicationStateDescriptor *pFVar4;
  FReplicationFragment *pFVar5;
  uchar *puVar6;
  uchar *puVar7;
  uint uVar8;
  ulonglong uVar9;
  FReplicationStateDescriptor *local_58;
  FNetSerializationContext *local_50;
  uchar *local_48;
  uchar *local_40;
  uint local_38;
  
  uVar9 = 0;
  ppFVar2 = param_6->ReplicationStateDescriptors;
  ppFVar3 = param_5->Fragments;
  uVar1 = param_6->ReplicationStateCount;
  if (uVar1 != 0) {
    do {
      pFVar4 = ppFVar2[uVar9];
      pFVar5 = ppFVar3[uVar9];
      puVar7 = (uchar *)((ulonglong)(param_4 + ((ulonglong)pFVar4->InternalAlignment - 1)) &
                        -(ulonglong)pFVar4->InternalAlignment);
      local_38 = param_1->bIsInitState | local_38 & 0xfffffffe;
      local_58 = pFVar4;
      local_50 = param_1;
      if ((pFVar5->Traits & HasPersistentTargetStateBuffer) == None) {
        puVar6 = FMemory::Malloc((ulonglong)pFVar4->ExternalSize,(uint)pFVar4->ExternalAlignment);
        (*pFVar4->ConstructReplicationState)(puVar6,pFVar4);
        FReplicationStateOperations::Dequantize(param_1,puVar6,puVar7,pFVar4);
        local_48 = puVar6;
        (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,param_2,&local_58);
        (*pFVar4->DestructReplicationState)(puVar6,pFVar4);
        FMemory::Free(puVar6);
      }
      else {
        local_48 = (uchar *)0x0;
        local_40 = puVar7;
        (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,param_2,&local_58,0);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      param_4 = puVar7 + pFVar4->InternalSize;
    } while (uVar8 != uVar1);
  }
  return;
}

// PollAndCopyObjectReferences @ 1442c9700

bool __cdecl
UE::Net::FReplicationInstanceOperations::PollAndCopyObjectReferences
          (FReplicationInstanceProtocol *param_1,EReplicationFragmentTraits param_2,
          EReplicationFragmentPollFlags param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  
  bVar6 = 0;
  lVar3 = 0;
  if (param_1->FragmentCount != 0) {
    uVar4 = (ulonglong)param_1->FragmentCount;
    lVar5 = lVar3;
    do {
      if ((*(EReplicationFragmentTraits *)((longlong)&param_1->FragmentData->Traits + lVar3) &
          (param_2 | HasObjectReference)) == (param_2 | HasObjectReference)) {
        plVar1 = *(longlong **)(lVar5 + (longlong)param_1->Fragments);
        bVar2 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,param_3 | ForceRefreshCachedObjectReferencesAfterGC);
        bVar6 = bVar6 | bVar2;
      }
      lVar3 = lVar3 + 0x10;
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return (bool)bVar6;
}

// PollAndCopyPropertyData @ 1442c9f00

bool __cdecl
UE::Net::FReplicationInstanceOperations::PollAndCopyPropertyData
          (FReplicationInstanceProtocol *param_1,EReplicationFragmentPollFlags param_2)

{
  bool bVar1;
  
  bVar1 = PollAndCopyPropertyData(param_1,None,param_2);
  return bVar1;
}

// PollAndCopyPropertyData @ 1442c9f10

bool __cdecl
UE::Net::FReplicationInstanceOperations::PollAndCopyPropertyData
          (FReplicationInstanceProtocol *param_1,EReplicationFragmentTraits param_2,
          EReplicationFragmentPollFlags param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  bVar4 = 0;
  lVar3 = 0;
  if (param_1->FragmentCount != 0) {
    uVar5 = (ulonglong)param_1->FragmentCount;
    lVar6 = lVar3;
    do {
      if ((*(EReplicationFragmentTraits *)((longlong)&param_1->FragmentData->Traits + lVar3) &
          (param_2 | NeedsPoll)) == NeedsPoll) {
        plVar1 = *(longlong **)(lVar6 + (longlong)param_1->Fragments);
        bVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_3);
        bVar4 = bVar4 | bVar2;
      }
      lVar3 = lVar3 + 0x10;
      lVar6 = lVar6 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return (bool)bVar4;
}

// Quantize @ 1442d6d80

void __cdecl
UE::Net::FReplicationInstanceOperations::Quantize
          (FNetSerializationContext *param_1,uchar *param_2,FNetBitStreamWriter *param_3,
          FReplicationInstanceProtocol *param_4,FReplicationProtocol *param_5)

{
  uint *puVar1;
  FFragmentData *pFVar2;
  FReplicationStateDescriptor **ppFVar3;
  FReplicationStateDescriptor *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  uint uVar8;
  FNetBitStreamWriter *this;
  bool bVar9;
  FNetBitStreamWriter local_68;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId715,"Quantize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
               ,0x2cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId715);
  }
  puVar1 = &param_5->ReplicationStateCount;
  if (((param_4 == (FReplicationInstanceProtocol *)0x0) || ((uint)param_4->FragmentCount != *puVar1)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InstanceProtocol && InstanceProtocol->FragmentCount == Protocol->ReplicationStateCount"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                               ,0x2cd,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_4->FragmentData;
  ppFVar3 = param_5->ReplicationStateDescriptors;
  FNetBitStreamWriter::FNetBitStreamWriter(&local_68);
  uVar8 = 0;
  this = (FNetBitStreamWriter *)0x0;
  if ((param_5->ProtocolTraits & HasConditionalChangeMask) != None) {
    FNetBitStreamWriter::InitBytes
              (&local_68,param_2 + param_5->InternalChangeMasksOffset,
               (param_5->ChangeMaskBitCount + 0x1f >> 5) << 2);
    this = &local_68;
  }
  if (*puVar1 != 0) {
    do {
      pFVar4 = ppFVar3[uVar8];
      puVar7 = (uchar *)((ulonglong)(param_2 + ((ulonglong)pFVar4->InternalAlignment - 1)) &
                        -(ulonglong)pFVar4->InternalAlignment);
      FReplicationStateOperations::Quantize(param_1,puVar7,pFVar2[uVar8].ExternalSrcBuffer,pFVar4);
      Net::Private::AppendMemberChangeMasks(param_3,this,pFVar2[uVar8].ExternalSrcBuffer,pFVar4);
      uVar8 = uVar8 + 1;
      param_2 = puVar7 + pFVar4->InternalSize;
    } while (uVar8 < *puVar1);
  }
  FNetBitStreamWriter::CommitWrites(param_3);
  if (this != (FNetBitStreamWriter *)0x0) {
    FNetBitStreamWriter::CommitWrites(this);
  }
  FNetBitStreamWriter::~FNetBitStreamWriter(&local_68);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// QuantizeIfDirty @ 1442d7080

void __cdecl
UE::Net::FReplicationInstanceOperations::QuantizeIfDirty
          (FNetSerializationContext *param_1,uchar *param_2,FNetBitStreamWriter *param_3,
          FReplicationInstanceProtocol *param_4,FReplicationProtocol *param_5)

{
  uint *puVar1;
  FFragmentData *pFVar2;
  FReplicationStateDescriptor **ppFVar3;
  FReplicationStateDescriptor *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  FFragmentData *pFVar8;
  FNetBitStreamWriter *this;
  uint uVar9;
  FNetBitStreamWriter *pFVar10;
  bool bVar11;
  FNetBitArrayView local_78;
  FNetBitStreamWriter local_68;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId755,"QuantizeIfDirty",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
               ,0x2f3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId755);
  }
  puVar1 = &param_5->ReplicationStateCount;
  if (((param_4 == (FReplicationInstanceProtocol *)0x0) || ((uint)param_4->FragmentCount != *puVar1)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InstanceProtocol && InstanceProtocol->FragmentCount == Protocol->ReplicationStateCount"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                               ,0x2f5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = param_4->FragmentData;
  ppFVar3 = param_5->ReplicationStateDescriptors;
  FNetBitStreamWriter::FNetBitStreamWriter(&local_68);
  pFVar10 = (FNetBitStreamWriter *)0x0;
  this = pFVar10;
  if ((param_5->ProtocolTraits & HasConditionalChangeMask) != None) {
    FNetBitStreamWriter::InitBytes
              (&local_68,param_2 + param_5->InternalChangeMasksOffset,
               (param_5->ChangeMaskBitCount + 0x1f >> 5) << 2);
    this = &local_68;
  }
  if (*puVar1 != 0) {
    do {
      pFVar4 = ppFVar3[(longlong)pFVar10];
      pFVar8 = pFVar2 + (longlong)pFVar10;
      puVar7 = (uchar *)((ulonglong)(param_2 + ((ulonglong)pFVar4->InternalAlignment - 1)) &
                        -(ulonglong)pFVar4->InternalAlignment);
      bVar6 = Net::Private::AppendMemberChangeMasks(param_3,this,pFVar8->ExternalSrcBuffer,pFVar4);
      if (bVar6) {
        bVar6 = -1 < CpuChannel->Enabled;
        if (bVar6) {
          FCpuProfilerTrace::OutputBeginDynamicEvent
                    (pFVar4->DebugName->Name,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                     ,0x30d);
        }
        if (((pFVar4->Traits & InitOnly) == None) && (bOnlyQuantizeDirtyMembers != false)) {
          local_78.BitCount = (uint)pFVar4->ChangeMaskBitCount;
          local_78.WordCount = pFVar4->ChangeMaskBitCount + 0x1f >> 5;
          local_78.Storage = &local_78.BitCount;
          if (local_78.BitCount != 0) {
            local_78.Storage =
                 (uint *)(pFVar8->ExternalSrcBuffer + pFVar4->ChangeMasksExternalOffset);
          }
          param_1->ChangeMask = &local_78;
          FReplicationStateOperations::QuantizeWithMask
                    (param_1,&local_78,0,puVar7,pFVar2[(longlong)pFVar10].ExternalSrcBuffer,pFVar4);
        }
        else {
          FReplicationStateOperations::Quantize(param_1,puVar7,pFVar8->ExternalSrcBuffer,pFVar4);
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      uVar9 = (int)pFVar10 + 1;
      pFVar10 = (FNetBitStreamWriter *)(ulonglong)uVar9;
      param_2 = puVar7 + pFVar4->InternalSize;
    } while (uVar9 < *puVar1);
  }
  FNetBitStreamWriter::CommitWrites(param_3);
  if (this != (FNetBitStreamWriter *)0x0) {
    FNetBitStreamWriter::CommitWrites(this);
  }
  FNetBitStreamWriter::~FNetBitStreamWriter(&local_68);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResetDirtiness @ 1442e00a0

void __cdecl
UE::Net::FReplicationInstanceOperations::ResetDirtiness
          (FReplicationInstanceProtocol *param_1,FReplicationProtocol *param_2)

{
  uint uVar1;
  FReplicationStateDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uchar *puVar8;
  ulonglong uVar9;
  FFragmentData *pFVar10;
  FReplicationStateDescriptor **ppFVar11;
  uint local_1c [4];
  uchar local_c [4];
  
  if ((param_1 == (FReplicationInstanceProtocol *)0x0) ||
     ((uint)param_1->FragmentCount != param_2->ReplicationStateCount)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceProtocol && InstanceProtocol->FragmentCount == Protocol->ReplicationStateCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperations.cpp"
                       ,0x327,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = param_2->ReplicationStateCount;
  pFVar10 = param_1->FragmentData;
  ppFVar11 = param_2->ReplicationStateDescriptors;
  if (uVar1 != 0) {
    uVar9 = (ulonglong)uVar1;
    do {
      pFVar2 = *ppFVar11;
      puVar8 = pFVar10->ExternalSrcBuffer;
      local_1c[0] = (uint)pFVar2->ChangeMaskBitCount;
      puVar7 = local_1c;
      if (local_1c[0] != 0) {
        puVar7 = (uint *)(puVar8 + pFVar2->ChangeMasksExternalOffset);
      }
      memset(puVar7,0,(ulonglong)(pFVar2->ChangeMaskBitCount + 0x1f >> 5) << 2);
      if ((pFVar2->Traits & IsNativeFastArrayReplicationState) == None) {
        lVar6 = 0;
      }
      else {
        lVar6 = (ulonglong)pFVar2->ChangeMasksExternalOffset - 4;
      }
      puVar7 = (uint *)(puVar8 + lVar6);
      *puVar7 = *puVar7 & 0x3fffffff;
      if ((pFVar2->Traits & HasLifetimeConditionals) == None) {
        iVar5 = 0;
      }
      else {
        iVar5 = (pFVar2->ChangeMaskBitCount + 0x1f >> 5) << 2;
      }
      puVar8 = local_c;
      if (pFVar2->MemberCount != 0) {
        puVar8 = pFVar10->ExternalSrcBuffer +
                 (iVar5 + (pFVar2->ChangeMaskBitCount + 0x1f >> 5) * 4 +
                 pFVar2->ChangeMasksExternalOffset);
      }
      memset(puVar8,0,(ulonglong)(pFVar2->MemberCount + 0x1f >> 5) << 2);
      ppFVar11 = ppFVar11 + 1;
      pFVar10 = pFVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

