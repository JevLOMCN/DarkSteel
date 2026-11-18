// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b48ed00

UClass * __cdecl UDS_EmissiveEffectAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EmissiveEffectAbilityData",
               &Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_EmissiveEffectAbilityData,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EmissiveEffectAbilityData>,
               InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton;
}

// UDS_EmissiveEffectAbilityData @ 14b4922a0

UDS_EmissiveEffectAbilityData * __thiscall
UDS_EmissiveEffectAbilityData::UDS_EmissiveEffectAbilityData
          (UDS_EmissiveEffectAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EmissiveEffectAbilityData__6B_;
  *(undefined8 *)&this->OnCahngedEmissiveEffectDelegate = 0;
  *(undefined8 *)&(this->OnCahngedEmissiveEffectDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCahngedEmissiveEffectDelegate).field_0x10 = 0;
  this->PreviousEmissiveEffectType = None;
  this->CurrentEmissiveEffectType = None;
  (this->EmissiveEffectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveEffectList).ArrayNum = 0;
  (this->EmissiveEffectList).ArrayMax = 0;
  *(undefined8 *)&this->EmissiveEffectTimerHandleMap = 0;
  *(undefined8 *)&(this->EmissiveEffectTimerHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->EmissiveEffectTimerHandleMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnCahngedEmissiveEffectDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EmissiveEffectTimerHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x48 = 0;
  return this;
}

// UDS_EmissiveEffectAbilityData @ 14b492340

UDS_EmissiveEffectAbilityData * __thiscall
UDS_EmissiveEffectAbilityData::UDS_EmissiveEffectAbilityData
          (UDS_EmissiveEffectAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EmissiveEffectAbilityData__6B_;
  *(undefined8 *)&this->OnCahngedEmissiveEffectDelegate = 0;
  *(undefined8 *)&(this->OnCahngedEmissiveEffectDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCahngedEmissiveEffectDelegate).field_0x10 = 0;
  this->PreviousEmissiveEffectType = None;
  this->CurrentEmissiveEffectType = None;
  (this->EmissiveEffectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmissiveEffectList).ArrayNum = 0;
  (this->EmissiveEffectList).ArrayMax = 0;
  *(undefined8 *)&this->EmissiveEffectTimerHandleMap = 0;
  *(undefined8 *)&(this->EmissiveEffectTimerHandleMap).field_0x8 = 0;
  *(undefined8 *)&(this->EmissiveEffectTimerHandleMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnCahngedEmissiveEffectDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x28 = 0;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x34 = 0;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EmissiveEffectTimerHandleMap).field_0x40 = 0;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x48 = 0;
  return this;
}

// ~UDS_EmissiveEffectAbilityData @ 14b493440

void __thiscall
UDS_EmissiveEffectAbilityData::~UDS_EmissiveEffectAbilityData(UDS_EmissiveEffectAbilityData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_EmissiveEffectAbilityData__6B_;
  *(undefined4 *)&(this->EmissiveEffectTimerHandleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EmissiveEffectTimerHandleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_EmissiveEffectType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_EmissiveEffectType,FTimerHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EmissiveEffectTimerHandleMap);
  pFVar2 = (this->EmissiveEffectList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCahngedEmissiveEffectDelegate).field_0x8,
             *(int *)&(this->OnCahngedEmissiveEffectDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnCahngedEmissiveEffectDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCahngedEmissiveEffectDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b494de0

UClass * __cdecl UDS_EmissiveEffectAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EmissiveEffectAbilityData",
               &Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_EmissiveEffectAbilityData,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_EmissiveEffectAbilityData>,
               InternalVTableHelperCtorCaller<UDS_EmissiveEffectAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EmissiveEffectAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_EmissiveEffectAbilityData @ 14b495800

void __cdecl UDS_EmissiveEffectAbilityData::StaticRegisterNativesUDS_EmissiveEffectAbilityData(void)

{
  return;
}

// AddEmissiveEffect @ 14b9df170

void __thiscall
UDS_EmissiveEffectAbilityData::AddEmissiveEffect
          (UDS_EmissiveEffectAbilityData *this,FDS_EmissiveEffectSpec *param_1)

{
  int *piVar1;
  int iVar2;
  
  AddTimer(this,&param_1->Type,param_1->Duration);
  iVar2 = (this->EmissiveEffectList).ArrayNum;
  piVar1 = &(this->EmissiveEffectList).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->EmissiveEffectList).AllocatorInstance,piVar1);
  }
  (this->EmissiveEffectList).ArrayNum = iVar2 + 1;
  *(EDS_EmissiveEffectType *)
   ((this->EmissiveEffectList).AllocatorInstance.Data + (longlong)iVar2 * 4) = param_1->Type;
  this->PreviousEmissiveEffectType = None;
  this->CurrentEmissiveEffectType = param_1->Type;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCahngedEmissiveEffectDelegate);
  return;
}

// AddEmissiveEffect @ 14b9df200

void __cdecl
UDS_EmissiveEffectAbilityData::AddEmissiveEffect(ulong64 param_1,FDS_EmissiveEffectSpec *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_EmissiveEffectAbilityData *this;
  ulong64 local_res8 [2];
  undefined1 local_res18;
  FWeakObjectPtr local_res20;
  
  local_res18 = 0x6b;
  local_res8[0] = param_1;
  UDS_AbilityDataSet::GetAbilityData<UDS_EmissiveEffectAbilityData>
            ((ulong64 *)&local_res20,(EDS_AbilityTagType *)local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    this = (UDS_EmissiveEffectAbilityData *)FWeakObjectPtr::Get(&local_res20);
    AddTimer(this,&param_2->Type,param_2->Duration);
    iVar4 = (this->EmissiveEffectList).ArrayNum;
    piVar1 = &(this->EmissiveEffectList).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->EmissiveEffectList).AllocatorInstance,piVar1);
    }
    (this->EmissiveEffectList).ArrayNum = iVar4 + 1;
    *(EDS_EmissiveEffectType *)
     ((this->EmissiveEffectList).AllocatorInstance.Data + (longlong)iVar4 * 4) = param_2->Type;
    this->PreviousEmissiveEffectType = None;
    this->CurrentEmissiveEffectType = param_2->Type;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCahngedEmissiveEffectDelegate);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7551987107049242575>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_EmissiveEffectAbilityData.cpp"
                       ,0x31,"emissiveEffectData.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AddTimer @ 14b9e0d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_EmissiveEffectAbilityData::AddTimer
          (UDS_EmissiveEffectAbilityData *this,EDS_EmissiveEffectType *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerUnifiedDelegate *pFVar5;
  undefined1 auStackY_108 [32];
  FDelegateAllocation local_d8;
  FTimerHandle local_c8;
  TPairInitializer<EDS_EmissiveEffectType_const_&,FTimerHandle_&> local_c0;
  EDS_EmissiveEffectType *local_b0;
  FTimerHandle *local_a8;
  undefined1 local_a0;
  FDelegateAllocation *local_98;
  FTimerUnifiedDelegate local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8.Handle = 0;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  local_d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d8.DelegateSize = 0;
  local_a0 = 0;
  local_98 = &local_d8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_d8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_EmissiveEffectType____6B_
    ;
    *(EDS_EmissiveEffectType *)(puVar3 + 1) = *param_1;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_EmissiveEffectAbilityData____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__W4EDS_EmissiveEffectType____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_EmissiveEffectAbilityData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_c0.Value = (FTimerHandle *)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_EmissiveEffectAbilityData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_c0.Value);
    puVar3[4] = RemoveEmissiveEffect;
  }
  pFVar5 = FTimerUnifiedDelegate::FTimerUnifiedDelegate
                     (&local_88,
                      (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                      &local_d8);
  FTimerManager::InternalSetTimer(this_00,&local_c8,pFVar5,param_2,false,__real_bf800000);
  if (3 < local_88.VariantDelegate.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_88.VariantDelegate.TypeIndex])(&local_88);
  if ((local_d8.DelegateSize != 0) &&
     (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d8,0,0,0x10);
    local_d8.DelegateSize = 0;
  }
  if (local_d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d8.DelegateAllocator);
  }
  local_a8 = &local_c8;
  local_b0 = param_1;
  TSet<TTuple<enum_EDS_EmissiveEffectType,FTimerHandle>,TDefaultMapHashableKeyFuncs<enum_EDS_EmissiveEffectType,FTimerHandle,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_EmissiveEffectType_const_&,FTimerHandle_&>_>
            (&this->EmissiveEffectTimerHandleMap,&local_c0,(bool *)&local_b0);
  return;
}

// ClearTimer @ 14b9e3550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_EmissiveEffectAbilityData::ClearTimer
          (UDS_EmissiveEffectAbilityData *this,EDS_EmissiveEffectType *param_1)

{
  longlong lVar1;
  int iVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  undefined1 *puVar4;
  FTimerHandle *pFVar5;
  
  if (*(int *)&(this->EmissiveEffectTimerHandleMap).field_0x8 !=
      *(int *)&(this->EmissiveEffectTimerHandleMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EmissiveEffectTimerHandleMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EmissiveEffectTimerHandleMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->EmissiveEffectTimerHandleMap).field_0x48 - Hit &
                              *param_1) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)&this->EmissiveEffectTimerHandleMap + (longlong)iVar2 * 0x18,
            *(EDS_EmissiveEffectType *)
             (*(longlong *)&this->EmissiveEffectTimerHandleMap + (longlong)iVar2 * 0x18) != *param_1
            ) {
        iVar2 = *(int *)(lVar1 + 0x10);
        if (iVar2 == -1) {
          return;
        }
      }
      pFVar5 = (FTimerHandle *)(lVar1 + 8);
      if (lVar1 == 0) {
        pFVar5 = (FTimerHandle *)0x0;
      }
      if (pFVar5 != (FTimerHandle *)0x0) {
        this_00 = FDS_TimerManager::Get((UObject *)0x0);
        pFVar3 = FTimerManager::FindTimer(this_00,pFVar5);
        if (pFVar3 != (FTimerData *)0x0) {
          FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar5->Handle);
        }
        pFVar5->Handle = 0;
      }
    }
  }
  return;
}

// Created @ 14b9e6410

void __thiscall UDS_EmissiveEffectAbilityData::Created(UDS_EmissiveEffectAbilityData *this)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar5 = EmissiveEffectTypeMap._48_4_;
  if (EmissiveEffectTypeMap._8_4_ == EmissiveEffectTypeMap._52_4_) {
    if (EmissiveEffectTypeMap._52_4_ == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,4,1,(ForAnyElementType *)&EmissiveEffectTypeMap,
                         (int *)&EmissiveEffectTypeMap.field_0x8,
                         (int *)&EmissiveEffectTypeMap.field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&EmissiveEffectTypeMap.field_0x10,false);
    }
    else {
      EmissiveEffectTypeMap._52_4_ = EmissiveEffectTypeMap._52_4_ + -1;
      EmissiveEffectTypeMap._48_4_ =
           *(int *)(EmissiveEffectTypeMap._0_8_ + 4 +
                   (longlong)(int)EmissiveEffectTypeMap._48_4_ * 0x28);
      if (EmissiveEffectTypeMap._52_4_ != 0) {
        *(undefined4 *)
         (EmissiveEffectTypeMap._0_8_ + (longlong)(int)EmissiveEffectTypeMap._48_4_ * 0x28) =
             0xffffffff;
      }
    }
    TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&EmissiveEffectTypeMap,&local_18,iVar5);
    pvVar3 = local_18.Pointer;
    if (local_18.Pointer !=
        (TSparseSetElement<TTuple<EDS_EmissiveEffectType,FDS_EmissiveEffectParams>_> *)0x0) {
      *(undefined4 *)local_18.Pointer = 0;
      uVar2 = EmptyEmissiveEffectParams._8_8_;
      *(undefined8 *)((longlong)local_18.Pointer + 4) = EmptyEmissiveEffectParams._0_8_;
      *(undefined8 *)((longlong)local_18.Pointer + 0xc) = uVar2;
      *(undefined8 *)((longlong)local_18.Pointer + 0x14) =
           EmptyEmissiveEffectParams.FresnelColor.field0_0x0._4_8_;
      *(float *)((longlong)local_18.Pointer + 0x1c) =
           EmptyEmissiveEffectParams.FresnelColor.field0_0x0._s_0.A;
      *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    }
    uVar1 = *(uint *)local_18.Pointer;
    local_res10[0] = local_18.Index;
    bVar4 = TSet<TTuple<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams>,TDefaultMapHashableKeyFuncs<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      (&EmissiveEffectTypeMap,uVar1,local_18.Pointer,local_res10,(bool *)0x0);
    if (!bVar4) {
      TSet<TTuple<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams>,TDefaultMapHashableKeyFuncs<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams,0>,FDefaultSetAllocator>
      ::RehashOrLink(&EmissiveEffectTypeMap,uVar1,pvVar3,local_res10[0]);
    }
    iVar5 = EmissiveEffectTypeMap._48_4_;
    if (EmissiveEffectTypeMap._52_4_ == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,4,1,(ForAnyElementType *)&EmissiveEffectTypeMap,
                         (int *)&EmissiveEffectTypeMap.field_0x8,
                         (int *)&EmissiveEffectTypeMap.field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&EmissiveEffectTypeMap.field_0x10,false);
    }
    else {
      EmissiveEffectTypeMap._52_4_ = EmissiveEffectTypeMap._52_4_ + -1;
      EmissiveEffectTypeMap._48_4_ =
           *(int *)(EmissiveEffectTypeMap._0_8_ + 4 +
                   (longlong)(int)EmissiveEffectTypeMap._48_4_ * 0x28);
      if (EmissiveEffectTypeMap._52_4_ != 0) {
        *(undefined4 *)
         (EmissiveEffectTypeMap._0_8_ + (longlong)(int)EmissiveEffectTypeMap._48_4_ * 0x28) =
             0xffffffff;
      }
    }
    TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&EmissiveEffectTypeMap,&local_18,iVar5);
    if (local_18.Pointer !=
        (TSparseSetElement<TTuple<EDS_EmissiveEffectType,FDS_EmissiveEffectParams>_> *)0x0) {
      *(undefined4 *)local_18.Pointer = 1;
      *(undefined4 *)((longlong)local_18.Pointer + 4) = 0x40400000;
      *(undefined4 *)((longlong)local_18.Pointer + 8) = 0x3dcccccd;
      *(undefined4 *)((longlong)local_18.Pointer + 0xc) = 0x3f800000;
      *(undefined4 *)((longlong)local_18.Pointer + 0x10) = 0x40200000;
      *(undefined4 *)((longlong)local_18.Pointer + 0x14) = 0x40000000;
      *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0x3fc00000;
      *(undefined4 *)((longlong)local_18.Pointer + 0x1c) = 0x3f800000;
      *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    }
    uVar1 = *(uint *)local_18.Pointer;
    local_res10[0] = local_18.Index;
    bVar4 = TSet<TTuple<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams>,TDefaultMapHashableKeyFuncs<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      (&EmissiveEffectTypeMap,uVar1,local_18.Pointer,local_res10,(bool *)0x0);
    if (!bVar4) {
      TSet<TTuple<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams>,TDefaultMapHashableKeyFuncs<enum_EDS_EmissiveEffectType,FDS_EmissiveEffectParams,0>,FDefaultSetAllocator>
      ::RehashOrLink(&EmissiveEffectTypeMap,uVar1,local_18.Pointer,local_res10[0]);
    }
  }
  return;
}

// Deleted @ 14b9e6d90

void __thiscall UDS_EmissiveEffectAbilityData::Deleted(UDS_EmissiveEffectAbilityData *this)

{
  return;
}

// GetCurrentEmissiveEffectParams @ 14b9eea70

FDS_EmissiveEffectParams * __thiscall
UDS_EmissiveEffectAbilityData::GetCurrentEmissiveEffectParams(UDS_EmissiveEffectAbilityData *this)

{
  longlong lVar1;
  EDS_EmissiveEffectType EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_EmissiveEffectParams *pFVar6;
  longlong lVar7;
  
  EVar2 = this->CurrentEmissiveEffectType;
  if (EmissiveEffectTypeMap._8_4_ != EmissiveEffectTypeMap._52_4_) {
    lVar7 = 0x154cf70e8;
    if (EmissiveEffectTypeMap._64_8_ != 0) {
      lVar7 = EmissiveEffectTypeMap._64_8_;
    }
    lVar1 = (ulonglong)(EmissiveEffectTypeMap._72_4_ - Hit & EVar2) * 4;
    for (iVar5 = *(int *)(lVar1 + lVar7); iVar5 != -1;
        iVar5 = *(int *)(EmissiveEffectTypeMap._0_8_ + 0x20 + (longlong)iVar5 * 0x28)) {
      if (*(EDS_EmissiveEffectType *)(EmissiveEffectTypeMap._0_8_ + (longlong)iVar5 * 0x28) == EVar2
         ) {
        lVar7 = 0x154cf70e8;
        if (EmissiveEffectTypeMap._64_8_ != 0) {
          lVar7 = EmissiveEffectTypeMap._64_8_;
        }
        iVar5 = *(int *)(lVar1 + lVar7);
        if (iVar5 == -1) goto LAB_14b9eeb18;
        goto LAB_14b9eeb00;
      }
    }
  }
  return &EmptyEmissiveEffectParams;
  while (iVar5 = *(int *)(lVar7 + 0x20), iVar5 != -1) {
LAB_14b9eeb00:
    lVar7 = EmissiveEffectTypeMap._0_8_ + (longlong)iVar5 * 0x28;
    if (*(EDS_EmissiveEffectType *)(EmissiveEffectTypeMap._0_8_ + (longlong)iVar5 * 0x28) == EVar2)
    {
      if (lVar7 != 0) goto LAB_14b9eeb40;
      goto LAB_14b9eeb1a;
    }
  }
LAB_14b9eeb18:
  lVar7 = 0;
LAB_14b9eeb1a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FDS_EmissiveEffectParams *)(*pcVar3)();
    return pFVar6;
  }
LAB_14b9eeb40:
  return (FDS_EmissiveEffectParams *)(lVar7 + 4);
}

// GetPrevEmissiveEffectParams @ 14b9f0ef0

FDS_EmissiveEffectParams * __thiscall
UDS_EmissiveEffectAbilityData::GetPrevEmissiveEffectParams(UDS_EmissiveEffectAbilityData *this)

{
  longlong lVar1;
  EDS_EmissiveEffectType EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_EmissiveEffectParams *pFVar6;
  longlong lVar7;
  
  EVar2 = this->PreviousEmissiveEffectType;
  if (EmissiveEffectTypeMap._8_4_ != EmissiveEffectTypeMap._52_4_) {
    lVar7 = 0x154cf70e8;
    if (EmissiveEffectTypeMap._64_8_ != 0) {
      lVar7 = EmissiveEffectTypeMap._64_8_;
    }
    lVar1 = (ulonglong)(EmissiveEffectTypeMap._72_4_ - Hit & EVar2) * 4;
    for (iVar5 = *(int *)(lVar1 + lVar7); iVar5 != -1;
        iVar5 = *(int *)(EmissiveEffectTypeMap._0_8_ + 0x20 + (longlong)iVar5 * 0x28)) {
      if (*(EDS_EmissiveEffectType *)(EmissiveEffectTypeMap._0_8_ + (longlong)iVar5 * 0x28) == EVar2
         ) {
        lVar7 = 0x154cf70e8;
        if (EmissiveEffectTypeMap._64_8_ != 0) {
          lVar7 = EmissiveEffectTypeMap._64_8_;
        }
        iVar5 = *(int *)(lVar1 + lVar7);
        if (iVar5 == -1) goto LAB_14b9f0f98;
        goto LAB_14b9f0f80;
      }
    }
  }
  return &EmptyEmissiveEffectParams;
  while (iVar5 = *(int *)(lVar7 + 0x20), iVar5 != -1) {
LAB_14b9f0f80:
    lVar7 = EmissiveEffectTypeMap._0_8_ + (longlong)iVar5 * 0x28;
    if (*(EDS_EmissiveEffectType *)(EmissiveEffectTypeMap._0_8_ + (longlong)iVar5 * 0x28) == EVar2)
    {
      if (lVar7 != 0) goto LAB_14b9f0fc0;
      goto LAB_14b9f0f9a;
    }
  }
LAB_14b9f0f98:
  lVar7 = 0;
LAB_14b9f0f9a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FDS_EmissiveEffectParams *)(*pcVar3)();
    return pFVar6;
  }
LAB_14b9f0fc0:
  return (FDS_EmissiveEffectParams *)(lVar7 + 4);
}

// RemoveEmissiveEffect @ 14ba0f610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_EmissiveEffectAbilityData::RemoveEmissiveEffect
          (UDS_EmissiveEffectAbilityData *this,EDS_EmissiveEffectType param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTimerManager *this_00;
  FTimerData *pFVar6;
  EDS_EmissiveEffectType EVar7;
  FTimerHandle *pFVar8;
  FTimerHandle *pFVar9;
  EDS_EmissiveEffectType EVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  FTimerHandle *pFVar15;
  EDS_EmissiveEffectType local_res10 [2];
  int local_res18;
  
  pFVar9 = (FTimerHandle *)0x0;
  EVar10 = None;
  local_res10[0] = param_1;
  if (*(int *)&(this->EmissiveEffectTimerHandleMap).field_0x8 !=
      *(int *)&(this->EmissiveEffectTimerHandleMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->EmissiveEffectTimerHandleMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->EmissiveEffectTimerHandleMap).field_0x38;
    }
    iVar5 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(this->EmissiveEffectTimerHandleMap).field_0x48 - Hit & param_1) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->EmissiveEffectTimerHandleMap + (longlong)iVar5 * 0x18;
        if (*(EDS_EmissiveEffectType *)
             (*(longlong *)&this->EmissiveEffectTimerHandleMap + (longlong)iVar5 * 0x18) == param_1)
        {
          pFVar8 = (FTimerHandle *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar8 = pFVar9;
          }
          if (pFVar8 != (FTimerHandle *)0x0) {
            this_00 = FDS_TimerManager::Get((UObject *)0x0);
            pFVar6 = FTimerManager::FindTimer(this_00,pFVar8);
            if (pFVar6 != (FTimerData *)0x0) {
              FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar8->Handle);
            }
            pFVar8->Handle = 0;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  pFVar2 = (this->EmissiveEffectList).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2 + (longlong)(this->EmissiveEffectList).ArrayMax * 4)) &&
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
  iVar5 = (this->EmissiveEffectList).ArrayNum;
  EVar7 = local_res10[0];
  if (iVar5 != 0) {
    pFVar2 = (this->EmissiveEffectList).AllocatorInstance.Data;
    bVar4 = *(EDS_EmissiveEffectType *)pFVar2 != local_res10[0];
    pFVar8 = pFVar9;
    pFVar15 = pFVar9;
    do {
      uVar11 = (uint)pFVar8;
      uVar12 = uVar11;
      do {
        pFVar9 = (FTimerHandle *)((longlong)&pFVar9->Handle + 1);
        uVar12 = uVar12 + 1;
        pFVar8 = (FTimerHandle *)(ulonglong)uVar12;
        if ((longlong)iVar5 <= (longlong)pFVar9) break;
      } while (bVar4 == (*(EDS_EmissiveEffectType *)(pFVar2 + (longlong)pFVar9 * 4) != EVar7));
      if (bVar4 != false) {
        uVar14 = (uint)pFVar15;
        if (uVar14 != uVar11) {
          memmove(pFVar2 + (longlong)(int)uVar14 * 4,pFVar2 + (longlong)(int)uVar11 * 4,
                  (longlong)(int)(uVar12 - uVar11) << 2);
          EVar7 = local_res10[0];
        }
        pFVar15 = (FTimerHandle *)(ulonglong)(uVar14 + (uVar12 - uVar11));
      }
      bVar4 = (bool)(bVar4 ^ 1);
    } while ((longlong)pFVar9 < (longlong)iVar5);
    local_res18 = (int)pFVar15;
    (this->EmissiveEffectList).ArrayNum = local_res18;
  }
  iVar5 = (this->EmissiveEffectList).ArrayNum;
  this->PreviousEmissiveEffectType = EVar7;
  if (0 < iVar5) {
    uVar12 = 0;
    if ((int)(iVar5 - 1U) < iVar5) {
      uVar12 = ~(iVar5 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar10 = *(EDS_EmissiveEffectType *)
              ((this->EmissiveEffectList).AllocatorInstance.Data +
              (longlong)(this->EmissiveEffectList).ArrayNum * 4 + -4);
  }
  this->CurrentEmissiveEffectType = EVar10;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCahngedEmissiveEffectDelegate);
  return;
}

// RemoveEmissiveEffect @ 14ba0f8d0

void __cdecl
UDS_EmissiveEffectAbilityData::RemoveEmissiveEffect(ulong64 param_1,EDS_EmissiveEffectType param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_EmissiveEffectAbilityData *this;
  ulong64 local_res8 [2];
  undefined1 local_res18;
  FWeakObjectPtr local_res20;
  
  local_res18 = 0x6b;
  local_res8[0] = param_1;
  UDS_AbilityDataSet::GetAbilityData<UDS_EmissiveEffectAbilityData>
            ((ulong64 *)&local_res20,(EDS_AbilityTagType *)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    this = (UDS_EmissiveEffectAbilityData *)FWeakObjectPtr::Get(&local_res20);
    RemoveEmissiveEffect(this,param_2);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7551987107049242564>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_EmissiveEffectAbilityData.cpp"
                       ,0x3c,"emissiveEffectData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ResetData @ 14ba18750

void __thiscall UDS_EmissiveEffectAbilityData::ResetData(UDS_EmissiveEffectAbilityData *this)

{
  return;
}

