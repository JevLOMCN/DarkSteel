// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 28

// Emplace<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&> @ 1441f5bc0

FRegisteredDescriptors * __thiscall
TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
::
Emplace<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&>
          (TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
           *this,FFieldVariant *param_1,FRegisteredDescriptors *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int local_res8 [2];
  TPairInitializer<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&>
  local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_>
       *)0x0) {
    TPairInitializer<FFieldVariant_const_&,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors_const_&>
    ::
    operator<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>_TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (FRegisteredDescriptors *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// Find @ 144208d90

FRegisteredDescriptors * __thiscall
TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
::Find(TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
       *this,FFieldVariant *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FRegisteredDescriptors *pFVar6;
  
  uVar1 = (param_1->Container).Unknown;
  uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        puVar3 = (ulonglong *)((longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == uVar1) {
          pFVar6 = (FRegisteredDescriptors *)0x0;
          if (puVar3 != (ulonglong *)0x0) {
            pFVar6 = (FRegisteredDescriptors *)(puVar3 + 1);
          }
          return pFVar6;
        }
        iVar2 = (int)puVar3[5];
      } while (iVar2 != -1);
    }
  }
  return (FRegisteredDescriptors *)0x0;
}

// Remove @ 144217f10

int __thiscall
TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
::Remove(TMapBase<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>_>
         *this,FFieldVariant *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar1 = (param_1->Container).Unknown;
    FVar5 = (this->Pairs).Hash.SecondaryData;
    uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    (((ulonglong)(uVar3 >> 0x10) ^ (longlong)(int)uVar3) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar6 = 0;
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      while (*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x30) != uVar1) {
        iVar4 = *(int *)(lVar2 + 0x28 + (longlong)iVar4 * 0x30);
        if (iVar4 == -1) {
          return 0;
        }
      }
      TSet<TTuple<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors>,TDefaultMapHashableKeyFuncs<FFieldVariant,UE::Net::Private::FReplicationStateDescriptorRegistry::FRegisteredDescriptors,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar4);
      iVar6 = 1;
    }
  }
  return iVar6;
}

// FindOrAddImpl<unsigned_int_const_&> @ 144222ae0

FObjectDynamicConditions * __thiscall
TMapBase<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FObjectDynamicConditions *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationConditionals::FObjectDynamicConditions,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FObjectDynamicConditions *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<unsigned_int_const_&> @ 144222b90

FSharedConnectionFilterStatus * __thiscall
TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FSharedConnectionFilterStatus *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x22];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FSharedConnectionFilterStatus *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x90);
}

// Find @ 144239fa0

FDependencyInfo * __thiscall
TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
::Find(TMapBase<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FNetDependencyData::FDependencyInfo,0>_>
       *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FDependencyInfo *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x28) == param_1) {
          pFVar4 = (FDependencyInfo *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FDependencyInfo *)(lVar1 + 4);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (FDependencyInfo *)0x0;
}

// Find @ 14423a010

uint * __thiscall
TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
::Find(TMapBase<UE::Net::FNetHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,unsigned_int,0>_>
       *this,FNetHandle *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = (param_1->field0_0x0).InternalValue.Id;
  uVar9 = (param_1->field0_0x0).InternalValue.Epoch;
  uVar5 = uVar8 - uVar9 ^ uVar9 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar9 ^ uVar5 << 8;
  uVar9 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xd;
  uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 0xc;
  uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 0x10;
  uVar9 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 5;
  uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 3;
  uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xf)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x14) == uVar8) {
          puVar7 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar7 = (uint *)(lVar1 + 8);
          }
          return puVar7;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return (uint *)0x0;
}

// Emplace<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&> @ 14425f7c0

FPollInfo * __thiscall
TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
::Emplace<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&>
          (TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
           *this,FName *param_1,FPollInfo *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x1c + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_2;
    *(int *)((longlong)local_28.Pointer + 0x10) = (param_2->Class).WeakPtr.ObjectSerialNumber;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FPollInfo *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x1c + 8);
}

// EmplaceByHash<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&> @ 1442616d0

FPollInfo * __thiscall
TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
::EmplaceByHash<FName_const_&,UObjectReplicationBridge::FPollInfo_const_&>
          (TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
           *this,uint param_1,FName *param_2,FPollInfo *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x1c + 4 + lVar5);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FName,UObjectReplicationBridge::FPollInfo>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)param_3;
    *(int *)((longlong)local_28.Pointer + 0x10) = (param_3->Class).WeakPtr.ObjectSerialNumber;
    *(undefined4 *)((longlong)local_28.Pointer + 0x14) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar3 = TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,UObjectReplicationBridge::FPollInfo>,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (FPollInfo *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0x1c + 8);
}

// FindOrAddImpl<UE::Net::FNetRefHandle_const_&> @ 144261f60

FQueuedBatchObjectReference * __thiscall
TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
::FindOrAddImpl<UE::Net::FNetRefHandle_const_&>
          (TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>_>
           *this,uint param_1,FNetRefHandle *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetRefHandle *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulonglong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar2 & 0x3fffffffffffff) == ((param_2->field0_0x0).Value & 0x3fffffffffffff)) {
          if (puVar2 != (ulonglong *)0x0) {
            return (FQueuedBatchObjectReference *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FQueuedBatchObjectReference,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::Net::FNetRefHandle_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::Net::FNetRefHandle_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FQueuedBatchObjectReference *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 144277c70

FNetRefHandle * __thiscall
TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
::Find(TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
       *this,UObject *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FNetRefHandle *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UObject **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FNetRefHandle *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FNetRefHandle *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FNetRefHandle *)0x0;
}

// Find @ 144277d20

FClassFilterInfo * __thiscall
TMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
::Find(TMapBase<FName,UObjectReplicationBridge::FClassFilterInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassFilterInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FClassFilterInfo *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FClassFilterInfo *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FClassFilterInfo *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FClassFilterInfo *)0x0;
}

// Find @ 144277dc0

FClassPrioritizerInfo * __thiscall
TMapBase<FName,UObjectReplicationBridge::FClassPrioritizerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>_>
::Find(TMapBase<FName,UObjectReplicationBridge::FClassPrioritizerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FClassPrioritizerInfo,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FClassPrioritizerInfo *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pFVar5 = (FClassPrioritizerInfo *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FClassPrioritizerInfo *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FClassPrioritizerInfo *)0x0;
}

// Find @ 144277e60

FPollInfo * __thiscall
TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
::Find(TMapBase<FName,UObjectReplicationBridge::FPollInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObjectReplicationBridge::FPollInfo,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FPollInfo *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FPollInfo *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FPollInfo *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[2].Number;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FPollInfo *)0x0;
}

// Find @ 144277f00

FCachedNetObjectReference * __thiscall
TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
::Find(TMapBase<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,UE::Net::Private::FObjectReferenceCache::FCachedNetObjectReference,0>_>
       *this,FNetRefHandle *param_1)

{
  int iVar1;
  ulonglong *puVar2;
  FCachedNetObjectReference *pFVar3;
  ForElementType<FSetElementId> FVar4;
  ulonglong uVar5;
  
  uVar5 = (param_1->field0_0x0).Value & 0x3fffffffffffff;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    ((uVar5 >> 0x20) * 0x17 + uVar5 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulonglong *)((longlong)iVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar2 & 0x3fffffffffffff) == uVar5) {
          pFVar3 = (FCachedNetObjectReference *)0x0;
          if (puVar2 != (ulonglong *)0x0) {
            pFVar3 = (FCachedNetObjectReference *)(puVar2 + 1);
          }
          return pFVar3;
        }
        iVar1 = (int)puVar2[7];
      } while (iVar1 != -1);
    }
  }
  return (FCachedNetObjectReference *)0x0;
}

// FindChecked @ 144278270

FString * __thiscall
TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
::FindChecked(TMapBase<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (FString *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 14428dfe0

int __thiscall
TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
::Remove(TMapBase<UObject_const_*,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>_>
         *this,UObject *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar5 = 0;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(UObject **)(lVar1 + (longlong)iVar3 * 0x18) != param_1) {
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      TSet<TTuple<UObject_const_*,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,UE::Net::FNetRefHandle,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar3);
      iVar5 = 1;
    }
  }
  return iVar5;
}

// Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&> @ 1442a22c0

FNetRefHandle * __thiscall
TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
          (TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
           *this,uint *param_1,FNetRefHandle *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_1;
    *(FNetRefHandle_u_0 *)((longlong)local_18.Pointer + 8) =
         (FNetRefHandle_u_0_s_0)param_2->field0_0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,*(uint *)local_18.Pointer,local_18.Pointer,local_18.Index);
  return (FNetRefHandle *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle> @ 1442a23c0

FNetRefHandle * __thiscall
TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
::Emplace<unsigned_int_const_&,UE::Net::FNetRefHandle>
          (TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
           *this,uint *param_1,FNetRefHandle *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_1;
    *(FNetRefHandle_u_0 *)((longlong)local_18.Pointer + 8) =
         (FNetRefHandle_u_0_s_0)param_2->field0_0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,*(uint *)local_18.Pointer,local_18.Pointer,local_18.Index);
  return (FNetRefHandle *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// Emplace<UE::Net::FNetRefHandle_const_&> @ 1442a24c0

uint * __thiscall
TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
::Emplace<UE::Net::FNetRefHandle_const_&>
          (TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
           *this,FNetRefHandle *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (FNetRefHandle_u_0 *)0x0) {
    *(FNetRefHandle_u_0 *)local_18.Pointer = (FNetRefHandle_u_0_s_0)param_1->field0_0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar5 = (int)((*(ulonglong *)local_18.Pointer & 0x3fffffffffffff) >> 0x20) * 0x17 +
          (int)(*(ulonglong *)local_18.Pointer & 0x3fffffffffffff);
  bVar3 = TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_18.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_18.Pointer,local_res8[0]);
  }
  return (uint *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// Emplace<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&> @ 1442a2600

uint * __thiscall
TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
::Emplace<UE::Net::FNetRefHandle_const_&,unsigned_int_const_&>
          (TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
           *this,FNetRefHandle *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (FNetRefHandle_u_0 *)0x0) {
    *(FNetRefHandle_u_0 *)local_28.Pointer = (FNetRefHandle_u_0_s_0)param_1->field0_0x0;
    *(uint *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar5 = (int)((*(ulonglong *)local_28.Pointer & 0x3fffffffffffff) >> 0x20) * 0x17 +
          (int)(*(ulonglong *)local_28.Pointer & 0x3fffffffffffff);
  bVar3 = TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UE::Net::FNetRefHandle,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,local_res8[0]);
  }
  return (uint *)(*(longlong *)&(this->Pairs).Elements + lVar6 * 0x18 + 8);
}

// EmplaceByHash<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&> @ 1442a3a60

FNetRefHandle * __thiscall
TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
::EmplaceByHash<unsigned_int_const_&,UE::Net::FNetRefHandle_const_&>
          (TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
           *this,uint param_1,uint *param_2,FNetRefHandle *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,UE::Net::FNetRefHandle>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_2;
    *(FNetRefHandle_u_0 *)((longlong)local_18.Pointer + 8) =
         (FNetRefHandle_u_0_s_0)param_3->field0_0x0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0xffffffff;
  }
  TSet<TTuple<unsigned_int,UE::Net::FNetRefHandle>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_18.Index);
  return (FNetRefHandle *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x18 + 8);
}

// FindOrAddImpl<UE::Net::FNetRefHandle_const_&,short> @ 1442a4db0

short * __thiscall
TMapBase<UE::Net::FNetRefHandle,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>_>
::FindOrAddImpl<UE::Net::FNetRefHandle_const_&,short>
          (TMapBase<UE::Net::FNetRefHandle,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>_>
           *this,uint param_1,FNetRefHandle *param_2,short *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  FNetRefHandle *local_18;
  short *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if ((*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x18) & 0x3fffffffffffff) ==
            ((param_2->field0_0x0).Value & 0x3fffffffffffff)) {
          if (lVar1 != 0) {
            return (short *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<UE::Net::FNetRefHandle,short>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,short,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<UE::Net::FNetRefHandle_const_&,short_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<UE::Net::FNetRefHandle_const_&,short_&&> *)(ulonglong)param_1,
             (bool *)&local_18);
  return (short *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18 + 8);
}

// Find @ 1442c0240

FNetRefHandle * __thiscall
TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
::Find(TMapBase<unsigned_int,UE::Net::FNetRefHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FNetRefHandle,1>_>
       *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FNetRefHandle *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FNetRefHandle *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FNetRefHandle *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FNetRefHandle *)0x0;
}

// Find @ 1442c02b0

FNetObjectGroupHandle * __thiscall
TMapBase<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
::Find(TMapBase<FObjectKey,UE::Net::FNetObjectGroupHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetObjectGroupHandle,0>_>
       *this,FObjectKey *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FNetObjectGroupHandle *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar8 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar2 ^ uVar8 << 8;
  uVar7 = (uVar2 - uVar8) - uVar4 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar7 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar7 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar9 * 0x18;
        if ((*(int *)(lVar3 + (longlong)iVar9 * 0x18) == param_1->ObjectIndex) &&
           (*(uint *)(lVar1 + 4) == uVar2)) {
          if (iVar9 == -1) {
            return (FNetObjectGroupHandle *)0x0;
          }
          pFVar6 = (FNetObjectGroupHandle *)0x0;
          if (lVar1 != 0) {
            pFVar6 = (FNetObjectGroupHandle *)(lVar1 + 8);
          }
          return pFVar6;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (FNetObjectGroupHandle *)0x0;
}

// Find @ 1442c03c0

uint * __thiscall
TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
::Find(TMapBase<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
       *this,FNetRefHandle *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  
  uVar6 = (param_1->field0_0x0).Value & 0x3fffffffffffff;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((uVar6 >> 0x20) * 0x17 + uVar6 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if ((*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x18) & 0x3fffffffffffff) == uVar6) {
          puVar4 = (uint *)0x0;
          if (lVar1 != 0) {
            puVar4 = (uint *)(lVar1 + 8);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (uint *)0x0;
}

// FindChecked @ 1442c0500

double * __thiscall
TMapBase<UE::Net::FNetRefHandle,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>_>
::FindChecked(TMapBase<UE::Net::FNetRefHandle,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>_>
              *this,FNetRefHandle *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  ulonglong uVar6;
  
  uVar6 = (param_1->field0_0x0).Value & 0x3fffffffffffff;
  iVar4 = TSet<TTuple<UE::Net::FNetRefHandle,double>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,double,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Net::FNetRefHandle>
                    (&this->Pairs,(int)(uVar6 >> 0x20) * 0x17 + (int)uVar6,param_1);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x18, lVar1 != 0)) {
    return (double *)(lVar1 + 8);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (double *)&DAT_00000008;
  }
  pcVar2 = (code *)swi(3);
  pdVar5 = (double *)(*pcVar2)();
  return pdVar5;
}

// Remove @ 14430e340

int __thiscall
TMapBase<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
::Remove(TMapBase<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>_>
         *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)(int)param_1) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(uint *)((longlong)iVar2 * 0x20 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::Private::FReplicationWriter::FCannotSendInfo,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

