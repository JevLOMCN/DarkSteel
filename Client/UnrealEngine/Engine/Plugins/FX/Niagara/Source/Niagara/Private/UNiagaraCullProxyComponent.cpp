// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 14907edf0

UClass * __cdecl UNiagaraCullProxyComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraCullProxyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraCullProxyComponent",
               &Z_Registration_Info_UClass_UNiagaraCullProxyComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraCullProxyComponent,0x820,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraCullProxyComponent>,
               InternalVTableHelperCtorCaller<UNiagaraCullProxyComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraCullProxyComponent.InnerSingleton;
}

// UNiagaraCullProxyComponent @ 1490b22d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraCullProxyComponent * __thiscall
UNiagaraCullProxyComponent::UNiagaraCullProxyComponent
          (UNiagaraCullProxyComponent *this,FVTableHelper *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Instances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instances).ArrayNum = 0;
  (this->Instances).ArrayMax = 0;
  (this->CSVStat_NumCullProxies).ComparisonIndex = 0;
  (this->CSVStat_NumCullProxies).Number = 0;
  return this;
}

// UNiagaraCullProxyComponent @ 1490b2350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraCullProxyComponent * __thiscall
UNiagaraCullProxyComponent::UNiagaraCullProxyComponent
          (UNiagaraCullProxyComponent *this,FObjectInitializer *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->Instances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instances).ArrayNum = 0;
  (this->Instances).ArrayMax = 0;
  (this->CSVStat_NumCullProxies).ComparisonIndex = 0;
  (this->CSVStat_NumCullProxies).Number = 0;
  UNiagaraComponent::SetAllowScalability((UNiagaraComponent *)this,false);
  return this;
}

// ~UNiagaraCullProxyComponent @ 1490b8490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraCullProxyComponent::~UNiagaraCullProxyComponent(UNiagaraCullProxyComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->Instances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraComponent::~UNiagaraComponent((UNiagaraComponent *)this);
  return;
}

// CalcBounds @ 1490d1160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UNiagaraCullProxyComponent::CalcBounds
          (UNiagaraCullProxyComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  UNiagaraComponent::CalcBounds((UNiagaraComponent *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 1490e8180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UNiagaraCullProxyComponent::CreateSceneProxy(UNiagaraCullProxyComponent *this)

{
  return (FPrimitiveSceneProxy *)0x0;
}

// GetPrivateStaticClass @ 149107f70

UClass * __cdecl UNiagaraCullProxyComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraCullProxyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraCullProxyComponent",
               &Z_Registration_Info_UClass_UNiagaraCullProxyComponent.InnerSingleton,
               StaticRegisterNativesUNiagaraCullProxyComponent,0x820,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraCullProxyComponent>,
               InternalVTableHelperCtorCaller<UNiagaraCullProxyComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraCullProxyComponent.InnerSingleton;
}

// RegisterCulledComponent @ 1491268c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraCullProxyComponent::RegisterCulledComponent
          (UNiagaraCullProxyComponent *this,UNiagaraComponent *param_1,bool param_2)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FName local_res10;
  UNiagaraComponent *local_res20;
  FString local_38;
  FString local_28;
  
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCullProxyComponent.cpp"
                         ,0x3e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((param_1->Asset).field0_0x0.DebugPtr != *(UNiagaraSystem **)&this->field_0x550) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component->GetAsset() == GetAsset()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCullProxyComponent.cpp"
                         ,0x3f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (this->CSVStat_NumCullProxies == (FName)0x0) {
    local_res8 = (FName)((param_1->Asset).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    ::FString::PrintfImpl(&local_38,L"NumCullProxies/%s");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar6.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res10,(wchar_t *)FVar6.Data);
    this->CSVStat_NumCullProxies = local_res10;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!param_2) &&
     (*(int *)(*(longlong *)(*(longlong *)&this->field_0x550 + 0x5b8) + 0x4c) <=
      (this->Instances).ArrayNum)) {
    return false;
  }
  iVar5 = (this->Instances).ArrayNum;
  piVar1 = &(this->Instances).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->Instances).AllocatorInstance,piVar1);
  }
  (this->Instances).ArrayNum = iVar5 + 1;
  this_00 = (FWeakObjectPtr *)((this->Instances).AllocatorInstance.Data + (longlong)iVar5 * 8);
  DefaultConstructItems<FNiagaraCulledComponentInfo,int>(this_00,1);
  local_res20 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res20);
  UNiagaraComponent::SetPaused((UNiagaraComponent *)this,false);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return true;
}

// StaticRegisterNativesUNiagaraCullProxyComponent @ 149139c70

void __cdecl UNiagaraCullProxyComponent::StaticRegisterNativesUNiagaraCullProxyComponent(void)

{
  return;
}

// TickCullProxy @ 14913b6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNiagaraCullProxyComponent::TickCullProxy(UNiagaraCullProxyComponent *this)

{
  int *piVar1;
  TArray<FNiagaraCulledComponentInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UActorComponent *this_00;
  FCsvProfiler *pFVar6;
  int iVar7;
  uint uVar8;
  
  pTVar2 = &this->Instances;
  uVar8 = 0;
  while ((-1 < (int)uVar8 && ((int)uVar8 < (this->Instances).ArrayNum))) {
    if ((int)uVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = (UActorComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8));
    if (this_00 == (UActorComponent *)0x0) {
      uVar5 = 0;
      if ((int)uVar8 < (this->Instances).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
      iVar7 = (this->Instances).ArrayNum + ~uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
      }
      piVar1 = &(this->Instances).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar2->AllocatorInstance,(this->Instances).ArrayNum,
                 &(this->Instances).ArrayMax);
    }
    else {
      UActorComponent::MarkRenderDynamicDataDirty(this_00);
      uVar8 = uVar8 + 1;
    }
  }
  pFVar6 = FCsvProfiler::Get();
  if ((pFVar6 != (FCsvProfiler *)0x0) &&
     (((this->Instances).ArrayNum != 0 &&
      (FParticlePerfStats::bCSVStatsEnabled != (TAtomic<bool>)0x0)))) {
    if (this->CSVStat_NumCullProxies == (FName)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CSVStat_NumCullProxies != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCullProxyComponent.cpp"
                         ,0x34,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FCsvProfiler::RecordCustomStat
              (&TotalCullProxiesName,_GCsvCategory_Particles.Index,(this->Instances).ArrayNum,
               Accumulate);
    FCsvProfiler::RecordCustomStat
              (&this->CSVStat_NumCullProxies,_GCsvCategory_Particles.Index,
               (this->Instances).ArrayNum,Accumulate);
    return;
  }
  return;
}

// UnregisterCulledComponent @ 14913e980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraCullProxyComponent::UnregisterCulledComponent
          (UNiagaraCullProxyComponent *this,UNiagaraComponent *param_1)

{
  int *piVar1;
  TArray<FNiagaraCulledComponentInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FWeakObjectPtr *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UNiagaraComponent *pUVar10;
  uint uVar11;
  FWeakObjectPtr *this_00;
  
  pTVar2 = &this->Instances;
  pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  iVar9 = (this->Instances).ArrayNum;
  this_00 = pFVar4;
  do {
    if (this_00 == pFVar4 + iVar9) {
LAB_14913ea8b:
      if ((this->Instances).ArrayNum == 0) {
        UNiagaraComponent::SetPaused((UNiagaraComponent *)this,true);
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
      return;
    }
    pUVar10 = (UNiagaraComponent *)FWeakObjectPtr::GetEvenIfUnreachable(this_00);
    if (param_1 == pUVar10) {
      uVar11 = (uint)((longlong)this_00 - (longlong)pFVar4 >> 3);
      if (uVar11 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar11 < (this->Instances).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->Instances).ArrayNum;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        iVar9 = iVar3 + ~uVar11;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar5 + (longlong)(int)uVar11 * 8,pFVar5 + (longlong)(iVar3 - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        piVar1 = &(this->Instances).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,(this->Instances).ArrayNum,
                   &(this->Instances).ArrayMax);
      }
      goto LAB_14913ea8b;
    }
    this_00 = this_00 + 1;
  } while( true );
}

