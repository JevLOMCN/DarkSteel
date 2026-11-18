// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b430560

UClass * __cdecl ADS_CameraActor_CharacterViewer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CameraActor_CharacterViewer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraActor_CharacterViewer",
               &Z_Registration_Info_UClass_ADS_CameraActor_CharacterViewer.InnerSingleton,
               StaticRegisterNativesADS_CameraActor_CharacterViewer,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_CameraActor_CharacterViewer>,
               InternalVTableHelperCtorCaller<ADS_CameraActor_CharacterViewer>,local_res8,
               ADS_CameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CameraActor_CharacterViewer.InnerSingleton;
}

// ADS_CameraActor_CharacterViewer @ 14b433f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CameraActor_CharacterViewer * __thiscall
ADS_CameraActor_CharacterViewer::ADS_CameraActor_CharacterViewer
          (ADS_CameraActor_CharacterViewer *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined8 *)&this->field_0x2c0 = 0;
  *(undefined8 *)&this->field_0x2c8 = 0;
  *(undefined8 *)&this->field_0x2d0 = 0;
  *(undefined ***)this = &___7ADS_CameraActor_CharacterViewer__6B_;
  return this;
}

// ~ADS_CameraActor_CharacterViewer @ 14b434be0

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
ADS_CameraActor_CharacterViewer::~ADS_CameraActor_CharacterViewer
          (ADS_CameraActor_CharacterViewer *this)

{
  *(undefined ***)this = &___7ADS_CameraActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4361e0

UClass * __cdecl ADS_CameraActor_CharacterViewer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CameraActor_CharacterViewer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraActor_CharacterViewer",
               &Z_Registration_Info_UClass_ADS_CameraActor_CharacterViewer.InnerSingleton,
               StaticRegisterNativesADS_CameraActor_CharacterViewer,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_CameraActor_CharacterViewer>,
               InternalVTableHelperCtorCaller<ADS_CameraActor_CharacterViewer>,local_res8,
               ADS_CameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CameraActor_CharacterViewer.InnerSingleton;
}

// StaticRegisterNativesADS_CameraActor_CharacterViewer @ 14b436ff0

void __cdecl
ADS_CameraActor_CharacterViewer::StaticRegisterNativesADS_CameraActor_CharacterViewer(void)

{
  return;
}

// ADS_CameraActor_CharacterViewer @ 14b8b1210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_CameraActor_CharacterViewer * __thiscall
ADS_CameraActor_CharacterViewer::ADS_CameraActor_CharacterViewer
          (ADS_CameraActor_CharacterViewer *this,FObjectInitializer *param_1)

{
  ADS_CameraActor::ADS_CameraActor((ADS_CameraActor *)this,param_1);
  *(undefined ***)this = &___7ADS_CameraActor_CharacterViewer__6B_;
  return this;
}

// BeginPlay @ 14b8b5830

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

void __thiscall ADS_CameraActor_CharacterViewer::BeginPlay(ADS_CameraActor_CharacterViewer *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  ADS_CameraActor_CharacterViewer *pAVar5;
  UClass *pUVar6;
  ADS_CameraActor_CharacterViewer *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ADS_CameraActor_CharacterViewer *pAVar10;
  undefined1 auStack_128 [32];
  ADS_CameraActor_CharacterViewer *pAStack_108;
  undefined1 auStack_100 [8];
  ADS_CameraActor_CharacterViewer **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (ADS_CameraActor_CharacterViewer *)0x0;
  pAVar10 = (ADS_CameraActor_CharacterViewer *)0x0;
  pAVar5 = this;
  if (this == (ADS_CameraActor_CharacterViewer *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (ADS_CameraActor_CharacterViewer *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (bVar3) {
      FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
    }
  }
  if ((this->field_0x5d & 0x18) != 8) {
    pAStack_108 = this;
    `AActor::BeginPlay'::__l2::<lambda_1>::operator()(&pAStack_108);
  }
  (**(code **)(*(longlong *)this + 0x400))(this,*(undefined4 *)&this->field_0x64);
  AActor::RegisterAllActorTickFunctions((AActor *)this,true,false);
  puStack_30 = (undefined8 *)0x0;
  uStack_24 = 0x18;
  iStack_28 = 0;
  pAVar5 = (ADS_CameraActor_CharacterViewer *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (ADS_CameraActor_CharacterViewer *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (ADS_CameraActor_CharacterViewer *)0x0) goto LAB_147385169;
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar10 = pAVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)*(longlong *)&pAVar5->field_0x38 < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pAVar5->field_0x30 + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) {
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
  pAVar7 = (ADS_CameraActor_CharacterViewer *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (ADS_CameraActor_CharacterViewer *)0x0)) {
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
       (pAVar5 != (ADS_CameraActor_CharacterViewer *)0x0)) {
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
    pAStack_108 = (ADS_CameraActor_CharacterViewer *)*puVar9;
    if (((*(longlong *)&pAStack_108->field_0x98 & 1) != 0) && (pAStack_108->bHasBegunPlay == '\0'))
    {
      UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)pAStack_108,true);
      (**(code **)(*(longlong *)pAStack_108 + 0x3f8))();
      if (pAStack_108->bHasBegunPlay == '\0') {
        ppAStack_f8 = &pAStack_108;
        `AActor::BeginPlay'::__l12::<lambda_2>::operator()(&ppAStack_f8);
      }
    }
    puVar9 = puVar9 + 1;
  }
  if ((((this->field_0x5a & 2) != 0) &&
      (pUVar4 = AActor::GetWorld((AActor *)this), pUVar4 != (UWorld *)0x0)) &&
     (this_00 = UWorld::GetSubsystem<UAutoDestroySubsystem>(pUVar4),
     this_00 != (UAutoDestroySubsystem *)0x0)) {
    UAutoDestroySubsystem::RegisterActor(this_00,(AActor *)this);
  }
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveBeginPlay);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar8,0);
  this->field_0x5d = this->field_0x5d & 0xf7 | 0x10;
  if (puStack_30 != (undefined8 *)0x0) {
    FMemory::Free(puStack_30);
  }
  return;
}

// EndPlay @ 14b8beda0

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
ADS_CameraActor_CharacterViewer::EndPlay(ADS_CameraActor_CharacterViewer *this,Type param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar5;
  UWorld *pUVar6;
  FStopReplicatingActorParams *pFVar7;
  UFunction *pUVar8;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar9;
  ADS_CameraActor_CharacterViewer *pAVar10;
  UClass *pUVar11;
  ADS_CameraActor_CharacterViewer *pAVar12;
  longlong *plVar13;
  ADS_CameraActor_CharacterViewer *pAVar14;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_CameraActor_CharacterViewer *pAStack_148;
  ADS_CameraActor_CharacterViewer *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_CameraActor_CharacterViewer *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->field_0x5d & 0x18) != 0x10) {
    return;
  }
  pAVar12 = (ADS_CameraActor_CharacterViewer *)0x0;
  pAVar14 = (ADS_CameraActor_CharacterViewer *)0x0;
  pAVar10 = this;
  if (this == (ADS_CameraActor_CharacterViewer *)0x0) {
    pAVar10 = pAVar12;
  }
  bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar10);
  if (bVar5) {
    pUVar6 = AActor::GetWorld((AActor *)this);
    bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
    if (bVar5) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  this->field_0x5d = this->field_0x5d & 0xe7;
  pFVar7 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar7);
  uStack_168 = (char)param_1;
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar8,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->field_0x217 != '\0') {
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
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar9 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar4);
    FStack_128.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar9->Object;
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
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
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
  pAVar10 = (ADS_CameraActor_CharacterViewer *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar10 == (ADS_CameraActor_CharacterViewer *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar14 = pAVar12;
    if (pAVar10 == (ADS_CameraActor_CharacterViewer *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar10);
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar14 = pAVar12;
  if (pUVar11 != (UClass *)0x0) {
    iVar2 = (int)pUVar11->_padding_;
    if (((int)*(longlong *)&pAVar10->field_0x38 < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pAVar10->field_0x30 + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pAVar14 = pAVar10;
    }
  }
LAB_147390f4f:
  pAVar12 = (ADS_CameraActor_CharacterViewer *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar14 == pAVar12) {
    pAStack_148 = pAVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar10 != (ADS_CameraActor_CharacterViewer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar10 != (ADS_CameraActor_CharacterViewer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar2 = iStack_30;
  plVar13 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar13 = plStack_38;
  }
  plVar1 = plVar13 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar13 == plVar1) break;
    plStack_160 = (longlong *)*plVar13;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar13 = plVar13 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// OnConstruction @ 14b8d57b0

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
ADS_CameraActor_CharacterViewer::OnConstruction
          (ADS_CameraActor_CharacterViewer *this,TTransform<double> *param_1)

{
  AActor *pAVar1;
  AActor *pAVar2;
  bool bVar3;
  
  if (*(longlong *)&this->field_0x2c0 != 0) {
    pAVar2 = AActor::GetParentActor((AActor *)this);
    pAVar1 = *(AActor **)&this->field_0x2c0;
    if (pAVar1 == (AActor *)0x0) {
      bVar3 = pAVar2 == (AActor *)0x0;
    }
    else {
      bVar3 = pAVar1 == pAVar2;
    }
    if (!bVar3) {
      AActor::AttachToActor
                ((AActor *)this,pAVar1,&FAttachmentTransformRules::KeepRelativeTransform,(FName)0x0)
      ;
      return;
    }
  }
  return;
}

