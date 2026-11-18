// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 17

// StaticClass @ 14a024d00

UClass * __cdecl AWN_ZoneVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_ZoneVolume",
               &Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton,
               StaticRegisterNativesAWN_ZoneVolume,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ZoneVolume>,
               InternalVTableHelperCtorCaller<AWN_ZoneVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton;
}

// AWN_ZoneVolume @ 14a02d7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ZoneVolume * __thiscall
AWN_ZoneVolume::AWN_ZoneVolume(AWN_ZoneVolume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bValid = false;
  this->_padding_ = (longlong)&___7AWN_ZoneVolume__6B_;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_ZoneVolumeComponent *)0x0;
  return this;
}

// AWN_ZoneVolume @ 14a02d7e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ZoneVolume * __thiscall
AWN_ZoneVolume::AWN_ZoneVolume(AWN_ZoneVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UWN_ZoneVolumeComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->bValid = false;
  this->_padding_ = (longlong)&___7AWN_ZoneVolume__6B_;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_ZoneVolumeComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"VolumeComponent");
  FVar1 = *pFVar3;
  pUVar4 = UWN_ZoneVolumeComponent::StaticClass();
  pUVar5 = (UWN_ZoneVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UWN_ZoneVolumeComponent *)0x0)) {
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UWN_ZoneVolumeComponent *)0x0) {
      return this;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar5;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = (this->VolumeComponent).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar5;
  pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x788);
  pFVar3 = ::FName::FName(&local_res8,"NoCollision");
  (*pcVar2)(pUVar5,*pFVar3,1);
  pUVar5 = (this->VolumeComponent).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar5 + 0x5f8))(pUVar5,0);
  return this;
}

// ~AWN_ZoneVolume @ 14a02eb10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ZoneVolume::~AWN_ZoneVolume(AWN_ZoneVolume *this)

{
  this->_padding_ = (longlong)&___7AWN_ZoneVolume__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 14a031d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ZoneVolume::BeginPlay(AWN_ZoneVolume *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  AWN_ZoneVolume *pAVar5;
  UClass *pUVar6;
  AWN_ZoneVolume *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  AWN_ZoneVolume *pAVar10;
  undefined1 auStack_128 [32];
  AWN_ZoneVolume *pAStack_108;
  undefined1 auStack_100 [8];
  AWN_ZoneVolume **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (AWN_ZoneVolume *)0x0;
  pAVar10 = (AWN_ZoneVolume *)0x0;
  pAVar5 = this;
  if (this == (AWN_ZoneVolume *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (AWN_ZoneVolume *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (bVar3) {
      FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
    }
  }
  if ((this->_padding_ & 0x180000000000) != 0x80000000000) {
    pAStack_108 = this;
    `AActor::BeginPlay'::__l2::<lambda_1>::operator()(&pAStack_108);
  }
  (**(code **)(this->_padding_ + 0x400))(this,*(undefined4 *)((longlong)&this->_padding_ + 4));
  AActor::RegisterAllActorTickFunctions((AActor *)this,true,false);
  puStack_30 = (undefined8 *)0x0;
  uStack_24 = 0x18;
  iStack_28 = 0;
  pAVar5 = (AWN_ZoneVolume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (AWN_ZoneVolume *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (AWN_ZoneVolume *)0x0) goto LAB_147385169;
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar10 = pAVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pAVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pAVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pAVar10 = pAVar5;
    }
  }
LAB_147385169:
  pAVar7 = (AWN_ZoneVolume *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AWN_ZoneVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AWN_ZoneVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  iVar2 = iStack_28;
  puVar9 = auStack_f0;
  if (puStack_30 != (undefined8 *)0x0) {
    puVar9 = puStack_30;
  }
  puVar1 = puVar9 + iStack_28;
  while( true ) {
    if (iStack_28 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_100);
    }
    if (puVar9 == puVar1) break;
    pAStack_108 = (AWN_ZoneVolume *)*puVar9;
    if (((pAStack_108->_padding_ & 1) != 0) && ((pAStack_108->_padding_ & 0x20000000) == 0)) {
      UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)pAStack_108,true);
      (**(code **)(pAStack_108->_padding_ + 0x3f8))();
      if ((pAStack_108->_padding_ & 0x20000000) == 0) {
        ppAStack_f8 = &pAStack_108;
        `AActor::BeginPlay'::__l12::<lambda_2>::operator()(&ppAStack_f8);
      }
    }
    puVar9 = puVar9 + 1;
  }
  if ((((this->_padding_ & 0x20000) != 0) &&
      (pUVar4 = AActor::GetWorld((AActor *)this), pUVar4 != (UWorld *)0x0)) &&
     (this_00 = UWorld::GetSubsystem<UAutoDestroySubsystem>(pUVar4),
     this_00 != (UAutoDestroySubsystem *)0x0)) {
    UAutoDestroySubsystem::RegisterActor(this_00,(AActor *)this);
  }
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveBeginPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,0);
  *(byte *)((longlong)&this->_padding_ + 5) =
       *(byte *)((longlong)&this->_padding_ + 5) & 0xf7 | 0x10;
  if (puStack_30 != (undefined8 *)0x0) {
    FMemory::Free(puStack_30);
  }
  return;
}

// CheckZoneVolumeIsValid @ 14a032560

bool __thiscall AWN_ZoneVolume::CheckZoneVolumeIsValid(AWN_ZoneVolume *this)

{
  UWN_ZoneVolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UWN_ZoneVolumeComponent *)0x0) {
    return false;
  }
  return pUVar1->field_0x619 == '\0';
}

// Destroyed @ 14a032fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ZoneVolume::Destroyed(AWN_ZoneVolume *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UFunction *pUVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  AWN_ZoneVolume *pAStackX_8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_38;
  FSharedReferencer<1> FStack_30;
  undefined8 uStack_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_18;
  
  AActor::RouteEndPlay((AActor *)this,Destroyed);
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveDestroyed);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
  pTStack_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnDestroyed");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorDestroyedSignature_MCSignature,AActor,FActorDestroyedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_18,(UObject *)this,FVar2);
    FStack_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    pTStack_38 = pTVar5->Object;
    if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&FStack_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_18.SharedReferenceCount.ReferenceController);
  }
  if (pTStack_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (pTStack_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pAStackX_8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (pTStack_38,&pAStackX_8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// EndPlay @ 14a0331e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ZoneVolume::EndPlay(AWN_ZoneVolume *this,Type param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar6;
  UWorld *pUVar7;
  FStopReplicatingActorParams *pFVar8;
  UFunction *pUVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  AWN_ZoneVolume *pAVar11;
  UClass *pUVar12;
  AWN_ZoneVolume *pAVar13;
  longlong *plVar14;
  AWN_ZoneVolume *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  AWN_ZoneVolume *pAStack_148;
  AWN_ZoneVolume *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  AWN_ZoneVolume *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->_padding_ & 0x180000000000) != 0x100000000000) {
    return;
  }
  pAVar13 = (AWN_ZoneVolume *)0x0;
  pAVar15 = (AWN_ZoneVolume *)0x0;
  pAVar11 = this;
  if (this == (AWN_ZoneVolume *)0x0) {
    pAVar11 = pAVar13;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar11);
  if (bVar6) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (bVar6) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xe7;
  pFVar8 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar8);
  uStack_168 = (char)param_1;
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar5);
    FStack_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar10->Object;
    if (FStack_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&FStack_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_108.SharedReferenceCount.ReferenceController);
  }
  this_00 = pTStack_158;
  if (pTStack_158 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((pTStack_158 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAStack_120 = this;
    uStack_118 = (char)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,&pAStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_150.ReferenceController);
  plStack_38 = (longlong *)0x0;
  uStack_2c = 0x18;
  iStack_30 = 0;
  pAVar11 = (AWN_ZoneVolume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (AWN_ZoneVolume *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (AWN_ZoneVolume *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar15 = pAVar13;
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if (((int)pAVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pAVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar15 = pAVar11;
    }
  }
LAB_147390f4f:
  pAVar13 = (AWN_ZoneVolume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AWN_ZoneVolume *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AWN_ZoneVolume *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar3 = iStack_30;
  plVar14 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar14 = plStack_38;
  }
  plVar2 = plVar14 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar14 == plVar2) break;
    plStack_160 = (longlong *)*plVar14;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar14 = plVar14 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// GetActorBounds @ 14a033a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
AWN_ZoneVolume::GetActorBounds
          (AWN_ZoneVolume *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  char cVar1;
  UWN_ZoneVolumeComponent *pUVar2;
  UWorld *this_00;
  UWN_WorldUtils_Subsystem *pUVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  cVar1 = '\0';
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar11 = 0.0;
  pUVar2 = (this->VolumeComponent).field0_0x0.DebugPtr;
  dVar5 = 0.0;
  dVar6 = 0.0;
  local_58 = 0;
  if ((pUVar2->field_0x698 == '\0') || (pUVar2->field_0x699 == '\0')) {
    pdVar4 = (double *)(**(code **)(this->_padding_ + 0x670))(this,local_88,!param_1,param_4);
    dVar8 = *pdVar4;
    dVar9 = pdVar4[1];
    dVar10 = pdVar4[2];
    dVar11 = pdVar4[3];
    dVar5 = pdVar4[4];
    dVar6 = pdVar4[5];
  }
  else {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      pUVar3 = UWorld::GetSubsystem<UWN_WorldUtils_Subsystem>(this_00);
      if (pUVar3 != (UWN_WorldUtils_Subsystem *)0x0) {
        cVar1 = (pUVar3->CachedWorldBounds).IsValid;
        dVar8 = (pUVar3->CachedWorldBounds).Min.field0_0x0._s_0.X;
        dVar9 = (pUVar3->CachedWorldBounds).Min.field0_0x0._s_0.Y;
        dVar10 = (pUVar3->CachedWorldBounds).Min.field0_0x0._s_0.Z;
        dVar11 = (pUVar3->CachedWorldBounds).Max.field0_0x0._s_0.X;
        dVar5 = (pUVar3->CachedWorldBounds).Max.field0_0x0._s_0.Y;
        dVar6 = (pUVar3->CachedWorldBounds).Max.field0_0x0._s_0.Z;
      }
    }
    if (cVar1 == '\0') {
      dVar5 = ___xmm_42900000000000004290000000000000;
      dVar6 = _UNK_151444fc8;
      dVar8 = ___xmm_c290000000000000c290000000000000;
      dVar9 = _UNK_151a30ea8;
      dVar10 = ___xmm_4290000000000000c290000000000000;
      dVar11 = _UNK_151a30e98;
    }
  }
  dVar7 = (dVar6 - dVar10) * __real_3fe0000000000000;
  dVar6 = (dVar11 - dVar8) * __real_3fe0000000000000;
  dVar5 = (dVar5 - dVar9) * __real_3fe0000000000000;
  (param_3->field0_0x0)._s_0.X = dVar6;
  (param_3->field0_0x0)._s_0.Y = dVar5;
  (param_3->field0_0x0)._s_0.Z = dVar7;
  (param_2->field0_0x0)._s_0.X = dVar6 + dVar8;
  (param_2->field0_0x0)._s_0.Y = dVar5 + dVar9;
  (param_2->field0_0x0)._s_0.Z = dVar7 + dVar10;
  return;
}

// GetBounds @ 14a033c60

TBoxSphereBounds<double,double> * __thiscall
AWN_ZoneVolume::GetBounds
          (AWN_ZoneVolume *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  UWN_ZoneVolumeComponent *pUVar1;
  undefined1 local_res8 [32];
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_ZoneVolumeComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x598))(pUVar1,__return_storage_ptr__,&pUVar1->field_0x1f0);
    return __return_storage_ptr__;
  }
  `AWN_ZoneVolume::GetBounds'::__l7::<lambda_1>::operator()(local_res8);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a034930

UClass * __cdecl AWN_ZoneVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_ZoneVolume",
               &Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton,
               StaticRegisterNativesAWN_ZoneVolume,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ZoneVolume>,
               InternalVTableHelperCtorCaller<AWN_ZoneVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ZoneVolume.InnerSingleton;
}

// OnConstruction @ 14a036ff0

void __thiscall AWN_ZoneVolume::OnConstruction(AWN_ZoneVolume *this,TTransform<double> *param_1)

{
  return;
}

// PostInitializeComponents @ 14a0384a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ZoneVolume::PostInitializeComponents(AWN_ZoneVolume *this)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_10;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FName FStack_58;
  FName FStack_50;
  FStatMessage FStack_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Actor_PostInitComponents ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
           )0x0) {
        pFVar8 = ::FName::FName(&FStackX_20,"STAT_Actor_PostInitComponents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8,
                   L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_Actor_PostInitComponents;
  if (StatPtr_STAT_Actor_PostInitComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
       )0x0) {
    pFVar8 = ::FName::FName(&FStack_58,"STAT_Actor_PostInitComponents");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8
                         ,L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_10.ComparisonIndex.Value = FVar11.Value;
        FStackX_10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Actor.cpp"
                   ,0x1992);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar11.Value;
      LStackX_18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1473ac0a2;
    }
  }
  bVar5 = false;
  FVar12 = FStack_50;
LAB_1473ac0a2:
  if (this == (AWN_ZoneVolume *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
    AActor::UpdateAllReplicatedComponents((AActor *)this);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_18);
      FStack_40.StatData.Pad[4] = '\0';
      FStack_40.StatData.Pad[5] = '\0';
      FStack_40.StatData.Pad[6] = '\0';
      FStack_40.StatData.Pad[7] = '\0';
      FStack_40.StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      FStack_40.StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      FStack_40.StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      FStack_40.StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_40);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PostLoad @ 14a0384c0

void __thiscall AWN_ZoneVolume::PostLoad(AWN_ZoneVolume *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  AWN_ZoneVolume *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(AWN_ZoneVolume **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AWN_ZoneVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// StaticRegisterNativesAWN_ZoneVolume @ 14a03a7c0

void __cdecl AWN_ZoneVolume::StaticRegisterNativesAWN_ZoneVolume(void)

{
  return;
}

// UpdateVolumeColor @ 14a03b190

void __thiscall AWN_ZoneVolume::UpdateVolumeColor(AWN_ZoneVolume *this)

{
  UWN_ZoneVolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UWN_ZoneVolumeComponent *)0x0) {
    this->bValid = false;
    return;
  }
  this->bValid = pUVar1->field_0x619 == '\0';
  return;
}

// operator() @ 15054a450

bool __thiscall `AWN_ZoneVolume::GetBounds'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8948028027174911691>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8948028027174911691>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

