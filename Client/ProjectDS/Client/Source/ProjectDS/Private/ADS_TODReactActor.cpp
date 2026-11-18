// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5c4850

UClass * __cdecl ADS_TODReactActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_TODReactActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TODReactActor",
               &Z_Registration_Info_UClass_ADS_TODReactActor.InnerSingleton,
               StaticRegisterNativesADS_TODReactActor,0x348,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_TODReactActor>,
               InternalVTableHelperCtorCaller<ADS_TODReactActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_TODReactActor.InnerSingleton;
}

// ADS_TODReactActor @ 14b5c66c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ADS_TODReactActor * __thiscall
ADS_TODReactActor::ADS_TODReactActor(ADS_TODReactActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_TODReactActor__6B_;
  (this->ArrowComponent).field0_0x0.DebugPtr = (UArrowComponent *)0x0;
  (this->ChildActorComponent).field0_0x0.DebugPtr = (UChildActorComponent *)0x0;
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  *(undefined8 *)&this->UserParameterNameMap = 0;
  *(undefined8 *)&(this->UserParameterNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->UserParameterNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->UserParameterNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x48 = 0;
  this->bOverrideLightProperties = false;
  this->Intensity = 2000.0;
  (this->LightColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  (this->DSPointLight).field0_0x0.DebugPtr = (ADS_PointLight *)0x0;
  (this->LightComponent).field0_0x0.DebugPtr = (ULightComponent *)0x0;
  return this;
}

// ~ADS_TODReactActor @ 14b5c88c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::~ADS_TODReactActor(ADS_TODReactActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ADS_TODReactActor__6B_;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserParameterNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserParameterNameMap);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cb960

UClass * __cdecl ADS_TODReactActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_TODReactActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TODReactActor",
               &Z_Registration_Info_UClass_ADS_TODReactActor.InnerSingleton,
               StaticRegisterNativesADS_TODReactActor,0x348,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_TODReactActor>,
               InternalVTableHelperCtorCaller<ADS_TODReactActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_TODReactActor.InnerSingleton;
}

// StaticRegisterNativesADS_TODReactActor @ 14b5cdf10

void __cdecl ADS_TODReactActor::StaticRegisterNativesADS_TODReactActor(void)

{
  return;
}

// ADS_TODReactActor @ 14b999290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

ADS_TODReactActor * __thiscall
ADS_TODReactActor::ADS_TODReactActor(ADS_TODReactActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FColor FVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UArrowComponent *pUVar6;
  UNiagaraComponent *this_00;
  UChildActorComponent *pUVar7;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  this->_padding_ = (longlong)&___7ADS_TODReactActor__6B_;
  (this->ArrowComponent).field0_0x0.DebugPtr = (UArrowComponent *)0x0;
  (this->ChildActorComponent).field0_0x0.DebugPtr = (UChildActorComponent *)0x0;
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraComponent *)0x0;
  *(undefined8 *)&this->UserParameterNameMap = 0;
  *(undefined8 *)&(this->UserParameterNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->UserParameterNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->UserParameterNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->UserParameterNameMap).field_0x48 = 0;
  this->bOverrideLightProperties = false;
  this->Intensity = 2000.0;
  FVar3 = FColor::White;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xf9;
  (this->LightColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar3.field0_0x0;
  (this->DSPointLight).field0_0x0.DebugPtr = (ADS_PointLight *)0x0;
  (this->LightComponent).field0_0x0.DebugPtr = (ULightComponent *)0x0;
  pFVar4 = ::FName::FName(&local_res8,L"Arrow");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UArrowComponent_NoRegister();
  pUVar6 = (UArrowComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UArrowComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ArrowComponent).field0_0x0.DebugPtr = pUVar6;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar6,(USceneComponent *)this->_padding_,(FName)0x0);
  pUVar6 = (this->ArrowComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar6->_padding_ + 0x5f8))(pUVar6,0);
  pFVar4 = ::FName::FName(&local_res8,L"Niagara");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
  this_00 = (UNiagaraComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->NiagaraComponent).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,
             (USceneComponent *)(this->ArrowComponent).field0_0x0.DebugPtr,(FName)0x0);
  pFVar4 = ::FName::FName(&local_res8,L"ChildActor");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UChildActorComponent_NoRegister();
  pUVar7 = (UChildActorComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UChildActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ChildActorComponent).field0_0x0.DebugPtr = pUVar7;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar7,(USceneComponent *)(this->ArrowComponent).field0_0x0.DebugPtr
             ,(FName)0x0);
  pUVar7 = (this->ChildActorComponent).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar7 + 0x5f8))(pUVar7,0);
  return this;
}

// BeginPlay @ 14b99b8d0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::BeginPlay(ADS_TODReactActor *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  ADS_TODReactActor *pAVar5;
  UClass *pUVar6;
  ADS_TODReactActor *pAVar7;
  UAutoDestroySubsystem *this_00;
  UFunction *pUVar8;
  undefined8 *puVar9;
  ADS_TODReactActor *pAVar10;
  undefined1 auStack_128 [32];
  ADS_TODReactActor *pAStack_108;
  undefined1 auStack_100 [8];
  ADS_TODReactActor **ppAStack_f8;
  undefined8 auStack_f0 [24];
  undefined8 *puStack_30;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = (ADS_TODReactActor *)0x0;
  pAVar10 = (ADS_TODReactActor *)0x0;
  pAVar5 = this;
  if (this == (ADS_TODReactActor *)0x0) {
    pAVar5 = pAVar7;
  }
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar5);
  if ((bVar3) && (this != (ADS_TODReactActor *)0x0)) {
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
  pAVar5 = (ADS_TODReactActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar5 == (ADS_TODReactActor *)0x0) goto LAB_147385169;
  }
  else {
    pAVar10 = pAVar7;
    if (pAVar5 == (ADS_TODReactActor *)0x0) goto LAB_147385169;
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
  pAVar7 = (ADS_TODReactActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  pAStack_108 = pAVar5;
  if (pAVar10 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ADS_TODReactActor *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_108,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)auStack_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ADS_TODReactActor *)0x0)
       ) {
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
    pAStack_108 = (ADS_TODReactActor *)*puVar9;
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

// DayNightChanged @ 14b9a6430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::DayNightChanged(ADS_TODReactActor *this,bool param_1)

{
  UNiagaraComponent *pUVar1;
  
  pUVar1 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->NiagaraComponent).field0_0x0.DebugPtr;
    if (!param_1) {
      USceneComponent::SetVisibility((USceneComponent *)pUVar1,false,DirtyOnly);
      return;
    }
    USceneComponent::SetVisibility((USceneComponent *)pUVar1,true,DirtyOnly);
    return;
  }
  return;
}

// Destroyed @ 14b9a6e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::Destroyed(ADS_TODReactActor *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UFunction *pUVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  ADS_TODReactActor *pAStackX_8;
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

// PostRegisterAllComponents @ 14b9c0470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::PostRegisterAllComponents(ADS_TODReactActor *this)

{
  uint *puVar1;
  int iVar2;
  ULightComponent *pUVar3;
  UClass *pUVar4;
  ADS_PointLight *pAVar5;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  pAVar5 = (ADS_PointLight *)
           (((this->ChildActorComponent).field0_0x0.DebugPtr)->ChildActor).field0_0x0.DebugPtr;
  if (pAVar5 != (ADS_PointLight *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_PointLight_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) goto LAB_14b9c04ba;
  }
  pAVar5 = (ADS_PointLight *)0x0;
LAB_14b9c04ba:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar5 == (ADS_PointLight *)0x0)) {
    (this->DSPointLight).field0_0x0.DebugPtr = pAVar5;
    if (pAVar5 == (ADS_PointLight *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
    (this->DSPointLight).field0_0x0.DebugPtr = pAVar5;
  }
  pUVar3 = (ULightComponent *)pAVar5->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (ULightComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->LightComponent).field0_0x0.DebugPtr = pUVar3;
  USceneComponent::SetVisibility((USceneComponent *)pUVar3,true,DirtyOnly);
  pUVar3 = (this->LightComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x5f8))(pUVar3,2);
  puVar1 = (uint *)((longlong)&((this->LightComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffd;
  if (this->bOverrideLightProperties == true) {
    ULightComponent::SetLightFColor
              ((this->LightComponent).field0_0x0.DebugPtr,(FColor)(this->LightColor).field0_0x0._s_0
              );
    *(float *)((longlong)&((this->LightComponent).field0_0x0.DebugPtr)->_padding_ + 4) =
         this->Intensity;
  }
  ULightComponent::UpdateColorAndBrightness((this->LightComponent).field0_0x0.DebugPtr);
  return;
}

// RegisterEvent @ 14b9c17d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::RegisterEvent(ADS_TODReactActor *this)

{
  return;
}

// UnRegisterEvent @ 14b9c80c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::UnRegisterEvent(ADS_TODReactActor *this)

{
  return;
}

// UpdateDSPointLight @ 14b9c8a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ADS_TODReactActor::UpdateDSPointLight(ADS_TODReactActor *this)

{
  uint *puVar1;
  int iVar2;
  ULightComponent *pUVar3;
  UClass *pUVar4;
  ADS_PointLight *pAVar5;
  
  pAVar5 = (ADS_PointLight *)
           (((this->ChildActorComponent).field0_0x0.DebugPtr)->ChildActor).field0_0x0.DebugPtr;
  if (pAVar5 != (ADS_PointLight *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_PointLight_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) goto LAB_14b9c8a65;
  }
  pAVar5 = (ADS_PointLight *)0x0;
LAB_14b9c8a65:
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar5 == (ADS_PointLight *)0x0)) {
    (this->DSPointLight).field0_0x0.DebugPtr = pAVar5;
    if (pAVar5 == (ADS_PointLight *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
    (this->DSPointLight).field0_0x0.DebugPtr = pAVar5;
  }
  pUVar3 = (ULightComponent *)pAVar5->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (ULightComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->LightComponent).field0_0x0.DebugPtr = pUVar3;
  USceneComponent::SetVisibility((USceneComponent *)pUVar3,true,DirtyOnly);
  pUVar3 = (this->LightComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x5f8))(pUVar3,2);
  puVar1 = (uint *)((longlong)&((this->LightComponent).field0_0x0.DebugPtr)->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffd;
  if (this->bOverrideLightProperties == true) {
    ULightComponent::SetLightFColor
              ((this->LightComponent).field0_0x0.DebugPtr,(FColor)(this->LightColor).field0_0x0._s_0
              );
    *(float *)((longlong)&((this->LightComponent).field0_0x0.DebugPtr)->_padding_ + 4) =
         this->Intensity;
  }
  ULightComponent::UpdateColorAndBrightness((this->LightComponent).field0_0x0.DebugPtr);
  return;
}

