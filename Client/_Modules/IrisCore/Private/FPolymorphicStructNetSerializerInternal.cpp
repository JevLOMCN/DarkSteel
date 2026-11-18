// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// Alloc @ 144328280

void * __cdecl
UE::Net::Private::FPolymorphicStructNetSerializerInternal::Alloc
          (FNetSerializationContext *param_1,ulong64 param_2,ulong64 param_3)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_2,(uint)param_3);
  return pvVar1;
}

// CloneQuantizedState @ 144328d60

void __cdecl
UE::Net::Private::FPolymorphicStructNetSerializerInternal::CloneQuantizedState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  memcpy(param_2,param_3,(ulonglong)param_4->InternalSize);
  if ((param_4->Traits & HasDynamicState) != None) {
    FReplicationStateOperationsInternal::CloneDynamicState(param_1,param_2,param_3,param_4);
  }
  return;
}

// CollectReferences @ 144328ff0

void __cdecl
UE::Net::Private::FPolymorphicStructNetSerializerInternal::CollectReferences
          (FNetSerializationContext *param_1,FNetReferenceCollector *param_2,
          FNetSerializerChangeMaskParam *param_3,uchar *param_4,FReplicationStateDescriptor *param_5
          )

{
  FReplicationStateMemberReferenceDescriptor *pFVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  ushort uVar3;
  longlong *plVar4;
  FReplicationStateMemberSerializerDescriptor *pFVar5;
  ulonglong uVar6;
  FReplicationStateMemberReferenceDescriptor *pFVar7;
  FNetCollectReferencesArgs FStack_58;
  
  pFVar7 = param_5->MemberReferenceDescriptors;
  pFVar1 = pFVar7 + param_5->ObjectReferenceCount;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->Info).ResolveType == Invalid) {
      pFVar5 = param_5->MemberSerializerDescriptors + pFVar7->MemberIndex;
      pFVar2 = param_5->MemberDescriptors + pFVar7->MemberIndex;
      FStack_58.Source = (ulong64)param_4;
      for (uVar3 = pFVar7->InnerReferenceIndex; uVar3 != 0xffff;
          uVar3 = *(ushort *)(plVar4[6] + (ulonglong)uVar3 * 0xc + 8)) {
        plVar4 = (longlong *)pFVar5->SerializerConfig[1]._padding_;
        uVar6 = (ulonglong)*(ushort *)(plVar4[6] + 6 + (ulonglong)uVar3 * 0xc);
        FStack_58.Source = FStack_58.Source + pFVar2->InternalMemberOffset;
        pFVar5 = (FReplicationStateMemberSerializerDescriptor *)(uVar6 * 0x10 + plVar4[2]);
        pFVar2 = (FReplicationStateMemberDescriptor *)(*plVar4 + uVar6 * 8);
      }
      FStack_58.Source = FStack_58.Source + pFVar2->InternalMemberOffset;
      FStack_58._padding_._0_4_ = 0;
      FStack_58._padding_ = (longlong)pFVar5->SerializerConfig;
      FStack_58._padding_ = *(longlong *)param_3;
      FStack_58.Collector = (ulong64)param_2;
      (*pFVar5->Serializer->CollectNetReferences)(param_1,&FStack_58);
    }
    else {
      FNetReferenceCollector::Add
                (param_2,&pFVar7->Info,(FQuantizedObjectReference *)(param_4 + pFVar7->Offset),
                 param_3);
    }
  }
  return;
}

// Free @ 14432faa0

void __cdecl
UE::Net::Private::FPolymorphicStructNetSerializerInternal::Free
          (FNetSerializationContext *param_1,void *param_2)

{
  FMemory::Free(param_2);
  return;
}

