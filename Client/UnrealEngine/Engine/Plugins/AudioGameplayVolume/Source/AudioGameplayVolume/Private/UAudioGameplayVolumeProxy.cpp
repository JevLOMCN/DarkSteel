// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 15

// StaticClass @ 14d998b80

UClass * __cdecl UAudioGameplayVolumeProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeProxy",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeProxy,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGameplayVolumeProxy>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton;
}

// UAudioGameplayVolumeProxy @ 14d99f760

UAudioGameplayVolumeProxy * __thiscall
UAudioGameplayVolumeProxy::UAudioGameplayVolumeProxy
          (UAudioGameplayVolumeProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->VolumeID = 0xffffffff;
  this->WorldID = 0xffffffff;
  this->_padding_ = (longlong)&___7UAudioGameplayVolumeProxy__6B_;
  (this->ProxyVolumeMutators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyVolumeMutators).ArrayNum = 0;
  (this->ProxyVolumeMutators).ArrayMax = 0;
  this->PayloadType = AGCP_None;
  return this;
}

// UAudioGameplayVolumeProxy @ 14d99f7a0

UAudioGameplayVolumeProxy * __thiscall
UAudioGameplayVolumeProxy::UAudioGameplayVolumeProxy
          (UAudioGameplayVolumeProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->VolumeID = 0xffffffff;
  this->WorldID = 0xffffffff;
  this->_padding_ = (longlong)&___7UAudioGameplayVolumeProxy__6B_;
  (this->ProxyVolumeMutators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyVolumeMutators).ArrayNum = 0;
  (this->ProxyVolumeMutators).ArrayMax = 0;
  this->PayloadType = AGCP_None;
  return this;
}

// ~UAudioGameplayVolumeProxy @ 14d9a0430

void __thiscall
UAudioGameplayVolumeProxy::~UAudioGameplayVolumeProxy(UAudioGameplayVolumeProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
            ((TSharedPtr<FProxyVolumeMutator,1> *)(this->ProxyVolumeMutators).AllocatorInstance.Data
             ,(this->ProxyVolumeMutators).ArrayNum);
  pFVar1 = (this->ProxyVolumeMutators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddPayloadType @ 14d9a1d70

void __thiscall
UAudioGameplayVolumeProxy::AddPayloadType(UAudioGameplayVolumeProxy *this,EComponentPayload param_1)

{
  this->PayloadType = this->PayloadType | param_1;
  return;
}

// ContainsPosition @ 14d9a3a60

bool __thiscall
UAudioGameplayVolumeProxy::ContainsPosition
          (UAudioGameplayVolumeProxy *this,TVector<double> *param_1)

{
  return false;
}

// DrawVisualization @ 14d9a4ca0

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
UAudioGameplayVolumeProxy::DrawVisualization
          (UAudioGameplayVolumeProxy *this,UActorComponent *param_1,FSceneView *param_2,
          FPrimitiveDrawInterface *param_3)

{
  return;
}

// FindMutatorPriority @ 14d9a5c70

void __thiscall
UAudioGameplayVolumeProxy::FindMutatorPriority
          (UAudioGameplayVolumeProxy *this,FAudioProxyMutatorPriorities *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  bVar4 = IsInAudioThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
                       ,0x6d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->ProxyVolumeMutators).ArrayNum;
  pFVar5 = (this->ProxyVolumeMutators).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ProxyVolumeMutators).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FProxyVolumeMutator,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    plVar2 = *(longlong **)pFVar5;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// GatherMutators @ 14d9a6000

void __thiscall
UAudioGameplayVolumeProxy::GatherMutators
          (UAudioGameplayVolumeProxy *this,FAudioProxyMutatorPriorities *param_1,
          FAudioProxyMutatorSearchResult *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  bVar6 = IsInAudioThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeProxy.cpp"
                       ,0x7b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->ProxyVolumeMutators).ArrayNum;
  pFVar10 = (this->ProxyVolumeMutators).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->ProxyVolumeMutators).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FProxyVolumeMutator,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    plVar3 = *(longlong **)pFVar10;
    if (plVar3 != (longlong *)0x0) {
      cVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      if (cVar7 != '\0') {
        if (*(longlong *)pFVar10 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        (**(code **)(**(longlong **)pFVar10 + 0x28))
                  (*(longlong **)pFVar10,&param_2->InteriorSettings);
        pFVar9 = (param_2->MatchingMutators).AllocatorInstance.Data;
        if ((pFVar9 <= pFVar10) &&
           (pFVar10 < pFVar9 + (longlong)(param_2->MatchingMutators).ArrayMax * 0x10)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = (param_2->MatchingMutators).ArrayNum;
        piVar1 = &(param_2->MatchingMutators).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(param_2->MatchingMutators).AllocatorInstance,piVar1);
        }
        (param_2->MatchingMutators).ArrayNum = iVar8 + 1;
        pFVar9 = (param_2->MatchingMutators).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(longlong *)pFVar9 = *(longlong *)pFVar10;
        lVar4 = *(longlong *)(pFVar10 + 8);
        *(longlong *)(pFVar9 + 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
      }
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// GetPrivateStaticClass @ 14d9a68d0

UClass * __cdecl UAudioGameplayVolumeProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeProxy",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeProxy,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioGameplayVolumeProxy>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeProxy.InnerSingleton;
}

// GetVolumeID @ 14d9a6df0

uint __thiscall UAudioGameplayVolumeProxy::GetVolumeID(UAudioGameplayVolumeProxy *this)

{
  return this->VolumeID;
}

// GetWorldID @ 14d9a6e00

uint __thiscall UAudioGameplayVolumeProxy::GetWorldID(UAudioGameplayVolumeProxy *this)

{
  return this->WorldID;
}

// HasPayloadType @ 14d9a6e20

bool __thiscall
UAudioGameplayVolumeProxy::HasPayloadType(UAudioGameplayVolumeProxy *this,EComponentPayload param_1)

{
  return (this->PayloadType & param_1) != AGCP_None;
}

// InitFromComponent @ 14d9a72d0

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
UAudioGameplayVolumeProxy::InitFromComponent
          (UAudioGameplayVolumeProxy *this,UAudioGameplayVolumeComponent *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  TSharedPtr<FProxyVolumeMutator,1> *pTVar4;
  AActor *this_00;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  IAnalyticsProviderET *pIVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  longlong local_170;
  TReferenceControllerBase<1> *local_168;
  FAnalyticsEventAttribute *local_160;
  undefined8 local_158;
  UClass *local_150;
  UClass *local_148;
  longlong *local_140;
  FString local_138;
  FString local_128;
  longlong local_118 [24];
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1 == (UAudioGameplayVolumeComponent *)0x0) ||
     ((param_1->_padding_ == 0 &&
      (pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      pUVar10 == (UWorld *)0x0)))) {
    if ((byte)AudioGameplayVolumeLog._0_1_ < 6) {
      return;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayVolumeLog);
    return;
  }
  this->VolumeID = *(uint *)((longlong)&param_1->_padding_ + 4);
  pUVar10 = (UWorld *)param_1->_padding_;
  if (pUVar10 == (UWorld *)0x0) {
    pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  piVar1 = &(this->ProxyVolumeMutators).ArrayMax;
  this->WorldID = *(uint *)((longlong)&pUVar10->_padding_ + 4);
  this->PayloadType = AGCP_None;
  pTVar4 = (TSharedPtr<FProxyVolumeMutator,1> *)(this->ProxyVolumeMutators).AllocatorInstance.Data;
  iVar2 = (this->ProxyVolumeMutators).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>(pTVar4,iVar2);
    (this->ProxyVolumeMutators).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ProxyVolumeMutators).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>(pTVar4,iVar2);
    (this->ProxyVolumeMutators).ArrayNum = 0;
  }
  this_00 = (AActor *)param_1->_padding_;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_4c = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_14d9a74a1;
  pUVar11 = UAudioGameplayVolumeMutator::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_14d9a7405;
LAB_14d9a7436:
    pUVar12 = (UClass *)0x0;
  }
  else {
    if (pUVar11 == (UClass *)0x0) goto LAB_14d9a7436;
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14d9a7405:
    pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar12 == (UClass *)0x0) goto LAB_14d9a7436;
    iVar2 = (int)pUVar12->_padding_;
    if (((int)pUVar11->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pUVar12 = pUVar11;
    if (!bVar8) goto LAB_14d9a7436;
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == pUVar13) {
    local_150 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    AActor::
    ForEachComponent_Internal<UAudioGameplayVolumeMutator,1,0,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_150,
               (TArray<UAudioGameplayVolumeMutator_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_118);
  }
  else {
    local_148 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    AActor::
    ForEachComponent_Internal<UAudioGameplayVolumeMutator,0,0,_AActor::GetComponents<UAudioGameplayVolumeMutator,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_148,
               (TArray<UAudioGameplayVolumeMutator_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_118);
  }
LAB_14d9a74a1:
  iVar2 = local_50;
  plVar16 = local_118;
  if (local_58 != (longlong *)0x0) {
    plVar16 = local_58;
  }
  local_140 = plVar16 + local_50;
  do {
    plVar5 = local_140;
    if (local_50 != iVar2) {
      local_178[0] = 0;
      `TCheckedPointerIterator<UAudioGameplayVolumeMutator_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_178);
    }
    if (plVar16 == plVar5) {
      local_160 = (FAnalyticsEventAttribute *)0x0;
      local_158 = 0;
      ::FString::FString(&local_128,L"AudioGameplayVolume.InitializedFromComponent");
      if (FEngineAnalytics::Analytics.Object != (IAnalyticsProviderET *)0x0) {
        pIVar14 = FEngineAnalytics::GetProvider();
        pcVar6 = *(code **)(pIVar14->_padding_ + 0x100);
        ::FString::ConcatCF(&local_138,L"Audio.Usage.",&local_128);
        (*pcVar6)(pIVar14,&local_138,&local_160);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      DestructItems<FAnalyticsEventAttribute,int>(local_160,(int)local_158);
      if (local_160 != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_160);
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      return;
    }
    plVar5 = (longlong *)*plVar16;
    if ((plVar5 != (longlong *)0x0) && ((*(byte *)((longlong)plVar5 + 0x9a) & 0x10) != 0)) {
      (**(code **)(*plVar5 + 0x518))(plVar5,&local_170);
      if (local_170 != 0) {
        if ((local_170 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutator.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeMutator.cpp"
                               ,0xc6,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar7 = plVar5[0x18];
        if ((local_170 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(char *)(local_170 + 0x2c) = (char)lVar7;
        lVar7 = plVar5[0x19];
        if ((local_170 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)(local_170 + 0x18) = (int)lVar7;
        (**(code **)(*plVar5 + 0x520))(plVar5,&local_170);
      }
      if (local_170 != 0) {
        uVar3 = this->VolumeID;
        if ((local_170 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(uint *)(local_170 + 0x1c) = uVar3;
        uVar3 = this->WorldID;
        if ((local_170 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(uint *)(local_170 + 0x20) = uVar3;
        if ((local_170 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this->PayloadType = this->PayloadType | *(EComponentPayload *)(local_170 + 0x2c);
        iVar9 = (this->ProxyVolumeMutators).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->ProxyVolumeMutators).AllocatorInstance,piVar1);
        }
        (this->ProxyVolumeMutators).ArrayNum = iVar9 + 1;
        pFVar15 = (this->ProxyVolumeMutators).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        *(longlong *)pFVar15 = local_170;
        *(TReferenceControllerBase<1> **)(pFVar15 + 8) = local_168;
        if (local_168 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_168->SharedReferenceCount = (atomic<int>)((int)local_168->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168)
      ;
    }
    plVar16 = plVar16 + 1;
  } while( true );
}

// StaticRegisterNativesUAudioGameplayVolumeProxy @ 14d9a9b40

void __cdecl UAudioGameplayVolumeProxy::StaticRegisterNativesUAudioGameplayVolumeProxy(void)

{
  return;
}

