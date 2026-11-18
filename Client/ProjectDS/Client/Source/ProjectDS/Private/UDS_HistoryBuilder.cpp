// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b4ac120

UClass * __cdecl UDS_HistoryBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HistoryBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HistoryBuilder",
               &Z_Registration_Info_UClass_UDS_HistoryBuilder.InnerSingleton,
               StaticRegisterNativesUDS_HistoryBuilder,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HistoryBuilder>,
               InternalVTableHelperCtorCaller<UDS_HistoryBuilder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HistoryBuilder.InnerSingleton;
}

// UDS_HistoryBuilder @ 14b4b23e0

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::UDS_HistoryBuilder(UDS_HistoryBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HistoryBuilder__6B_;
  FDS_HistoryData::FDS_HistoryData(&this->HistoryData);
  return this;
}

// UDS_HistoryBuilder @ 14b4b2410

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::UDS_HistoryBuilder(UDS_HistoryBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_HistoryBuilder__6B_;
  FDS_HistoryData::FDS_HistoryData(&this->HistoryData);
  return this;
}

// ~UDS_HistoryBuilder @ 14b4b36f0

void __thiscall UDS_HistoryBuilder::~UDS_HistoryBuilder(UDS_HistoryBuilder *this)

{
  this->_padding_ = (longlong)&___7UDS_HistoryBuilder__6B_;
  FDS_HistoryData::~FDS_HistoryData(&this->HistoryData);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b73e0

UClass * __cdecl UDS_HistoryBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HistoryBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HistoryBuilder",
               &Z_Registration_Info_UClass_UDS_HistoryBuilder.InnerSingleton,
               StaticRegisterNativesUDS_HistoryBuilder,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HistoryBuilder>,
               InternalVTableHelperCtorCaller<UDS_HistoryBuilder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HistoryBuilder.InnerSingleton;
}

// StaticRegisterNativesUDS_HistoryBuilder @ 14b4b8500

void __cdecl UDS_HistoryBuilder::StaticRegisterNativesUDS_HistoryBuilder(void)

{
  return;
}

// AddBool @ 14baef930

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddBool(UDS_HistoryBuilder *this,FName *param_1,bool *param_2)

{
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_00;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  bool *local_20;
  
  FVar1 = *param_1;
  this_00 = &(this->HistoryData).HistoryBoolMap;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryBoolMap.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryBoolMap.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryBoolMap.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryBoolMap.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryBoolMap.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,bool_const_&>_>
            ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,bool_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

// AddFloat @ 14baf03b0

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddFloat(UDS_HistoryBuilder *this,FName *param_1,float *param_2)

{
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  float *local_20;
  
  FVar1 = *param_1;
  this_00 = &(this->HistoryData).HistoryFloatMap;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryFloatMap.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryFloatMap.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryFloatMap.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryFloatMap.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryFloatMap.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,float_const_&>_>
            ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,float_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

// AddInt32 @ 14baf0500

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddInt32(UDS_HistoryBuilder *this,FName *param_1,int *param_2)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  int *local_20;
  
  FVar1 = *param_1;
  this_00 = &(this->HistoryData).HistoryInt32Map;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryInt32Map.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryInt32Map.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryInt32Map.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryInt32Map.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryInt32Map.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,int_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

// AddInt64 @ 14baf05c0

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddInt64(UDS_HistoryBuilder *this,FName *param_1,long64 *param_2)

{
  TMap<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_> *this_00;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  long64 *local_20;
  
  FVar1 = *param_1;
  this_00 = &(this->HistoryData).HistoryInt64Map;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryInt64Map.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryInt64Map.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryInt64Map.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryInt64Map.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryInt64Map.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,__int64_const_&>_>
            ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,__int64_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

// AddString @ 14baf16f0

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddString(UDS_HistoryBuilder *this,FName *param_1,FString *param_2)

{
  undefined1 *puVar1;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this_00;
  int iVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  FVar4 = *param_1;
  this_00 = &(this->HistoryData).HistoryStringMap;
  uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  iVar2 = *(int *)&(this->HistoryData).HistoryStringMap.field_0x34;
  puVar1 = &(this->HistoryData).HistoryStringMap.field_0x8;
  if (*(int *)puVar1 != iVar2) {
    puVar10 = *(undefined1 **)&(this->HistoryData).HistoryStringMap.field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->HistoryData).HistoryStringMap.field_0x38;
    }
    iVar9 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->HistoryData).HistoryStringMap.field_0x48 - 1U &
                    FVar4.Number + uVar8) * 4);
    if (iVar9 != -1) {
      do {
        if (*(FName *)((longlong)iVar9 * 0x20 + *(longlong *)&this_00->field_0x0) == FVar4) {
          return this;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar9 != -1);
    }
  }
  if (iVar2 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this_00,(int *)puVar1,
                       (int *)&(this->HistoryData).HistoryStringMap.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->HistoryData).HistoryStringMap.field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->HistoryData).HistoryStringMap.field_0x30;
    lVar5 = *(longlong *)&this_00->field_0x0;
    iVar3 = *(int *)((longlong)iVar9 * 0x20 + 4 + lVar5);
    *(int *)&(this->HistoryData).HistoryStringMap.field_0x30 = iVar3;
    *(int *)&(this->HistoryData).HistoryStringMap.field_0x34 = iVar2 + -1;
    if (iVar2 + -1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_28,iVar9);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    ::FString::FString((FString *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
  uVar8 = (int)((ulonglong)uVar6 >> 0x20) + uVar8;
  bVar7 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                      *)this_00,uVar8,local_28.Pointer,local_res8,(bool *)0x0);
  if (!bVar7) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    RehashOrLink((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)this_00,uVar8,local_28.Pointer,local_res8[0]);
  }
  return this;
}

// AddUInt32 @ 14baf1dd0

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddUInt32(UDS_HistoryBuilder *this,FName *param_1,uint *param_2)

{
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *this_00;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  uint *local_20;
  
  FVar1 = *param_1;
  this_00 = &(this->HistoryData).HistoryUInt32Map;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryUInt32Map.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryUInt32Map.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryUInt32Map.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryUInt32Map.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryUInt32Map.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_int_const_&> *)&stack0x00000008,
             (bool *)&local_28);
  return this;
}

// AddUInt64 @ 14baf1e90

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddUInt64(UDS_HistoryBuilder *this,FName *param_1,ulong64 *param_2)

{
  TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
  *this_00;
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FName *local_28;
  ulong64 *local_20;
  
  FVar1 = *param_1;
  this_00 = &(this->HistoryData).HistoryUInt64Map;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryUInt64Map.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryUInt64Map.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryUInt64Map.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryUInt64Map.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryUInt64Map.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned___int64_const_&>_>
            ((TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned___int64_const_&> *)&stack0x00000008
             ,(bool *)&local_28);
  return this;
}

// AddUObject @ 14baf1f50

UDS_HistoryBuilder * __thiscall
UDS_HistoryBuilder::AddUObject
          (UDS_HistoryBuilder *this,FName *param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> param_2)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res18 [2];
  FName *local_28;
  FWeakObjectPtr *local_20;
  
  FVar1 = *param_1;
  local_res18[0] = param_2.WeakPtr;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->HistoryData).HistoryObjectMap.field_0x8 !=
      *(int *)&(this->HistoryData).HistoryObjectMap.field_0x34) {
    puVar5 = *(undefined1 **)&(this->HistoryData).HistoryObjectMap.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HistoryData).HistoryObjectMap.field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->HistoryData).HistoryObjectMap.field_0x48 - 1U &
                              FVar1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->HistoryData).HistoryObjectMap;
      do {
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == FVar1) {
          return this;
        }
        iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_20 = local_res18;
  local_28 = param_1;
  TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            ((TSet<TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&(this->HistoryData).HistoryObjectMap,
             (TPairInitializer<FName_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)
             &stack0x00000008,(bool *)&local_28);
  return this;
}

// Build @ 14baf5f90

FDS_HistoryData * __thiscall
UDS_HistoryBuilder::Build(UDS_HistoryBuilder *this,FDS_HistoryData *__return_storage_ptr__)

{
  FDS_HistoryData::FDS_HistoryData(__return_storage_ptr__,&this->HistoryData);
  return __return_storage_ptr__;
}

