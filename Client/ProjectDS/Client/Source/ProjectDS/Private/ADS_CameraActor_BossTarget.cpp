// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b430140

UClass * __cdecl ADS_CameraActor_BossTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CameraActor_BossTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraActor_BossTarget",
               &Z_Registration_Info_UClass_ADS_CameraActor_BossTarget.InnerSingleton,
               StaticRegisterNativesADS_CameraActor_BossTarget,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_CameraActor_BossTarget>,
               InternalVTableHelperCtorCaller<ADS_CameraActor_BossTarget>,local_res8,
               ADS_CameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CameraActor_BossTarget.InnerSingleton;
}

// ADS_CameraActor_BossTarget @ 14b433eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CameraActor_BossTarget * __thiscall
ADS_CameraActor_BossTarget::ADS_CameraActor_BossTarget
          (ADS_CameraActor_BossTarget *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_CameraActor_BossTarget__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BaseActorSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  this->ElapsedTime = 0.0;
  (this->TargetSocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSocketName).Data.ArrayNum = 0;
  (this->TargetSocketName).Data.ArrayMax = 0;
  return this;
}

// ~ADS_CameraActor_BossTarget @ 14b434b90

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
ADS_CameraActor_BossTarget::~ADS_CameraActor_BossTarget(ADS_CameraActor_BossTarget *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_CameraActor_BossTarget__6B_;
  pFVar1 = (this->TargetSocketName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ADS_CameraActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b436120

UClass * __cdecl ADS_CameraActor_BossTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CameraActor_BossTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraActor_BossTarget",
               &Z_Registration_Info_UClass_ADS_CameraActor_BossTarget.InnerSingleton,
               StaticRegisterNativesADS_CameraActor_BossTarget,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_CameraActor_BossTarget>,
               InternalVTableHelperCtorCaller<ADS_CameraActor_BossTarget>,local_res8,
               ADS_CameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CameraActor_BossTarget.InnerSingleton;
}

// StaticRegisterNativesADS_CameraActor_BossTarget @ 14b436fe0

void __cdecl ADS_CameraActor_BossTarget::StaticRegisterNativesADS_CameraActor_BossTarget(void)

{
  return;
}

// ADS_CameraActor_BossTarget @ 14b8b1120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CameraActor_BossTarget * __thiscall
ADS_CameraActor_BossTarget::ADS_CameraActor_BossTarget
          (ADS_CameraActor_BossTarget *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  FName FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UDS_SpringArmComponent *this_00;
  FName local_res8;
  
  ADS_CameraActor::ADS_CameraActor((ADS_CameraActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&___7ADS_CameraActor_BossTarget__6B_;
  (this->BaseActorSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->TargetSocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetSocketName).Data.ArrayNum = 0;
  (this->TargetSocketName).Data.ArrayMax = 0;
  this->ElapsedTime = 0.0;
  pFVar4 = ::FName::FName(&local_res8,L"SpringArm");
  FVar3 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UDS_SpringArmComponent_NoRegister();
  this_00 = (UDS_SpringArmComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar5,pUVar5,true,false);
  this->SpringArm = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  *(undefined4 *)&this->SpringArm->field_0x250 = 0;
  puVar2 = &this->SpringArm->field_0x290;
  *(uint *)puVar2 = *(uint *)puVar2 & 0xfffffffd;
  if ((USceneComponent *)this->_padding_ != (USceneComponent *)0x0) {
    USceneComponent::SetupAttachment
              ((USceneComponent *)this->_padding_,(USceneComponent *)this->SpringArm,
               USpringArmComponent::SocketName);
  }
  return this;
}

// BeginPlay @ 14b8b5820

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

void __thiscall ADS_CameraActor_BossTarget::BeginPlay(ADS_CameraActor_BossTarget *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  ADS_CameraActor_BossTarget *pAVar5;
  UClass *pUVar6;
  ADS_CameraActor_BossTarget *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ADS_CameraActor_BossTarget *pAVar10;
  undefined1 auStack_128 [32];
  ADS_CameraActor_BossTarget *pAStack_108;
  undefined1 auStack_100 [8];
  ADS_CameraActor_BossTarget **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (ADS_CameraActor_BossTarget *)0x0;
  pAVar10 = (ADS_CameraActor_BossTarget *)0x0;
  pAVar5 = this;
  if (this == (ADS_CameraActor_BossTarget *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (ADS_CameraActor_BossTarget *)0x0)) {
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
  pAVar5 = (ADS_CameraActor_BossTarget *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (ADS_CameraActor_BossTarget *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (ADS_CameraActor_BossTarget *)0x0) goto LAB_147385169;
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
  pAVar7 = (ADS_CameraActor_BossTarget *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (ADS_CameraActor_BossTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (ADS_CameraActor_BossTarget *)0x0)) {
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
    pAStack_108 = (ADS_CameraActor_BossTarget *)*puVar9;
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

// EndPlay @ 14b8bed90

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

void __thiscall ADS_CameraActor_BossTarget::EndPlay(ADS_CameraActor_BossTarget *this,Type param_1)

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
  ADS_CameraActor_BossTarget *pAVar11;
  UClass *pUVar12;
  ADS_CameraActor_BossTarget *pAVar13;
  longlong *plVar14;
  ADS_CameraActor_BossTarget *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_CameraActor_BossTarget *pAStack_148;
  ADS_CameraActor_BossTarget *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_CameraActor_BossTarget *pAStack_120;
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
  pAVar13 = (ADS_CameraActor_BossTarget *)0x0;
  pAVar15 = (ADS_CameraActor_BossTarget *)0x0;
  pAVar11 = this;
  if (this == (ADS_CameraActor_BossTarget *)0x0) {
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
  pAVar11 = (ADS_CameraActor_BossTarget *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_CameraActor_BossTarget *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_CameraActor_BossTarget *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (ADS_CameraActor_BossTarget *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_CameraActor_BossTarget *)0x0)) {
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
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_CameraActor_BossTarget *)0x0)) {
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

// InitData @ 14b8ca3a0

void __thiscall
ADS_CameraActor_BossTarget::InitData
          (ADS_CameraActor_BossTarget *this,float param_1,float param_2,float param_3,float param_4,
          TVector<double> *param_5,FString *param_6)

{
  double dVar1;
  int iVar2;
  UDS_SpringArmComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  int iVar6;
  
  *(float *)(this->_padding_ + 0x250) = param_1;
  pUVar3 = this->SpringArm;
  dVar5 = (param_5->field0_0x0)._s_0.Y;
  dVar1 = (param_5->field0_0x0)._s_0.Z;
  *(double *)&pUVar3->field_0x258 = (param_5->field0_0x0)._s_0.X;
  *(double *)&pUVar3->field_0x260 = dVar5;
  *(double *)&pUVar3->field_0x268 = dVar1;
  iVar2 = (param_6->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange
            (&this->TargetSocketName,(wchar_t *)(param_6->Data).AllocatorInstance.Data,iVar6);
  this->MoveTime = param_4;
  this->StartDistance = param_2;
  this->EndDistance = param_3;
  pFVar4 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ResetCamera @ 14b8e5ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CameraActor_BossTarget::ResetCamera(ADS_CameraActor_BossTarget *this)

{
  TVector<double>_u_0 local_28;
  
  if ((USceneComponent *)this->_padding_ != (USceneComponent *)0x0) {
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    USceneComponent::SetRelativeLocation
              ((USceneComponent *)this->_padding_,(TVector<double> *)&local_28._s_0,false,
               (FHitResult *)0x0,None);
    local_28._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_28._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_28._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
    USceneComponent::SetRelativeRotation
              ((USceneComponent *)this->_padding_,(TRotator<double> *)&local_28._s_0,false,
               (FHitResult *)0x0,None);
  }
  return;
}

// SetTarget @ 14b8eab20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_CameraActor_BossTarget::SetTarget(ADS_CameraActor_BossTarget *this,ulong64 param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *pFVar3;
  USkeletalMeshComponent *pUVar4;
  ulong64 local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_res20 [8];
  
  local_res10 = param_1;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    pFVar3 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_res20);
    bVar1 = FWeakObjectPtr::IsValid(pFVar3);
    if (bVar1) {
      (**(code **)(pFVar2->_padding_ + 0x80))(pFVar2);
      bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res18,
                         (void *)0x0);
      if (!bVar1) {
        pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_res18);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (USkeletalMeshComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        (this->BaseActorSkeletalMesh).field0_0x0.DebugPtr = pUVar4;
      }
      pFVar3 = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_res20);
      ADS_CameraActor::SetBaseActor
                ((ADS_CameraActor *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)*pFVar3);
      this->CurrentDistance = this->StartDistance;
      this->ElapsedTime = 0.0;
    }
  }
  return;
}

// Tick @ 14b8ed640

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_CameraActor_BossTarget::Tick(ADS_CameraActor_BossTarget *this,float param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  USkeletalMeshComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  FDS_EntityBase *pFVar9;
  FWeakObjectPtr *pFVar10;
  FName *pFVar11;
  undefined4 *puVar12;
  UObject *pUVar13;
  TMatrix<double> *this_00;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  double dVar19;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_1d8 [32];
  TVector<double>_u_0 local_1a8;
  FName local_188;
  ulong64 local_180;
  TRotator<double> local_178;
  TVector<double>_u_0 local_158;
  TRotator<double> local_140;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  AActor::Tick((AActor *)this,param_1);
  if ((this->_padding_ != 0) && (ADS_CameraManager::StaticInstance != (ADS_CameraManager *)0x0)) {
    local_180 = ADS_CameraManager::StaticInstance->BossEntityID;
    pFVar9 = FDS_EntityBase::GetEntityBase(&local_180);
    if (pFVar9 != (FDS_EntityBase *)0x0) {
      pFVar10 = (FWeakObjectPtr *)(**(code **)(pFVar9->_padding_ + 0x150))(pFVar9,&local_188);
      bVar7 = FWeakObjectPtr::IsValid(pFVar10);
      if ((bVar7) && (this->_padding_ != 0)) {
        lVar2 = *(longlong *)(this->_padding_ + 0x1b8);
        local_178.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        if (lVar2 != 0) {
          local_178.Roll = *(double *)(lVar2 + 0x220);
          uVar23 = *(undefined4 *)(lVar2 + 0x210);
          uVar24 = *(undefined4 *)(lVar2 + 0x214);
          uVar25 = *(undefined4 *)(lVar2 + 0x218);
          uVar26 = *(undefined4 *)(lVar2 + 0x21c);
        }
        pUVar3 = (this->BaseActorSkeletalMesh).field0_0x0.DebugPtr;
        if (pUVar3 != (USkeletalMeshComponent *)0x0) {
          pwVar15 = L"";
          pcVar4 = *(code **)(pUVar3->_padding_ + 0x540);
          if ((this->TargetSocketName).Data.ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(this->TargetSocketName).Data.AllocatorInstance.Data;
          }
          pFVar11 = ::FName::FName(&local_188,pwVar14);
          cVar8 = (*pcVar4)(pUVar3,*pFVar11);
          if (cVar8 == '\x01') {
            pUVar3 = (this->BaseActorSkeletalMesh).field0_0x0.DebugPtr;
            pcVar4 = *(code **)(pUVar3->_padding_ + 0x528);
            if ((this->TargetSocketName).Data.ArrayNum != 0) {
              pwVar15 = (wchar_t *)(this->TargetSocketName).Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_188,pwVar15);
            puVar12 = (undefined4 *)(*pcVar4)(pUVar3,&local_1a8);
            local_178.Roll = *(double *)(puVar12 + 4);
            uVar23 = *puVar12;
            uVar24 = puVar12[1];
            uVar25 = puVar12[2];
            uVar26 = puVar12[3];
          }
        }
        pFVar10 = (FWeakObjectPtr *)(**(code **)(pFVar9->_padding_ + 0x150))(pFVar9,&local_188);
        pUVar13 = FWeakObjectPtr::Get(pFVar10);
        dVar19 = local_178.Roll;
        lVar2 = *(longlong *)(pUVar13 + 0xb);
        if (lVar2 == 0) {
          auVar1._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          auVar1._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          auVar1._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          auVar1._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          dVar21 = auVar1._8_8_;
          uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar17 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        }
        else {
          auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
          dVar21 = auVar1._8_8_;
          uVar16 = *(undefined4 *)(lVar2 + 0x220);
          uVar17 = *(undefined4 *)(lVar2 + 0x224);
          uVar18 = auVar1._0_4_;
          uVar20 = auVar1._4_4_;
        }
        local_1a8._s_0.Z = (double)CONCAT44(uVar17,uVar16);
        local_158._s_0.X = (double)CONCAT44(uVar20,uVar18) - (double)CONCAT44(uVar24,uVar23);
        local_158._s_0.Y = dVar21 - (double)CONCAT44(uVar26,uVar25);
        local_158._s_0.Z = local_1a8._s_0.Z - local_178.Roll;
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_158._s_0,(TVector<double> *)&local_1a8._s_0,
                   __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
        dVar6 = (double)this->CurrentDistance;
        dVar5 = dVar6 * local_1a8._s_0.X + (double)CONCAT44(uVar24,uVar23);
        dVar21 = dVar6 * local_1a8._s_0.Y + (double)CONCAT44(uVar26,uVar25);
        dVar6 = dVar6 * local_1a8._s_0.Z + dVar19;
        local_1a8._s_0.X = (double)CONCAT44(uVar24,uVar23) - dVar5;
        local_1a8._s_0.Y = (double)CONCAT44(uVar26,uVar25) - dVar21;
        local_1a8._s_0.Z = dVar19 - dVar6;
        this_00 = UE::Math::TRotationMatrix<double>::MakeFromX
                            (&local_128,(TVector<double> *)&local_1a8._s_0);
        UE::Math::TMatrix<double>::Rotator(this_00,&local_140);
        local_1a8._s_0.X = dVar5;
        local_1a8._s_0.Y = dVar21;
        local_1a8._s_0.Z = dVar6;
        USceneComponent::SetWorldLocation
                  ((USceneComponent *)this->_padding_,(TVector<double> *)&local_1a8._s_0,false,
                   (FHitResult *)0x0,None);
        local_178.Pitch = local_140.Pitch;
        local_178.Yaw = local_140.Yaw;
        local_178.Roll = local_140.Roll;
        USceneComponent::SetWorldRotation
                  ((USceneComponent *)this->_padding_,&local_178,false,(FHitResult *)0x0,None);
        dVar19 = (double)param_1 + this->ElapsedTime;
        this->ElapsedTime = dVar19;
        fVar22 = (float)(dVar19 / (double)this->MoveTime);
        if (__real_3f800000 <= fVar22) {
          fVar22 = __real_3f800000;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        this->CurrentDistance =
             fVar22 * (this->EndDistance - this->StartDistance) + this->StartDistance;
      }
    }
  }
  return;
}

