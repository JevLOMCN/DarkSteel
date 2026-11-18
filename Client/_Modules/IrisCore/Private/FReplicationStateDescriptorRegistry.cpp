// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// FReplicationStateDescriptorRegistry @ 1441f8e10

FReplicationStateDescriptorRegistry * __thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::FReplicationStateDescriptorRegistry
          (FReplicationStateDescriptorRegistry *this)

{
  *(undefined8 *)&this->RegisteredDescriptorsMap = 0;
  *(undefined8 *)&(this->RegisteredDescriptorsMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredDescriptorsMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredDescriptorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredDescriptorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredDescriptorsMap).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredDescriptorsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredDescriptorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredDescriptorsMap).field_0x48 = 0;
  this->ProtocolManager = (FReplicationProtocolManager *)0x0;
  return this;
}

// Find @ 144208e40

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::Find
          (FReplicationStateDescriptorRegistry *this,FFieldVariant *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRegisteredDescriptors *this_00;
  TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  this_00 = TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
            ::Find((TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
                    *)this,param_1);
  if ((param_2 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectForPruning != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                         ,0x5d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar1)();
    return pTVar3;
  }
  if ((this_00 != (FRegisteredDescriptors *)0x0) &&
     (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar4 == param_2)) {
    if ((*(byte *)&param_1->Container & 1) != 0) {
      local_res8.ObjectIndex = (this_00->OwnerKey).ObjectIndex;
      local_res8.ObjectSerialNumber = (this_00->OwnerKey).ObjectSerialNumber;
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar4 == (UObject *)0x0) {
        if ((byte)LogIris._0_1_ < 7) {
          return (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
                  *)0x0;
        }
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
                *)0x0;
      }
    }
    return &this_00->Descriptors;
  }
  return (TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
          *)0x0;
}

// GetObjectForPruning @ 14420b030

UObject * __cdecl
UE::Net::Private::FReplicationStateDescriptorRegistry::GetObjectForPruning(FFieldVariant *param_1)

{
  ulonglong uVar1;
  UObject *pUVar2;
  
  uVar1 = (param_1->Container).Unknown;
  if ((uVar1 & 1) != 0) {
    return (UObject *)(uVar1 & 0xfffffffffffffffe);
  }
  uVar1 = *(ulonglong *)(uVar1 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending)) {
      GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((uVar1 & 1) != 0) goto LAB_14420b09e;
  }
  do {
    do {
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14420b09e;
      uVar1 = *(ulonglong *)(uVar1 + 0x10);
    } while ((uVar1 & 1) == 0);
    if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
  } while ((uVar1 & 1) == 0);
LAB_14420b09e:
  pUVar2 = (UObject *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) == 0) {
    pUVar2 = (UObject *)0x0;
  }
  return pUVar2;
}

// Init @ 14420f690

void __thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::Init
          (FReplicationStateDescriptorRegistry *this,
          FReplicationStateDescriptorRegistryInitParams *param_1)

{
  this->ProtocolManager = param_1->ProtocolManager;
  return;
}

// InvalidateDescriptors @ 1442114e0

void __thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::InvalidateDescriptors
          (FReplicationStateDescriptorRegistry *this,
          TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  if (this->ProtocolManager != (FReplicationProtocolManager *)0x0) {
    pFVar5 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
      FReplicationProtocolManager::InvalidateDescriptor
                (this->ProtocolManager,*(FReplicationStateDescriptor **)pFVar5);
    }
  }
  return;
}

// PruneStaleDescriptors @ 144214ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::PruneStaleDescriptors
          (FReplicationStateDescriptorRegistry *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  bool bVar10;
  FWeakObjectPtr local_res10;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
  *pTStack_50;
  FReplicationStateDescriptorRegistry *local_48;
  char local_40;
  char cStack_3f;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId114,
               "FReplicationStateDescriptorRegistry_PruneStaleDescriptors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId114);
  }
  TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
              *)this);
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar6 = local_a8._24_8_ >> 0x20;
  uVar9 = local_a8._28_4_;
  local_48 = this;
  if ((int)uVar9 < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      lVar7 = (longlong)(int)uVar6 * 0x30 + *local_78;
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar7 + 8));
      if (bVar3) {
        if (bPruneReplicationStateDescriptorsWithArchetype != false) {
          local_res10.ObjectIndex = *(int *)(lVar7 + 0x20);
          local_res10.ObjectSerialNumber = *(int *)(lVar7 + 0x24);
          pUVar5 = FWeakObjectPtr::Get(&local_res10);
          if (pUVar5 == (UObject *)0x0) goto LAB_144214c21;
        }
      }
      else {
LAB_144214c21:
        if (6 < (byte)LogIris._0_1_) {
          Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        if (this->ProtocolManager != (FReplicationProtocolManager *)0x0) {
          puVar8 = *(undefined8 **)(lVar7 + 0x10);
          iVar4 = *(int *)(lVar7 + 0x18);
          if ((iVar4 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar1 = puVar8 + iVar4;
          for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            FReplicationProtocolManager::InvalidateDescriptor
                      (this->ProtocolManager,(FReplicationStateDescriptor *)*puVar8);
          }
        }
        TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_50,uVar9);
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar6 = (ulonglong)uStack_5c;
      uVar9 = uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar9 = *(int *)&(local_48->RegisteredDescriptorsMap).field_0x8 -
              *(int *)&(local_48->RegisteredDescriptorsMap).field_0x34;
      if (uVar9 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar9) && (*(int *)&(local_48->RegisteredDescriptorsMap).field_0x48 < iVar4))
         || (iVar4 < *(int *)&(local_48->RegisteredDescriptorsMap).field_0x48)) {
        *(int *)&(local_48->RegisteredDescriptorsMap).field_0x48 = iVar4;
        TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
                  *)local_48);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Register @ 144215320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::Register
          (FReplicationStateDescriptorRegistry *this,FFieldVariant *param_1,UObject *param_2,
          TArray<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRegisteredDescriptors *this_00;
  UObject *pUVar5;
  int iVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  FRegisteredDescriptors local_98;
  FWeakObjectPtr local_78;
  undefined8 local_70;
  UObject *local_68;
  FName local_60;
  UObject *local_58;
  UObject *local_50;
  FString local_48;
  
  if ((param_2 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectForPruning != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                         ,0x1d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
            ::Find((TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
                    *)this,param_1);
  if (this_00 != (FRegisteredDescriptors *)0x0) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar5 == param_2) {
      pUVar5 = GetObjectForPruning(param_1);
      iVar4 = 0;
      iVar6 = 0;
      if (pUVar5 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_68 = pUVar5;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_68);
        iVar4 = local_res8.ObjectIndex;
        iVar6 = local_res8.ObjectSerialNumber;
      }
      if (((this_00->OwnerKey).ObjectIndex == iVar4) &&
         ((this_00->OwnerKey).ObjectSerialNumber == iVar6)) {
        local_60.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_60.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_60,&local_48);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                           ,0x27,
                           L"FReplicationStateDescriptorRegistry::Trying to register descriptors for the same UObject %s"
                          );
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (6 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    InvalidateDescriptors(this,&this_00->Descriptors);
    TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
    ::Remove((TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
              *)this,param_1);
  }
  local_98.Descriptors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Descriptors.ArrayNum = 0;
  local_98.Descriptors.ArrayMax = 0;
  pUVar5 = GetObjectForPruning(param_1);
  local_70 = 0;
  if (pUVar5 == (UObject *)0x0) {
    local_98.OwnerKey.ObjectIndex = 0;
    local_98.OwnerKey.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar5);
    }
    local_res18[0].ObjectIndex = 0;
    local_res18[0].ObjectSerialNumber = 0;
    local_58 = pUVar5;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_58);
    local_98.OwnerKey = (FObjectKey)local_res18[0];
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_50 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_50);
  local_98.WeakPtrForPruning.WeakPtr = local_78;
  if (&local_98.Descriptors != param_3) {
    DestructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
              ((TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)
               local_98.Descriptors.AllocatorInstance.Data,local_98.Descriptors.ArrayNum);
    iVar4 = param_3->ArrayNum;
    pFVar1 = (param_3->AllocatorInstance).Data;
    local_98.Descriptors.ArrayNum = iVar4;
    if ((iVar4 == 0) && (local_98.Descriptors.ArrayMax == 0)) {
      local_98.Descriptors.ArrayNum = 0;
      local_98.Descriptors.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,local_98.Descriptors.ArrayMax,&local_98.Descriptors.AllocatorInstance,
                 iVar4,&local_98.Descriptors.ArrayMax);
      ConstructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
                (local_98.Descriptors.AllocatorInstance.Data,
                 (TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)pFVar1,iVar4);
    }
  }
  TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
  ::
  Emplace<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&>
            ((TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
              *)this,param_1,&local_98);
  DestructItems<TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,int>
            ((TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *)
             local_98.Descriptors.AllocatorInstance.Data,local_98.Descriptors.ArrayNum);
  if (local_98.Descriptors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Descriptors.AllocatorInstance.Data);
  }
  return;
}

// Register @ 144215620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationStateDescriptorRegistry::Register
          (FReplicationStateDescriptorRegistry *this,FFieldVariant *param_1,UObject *param_2,
          TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> *param_3)

{
  int iVar1;
  FReplicationStateDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FRegisteredDescriptors *this_00;
  UObject *pUVar7;
  FWeakObjectPtr FVar8;
  uint uVar9;
  longlong lVar10;
  int local_res8 [2];
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  undefined8 local_88;
  UObject *local_80;
  FName local_78;
  TKeyInitializer<FFieldVariant_const_&> local_70;
  UObject *local_68;
  UObject *local_60;
  FString local_58;
  FSparseArrayAllocationInfo local_48;
  
  if ((param_2 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectForPruning != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                         ,0x3d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
            ::Find((TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
                    *)this,param_1);
  if (this_00 != (FRegisteredDescriptors *)0x0) {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar7 == param_2) {
      pUVar7 = GetObjectForPruning(param_1);
      iVar6 = 0;
      iVar5 = 0;
      if (pUVar7 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar7);
        }
        local_res18[0].ObjectIndex = 0;
        local_res18[0].ObjectSerialNumber = 0;
        local_80 = pUVar7;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_80);
        iVar6 = local_res18[0].ObjectIndex;
        iVar5 = local_res18[0].ObjectSerialNumber;
      }
      if (((this_00->OwnerKey).ObjectIndex == iVar6) &&
         ((this_00->OwnerKey).ObjectSerialNumber == iVar5)) {
        local_78.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
        local_78.Number = *(uint *)&param_2->field_0x1c;
        ::FName::ToString(&local_78,&local_58);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\ReplicationStateDescriptorRegistry.cpp"
                           ,0x47,
                           L"FReplicationStateDescriptorRegistry::Trying to register descriptor for the same UObject %s"
                          );
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (6 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    InvalidateDescriptors(this,&this_00->Descriptors);
    TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
    ::Remove((TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
              *)this,param_1);
  }
  iVar6 = *(int *)&(this->RegisteredDescriptorsMap).field_0x34;
  local_70.Key = param_1;
  if (iVar6 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,
                       (int *)&(this->RegisteredDescriptorsMap).field_0x8,
                       (int *)&(this->RegisteredDescriptorsMap).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredDescriptorsMap).field_0x10,
               false);
  }
  else {
    iVar5 = *(int *)&(this->RegisteredDescriptorsMap).field_0x30;
    iVar6 = iVar6 + -1;
    lVar10 = *(longlong *)&this->RegisteredDescriptorsMap;
    iVar1 = *(int *)(lVar10 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->RegisteredDescriptorsMap).field_0x30 = iVar1;
    *(int *)&(this->RegisteredDescriptorsMap).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar10 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_>
       *)0x0) {
    TKeyInitializer<FFieldVariant_const_&>::
    operator<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
              (&local_70,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_48.Index;
  uVar9 = ((uint)(*(ulonglong *)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_48.Pointer >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  bVar4 = TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
                      *)this,uVar9,local_48.Pointer,local_res8,(bool *)0x0);
  lVar10 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
                    *)this,uVar9,local_48.Pointer,local_res8[0]);
  }
  lVar10 = lVar10 * 0x30 + *(longlong *)&this->RegisteredDescriptorsMap;
  pUVar7 = GetObjectForPruning(param_1);
  local_88 = 0;
  if (pUVar7 == (UObject *)0x0) {
    FVar8.ObjectIndex = 0;
    FVar8.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_68 = pUVar7;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_68);
    FVar8 = local_98;
  }
  *(FWeakObjectPtr *)(lVar10 + 0x20) = FVar8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  local_90.ObjectIndex = 0;
  local_90.ObjectSerialNumber = 0;
  local_60 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_90,(FObjectPtr)&local_60);
  *(FWeakObjectPtr *)(lVar10 + 8) = local_90;
  if (((*(TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> **)(lVar10 + 0x10) <= param_3)
      && (param_3 < *(TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> **)(lVar10 + 0x10) +
                    *(int *)(lVar10 + 0x1c))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)(lVar10 + 0x18);
  if (iVar6 == *(int *)(lVar10 + 0x1c)) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar10 + 0x10),(int *)(lVar10 + 0x1c));
  }
  *(int *)(lVar10 + 0x18) = iVar6 + 1;
  lVar10 = *(longlong *)(lVar10 + 0x10);
  *(undefined8 *)(lVar10 + (longlong)iVar6 * 8) = 0;
  pFVar2 = param_3->Reference;
  *(FReplicationStateDescriptor **)(lVar10 + (longlong)iVar6 * 8) = pFVar2;
  if ((pFVar2 != (FReplicationStateDescriptor *)0x0) && ((pFVar2->Traits & NeedsRefCount) != None))
  {
    LOCK();
    pFVar2->RefCount = (atomic<int>)((int)pFVar2->RefCount + 1);
    UNLOCK();
  }
  return;
}

