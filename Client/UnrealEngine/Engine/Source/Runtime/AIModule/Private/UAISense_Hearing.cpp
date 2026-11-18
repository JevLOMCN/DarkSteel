// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 17

// StaticClass @ 146f85360

UClass * __cdecl UAISense_Hearing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Hearing",
               &Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton,
               StaticRegisterNativesUAISense_Hearing,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISense_Hearing>,
               InternalVTableHelperCtorCaller<UAISense_Hearing>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton;
}

// UAISense_Hearing @ 146f947b0

UAISense_Hearing * __thiscall
UAISense_Hearing::UAISense_Hearing(UAISense_Hearing *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Hearing__6B_;
  (this->NoiseEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoiseEvents).ArrayNum = 0;
  (this->NoiseEvents).ArrayMax = 0;
  *(undefined8 *)&this->DigestedProperties = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->DigestedProperties).field_0x34 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DigestedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  return this;
}

// UAISense_Hearing @ 146f94830

UAISense_Hearing * __thiscall
UAISense_Hearing::UAISense_Hearing(UAISense_Hearing *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UAISense_Hearing *local_res8;
  FDestructionSentinel local_38;
  longlong *local_20;
  
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Hearing__6B_;
  (this->NoiseEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NoiseEvents).ArrayNum = 0;
  (this->NoiseEvents).ArrayMax = 0;
  *(undefined8 *)&this->DigestedProperties = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->DigestedProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DigestedProperties).field_0x34 = 0;
  *(undefined8 *)&(this->DigestedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_38);
    local_20 = &this->_padding_;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Hearing____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = OnNewListenerImpl;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_38);
    local_20 = &this->_padding_;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Hearing____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = OnListenerUpdateImpl;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_38);
    local_20 = &this->_padding_;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Hearing____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = OnListenerRemovedImpl;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return this;
}

// ~UAISense_Hearing @ 146f96be0

void __thiscall UAISense_Hearing::~UAISense_Hearing(UAISense_Hearing *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAISense_Hearing__6B_;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DigestedProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DigestedProperties);
  pFVar2 = (this->NoiseEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146fb3cb0

UClass * __cdecl UAISense_Hearing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Hearing",
               &Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton,
               StaticRegisterNativesUAISense_Hearing,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISense_Hearing>,
               InternalVTableHelperCtorCaller<UAISense_Hearing>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Hearing.InnerSingleton;
}

// OnListenerRemovedImpl @ 146fbdcb0

void __thiscall
UAISense_Hearing::OnListenerRemovedImpl(UAISense_Hearing *this,FPerceptionListener *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  int iVar6;
  
  uVar1 = (param_1->ListenerID).Index;
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DigestedProperties).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DigestedProperties).field_0x48 - 1U & uVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->DigestedProperties).field_0x0;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x14) == uVar1) {
          if (iVar6 == -1) goto LAB_146fbdd0c;
          goto LAB_146fbdd32;
        }
        iVar6 = *(int *)(lVar2 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_146fbdd0c:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146fbdd32:
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
                   *)&this->DigestedProperties,iVar6);
  return;
}

// OnListenerUpdateImpl @ 146fbdfd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISense_Hearing::OnListenerUpdateImpl(UAISense_Hearing *this,FPerceptionListener *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAIPerceptionComponent *this_00;
  UAISenseConfig *pUVar5;
  UClass *pUVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  TMap<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>_>
  *this_01;
  longlong lVar10;
  int iVar11;
  uint local_res8 [2];
  int local_res10 [2];
  float local_res18;
  undefined4 uStackX_1c;
  uint *local_res20;
  FAINamedID<FAISenseCounter> local_28;
  
  local_res8[0] = (param_1->ListenerID).Index;
  if (((uint)(param_1->Filter).AcceptedChannelsMask >>
       (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) == 0) {
    if (*(int *)&(this->DigestedProperties).field_0x8 !=
        *(int *)&(this->DigestedProperties).field_0x34) {
      puVar9 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->DigestedProperties).field_0x38;
      }
      iVar11 = *(int *)(puVar9 + ((longlong)*(int *)&(this->DigestedProperties).field_0x48 - 1U &
                                 (longlong)(int)local_res8[0]) * 4);
      if (iVar11 != -1) {
        lVar10 = *(longlong *)&(this->DigestedProperties).field_0x0;
        while (*(uint *)(lVar10 + (longlong)iVar11 * 0x14) != local_res8[0]) {
          iVar11 = *(int *)(lVar10 + 0xc + (longlong)iVar11 * 0x14);
          if (iVar11 == -1) {
            return;
          }
        }
        TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
                         *)&this->DigestedProperties,iVar11);
      }
    }
    return;
  }
  this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  local_28.Index = *(uchar *)((longlong)&this->_padding_ + 4);
  local_28.Name = (FName)this->_padding_;
  pUVar5 = UAIPerceptionComponent::GetSenseConfig(this_00,&local_28);
  if (pUVar5 != (UAISenseConfig *)0x0) {
    pUVar6 = Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
    iVar11 = (int)pUVar6->_padding_;
    if ((iVar11 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar11 * 8)
        == &pUVar6->_padding_)) goto LAB_146fbe077;
  }
  pUVar5 = (UAISenseConfig *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SenseConfig",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Hearing.cpp"
                     ,0x6c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146fbe077:
  this_01 = &this->DigestedProperties;
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar9 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->DigestedProperties).field_0x38;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->DigestedProperties).field_0x48 - 1U & local_res8[0])
                               * 4);
    if (iVar11 != -1) {
      lVar10 = *(longlong *)&this_01->field_0x0;
      do {
        if (*(uint *)(lVar10 + (longlong)iVar11 * 0x14) == local_res8[0]) {
          if ((iVar11 != -1) && (lVar10 = lVar10 + (longlong)iVar11 * 0x14, lVar10 != 0))
          goto LAB_146fbe115;
          break;
        }
        iVar11 = *(int *)(lVar10 + 0xc + (longlong)iVar11 * 0x14);
      } while (iVar11 != -1);
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&>_>
            ((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
              *)this_01,(uint)local_res10,
             (TKeyInitializer<FAIGenericID<FPerceptionListenerCounter>_const_&> *)
             (ulonglong)local_res8[0],(bool *)&local_res20);
  lVar10 = *(longlong *)&this_01->field_0x0 + (longlong)local_res10[0] * 0x14;
LAB_146fbe115:
  uVar1 = *(uint *)((longlong)&pUVar5[1]._padding_ + 4);
  uVar7 = uVar1 >> 2 & 1;
  uVar4 = (uVar1 & 1) << 2;
  local_res18 = *(float *)&pUVar5[1]._padding_ * *(float *)&pUVar5[1]._padding_;
  uVar8 = uVar7 | uVar4 | uVar1 & 2;
  if ((uVar8 != (uVar7 | uVar4 | uVar1 & 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,(char)uVar8);
  *(ulonglong *)(lVar10 + 4) = CONCAT44(uStackX_1c,local_res18);
  return;
}

// OnNewListenerImpl @ 146fbf7b0

void __thiscall
UAISense_Hearing::OnNewListenerImpl(UAISense_Hearing *this,FPerceptionListener *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  float local_res18;
  undefined1 local_res1c;
  FConfigOfSenseID local_38;
  uint *local_28;
  float *local_20;
  
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (pUVar6 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListenerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Hearing.cpp"
                       ,0x5d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38.SenseID.Index = *(uchar *)((longlong)&this->_padding_ + 4);
  local_38.SenseID.Name = (FName)this->_padding_;
  uVar4 = TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_>::
          IndexOfByPredicate<_anonymous_namespace_::FConfigOfSenseID>
                    ((TArray<TObjectPtr<UAISenseConfig>,TSizedDefaultAllocator<32>_> *)
                     &pUVar6[4].field_0x20,&local_38);
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < *(int *)(pUVar6 + 5)) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar6 = *(UObject **)(*(longlong *)&pUVar6[4].field_0x20 + (longlong)(int)uVar4 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 == (UObject *)0x0) goto LAB_146fbf8b4;
      UE::GC::MarkAsReachable(pUVar6);
    }
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_146fbf8dc;
    }
  }
LAB_146fbf8b4:
  pUVar6 = (UObject *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SenseConfig",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Hearing.cpp"
                     ,0x5f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146fbf8dc:
  local_res18 = *(float *)(pUVar6 + 2) * *(float *)(pUVar6 + 2);
  uVar4 = *(uint *)&pUVar6[2].field_0xc;
  uVar8 = uVar4 >> 2 & 1;
  uVar5 = (uVar4 & 1) << 2;
  uVar9 = uVar8 | uVar5 | uVar4 & 2;
  if (uVar9 != (uVar8 | uVar5 | uVar4 & 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8[0] = (param_1->ListenerID).Index;
  local_28 = local_res8;
  local_res1c = (undefined1)uVar9;
  local_20 = &local_res18;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Hearing::FDigestedHearingProperties_const_&>_>
            ((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0>,FDefaultSetAllocator>
              *)&this->DigestedProperties,
             (TPairInitializer<FAIGenericID<FPerceptionListenerCounter>_&&,UAISense_Hearing::FDigestedHearingProperties_const_&>
              *)local_res10,(bool *)&local_28);
  return;
}

// PostInitProperties @ 146fc2bf0

void __thiscall UAISense_Hearing::PostInitProperties(UAISense_Hearing *this)

{
  UAISense::PostInitProperties((UAISense *)this);
  if ((this->_padding_ & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146fc2c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x300))(this);
    return;
  }
  return;
}

// RegisterEvent @ 146fc7380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Hearing::RegisterEvent(UAISense_Hearing *this,FAINoiseEvent *param_1)

{
  int *piVar1;
  TArray<FAINoiseEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FAINoiseEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->NoiseEvents;
  pFVar3 = (FAINoiseEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->NoiseEvents).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NoiseEvents).ArrayNum;
  piVar1 = &(this->NoiseEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NoiseEvents).ArrayNum = iVar6 + 1;
  FAINoiseEvent::FAINoiseEvent
            ((FAINoiseEvent *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x40),param_1);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// RegisterEventsBatch @ 146fc7570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Hearing::RegisterEventsBatch
          (UAISense_Hearing *this,TArray<FAINoiseEvent,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAINoiseEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->NoiseEvents;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,iVar2,&pTVar1->AllocatorInstance,&(this->NoiseEvents).ArrayNum,
                       &(this->NoiseEvents).ArrayMax);
    ConstructItems<FAINoiseEvent,FAINoiseEvent,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x40,
               (FAINoiseEvent *)(param_1->AllocatorInstance).Data,iVar2);
  }
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// RegisterMakeNoiseDelegate @ 146fc77f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAISense_Hearing::RegisterMakeNoiseDelegate(UAISense_Hearing *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor__MPEAVAPawn__AEBU__TVector_N_Math_UE__MVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVAActor__MPEAVAPawn__AEBU__TVector_N_Math_UE__MVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UAIPerceptionSystem::MakeNoiseImpl;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  AActor::SetMakeNoiseDelegate
            ((TDelegate<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
              *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

// RegisterWrappedEvent @ 146fc98e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense_Hearing::RegisterWrappedEvent(UAISense_Hearing *this,UAISenseEvent *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FAINoiseEvent local_48;
  
  if (param_1 != (UAISenseEvent *)0x0) {
    pUVar4 = Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      FAINoiseEvent::Compile((FAINoiseEvent *)(param_1 + 1));
      local_48.Age = *(float *)(param_1 + 1);
      local_48.NoiseLocation.field0_0x0._s_0.X = (double)*(undefined8 *)&param_1[1].field_0x8;
      local_48.NoiseLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)&param_1[1].field_0x10;
      local_48.Instigator.field0_0x0 =
           (TObjectPtr<AActor>_u_0)((TObjectPtr<AActor>_u_0 *)(param_1 + 2))->DebugPtr;
      local_48.NoiseLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)&param_1[1].field_0x18;
      local_48.MaxRange = *(float *)&param_1[1].field_0x24;
      local_48.Loudness = *(float *)&param_1[1].field_0x20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_48.Instigator.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_48.Instigator.field0_0x0);
      }
      local_48.Tag.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x8;
      local_48.Tag.Number = *(uint *)&param_1[2].field_0xc;
      local_48.TeamIdentifier.TeamID = param_1[2].field_0x10;
      RegisterEvent(this,&local_48);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5812987344621403968>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Hearing.cpp"
                     ,0xc0,"HearingEvent");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ReportNoiseEvent @ 146fcc640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAISense_Hearing::ReportNoiseEvent
          (UObject *param_1,TVector<double> *param_2,float param_3,AActor *param_4,float param_5,
          FName param_6)

{
  UAIPerceptionSystem *this;
  FAINoiseEvent local_58;
  
  this = UAIPerceptionSystem::GetCurrent(param_1);
  if (this != (UAIPerceptionSystem *)0x0) {
    local_58.NoiseLocation.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_58.NoiseLocation.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_58.Age = 0.0;
    local_58.NoiseLocation.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_58.MaxRange = param_5;
    local_58.Loudness = param_3;
    local_58.Instigator.field0_0x0 = (TObjectPtr<AActor>_u_0)param_4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    local_58.Tag = param_6;
    local_58.TeamIdentifier = (FGenericTeamId)FGenericTeamId::NoTeam.TeamID;
    FAINoiseEvent::Compile(&local_58);
    UAIPerceptionSystem::OnEvent<FAINoiseEvent,UAISense_Hearing>(this,&local_58);
  }
  return;
}

// StaticRegisterNativesUAISense_Hearing @ 146fd35f0

void __cdecl UAISense_Hearing::StaticRegisterNativesUAISense_Hearing(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAISense_Hearing_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 146fdbf30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UAISense_Hearing::Update(UAISense_Hearing *this)

{
  TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
  *pTVar1;
  byte bVar2;
  FGenericTeamId FVar3;
  FGenericTeamId FVar4;
  UAIPerceptionSystem *this_00;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  float fVar10;
  double dVar11;
  bool bVar12;
  Type TVar13;
  ulonglong uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  uint local_res18;
  FScriptContainerElement *local_res20;
  undefined1 auStack_180 [16];
  uint uStack_170;
  uint uStack_16c;
  longlong local_168;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_160;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *local_158;
  undefined2 local_150;
  FAIStimulus local_148;
  undefined1 local_f0 [32];
  longlong local_d0;
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  *pTStack_c8;
  
  if ((this->_padding_ == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PerceptionSystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                          ,0x40,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    fVar22 = (float)(*pcVar6)();
    return fVar22;
  }
  this_00 = (UAIPerceptionSystem *)this->_padding_;
  pTVar1 = &this_00->ListenerContainer;
  if (this->SpeedOfSoundSq <= 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = __real_3f800000 / this->SpeedOfSoundSq;
  }
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_f0,
             (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
              *)pTVar1);
  dVar11 = __real_3fb0000000000000;
  fVar10 = __real_7f7fffff;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_150 = 0;
  auStack_180._0_8_ = local_f0._8_8_;
  stack0xfffffffffffffe88 = local_f0._16_16_;
  local_168 = local_d0;
  pTStack_160 = pTStack_c8;
  uVar14 = local_f0._24_8_ >> 0x20;
  local_158 = (TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (local_f0._28_4_ < *(int *)(local_f0._16_8_ + 0x18)) {
    do {
      lVar20 = (longlong)(int)uVar14 * 0x60 + *(longlong *)local_f0._0_8_;
      if ((*(uint *)(lVar20 + 0x10) >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) != 0)
      {
        if (*(int *)&(this->DigestedProperties).field_0x8 !=
            *(int *)&(this->DigestedProperties).field_0x34) {
          puVar5 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
          puVar19 = &(this->DigestedProperties).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar19 = puVar5;
          }
          iVar15 = *(int *)(puVar19 +
                           (ulonglong)
                           (*(int *)&(this->DigestedProperties).field_0x48 - 1U &
                           *(uint *)(lVar20 + 0x50)) * 4);
          if (iVar15 != -1) {
            do {
              lVar21 = *(longlong *)&this->DigestedProperties + (longlong)iVar15 * 0x14;
              if (*(uint *)(*(longlong *)&this->DigestedProperties + (longlong)iVar15 * 0x14) ==
                  *(uint *)(lVar20 + 0x50)) {
                if (lVar21 == 0) goto LAB_146fdc111;
                goto LAB_146fdc137;
              }
              iVar15 = *(int *)(lVar21 + 0xc);
            } while (iVar15 != -1);
          }
        }
        lVar21 = 0;
LAB_146fdc111:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          fVar22 = (float)(*pcVar6)();
          return fVar22;
        }
LAB_146fdc137:
        local_res18 = (this->NoiseEvents).ArrayNum;
        uVar14 = (ulonglong)(int)local_res18;
        pFVar17 = (this->NoiseEvents).AllocatorInstance.Data;
        pFVar16 = pFVar17 + uVar14 * 0x40;
        local_res20 = pFVar16;
        while( true ) {
          if ((this->NoiseEvents).ArrayNum != (int)uVar14) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FAINoiseEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar17 == pFVar16) break;
          dVar24 = *(double *)(lVar20 + 0x28) - *(double *)(pFVar17 + 0x18);
          fVar25 = *(float *)(pFVar17 + 0x20);
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          dVar8 = *(double *)(lVar20 + 0x20) - *(double *)(pFVar17 + 0x10);
          dVar7 = *(double *)(lVar20 + 0x18) - *(double *)(pFVar17 + 8);
          dVar24 = dVar8 * dVar8 + dVar7 * dVar7 + dVar24 * dVar24;
          if ((dVar24 <= (double)(fVar25 * fVar25 * *(float *)(lVar21 + 4))) &&
             ((*(float *)(pFVar17 + 0x24) <= 0.0 ||
              (fVar23 = *(float *)(pFVar17 + 0x24) * fVar25, dVar24 <= (double)(fVar23 * fVar23)))))
          {
            bVar2 = *(byte *)(lVar21 + 8);
            FVar3.TeamID = *(uchar *)(pFVar17 + 0x38);
            FVar4.TeamID = *(uchar *)(lVar20 + 0x48);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
              ::__l2::AllFlags = '\a';
              _Init_thread_footer(&`public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            if ((bVar2 == `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
                          ::__l2::AllFlags) ||
               (TVar13 = FGenericTeamId::GetAttitude(FVar4,FVar3), pFVar16 = local_res20,
               (bVar2 & (byte)(1 << ((byte)TVar13 & 0x1f))) != 0)) {
              fVar23 = (float)SQRT((double)fVar22 * dVar24);
              dVar24 = (double)fVar23 - SQRT((double)fVar22 * dVar24);
              if ((dVar11 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar9,
                                             SUB84(dVar24,0) & uVar18)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FloatFitsIn<OutType>(In, Precision)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                      ,0xc0,L"Loss of data caused by narrowing conversion"), bVar12)
                 ) {
                pcVar6 = (code *)swi(3);
                fVar22 = (float)(*pcVar6)();
                return fVar22;
              }
              local_148.StimulusLocation.field0_0x0._s_0.X = (double)*(undefined8 *)(pFVar17 + 8);
              local_148.StimulusLocation.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar17 + 0x10)
              ;
              local_148.Tag = *(FName *)(pFVar17 + 0x30);
              local_148.StimulusLocation.field0_0x0._s_0.Z = (double)*(undefined8 *)(pFVar17 + 0x18)
              ;
              local_148.Age = 0.0;
              local_148.ReceiverLocation.field0_0x0._s_0.X = *(double *)(lVar20 + 0x18);
              local_148.ReceiverLocation.field0_0x0._s_0.Y = *(double *)(lVar20 + 0x20);
              local_148.ExpirationAge = 3.4028235e+38;
              local_148.ReceiverLocation.field0_0x0._s_0.Z = *(double *)(lVar20 + 0x28);
              local_148.Type.Index = 0xff;
              local_148.Strength = fVar25;
              ::FName::FName(&local_148.Type.Name,L"Invalid");
              local_148._84_4_ =
                   ((char)this->_padding_ == '\x01') + 2 | local_148._84_4_ & 0xfffffffa;
              local_148.Type.Index = *(uchar *)((longlong)&this->_padding_ + 4);
              local_148.Type.Name = (FName)this->_padding_;
              local_res10[0] = *(undefined4 *)(lVar20 + 0x50);
              UAIPerceptionSystem::RegisterDelayedStimulus
                        (this_00,(FAIGenericID<FPerceptionListenerCounter>)(uint)local_res10,fVar23,
                         *(AActor **)(pFVar17 + 0x28),&local_148);
              pFVar16 = local_res20;
            }
          }
          uVar14 = (ulonglong)local_res18;
          pFVar17 = pFVar17 + 0x40;
        }
      }
      uStack_170 = uStack_170 & ~auStack_180._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_180);
      uVar14 = (ulonglong)uStack_16c;
    } while ((int)uStack_16c < *(int *)(auStack_180._8_8_ + 0x18));
    if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
      iVar15 = 1;
      uVar18 = *(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34;
      if (3 < uVar18) {
        uVar14 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_158->HashSize < iVar15)) || (iVar15 < local_158->HashSize)) {
        local_158->HashSize = iVar15;
        TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
        ::Rehash(local_158);
      }
    }
  }
  (this->NoiseEvents).ArrayNum = 0;
  if ((this->NoiseEvents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->NoiseEvents).AllocatorInstance,0,&(this->NoiseEvents).ArrayMax);
  }
  return fVar10;
}

// execReportNoiseEvent @ 146fe7330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAISense_Hearing::execReportNoiseEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UAISystemBase *pUVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  AActor *pAVar8;
  UClass *pUVar9;
  UWorld *pUVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  UAIPerceptionSystem *this;
  wchar_t *pwVar13;
  float local_res10 [2];
  float local_res20 [2];
  FScriptContainerElement *local_f8;
  AActor *local_f0;
  UWorld *local_e8;
  FString local_e0;
  FAINoiseEvent local_c8;
  double local_88;
  double dStack_80;
  double local_78;
  FString local_70 [5];
  
  this = (UAIPerceptionSystem *)0x0;
  local_e8 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_f0 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_f8 = (FScriptContainerElement *)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pUVar10 = local_e8;
  pAVar8 = local_f0;
  pFVar7 = local_f8;
  fVar6 = local_res20[0];
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0.Data.AllocatorInstance.Data = local_f8;
  if (local_e8 != (UWorld *)0x0) {
    pUVar9 = Z_Construct_UClass_UWorld_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_)) {
      pUVar10 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar10,LogAndReturnNull);
      if (pUVar10 == (UWorld *)0x0) goto LAB_146fe7563;
    }
    pUVar4 = (pUVar10->AISystem).field0_0x0.DebugPtr;
    if (pUVar4 != (UAISystemBase *)0x0) {
      pUVar9 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) {
        pFVar11 = GetTypeName<UAISystem>(&local_e0);
        pwVar12 = L"";
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pFVar11 = GetFullNameForCastLogError<UAISystemBase>(local_70,pUVar4);
        if ((pFVar11->Data).ArrayNum != 0) {
          pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar12,pwVar13);
      }
      this = *(UAIPerceptionSystem **)&pUVar4[2].bInstantiateAISystemOnClient;
    }
  }
LAB_146fe7563:
  if (this != (UAIPerceptionSystem *)0x0) {
    local_c8.Loudness = fVar6;
    local_c8.MaxRange = fVar5;
    local_c8.Age = 0.0;
    local_c8.NoiseLocation.field0_0x0._s_0.X = local_88;
    local_c8.NoiseLocation.field0_0x0._s_0.Y = dStack_80;
    local_c8.Instigator.field0_0x0.DebugPtr = (TObjectPtr<AActor>_u_0)pAVar8;
    local_c8.NoiseLocation.field0_0x0._s_0.Z = local_78;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar8);
    }
    local_c8.Tag.Number = local_e0.Data.AllocatorInstance.Data._4_4_;
    local_c8.TeamIdentifier = (FGenericTeamId)FGenericTeamId::NoTeam.TeamID;
    local_c8.Tag.ComparisonIndex.Value = (uint)pFVar7;
    FAINoiseEvent::Compile(&local_c8);
    UAIPerceptionSystem::OnEvent<FAINoiseEvent,UAISense_Hearing>(this,&local_c8);
  }
  return;
}

