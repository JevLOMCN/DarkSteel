// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// CloneDynamicState @ 1442b7c10

void __cdecl
UE::Net::Private::FReplicationStateOperationsInternal::CloneDynamicState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  FReplicationStateMemberTraitsDescriptor *pFVar1;
  ulonglong uVar2;
  uint *puVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  FNetCloneDynamicStateArgs local_58;
  
  pFVar4 = param_4->MemberSerializerDescriptors;
  pFVar1 = param_4->MemberTraitsDescriptors;
  if (param_4->MemberCount != 0) {
    puVar3 = &param_4->MemberDescriptors->InternalMemberOffset;
    uVar2 = (ulonglong)param_4->MemberCount;
    do {
      if ((pFVar1->Traits & HasDynamicState) != None) {
        local_58._padding_ = (longlong)pFVar4->SerializerConfig;
        local_58._padding_ = 0;
        local_58.Source = (ulong64)(param_3 + *puVar3);
        local_58._padding_._0_4_ = 0;
        local_58.Target = (ulong64)(param_2 + *puVar3);
        (*pFVar4->Serializer->CloneDynamicState)(param_1,&local_58);
      }
      pFVar1 = pFVar1 + 1;
      puVar3 = puVar3 + 2;
      pFVar4 = pFVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// CloneQuantizedState @ 1442b7dc0

void __cdecl
UE::Net::Private::FReplicationStateOperationsInternal::CloneQuantizedState
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  memcpy(param_2,param_3,(ulonglong)param_4->InternalSize);
  if ((param_4->Traits & HasDynamicState) != None) {
    CloneDynamicState(param_1,param_2,param_3,param_4);
  }
  return;
}

// CollectReferences @ 1442b8180

void __cdecl
UE::Net::Private::FReplicationStateOperationsInternal::CollectReferences
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
  FNetCollectReferencesArgs local_58;
  
  pFVar7 = param_5->MemberReferenceDescriptors;
  pFVar1 = pFVar7 + param_5->ObjectReferenceCount;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->Info).ResolveType == Invalid) {
      pFVar5 = param_5->MemberSerializerDescriptors + pFVar7->MemberIndex;
      pFVar2 = param_5->MemberDescriptors + pFVar7->MemberIndex;
      local_58.Source = (ulong64)param_4;
      for (uVar3 = pFVar7->InnerReferenceIndex; uVar3 != 0xffff;
          uVar3 = *(ushort *)(plVar4[6] + (ulonglong)uVar3 * 0xc + 8)) {
        plVar4 = (longlong *)pFVar5->SerializerConfig[1]._padding_;
        uVar6 = (ulonglong)*(ushort *)(plVar4[6] + 6 + (ulonglong)uVar3 * 0xc);
        local_58.Source = local_58.Source + pFVar2->InternalMemberOffset;
        pFVar5 = (FReplicationStateMemberSerializerDescriptor *)(uVar6 * 0x10 + plVar4[2]);
        pFVar2 = (FReplicationStateMemberDescriptor *)(*plVar4 + uVar6 * 8);
      }
      local_58.Source = local_58.Source + pFVar2->InternalMemberOffset;
      local_58._padding_._0_4_ = 0;
      local_58._padding_ = (longlong)pFVar5->SerializerConfig;
      local_58._padding_ = *(longlong *)param_3;
      local_58.Collector = (ulong64)param_2;
      (*pFVar5->Serializer->CollectNetReferences)(param_1,&local_58);
    }
    else {
      FNetReferenceCollector::Add
                (param_2,&pFVar7->Info,(FQuantizedObjectReference *)(param_4 + pFVar7->Offset),
                 param_3);
    }
  }
  return;
}

// CollectReferencesWithMask @ 1442b8680

void __cdecl
UE::Net::Private::FReplicationStateOperationsInternal::CollectReferencesWithMask
          (FNetSerializationContext *param_1,FNetReferenceCollector *param_2,uint param_3,
          uchar *param_4,FReplicationStateDescriptor *param_5)

{
  FReplicationStateMemberReferenceDescriptor *pFVar1;
  longlong lVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  ushort uVar4;
  FNetBitArrayView *pFVar5;
  uint *puVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FReplicationStateMemberReferenceDescriptor *pFVar14;
  uint uVar15;
  FReplicationStateMemberSerializerDescriptor *pFVar16;
  uint uVar17;
  FNetSerializerChangeMaskParam local_78;
  FReplicationStateMemberChangeMaskDescriptor *local_70;
  FNetCollectReferencesArgs local_68;
  
  pFVar14 = param_5->MemberReferenceDescriptors;
  local_70 = param_5->MemberChangeMaskDescriptors;
  pFVar5 = param_1->ChangeMask;
  pFVar1 = pFVar14 + param_5->ObjectReferenceCount;
  do {
    if (pFVar14 == pFVar1) {
      return;
    }
    uVar10 = (short)param_3 + local_70[pFVar14->MemberIndex].BitOffset;
    uVar4 = local_70[pFVar14->MemberIndex].BitCount;
    local_78.BitCount._0_2_ = uVar4;
    local_78.BitOffset = (uint)uVar10;
    local_78.BitCount._2_2_ = 0;
    if (pFVar5 == (FNetBitArrayView *)0x0) {
LAB_1442b87fa:
      if ((pFVar14->Info).ResolveType == Invalid) {
        pFVar16 = param_5->MemberSerializerDescriptors + pFVar14->MemberIndex;
        pFVar3 = param_5->MemberDescriptors + pFVar14->MemberIndex;
        uVar4 = pFVar14->InnerReferenceIndex;
        local_68.Source = (ulong64)param_4;
        while (uVar4 != 0xffff) {
          plVar7 = (longlong *)pFVar16->SerializerConfig[1]._padding_;
          lVar2 = plVar7[6] + (ulonglong)uVar4 * 0xc;
          uVar4 = *(ushort *)(lVar2 + 6);
          local_68.Source = local_68.Source + pFVar3->InternalMemberOffset;
          pFVar16 = (FReplicationStateMemberSerializerDescriptor *)
                    ((ulonglong)uVar4 * 0x10 + plVar7[2]);
          pFVar3 = (FReplicationStateMemberDescriptor *)(*plVar7 + (ulonglong)uVar4 * 8);
          uVar4 = *(ushort *)(lVar2 + 8);
        }
        local_68.Source = local_68.Source + pFVar3->InternalMemberOffset;
        local_68._padding_._0_4_ = 0;
        local_68._padding_ = (longlong)pFVar16->SerializerConfig;
        local_68._padding_._0_4_ = local_78.BitOffset;
        local_68._padding_._4_4_ = local_78.BitCount;
        local_68.Collector = (ulong64)param_2;
        (*pFVar16->Serializer->CollectNetReferences)(param_1,&local_68);
      }
      else {
        FNetReferenceCollector::Add
                  (param_2,&pFVar14->Info,(FQuantizedObjectReference *)(param_4 + pFVar14->Offset),
                   &local_78);
      }
    }
    else {
      uVar15 = (uint)uVar4;
      if (uVar15 == 1) {
        puVar6 = pFVar5->Storage;
        if ((pFVar5->BitCount <= (uint)uVar10) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar9 = (puVar6[uVar10 >> 5] >> (uVar10 & 0x1f) & 1) != 0;
      }
      else {
        uVar17 = pFVar5->BitCount;
        if (uVar10 < uVar17 && uVar15 != 0) {
          if (((ulonglong)uVar4 - 1) + (ulonglong)uVar10 < (ulonglong)uVar17 - 1) {
            uVar17 = uVar15 + uVar10;
          }
          uVar15 = -1 << ((byte)uVar10 & 0x1f);
          uVar12 = uVar17 - 1 >> 5;
          for (uVar13 = (uint)(uVar10 >> 5); uVar13 <= uVar12; uVar13 = uVar13 + 1) {
            uVar11 = 0xffffffff;
            if (uVar13 == uVar12) {
              uVar11 = 0xffffffff >> (~(byte)(uVar17 - 1) & 0x1f);
            }
            uVar11 = uVar11 & uVar15;
            uVar15 = 0xffffffff;
            if ((pFVar5->Storage[uVar13] & uVar11) != 0) {
              bVar9 = true;
              goto LAB_1442b87f2;
            }
          }
        }
        bVar9 = false;
      }
LAB_1442b87f2:
      if (bVar9) goto LAB_1442b87fa;
    }
    pFVar14 = pFVar14 + 1;
  } while( true );
}

// FreeDynamicState @ 1442c1e40

void __cdecl
UE::Net::Private::FReplicationStateOperationsInternal::FreeDynamicState
          (FNetSerializationContext *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  FReplicationStateMemberTraitsDescriptor *pFVar1;
  ulonglong uVar2;
  uint *puVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  FNetFreeDynamicStateArgs local_38;
  
  pFVar4 = param_3->MemberSerializerDescriptors;
  pFVar1 = param_3->MemberTraitsDescriptors;
  if (param_3->MemberCount != 0) {
    puVar3 = &param_3->MemberDescriptors->InternalMemberOffset;
    uVar2 = (ulonglong)param_3->MemberCount;
    do {
      if ((pFVar1->Traits & HasDynamicState) != None) {
        local_38._padding_ = (longlong)pFVar4->SerializerConfig;
        local_38.Source = (ulong64)(param_2 + *puVar3);
        local_38._padding_ = 0;
        local_38._padding_._0_4_ = 0;
        (*pFVar4->Serializer->FreeDynamicState)(param_1,&local_38);
      }
      pFVar1 = pFVar1 + 1;
      puVar3 = puVar3 + 2;
      pFVar4 = pFVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// FreeDynamicState @ 1442c1ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::FReplicationStateOperationsInternal::FreeDynamicState
          (uchar *param_1,FReplicationStateDescriptor *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_3e8 [32];
  FInternalNetSerializationContext local_3c8;
  FNetRefHandle_u_0 local_388;
  undefined8 local_380;
  undefined8 local_370 [95];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  FInternalNetSerializationContext *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  puVar1 = local_370;
  local_388.Value = 0;
  local_380 = 0;
  lVar2 = 0x20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_28 = local_28 & 0xfffffffc;
  local_58 = &local_3c8;
  local_3c8.bSerializeObjectReferencesAsRemoteIds = 0;
  local_3c8.bInlineObjectReferenceExports = 0;
  local_3c8.bDowngradeAutonomousProxyRole = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c8.ReplicationSystem = (UReplicationSystem *)0x0;
  local_3c8.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0xffffffff;
  local_3c8.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_3c8.ResolveContext.ConnectionId = 0;
  local_3c8.ResolveContext.AsyncLoadingPriority = -1;
  local_3c8.ResolveContext.bForceSyncLoad = false;
  local_3c8.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  FreeDynamicState((FNetSerializationContext *)&local_388._s_0,param_1,param_2);
  return;
}

