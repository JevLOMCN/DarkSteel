// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 10

// Emplace<FName_const_&,UE::Online::FCustomSessionSetting_const_&> @ 14ec1d9d0

FCustomSessionSetting * __thiscall
TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
::Emplace<FName_const_&,UE::Online::FCustomSessionSetting_const_&>
          (TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
           *this,FName *param_1,FCustomSessionSetting *param_2)

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
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_> *)0x0
     ) {
    *(FName *)local_28.Pointer = *param_1;
    TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
              ((TVariant<FString,__int64,double,bool> *)((longlong)local_28.Pointer + 8),
               (TVariant<FString,__int64,double,bool> *)param_2);
    *(ESchemaAttributeType *)((longlong)local_28.Pointer + 0x20) = (param_2->Data).VariantType;
    *(ESchemaAttributeVisibility *)((longlong)local_28.Pointer + 0x28) = param_2->Visibility;
    *(int *)((longlong)local_28.Pointer + 0x2c) = param_2->ID;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FCustomSessionSetting *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 8);
}

// Emplace<FName_const_&,UE::Online::FSchemaVariant_const_&> @ 14ec1db20

FSchemaVariant * __thiscall
TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
::Emplace<FName_const_&,UE::Online::FSchemaVariant_const_&>
          (TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
           *this,FName *param_1,FSchemaVariant *param_2)

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
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
              ((TVariant<FString,__int64,double,bool> *)((longlong)local_28.Pointer + 8),
               &param_2->VariantData);
    *(ESchemaAttributeType *)((longlong)local_28.Pointer + 0x20) = param_2->VariantType;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FSchemaVariant *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x30);
}

// Emplace<FName,UE::Online::FCustomSessionSetting> @ 14ec1fe30

FCustomSessionSetting * __thiscall
TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
::Emplace<FName,UE::Online::FCustomSessionSetting>
          (TMapBase<FName,UE::Online::FCustomSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>_>
           *this,FName *param_1,FCustomSessionSetting *param_2)

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
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_> *)0x0
     ) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined1 *)((longlong)local_28.Pointer + 0x18) = 0;
    *(undefined1 *)((longlong)local_28.Pointer + 0x20) = 0;
    TVariant<FString,__int64,double,bool>::operator=
              ((TVariant<FString,__int64,double,bool> *)((longlong)local_28.Pointer + 8),
               (TVariant<FString,__int64,double,bool> *)param_2);
    *(ESchemaAttributeType *)((longlong)local_28.Pointer + 0x20) = (param_2->Data).VariantType;
    (param_2->Data).VariantType = None;
    *(ESchemaAttributeVisibility *)((longlong)local_28.Pointer + 0x28) = param_2->Visibility;
    *(int *)((longlong)local_28.Pointer + 0x2c) = param_2->ID;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FCustomSessionSetting *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 8);
}

// FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&> @ 14ec20820

TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
* __thiscall
TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
          (void *this,uint param_1,EOnlineServices *param_2)

{
  undefined4 uVar1;
  EOnlineServices *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EOnlineServices *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EOnlineServices *)((longlong)(int)uVar1 * 0x60 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EOnlineServices *)0x0) {
            return (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                    *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x58);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<UE::Online::EOnlineServices_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
          *)(*(longlong *)this + 8 + (longlong)local_res8[0] * 0x60);
}

// Find @ 14ec280c0

TSharedRef<UE::Online::IOnlineServices,1> * __thiscall
TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
::Find(TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
       *this,TTuple<FName,FName> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  
  uVar2 = *(undefined8 *)param_1;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar4 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + (uVar4 >> 2) +
                     uVar5 + 0x9e3779b9 ^ uVar4)) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar7 * 0x28;
        if ((*(longlong *)(lVar3 + (longlong)iVar7 * 0x28) == *(longlong *)param_1) &&
           (*(longlong *)(lVar1 + 8) == *(longlong *)&param_1->field_0x8)) {
          if (iVar7 == -1) {
            return (TSharedRef<UE::Online::IOnlineServices,1> *)0x0;
          }
          if (lVar1 != 0) {
            return (TSharedRef<UE::Online::IOnlineServices,1> *)(lVar1 + 0x10);
          }
          return (TSharedRef<UE::Online::IOnlineServices,1> *)0x0;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  return (TSharedRef<UE::Online::IOnlineServices,1> *)0x0;
}

// Find @ 14ec281b0

FSchemaServiceAttributeDefinition * __thiscall
TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
::Find(TMapBase<FName,UE::Online::FSchemaServiceAttributeDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaServiceAttributeDefinition,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FSchemaServiceAttributeDefinition *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FSchemaServiceAttributeDefinition *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FSchemaServiceAttributeDefinition *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSchemaServiceAttributeDefinition *)0x0;
}

// Find @ 14ec28250

TSharedRef<UE::Online::FSchemaDefinition_const_,1> * __thiscall
TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
::Find(TMapBase<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar4;
  
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
          pTVar4 = (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0;
}

// Find @ 14ec282f0

FSchemaVariant * __thiscall
TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
::Find(TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FSchemaVariant *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FSchemaVariant *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FSchemaVariant *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FSchemaVariant *)0x0;
}

// Find @ 14ec28390

TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
* __thiscall
TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
::Find(void *this,EOnlineServices param_1)

{
  undefined4 uVar1;
  TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
  *pTVar2;
  EOnlineServices *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EOnlineServices *)((longlong)(int)uVar1 * 0x60 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pTVar2 = (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                    *)0x0;
          if (pEVar3 != (EOnlineServices *)0x0) {
            pTVar2 = (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                      *)(pEVar3 + 8);
          }
          return pTVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x58);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
          *)0x0;
}

// Find @ 14ec28410

TSharedRef<UE::Online::FSchemaDefinition_const_,1> * __thiscall
TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
::Find(TMapBase<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedRef<UE::Online::FSchemaDefinition_const_,1>,0>_>
       *this,long64 param_1)

{
  int iVar1;
  longlong *plVar2;
  TSharedRef<UE::Online::FSchemaDefinition_const_,1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == param_1) {
          pTVar3 = (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar3 = (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)(plVar2 + 1);
          }
          return pTVar3;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<UE::Online::FSchemaDefinition_const_,1> *)0x0;
}

