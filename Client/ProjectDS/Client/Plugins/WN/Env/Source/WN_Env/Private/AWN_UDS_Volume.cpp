// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 15

// StaticClass @ 14a0434f0

UClass * __cdecl AWN_UDS_Volume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_UDS_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_Volume",
               &Z_Registration_Info_UClass_AWN_UDS_Volume.InnerSingleton,
               StaticRegisterNativesAWN_UDS_Volume,0x1550,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_UDS_Volume>,
               InternalVTableHelperCtorCaller<AWN_UDS_Volume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_UDS_Volume.InnerSingleton;
}

// AWN_UDS_Volume @ 14a046df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_UDS_Volume * __thiscall
AWN_UDS_Volume::AWN_UDS_Volume(AWN_UDS_Volume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_UDS_Volume__6B_;
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky(&this->UDS_Setting);
  (this->VolumeSetting).TODFlowMode = Global;
  (this->VolumeSetting).BlendingDelayTime = 0.0;
  (this->VolumeSetting).BlendMode = None;
  (this->VolumeSetting).BlendingTime = 0.0;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_UDSVolumeComponent *)0x0;
  return this;
}

// ~AWN_UDS_Volume @ 14a048150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_Volume::~AWN_UDS_Volume(AWN_UDS_Volume *this)

{
  this->_padding_ = (longlong)&___7AWN_UDS_Volume__6B_;
  FWN_Ultra_Dynamic_Sky::~FWN_Ultra_Dynamic_Sky(&this->UDS_Setting);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b370

UClass * __cdecl AWN_UDS_Volume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_UDS_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_Volume",
               &Z_Registration_Info_UClass_AWN_UDS_Volume.InnerSingleton,
               StaticRegisterNativesAWN_UDS_Volume,0x1550,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_UDS_Volume>,
               InternalVTableHelperCtorCaller<AWN_UDS_Volume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_UDS_Volume.InnerSingleton;
}

// StaticRegisterNativesAWN_UDS_Volume @ 14a04ba70

void __cdecl AWN_UDS_Volume::StaticRegisterNativesAWN_UDS_Volume(void)

{
  return;
}

// AWN_UDS_Volume @ 14a04f870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_UDS_Volume * __thiscall
AWN_UDS_Volume::AWN_UDS_Volume(AWN_UDS_Volume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UWN_UDSVolumeComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_UDS_Volume__6B_;
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky(&this->UDS_Setting);
  (this->VolumeSetting).TODFlowMode = Global;
  (this->VolumeSetting).BlendingDelayTime = 0.0;
  (this->VolumeSetting).BlendMode = None;
  (this->VolumeSetting).BlendingTime = 0.0;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_UDSVolumeComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"VolumeComponent");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UWN_UDSVolumeComponent_NoRegister();
  pUVar5 = (UWN_UDSVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UWN_UDSVolumeComponent *)0x0)) {
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UWN_UDSVolumeComponent *)0x0) {
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

// BeginDestroy @ 14a050370

void __thiscall AWN_UDS_Volume::BeginDestroy(AWN_UDS_Volume *this)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((this->_padding_ & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
    pUVar3 = GetParentNativeClass((UClass *)this->_padding_);
    piVar5 = (int *)0x0;
    if (pUVar3 != (UClass *)0x0) {
      piVar5 = (int *)pUVar3->_padding_;
    }
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)piVar5);
    if (CSVActorClassNameToCountMap._8_4_ != CSVActorClassNameToCountMap._52_4_) {
      lVar4 = 0x154c1e3c8;
      if (CSVActorClassNameToCountMap._64_8_ != 0) {
        lVar4 = CSVActorClassNameToCountMap._64_8_;
      }
      iVar1 = *(int *)(lVar4 + (ulonglong)
                               (CSVActorClassNameToCountMap._72_4_ - 1 &
                               (int)((ulonglong)piVar5 >> 0x20) + uVar2) * 4);
      while (iVar1 != -1) {
        lVar4 = CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14;
        if (*(int **)(CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14) == piVar5) {
          piVar5 = (int *)(lVar4 + 8);
          if (lVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + -1;
          }
          break;
        }
        iVar1 = *(int *)(lVar4 + 0xc);
      }
    }
    CSVActorTotalCount = CSVActorTotalCount + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BeginPlay @ 14a050430

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

void __thiscall AWN_UDS_Volume::BeginPlay(AWN_UDS_Volume *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  AWN_UDS_Volume *pAVar5;
  UClass *pUVar6;
  AWN_UDS_Volume *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  AWN_UDS_Volume *pAVar10;
  undefined1 auStack_128 [32];
  AWN_UDS_Volume *pAStack_108;
  undefined1 auStack_100 [8];
  AWN_UDS_Volume **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (AWN_UDS_Volume *)0x0;
  pAVar10 = (AWN_UDS_Volume *)0x0;
  pAVar5 = this;
  if (this == (AWN_UDS_Volume *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (AWN_UDS_Volume *)0x0)) {
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
  pAVar5 = (AWN_UDS_Volume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (AWN_UDS_Volume *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (AWN_UDS_Volume *)0x0) goto LAB_147385169;
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
  pAVar7 = (AWN_UDS_Volume *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AWN_UDS_Volume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AWN_UDS_Volume *)0x0)) {
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
    pAStack_108 = (AWN_UDS_Volume *)*puVar9;
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

// Destroyed @ 14a053ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_Volume::Destroyed(AWN_UDS_Volume *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UFunction *pUVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  AWN_UDS_Volume *pAStackX_8;
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

// EndPlay @ 14a0540b0

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

void __thiscall AWN_UDS_Volume::EndPlay(AWN_UDS_Volume *this,Type param_1)

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
  AWN_UDS_Volume *pAVar11;
  UClass *pUVar12;
  AWN_UDS_Volume *pAVar13;
  longlong *plVar14;
  AWN_UDS_Volume *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  AWN_UDS_Volume *pAStack_148;
  AWN_UDS_Volume *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  AWN_UDS_Volume *pAStack_120;
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
  pAVar13 = (AWN_UDS_Volume *)0x0;
  pAVar15 = (AWN_UDS_Volume *)0x0;
  pAVar11 = this;
  if (this == (AWN_UDS_Volume *)0x0) {
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
  pAVar11 = (AWN_UDS_Volume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (AWN_UDS_Volume *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (AWN_UDS_Volume *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (AWN_UDS_Volume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AWN_UDS_Volume *)0x0))
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
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AWN_UDS_Volume *)0x0))
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

// GetActorBounds @ 14a054330

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
AWN_UDS_Volume::GetActorBounds
          (AWN_UDS_Volume *this,bool param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  char cVar1;
  int iVar2;
  UWN_UDSVolumeComponent *pUVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UWN_WorldUtils_Subsystem *this_00;
  TBox<double> *pTVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_f8 [80];
  ulonglong local_a8;
  TBox<double> local_a0;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar3 = (this->VolumeComponent).field0_0x0.DebugPtr;
  cVar1 = '\0';
  local_a8 = local_a8 & 0xffffffffffffff00;
  dVar13 = 0.0;
  dVar14 = 0.0;
  dVar15 = 0.0;
  dVar16 = 0.0;
  dVar10 = 0.0;
  dVar11 = 0.0;
  if ((pUVar3->field_0x698 == '\0') || (pUVar3->field_0x699 == '\0')) {
    pdVar9 = (double *)(**(code **)(this->_padding_ + 0x670))(this,&local_a0,!param_1,param_4);
    dVar13 = *pdVar9;
    dVar14 = pdVar9[1];
    dVar15 = pdVar9[2];
    dVar16 = pdVar9[3];
    dVar10 = pdVar9[4];
    dVar11 = pdVar9[5];
    goto LAB_14a0544a6;
  }
  pUVar5 = AActor::GetWorld((AActor *)this);
  if (pUVar5 != (UWorld *)0x0) {
    pUVar6 = Z_Construct_UClass_UWN_WorldUtils_Subsystem_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 != (UClass *)0x0) goto LAB_14a0543e3;
LAB_14a054411:
      pUVar6 = (UClass *)0x0;
    }
    else {
      if (pUVar6 == (UClass *)0x0) goto LAB_14a054411;
      UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14a0543e3:
      pUVar7 = Z_Construct_UClass_UWN_WorldUtils_Subsystem_NoRegister();
      if (pUVar7 == (UClass *)0x0) goto LAB_14a054411;
      iVar2 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14a054411;
    }
    this_00 = (UWN_WorldUtils_Subsystem *)
              FSubsystemCollectionBase::GetSubsystemInternal
                        ((FSubsystemCollectionBase *)&pUVar5->SubsystemCollection,pUVar6);
    if (this_00 != (UWN_WorldUtils_Subsystem *)0x0) {
      pTVar8 = UWN_WorldUtils_Subsystem::GetWorldBounds(this_00,&local_a0);
      cVar1 = pTVar8->IsValid;
      dVar13 = (pTVar8->Min).field0_0x0._s_0.X;
      dVar14 = (pTVar8->Min).field0_0x0._s_0.Y;
      dVar15 = (pTVar8->Min).field0_0x0._s_0.Z;
      dVar16 = (pTVar8->Max).field0_0x0._s_0.X;
      dVar10 = (pTVar8->Max).field0_0x0._s_0.Y;
      dVar11 = (pTVar8->Max).field0_0x0._s_0.Z;
    }
  }
  if (cVar1 == '\0') {
    dVar10 = ___xmm_42900000000000004290000000000000;
    dVar11 = _UNK_151444fc8;
    dVar13 = ___xmm_c290000000000000c290000000000000;
    dVar14 = _UNK_151a30ea8;
    dVar15 = ___xmm_4290000000000000c290000000000000;
    dVar16 = _UNK_151a30e98;
  }
LAB_14a0544a6:
  dVar12 = (dVar11 - dVar15) * __real_3fe0000000000000;
  dVar11 = (dVar16 - dVar13) * __real_3fe0000000000000;
  dVar10 = (dVar10 - dVar14) * __real_3fe0000000000000;
  (param_3->field0_0x0)._s_0.X = dVar11;
  (param_3->field0_0x0)._s_0.Y = dVar10;
  (param_3->field0_0x0)._s_0.Z = dVar12;
  (param_2->field0_0x0)._s_0.X = dVar11 + dVar13;
  (param_2->field0_0x0)._s_0.Y = dVar10 + dVar14;
  (param_2->field0_0x0)._s_0.Z = dVar12 + dVar15;
  return;
}

// OnConstruction @ 14a061f60

void __thiscall AWN_UDS_Volume::OnConstruction(AWN_UDS_Volume *this,TTransform<double> *param_1)

{
  return;
}

// PostInitializeComponents @ 14a0631c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_Volume::PostInitializeComponents(AWN_UDS_Volume *this)

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
  if (this == (AWN_UDS_Volume *)0x0) {
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

// PostLoad @ 14a0632c0

void __thiscall AWN_UDS_Volume::PostLoad(AWN_UDS_Volume *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  AWN_UDS_Volume *apAStack_18 [2];
  
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
    *(AWN_UDS_Volume **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AWN_UDS_Volume *)0x0)) {
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

// Tick @ 14a0659e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_Volume::Tick(AWN_UDS_Volume *this,float param_1)

{
  uint uVar1;
  UFunction *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,afStackX_8);
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

