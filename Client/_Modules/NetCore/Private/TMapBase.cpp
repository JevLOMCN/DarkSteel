// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 11

// FindOrAddImpl<unsigned_int_const_&> @ 1441cd370

FConnection * __thiscall
TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FNetTraceInternal::FConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>_>
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
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (FConnection *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0xc];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FConnection>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FConnection,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FConnection *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 1441cd420

FObjectTraceCounter * __thiscall
TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FNetTraceInternal::FObjectTraceCounter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>_>
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
            return (FObjectTraceCounter *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FNetTraceInternal::FObjectTraceCounter>,TDefaultMapHashableKeyFuncs<unsigned_int,FNetTraceInternal::FObjectTraceCounter,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FObjectTraceCounter *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<UE::Net::FNetHandle_const_&> @ 1441cd4d0

TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TMapBase<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
::FindOrAddImpl<UE::Net::FNetHandle_const_&>
          (TMapBase<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
           *this,uint param_1,FNetHandle *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FNetHandle *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == (param_2->field0_0x0).Value.ObjectIndex) {
          if (piVar2 != (int *)0x0) {
            return (TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::Net::FNetHandle_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::Net::FNetHandle_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FObjectKey> @ 1441cd580

FSubObjectGroupInfo * __thiscall
TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FObjectKey *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == param_2->ObjectIndex) && (piVar1[1] == param_2->ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (FSubObjectGroupInfo *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[0xe];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FSubObjectGroupInfo *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 8);
}

// TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_> @ 1441d0e80

TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
* __thiscall
TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
::
TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          (TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
           *this,TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
                 *param_1)

{
  int *piVar1;
  
  *(undefined8 *)&(this->Pairs).Elements = 0;
  *(undefined8 *)&(this->Pairs).Elements.field_0x8 = 0;
  piVar1 = &(this->Pairs).HashSize;
  *(undefined8 *)&(this->Pairs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Pairs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Pairs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Pairs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Pairs).Elements.field_0x34 = 0;
  (this->Pairs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *piVar1 = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->Pairs).Hash,piVar1,&(param_1->Pairs).Hash,(param_1->Pairs).HashSize);
    TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  return this;
}

// ~TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_> @ 1441d2cd0

void __thiscall
TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
::
~TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
          (TMapBase<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->Pairs).HashSize = 0;
  FVar1 = (this->Pairs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Find @ 1441daf00

short * __thiscall
TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
::Find(TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
       *this,ushort param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0xc;
        if (*(ushort *)(lVar2 + (longlong)iVar3 * 0xc) == param_1) {
          psVar4 = (short *)0x0;
          if (lVar1 != 0) {
            psVar4 = (short *)(lVar1 + 2);
          }
          return psVar4;
        }
        iVar3 = *(int *)(lVar1 + 4);
      } while (iVar3 != -1);
    }
  }
  return (short *)0x0;
}

// Find @ 1441daf70

FSubObjectGroupInfo * __thiscall
TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
::Find(TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
       *this,FObjectKey *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  FSubObjectGroupInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = param_1->ObjectSerialNumber;
  uVar7 = param_1->ObjectIndex - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar6 = (uVar1 - uVar7) - uVar3 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar8 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar8 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar8 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar2 == param_1->ObjectIndex) && (piVar2[1] == uVar1)) {
          if (iVar8 == -1) {
            return (FSubObjectGroupInfo *)0x0;
          }
          pFVar5 = (FSubObjectGroupInfo *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar5 = (FSubObjectGroupInfo *)(piVar2 + 2);
          }
          return pFVar5;
        }
        iVar8 = piVar2[0xe];
      } while (iVar8 != -1);
    }
  }
  return (FSubObjectGroupInfo *)0x0;
}

// Find @ 1441db080

FNetObject * __thiscall
TMapBase<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
::Find(TMapBase<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNetObject *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNetObject *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNetObject *)(puVar3 + 1);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[6];
      } while (iVar1 != -1);
    }
  }
  return (FNetObject *)0x0;
}

// Remove @ 1441e7480

int __thiscall
TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
::Remove(TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
         *this,FObjectKey *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar3 = param_1->ObjectSerialNumber;
    uVar5 = param_1->ObjectIndex - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
    uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
    uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    iVar1 = TSet<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>,FDefaultSetAllocator>
            ::RemoveImpl<FObjectKey>(&this->Pairs,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,param_1);
    return iVar1;
  }
  return 0;
}

// Remove @ 1441e7530

int __thiscall
TMapBase<UE::Net::FNetHandle,UObject_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>_>
::Remove(TMapBase<UE::Net::FNetHandle,UObject_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>_>
         *this,FNetHandle *param_1)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar7 = (param_1->field0_0x0).InternalValue.Id;
    uVar6 = (param_1->field0_0x0).InternalValue.Epoch;
    uVar4 = uVar7 - uVar6 ^ uVar6 >> 0xd;
    uVar2 = (-0x61c88647 - uVar4) - uVar6 ^ uVar4 << 8;
    uVar6 = (uVar6 - uVar2) - uVar4 ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 >> 0xc;
    uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar4 << 0x10;
    uVar6 = (uVar6 - uVar2) - uVar4 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 >> 3;
    uVar2 = uVar4 << 10 ^ (uVar2 - uVar4) - uVar6;
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar3 +
                    (((longlong)(int)((uVar6 - uVar2) - uVar4) ^ (ulonglong)(uVar2 >> 0xf)) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar5 * 0x18) == uVar7) {
          TSet<TTuple<UE::Net::FNetHandle,UObject_const_*>,TDefaultMapHashableKeyFuncs<UE::Net::FNetHandle,UObject_const_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(&this->Pairs,iVar5);
          return 1;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}

