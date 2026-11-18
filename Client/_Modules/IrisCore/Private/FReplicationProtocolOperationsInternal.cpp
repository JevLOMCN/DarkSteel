// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// CloneDynamicState @ 1442b7a80

void __cdecl
UE::Net::Private::FReplicationProtocolOperationsInternal::CloneDynamicState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  FReplicationStateDescriptor *pFVar1;
  FReplicationStateMemberTraitsDescriptor *pFVar2;
  ulonglong uVar3;
  uint *puVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FReplicationStateDescriptor **ppFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res18;
  FNetCloneDynamicStateArgs local_78;
  
  local_res18 = (ulonglong)param_4->ReplicationStateCount;
  ppFVar6 = param_4->ReplicationStateDescriptors;
  if (param_4->ReplicationStateCount != 0) {
    do {
      pFVar1 = *ppFVar6;
      uVar8 = (ulonglong)pFVar1->InternalAlignment;
      uVar7 = (ulonglong)(param_2 + (uVar8 - 1)) & ~(uVar8 - 1);
      uVar8 = (ulonglong)(param_3 + (uVar8 - 1)) & ~(uVar8 - 1);
      if ((pFVar1->Traits & HasDynamicState) != None) {
        pFVar5 = pFVar1->MemberSerializerDescriptors;
        pFVar2 = pFVar1->MemberTraitsDescriptors;
        if (pFVar1->MemberCount != 0) {
          puVar4 = &pFVar1->MemberDescriptors->InternalMemberOffset;
          uVar3 = (ulonglong)pFVar1->MemberCount;
          do {
            if ((pFVar2->Traits & HasDynamicState) != None) {
              local_78._padding_ = (longlong)pFVar5->SerializerConfig;
              local_78._padding_ = 0;
              local_78.Source = *puVar4 + uVar8;
              local_78._padding_._0_4_ = 0;
              local_78.Target = *puVar4 + uVar7;
              (*pFVar5->Serializer->CloneDynamicState)(param_1,&local_78);
            }
            pFVar2 = pFVar2 + 1;
            puVar4 = puVar4 + 2;
            pFVar5 = pFVar5 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      ppFVar6 = ppFVar6 + 1;
      param_2 = (uchar *)(uVar7 + pFVar1->InternalSize);
      param_3 = (uchar *)(uVar8 + pFVar1->InternalSize);
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
  }
  return;
}

// CloneQuantizedState @ 1442b7cd0

void __cdecl
UE::Net::Private::FReplicationProtocolOperationsInternal::CloneQuantizedState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  FReplicationStateDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uchar *puVar5;
  ulonglong uVar6;
  uchar *puVar7;
  FReplicationStateDescriptor **ppFVar8;
  
  memcpy(param_2,param_3,(ulonglong)param_4->InternalTotalSize);
  if ((param_4->ProtocolTraits & HasDynamicState) != None) {
    ppFVar8 = param_4->ReplicationStateDescriptors;
    if (param_4->ReplicationStateCount != 0) {
      uVar6 = (ulonglong)param_4->ReplicationStateCount;
      do {
        pFVar1 = *ppFVar8;
        uVar4 = (ulonglong)pFVar1->InternalAlignment;
        puVar7 = (uchar *)((ulonglong)(param_2 + (uVar4 - 1)) & ~(uVar4 - 1));
        puVar5 = (uchar *)((ulonglong)(param_3 + (uVar4 - 1)) & ~(uVar4 - 1));
        if ((pFVar1->Traits & HasDynamicState) != None) {
          FReplicationStateOperationsInternal::CloneDynamicState(param_1,puVar7,puVar5,pFVar1);
        }
        ppFVar8 = ppFVar8 + 1;
        param_2 = puVar7 + pFVar1->InternalSize;
        param_3 = puVar5 + pFVar1->InternalSize;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (((param_1->ErrorContext).Error != (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Context.HasError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationOperationsInternal.cpp"
                           ,0x1c8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CollectReferences @ 1442b7f30

void __cdecl
UE::Net::Private::FReplicationProtocolOperationsInternal::CollectReferences
          (FNetSerializationContext *param_1,FNetReferenceCollector *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  FReplicationStateDescriptor **ppFVar1;
  FReplicationStateMemberReferenceDescriptor *pFVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  undefined1 uVar4;
  ushort uVar5;
  uint uVar6;
  FReplicationStateDescriptor *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  FReplicationStateMemberSerializerDescriptor *pFVar11;
  ulonglong uVar12;
  FReplicationStateMemberReferenceDescriptor *pFVar13;
  uchar *puVar14;
  uint uVar15;
  FReplicationStateDescriptor **ppFVar16;
  FNetSerializerChangeMaskParam local_res18;
  FReplicationStateDescriptor **local_res20;
  FNetCollectReferencesArgs local_60;
  
  uVar6 = param_4->ReplicationStateCount;
  uVar15 = 0;
  ppFVar16 = param_4->ReplicationStateDescriptors;
  local_res18.BitOffset = 0;
  local_res18.BitCount = 0;
  local_res20 = ppFVar16;
  if (((int)uVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  ppFVar1 = ppFVar16 + (int)uVar6;
  while (ppFVar16 != ppFVar1) {
    pFVar7 = *ppFVar16;
    puVar14 = (uchar *)((ulonglong)(param_3 + ((ulonglong)pFVar7->InternalAlignment - 1)) &
                       -(ulonglong)pFVar7->InternalAlignment);
    if ((pFVar7->Traits & HasObjectReference) != None) {
      if ((pFVar7->Traits & InitOnly) == None) {
        FReplicationStateOperationsInternal::CollectReferencesWithMask
                  (param_1,param_2,uVar15,puVar14,pFVar7);
      }
      else if (param_1->bIsInitState != 0) {
        pFVar13 = pFVar7->MemberReferenceDescriptors;
        pFVar2 = pFVar13 + pFVar7->ObjectReferenceCount;
        for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 1) {
          if ((pFVar13->Info).ResolveType == Invalid) {
            pFVar11 = pFVar7->MemberSerializerDescriptors + pFVar13->MemberIndex;
            pFVar3 = pFVar7->MemberDescriptors + pFVar13->MemberIndex;
            local_60.Source = (ulong64)puVar14;
            for (uVar5 = pFVar13->InnerReferenceIndex; uVar5 != 0xffff;
                uVar5 = *(ushort *)(plVar8[6] + (ulonglong)uVar5 * 0xc + 8)) {
              plVar8 = (longlong *)pFVar11->SerializerConfig[1]._padding_;
              uVar12 = (ulonglong)*(ushort *)(plVar8[6] + 6 + (ulonglong)uVar5 * 0xc);
              local_60.Source = local_60.Source + pFVar3->InternalMemberOffset;
              pFVar11 = (FReplicationStateMemberSerializerDescriptor *)(uVar12 * 0x10 + plVar8[2]);
              pFVar3 = (FReplicationStateMemberDescriptor *)(*plVar8 + uVar12 * 8);
            }
            local_60.Source = local_60.Source + pFVar3->InternalMemberOffset;
            local_60._padding_._0_4_ = 0;
            local_60._padding_ = (longlong)pFVar11->SerializerConfig;
            local_60._padding_ = (longlong)local_res18;
            local_60.Collector = (ulong64)param_2;
            (*pFVar11->Serializer->CollectNetReferences)(param_1,&local_60);
          }
          else {
            FNetReferenceCollector::Add
                      (param_2,&pFVar13->Info,
                       (FQuantizedObjectReference *)(puVar14 + pFVar13->Offset),&local_res18);
          }
          ppFVar16 = local_res20;
        }
      }
    }
    param_3 = puVar14 + pFVar7->InternalSize;
    uVar15 = uVar15 + pFVar7->ChangeMaskBitCount;
    ppFVar16 = ppFVar16 + 1;
    local_res20 = ppFVar16;
  }
  return;
}

// FreeDynamicState @ 1442c1ce0

void __cdecl
UE::Net::Private::FReplicationProtocolOperationsInternal::FreeDynamicState
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationProtocol *param_3)

{
  FReplicationStateDescriptor *pFVar1;
  FReplicationStateMemberTraitsDescriptor *pFVar2;
  ulonglong uVar3;
  uint *puVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  FReplicationStateDescriptor **ppFVar6;
  ulonglong uVar7;
  ulonglong local_res10;
  FNetFreeDynamicStateArgs local_58;
  
  local_res10 = (ulonglong)param_3->ReplicationStateCount;
  ppFVar6 = param_3->ReplicationStateDescriptors;
  if (param_3->ReplicationStateCount != 0) {
    do {
      pFVar1 = *ppFVar6;
      uVar7 = (ulonglong)(param_2 + ((ulonglong)pFVar1->InternalAlignment - 1)) &
              -(ulonglong)pFVar1->InternalAlignment;
      if ((pFVar1->Traits & HasDynamicState) != None) {
        pFVar5 = pFVar1->MemberSerializerDescriptors;
        pFVar2 = pFVar1->MemberTraitsDescriptors;
        if (pFVar1->MemberCount != 0) {
          puVar4 = &pFVar1->MemberDescriptors->InternalMemberOffset;
          uVar3 = (ulonglong)pFVar1->MemberCount;
          do {
            if ((pFVar2->Traits & HasDynamicState) != None) {
              local_58._padding_ = (longlong)pFVar5->SerializerConfig;
              local_58.Source = *puVar4 + uVar7;
              local_58._padding_ = 0;
              local_58._padding_._0_4_ = 0;
              (*pFVar5->Serializer->FreeDynamicState)(param_1,&local_58);
            }
            pFVar2 = pFVar2 + 1;
            puVar4 = puVar4 + 2;
            pFVar5 = pFVar5 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      ppFVar6 = ppFVar6 + 1;
      param_2 = (uchar *)(uVar7 + pFVar1->InternalSize);
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  return;
}

// IsEqualQuantizedState @ 1442c7170

bool __cdecl
UE::Net::Private::FReplicationProtocolOperationsInternal::IsEqualQuantizedState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationProtocol *param_4)

{
  FReplicationStateDescriptor **ppFVar1;
  uint uVar2;
  FReplicationStateDescriptor *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  uchar *puVar8;
  FReplicationStateDescriptor **ppFVar9;
  uchar *puVar10;
  
  uVar2 = param_4->ReplicationStateCount;
  ppFVar9 = param_4->ReplicationStateDescriptors;
  if (((int)uVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  ppFVar1 = ppFVar9 + (int)uVar2;
  while( true ) {
    if (ppFVar9 == ppFVar1) {
      return true;
    }
    pFVar3 = *ppFVar9;
    uVar7 = (ulonglong)pFVar3->InternalAlignment;
    puVar10 = (uchar *)((ulonglong)(param_2 + (uVar7 - 1)) & ~(uVar7 - 1));
    puVar8 = (uchar *)((ulonglong)(param_3 + (uVar7 - 1)) & ~(uVar7 - 1));
    if ((((pFVar3->Traits & InitOnly) == None) || (param_1->bIsInitState != 0)) &&
       (bVar5 = FReplicationStateOperations::IsEqualQuantizedState(param_1,puVar10,puVar8,pFVar3),
       !bVar5)) break;
    ppFVar9 = ppFVar9 + 1;
    param_2 = puVar10 + pFVar3->InternalSize;
    param_3 = puVar8 + pFVar3->InternalSize;
  }
  return false;
}

