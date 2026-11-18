// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b448120

UClass * __cdecl UDS_ChattingDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChattingDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChattingDataSet",
               &Z_Registration_Info_UClass_UDS_ChattingDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ChattingDataSet,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChattingDataSet>,
               InternalVTableHelperCtorCaller<UDS_ChattingDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChattingDataSet.InnerSingleton;
}

// UDS_ChattingDataSet @ 14b44e1d0

UDS_ChattingDataSet * __thiscall
UDS_ChattingDataSet::UDS_ChattingDataSet(UDS_ChattingDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ChattingDataSet__6B_;
  *(undefined8 *)&this->ChattingDataMap = 0;
  *(undefined8 *)&(this->ChattingDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x48 = 0;
  *(undefined8 *)&this->ChattingDataCacheMap = 0;
  *(undefined8 *)&(this->ChattingDataCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingDataCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingDataCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x48 = 0;
  *(undefined8 *)&this->WhisperCacheMap = 0;
  *(undefined8 *)&(this->WhisperCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->WhisperCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x34 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WhisperCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x48 = 0;
  return this;
}

// UDS_ChattingDataSet @ 14b44e2c0

UDS_ChattingDataSet * __thiscall
UDS_ChattingDataSet::UDS_ChattingDataSet(UDS_ChattingDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ChattingDataSet__6B_;
  *(undefined8 *)&this->ChattingDataMap = 0;
  *(undefined8 *)&(this->ChattingDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingDataMap).field_0x48 = 0;
  *(undefined8 *)&this->ChattingDataCacheMap = 0;
  *(undefined8 *)&(this->ChattingDataCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingDataCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingDataCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x48 = 0;
  *(undefined8 *)&this->WhisperCacheMap = 0;
  *(undefined8 *)&(this->WhisperCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->WhisperCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x34 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WhisperCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x48 = 0;
  return this;
}

// ~UDS_ChattingDataSet @ 14b4508c0

void __thiscall UDS_ChattingDataSet::~UDS_ChattingDataSet(UDS_ChattingDataSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ChattingDataSet__6B_;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WhisperCacheMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WhisperCacheMap);
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChattingDataCacheMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChattingDataCacheMap);
  *(undefined4 *)&(this->ChattingDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChattingDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChattingDataMap);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b454470

UClass * __cdecl UDS_ChattingDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChattingDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChattingDataSet",
               &Z_Registration_Info_UClass_UDS_ChattingDataSet.InnerSingleton,
               StaticRegisterNativesUDS_ChattingDataSet,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChattingDataSet>,
               InternalVTableHelperCtorCaller<UDS_ChattingDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChattingDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_ChattingDataSet @ 14b455180

void __cdecl UDS_ChattingDataSet::StaticRegisterNativesUDS_ChattingDataSet(void)

{
  return;
}

// AddChattingData @ 14ba35020

void __thiscall
UDS_ChattingDataSet::AddChattingData(UDS_ChattingDataSet *this,TObjectPtr<UDS_ChattingData> param_1)

{
  TMap<EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingDataCache,0>_>
  *this_00;
  byte bVar1;
  ulong64 uVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  longlong lVar7;
  undefined1 *puVar8;
  TPairInitializer<FString_const_&,TObjectPtr<UDS_ChattingData>_&> local_res10;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  TPairInitializer<FString_const_&,TObjectPtr<UDS_ChattingData>_&> *local_40;
  TObjectPtr<UDS_ChattingData>_u_0 local_38;
  
  local_res10.Key = *(FString **)param_1.field0_0x0;
  if ((UObject *)local_res10.Key != (UObject *)0x0) {
    uVar2 = *(ulong64 *)&((UObject *)((longlong)local_res10.Key + 0x50))->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)local_res10.Key);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,uVar2,(TObjectPtr<UDS_DataBase>)&local_res10);
    if (1 < *(int *)(*(longlong *)param_1.field0_0x0 + 0xb0)) {
      local_40 = (TPairInitializer<FString_const_&,TObjectPtr<UDS_ChattingData>_&> *)
                 (*(longlong *)param_1.field0_0x0 + 0xa8);
      local_38 = param_1.field0_0x0;
      TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UDS_ChattingData>_&>_>
                ((TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)&this->ChattingDataMap,&local_res10,(bool *)&local_40);
    }
    FVar3 = *(FWeakObjectPtr *)param_1.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (FVar3 != (FWeakObjectPtr)0x0) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_res10.Key = (FString *)FVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res10);
    local_res20 = local_48;
    bVar4 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_res20);
      this_00 = &this->ChattingDataCacheMap;
      bVar1 = pUVar6[2].field_0x10;
      local_res10.Key = (FString *)CONCAT71(local_res10.Key._1_7_,bVar1);
      if (*(int *)&(this->ChattingDataCacheMap).field_0x8 !=
          *(int *)&(this->ChattingDataCacheMap).field_0x34) {
        puVar8 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x40;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(this->ChattingDataCacheMap).field_0x38;
        }
        iVar5 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->ChattingDataCacheMap).field_0x48 - 1)
                                  & (ulonglong)bVar1) * 4);
        if (iVar5 != -1) {
          do {
            lVar7 = *(longlong *)this_00 + (longlong)iVar5 * 0x28;
            if (*(byte *)(*(longlong *)this_00 + (longlong)iVar5 * 0x28) == bVar1) {
              if (lVar7 != 0) goto LAB_14ba351ab;
              break;
            }
            iVar5 = *(int *)(lVar7 + 0x20);
          } while (iVar5 != -1);
        }
      }
      local_40 = &local_res10;
      TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_ChattingType_const_&>_>
                (this_00,(int)&local_res10 + 8,
                 (TKeyInitializer<EDS_ChattingType_const_&> *)(ulonglong)bVar1,(bool *)&local_40);
      lVar7 = *(longlong *)this_00 + (longlong)(int)local_res10.Value * 0x28;
LAB_14ba351ab:
      iVar5 = *(int *)(lVar7 + 0x10);
      if (iVar5 == *(int *)(lVar7 + 0x14)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)(lVar7 + 8),(int *)(lVar7 + 0x14));
      }
      *(int *)(lVar7 + 0x10) = iVar5 + 1;
      *(FWeakObjectPtr *)(((ForAnyElementType *)(lVar7 + 8))->Data + (longlong)iVar5 * 8) =
           local_res20;
      pUVar6 = FWeakObjectPtr::Get(&local_res20);
      if (*(char *)(pUVar6 + 5) == '\0') {
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      }
    }
    pUVar6 = *(UObject **)param_1.field0_0x0;
    if (pUVar6[2].field_0x10 == '\n') {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
      }
      local_res10.Key = (FString *)0x0;
      local_res10.Value = (TObjectPtr<UDS_ChattingData> *)pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_res10.Value);
      AddToWhisperIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res10.Key);
    }
    RemoveOldChattingData(this);
  }
  return;
}

// AddToTypeIndex @ 14ba36800

void __thiscall
UDS_ChattingDataSet::AddToTypeIndex
          (UDS_ChattingDataSet *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined1 *puVar5;
  TMap<EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingDataCache,0>_>
  *this_00;
  FWeakObjectPtr local_res10;
  byte local_res18 [8];
  int local_res20 [2];
  byte *local_18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    this_00 = &this->ChattingDataCacheMap;
    local_res18[0] = pUVar3[2].field_0x10;
    if (*(int *)&(this->ChattingDataCacheMap).field_0x8 !=
        *(int *)&(this->ChattingDataCacheMap).field_0x34) {
      puVar5 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(this->ChattingDataCacheMap).field_0x38;
      }
      iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->ChattingDataCacheMap).field_0x48 - 1) &
                                (ulonglong)local_res18[0]) * 4);
      if (iVar2 != -1) {
        do {
          lVar4 = *(longlong *)this_00 + (longlong)iVar2 * 0x28;
          if (*(byte *)(*(longlong *)this_00 + (longlong)iVar2 * 0x28) == local_res18[0]) {
            if (lVar4 != 0) goto LAB_14ba368c4;
            break;
          }
          iVar2 = *(int *)(lVar4 + 0x20);
        } while (iVar2 != -1);
      }
    }
    local_18[0] = local_res18;
    TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_ChattingType_const_&>_>
              (this_00,(uint)local_res20,
               (TKeyInitializer<EDS_ChattingType_const_&> *)(ulonglong)local_res18[0],
               (bool *)local_18);
    lVar4 = *(longlong *)this_00 + (longlong)local_res20[0] * 0x28;
LAB_14ba368c4:
    iVar2 = *(int *)(lVar4 + 0x10);
    if (iVar2 == *(int *)(lVar4 + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)(lVar4 + 8),(int *)(lVar4 + 0x14));
    }
    *(int *)(lVar4 + 0x10) = iVar2 + 1;
    *(FWeakObjectPtr *)(((ForAnyElementType *)(lVar4 + 8))->Data + (longlong)iVar2 * 8) =
         local_res10;
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    if (*(char *)(pUVar3 + 5) == '\0') {
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    }
  }
  return;
}

// AddToWhisperIndex @ 14ba36920

void __thiscall
UDS_ChattingDataSet::AddToWhisperIndex
          (UDS_ChattingDataSet *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined1 *puVar5;
  TMap<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
  *this_00;
  uint uVar6;
  FWeakObjectPtr local_res10;
  int local_res18 [2];
  longlong local_res20;
  longlong *local_18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (((bVar1) && (pUVar3 = FWeakObjectPtr::Get(&local_res10), pUVar3[2].field_0x10 == '\n')) &&
     (pUVar3 = FWeakObjectPtr::Get(&local_res10), pUVar3[2].field_0x10 == '\n')) {
    lVar4 = 0x80;
    if (pUVar3[5].field_0x1 != '\x01') {
      lVar4 = 0x68;
    }
    local_res20 = *(longlong *)(&pUVar3->field_0x0 + lVar4);
    if (0 < local_res20) {
      this_00 = &this->WhisperCacheMap;
      uVar6 = (int)((ulonglong)local_res20 >> 0x20) * 0x17 + (int)local_res20;
      if (*(int *)&(this->WhisperCacheMap).field_0x8 != *(int *)&(this->WhisperCacheMap).field_0x34)
      {
        puVar5 = *(undefined1 **)&(this->WhisperCacheMap).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this->WhisperCacheMap).field_0x38;
        }
        iVar2 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this->WhisperCacheMap).field_0x48 - 1U & uVar6) * 4);
        if (iVar2 != -1) {
          do {
            lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x28;
            if (*(longlong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x28) ==
                local_res20) {
              if (lVar4 != 0) goto LAB_14ba36a27;
              break;
            }
            iVar2 = *(int *)(lVar4 + 0x20);
          } while (iVar2 != -1);
        }
      }
      local_18[0] = &local_res20;
      TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                ((TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
                  *)this_00,(uint)local_res18,(TKeyInitializer<__int64_const_&> *)(ulonglong)uVar6,
                 (bool *)local_18);
      lVar4 = *(longlong *)&this_00->field_0x0 + (longlong)local_res18[0] * 0x28;
LAB_14ba36a27:
      iVar2 = *(int *)(lVar4 + 0x10);
      if (iVar2 == *(int *)(lVar4 + 0x14)) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)(lVar4 + 8),(int *)(lVar4 + 0x14));
      }
      *(int *)(lVar4 + 0x10) = iVar2 + 1;
      *(FWeakObjectPtr *)(((ForAnyElementType *)(lVar4 + 8))->Data + (longlong)iVar2 * 8) =
           local_res10;
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      if (*(char *)(pUVar3 + 5) == '\0') {
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      }
    }
  }
  return;
}

// CheckMessageID @ 14ba38b60

bool __thiscall UDS_ChattingDataSet::CheckMessageID(UDS_ChattingDataSet *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&this->ChattingDataMap,uVar2,param_1);
  return iVar3 != -1;
}

// ClearAllData @ 14ba39ab0

void __thiscall UDS_ChattingDataSet::ClearAllData(UDS_ChattingDataSet *this)

{
  undefined1 *puVar1;
  TMap<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
  *this_00;
  TMap<EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingDataCache,0>_>
  *this_01;
  TMap<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
  *this_02;
  int iVar2;
  bool bVar3;
  
  UDS_DataSetBase::ClearAllData((UDS_DataSetBase *)this);
  this_00 = &this->ChattingDataMap;
  UDS_ChattingData::ChattingDataIndex = 0;
  bVar3 = 1 < *(int *)&(this->ChattingDataMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ChattingDataMap).field_0x8);
  puVar1 = &(this->ChattingDataMap).field_0xc;
  *(undefined4 *)&(this->ChattingDataMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChattingDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChattingDataMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ChattingDataMap).field_0x2c;
  *(undefined4 *)&(this->ChattingDataMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ChattingDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChattingDataMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ChattingDataMap).field_0x48 = 1;
    TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->ChattingDataCacheMap;
  bVar3 = 1 < *(int *)&(this->ChattingDataCacheMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_01,0,*(int *)&(this->ChattingDataCacheMap).field_0x8);
  puVar1 = &(this->ChattingDataCacheMap).field_0xc;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ChattingDataCacheMap).field_0x2c;
  *(undefined4 *)&(this->ChattingDataCacheMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ChattingDataCacheMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChattingDataCacheMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ChattingDataCacheMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  this_02 = &this->WhisperCacheMap;
  bVar3 = 1 < *(int *)&(this->WhisperCacheMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->WhisperCacheMap).field_0x8);
  puVar1 = &(this->WhisperCacheMap).field_0xc;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WhisperCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->WhisperCacheMap).field_0x2c;
  *(undefined4 *)&(this->WhisperCacheMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->WhisperCacheMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WhisperCacheMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->WhisperCacheMap).field_0x48 = 1;
    TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
              *)this_02);
  }
  return;
}

// GetChattingDatas @ 14ba45d30

void __thiscall
UDS_ChattingDataSet::GetChattingDatas
          (UDS_ChattingDataSet *this,ulong64 param_1,long64 param_2,
          TArray<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_3,bool param_4,bool param_5)

{
  FWeakObjectPtr *pFVar1;
  ulonglong uVar2;
  EDS_ChattingType EVar3;
  uint uVar4;
  code *pcVar5;
  TMap<EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingDataCache,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FDS_ChattingDataCache *pFVar10;
  UObject *pUVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  FWeakObjectPtr *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  FIdentityFunctor local_res18 [8];
  uint local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2 [2];
  TMap<EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingDataCache,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  TMap<EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingDataCache,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_2 < 1) {
    iStack_98 = 0;
    puVar12 = &(this->ChattingDataCacheMap).field_0x10;
    iVar9 = *(int *)&(this->ChattingDataCacheMap).field_0x28;
    local_a0 = &this->ChattingDataCacheMap;
    uStack_94 = 1;
    local_80 = 0;
    iStack_84 = 0;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ChattingDataCacheMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar12;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar14 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iStack_84 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ba45f8d;
        uVar16 = puVar18[lVar14 + 1];
      }
      uStack_94 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_94 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_70 = (int)lVar14;
      iStack_84 = local_80 + -1 + local_70;
      if (iVar9 < iStack_84) {
        iStack_84 = iVar9;
      }
    }
LAB_14ba45f8d:
    uVar16 = *(uint *)&(this->ChattingDataCacheMap).field_0x28;
    uVar19 = uVar16 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
    iStack_78 = *(int *)&(this->ChattingDataCacheMap).field_0x8 -
                *(int *)&(this->ChattingDataCacheMap).field_0x34;
    uStack_88 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_84;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar8 = (int)uVar16 >> 5;
    TStack_60._28_4_ = iStack_84;
    TStack_60.BaseBitIndex = local_80;
    uStack_40 = CONCAT44(uStack_74,iStack_78);
    local_90 = puVar12;
    iStack_7c = iStack_84;
    local_68 = local_a0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
    if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(this->ChattingDataCacheMap).field_0x28;
    local_a8 = uVar16;
    if (uVar16 != uVar4) {
      puVar17 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar12;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar8 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar8;
        uVar19 = uVar19 + 0x20;
        iVar8 = iVar8 + 1;
        uVar16 = uVar4;
        local_a8 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_14ba460a0;
        uVar16 = *(uint *)(puVar17 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar16 = (int)lVar14 + -1 + uVar19;
      local_a8 = uVar16;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
        local_a8 = uVar4;
      }
    }
LAB_14ba460a0:
    while( true ) {
      pTVar6 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a3);
      }
      if (((TStack_60.CurrentBitIndex == uVar16) &&
          (TStack_60.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChattingDataCacheMap).field_0x10)) &&
         (pTVar6 == &this->ChattingDataCacheMap)) break;
      lVar14 = *(longlong *)pTVar6;
      EVar3 = *(EDS_ChattingType *)(lVar14 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      lVar14 = lVar14 + (longlong)TStack_60.CurrentBitIndex * 0x28;
      if ((param_1 >> ((ulonglong)EVar3 & 0x3f) & 1) != 0) {
        pFVar15 = *(FWeakObjectPtr **)(lVar14 + 8);
        iVar9 = *(int *)(lVar14 + 0x10);
        pFVar1 = pFVar15 + iVar9;
        while( true ) {
          if (*(int *)(lVar14 + 0x10) != iVar9) {
            `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_a2);
          }
          if (pFVar15 == pFVar1) break;
          bVar7 = FWeakObjectPtr::IsValid(pFVar15);
          if (bVar7) {
            iVar8 = param_3->ArrayNum;
            if (iVar8 == param_3->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar8 + 1;
            *(FWeakObjectPtr *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = *pFVar15;
          }
          pFVar15 = pFVar15 + 1;
        }
        uVar16 = local_a8;
        if (param_5) {
          MarkAllAsReadByType(this,EVar3);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    if (param_4) {
      AlgoImpl::
      IntroSortInternal<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&)>
                ((TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *)
                 (param_3->AllocatorInstance).Data,param_3->ArrayNum,local_res18[0],
                 UDS_ChattingData::SortChatData);
    }
  }
  else {
    pFVar10 = TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
              ::Find((TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                      *)&this->WhisperCacheMap,param_2);
    if (pFVar10 != (FDS_ChattingDataCache *)0x0) {
      pFVar15 = (FWeakObjectPtr *)(pFVar10->DataList).AllocatorInstance.Data;
      iVar9 = (pFVar10->DataList).ArrayNum;
      pFVar1 = pFVar15 + iVar9;
      while( true ) {
        if ((pFVar10->DataList).ArrayNum != iVar9) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar15 == pFVar1) break;
        bVar7 = FWeakObjectPtr::IsValid(pFVar15);
        if (bVar7) {
          iVar8 = param_3->ArrayNum;
          if (iVar8 == param_3->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar8 + 1;
          *(FWeakObjectPtr *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = *pFVar15;
        }
        pFVar15 = pFVar15 + 1;
      }
    }
    if (((param_5) &&
        (pFVar10 = TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                   ::Find((TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                           *)&this->WhisperCacheMap,param_2),
        pFVar10 != (FDS_ChattingDataCache *)0x0)) && (iVar9 = pFVar10->UnreadCount, iVar9 != 0)) {
      pFVar10->UnreadCount = 0;
      pFVar15 = (FWeakObjectPtr *)(pFVar10->DataList).AllocatorInstance.Data;
      iVar8 = (pFVar10->DataList).ArrayNum;
      pFVar1 = pFVar15 + iVar8;
      while( true ) {
        if ((pFVar10->DataList).ArrayNum != iVar8) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_a4);
        }
        if (pFVar15 == pFVar1) break;
        bVar7 = FWeakObjectPtr::IsValid(pFVar15);
        if ((bVar7) && (pUVar11 = FWeakObjectPtr::Get(pFVar15), *(char *)(pUVar11 + 5) == '\0')) {
          pUVar11 = FWeakObjectPtr::Get(pFVar15);
          *(undefined1 *)(pUVar11 + 5) = 1;
        }
        pFVar15 = pFVar15 + 1;
      }
      if (*(int *)&(this->ChattingDataCacheMap).field_0x8 !=
          *(int *)&(this->ChattingDataCacheMap).field_0x34) {
        puVar12 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x40;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = &(this->ChattingDataCacheMap).field_0x38;
        }
        iVar8 = *(int *)(puVar12 +
                        (ulonglong)(*(int *)&(this->ChattingDataCacheMap).field_0x48 - 1U & 10) * 4)
        ;
        if (iVar8 != -1) {
          do {
            lVar14 = *(longlong *)&this->ChattingDataCacheMap + (longlong)iVar8 * 0x28;
            if (*(char *)(*(longlong *)&this->ChattingDataCacheMap + (longlong)iVar8 * 0x28) == '\n'
               ) {
              lVar13 = lVar14 + 8;
              if (lVar14 == 0) {
                lVar13 = 0;
              }
              if (lVar13 == 0) {
                return;
              }
              iVar9 = *(int *)(lVar13 + 0x10) - iVar9;
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              *(int *)(lVar13 + 0x10) = iVar9;
              return;
            }
            iVar8 = *(int *)(lVar14 + 0x20);
          } while (iVar8 != -1);
        }
      }
    }
  }
  return;
}

// GetChattingDatasByWhisper @ 14ba461d0

void __thiscall
UDS_ChattingDataSet::GetChattingDatasByWhisper
          (UDS_ChattingDataSet *this,long64 param_1,
          TArray<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FDS_ChattingDataCache *pFVar5;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  pFVar5 = TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
           ::Find((TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                   *)&this->WhisperCacheMap,param_1);
  if (pFVar5 != (FDS_ChattingDataCache *)0x0) {
    this_00 = (FWeakObjectPtr *)(pFVar5->DataList).AllocatorInstance.Data;
    iVar2 = (pFVar5->DataList).ArrayNum;
    pFVar1 = this_00 + iVar2;
    while( true ) {
      if ((pFVar5->DataList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      bVar3 = FWeakObjectPtr::IsValid(this_00);
      if (bVar3) {
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        *(FWeakObjectPtr *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = *this_00;
      }
      this_00 = this_00 + 1;
    }
  }
  return;
}

// GetTotalUnreadCount @ 14ba50ee0

int __thiscall
UDS_ChattingDataSet::GetTotalUnreadCount(UDS_ChattingDataSet *this,EDS_ChattingType param_1)

{
  int iVar1;
  
  iVar1 = GetUnreadCountByTypeFlag(this,0xffffffffffffffff);
  return iVar1;
}

// GetUnreadCountByType @ 14ba51010

int __thiscall
UDS_ChattingDataSet::GetUnreadCountByType(UDS_ChattingDataSet *this,EDS_ChattingType param_1)

{
  FDS_ChattingDataCache *pFVar1;
  
  pFVar1 = TMapBase<enum_EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>_>
           ::Find(&this->ChattingDataCacheMap,param_1);
  if (pFVar1 != (FDS_ChattingDataCache *)0x0) {
    return pFVar1->UnreadCount;
  }
  return 0;
}

// GetUnreadCountByTypeFlag @ 14ba51040

int __thiscall
UDS_ChattingDataSet::GetUnreadCountByTypeFlag(UDS_ChattingDataSet *this,ulong64 param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  ulong64 local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ChattingDataCacheMap).field_0x10;
  iVar8 = *(int *)&(this->ChattingDataCacheMap).field_0x28;
  iVar13 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->ChattingDataCacheMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iVar14 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar8;
      if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iVar13) goto LAB_14ba510ed;
      uVar12 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar14;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14ba510ed:
  uVar12 = *(uint *)&(this->ChattingDataCacheMap).field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChattingDataCacheMap).field_0x8 -
                       *(int *)&(this->ChattingDataCacheMap).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  uVar4 = local_res10;
  uVar6 = *(uint *)&(this->ChattingDataCacheMap).field_0x28;
  if (uVar12 != uVar6) {
    puVar10 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar13) goto LAB_14ba511f0;
      uVar12 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14ba511f0:
  while( true ) {
    if (*(int *)&(this->ChattingDataCacheMap).field_0x8 -
        *(int *)&(this->ChattingDataCacheMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((uVar4 >> ((ulonglong)
                   *(byte *)(*(longlong *)&this->ChattingDataCacheMap +
                            (longlong)TStack_60.CurrentBitIndex * 0x28) & 0x3f) & 1) != 0) {
      iVar11 = iVar11 + *(int *)(*(longlong *)&this->ChattingDataCacheMap +
                                 (longlong)TStack_60.CurrentBitIndex * 0x28 + 0x18);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return iVar11;
}

// GetUnreadCountByWhisper @ 14ba51270

int __thiscall
UDS_ChattingDataSet::GetUnreadCountByWhisper(UDS_ChattingDataSet *this,long64 param_1)

{
  FDS_ChattingDataCache *pFVar1;
  
  pFVar1 = TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
           ::Find((TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                   *)&this->WhisperCacheMap,param_1);
  if (pFVar1 != (FDS_ChattingDataCache *)0x0) {
    return pFVar1->UnreadCount;
  }
  return 0;
}

// MarkAllAsReadByType @ 14ba5dc00

void __thiscall
UDS_ChattingDataSet::MarkAllAsReadByType(UDS_ChattingDataSet *this,EDS_ChattingType param_1)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FDS_ChattingDataCache *pFVar9;
  UObject *pUVar10;
  longlong lVar11;
  FWeakObjectPtr *this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar9 = TMapBase<enum_EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>_>
           ::Find(&this->ChattingDataCacheMap,param_1);
  if ((pFVar9 != (FDS_ChattingDataCache *)0x0) && (pFVar9->UnreadCount != 0)) {
    pFVar9->UnreadCount = 0;
    this_00 = (FWeakObjectPtr *)(pFVar9->DataList).AllocatorInstance.Data;
    iVar4 = (pFVar9->DataList).ArrayNum;
    pFVar2 = this_00 + iVar4;
    while( true ) {
      if ((pFVar9->DataList).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar2) break;
      bVar6 = FWeakObjectPtr::IsValid(this_00);
      if ((bVar6) && (pUVar10 = FWeakObjectPtr::Get(this_00), *(char *)(pUVar10 + 5) == '\0')) {
        pUVar10 = FWeakObjectPtr::Get(this_00);
        *(undefined1 *)(pUVar10 + 5) = 1;
      }
      this_00 = this_00 + 1;
    }
    if (param_1 == Whisper) {
      puVar1 = &(this->WhisperCacheMap).field_0x10;
      iVar4 = *(int *)&(this->WhisperCacheMap).field_0x28;
      iVar14 = 0;
      iVar16 = 0;
      uVar7 = 1;
      iVar8 = 0;
      if (iVar4 != 0) {
        puVar17 = *(uint **)&(this->WhisperCacheMap).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar8 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ba5dd4d;
          uVar13 = puVar17[lVar11 + 1];
        }
        uVar7 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar7 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        iVar8 = iVar16 + -1 + local_res20;
        if (iVar4 < iVar8) {
          iVar8 = iVar4;
        }
      }
LAB_14ba5dd4d:
      uVar13 = *(uint *)&(this->WhisperCacheMap).field_0x28;
      uVar12 = uVar13 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar7,iVar14);
      TStack_60.CurrentBitIndex = iVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_60._28_4_ = iVar8;
      TStack_60.BaseBitIndex = iVar16;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(this->WhisperCacheMap).field_0x8 -
                           *(int *)&(this->WhisperCacheMap).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = *(uint *)&(this->WhisperCacheMap).field_0x28;
      if (uVar13 != uVar7) {
        puVar15 = *(undefined1 **)&(this->WhisperCacheMap).field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar11 = (longlong)iVar14;
          uVar12 = uVar12 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14ba5de50;
          uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar13 = (int)lVar11 + -1 + uVar12;
        if ((int)uVar7 < (int)uVar13) {
          uVar13 = uVar7;
        }
      }
LAB_14ba5de50:
      while( true ) {
        if (*(int *)&(this->WhisperCacheMap).field_0x8 - *(int *)&(this->WhisperCacheMap).field_0x34
            != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<__int64,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TStack_60.CurrentBitIndex == uVar13) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        *(undefined4 *)
         (*(longlong *)&this->WhisperCacheMap + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x28) =
             0;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return;
}

// MarkAllAsReadByTypeFlag @ 14ba5ded0

void __thiscall
UDS_ChattingDataSet::MarkAllAsReadByTypeFlag(UDS_ChattingDataSet *this,ulong64 param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  EDS_ChattingType EVar3;
  int iVar4;
  code *pcVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  ulong64 local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  puVar1 = &(this->ChattingDataCacheMap).field_0x10;
  iVar4 = *(int *)&(this->ChattingDataCacheMap).field_0x28;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->ChattingDataCacheMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba5df7d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14ba5df7d:
  uVar12 = *(uint *)&(this->ChattingDataCacheMap).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChattingDataCacheMap).field_0x8 -
                       *(int *)&(this->ChattingDataCacheMap).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = local_res10;
  uVar8 = *(uint *)&(this->ChattingDataCacheMap).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ba5e080;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14ba5e080:
  while( true ) {
    if (*(int *)&(this->ChattingDataCacheMap).field_0x8 -
        *(int *)&(this->ChattingDataCacheMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    EVar3 = *(EDS_ChattingType *)
             (*(longlong *)&this->ChattingDataCacheMap + (longlong)TStack_60.CurrentBitIndex * 0x28)
    ;
    if ((uVar6 >> ((ulonglong)EVar3 & 0x3f) & 1) != 0) {
      MarkAllAsReadByType(this,EVar3);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// MarkAllAsReadByWhisper @ 14ba5e100

void __thiscall
UDS_ChattingDataSet::MarkAllAsReadByWhisper(UDS_ChattingDataSet *this,long64 param_1)

{
  FWeakObjectPtr *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  FDS_ChattingDataCache *pFVar5;
  UObject *pUVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  
  pFVar5 = TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
           ::Find((TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                   *)&this->WhisperCacheMap,param_1);
  if ((pFVar5 != (FDS_ChattingDataCache *)0x0) && (iVar4 = pFVar5->UnreadCount, iVar4 != 0)) {
    pFVar5->UnreadCount = 0;
    this_00 = (FWeakObjectPtr *)(pFVar5->DataList).AllocatorInstance.Data;
    iVar9 = (pFVar5->DataList).ArrayNum;
    pFVar1 = this_00 + iVar9;
    while( true ) {
      if ((pFVar5->DataList).ArrayNum != iVar9) {
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar1) break;
      bVar3 = FWeakObjectPtr::IsValid(this_00);
      if ((bVar3) && (pUVar6 = FWeakObjectPtr::Get(this_00), *(char *)(pUVar6 + 5) == '\0')) {
        pUVar6 = FWeakObjectPtr::Get(this_00);
        *(undefined1 *)(pUVar6 + 5) = 1;
      }
      this_00 = this_00 + 1;
    }
    if (*(int *)&(this->ChattingDataCacheMap).field_0x8 !=
        *(int *)&(this->ChattingDataCacheMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->ChattingDataCacheMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->ChattingDataCacheMap).field_0x38;
      }
      iVar9 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->ChattingDataCacheMap).field_0x48 - 1U & 10) * 4);
      if (iVar9 != -1) {
        while (lVar2 = *(longlong *)&this->ChattingDataCacheMap + (longlong)iVar9 * 0x28,
              *(char *)(*(longlong *)&this->ChattingDataCacheMap + (longlong)iVar9 * 0x28) != '\n')
        {
          iVar9 = *(int *)(lVar2 + 0x20);
          if (iVar9 == -1) {
            return;
          }
        }
        lVar8 = lVar2 + 8;
        if (lVar2 == 0) {
          lVar8 = 0;
        }
        if (lVar8 != 0) {
          iVar4 = *(int *)(lVar8 + 0x10) - iVar4;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          *(int *)(lVar8 + 0x10) = iVar4;
        }
      }
    }
  }
  return;
}

// RemoveChattingData @ 14ba65b80

void __thiscall
UDS_ChattingDataSet::RemoveChattingData
          (UDS_ChattingDataSet *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  ulong64 uVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    uVar1 = *(ulong64 *)&pUVar3[2].field_0x8;
    RemoveFromTypeIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res10[0]);
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    if (pUVar3[2].field_0x10 == '\n') {
      RemoveFromWhisperIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res10[0]);
    }
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    if (1 < *(int *)&pUVar3[4].field_0x10) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      TMapBase<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
      ::Remove((TMapBase<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
                *)&this->ChattingDataMap,(FString *)&pUVar3[4].field_0x8);
    }
    UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,uVar1);
  }
  return;
}

// RemoveChattingData @ 14ba65c30

void __thiscall
UDS_ChattingDataSet::RemoveChattingData(UDS_ChattingDataSet *this,EDS_ChattingType param_1)

{
  FObjectPtr_u_0 *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar1 = this_00 + iVar3;
  while( true ) {
    pUVar9 = (UObject *)0x0;
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar8 = Z_Construct_UClass_UDS_ChattingData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
      if (bVar5) {
        pUVar9 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res18[0].ObjectIndex = 0;
    local_res18[0].ObjectSerialNumber = 0;
    local_res8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res8);
    bVar5 = FWeakObjectPtr::IsValid(local_res18);
    if ((bVar5) && (pUVar9 = FWeakObjectPtr::Get(local_res18), pUVar9[2].field_0x10 == param_1)) {
      RemoveFromTypeIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res18[0]);
      if (param_1 == Whisper) {
        RemoveFromWhisperIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res18[0])
        ;
      }
      pUVar9 = FWeakObjectPtr::Get(local_res18);
      uVar4 = *(undefined8 *)&pUVar9[2].field_0x8;
      iVar6 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar6 + 1);
      *(undefined8 *)(local_48.Data + (longlong)iVar6 * 8) = uVar4;
      pUVar9 = FWeakObjectPtr::Get(local_res18);
      if ((1 < *(int *)&pUVar9[4].field_0x10) &&
         (pUVar9 = FWeakObjectPtr::Get(local_res18),
         *(int *)&(this->ChattingDataMap).field_0x8 != *(int *)&(this->ChattingDataMap).field_0x34))
      {
        iVar6 = *(int *)&pUVar9[4].field_0x10 + -1;
        if (*(int *)&pUVar9[4].field_0x10 == 0) {
          pwVar10 = L"";
          iVar6 = 0;
        }
        else {
          pwVar10 = *(wchar_t **)&pUVar9[4].field_0x8;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
        TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&this->ChattingDataMap,uVar7,(FString *)&pUVar9[4].field_0x8);
      }
    }
    this_00 = this_00 + 1;
  }
  iVar3 = (int)local_40;
  pFVar2 = local_48.Data + (longlong)(int)local_40 * 8;
  FVar11.Data = local_48.Data;
  while( true ) {
    if ((int)local_40 != iVar3) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar11.Data == pFVar2) break;
    UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,*(ulong64 *)FVar11.Data);
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// RemoveChattingData @ 14ba65e50

void __thiscall UDS_ChattingDataSet::RemoveChattingData(UDS_ChattingDataSet *this,long64 param_1)

{
  FObjectPtr_u_0 *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar1 = this_00 + iVar3;
  while( true ) {
    pUVar9 = (UObject *)0x0;
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar8 = Z_Construct_UClass_UDS_ChattingData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
      if (bVar5) {
        pUVar9 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res18[0].ObjectIndex = 0;
    local_res18[0].ObjectSerialNumber = 0;
    local_res8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res8);
    bVar5 = FWeakObjectPtr::IsValid(local_res18);
    if ((((bVar5) && (pUVar9 = FWeakObjectPtr::Get(local_res18), pUVar9[2].field_0x10 == '\n')) &&
        (0 < param_1)) &&
       ((*(longlong *)&pUVar9[2].field_0x18 == param_1 ||
        (*(longlong *)&pUVar9[3].field_0x8 == param_1)))) {
      RemoveFromTypeIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res18[0]);
      RemoveFromWhisperIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res18[0]);
      pUVar9 = FWeakObjectPtr::Get(local_res18);
      uVar4 = *(undefined8 *)&pUVar9[2].field_0x8;
      iVar6 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar6 + 1);
      *(undefined8 *)(local_48.Data + (longlong)iVar6 * 8) = uVar4;
      pUVar9 = FWeakObjectPtr::Get(local_res18);
      if ((1 < *(int *)&pUVar9[4].field_0x10) &&
         (pUVar9 = FWeakObjectPtr::Get(local_res18),
         *(int *)&(this->ChattingDataMap).field_0x8 != *(int *)&(this->ChattingDataMap).field_0x34))
      {
        iVar6 = *(int *)&pUVar9[4].field_0x10 + -1;
        if (*(int *)&pUVar9[4].field_0x10 == 0) {
          pwVar10 = L"";
          iVar6 = 0;
        }
        else {
          pwVar10 = *(wchar_t **)&pUVar9[4].field_0x8;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
        TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&this->ChattingDataMap,uVar7,(FString *)&pUVar9[4].field_0x8);
      }
    }
    this_00 = this_00 + 1;
  }
  iVar3 = (int)local_40;
  pFVar2 = local_48.Data + (longlong)(int)local_40 * 8;
  FVar11.Data = local_48.Data;
  while( true ) {
    if ((int)local_40 != iVar3) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar11.Data == pFVar2) break;
    UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,*(ulong64 *)FVar11.Data);
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// RemoveFromTypeIndex @ 14ba666b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_ChattingDataSet::RemoveFromTypeIndex
          (UDS_ChattingDataSet *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  EDS_ChattingType EVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_ChattingDataCache *this_00;
  int iVar4;
  FWeakObjectPtr local_res10;
  <lambda_1> local_res18;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    EVar1 = pUVar3[2].field_0x10;
    this_00 = TMapBase<enum_EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>_>
              ::Find(&this->ChattingDataCacheMap,EVar1);
    if (this_00 != (FDS_ChattingDataCache *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      if (*(char *)(pUVar3 + 5) == '\0') {
        iVar4 = this_00->UnreadCount + -1;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        this_00->UnreadCount = iVar4;
      }
      local_res18.chattingData = (UDS_ChattingData *)FWeakObjectPtr::Get(&local_res10);
      TArray<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_UDS_ChattingDataSet::RemoveFromTypeIndex_::__l2::<lambda_1>_>
                (&this_00->DataList,&local_res18,Default);
      if ((this_00->DataList).ArrayNum == 0) {
        local_res18.chattingData._0_1_ = EVar1;
        if (*(int *)&(this->ChattingDataCacheMap).field_0x8 !=
            *(int *)&(this->ChattingDataCacheMap).field_0x34) {
          TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
          ::RemoveImpl<enum_EDS_ChattingType>
                    (&this->ChattingDataCacheMap,(uint)EVar1,(EDS_ChattingType *)&local_res18);
        }
      }
    }
  }
  return;
}

// RemoveFromWhisperIndex @ 14ba66790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_ChattingDataSet::RemoveFromWhisperIndex
          (UDS_ChattingDataSet *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  UDS_ChattingData *pUVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_ChattingDataCache *this_00;
  int iVar4;
  longlong lVar5;
  FWeakObjectPtr local_res10;
  <lambda_1> local_res18;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (((bVar2) && (pUVar3 = FWeakObjectPtr::Get(&local_res10), pUVar3[2].field_0x10 == '\n')) &&
     (pUVar3 = FWeakObjectPtr::Get(&local_res10), pUVar3[2].field_0x10 == '\n')) {
    lVar5 = 0x80;
    if (pUVar3[5].field_0x1 != '\x01') {
      lVar5 = 0x68;
    }
    pUVar1 = *(UDS_ChattingData **)(&pUVar3->field_0x0 + lVar5);
    if ((0 < (longlong)pUVar1) &&
       (this_00 = TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                  ::Find((TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
                          *)&this->WhisperCacheMap,(long64)pUVar1),
       this_00 != (FDS_ChattingDataCache *)0x0)) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      if (*(char *)(pUVar3 + 5) == '\0') {
        iVar4 = this_00->UnreadCount + -1;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        this_00->UnreadCount = iVar4;
      }
      local_res18.chattingData = (UDS_ChattingData *)FWeakObjectPtr::Get(&local_res10);
      TArray<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_UDS_ChattingDataSet::RemoveFromWhisperIndex_::__l2::<lambda_1>_>
                (&this_00->DataList,&local_res18,Default);
      if (((this_00->DataList).ArrayNum == 0) &&
         (*(int *)&(this->WhisperCacheMap).field_0x8 != *(int *)&(this->WhisperCacheMap).field_0x34)
         ) {
        local_res18.chattingData = pUVar1;
        TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
        ::RemoveImpl<__int64>
                  ((TSet<TTuple<__int64,FDS_ChattingDataCache>,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>,FDefaultSetAllocator>
                    *)&this->WhisperCacheMap,(int)((ulonglong)pUVar1 >> 0x20) * 0x17 + (int)pUVar1,
                   (long64 *)&local_res18);
      }
    }
  }
  return;
}

// RemoveOldChattingData @ 14ba66ad0

ulong64 __thiscall UDS_ChattingDataSet::RemoveOldChattingData(UDS_ChattingDataSet *this)

{
  FObjectPtr_u_0 *pFVar1;
  FWeakObjectPtr *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  ulong64 uVar8;
  UObject *pUVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  UObject *pUVar12;
  longlong lVar13;
  uint uVar14;
  FObjectPtr_u_0 *this_01;
  int iVar15;
  FIdentityFunctor local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  iVar5 = (int)this->_padding_;
  if (iVar5 < 0x1f5) {
    return 0;
  }
  pUVar9 = (UObject *)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar15 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar5,&local_58,0,(int *)((longlong)&local_50 + 4));
  this_01 = (FObjectPtr_u_0 *)this->_padding_;
  iVar5 = (int)this->_padding_;
  pFVar1 = this_01 + iVar5;
  while( true ) {
    if ((int)this->_padding_ != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_01 == pFVar1) break;
    pUVar12 = pUVar9;
    if (this_01->Handle != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_UDS_ChattingData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar7);
      if (bVar3) {
        pUVar12 = this_01->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      iVar4 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar4 + 1);
      *(FWeakObjectPtr *)(local_58.Data + (longlong)iVar4 * 8) = local_res18;
    }
    this_01 = this_01 + 1;
  }
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&)>
            ((TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *)local_58.Data,(int)local_50,
             local_res8[0],UDS_ChattingData::SortChatData);
  uVar10 = (ulonglong)(int)local_50;
  iVar5 = (int)local_50 + -500;
  if (0 < iVar5) {
    lVar13 = 0;
    uVar11 = uVar10;
    pUVar12 = pUVar9;
    while (iVar15 = (int)pUVar12, lVar13 < (longlong)uVar10) {
      uVar14 = (uint)pUVar9;
      uVar6 = 0;
      if ((int)uVar14 < (int)uVar11) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return uVar8;
      }
      this_00 = (FWeakObjectPtr *)(local_58.Data + lVar13 * 8);
      bVar3 = FWeakObjectPtr::IsValid(this_00);
      if (bVar3) {
        local_res10 = *this_00;
        bVar3 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar3) {
          pUVar9 = FWeakObjectPtr::Get(&local_res10);
          uVar8 = *(ulong64 *)&pUVar9[2].field_0x8;
          RemoveFromTypeIndex(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res10);
          pUVar9 = FWeakObjectPtr::Get(&local_res10);
          if (pUVar9[2].field_0x10 == '\n') {
            RemoveFromWhisperIndex
                      (this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res10);
          }
          pUVar9 = FWeakObjectPtr::Get(&local_res10);
          if (1 < *(int *)&pUVar9[4].field_0x10) {
            pUVar9 = FWeakObjectPtr::Get(&local_res10);
            TMapBase<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
            ::Remove((TMapBase<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
                      *)&this->ChattingDataMap,(FString *)&pUVar9[4].field_0x8);
          }
          UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,uVar8);
        }
        pUVar12 = (UObject *)(ulonglong)(iVar15 + 1);
      }
      iVar15 = (int)pUVar12;
      pUVar9 = (UObject *)(ulonglong)(uVar14 + 1);
      lVar13 = lVar13 + 1;
      if (iVar5 <= lVar13) break;
      uVar11 = local_50 & 0xffffffff;
    }
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (longlong)iVar15;
}

