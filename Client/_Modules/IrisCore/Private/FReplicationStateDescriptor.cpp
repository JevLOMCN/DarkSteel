// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// AddRef @ 1441fb4e0

void __thiscall UE::Net::FReplicationStateDescriptor::AddRef(FReplicationStateDescriptor *this)

{
  if ((this->Traits & NeedsRefCount) != None) {
    LOCK();
    this->RefCount = (atomic<int>)((int)this->RefCount + 1);
    UNLOCK();
  }
  return;
}

// Release @ 144217d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Net::FReplicationStateDescriptor::Release(FReplicationStateDescriptor *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar *puVar3;
  FNetSerializerConfig *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  FReplicationStateMemberFunctionDescriptor *pFVar9;
  FReplicationStateMemberFunctionDescriptor *pFVar10;
  undefined1 auStack_3e8 [40];
  FInternalNetSerializationContext local_3c0;
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
  if ((this->Traits & NeedsRefCount) != None) {
    LOCK();
    paVar1 = &this->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      uVar8 = 0;
      puVar3 = this->DefaultStateBuffer;
      if (puVar3 != (uchar *)0x0) {
        if ((this->Traits & HasDynamicState) != None) {
          local_388.Value = 0;
          puVar6 = local_370;
          local_380 = 0;
          lVar5 = 0x20;
          do {
            *puVar6 = 0;
            puVar6 = puVar6 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          local_28 = local_28 & 0xfffffffc;
          local_58 = &local_3c0;
          local_3c0.bSerializeObjectReferencesAsRemoteIds = 0;
          local_3c0.bInlineObjectReferenceExports = 0;
          local_3c0.bDowngradeAutonomousProxyRole = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_78 = 0;
          local_3c0.ReplicationSystem = (UReplicationSystem *)0x0;
          local_3c0.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
          local_70 = 0;
          local_50 = 0;
          local_38 = 0;
          local_30 = 0;
          local_2c = 0xffffffff;
          local_3c0.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
          local_3c0.ResolveContext.ConnectionId = 0;
          local_3c0.ResolveContext.AsyncLoadingPriority = -1;
          local_3c0.ResolveContext.bForceSyncLoad = false;
          local_3c0.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
          Net::Private::FReplicationStateOperationsInternal::FreeDynamicState
                    ((FNetSerializationContext *)&local_388._s_0,puVar3,this);
        }
        FMemory::Free(puVar3);
      }
      if (this->MemberCount != 0) {
        do {
          pFVar4 = this->MemberSerializerDescriptors[uVar8].SerializerConfig;
          if ((pFVar4->ConfigTraits & NeedDestruction) != None) {
            (**(code **)pFVar4->_padding_)(pFVar4,0);
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < this->MemberCount);
      }
      pFVar9 = this->MemberFunctionDescriptors;
      pFVar10 = pFVar9 + this->FunctionCount;
      for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 1) {
        Release(pFVar9->Descriptor);
      }
      FMemory::Free(this);
    }
  }
  return;
}

