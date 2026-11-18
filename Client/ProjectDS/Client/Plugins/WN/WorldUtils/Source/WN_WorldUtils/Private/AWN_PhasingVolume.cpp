// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 39

// StaticClass @ 14a025590

UClass * __cdecl AWN_PhasingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_PhasingVolume",
               &Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton,
               StaticRegisterNativesAWN_PhasingVolume,0x398,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_PhasingVolume>,
               InternalVTableHelperCtorCaller<AWN_PhasingVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton;
}

// AWN_PhasingVolume @ 14a02cf90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_PhasingVolume * __thiscall
AWN_PhasingVolume::AWN_PhasingVolume(AWN_PhasingVolume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->PhasingId = 0x3e9;
  this->_padding_ = (longlong)&___7AWN_PhasingVolume__6B_;
  (this->PhasingVolumeMesh).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->PhasingVolumeMeshMatInst).field0_0x0.DebugPtr = (UMaterialInstance *)0x0;
  (this->EnterSphereCollision).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->OutSphereCollision).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->BlockingBoxCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  *(undefined8 *)&this->EnterSphereCollisionBeginOverlapDelegate = 0;
  *(undefined8 *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&this->EnterSphereCollisionEndOverlapDelegate = 0;
  *(undefined8 *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OutSphereCollisionBeginOverlapDelegate = 0;
  *(undefined8 *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OutSphereCollisionEndOverlapDelegate = 0;
  *(undefined8 *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x10 = 0;
  (this->TimerHandle).Handle = 0;
  (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->PhasingVolumeRadius = 100.0;
  this->BlockingBoxCollisionLocationOffset = 0.0;
  *(undefined8 *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x18 = 2;
  this->ShieldActivateStartPoint = -0.5;
  this->ShieldActivateEndPoint = 1.0;
  return this;
}

// AWN_PhasingVolume @ 14a02d0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_PhasingVolume * __thiscall
AWN_PhasingVolume::AWN_PhasingVolume(AWN_PhasingVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UStaticMeshComponent *this_00;
  USphereComponent *pUVar7;
  char *pcVar8;
  AWN_PhasingVolume *pAVar9;
  UBoxComponent *this_01;
  char *pcVar10;
  char *pcVar11;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  AActor::AActor((AActor *)this,param_1);
  this->PhasingId = 0x3e9;
  pcVar11 = &DAT_00000002;
  this->PhasingVolumeRadius = 100.0;
  this->BlockingBoxCollisionLocationOffset = 0.0;
  this->ShieldActivateStartPoint = -0.5;
  this->_padding_ = (longlong)&___7AWN_PhasingVolume__6B_;
  (this->PhasingVolumeMesh).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  (this->PhasingVolumeMeshMatInst).field0_0x0.DebugPtr = (UMaterialInstance *)0x0;
  (this->EnterSphereCollision).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->OutSphereCollision).field0_0x0.DebugPtr = (USphereComponent *)0x0;
  (this->BlockingBoxCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  *(undefined8 *)&this->EnterSphereCollisionBeginOverlapDelegate = 0;
  *(undefined8 *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&this->EnterSphereCollisionEndOverlapDelegate = 0;
  *(undefined8 *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OutSphereCollisionBeginOverlapDelegate = 0;
  *(undefined8 *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OutSphereCollisionEndOverlapDelegate = 0;
  *(undefined8 *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x18 = 2;
  (this->TimerHandle).Handle = 0;
  (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->ShieldActivateEndPoint = 1.0;
  pFVar4 = ::FName::FName(&local_60,"Root");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  this->_padding_ = (longlong)pUVar6;
  pFVar4 = ::FName::FName(&local_58,"PhasingVolumeMesh");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  this_00 = (UStaticMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->PhasingVolumeMesh).field0_0x0.DebugPtr = this_00;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  pFVar4 = ::FName::FName(&local_50,"EnterSphereCollision");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USphereComponent_NoRegister();
  pUVar7 = (USphereComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->EnterSphereCollision).field0_0x0.DebugPtr = pUVar7;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar7,(USceneComponent *)this->_padding_,(FName)0x0);
  pUVar7 = (this->EnterSphereCollision).field0_0x0.DebugPtr;
  pcVar8 = strstr("&AWN_PhasingVolume::NotifyEnterSphereCollisionBeginOverlap","::");
  if (pcVar8 == (char *)0x0) {
LAB_14a02d31a:
    pcVar10 = &DAT_00000002;
LAB_14a02d31d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pAVar9 = (AWN_PhasingVolume *)(*pcVar2)();
      return pAVar9;
    }
  }
  else {
    do {
      pcVar10 = pcVar8;
      pcVar8 = strstr(pcVar10 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14a02d31a;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14a02d31d;
  }
  ::FName::FName(&local_80,pcVar10);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<AWN_PhasingVolume>
            ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
              *)((longlong)&pUVar7->_padding_ + 1),this,(pmf_290eb029)0x14a0366e0,local_80);
  pUVar7 = (this->EnterSphereCollision).field0_0x0.DebugPtr;
  pcVar8 = strstr("&AWN_PhasingVolume::NotifyEnterSphereCollisionEndOverlap","::");
  if (pcVar8 == (char *)0x0) {
LAB_14a02d3ca:
    pcVar10 = &DAT_00000002;
LAB_14a02d3cd:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pAVar9 = (AWN_PhasingVolume *)(*pcVar2)();
      return pAVar9;
    }
  }
  else {
    do {
      pcVar10 = pcVar8;
      pcVar8 = strstr(pcVar10 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14a02d3ca;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14a02d3cd;
  }
  ::FName::FName(&local_78,pcVar10);
  TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<AWN_PhasingVolume>
            ((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
              *)((longlong)&pUVar7->_padding_ + 2),this,(pmf_3abfc795)0x14a036700,local_78);
  pFVar4 = ::FName::FName(&local_48,"OutSphereCollision");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USphereComponent_NoRegister();
  pUVar7 = (USphereComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (USphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->OutSphereCollision).field0_0x0.DebugPtr = pUVar7;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar7,(USceneComponent *)this->_padding_,(FName)0x0);
  pUVar7 = (this->OutSphereCollision).field0_0x0.DebugPtr;
  pcVar8 = strstr("&AWN_PhasingVolume::NotifyOutSphereCollisionBeginOverlap","::");
  if (pcVar8 == (char *)0x0) {
LAB_14a02d4ea:
    pcVar10 = &DAT_00000002;
LAB_14a02d4ed:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pAVar9 = (AWN_PhasingVolume *)(*pcVar2)();
      return pAVar9;
    }
  }
  else {
    do {
      pcVar10 = pcVar8;
      pcVar8 = strstr(pcVar10 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14a02d4ea;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14a02d4ed;
  }
  ::FName::FName(&local_70,pcVar10);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<AWN_PhasingVolume>
            ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
              *)((longlong)&pUVar7->_padding_ + 1),this,(pmf_290eb029)0x14a036720,local_70);
  pUVar7 = (this->OutSphereCollision).field0_0x0.DebugPtr;
  pcVar8 = strstr("&AWN_PhasingVolume::NotifyOutSphereCollisionEndOverlap","::");
  if (pcVar8 != (char *)0x0) {
    do {
      pcVar10 = pcVar8;
      pcVar8 = strstr(pcVar10 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if ((pcVar10 != (char *)0x0) && (pcVar11 = pcVar10 + 2, pcVar10[2] != '0')) goto LAB_14a02d5c8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pAVar9 = (AWN_PhasingVolume *)(*pcVar2)();
    return pAVar9;
  }
LAB_14a02d5c8:
  ::FName::FName(&local_68,pcVar11);
  TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<AWN_PhasingVolume>
            ((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
              *)((longlong)&pUVar7->_padding_ + 2),this,(pmf_3abfc795)0x14a036740,local_68);
  pFVar4 = ::FName::FName(&local_40,"BlockingBoxCollision");
  FVar1 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UBoxComponent_NoRegister();
  this_01 = (UBoxComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UBoxComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->BlockingBoxCollision).field0_0x0.DebugPtr = this_01;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,(USceneComponent *)this->_padding_,(FName)0x0);
  return this;
}

// ~AWN_PhasingVolume @ 14a02e9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_PhasingVolume::~AWN_PhasingVolume(AWN_PhasingVolume *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7AWN_PhasingVolume__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OutSphereCollisionEndOverlapDelegate).field_0x8,
             *(int *)&(this->OutSphereCollisionEndOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OutSphereCollisionEndOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OutSphereCollisionEndOverlapDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OutSphereCollisionBeginOverlapDelegate).field_0x8,
             *(int *)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OutSphereCollisionBeginOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OutSphereCollisionBeginOverlapDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EnterSphereCollisionEndOverlapDelegate).field_0x8,
             *(int *)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->EnterSphereCollisionEndOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EnterSphereCollisionEndOverlapDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EnterSphereCollisionBeginOverlapDelegate).field_0x8,
             *(int *)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x10);
  pvVar1 = *(void **)&(this->EnterSphereCollisionBeginOverlapDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EnterSphereCollisionBeginOverlapDelegate);
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 14a02f980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall `AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  FRichCurveKey *pFVar3;
  UWorld *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar4;
  float fVar5;
  FRichCurveKey local_38;
  
  fVar5 = *(float *)((longlong)this + 0x10) + *(float *)((longlong)this + 0x14);
  *(float *)((longlong)this + 0x14) = fVar5;
  fVar5 = UCurveFloat::GetFloatValue(*(UCurveFloat **)((longlong)this + 8),fVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             (FReadAccessScope *)&local_38);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,fVar5);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  pFVar3 = FRichCurve::GetLastKey
                     ((FRichCurve *)(*(longlong *)((longlong)this + 8) + 0x30),&local_38);
  if (pFVar3->Time < *(float *)((longlong)this + 0x14) ||
      pFVar3->Time == *(float *)((longlong)this + 0x14)) {
    this_00 = AActor::GetWorld(*(AActor **)this);
    this_01 = UWorld::GetTimerManager(this_00);
    lVar2 = *(longlong *)this;
    pFVar4 = FTimerManager::FindTimer(this_01,(FTimerHandle *)(lVar2 + 0x388));
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)*(ulong64 *)(lVar2 + 0x388));
    }
    *(undefined8 *)(lVar2 + 0x388) = 0;
  }
  return;
}

// ActivateBlockingBoxCollision @ 14a031430

void __thiscall
AWN_PhasingVolume::ActivateBlockingBoxCollision(AWN_PhasingVolume *this,bool *param_1)

{
  UBoxComponent *pUVar1;
  
  pUVar1 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
  if (pUVar1 == (UBoxComponent *)0x0) {
    return;
  }
  if (*param_1 == true) {
                    /* WARNING: Could not recover jumptable at 0x00014a031449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x780))(pUVar1,3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a031452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x780))(pUVar1,0);
  return;
}

// ActivateEnterSphereCollisionOverlap @ 14a031460

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
AWN_PhasingVolume::ActivateEnterSphereCollisionOverlap(AWN_PhasingVolume *this,bool *param_1)

{
  USphereComponent *this_00;
  
  this_00 = (this->EnterSphereCollision).field0_0x0.DebugPtr;
  if (this_00 != (USphereComponent *)0x0) {
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this_00,*param_1);
    return;
  }
  return;
}

// ActivateOutSphereCollisionOverlap @ 14a031480

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
AWN_PhasingVolume::ActivateOutSphereCollisionOverlap(AWN_PhasingVolume *this,bool *param_1)

{
  USphereComponent *this_00;
  
  this_00 = (this->OutSphereCollision).field0_0x0.DebugPtr;
  if (this_00 != (USphereComponent *)0x0) {
    UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this_00,*param_1);
    return;
  }
  return;
}

// BeginPlay @ 14a031bf0

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

void __thiscall AWN_PhasingVolume::BeginPlay(AWN_PhasingVolume *this)

{
  USphereComponent *pUVar1;
  UBoxComponent *pUVar2;
  UCurveFloat *pUVar3;
  FName *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FName local_res8;
  
  AActor::BeginPlay((AActor *)this);
  pUVar1 = (this->OutSphereCollision).field0_0x0.DebugPtr;
  if ((pUVar1 != (USphereComponent *)0x0) &&
     (pUVar2 = (this->BlockingBoxCollision).field0_0x0.DebugPtr, pUVar2 != (UBoxComponent *)0x0)) {
    uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)pUVar1->_padding_;
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
             *(uint *)((longlong)&pUVar1->_padding_ + 4);
    uVar15 = _UNK_15061cc88 & (uint)pUVar1->_padding_;
    uVar16 = _UNK_15061cc8c & *(uint *)((longlong)&pUVar1->_padding_ + 4);
    auVar12._0_8_ =
         CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                  *(uint *)((longlong)&pUVar1->_padding_ + 4),
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)pUVar1->_padding_);
    auVar12._8_4_ = _UNK_15061cc88 & (uint)pUVar1->_padding_;
    auVar12._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&pUVar1->_padding_ + 4);
    auVar6._4_4_ = uVar14;
    auVar6._0_4_ = uVar13;
    auVar6._8_4_ = uVar15;
    auVar6._12_4_ = uVar16;
    auVar9._4_4_ = uVar14;
    auVar9._0_4_ = uVar13;
    auVar9._8_4_ = uVar15;
    auVar9._12_4_ = uVar16;
    auVar11._8_8_ = auVar12._0_8_;
    auVar11._0_8_ = auVar6._8_8_;
    auVar10 = minpd(auVar9,auVar11);
    auVar7._12_4_ = uVar14;
    auVar7._8_4_ = uVar13;
    auVar7._0_8_ = auVar12._0_8_;
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = uVar13;
    auVar5._8_4_ = uVar15;
    auVar5._12_4_ = uVar16;
    auVar6 = blendpd(auVar5,auVar12,2);
    auVar11 = minpd(auVar10,auVar7);
    auVar8._8_4_ = auVar12._8_4_;
    auVar8._0_8_ = auVar12._0_8_;
    auVar8._12_4_ = auVar12._12_4_;
    auVar10._4_4_ = uVar16;
    auVar10._0_4_ = uVar15;
    auVar6 = minpd(auVar8,auVar6);
    auVar10._8_4_ = auVar12._8_4_;
    auVar10._12_4_ = auVar12._12_4_;
    minpd(auVar6,auVar10);
    this->BlockingBoxCollisionLocationOffset =
         (float)((double)((float)auVar11._0_8_ * pUVar1->SphereRadius) +
                (pUVar2->BoxExtent).field0_0x0._s_0.Y * __real_4004000000000000);
  }
  if (((this->MaterialInstanceDynamic).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) &&
     (pUVar3 = this->TimeCurve, pUVar3 != (UCurveFloat *)0x0)) {
    pFVar4 = ::FName::FName(&local_res8,L"Dissolve Amount");
    PlayMaterialParameterByTimer
              (this,(this->MaterialInstanceDynamic).field0_0x0.DebugPtr,*pFVar4,pUVar3);
  }
  return;
}

// EndPlay @ 14a0331d0

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

void __thiscall AWN_PhasingVolume::EndPlay(AWN_PhasingVolume *this,Type param_1)

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
  AWN_PhasingVolume *pAVar11;
  UClass *pUVar12;
  AWN_PhasingVolume *pAVar13;
  longlong *plVar14;
  AWN_PhasingVolume *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  AWN_PhasingVolume *pAStack_148;
  AWN_PhasingVolume *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  AWN_PhasingVolume *pAStack_120;
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
  pAVar13 = (AWN_PhasingVolume *)0x0;
  pAVar15 = (AWN_PhasingVolume *)0x0;
  pAVar11 = this;
  if (this == (AWN_PhasingVolume *)0x0) {
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
  pAVar11 = (AWN_PhasingVolume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (AWN_PhasingVolume *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (AWN_PhasingVolume *)0x0) goto LAB_147390f4f;
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
  pAVar13 = (AWN_PhasingVolume *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (AWN_PhasingVolume *)0x0)) {
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
       (pAVar11 != (AWN_PhasingVolume *)0x0)) {
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

// GetBlockingBoxCollisionLocationOffset @ 14a033bb0

float __thiscall AWN_PhasingVolume::GetBlockingBoxCollisionLocationOffset(AWN_PhasingVolume *this)

{
  return this->BlockingBoxCollisionLocationOffset;
}

// GetEnterSphereCollisionCenterPos @ 14a0340e0

TVector<double> * __thiscall
AWN_PhasingVolume::GetEnterSphereCollisionCenterPos
          (AWN_PhasingVolume *this,TVector<double> *__return_storage_ptr__)

{
  USphereComponent *pUVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pUVar1 = (this->EnterSphereCollision).field0_0x0.DebugPtr;
  if (pUVar1 != (USphereComponent *)0x0) {
    dVar3 = (double)pUVar1->_padding_;
    dVar2 = (double)pUVar1->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)pUVar1->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetEnterSphereCollisionRadius @ 14a034130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall AWN_PhasingVolume::GetEnterSphereCollisionRadius(AWN_PhasingVolume *this)

{
  USphereComponent *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar9 [16];
  
  pUVar1 = (this->EnterSphereCollision).field0_0x0.DebugPtr;
  if (pUVar1 != (USphereComponent *)0x0) {
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)pUVar1->_padding_;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
             *(uint *)((longlong)&pUVar1->_padding_ + 4);
    auVar9._0_8_ = CONCAT44(uVar10,uVar8);
    auVar9._8_4_ = _UNK_15061cc88 & (uint)pUVar1->_padding_;
    auVar9._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&pUVar1->_padding_ + 4);
    uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)pUVar1->_padding_;
    uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
             *(uint *)((longlong)&pUVar1->_padding_ + 4);
    uVar13 = _UNK_15061cc88 & (uint)pUVar1->_padding_;
    uVar14 = _UNK_15061cc8c & *(uint *)((longlong)&pUVar1->_padding_ + 4);
    auVar6._12_4_ = uVar12;
    auVar6._8_4_ = uVar11;
    auVar6._0_8_ = auVar9._0_8_;
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = uVar13;
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar5._8_4_ = uVar8;
    auVar5._12_4_ = uVar10;
    auVar5 = minpd(auVar4,auVar5);
    auVar6 = minpd(auVar5,auVar6);
    auVar3._4_4_ = uVar12;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar13;
    auVar3._12_4_ = uVar14;
    auVar2._4_4_ = uVar14;
    auVar2._0_4_ = uVar13;
    auVar5 = blendpd(auVar3,auVar9,2);
    auVar7._8_4_ = auVar9._8_4_;
    auVar7._0_8_ = auVar9._0_8_;
    auVar7._12_4_ = auVar9._12_4_;
    auVar5 = minpd(auVar7,auVar5);
    auVar2._8_4_ = auVar9._8_4_;
    auVar2._12_4_ = auVar9._12_4_;
    minpd(auVar5,auVar2);
    return (float)auVar6._0_8_ * pUVar1->SphereRadius;
  }
  return 0.0;
}

// GetMemo @ 14a0341b0

FName __thiscall AWN_PhasingVolume::GetMemo(AWN_PhasingVolume *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"");
  return in_RDX;
}

// GetPhasingId @ 14a034210

int __thiscall AWN_PhasingVolume::GetPhasingId(AWN_PhasingVolume *this)

{
  return this->PhasingId;
}

// GetPhasingVolumeCenterPos @ 14a034220

TVector<double> * __thiscall
AWN_PhasingVolume::GetPhasingVolumeCenterPos
          (AWN_PhasingVolume *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x210);
    dStack_20 = *(double *)(lVar1 + 0x218);
    local_18 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetPhasingVolumeEndPos @ 14a034290

TVector<double> * __thiscall
AWN_PhasingVolume::GetPhasingVolumeEndPos
          (AWN_PhasingVolume *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = this->_padding_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar1 != 0) {
    uVar2 = *(double *)(lVar1 + 0x220);
    uVar4 = *(double *)(lVar1 + 0x210);
    uVar5 = *(double *)(lVar1 + 0x218);
  }
  dVar3 = (double)this->PhasingVolumeRadius;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 + (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 + (double)uVar5;
  return __return_storage_ptr__;
}

// GetPhasingVolumeMeshRadius @ 14a034310

float __thiscall AWN_PhasingVolume::GetPhasingVolumeMeshRadius(AWN_PhasingVolume *this)

{
  UStaticMeshComponent *this_00;
  TVector<double> local_38;
  TVector<double> local_20;
  
  this_00 = (this->PhasingVolumeMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::GetLocalBounds(this_00,&local_20,&local_38);
    return (float)(double)CONCAT44((uint)((ulonglong)local_38.field0_0x0._0_8_ >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_38.field0_0x0._s_0.X,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  return 0.0;
}

// GetPhasingVolumeRadius @ 14a034360

float __thiscall AWN_PhasingVolume::GetPhasingVolumeRadius(AWN_PhasingVolume *this)

{
  return this->PhasingVolumeRadius;
}

// GetPhasingVolumeStartPos @ 14a034370

TVector<double> * __thiscall
AWN_PhasingVolume::GetPhasingVolumeStartPos
          (AWN_PhasingVolume *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
    uVar5 = auVar1._0_4_;
    uVar6 = auVar1._4_4_;
    dVar7 = auVar1._8_8_;
    uVar3 = *(double *)(lVar2 + 0x220);
  }
  dVar4 = (double)this->PhasingVolumeRadius;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar6,uVar5) - dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7 - dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar3 - dVar4;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a034630

UClass * __cdecl AWN_PhasingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_PhasingVolume",
               &Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton,
               StaticRegisterNativesAWN_PhasingVolume,0x398,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_PhasingVolume>,
               InternalVTableHelperCtorCaller<AWN_PhasingVolume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_PhasingVolume.InnerSingleton;
}

// NotifyEnterSphereCollisionBeginOverlap @ 14a0366e0

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
AWN_PhasingVolume::NotifyEnterSphereCollisionBeginOverlap
          (AWN_PhasingVolume *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast(&this->EnterSphereCollisionBeginOverlapDelegate,param_2,this);
  return;
}

// NotifyEnterSphereCollisionEndOverlap @ 14a036700

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
AWN_PhasingVolume::NotifyEnterSphereCollisionEndOverlap
          (AWN_PhasingVolume *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast(&this->EnterSphereCollisionEndOverlapDelegate,param_2,this);
  return;
}

// NotifyOutSphereCollisionBeginOverlap @ 14a036720

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
AWN_PhasingVolume::NotifyOutSphereCollisionBeginOverlap
          (AWN_PhasingVolume *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OutSphereCollisionBeginOverlapDelegate,param_2,this);
  return;
}

// NotifyOutSphereCollisionEndOverlap @ 14a036740

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
AWN_PhasingVolume::NotifyOutSphereCollisionEndOverlap
          (AWN_PhasingVolume *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OutSphereCollisionEndOverlapDelegate,param_2,this);
  return;
}

// OnConstruction @ 14a036e70

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
AWN_PhasingVolume::OnConstruction(AWN_PhasingVolume *this,TTransform<double> *param_1)

{
  UStaticMeshComponent *pUVar1;
  USphereComponent *this_00;
  UMaterialInstanceDynamic *pUVar2;
  float fVar3;
  TVector<double>_u_0 local_58;
  TVector<double> local_38;
  
  if (((this->PhasingVolumeMesh).field0_0x0.DebugPtr != (UStaticMeshComponent *)0x0) ||
     ((this->PhasingVolumeMeshMatInst).field0_0x0.DebugPtr != (UMaterialInstance *)0x0)) {
    pUVar2 = UMaterialInstanceDynamic::Create
                       ((UMaterialInterface *)(this->PhasingVolumeMeshMatInst).field0_0x0.DebugPtr,
                        (UObject *)this,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->MaterialInstanceDynamic).field0_0x0.DebugPtr = pUVar2;
    pUVar1 = (this->PhasingVolumeMesh).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,0,pUVar2);
  }
  local_58._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_58._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  AActor::SetActorScale3D((AActor *)this,(TVector<double> *)&local_58._s_0);
  pUVar1 = (this->PhasingVolumeMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::GetLocalBounds(pUVar1,&local_38,(TVector<double> *)&local_58._s_0);
    fVar3 = (float)(double)CONCAT44(local_58._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    local_58._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (__real_3f800000 < fVar3) {
      local_58._s_0.Z = (double)(this->PhasingVolumeRadius / fVar3);
      local_58._8_4_ = SUB84(local_58._s_0.Z,0);
      local_58._s_0.X = local_58._s_0.Z;
      local_58._12_4_ = (int)((ulonglong)local_58._s_0.Z >> 0x20);
      USceneComponent::SetWorldScale3D
                ((USceneComponent *)(this->PhasingVolumeMesh).field0_0x0.DebugPtr,
                 (TVector<double> *)&local_58._s_0);
    }
  }
  this_00 = (this->OutSphereCollision).field0_0x0.DebugPtr;
  if (this_00 == (USphereComponent *)0x0) {
    return;
  }
  fVar3 = this->PhasingVolumeRadius - __real_43480000;
  if (fVar3 <= __real_41200000) {
    fVar3 = __real_41200000;
  }
  USphereComponent::SetSphereRadius(this_00,fVar3,true);
  return;
}

// PlayCurveByTimer @ 14a037ac0

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

void __thiscall
AWN_PhasingVolume::PlayCurveByTimer
          (AWN_PhasingVolume *this,UCurveFloat *param_1,float param_2,
          TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerManager *this_01;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStackY_118 [32];
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> local_d0;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [48];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = AActor::GetWorld((AActor *)this);
  this_01 = UWorld::GetTimerManager(this_00);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>(&local_d0,param_3);
  local_b8 = (code *)0x0;
  local_90 = FMemory::Malloc(0x38,8);
  plVar3 = local_90 + 1;
  *local_90 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *plVar3 = (longlong)this;
  local_90[2] = (longlong)param_1;
  *(float *)(local_90 + 3) = param_2;
  *(undefined4 *)((longlong)local_90 + 0x1c) = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_90 + 4),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d0);
  local_88._16_8_ = local_a8[0];
  local_88._24_8_ = local_a8[1];
  local_88._0_8_ = local_b8;
  if (plVar3 != (longlong *)0x0) {
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,void>::Call;
  }
  local_88._40_8_ = local_90;
  local_90 = (longlong *)0x0;
  local_88._32_8_ = local_a8[2];
  local_b8 = (code *)0x0;
  local_58 = 3;
  FTimerManager::InternalSetTimer
            (this_01,&this->TimerHandle,(FTimerUnifiedDelegate *)local_88,param_2,true,
             __real_bf800000);
  uVar4 = (ulonglong)local_58;
  if (3 < local_58) {
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
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TFunction<void___cdecl(void)>_>::Destruct) {
    if ((code *)local_88._0_8_ != (code *)0x0) {
      plVar3 = (longlong *)(local_88 + 0x10);
      if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_88._40_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_88);
  }
  if (local_b8 != (code *)0x0) {
    plVar3 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar3 = local_90;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// PlayMaterialParameterByTimer @ 14a037cb0

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

void __thiscall
AWN_PhasingVolume::PlayMaterialParameterByTimer
          (AWN_PhasingVolume *this,UMaterialInstanceDynamic *param_1,FName param_2,
          UCurveFloat *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UWorld *this_00;
  FTimerManager *this_01;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  FDelegateAllocation local_130;
  AWN_PhasingVolume *local_120;
  UCurveFloat *local_118;
  undefined8 local_110;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [48];
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar1 = this->ShieldActivateStartPoint;
  uVar2 = this->ShieldActivateEndPoint;
  local_138 = (undefined1  [8])0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x50,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`AWN_PhasingVolume::PlayMaterialParameterByTimer'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this;
    puVar6[4] = param_1;
    *(FName *)(puVar6 + 5) = param_2;
    puVar6[6] = 0;
    puVar6[7] = 0x3ff0000000000000;
    auVar4._8_4_ = SUB84((double)(float)uVar2,0);
    auVar4._0_8_ = (double)(float)uVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)(float)uVar2 >> 0x20);
    *(undefined1 (*) [16])(puVar6 + 8) = auVar4;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  this_00 = AActor::GetWorld((AActor *)this);
  this_01 = UWorld::GetTimerManager(this_00);
  local_110 = 0x3c83126f;
  local_120 = this;
  local_118 = param_3;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>
            (&local_108,(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_138);
  local_b8 = (code *)0x0;
  local_90 = FMemory::Malloc(0x38,8);
  plVar8 = local_90 + 1;
  *local_90 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *plVar8 = (longlong)local_120;
  local_90[2] = (longlong)local_118;
  *(undefined4 *)(local_90 + 3) = (undefined4)local_110;
  *(undefined4 *)((longlong)local_90 + 0x1c) = local_110._4_4_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_90 + 4),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_108);
  local_88._16_8_ = local_a8[0];
  local_88._24_8_ = local_a8[1];
  local_88._0_8_ = local_b8;
  if (plVar8 != (longlong *)0x0) {
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,void>::Call;
  }
  local_88._40_8_ = local_90;
  local_90 = (longlong *)0x0;
  local_88._32_8_ = local_a8[2];
  local_b8 = (code *)0x0;
  local_58 = 3;
  FTimerManager::InternalSetTimer
            (this_01,&this->TimerHandle,(FTimerUnifiedDelegate *)local_88,__real_3c83126f,true,
             __real_bf800000);
  uVar9 = (ulonglong)local_58;
  if (3 < local_58) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::TDestructorCaller<TFunction<void___cdecl(void)>_>::Destruct) {
    if ((code *)local_88._0_8_ != (code *)0x0) {
      plVar8 = (longlong *)(local_88 + 0x10);
      if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(local_88);
  }
  if (local_b8 != (code *)0x0) {
    plVar8 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar8 = local_90;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
             (FWriteAccessScope *)&local_f0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  return;
}

// PostInitializeComponents @ 14a038490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_PhasingVolume::PostInitializeComponents(AWN_PhasingVolume *this)

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
  if (this == (AWN_PhasingVolume *)0x0) {
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

// SetBlockingBoxCollisionTransform @ 14a039d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_PhasingVolume::SetBlockingBoxCollisionTransform
          (AWN_PhasingVolume *this,TVector<double> *param_1,TVector<double> *param_2)

{
  UBoxComponent *pUVar1;
  TQuat<double> *pTVar2;
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  pUVar1 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
  if (pUVar1 != (UBoxComponent *)0x0) {
    local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    USceneComponent::SetWorldLocation
              ((USceneComponent *)pUVar1,(TVector<double> *)&local_48._s_0,false,(FHitResult *)0x0,
               None);
    pUVar1 = (this->BlockingBoxCollision).field0_0x0.DebugPtr;
    UE::Math::TVector<double>::ToOrientationRotator(param_2,(TRotator<double> *)&local_48._s_0);
    pTVar2 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_48._s_0,&local_28);
    USceneComponent::SetWorldRotation((USceneComponent *)pUVar1,pTVar2,false,(FHitResult *)0x0,None)
    ;
  }
  return;
}

// SetEnterSphereCollisionTransform @ 14a03a060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWN_PhasingVolume::SetEnterSphereCollisionTransform
          (AWN_PhasingVolume *this,TVector<double> *param_1,float *param_2)

{
  USphereComponent *this_00;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->EnterSphereCollision).field0_0x0.DebugPtr;
  if (this_00 != (USphereComponent *)0x0) {
    local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    USceneComponent::SetWorldLocation
              ((USceneComponent *)this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,
               None);
    USphereComponent::SetSphereRadius
              ((this->EnterSphereCollision).field0_0x0.DebugPtr,*param_2,true);
  }
  return;
}

// SetPhasingId @ 14a03a270

void __thiscall AWN_PhasingVolume::SetPhasingId(AWN_PhasingVolume *this,int *param_1)

{
  this->PhasingId = *param_1;
  return;
}

// SetPhasingVolumeRadius @ 14a03a280

void __thiscall AWN_PhasingVolume::SetPhasingVolumeRadius(AWN_PhasingVolume *this,float *param_1)

{
  this->PhasingVolumeRadius = *param_1;
  return;
}

// StaticRegisterNativesAWN_PhasingVolume @ 14a03a750

void __cdecl AWN_PhasingVolume::StaticRegisterNativesAWN_PhasingVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AWN_PhasingVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdatePhasingVolumeMeshScale @ 14a03afd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_PhasingVolume::UpdatePhasingVolumeMeshScale(AWN_PhasingVolume *this)

{
  UStaticMeshComponent *this_00;
  USphereComponent *this_01;
  float fVar1;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  local_48._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_48._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  AActor::SetActorScale3D((AActor *)this,(TVector<double> *)&local_48._s_0);
  this_00 = (this->PhasingVolumeMesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::GetLocalBounds(this_00,&local_28,(TVector<double> *)&local_48._s_0);
    fVar1 = (float)(double)CONCAT44(local_48._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    local_48._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (__real_3f800000 < fVar1) {
      local_48._s_0.Z = (double)(this->PhasingVolumeRadius / fVar1);
      local_48._8_4_ = SUB84(local_48._s_0.Z,0);
      local_48._s_0.X = local_48._s_0.Z;
      local_48._12_4_ = (int)((ulonglong)local_48._s_0.Z >> 0x20);
      USceneComponent::SetWorldScale3D
                ((USceneComponent *)(this->PhasingVolumeMesh).field0_0x0.DebugPtr,
                 (TVector<double> *)&local_48._s_0);
    }
  }
  this_01 = (this->OutSphereCollision).field0_0x0.DebugPtr;
  if (this_01 != (USphereComponent *)0x0) {
    fVar1 = this->PhasingVolumeRadius - __real_43480000;
    if (fVar1 <= __real_41200000) {
      fVar1 = __real_41200000;
    }
    USphereComponent::SetSphereRadius(this_01,fVar1,true);
    return;
  }
  return;
}

// execNotifyEnterSphereCollisionBeginOverlap @ 14a042730

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
AWN_PhasingVolume::execNotifyEnterSphereCollisionBeginOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  AActor *local_res20;
  undefined8 local_148;
  undefined8 local_140 [3];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_148 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
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
  local_140[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  memset(local_118,0,0x100);
  uStack_11b = 0;
  uStack_119 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_128 = 0;
  uStack_120 = 0xffffffff;
  uStack_11c = 0;
  uStack_48 = 0xffffffff;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
             *)(param_1 + 0x13),local_res20,(AWN_PhasingVolume *)param_1);
  return;
}

// execNotifyEnterSphereCollisionEndOverlap @ 14a042950

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
AWN_PhasingVolume::execNotifyEnterSphereCollisionEndOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  AActor *local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
             *)&param_1[0x13].field_0x20,local_res10[0],(AWN_PhasingVolume *)param_1);
  return;
}

// execNotifyOutSphereCollisionBeginOverlap @ 14a042a90

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
AWN_PhasingVolume::execNotifyOutSphereCollisionBeginOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  AActor *local_res20;
  undefined8 local_148;
  undefined8 local_140 [3];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_148 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
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
  local_140[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  memset(local_118,0,0x100);
  uStack_11b = 0;
  uStack_119 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_128 = 0;
  uStack_120 = 0xffffffff;
  uStack_11c = 0;
  uStack_48 = 0xffffffff;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
             *)&param_1[0x14].field_0x18,local_res20,(AWN_PhasingVolume *)param_1);
  return;
}

// execNotifyOutSphereCollisionEndOverlap @ 14a042cb0

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
AWN_PhasingVolume::execNotifyOutSphereCollisionEndOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  AActor *local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(AActor_*,AWN_PhasingVolume_*),FDefaultDelegateUserPolicy>
             *)&param_1[0x15].field_0x10,local_res10[0],(AWN_PhasingVolume *)param_1);
  return;
}

