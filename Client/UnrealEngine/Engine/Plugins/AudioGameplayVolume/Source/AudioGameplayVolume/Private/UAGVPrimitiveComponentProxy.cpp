// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 8

// StaticClass @ 14d998df0

UClass * __cdecl UAGVPrimitiveComponentProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AGVPrimitiveComponentProxy",
               &Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton,
               StaticRegisterNativesUAGVPrimitiveComponentProxy,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAGVPrimitiveComponentProxy>,
               InternalVTableHelperCtorCaller<UAGVPrimitiveComponentProxy>,local_res8,
               UAudioGameplayVolumeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton;
}

// UAGVPrimitiveComponentProxy @ 14d99f390

UAGVPrimitiveComponentProxy * __thiscall
UAGVPrimitiveComponentProxy::UAGVPrimitiveComponentProxy
          (UAGVPrimitiveComponentProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAGVPrimitiveComponentProxy__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->Primitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Primitives).ArrayNum = 0;
  (this->Primitives).ArrayMax = 0;
  return this;
}

// UAGVPrimitiveComponentProxy @ 14d99f3e0

UAGVPrimitiveComponentProxy * __thiscall
UAGVPrimitiveComponentProxy::UAGVPrimitiveComponentProxy
          (UAGVPrimitiveComponentProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAGVPrimitiveComponentProxy__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->Primitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Primitives).ArrayNum = 0;
  (this->Primitives).ArrayMax = 0;
  return this;
}

// ~UAGVPrimitiveComponentProxy @ 14d9a0340

void __thiscall
UAGVPrimitiveComponentProxy::~UAGVPrimitiveComponentProxy(UAGVPrimitiveComponentProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Primitives).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ContainsPosition @ 14d9a37e0

bool __thiscall
UAGVPrimitiveComponentProxy::ContainsPosition
          (UAGVPrimitiveComponentProxy *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  FBodyInstance *this_00;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  undefined1 local_res8 [8];
  float local_res18 [2];
  undefined8 local_res20;
  TVector<double>_u_0 local_78 [2];
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"UAGVPrimitiveComponentProxy_ContainsPosition");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId166,"UAGVPrimitiveComponentProxy_ContainsPosition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
               ,0xa6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId166);
  }
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  pFVar11 = (this->Primitives).AllocatorInstance.Data;
  iVar2 = (this->Primitives).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Primitives).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    plVar3 = *(longlong **)pFVar11;
    if (plVar3 != (longlong *)0x0) {
      local_res20 = 0;
      this_00 = (FBodyInstance *)(**(code **)(*plVar3 + 0x818))(plVar3,0,1,0xffffffff);
      if (this_00 != (FBodyInstance *)0x0) {
        plVar3 = *(longlong **)pFVar11;
        if ((plVar3 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrimitiveComponent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
                               ,0x27,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if ((((*(byte *)(plVar3 + 0x13) & 8) != 0) &&
            (cVar10 = (**(code **)(*plVar3 + 0x3c8))(plVar3), cVar10 != '\0')) &&
           ((AudioGameplayVolumeConsoleVariables::bProxyDistanceCulling == 0 ||
            (dVar14 = (param_1->field0_0x0)._s_0.X - (double)plVar3[0x22],
            dVar5 = (param_1->field0_0x0)._s_0.Y - (double)plVar3[0x23],
            dVar13 = (param_1->field0_0x0)._s_0.Z - (double)plVar3[0x24],
            (float)(dVar14 * dVar14 + dVar5 * dVar5 + dVar13 * dVar13) <=
            (float)((double)plVar3[0x28] * (double)plVar3[0x28]))))) {
          local_res18[0] = 0.0;
          local_78[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_78[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_78[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          bVar8 = FBodyInstance::GetSquaredDistanceToBody
                            (this_00,param_1,local_res18,(TVector<double> *)&local_78[0]._s_0);
          if ((bVar8) && ((float)((uint)local_res18[0] & uVar7) <= fVar6)) {
            bVar8 = true;
LAB_14d9a3a03:
            if (bVar12) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            FGenericPlatformMisc::EndNamedEvent();
            return bVar8;
          }
        }
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  bVar8 = false;
  goto LAB_14d9a3a03;
}

// GetPrivateStaticClass @ 14d9a6510

UClass * __cdecl UAGVPrimitiveComponentProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AGVPrimitiveComponentProxy",
               &Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton,
               StaticRegisterNativesUAGVPrimitiveComponentProxy,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAGVPrimitiveComponentProxy>,
               InternalVTableHelperCtorCaller<UAGVPrimitiveComponentProxy>,local_res8,
               UAudioGameplayVolumeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAGVPrimitiveComponentProxy.InnerSingleton;
}

// InitFromComponent @ 14d9a70a0

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
UAGVPrimitiveComponentProxy::InitFromComponent
          (UAGVPrimitiveComponentProxy *this,UAudioGameplayVolumeComponent *param_1)

{
  int *piVar1;
  AActor *this_00;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar10;
  UClass *pUVar11;
  undefined1 auStackY_138 [32];
  UClass *local_108;
  UClass *local_100;
  undefined1 local_f8 [192];
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UAudioGameplayVolumeProxy::InitFromComponent((UAudioGameplayVolumeProxy *)this,param_1);
  pTVar10 = &this->Primitives;
  pUVar8 = (UClass *)0x0;
  pUVar11 = (UClass *)0x0;
  piVar1 = &(this->Primitives).ArrayMax;
  (this->Primitives).ArrayNum = 0;
  if ((this->Primitives).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar10->AllocatorInstance,0,piVar1);
  }
  if (param_1 == (UAudioGameplayVolumeComponent *)0x0) {
    return;
  }
  this_00 = (AActor *)param_1->_padding_;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  local_2c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d9a71f7;
  pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_14d9a7159;
  }
  else {
    pUVar11 = pUVar8;
    if (pUVar6 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14d9a7159:
      pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar11 = pUVar8;
      if (pUVar7 != (UClass *)0x0) {
        iVar5 = (int)pUVar7->_padding_;
        if (((int)pUVar6->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar11 = pUVar6;
        }
      }
    }
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == pUVar8) {
    local_108 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_108,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    local_100 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
LAB_14d9a71f7:
  if (0 < local_30) {
    if (AudioGameplayVolumeConsoleVariables::bAllowMultiplePrimitives == 0) {
      iVar5 = (this->Primitives).ArrayNum;
      puVar9 = (undefined8 *)local_f8;
      if (local_38 != (undefined8 *)0x0) {
        puVar9 = local_38;
      }
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar10->AllocatorInstance,piVar1);
      }
      pFVar2 = (pTVar10->AllocatorInstance).Data;
      (this->Primitives).ArrayNum = iVar5 + 1;
      pUVar3 = (UObject *)*puVar9;
      *(UObject **)(pFVar2 + (longlong)iVar5 * 8) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
    }
    else {
      if (*piVar1 < local_30) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_30,&pTVar10->AllocatorInstance,(this->Primitives).ArrayNum,piVar1);
      }
      Algo::
      Copy<TInlineComponentArray<UPrimitiveComponent_*,24>,TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>_>
                ((TInlineComponentArray<UPrimitiveComponent_*,24> *)local_f8,pTVar10);
    }
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// StaticRegisterNativesUAGVPrimitiveComponentProxy @ 14d9a9a90

void __cdecl UAGVPrimitiveComponentProxy::StaticRegisterNativesUAGVPrimitiveComponentProxy(void)

{
  return;
}

