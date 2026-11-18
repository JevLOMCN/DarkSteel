// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 8

// StaticClass @ 14d998ef0

UClass * __cdecl UAGVConditionProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AGVConditionProxy",
               &Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton,
               StaticRegisterNativesUAGVConditionProxy,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAGVConditionProxy>,
               InternalVTableHelperCtorCaller<UAGVConditionProxy>,local_res8,
               UAudioGameplayVolumeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton;
}

// UAGVConditionProxy @ 14d99f310

UAGVConditionProxy * __thiscall
UAGVConditionProxy::UAGVConditionProxy(UAGVConditionProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAGVConditionProxy__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->ObjectPtr).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UAGVConditionProxy @ 14d99f350

UAGVConditionProxy * __thiscall
UAGVConditionProxy::UAGVConditionProxy(UAGVConditionProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAGVConditionProxy__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->ObjectPtr).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UAGVConditionProxy @ 14d9a0300

void __thiscall UAGVConditionProxy::~UAGVConditionProxy(UAGVConditionProxy *this)

{
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ContainsPosition @ 14d9a36f0

bool __thiscall
UAGVConditionProxy::ContainsPosition(UAGVConditionProxy *this,TVector<double> *param_1)

{
  UObject *pUVar1;
  UClass *this_00;
  bool bVar2;
  UClass *pUVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"UAGVConditionProxy_ContainsPosition");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId232,"UAGVConditionProxy_ContainsPosition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
               ,0xe8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId232);
  }
  pUVar1 = (this->ObjectPtr).field0_0x0.DebugPtr;
  if ((pUVar1 != (UObject *)0x0) &&
     (this_00 = *(UClass **)&pUVar1->field_0x10, this_00 != (UClass *)0x0)) {
    pUVar3 = Z_Construct_UClass_UAudioGameplayCondition_NoRegister();
    bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
    if ((bVar2) &&
       ((bVar2 = IAudioGameplayCondition::Execute_ConditionMet
                           ((this->ObjectPtr).field0_0x0.DebugPtr), bVar2 ||
        (bVar2 = IAudioGameplayCondition::Execute_ConditionMet_Position
                           ((this->ObjectPtr).field0_0x0.DebugPtr,param_1), bVar2)))) {
      bVar2 = true;
      goto LAB_14d9a37ae;
    }
  }
  bVar2 = false;
LAB_14d9a37ae:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar2;
}

// GetPrivateStaticClass @ 14d9a6450

UClass * __cdecl UAGVConditionProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AGVConditionProxy",
               &Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton,
               StaticRegisterNativesUAGVConditionProxy,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAGVConditionProxy>,
               InternalVTableHelperCtorCaller<UAGVConditionProxy>,local_res8,
               UAudioGameplayVolumeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAGVConditionProxy.InnerSingleton;
}

// InitFromComponent @ 14d9a6e60

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
UAGVConditionProxy::InitFromComponent
          (UAGVConditionProxy *this,UAudioGameplayVolumeComponent *param_1)

{
  TObjectPtr<UObject_const_>_u_0 *pTVar1;
  int iVar2;
  AActor *this_00;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TObjectPtr<UObject_const_>_u_0 *pTVar8;
  UClass *pUVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  UClass *local_110;
  TObjectPtr<UObject_const_>_u_0 local_108 [24];
  TObjectPtr<UObject_const_>_u_0 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  UAudioGameplayVolumeProxy::InitFromComponent((UAudioGameplayVolumeProxy *)this,param_1);
  if (param_1 == (UAudioGameplayVolumeComponent *)0x0) {
    return;
  }
  this_00 = (AActor *)param_1->_padding_;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  pUVar9 = (UClass *)this_00->_padding_;
  if (pUVar9 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UAudioGameplayCondition_NoRegister();
    bVar4 = UClass::ImplementsInterface(pUVar9,pUVar5);
    if (bVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->ObjectPtr).field0_0x0.DebugPtr = (UObject *)this_00;
      return;
    }
  }
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_48 = (TObjectPtr<UObject_const_>_u_0 *)0x0;
  local_40 = 0;
  local_3c = 0x18;
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_14d9a6f6a;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 == (UClass *)0x0) goto LAB_14d9a6f6a;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar9 = pUVar5;
    }
  }
LAB_14d9a6f6a:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_110 = pUVar5;
  if (pUVar9 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_110,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_108);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_110,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_108);
  }
  iVar2 = local_40;
  pTVar8 = local_108;
  if (local_48 != (TObjectPtr<UObject_const_>_u_0 *)0x0) {
    pTVar8 = local_48;
  }
  pTVar1 = pTVar8 + local_40;
  do {
    if (local_40 != iVar2) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_118);
    }
    if (pTVar8 == pTVar1) goto LAB_14d9a704c;
    pUVar3 = pTVar8->DebugPtr;
    if ((pUVar3 != (UObject *)0x0) &&
       (pUVar9 = *(UClass **)&pUVar3->field_0x10, pUVar9 != (UClass *)0x0)) {
      pUVar5 = Z_Construct_UClass_UAudioGameplayCondition_NoRegister();
      bVar4 = UClass::ImplementsInterface(pUVar9,pUVar5);
      if (bVar4) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        (this->ObjectPtr).field0_0x0.DebugPtr = pUVar3;
LAB_14d9a704c:
        if (local_48 != (TObjectPtr<UObject_const_>_u_0 *)0x0) {
          FMemory::Free(local_48);
        }
        return;
      }
    }
    pTVar8 = pTVar8 + 1;
  } while( true );
}

// StaticRegisterNativesUAGVConditionProxy @ 14d9a9a80

void __cdecl UAGVConditionProxy::StaticRegisterNativesUAGVConditionProxy(void)

{
  return;
}

