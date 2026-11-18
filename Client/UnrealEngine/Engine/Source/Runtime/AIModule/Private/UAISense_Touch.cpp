// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146fe88d0

UClass * __cdecl UAISense_Touch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Touch",
               &Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton,
               StaticRegisterNativesUAISense_Touch,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Touch>,
               InternalVTableHelperCtorCaller<UAISense_Touch>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton;
}

// UAISense_Touch @ 146febae0

UAISense_Touch * __thiscall
UAISense_Touch::UAISense_Touch(UAISense_Touch *this,FVTableHelper *param_1)

{
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Touch__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
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

// UAISense_Touch @ 146febb60

UAISense_Touch * __thiscall
UAISense_Touch::UAISense_Touch(UAISense_Touch *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UAISense_Touch *local_res8;
  FDestructionSentinel local_38;
  longlong *local_20;
  
  UAISense::UAISense((UAISense *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense_Touch__6B_;
  (this->RegisteredEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredEvents).ArrayNum = 0;
  (this->RegisteredEvents).ArrayMax = 0;
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Touch____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Touch____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAISense_Touch____A6AXAEBUFPerceptionListener___ZUFDefaultDelegateUserPolicy____V__6B_
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

// ~UAISense_Touch @ 146fec790

void __thiscall UAISense_Touch::~UAISense_Touch(UAISense_Touch *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAISense_Touch__6B_;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DigestedProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DigestedProperties);
  pFVar2 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAISense::~UAISense((UAISense *)this);
  return;
}

// GetPrivateStaticClass @ 146ff0870

UClass * __cdecl UAISense_Touch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Touch",
               &Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton,
               StaticRegisterNativesUAISense_Touch,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Touch>,
               InternalVTableHelperCtorCaller<UAISense_Touch>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton;
}

// OnListenerRemovedImpl @ 146ff1a70

void __thiscall
UAISense_Touch::OnListenerRemovedImpl(UAISense_Touch *this,FPerceptionListener *param_1)

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
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x10) == uVar1) {
          if (iVar6 == -1) goto LAB_146ff1ac9;
          goto LAB_146ff1aef;
        }
        iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_146ff1ac9:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146ff1aef:
  TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>,FDefaultSetAllocator>
                   *)&this->DigestedProperties,iVar6);
  return;
}

// OnListenerUpdateImpl @ 146ff1b10

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
UAISense_Touch::OnListenerUpdateImpl(UAISense_Touch *this,FPerceptionListener *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UAIPerceptionComponent *this_00;
  UAISenseConfig *pUVar4;
  UClass *pUVar5;
  FDigestedTouchProperties *pFVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FAIGenericID<FPerceptionListenerCounter> local_res8 [2];
  FAINamedID<FAISenseCounter> local_18;
  
  local_res8[0].Index = (param_1->ListenerID).Index;
  if (((uint)(param_1->Filter).AcceptedChannelsMask >>
       (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) == 0) {
    if (*(int *)&(this->DigestedProperties).field_0x8 !=
        *(int *)&(this->DigestedProperties).field_0x34) {
      puVar9 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->DigestedProperties).field_0x38;
      }
      iVar10 = *(int *)(puVar9 + ((longlong)*(int *)&(this->DigestedProperties).field_0x48 - 1U &
                                 (longlong)(int)local_res8[0].Index) * 4);
      if (iVar10 != -1) {
        lVar7 = *(longlong *)&(this->DigestedProperties).field_0x0;
        while (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) != local_res8[0].Index) {
          iVar10 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
          if (iVar10 == -1) {
            return;
          }
        }
        TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>,FDefaultSetAllocator>
                         *)&this->DigestedProperties,iVar10);
      }
    }
    return;
  }
  this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  local_18.Index = *(uchar *)((longlong)&this->_padding_ + 4);
  local_18.Name = (FName)this->_padding_;
  pUVar4 = UAIPerceptionComponent::GetSenseConfig(this_00,&local_18);
  if (pUVar4 != (UAISenseConfig *)0x0) {
    pUVar5 = Z_Construct_UClass_UAISenseConfig_Touch_NoRegister();
    iVar10 = (int)pUVar5->_padding_;
    if ((iVar10 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar10 * 8)
        == &pUVar5->_padding_)) goto LAB_146ff1bb2;
  }
  pUVar4 = (UAISenseConfig *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SenseConfig",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Touch.cpp"
                     ,0x4d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146ff1bb2:
  if (*(int *)&(this->DigestedProperties).field_0x8 !=
      *(int *)&(this->DigestedProperties).field_0x34) {
    puVar9 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->DigestedProperties).field_0x38;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->DigestedProperties).field_0x48 - 1U &
                               local_res8[0].Index) * 4);
    if (iVar10 != -1) {
      lVar7 = *(longlong *)&this->DigestedProperties;
      do {
        if (*(uint *)(lVar7 + (longlong)iVar10 * 0x10) == local_res8[0].Index) {
          if ((iVar10 != -1) && (lVar7 = (longlong)iVar10 * 0x10 + lVar7, lVar7 != 0)) {
            pFVar6 = (FDigestedTouchProperties *)(lVar7 + 4);
            goto LAB_146ff1c1e;
          }
          break;
        }
        iVar10 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  pFVar6 = TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
           ::EmplaceByHash<FAIGenericID<FPerceptionListenerCounter>_const_&>
                     ((TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
                       *)&this->DigestedProperties,local_res8[0].Index,local_res8);
LAB_146ff1c1e:
  uVar1 = (uint)pUVar4[1]._padding_;
  uVar11 = uVar1 >> 2 & 1;
  uVar8 = (uVar1 & 1) << 2;
  uVar12 = uVar11 | uVar8 | uVar1 & 2;
  if (uVar12 != (uVar11 | uVar8 | uVar1 & 2)) {
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
  pFVar6->AffiliationFlags = (uchar)uVar12;
  return;
}

// OnNewListenerImpl @ 146ff1dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAISense_Touch::OnNewListenerImpl(UAISense_Touch *this,FPerceptionListener *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UAIPerceptionComponent *this_00;
  UAISenseConfig *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  uint uVar9;
  FDigestedTouchProperties local_res8 [8];
  FAIGenericID<FPerceptionListenerCounter> local_res10 [2];
  FAINamedID<FAISenseCounter> local_18;
  
  this_00 = (UAIPerceptionComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
  if (this_00 == (UAIPerceptionComponent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListenerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Touch.cpp"
                       ,0x3f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.Index = *(uchar *)((longlong)&this->_padding_ + 4);
  local_18.Name = (FName)this->_padding_;
  pUVar6 = UAIPerceptionComponent::GetSenseConfig(this_00,&local_18);
  if (pUVar6 != (UAISenseConfig *)0x0) {
    pUVar7 = Z_Construct_UClass_UAISenseConfig_Touch_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_146ff1e7c;
  }
  pUVar6 = (UAISenseConfig *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SenseConfig",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense_Touch.cpp"
                     ,0x41,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146ff1e7c:
  uVar2 = (uint)pUVar6[1]._padding_;
  uVar8 = uVar2 >> 2 & 1;
  uVar5 = (uVar2 & 1) << 2;
  uVar9 = uVar8 | uVar5 | uVar2 & 2;
  if (uVar9 != (uVar8 | uVar5 | uVar2 & 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res10[0].Index = (param_1->ListenerID).Index;
  local_res8[0].AffiliationFlags = (uchar)uVar9;
  TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
  ::
  Emplace<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties_const_&>
            ((TMapBase<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties,0>_>
              *)&this->DigestedProperties,local_res10,local_res8);
  return;
}

// RegisterEvent @ 146ff29e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense_Touch::RegisterEvent(UAISense_Touch *this,FAITouchEvent *param_1)

{
  int *piVar1;
  TArray<FAITouchEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FAITouchEvent *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->RegisteredEvents;
  pFVar3 = (FAITouchEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->RegisteredEvents).ArrayMax)) {
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
  iVar6 = (this->RegisteredEvents).ArrayNum;
  piVar1 = &(this->RegisteredEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RegisteredEvents).ArrayNum = iVar6 + 1;
  FAITouchEvent::FAITouchEvent
            ((FAITouchEvent *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x30),param_1);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// ReportTouchEvent @ 146ff2de0

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
UAISense_Touch::ReportTouchEvent
          (UObject *param_1,AActor *param_2,AActor *param_3,TVector<double> *param_4)

{
  FGenericTeamId FVar1;
  UAIPerceptionSystem *this;
  undefined7 extraout_var;
  undefined1 local_48 [8];
  FAITouchEvent local_40;
  
  this = UAIPerceptionSystem::GetCurrent(param_1);
  if (this != (UAIPerceptionSystem *)0x0) {
    local_40.Location.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_40.Location.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_40.Location.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    local_40.TouchReceiver.field0_0x0 = (TObjectPtr<AActor>_u_0)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_40.OtherActor.field0_0x0 = (TObjectPtr<AActor>_u_0)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FVar1 = FGenericTeamId::GetTeamIdentifier((AActor *)local_48);
    local_40.TeamIdentifier.TeamID = *(uchar *)CONCAT71(extraout_var,FVar1.TeamID);
    UAIPerceptionSystem::OnEvent<FAITouchEvent,UAISense_Touch>(this,&local_40);
  }
  return;
}

// StaticRegisterNativesUAISense_Touch @ 146ff3c50

void __cdecl UAISense_Touch::StaticRegisterNativesUAISense_Touch(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAISense_Touch_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 146ff4090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UAISense_Touch::Update(UAISense_Touch *this)

{
  FGenericTeamId FVar1;
  UObjectBaseUtility *pUVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
  *pTVar6;
  ulonglong uVar7;
  UClass *pUVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  FAIStimulus *pFVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  float fVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined8 local_res18;
  FAIStimulus local_a8;
  
  pTVar6 = UAISense::GetListeners((UAISense *)this);
  fVar22 = __real_3f800000;
  pFVar21 = (this->RegisteredEvents).AllocatorInstance.Data;
  local_res10 = (this->RegisteredEvents).ArrayNum;
  uVar7 = (ulonglong)(int)local_res10;
  pFVar20 = pFVar21 + uVar7 * 0x30;
LAB_146ff4100:
  puVar17 = (uint *)0x0;
  if ((this->RegisteredEvents).ArrayNum != (int)uVar7) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FAITouchEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar21 == pFVar20) {
    (this->RegisteredEvents).ArrayNum = 0;
    if ((this->RegisteredEvents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->RegisteredEvents).AllocatorInstance,0,
                 &(this->RegisteredEvents).ArrayMax);
    }
    return UAISense::SuspendNextUpdate;
  }
  pUVar2 = *(UObjectBaseUtility **)&pFVar21[0x18].field_0x0;
  if ((pUVar2 != (UObjectBaseUtility *)0x0) && (*(longlong *)(pFVar21 + 0x20) != 0)) {
    pUVar8 = Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
    puVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar2,pUVar8);
    if (puVar9 == (uint *)0x0) {
      if (*(longlong *)&pFVar21[0x18].field_0x0 != 0) {
        pUVar8 = Z_Construct_UClass_APawn_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(pFVar21 + 0x18),pUVar8);
        if ((bVar4) && (*(longlong *)&pFVar21[0x18].field_0x0 != 0)) {
          pUVar2 = *(UObjectBaseUtility **)(*(longlong *)&pFVar21[0x18].field_0x0 + 0x2f0);
          puVar9 = puVar17;
          if (pUVar2 != (UObjectBaseUtility *)0x0) {
            pUVar8 = Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
            puVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar2,pUVar8);
          }
          if (puVar9 != (uint *)0x0) goto LAB_146ff41b4;
        }
      }
    }
    else {
LAB_146ff41b4:
      lVar10 = (**(code **)(*(longlong *)puVar9 + 0x10))();
      if ((lVar10 != 0) &&
         (uVar15 = *(uint *)(lVar10 + 0xf4),
         *(int *)&pTVar6->field_0x8 != *(int *)&pTVar6->field_0x34)) {
        puVar18 = &pTVar6->field_0x38;
        if (*(undefined1 **)&pTVar6->field_0x40 != (undefined1 *)0x0) {
          puVar18 = *(undefined1 **)&pTVar6->field_0x40;
        }
        iVar13 = *(int *)(puVar18 + (ulonglong)(*(int *)&pTVar6->field_0x48 - 1U & uVar15) * 4);
        if (iVar13 == -1) goto LAB_146ff4404;
        do {
          if (*(uint *)((longlong)iVar13 * 0x60 + *(longlong *)pTVar6) == uVar15) {
            puVar18 = &pTVar6->field_0x38;
            if (*(undefined1 **)&pTVar6->field_0x40 != (undefined1 *)0x0) {
              puVar18 = *(undefined1 **)&pTVar6->field_0x40;
            }
            uVar14 = *(uint *)(puVar18 + (ulonglong)(*(int *)&pTVar6->field_0x48 - 1U & uVar15) * 4)
            ;
            puVar9 = puVar17;
            if (uVar14 == 0xffffffff) goto LAB_146ff4291;
            goto LAB_146ff4270;
          }
          iVar13 = *(int *)((longlong)iVar13 * 0x60 + 0x58 + *(longlong *)pTVar6);
        } while (iVar13 != -1);
        uVar7 = (ulonglong)local_res10;
        pFVar21 = pFVar21 + 0x30;
        goto LAB_146ff4100;
      }
    }
  }
  goto LAB_146ff4404;
  while (uVar14 = puVar9[0x16], puVar9 = puVar17, uVar14 != 0xffffffff) {
LAB_146ff4270:
    puVar9 = (uint *)((longlong)(int)uVar14 * 0x60 + *(longlong *)pTVar6);
    if (*puVar9 == uVar15) {
      if (puVar9 != (uint *)0x0) goto LAB_146ff42b7;
      break;
    }
  }
LAB_146ff4291:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    fVar22 = (float)(*pcVar3)();
    return fVar22;
  }
LAB_146ff42b7:
  if ((puVar9[4] >> (*(byte *)((longlong)&this->_padding_ + 4) & 0x1f) & 1) != 0) {
    if (*(int *)&(this->DigestedProperties).field_0x8 !=
        *(int *)&(this->DigestedProperties).field_0x34) {
      puVar18 = *(undefined1 **)&(this->DigestedProperties).field_0x40;
      puVar19 = &(this->DigestedProperties).field_0x38;
      if (puVar18 != (undefined1 *)0x0) {
        puVar19 = puVar18;
      }
      uVar15 = *(uint *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->DigestedProperties).field_0x48 - 1U & puVar9[0x14]) * 4);
      if (uVar15 != 0xffffffff) {
        do {
          puVar16 = (uint *)((longlong)(int)uVar15 * 0x10 + *(longlong *)&this->DigestedProperties);
          if (*puVar16 == puVar9[0x14]) {
            puVar11 = puVar16 + 1;
            if (puVar16 == (uint *)0x0) {
              puVar11 = puVar17;
            }
            if (puVar11 != (uint *)0x0) {
              uVar15 = *puVar11;
              FVar1.TeamID = *(uchar *)(pFVar21 + 0x28);
              uVar14 = puVar9[0x12];
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
              if (((byte)uVar15 !=
                   `public:_static_bool___cdecl_FAISenseAffiliationFilter::ShouldSenseTeam(FGenericTeamId,FGenericTeamId,unsigned_char)'
                   ::__l2::AllFlags) &&
                 (TVar5 = FGenericTeamId::GetAttitude((FGenericTeamId)(uchar)uVar14,FVar1),
                 (byte)((byte)uVar15 & (byte)(1 << ((byte)TVar5 & 0x1f))) == 0)) goto LAB_146ff4404;
            }
            break;
          }
          uVar15 = puVar16[2];
        } while (uVar15 != 0xffffffff);
      }
    }
    local_res18 = 0;
    pFVar12 = FAIStimulus::FAIStimulus
                        (&local_a8,(UAISense *)this,fVar22,(TVector<double> *)pFVar21,
                         (TVector<double> *)pFVar21,SensingSucceeded,(FName)0x0);
    FPerceptionListener::RegisterStimulus
              ((FPerceptionListener *)(puVar9 + 2),*(AActor **)(pFVar21 + 0x20),pFVar12);
    uVar7 = (ulonglong)local_res10;
    pFVar21 = pFVar21 + 0x30;
    goto LAB_146ff4100;
  }
LAB_146ff4404:
  uVar7 = (ulonglong)local_res10;
  pFVar21 = pFVar21 + 0x30;
  goto LAB_146ff4100;
}

// execReportTouchEvent @ 146ff5150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UAISense_Touch::execReportTouchEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  FGenericTeamId FVar4;
  UAIPerceptionSystem *this;
  undefined7 extraout_var;
  AActor *local_res20;
  AActor *local_88;
  UObject *local_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  TVector<double>_u_0 local_38;
  AActor *local_20;
  AActor *local_18;
  undefined1 local_10;
  
  local_80 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pAVar3 = local_88;
  pAVar2 = local_res20;
  local_48 = local_68;
  dStack_40 = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_58;
  this = UAIPerceptionSystem::GetCurrent(local_80);
  if (this != (UAIPerceptionSystem *)0x0) {
    local_38._s_0.Z = local_78;
    local_20 = pAVar3;
    local_38._s_0.X = local_48;
    local_38._s_0.Y = dStack_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    local_18 = pAVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar2);
    }
    FVar4 = FGenericTeamId::GetTeamIdentifier((AActor *)&stack0x00000010);
    local_10 = *(undefined1 *)CONCAT71(extraout_var,FVar4.TeamID);
    UAIPerceptionSystem::OnEvent<FAITouchEvent,UAISense_Touch>(this,(FAITouchEvent *)&local_38._s_0)
    ;
  }
  return;
}

