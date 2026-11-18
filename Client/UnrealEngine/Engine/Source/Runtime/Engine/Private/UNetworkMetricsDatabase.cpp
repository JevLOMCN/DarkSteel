// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// StaticClass @ 148073560

UClass * __cdecl UNetworkMetricsDatabase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsDatabase",
               &Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsDatabase,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetworkMetricsDatabase>,
               InternalVTableHelperCtorCaller<UNetworkMetricsDatabase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton;
}

// UNetworkMetricsDatabase @ 14808bb70

UNetworkMetricsDatabase * __thiscall
UNetworkMetricsDatabase::UNetworkMetricsDatabase
          (UNetworkMetricsDatabase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkMetricsDatabase__6B_;
  *(undefined8 *)&this->MetricTypes = 0;
  *(undefined8 *)&(this->MetricTypes).field_0x8 = 0;
  *(undefined8 *)&(this->MetricTypes).field_0x20 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x28 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetricTypes).field_0x34 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetricTypes).field_0x40 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x48 = 0;
  *(undefined8 *)&this->MetricInts = 0;
  *(undefined8 *)&(this->MetricInts).field_0x8 = 0;
  *(undefined8 *)&(this->MetricInts).field_0x20 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x28 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetricInts).field_0x34 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetricInts).field_0x40 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x48 = 0;
  *(undefined8 *)&this->MetricFloats = 0;
  *(undefined8 *)&(this->MetricFloats).field_0x8 = 0;
  *(undefined8 *)&(this->MetricFloats).field_0x20 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x28 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetricFloats).field_0x34 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetricFloats).field_0x40 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x48 = 0;
  *(undefined8 *)&this->LastReportListener = 0;
  *(undefined8 *)&(this->LastReportListener).field_0x8 = 0;
  *(undefined8 *)&(this->LastReportListener).field_0x20 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x28 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastReportListener).field_0x34 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LastReportListener).field_0x40 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x48 = 0;
  *(undefined8 *)&this->ListenersToMetrics = 0;
  *(undefined8 *)&(this->ListenersToMetrics).field_0x8 = 0;
  *(undefined8 *)&(this->ListenersToMetrics).field_0x20 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x28 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x34 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ListenersToMetrics).field_0x40 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x48 = 0;
  return this;
}

// UNetworkMetricsDatabase @ 14808bcd0

UNetworkMetricsDatabase * __thiscall
UNetworkMetricsDatabase::UNetworkMetricsDatabase
          (UNetworkMetricsDatabase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkMetricsDatabase__6B_;
  *(undefined8 *)&this->MetricTypes = 0;
  *(undefined8 *)&(this->MetricTypes).field_0x8 = 0;
  *(undefined8 *)&(this->MetricTypes).field_0x20 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x28 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetricTypes).field_0x34 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetricTypes).field_0x40 = 0;
  *(undefined4 *)&(this->MetricTypes).field_0x48 = 0;
  *(undefined8 *)&this->MetricInts = 0;
  *(undefined8 *)&(this->MetricInts).field_0x8 = 0;
  *(undefined8 *)&(this->MetricInts).field_0x20 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x28 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetricInts).field_0x34 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetricInts).field_0x40 = 0;
  *(undefined4 *)&(this->MetricInts).field_0x48 = 0;
  *(undefined8 *)&this->MetricFloats = 0;
  *(undefined8 *)&(this->MetricFloats).field_0x8 = 0;
  *(undefined8 *)&(this->MetricFloats).field_0x20 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x28 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetricFloats).field_0x34 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetricFloats).field_0x40 = 0;
  *(undefined4 *)&(this->MetricFloats).field_0x48 = 0;
  *(undefined8 *)&this->LastReportListener = 0;
  *(undefined8 *)&(this->LastReportListener).field_0x8 = 0;
  *(undefined8 *)&(this->LastReportListener).field_0x20 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x28 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x2c = 0x80;
  *(undefined4 *)&(this->LastReportListener).field_0x34 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LastReportListener).field_0x40 = 0;
  *(undefined4 *)&(this->LastReportListener).field_0x48 = 0;
  *(undefined8 *)&this->ListenersToMetrics = 0;
  *(undefined8 *)&(this->ListenersToMetrics).field_0x8 = 0;
  *(undefined8 *)&(this->ListenersToMetrics).field_0x20 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x28 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x2c = 0x80;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x34 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ListenersToMetrics).field_0x40 = 0;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x48 = 0;
  return this;
}

// ~UNetworkMetricsDatabase @ 14808f2f0

void __thiscall UNetworkMetricsDatabase::~UNetworkMetricsDatabase(UNetworkMetricsDatabase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNetworkMetricsDatabase__6B_;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ListenersToMetrics).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ListenersToMetrics);
  *(undefined4 *)&(this->LastReportListener).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LastReportListener).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LastReportListener);
  *(undefined4 *)&(this->MetricFloats).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetricFloats).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetricFloats);
  *(undefined4 *)&(this->MetricInts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetricInts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetricInts);
  *(undefined4 *)&(this->MetricTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetricTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MetricTypes);
  UObject::~UObject((UObject *)this);
  return;
}

// AddMetricToSnapshot @ 148093210

void __thiscall
UNetworkMetricsDatabase::AddMetricToSnapshot
          (UNetworkMetricsDatabase *this,FNetworkMetricSnapshot *param_1,FName param_2,
          EMetricType param_3)

{
  int *piVar1;
  FName *pFVar2;
  FNetworkMetric<__int64> *pFVar3;
  FNetworkMetric<float> *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  FNetworkMetric<__int64> *pFVar11;
  FNetworkMetric<float> *pFVar12;
  FName local_res18 [2];
  FName *local_18;
  FName *local_10;
  
  local_res18[0] = param_2;
  if (param_3 == Integer) {
    pFVar11 = TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
              ::Find((TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
                      *)&this->MetricInts,param_2);
    if (pFVar11 == (FNetworkMetric<__int64> *)0x0) {
      local_18 = local_res18;
      bVar9 = `UNetworkMetricsDatabase::AddMetricToSnapshot'::__l6::<lambda_1>::operator()
                        (&local_18);
      if (!bVar9) {
        return;
      }
    }
    pFVar3 = (FNetworkMetric<__int64> *)(param_1->MetricInts).AllocatorInstance.Data;
    if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (param_1->MetricInts).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_1->MetricInts).ArrayNum;
    piVar1 = &(param_1->MetricInts).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)param_1,piVar1);
    }
    (param_1->MetricInts).ArrayNum = iVar10 + 1;
    uVar7 = *(undefined4 *)&pFVar11->Value;
    uVar8 = *(undefined4 *)((longlong)&pFVar11->Value + 4);
    pFVar2 = (FName *)((param_1->MetricInts).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
    *pFVar2 = pFVar11->Name;
    pFVar2[1].ComparisonIndex = (FNameEntryId)uVar7;
    pFVar2[1].Number = uVar8;
    return;
  }
  if (param_3 == Float) {
    pFVar12 = TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
              ::Find((TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
                      *)&this->MetricFloats,param_2);
    if (pFVar12 == (FNetworkMetric<float> *)0x0) {
      local_10 = local_res18;
      bVar9 = `UNetworkMetricsDatabase::AddMetricToSnapshot'::__l13::<lambda_2>::operator()
                        (&local_10);
      if (!bVar9) {
        return;
      }
    }
    pFVar4 = (FNetworkMetric<float> *)(param_1->MetricFloats).AllocatorInstance.Data;
    if (((pFVar4 <= pFVar12) && (pFVar12 < pFVar4 + (param_1->MetricFloats).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (param_1->MetricFloats).ArrayNum;
    piVar1 = &(param_1->MetricFloats).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&(param_1->MetricFloats).AllocatorInstance,piVar1);
    }
    (param_1->MetricFloats).ArrayNum = iVar10 + 1;
    pFVar5 = (param_1->MetricFloats).AllocatorInstance.Data;
    *(FName *)(pFVar5 + (longlong)iVar10 * 0xc) = pFVar12->Name;
    *(float *)(pFVar5 + (longlong)iVar10 * 0xc + 8) = pFVar12->Value;
  }
  return;
}

// Contains @ 14809aaf0

bool __thiscall UNetworkMetricsDatabase::Contains(UNetworkMetricsDatabase *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->MetricTypes).field_0x8 != *(int *)&(this->MetricTypes).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MetricTypes).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MetricTypes).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->MetricTypes).field_0x48 - 1U & param_1.Number + uVar1
                              ) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->MetricTypes + (longlong)iVar2 * 0x14) == param_1)
        goto LAB_14809ab5c;
        iVar2 = *(int *)(*(longlong *)&this->MetricTypes + 0xc + (longlong)iVar2 * 0x14);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14809ab5c:
  return iVar2 != -1;
}

// CreateFloat @ 14809d640

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNetworkMetricsDatabase::CreateFloat(UNetworkMetricsDatabase *this,FName param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<float>_const_&> local_res8 [2];
  FName local_48;
  float local_40;
  FNetworkMetric<float> **local_38;
  TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<float>_const_&> *local_30;
  
  local_res8[0].Value = (FNetworkMetric<float> *)param_1;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->MetricTypes).field_0x8 != *(int *)&(this->MetricTypes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MetricTypes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MetricTypes).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MetricTypes).field_0x48 - 1U & param_1.Number + uVar2
                              ) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->MetricTypes + (longlong)iVar3 * 0x14) == param_1) {
          local_res8[0].Key = (FName *)&local_res8[0].Value;
          bVar1 = `UNetworkMetricsDatabase::CreateFloat'::__l3::<lambda_1>::operator()(local_res8);
          if (!bVar1) {
            return;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)&this->MetricTypes + 0xc + (longlong)iVar3 * 0x14);
      } while (iVar3 != -1);
    }
  }
  local_48 = (FName)local_res8[0].Value;
  local_38 = &local_res8[0].Value;
  local_30 = (TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<float>_const_&> *)&local_48;
  local_40 = param_2;
  TSet<TTuple<FName,UE::Net::FNetworkMetric<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<float>_const_&>_>
            ((TSet<TTuple<FName,UE::Net::FNetworkMetric<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>,FDefaultSetAllocator>
              *)&this->MetricFloats,local_res8,(bool *)&local_38);
  local_38 = &local_res8[0].Value;
  local_res8[0].Key = (FName *)CONCAT44(local_res8[0].Key._4_4_,1);
  local_30 = local_res8;
  TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,TDefaultMapHashableKeyFuncs<FName,enum_UNetworkMetricsDatabase::EMetricType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,enum_UNetworkMetricsDatabase::EMetricType_&&>_>
            (&this->MetricTypes,
             (TPairInitializer<FName_const_&,UNetworkMetricsDatabase::EMetricType_&&> *)
             &local_res8[1].Value,(bool *)&local_38);
  return;
}

// CreateInt @ 14809d7e0

void __thiscall
UNetworkMetricsDatabase::CreateInt(UNetworkMetricsDatabase *this,FName param_1,long64 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<__int64>_const_&> local_res8;
  FName local_38;
  long64 local_30;
  FNetworkMetric<__int64> **local_28;
  TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<__int64>_const_&> *local_20;
  
  local_res8.Value = (FNetworkMetric<__int64> *)param_1;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->MetricTypes).field_0x8 != *(int *)&(this->MetricTypes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MetricTypes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MetricTypes).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MetricTypes).field_0x48 - 1U & param_1.Number + uVar2
                              ) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->MetricTypes + (longlong)iVar3 * 0x14) == param_1) {
          local_res8.Key = (FName *)&local_res8.Value;
          bVar1 = `UNetworkMetricsDatabase::CreateInt'::__l3::<lambda_1>::operator()(&local_res8);
          if (!bVar1) {
            return;
          }
          break;
        }
        iVar3 = *(int *)(*(longlong *)&this->MetricTypes + 0xc + (longlong)iVar3 * 0x14);
      } while (iVar3 != -1);
    }
  }
  local_38 = (FName)local_res8.Value;
  local_28 = &local_res8.Value;
  local_20 = (TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<__int64>_const_&> *)&local_38;
  local_30 = param_2;
  TSet<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UE::Net::FNetworkMetric<__int64>_const_&>_>
            ((TSet<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>,FDefaultSetAllocator>
              *)&this->MetricInts,&local_res8,(bool *)&local_28);
  local_28 = &local_res8.Value;
  local_res8.Key = (FName *)((ulonglong)local_res8.Key & 0xffffffff00000000);
  local_20 = &local_res8;
  TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,TDefaultMapHashableKeyFuncs<FName,enum_UNetworkMetricsDatabase::EMetricType,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,enum_UNetworkMetricsDatabase::EMetricType_&&>_>
            (&this->MetricTypes,
             (TPairInitializer<FName_const_&,UNetworkMetricsDatabase::EMetricType_&&> *)
             &stack0x00000020,(bool *)&local_28);
  return;
}

// GetFloat @ 1480a43a0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UNetworkMetricsDatabase::GetFloat(UNetworkMetricsDatabase *this,FName param_1)

{
  FNetworkMetric<float> *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
                   *)&this->MetricFloats,param_1);
  if (pFVar1 != (FNetworkMetric<float> *)0x0) {
    return pFVar1->Value;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0.0;
}

// GetInt @ 1480a4670

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UNetworkMetricsDatabase::GetInt(UNetworkMetricsDatabase *this,FName param_1)

{
  FNetworkMetric<__int64> *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
                   *)&this->MetricInts,param_1);
  if (pFVar1 != (FNetworkMetric<__int64> *)0x0) {
    return pFVar1->Value;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 1480a9900

UClass * __cdecl UNetworkMetricsDatabase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsDatabase",
               &Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsDatabase,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetworkMetricsDatabase>,
               InternalVTableHelperCtorCaller<UNetworkMetricsDatabase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton;
}

// HasReportIntervalPassed @ 1480ac560

bool __thiscall
UNetworkMetricsDatabase::HasReportIntervalPassed
          (UNetworkMetricsDatabase *this,double param_1,UNetworkMetricsBaseListener *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  double *pdVar6;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  UNetworkMetricsBaseListener *local_28;
  FWeakObjectPtr local_20 [3];
  
  if (param_2->IntervalSeconds <= 0.0 && param_2->IntervalSeconds != 0.0) {
    local_res18[0] = 0;
    bVar3 = `UNetworkMetricsDatabase::HasReportIntervalPassed'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar3) {
      return false;
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
  local_20[0] = local_res20;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
                      *)&this->LastReportListener,
                     local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                     (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *)local_20);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this->LastReportListener + (longlong)iVar5 * 0x18;
    pdVar6 = (double *)(lVar1 + 8);
    if (lVar1 == 0) {
      pdVar6 = (double *)0x0;
    }
    if (pdVar6 != (double *)0x0) {
      if (param_1 - *pdVar6 < param_2->IntervalSeconds) {
        return false;
      }
      *pdVar6 = param_1;
      return true;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7549168719444836742>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                     ,0x186,"LastReportSeconds");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// IncrementInt @ 1480adc10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::IncrementInt(UNetworkMetricsDatabase *this,FName param_1,long64 param_2)

{
  FNetworkMetric<__int64> *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
                   *)&this->MetricInts,param_1);
  if (pFVar1 != (FNetworkMetric<__int64> *)0x0) {
    pFVar1->Value = pFVar1->Value + param_2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ProcessListeners @ 1480be600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNetworkMetricsDatabase::ProcessListeners(UNetworkMetricsDatabase *this)

{
  TMap<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
  *pTVar1;
  FName *pFVar2;
  uint uVar3;
  FName FVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  UNetworkMetricsDatabase *pUVar9;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr *pFVar11;
  bool bVar12;
  int iVar13;
  FNetworkMetricsMutator *pFVar14;
  UPackage *pUVar15;
  double *pdVar16;
  byte bVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  UObject *pUVar23;
  FName *pFVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  double *pdVar28;
  FWeakObjectPtr FVar29;
  EMetricType *pEVar30;
  uint *puVar31;
  int iVar32;
  ulonglong uVar33;
  FWeakObjectPtr *pFVar34;
  undefined1 *puVar35;
  longlong *plVar36;
  longlong *plVar37;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254 [4];
  FNetworkMetricSnapshot local_250;
  FName local_230;
  uint local_228;
  FWeakObjectPtr local_220;
  uint local_218;
  UNetworkMetricsDatabase *local_210;
  FName local_208;
  FName FStack_200;
  int local_1f8;
  uint uStack_1f4;
  FWeakObjectPtr FStack_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  FWeakObjectPtr *local_1d8;
  undefined8 uStack_1d0;
  FWeakObjectPtr FStack_1c8;
  uint uStack_1c0;
  int iStack_1bc;
  uint uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  UObject *local_1a8;
  FName local_1a0;
  FName local_198;
  TMap<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
  *local_190;
  int iStack_188;
  uint uStack_184;
  undefined1 *local_180;
  undefined4 uStack_178;
  int iStack_174;
  int local_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  UObject *local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr *local_150;
  undefined8 *local_148;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  LARGE_INTEGER local_130;
  FWeakObjectPtr *local_128;
  FWeakObjectPtr *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FName *local_c0;
  int local_b8;
  TMap<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
  *local_b0;
  longlong lStack_a8;
  FWeakObjectPtr local_a0;
  undefined8 uStack_98;
  int iStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_64;
  FNameEntryId local_60;
  uint uStack_5c;
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_210 = this;
  QueryPerformanceCounter(&local_130);
  uVar26 = *(int *)&(this->MetricFloats).field_0x8 - *(int *)&(this->MetricFloats).field_0x34;
  local_250.MetricInts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.MetricInts.ArrayNum = 0;
  iVar27 = 0;
  local_250.MetricInts.ArrayMax = 0;
  local_250.MetricFloats.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.MetricFloats.ArrayNum = 0;
  local_250.MetricFloats.ArrayMax = 0;
  dVar7 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (0 < (int)uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar26,&local_250.MetricFloats.AllocatorInstance,0,
               &local_250.MetricFloats.ArrayMax);
  }
  uVar26 = *(int *)&(this->MetricInts).field_0x8 - *(int *)&(this->MetricInts).field_0x34;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (local_250.MetricInts.ArrayMax < (int)uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar26,(ForAnyElementType *)&local_250,local_250.MetricInts.ArrayNum,
               &local_250.MetricInts.ArrayMax);
  }
  puVar35 = &(this->ListenersToMetrics).field_0x10;
  iVar13 = *(int *)&(this->ListenersToMetrics).field_0x28;
  pTVar1 = &this->ListenersToMetrics;
  uStack_184 = 1;
  iStack_174 = iVar27;
  local_170 = iVar27;
  if (iVar13 != 0) {
    puVar31 = *(uint **)&(this->ListenersToMetrics).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar35;
    }
    uVar26 = *puVar31;
    local_170 = 0;
    iVar27 = 0;
    while (uVar26 == 0) {
      lVar18 = (longlong)iVar27;
      local_170 = local_170 + 0x20;
      iVar27 = iVar27 + 1;
      iStack_174 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_1480be7ad;
      uVar26 = (puVar31 + 1)[lVar18];
    }
    uStack_184 = -uVar26 & uVar26;
    uVar33 = (ulonglong)uStack_184 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_140 = (int)lVar18;
    iStack_174 = local_140 + -1 + local_170;
    if (iVar13 < iStack_174) {
      iStack_174 = iVar13;
    }
  }
LAB_1480be7ad:
  uVar26 = *(uint *)&(this->ListenersToMetrics).field_0x28;
  uStack_16c = local_64;
  bVar17 = (byte)uVar26 & 0x1f;
  iStack_168 = *(int *)&(this->ListenersToMetrics).field_0x8 -
               *(int *)&(this->ListenersToMetrics).field_0x34;
  uVar22 = uVar26 & 0xffffffe0;
  iVar32 = (int)uVar26 >> 5;
  uStack_1f4 = 1 << bVar17;
  uVar20 = -1 << bVar17;
  uStack_178 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_184,iVar27);
  TStack_e8.CurrentBitIndex = iStack_174;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._28_4_ = local_64;
  TStack_e8.BaseBitIndex = local_170;
  uStack_c8 = CONCAT44(uStack_164,iStack_168);
  local_1f8 = iVar32;
  FStack_1f0 = (FWeakObjectPtr)puVar35;
  local_1e8 = uVar20;
  uStack_1e4 = uVar26;
  uStack_1e0 = uVar22;
  local_190 = pTVar1;
  iStack_188 = iVar27;
  local_180 = puVar35;
  local_f0 = pTVar1;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar35;
  if ((((int)uVar26 < 0) || (iVar13 < (int)uVar26)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->ListenersToMetrics).field_0x28;
  if (uVar26 != uVar3) {
    puVar19 = *(undefined1 **)&(this->ListenersToMetrics).field_0x20;
    if (puVar19 != (undefined1 *)0x0) {
      puVar35 = puVar19;
    }
    uVar20 = uVar20 & *(uint *)(puVar35 + (longlong)iVar32 * 4);
    while (uVar20 == 0) {
      uStack_1e0 = uVar22 + 0x20;
      local_1f8 = iVar32 + 1;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1f8)
      goto LAB_1480be8f8;
      uVar20 = *(uint *)(puVar35 + (longlong)iVar32 * 4 + 4);
      local_1e8 = 0xffffffff;
      uVar22 = uStack_1e0;
      iVar32 = local_1f8;
    }
    uStack_1f4 = -uVar20 & uVar20;
    uVar33 = (ulonglong)uStack_1f4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_13c = (int)lVar18;
    uStack_1e4 = local_13c + -1 + uVar22;
    if ((int)uVar3 < (int)uStack_1e4) {
LAB_1480be8f8:
      uStack_1e4 = uVar3;
    }
  }
  uStack_1d0 = CONCAT44(uStack_1f4,local_1f8);
  iStack_1bc = uStack_1e4;
  uStack_1c0 = local_1e8;
  iStack_1b4 = uStack_1dc;
  uStack_1b8 = uStack_1e0;
  FStack_1c8 = FStack_1f0;
  local_1b0 = *(int *)&(local_210->ListenersToMetrics).field_0x8 -
              *(int *)&(local_210->ListenersToMetrics).field_0x34;
  uStack_88 = CONCAT44(uStack_1ac,local_1b0);
  local_a0 = FStack_1f0;
  local_1d8 = (FWeakObjectPtr *)pTVar1;
  local_b0 = pTVar1;
  lStack_a8 = uStack_1d0;
  uStack_98 = _uStack_1c0;
  local_90 = _uStack_1b8;
  do {
    pTVar1 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_258 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
    }
    if (((TStack_e8.CurrentBitIndex == iStack_94) && ((FWeakObjectPtr)TStack_e8.Array == local_a0))
       && (pTVar1 == local_b0)) {
      if ((FName *)local_250.MetricFloats.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_250.MetricFloats.AllocatorInstance.Data);
      }
      if ((FName *)local_250.MetricInts.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_250.MetricInts.AllocatorInstance.Data);
      }
      return;
    }
    pFVar34 = (FWeakObjectPtr *)((longlong)TStack_e8.CurrentBitIndex * 0x60 + *(longlong *)pTVar1);
    local_128 = pFVar34;
    local_1a8 = FWeakObjectPtr::Get(pFVar34);
    pUVar9 = local_210;
    local_150 = pFVar34 + 1;
    if (local_1a8 == (UObject *)0x0) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7549168719444836565>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                          ,0xd5,"Listener");
      if (bVar12) {
code_r0x0001480bf3df:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      local_218 = *(uint *)&local_1a8[1].field_0x10;
      uVar33 = (ulonglong)(int)local_218;
      plVar36 = *(longlong **)&local_1a8[1].field_0x8;
      plVar37 = plVar36 + uVar33 * 2;
      pUVar23 = local_1a8;
      while( true ) {
        if (*(int *)&pUVar23[1].field_0x10 != (int)uVar33) {
          local_257 = 0;
          `TCheckedPointerIterator<TInstancedStruct<FNetworkMetricsMutator>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_257);
        }
        pFVar34 = local_128;
        if (plVar36 == plVar37) break;
        if ((plVar36[1] == 0) || (*plVar36 == 0)) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7549168719444836571>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                              ,0xdb,"Mutator.IsValid()");
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar36 = plVar36 + 2;
        }
        else {
          local_250.MetricInts.ArrayNum = 0;
          if (local_250.MetricInts.ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)&local_250,0,&local_250.MetricInts.ArrayMax);
          }
          bVar12 = (longlong)local_250.MetricFloats._8_8_ < 0;
          local_250.MetricFloats._8_8_ = local_250.MetricFloats._8_8_ & 0xffffffff00000000;
          if (bVar12) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,&local_250.MetricFloats.AllocatorInstance,0,
                       &local_250.MetricFloats.ArrayMax);
          }
          pFVar14 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                              ((UScriptStruct *)*plVar36,(void *)plVar36[1]);
          (**(code **)(pFVar14->_padding_ + 0x20))(pFVar14,&local_c0);
          pFVar2 = local_c0 + local_b8;
          if (local_c0 != pFVar2) {
            pFVar24 = local_c0;
            do {
              FVar4 = *pFVar24;
              uVar26 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
              if (*(int *)&(pUVar9->MetricTypes).field_0x8 !=
                  *(int *)&(pUVar9->MetricTypes).field_0x34) {
                puVar35 = *(undefined1 **)&(pUVar9->MetricTypes).field_0x40;
                puVar19 = &(pUVar9->MetricTypes).field_0x38;
                if (puVar35 != (undefined1 *)0x0) {
                  puVar19 = puVar35;
                }
                iVar27 = *(int *)(puVar19 +
                                 (ulonglong)
                                 (*(int *)&(pUVar9->MetricTypes).field_0x48 - 1U &
                                 FVar4.Number + uVar26) * 4);
                if (iVar27 != -1) {
                  do {
                    lVar18 = *(longlong *)&pUVar9->MetricTypes + (longlong)iVar27 * 0x14;
                    if (*(FName *)(*(longlong *)&pUVar9->MetricTypes + (longlong)iVar27 * 0x14) ==
                        FVar4) {
                      pEVar30 = (EMetricType *)(lVar18 + 8);
                      if (lVar18 == 0) {
                        pEVar30 = (EMetricType *)0x0;
                      }
                      if (pEVar30 != (EMetricType *)0x0) {
                        AddMetricToSnapshot(pUVar9,&local_250,FVar4,*pEVar30);
                      }
                      break;
                    }
                    iVar27 = *(int *)(lVar18 + 0xc);
                  } while (iVar27 != -1);
                }
              }
              pFVar24 = pFVar24 + 1;
            } while (pFVar24 != pFVar2);
            uVar33 = (ulonglong)local_218;
          }
          plVar5 = (longlong *)plVar36[1];
          lVar18 = *plVar36;
          if ((plVar5 == (longlong *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Memory != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                  ,0xd1,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((lVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Struct != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                  ,0xd2,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar15 = Z_Construct_UPackage__Script_Engine();
            Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutator,(UObject *)pUVar15
                                 ,L"NetworkMetricsMutator");
            if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton !=
                (UScriptStruct *)0x0) goto LAB_1480bec1e;
LAB_1480bec42:
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd3,L"");
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
LAB_1480bec1e:
            iVar27 = (int)(Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton)
                          ->_padding_;
            if ((*(int *)(lVar18 + 0x38) < iVar27) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar27 * 8) !=
                &(Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton)->
                 _padding_)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (!bVar12) goto LAB_1480bec42;
          }
          (**(code **)(*plVar5 + 8))(plVar5);
          plVar36 = plVar36 + 2;
          pUVar23 = local_1a8;
        }
      }
      if (*(double *)(pUVar23 + 1) <= 0.0 && *(double *)(pUVar23 + 1) != 0.0) {
        local_256 = 0;
        bVar12 = `UNetworkMetricsDatabase::HasReportIntervalPassed'::__l3::<lambda_1>::operator()
                           (&local_256);
        if (!bVar12) goto LAB_1480bf3e0;
      }
      pUVar9 = local_210;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar23);
      }
      pdVar28 = (double *)0x0;
      local_220.ObjectIndex = 0;
      local_220.ObjectSerialNumber = 0;
      local_160 = pUVar23;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar23);
      }
      FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_160);
      local_158 = local_220;
      iVar27 = TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>_>
                         ((TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
                           *)&pUVar9->LastReportListener,
                          local_220.ObjectSerialNumber ^ local_220.ObjectIndex,
                          (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *)
                          &local_158);
      if (iVar27 != -1) {
        lVar18 = *(longlong *)&pUVar9->LastReportListener + (longlong)iVar27 * 0x18;
        pdVar16 = (double *)(lVar18 + 8);
        if (lVar18 == 0) {
          pdVar16 = pdVar28;
        }
        if (pdVar16 != (double *)0x0) {
          if (*(double *)(pUVar23 + 1) <= dVar7 - *pdVar16) {
            *pdVar16 = dVar7;
            local_250.MetricInts.ArrayNum = 0;
            if (local_250.MetricInts.ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,(ForAnyElementType *)&local_250,0,&local_250.MetricInts.ArrayMax);
            }
            uVar8 = local_250.MetricFloats._8_8_;
            local_250.MetricFloats._8_8_ = local_250.MetricFloats._8_8_ & 0xffffffff00000000;
            if ((longlong)uVar8 < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,&local_250.MetricFloats.AllocatorInstance,0,
                         &local_250.MetricFloats.ArrayMax);
            }
            iVar27 = pFVar34[6].ObjectIndex;
            FStack_1c8 = (FWeakObjectPtr)(pFVar34 + 3);
            uVar26 = 1;
            uStack_1b8 = 0;
            iStack_1bc = 0;
            if (iVar27 != 0) {
              FVar29 = FStack_1c8;
              if (pFVar34[5] != (FWeakObjectPtr)0x0) {
                FVar29 = pFVar34[5];
              }
              uVar20 = *(uint *)FVar29;
              pdVar16 = pdVar28;
              uStack_1b8 = 0;
              while (uVar20 == 0) {
                iVar13 = (int)pdVar28;
                uStack_1b8 = (int)pdVar16 + 0x20;
                pdVar16 = (double *)(ulonglong)uStack_1b8;
                uVar20 = iVar13 + 1;
                pdVar28 = (double *)(ulonglong)uVar20;
                iStack_1bc = iVar27;
                if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
                goto LAB_1480bee6e;
                uVar20 = ((int *)((longlong)FVar29 + 4))[iVar13];
              }
              uVar26 = -uVar20 & uVar20;
              uVar33 = (ulonglong)uVar26 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_138 = (int)lVar18;
              iStack_1bc = (uStack_1b8 - 1) + local_138;
              if (iVar27 < iStack_1bc) {
                iStack_1bc = iVar27;
              }
            }
LAB_1480bee6e:
            uVar20 = pFVar34[6].ObjectIndex;
            local_1d8 = pFVar34 + 1;
            local_1b0 = pFVar34[2].ObjectIndex - pFVar34[7].ObjectSerialNumber;
            uVar22 = uVar20 & 0xffffffe0;
            uStack_1d0 = CONCAT44(uVar26,(int)pdVar28);
            uStack_1c0 = 0xffffffff;
            iStack_1b4 = iStack_174;
            TStack_118._padding_ = uStack_1d0;
            iVar27 = (int)uVar20 >> 5;
            uStack_f8 = CONCAT44(uStack_1ac,local_1b0);
            TStack_118.UnvisitedBitMask = 0xffffffff;
            TStack_118.CurrentBitIndex = iStack_1bc;
            TStack_118.BaseBitIndex = uStack_1b8;
            TStack_118._28_4_ = iStack_174;
            local_120 = local_1d8;
            TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_1c8;
            if (((int)uVar20 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar10 = local_150;
            uVar26 = pFVar34[6].ObjectIndex;
            if (uVar20 != uVar26) {
              FVar29 = (FWeakObjectPtr)(pFVar34 + 3);
              if (pFVar34[5] != (FWeakObjectPtr)0x0) {
                FVar29 = pFVar34[5];
              }
              uVar20 = -1 << ((byte)uVar20 & 0x1f) &
                       *(uint *)((longlong)FVar29 + (longlong)iVar27 * 4);
              while (uVar20 == 0) {
                lVar18 = (longlong)iVar27;
                uVar22 = uVar22 + 0x20;
                iVar27 = iVar27 + 1;
                uVar20 = uVar26;
                if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
                goto LAB_1480bef81;
                uVar20 = ((int *)((longlong)FVar29 + 4))[lVar18];
              }
              uVar33 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
              lVar18 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_134 = (int)lVar18;
              uVar20 = (uVar22 - 1) + local_134;
              if ((int)uVar26 < (int)uVar20) {
                uVar20 = uVar26;
              }
            }
LAB_1480bef81:
            while( true ) {
              pFVar11 = local_120;
              if (local_120[1].ObjectIndex - local_120[6].ObjectSerialNumber != (int)uStack_f8) {
                local_255 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_255);
              }
              pUVar23 = local_1a8;
              if (((TStack_118.CurrentBitIndex == uVar20) &&
                  (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar34 + 3))) &&
                 (pFVar11 == pFVar10)) break;
              FVar29 = *pFVar11;
              AddMetricToSnapshot(pUVar9,&local_250,
                                  *(FName *)((longlong)FVar29 +
                                            (longlong)TStack_118.CurrentBitIndex * 0x14),
                                  *(EMetricType *)
                                   ((longlong)FVar29 + 8 +
                                   (longlong)TStack_118.CurrentBitIndex * 0x14));
              TStack_118.UnvisitedBitMask =
                   TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
            }
            iVar27 = *(int *)&local_1a8[1].field_0x10;
            puVar25 = *(undefined8 **)&local_1a8[1].field_0x8;
            puVar21 = puVar25 + (longlong)iVar27 * 2;
            while( true ) {
              if (*(int *)&pUVar23[1].field_0x10 != iVar27) {
                local_254[0] = 0;
                `TCheckedPointerIterator<TInstancedStruct<FNetworkMetricsMutator>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_254);
              }
              if (puVar25 == puVar21) break;
              if (((void *)puVar25[1] == (void *)0x0) ||
                 ((UScriptStruct *)*puVar25 == (UScriptStruct *)0x0)) {
                bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<7549168719444836606>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                                    ,0xfe,"Mutator.IsValid()");
                if (bVar12) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar25 = puVar25 + 2;
              }
              else {
                pFVar14 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                                    ((UScriptStruct *)*puVar25,(void *)puVar25[1]);
                (**(code **)(pFVar14->_padding_ + 0x18))(pFVar14,&local_60);
                uVar33 = (ulonglong)local_58;
                if ((1 < uVar33) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0x12f,L""), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(char *)((longlong)
                              &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                               ::__l2::bIsSameType + uVar33 + 4) == '\0') {
                  uVar33 = (ulonglong)local_58;
                  if ((1 < uVar33) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                          ,0x12f,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (*(char *)((longlong)
                                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,__int64>::IsSame(unsigned___int64)'
                                 ::__l2::bIsSameType + uVar33) == '\0') {
                    local_148 = puVar25;
                    `UNetworkMetricsDatabase::ProcessListeners'::__l46::<lambda_1>::operator()
                              (&local_148);
                    puVar25 = puVar25 + 2;
                  }
                  else {
                    local_230.ComparisonIndex.Value = 0;
                    local_230.Number = 0;
                    pFVar14 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                                        ((UScriptStruct *)*puVar25,(void *)puVar25[1]);
                    FVar4 = pFVar14->NameOverride;
                    if (pFVar14->NameOverride == (FName)0x0) {
                      (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14,&local_198);
                      FVar4 = local_198;
                    }
                    local_198 = FVar4;
                    local_230 = local_198;
                    if ((local_58 != 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index == TypeIndex",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                            ,0x97,L""), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    local_228 = local_60.Value;
                    if (((local_250.MetricFloats.AllocatorInstance.Data <= &local_230) &&
                        (&local_230 <
                         (FName *)(local_250.MetricFloats.AllocatorInstance.Data +
                                  (longlong)local_250.MetricFloats.ArrayMax * 0xc))) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar13 = local_250.MetricFloats.ArrayNum;
                    if (local_250.MetricFloats.ArrayNum == local_250.MetricFloats.ArrayMax) {
                      iVar13 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&local_250.MetricFloats.AllocatorInstance,
                                          &local_250.MetricFloats.ArrayMax);
                    }
                    local_250.MetricFloats.ArrayNum = iVar13 + 1;
                    puVar25 = puVar25 + 2;
                    *(FName *)(local_250.MetricFloats.AllocatorInstance.Data +
                              (longlong)iVar13 * 0xc) = local_230;
                    *(uint *)(local_250.MetricFloats.AllocatorInstance.Data +
                             (longlong)iVar13 * 0xc + 8) = local_228;
                  }
                }
                else {
                  local_208.ComparisonIndex.Value = 0;
                  local_208.Number = 0;
                  pFVar14 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                                      ((UScriptStruct *)*puVar25,(void *)puVar25[1]);
                  FVar4 = pFVar14->NameOverride;
                  if (pFVar14->NameOverride == (FName)0x0) {
                    (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14,&local_1a0);
                    FVar4 = local_1a0;
                  }
                  local_1a0 = FVar4;
                  local_208 = local_1a0;
                  if ((local_58 != 1) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index == TypeIndex",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                          ,0x97,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FStack_200.Number = uStack_5c;
                  FStack_200.ComparisonIndex.Value = local_60.Value;
                  if (((local_250.MetricInts.AllocatorInstance.Data <= &local_208) &&
                      (&local_208 <
                       (FName *)(local_250.MetricInts.AllocatorInstance.Data +
                                (longlong)local_250.MetricInts.ArrayMax * 0x10))) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (local_250.MetricInts.ArrayNum == local_250.MetricInts.ArrayMax) {
                    local_250.MetricInts.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)&local_250,
                                    &local_250.MetricInts.ArrayMax);
                  }
                  puVar25 = puVar25 + 2;
                  *(FName *)(local_250.MetricInts.AllocatorInstance.Data +
                            (longlong)local_250.MetricInts.ArrayNum * 0x10) = local_208;
                  ((FName *)
                  (local_250.MetricInts.AllocatorInstance.Data +
                  (longlong)local_250.MetricInts.ArrayNum * 0x10))[1] = FStack_200;
                  local_250.MetricInts.ArrayNum = local_250.MetricInts.ArrayNum + 1;
                }
              }
            }
            (**(code **)(*(longlong *)pUVar23 + 0x2b0))(pUVar23);
          }
          goto LAB_1480bf3e0;
        }
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7549168719444836742>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                          ,0x186,"LastReportSeconds");
      if (bVar12) goto code_r0x0001480bf3df;
    }
LAB_1480bf3e0:
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  } while( true );
}

// Register @ 1480c1b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNetworkMetricsDatabase::Register
          (UNetworkMetricsDatabase *this,FName param_1,
          TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> param_2)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  EMetricType *pEVar5;
  UObject *pUVar6;
  FNetworkMetricsMutator *pFVar7;
  TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
  *this_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  FName local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  FName local_c8;
  undefined1 local_c0 [8];
  FName *local_b8;
  FName local_b0;
  undefined8 local_a8;
  FName local_a0;
  EMetricType local_98;
  FString local_90;
  FName *local_80;
  FWeakObjectPtr *local_78;
  FWeakObjectPtr *local_70;
  undefined8 *local_68;
  FString local_60;
  FString local_50;
  
  local_res10 = param_1;
  local_res18 = param_2.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar4) {
    pEVar5 = TMapBase<FName,enum_UNetworkMetricsDatabase::EMetricType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum_UNetworkMetricsDatabase::EMetricType,0>_>
             ::Find(&this->MetricTypes,local_res10);
    if (pEVar5 == (EMetricType *)0x0) {
      local_b8 = &local_res10;
      bVar4 = `UNetworkMetricsDatabase::Register'::__l24::<lambda_1>::operator()(&local_b8);
      if (!bVar4) {
        return;
      }
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    iVar1 = *(int *)&pUVar6[1].field_0x10;
    puVar8 = *(undefined8 **)&pUVar6[1].field_0x8;
    puVar9 = puVar8 + (longlong)iVar1 * 2;
    do {
      if (*(int *)&pUVar6[1].field_0x10 != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TInstancedStruct<FNetworkMetricsMutator>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (puVar8 == puVar9) {
        this_00 = TMapBase<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
                  ::
                  FindOrAddImpl<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>
                            (&this->ListenersToMetrics,
                             local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                             (TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *)
                             &local_res18);
        local_a0 = local_res10;
        local_98 = *pEVar5;
        TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>
                  (this_00,(TTuple<FName,UNetworkMetricsDatabase::EMetricType> *)local_c0,
                   (bool *)&local_a0);
        local_70 = &local_res18;
        local_68 = &local_a8;
        local_a8 = 0;
        TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&,double_&&>_>
                  ((TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
                    *)&this->LastReportListener,
                   (TPairInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&,double_&&>
                    *)(local_c0 + 4),(bool *)&local_70);
        return;
      }
      if (((void *)puVar8[1] == (void *)0x0) || ((UScriptStruct *)*puVar8 == (UScriptStruct *)0x0))
      {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7549168719444836664>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                           ,0x138,"Mutator.IsValid()");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        pFVar7 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                           ((UScriptStruct *)*puVar8,(void *)puVar8[1]);
        FVar3 = pFVar7->NameOverride;
        if (pFVar7->NameOverride == (FName)0x0) {
          (**(code **)(pFVar7->_padding_ + 0x28))(pFVar7,&local_c8);
          FVar3 = local_c8;
        }
        local_c8 = FVar3;
        if (local_c8 == local_res10) {
          if (2 < (byte)LogNetworkMetrics._0_1_) {
            pUVar6 = FWeakObjectPtr::Get(&local_res18);
            local_b0 = *(FName *)(*(longlong *)&pUVar6->field_0x10 + 0x18);
            ::FName::ToString(&local_b0,&local_90);
            ::FName::ToString(&local_res10,&local_50);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          local_80 = &local_res10;
          local_78 = &local_res18;
          `UNetworkMetricsDatabase::Register'::__l36::<lambda_2>::operator()(&local_80);
          return;
        }
      }
      puVar8 = puVar8 + 2;
    } while( true );
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7549168719444836651>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                     ,299,"Reporter.IsValid()");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((byte)LogNetworkMetrics._0_1_ < 3) {
    return;
  }
  ::FName::ToString(&local_res10,&local_60);
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
  if (local_60.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_60.Data.AllocatorInstance.Data);
  return;
}

// RegisterMutator @ 1480c2700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNetworkMetricsDatabase::RegisterMutator
          (UNetworkMetricsDatabase *this,
          TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> param_1,
          TInstancedStruct<FNetworkMetricsMutator> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FNetworkMetricsMutator *pFVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  FInstancedStruct *this_00;
  undefined1 *puVar14;
  longlong *plVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  longlong *plVar17;
  uint uVar18;
  FWeakObjectPtr local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_1d8 [4];
  FName local_1d4;
  FName local_1cc;
  FName local_1c4;
  FName local_1bc;
  FName local_1b4;
  FName local_1ac;
  FName local_1a4;
  int local_19c;
  int local_198;
  undefined1 local_194 [12];
  FName local_188;
  FWeakObjectPtr local_180;
  FName local_178;
  undefined8 local_170;
  FString local_168;
  FString local_158;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  longlong *local_e8;
  int local_e0;
  TInstancedStruct<FNetworkMetricsMutator> *local_d8;
  FWeakObjectPtr *local_d0;
  TInstancedStruct<FNetworkMetricsMutator> *local_c8;
  FWeakObjectPtr *local_c0;
  FWeakObjectPtr *local_b8;
  undefined8 *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  local_res10[0] = param_1.WeakPtr;
  bVar7 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7549168719444836683>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                       ,0x14b,"Listener.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (2 < (byte)LogNetworkMetrics._0_1_) {
      pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                          ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                           (param_2->InstancedStruct).StructMemory);
      FVar6 = pFVar10->NameOverride;
      if (pFVar10->NameOverride == (FName)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,&local_1d4);
        FVar6 = local_1d4;
      }
      local_1d4 = FVar6;
      ::FName::ToString(&local_1d4,&local_a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        return;
      }
    }
    return;
  }
  pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                      ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                       (param_2->InstancedStruct).StructMemory);
  (**(code **)(pFVar10->_padding_ + 0x20))(pFVar10);
  for (plVar15 = local_e8; plVar15 != local_e8 + local_e0; plVar15 = plVar15 + 1) {
    lVar13 = *plVar15;
    local_194._4_8_ = lVar13;
    uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar13);
    if (*(int *)&(this->MetricTypes).field_0x8 == *(int *)&(this->MetricTypes).field_0x34) {
LAB_1480c28a5:
      if ((byte)LogNetworkMetrics._0_1_ < 3) {
        return;
      }
      ::FName::ToString((FName *)(local_194 + 4),&local_88);
      pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                          ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                           (param_2->InstancedStruct).StructMemory);
      FVar6 = pFVar10->NameOverride;
      if (pFVar10->NameOverride == (FName)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,&local_1cc);
        FVar6 = local_1cc;
      }
      local_1cc = FVar6;
      ::FName::ToString(&local_1cc,&local_98);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      return;
    }
    puVar3 = *(undefined1 **)&(this->MetricTypes).field_0x40;
    puVar14 = &(this->MetricTypes).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar14 = puVar3;
    }
    iVar9 = *(int *)(puVar14 +
                    (ulonglong)
                    (*(int *)&(this->MetricTypes).field_0x48 - 1U &
                    (int)((ulonglong)lVar13 >> 0x20) + uVar8) * 4);
    if (iVar9 == -1) goto LAB_1480c28a5;
    while (*(longlong *)(*(longlong *)&this->MetricTypes + (longlong)iVar9 * 0x14) != lVar13) {
      iVar9 = *(int *)(*(longlong *)&this->MetricTypes + 0xc + (longlong)iVar9 * 0x14);
      if (iVar9 == -1) goto LAB_1480c28a5;
    }
  }
  pUVar11 = FWeakObjectPtr::Get(local_res10);
  iVar9 = *(int *)&pUVar11[1].field_0x10;
  plVar15 = *(longlong **)&pUVar11[1].field_0x8;
  plVar12 = plVar15 + (longlong)iVar9 * 2;
  while( true ) {
    if (*(int *)&pUVar11[1].field_0x10 != iVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TInstancedStruct<FNetworkMetricsMutator>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (plVar15 == plVar12) break;
    if ((plVar15[1] == 0) || (*plVar15 == 0)) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7549168719444836701>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetworkMetricsDatabase.cpp"
                         ,0x15d,"ExistingMutator.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                          ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                           (param_2->InstancedStruct).StructMemory);
      FVar6 = pFVar10->NameOverride;
      if (pFVar10->NameOverride == (FName)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,&local_1bc);
        FVar6 = local_1bc;
      }
      local_1bc = FVar6;
      pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                          ((UScriptStruct *)*plVar15,(void *)plVar15[1]);
      FVar6 = pFVar10->NameOverride;
      if (pFVar10->NameOverride == (FName)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10);
        FVar6 = local_1c4;
      }
      local_1c4 = FVar6;
      if (local_1c4 == local_1bc) {
        if (2 < (byte)LogNetworkMetrics._0_1_) {
          pUVar11 = FWeakObjectPtr::Get(local_res10);
          local_188 = *(FName *)(*(longlong *)&pUVar11->field_0x10 + 0x18);
          ::FName::ToString(&local_188,&local_168);
          pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                              ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                               (param_2->InstancedStruct).StructMemory);
          FVar6 = pFVar10->NameOverride;
          if (pFVar10->NameOverride == (FName)0x0) {
            (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,&local_1b4);
            FVar6 = local_1b4;
          }
          local_1b4 = FVar6;
          ::FName::ToString(&local_1b4,&local_78);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
        local_d0 = local_res10;
        local_d8 = param_2;
        `UNetworkMetricsDatabase::RegisterMutator'::__l58::<lambda_1>::operator()(&local_d8);
        return;
      }
    }
    plVar15 = plVar15 + 2;
  }
  local_180 = local_res10[0];
  iVar9 = TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr>_>
                    (&this->ListenersToMetrics,
                     local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                     (TWeakObjectPtr<UNetworkMetricsBaseListener_const_,FWeakObjectPtr> *)&local_180
                    );
  plVar15 = (longlong *)0x0;
  plVar12 = plVar15;
  if (iVar9 != -1) {
    plVar12 = (longlong *)((longlong)iVar9 * 0x60 + *(longlong *)&this->ListenersToMetrics);
  }
  plVar17 = plVar12 + 1;
  if (plVar12 == (longlong *)0x0) {
    plVar17 = plVar15;
  }
  if (plVar17 == (longlong *)0x0) {
    TMapBase<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>_>
    ::Emplace<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>
              (&this->ListenersToMetrics,
               (TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr> *)local_res10);
    local_b8 = local_res10;
    local_b0 = &local_170;
    local_170 = 0;
    TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&,double_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
                *)&this->LastReportListener,
               (TPairInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&,double_&&>
                *)local_194,(bool *)&local_b8);
  }
  else {
    uVar8 = *(uint *)(plVar17 + 5);
    local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
    uStack_140 = 0;
    uStack_13c = 1;
    local_128 = 0;
    uStack_12c = uStack_140;
    if (uVar8 != 0) {
      pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = local_138;
      }
      uVar18 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      plVar12 = plVar15;
      local_128 = 0;
      uStack_140 = 0;
      while (uVar18 == 0) {
        iVar9 = (int)plVar15;
        local_128 = (int)plVar12 + 0x20;
        plVar12 = (longlong *)(ulonglong)local_128;
        uStack_140 = iVar9 + 1;
        plVar15 = (longlong *)(ulonglong)uStack_140;
        uStack_12c = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_140)
        goto LAB_1480c2c2d;
        uVar18 = *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar9 * 4 + 4);
      }
      uStack_13c = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_13c * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_19c = (int)lVar13;
      uStack_12c = (local_128 - 1) + local_19c;
      if ((int)uVar8 < (int)uStack_12c) {
        uStack_12c = uVar8;
      }
    }
LAB_1480c2c2d:
    uVar8 = *(uint *)(plVar17 + 5);
    uStack_124 = local_3c;
    uVar18 = uVar8 & 0xffffffe0;
    iStack_120 = (int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34);
    uStack_130 = 0xffffffff;
    TStack_110._padding_ = CONCAT44(uStack_13c,uStack_140);
    TStack_110.CurrentBitIndex = uStack_12c;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar8 >> 5;
    TStack_110._28_4_ = local_3c;
    TStack_110.BaseBitIndex = local_128;
    uStack_f0 = CONCAT44(uStack_11c,iStack_120);
    local_148 = plVar17;
    local_118 = plVar17;
    TStack_110.Array = local_138;
    if (((int)uVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(plVar17 + 5);
    if (uVar8 != uVar2) {
      plVar15 = (longlong *)plVar17[4];
      if ((longlong *)plVar17[4] == (longlong *)0x0) {
        plVar15 = plVar17 + 2;
      }
      uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar9 * 4);
      while (uVar8 == 0) {
        lVar13 = (longlong)iVar9;
        uVar18 = uVar18 + 0x20;
        iVar9 = iVar9 + 1;
        uVar8 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_1480c2d40;
        uVar8 = *(uint *)((longlong)plVar15 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_198 = (int)lVar13;
      uVar8 = local_198 + -1 + uVar18;
      if ((int)uVar2 < (int)uVar8) {
        uVar8 = uVar2;
      }
    }
LAB_1480c2d40:
    while( true ) {
      plVar15 = local_118;
      if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
        local_1d8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      lVar13 = (longlong)TStack_110.CurrentBitIndex;
      if (((TStack_110.CurrentBitIndex == uVar8) &&
          (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2))) &&
         (plVar15 == plVar17)) break;
      lVar4 = *plVar15;
      pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                          ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                           (param_2->InstancedStruct).StructMemory);
      FVar6 = pFVar10->NameOverride;
      if (pFVar10->NameOverride == (FName)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,&local_1ac);
        FVar6 = local_1ac;
      }
      local_1ac = FVar6;
      if (local_1ac == *(FName *)(lVar4 + lVar13 * 0x14)) {
        if (2 < (byte)LogNetworkMetrics._0_1_) {
          pUVar11 = FWeakObjectPtr::Get(local_res10);
          local_178 = *(FName *)(*(longlong *)&pUVar11->field_0x10 + 0x18);
          ::FName::ToString(&local_178,&local_158);
          pFVar10 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                              ((param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
                               (param_2->InstancedStruct).StructMemory);
          FVar6 = pFVar10->NameOverride;
          if (pFVar10->NameOverride == (FName)0x0) {
            (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,&local_1a4);
            FVar6 = local_1a4;
          }
          local_1a4 = FVar6;
          ::FName::ToString(&local_1a4,local_68);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
        }
        local_c0 = local_res10;
        local_c8 = param_2;
        `UNetworkMetricsDatabase::RegisterMutator'::__l86::<lambda_2>::operator()(&local_c8);
        return;
      }
      TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
    }
  }
  pUVar11 = FWeakObjectPtr::Get(local_res10);
  if (((*(TInstancedStruct<FNetworkMetricsMutator> **)&pUVar11[1].field_0x8 <= param_2) &&
      (param_2 < *(TInstancedStruct<FNetworkMetricsMutator> **)&pUVar11[1].field_0x8 +
                 *(int *)&pUVar11[1].field_0x14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = *(int *)&pUVar11[1].field_0x10;
  if (iVar9 == *(int *)&pUVar11[1].field_0x14) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&pUVar11[1].field_0x8,
                       (int *)&pUVar11[1].field_0x14);
  }
  *(int *)&pUVar11[1].field_0x10 = iVar9 + 1;
  this_00 = (FInstancedStruct *)(*(longlong *)&pUVar11[1].field_0x8 + (longlong)iVar9 * 0x10);
  (this_00->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this_00->StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (this_00,(param_2->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
             (param_2->InstancedStruct).StructMemory);
  return;
}

// Reset @ 1480cc4d0

void __thiscall UNetworkMetricsDatabase::Reset(UNetworkMetricsDatabase *this)

{
  TSet<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>,FDefaultSetAllocator>
           *)&this->MetricInts);
  TSet<TTuple<FName,UE::Net::FNetworkMetric<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UE::Net::FNetworkMetric<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>,FDefaultSetAllocator>
           *)&this->MetricFloats);
  TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,TDefaultMapHashableKeyFuncs<FName,enum_UNetworkMetricsDatabase::EMetricType,0>,FDefaultSetAllocator>
  ::Reset(&this->MetricTypes);
  TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
           *)&this->LastReportListener);
  TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset(&this->ListenersToMetrics);
  return;
}

// ResetListeners @ 1480cc620

void __thiscall UNetworkMetricsDatabase::ResetListeners(UNetworkMetricsDatabase *this)

{
  TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double,0>,FDefaultSetAllocator>
           *)&this->LastReportListener);
  TSet<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset(&this->ListenersToMetrics);
  return;
}

// SetFloat @ 1480d3130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::SetFloat(UNetworkMetricsDatabase *this,FName param_1,float param_2)

{
  FNetworkMetric<float> *pFVar1;
  FName local_res10 [3];
  FString local_28 [2];
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
                   *)&this->MetricFloats,param_1);
  if (pFVar1 != (FNetworkMetric<float> *)0x0) {
    pFVar1->Value = param_2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetInt @ 1480d3530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::SetInt(UNetworkMetricsDatabase *this,FName param_1,long64 param_2)

{
  FNetworkMetric<__int64> *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
                   *)&this->MetricInts,param_1);
  if (pFVar1 != (FNetworkMetric<__int64> *)0x0) {
    pFVar1->Value = param_2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetMaxFloat @ 1480d3610

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::SetMaxFloat(UNetworkMetricsDatabase *this,FName param_1,float param_2)

{
  FNetworkMetric<float> *pFVar1;
  float fVar2;
  FName local_res10 [3];
  FString local_28 [2];
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
                   *)&this->MetricFloats,param_1);
  if (pFVar1 != (FNetworkMetric<float> *)0x0) {
    fVar2 = pFVar1->Value;
    if (pFVar1->Value <= param_2) {
      fVar2 = param_2;
    }
    pFVar1->Value = fVar2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetMaxInt @ 1480d36b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::SetMaxInt(UNetworkMetricsDatabase *this,FName param_1,long64 param_2)

{
  FNetworkMetric<__int64> *pFVar1;
  longlong lVar2;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
                   *)&this->MetricInts,param_1);
  if (pFVar1 != (FNetworkMetric<__int64> *)0x0) {
    lVar2 = pFVar1->Value;
    if (pFVar1->Value < param_2) {
      lVar2 = param_2;
    }
    pFVar1->Value = lVar2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetMinFloat @ 1480d3740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::SetMinFloat(UNetworkMetricsDatabase *this,FName param_1,float param_2)

{
  FNetworkMetric<float> *pFVar1;
  float fVar2;
  FName local_res10 [3];
  FString local_28 [2];
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<float>,0>_>
                   *)&this->MetricFloats,param_1);
  if (pFVar1 != (FNetworkMetric<float> *)0x0) {
    fVar2 = pFVar1->Value;
    if (param_2 <= pFVar1->Value) {
      fVar2 = param_2;
    }
    pFVar1->Value = fVar2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// SetMinInt @ 1480d37e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetworkMetricsDatabase::SetMinInt(UNetworkMetricsDatabase *this,FName param_1,long64 param_2)

{
  FNetworkMetric<__int64> *pFVar1;
  longlong lVar2;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
           ::Find((TMapBase<FName,UE::Net::FNetworkMetric<__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetworkMetric<__int64>,0>_>
                   *)&this->MetricInts,param_1);
  if (pFVar1 != (FNetworkMetric<__int64> *)0x0) {
    lVar2 = pFVar1->Value;
    if (param_2 < pFVar1->Value) {
      lVar2 = param_2;
    }
    pFVar1->Value = lVar2;
    return true;
  }
  if (2 < (byte)LogNetworkMetrics._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// StaticRegisterNativesUNetworkMetricsDatabase @ 1480d5710

void __cdecl UNetworkMetricsDatabase::StaticRegisterNativesUNetworkMetricsDatabase(void)

{
  return;
}

// operator() @ 150523770

bool __thiscall `UNetworkMetricsDatabase::CreateFloat'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836372>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836372>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505237d7;
    }
  }
  bVar2 = false;
LAB_1505237d7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150523810

bool __thiscall `UNetworkMetricsDatabase::CreateInt'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836384>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836384>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150523877;
    }
  }
  bVar2 = false;
LAB_150523877:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505238b0

bool __thiscall
`UNetworkMetricsDatabase::HasReportIntervalPassed'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836738>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836738>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150523ae0

bool __thiscall
`UNetworkMetricsDatabase::AddMetricToSnapshot'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836537>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836537>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150523b47;
    }
  }
  bVar2 = false;
LAB_150523b47:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150523c40

bool __thiscall `UNetworkMetricsDatabase::Register'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836659>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836659>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150523ca7;
    }
  }
  bVar2 = false;
LAB_150523ca7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150523ce0

bool __thiscall
`UNetworkMetricsDatabase::ProcessListeners'::__l46::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  FNetworkMetricsMutator *pFVar5;
  bool bVar6;
  FName local_res10 [3];
  FString local_18;
  
  bVar6 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836625>);
  if (bVar3) {
    pFVar5 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                       ((UScriptStruct *)**(undefined8 **)this,(void *)(*(undefined8 **)this)[1]);
    FVar2 = pFVar5->NameOverride;
    if (pFVar5->NameOverride == (FName)0x0) {
      (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,local_res10);
      FVar2 = local_res10[0];
    }
    local_res10[0] = FVar2;
    ::FName::ToString(local_res10,&local_18);
    bVar6 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836625>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150523d76;
    }
  }
  bVar3 = false;
LAB_150523d76:
  if ((bVar6) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150523db0

bool __thiscall
`UNetworkMetricsDatabase::RegisterMutator'::__l58::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FNetworkMetricsMutator *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836706>);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)((longlong)this + 8));
    local_res18[0] = *(FName *)(*(longlong *)&pUVar7->field_0x10 + 0x18);
    ::FName::ToString(local_res18,&local_38);
    pFVar8 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                       ((UScriptStruct *)**(undefined8 **)this,(void *)(*(undefined8 **)this)[1]);
    FVar4 = pFVar8->NameOverride;
    if (pFVar8->NameOverride == (FName)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8,&local_res10);
      FVar4 = local_res10;
    }
    local_res10 = FVar4;
    ::FName::ToString(&local_res10,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836706>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150523e93;
    }
  }
  bVar5 = false;
LAB_150523e93:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1505240f0

bool __thiscall `UNetworkMetricsDatabase::Register'::__l36::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836669>);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)((longlong)this + 8));
    local_res10 = *(FName *)(*(longlong *)&pUVar6->field_0x10 + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    ::FName::ToString(*(FName **)this,&local_18);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836669>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505241a0;
    }
  }
  bVar4 = false;
LAB_1505241a0:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505241f0

bool __thiscall
`UNetworkMetricsDatabase::RegisterMutator'::__l86::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  FNetworkMetricsMutator *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836721>);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)((longlong)this + 8));
    local_res18[0] = *(FName *)(*(longlong *)&pUVar7->field_0x10 + 0x18);
    ::FName::ToString(local_res18,&local_38);
    pFVar8 = UE::StructUtils::GetStructRef<FNetworkMetricsMutator>
                       ((UScriptStruct *)**(undefined8 **)this,(void *)(*(undefined8 **)this)[1]);
    FVar4 = pFVar8->NameOverride;
    if (pFVar8->NameOverride == (FName)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8,&local_res10);
      FVar4 = local_res10;
    }
    local_res10 = FVar4;
    ::FName::ToString(&local_res10,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836721>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1505242d3;
    }
  }
  bVar5 = false;
LAB_1505242d3:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1505243d0

bool __thiscall
`UNetworkMetricsDatabase::AddMetricToSnapshot'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7549168719444836545>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7549168719444836545>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150524437;
    }
  }
  bVar2 = false;
LAB_150524437:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

