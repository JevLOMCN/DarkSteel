// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 16

// StaticClass @ 145f674b0

UClass * __cdecl ULandscapeNaniteComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeNaniteComponent",
               &Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton,
               StaticRegisterNativesULandscapeNaniteComponent,0x680,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeNaniteComponent>,
               InternalVTableHelperCtorCaller<ULandscapeNaniteComponent>,local_res8,
               UStaticMeshComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton;
}

// ULandscapeNaniteComponent @ 145f7bcb0

ULandscapeNaniteComponent * __thiscall
ULandscapeNaniteComponent::ULandscapeNaniteComponent
          (ULandscapeNaniteComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->ProxyContentId).A = 0;
  (this->ProxyContentId).B = 0;
  (this->ProxyContentId).C = 0;
  (this->ProxyContentId).D = 0;
  (this->SourceLandscapeComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceLandscapeComponents).ArrayNum = 0;
  (this->SourceLandscapeComponents).ArrayMax = 0;
  return this;
}

// ULandscapeNaniteComponent @ 145f7bd40

ULandscapeNaniteComponent * __thiscall
ULandscapeNaniteComponent::ULandscapeNaniteComponent
          (ULandscapeNaniteComponent *this,FObjectInitializer *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  this->field_0x27c = this->field_0x27c & 0xf7;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  this->field_0x5ac = this->field_0x5ac & 0xf7;
  (this->ProxyContentId).A = 0;
  (this->ProxyContentId).B = 0;
  (this->ProxyContentId).C = 0;
  (this->ProxyContentId).D = 0;
  (this->SourceLandscapeComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceLandscapeComponents).ArrayNum = 0;
  (this->SourceLandscapeComponents).ArrayMax = 0;
  this->bEnabled = true;
  return this;
}

// ~ULandscapeNaniteComponent @ 145f7e3d0

void __thiscall
ULandscapeNaniteComponent::~ULandscapeNaniteComponent(ULandscapeNaniteComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->SourceLandscapeComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// CollectPSOPrecacheData @ 145f85a80

void __thiscall
ULandscapeNaniteComponent::CollectPSOPrecacheData
          (ULandscapeNaniteComponent *this,FPSOPrecacheParams *param_1,
          TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMaterialInterfacePSOPrecacheParams> FVar3;
  undefined1 local_res18 [8];
  
  UStaticMeshComponent::CollectPSOPrecacheData((UStaticMeshComponent *)this,param_1,param_2);
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  piVar1 = &param_2->ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FMaterialInterfacePSOPrecacheParams>)0x0) {
    param_2 = (TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar3;
  }
  FVar3 = (ForElementType<FMaterialInterfacePSOPrecacheParams>)
          ((longlong)param_2 + (longlong)iVar2 * 0x48);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FMaterialInterfacePSOPrecacheParams,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if ((ForElementType<FMaterialInterfacePSOPrecacheParams>)param_2 == FVar3) break;
    *(undefined1 *)param_2 = 1;
    param_2 = (TArray<FMaterialInterfacePSOPrecacheParams,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)param_2 + 0x48);
  }
  return;
}

// CreateSceneProxy @ 145f88ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
ULandscapeNaniteComponent::CreateSceneProxy(ULandscapeNaniteComponent *this)

{
  bool bVar1;
  FLandscapeNaniteSceneProxy *this_00;
  FLandscapeNaniteSceneProxy *pFVar2;
  undefined1 auStack_138 [32];
  FMaterialAudit local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar2 = (FLandscapeNaniteSceneProxy *)0x0;
  local_118.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AssetName.Data.ArrayNum = 0;
  local_118.AssetName.Data.ArrayMax = 0;
  local_118.bCompatibleWithLumenCardSharing = '\0';
  local_118.bHasSky = '\0';
  local_118.bHasMasked = '\0';
  local_118.bHasAnyError = '\0';
  local_118.Entries.AllocatorInstance.SecondaryData =
       (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
  local_118.Entries.ArrayNum = 0;
  local_118.Entries.ArrayMax = 4;
  local_118.FallbackMaterial = (UMaterialInterface *)0x0;
  if (((this->bEnabled != false) &&
      (bVar1 = UStaticMeshComponent::ShouldCreateNaniteProxy
                         ((UStaticMeshComponent *)this,&local_118), bVar1)) &&
     (this_00 = ::operator_new(0xc40), this_00 != (FLandscapeNaniteSceneProxy *)0x0)) {
    pFVar2 = FLandscapeNaniteSceneProxy::FLandscapeNaniteSceneProxy(this_00,&local_118,this);
  }
  if (local_118.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    FMemory::Free((void *)local_118.Entries.AllocatorInstance.SecondaryData);
  }
  if (local_118.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AssetName.Data.AllocatorInstance.Data);
  }
  return (FPrimitiveSceneProxy *)pFVar2;
}

// GetLandscapeActor @ 145f926a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscape * __thiscall
ULandscapeNaniteComponent::GetLandscapeActor(ULandscapeNaniteComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ALandscapeProxy *pAVar1;
  ALandscape *pAVar2;
  
  pAVar1 = GetLandscapeProxy(this);
  if (pAVar1 != (ALandscapeProxy *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x778);
                    /* WARNING: Could not recover jumptable at 0x000145f926bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pAVar2 = (ALandscape *)(*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
    return pAVar2;
  }
  return (ALandscape *)0x0;
}

// GetLandscapeProxy @ 145f92730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeProxy * __thiscall
ULandscapeNaniteComponent::GetLandscapeProxy(ULandscapeNaniteComponent *this)

{
  int iVar1;
  ALandscapeProxy *pAVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pAVar2 = *(ALandscapeProxy **)&this->field_0x20;
  if (pAVar2 == (ALandscapeProxy *)0x0) {
    pFVar4 = GetTypeName<ALandscapeProxy>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = ALandscapeProxy::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pAVar2;
  }
  pFVar4 = GetTypeName<ALandscapeProxy>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pAVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPrivateStaticClass @ 145f93af0

UClass * __cdecl ULandscapeNaniteComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeNaniteComponent",
               &Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton,
               StaticRegisterNativesULandscapeNaniteComponent,0x680,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeNaniteComponent>,
               InternalVTableHelperCtorCaller<ULandscapeNaniteComponent>,local_res8,
               UStaticMeshComponent::StaticClass,ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeNaniteComponent.InnerSingleton;
}

// IsHLODRelevant @ 145f97f50

bool __thiscall ULandscapeNaniteComponent::IsHLODRelevant(ULandscapeNaniteComponent *this)

{
  return false;
}

// NeedsLoadForServer @ 145f99ce0

bool __thiscall ULandscapeNaniteComponent::NeedsLoadForServer(ULandscapeNaniteComponent *this)

{
  return false;
}

// NeedsLoadForTargetPlatform @ 145f99cf0

bool __thiscall
ULandscapeNaniteComponent::NeedsLoadForTargetPlatform
          (ULandscapeNaniteComponent *this,ITargetPlatform *param_1)

{
  bool bVar1;
  
  bVar1 = DoesTargetPlatformSupportNanite(param_1);
  return bVar1;
}

// PostLoad @ 145f9bec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULandscapeNaniteComponent::PostLoad(ULandscapeNaniteComponent *this)

{
  code *pcVar1;
  bool bVar2;
  ALandscapeProxy *pAVar3;
  byte bVar4;
  byte bVar5;
  
  UStaticMeshComponent::PostLoad((UStaticMeshComponent *)this);
  pAVar3 = GetLandscapeProxy(this);
  if (pAVar3 == (ALandscapeProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5475356168731754635>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeNaniteComponent.cpp"
                       ,0x8b,"LandscapeProxy");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pAVar3 = GetLandscapeProxy(this);
    bVar5 = (this->field_0x27e ^ pAVar3->CastShadow) & 1 ^ this->field_0x27e;
    this->field_0x27e = bVar5;
    bVar5 = (pAVar3->field_0x574 << 4 ^ bVar5) & 0x20 ^ bVar5;
    this->field_0x27e = bVar5;
    bVar5 = (pAVar3->field_0x574 << 4 ^ bVar5) & 0x40 ^ bVar5;
    this->field_0x27e = bVar5;
    bVar4 = (this->field_0x27f ^ pAVar3->bCastContactShadow) & 1 ^ this->field_0x27f;
    this->field_0x27f = bVar4;
    bVar4 = (pAVar3->field_0x578 << 2 ^ bVar4) & 4 ^ bVar4;
    this->field_0x27f = bVar4;
    bVar4 = (pAVar3->field_0x57c << 5 ^ bVar4) & 0x20 ^ bVar4;
    this->field_0x27f = bVar4;
    this->field_0x27f = (pAVar3->field_0x580 << 6 ^ bVar4) & 0x40 ^ bVar4;
    bVar5 = (pAVar3->field_0x584 << 4 ^ bVar5) & 0x10 ^ bVar5;
    this->field_0x27e = bVar5;
    bVar5 = (pAVar3->field_0x584 * '\x02' ^ bVar5) & 4 ^ bVar5;
    this->field_0x27e = bVar5;
    this->field_0x27e = (pAVar3->field_0x584 * '\x02' ^ bVar5) & 8 ^ bVar5;
    this->field_0x281 = (pAVar3->field_0x59c << 6 ^ this->field_0x281) & 0x40 ^ this->field_0x281;
    this->field_0x2aa = pAVar3->CustomDepthStencilWriteMask;
    *(int *)&this->field_0x2b4 = pAVar3->CustomDepthStencilValue;
    UPrimitiveComponent::SetCullDistance((UPrimitiveComponent *)this,pAVar3->LDMaxDrawDistance);
    this->field_0x288 = pAVar3->LightingChannels;
    this->field_0x27c = pAVar3->field_0x598 << 7 | this->field_0x27c & 0x7f;
    this->field_0x279 = pAVar3->ShadowCacheInvalidationBehavior;
  }
  this->field_0x27c = this->field_0x27c & 0xf7;
  this->field_0x5ac = this->field_0x5ac & 0xf7;
  return;
}

// SetEnabled @ 145fa1d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeNaniteComponent::SetEnabled(ULandscapeNaniteComponent *this,bool param_1)

{
  if (param_1 != this->bEnabled) {
    this->bEnabled = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// StaticRegisterNativesULandscapeNaniteComponent @ 145fa47d0

void __cdecl ULandscapeNaniteComponent::StaticRegisterNativesULandscapeNaniteComponent(void)

{
  return;
}

// UpdatedSharedPropertiesFromActor @ 145fa8ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULandscapeNaniteComponent::UpdatedSharedPropertiesFromActor(ULandscapeNaniteComponent *this)

{
  ALandscapeProxy *pAVar1;
  byte bVar2;
  byte bVar3;
  
  pAVar1 = GetLandscapeProxy(this);
  bVar3 = (this->field_0x27e ^ pAVar1->CastShadow) & 1 ^ this->field_0x27e;
  this->field_0x27e = bVar3;
  bVar3 = (pAVar1->field_0x574 << 4 ^ bVar3) & 0x20 ^ bVar3;
  this->field_0x27e = bVar3;
  bVar3 = (pAVar1->field_0x574 << 4 ^ bVar3) & 0x40 ^ bVar3;
  this->field_0x27e = bVar3;
  bVar2 = (this->field_0x27f ^ pAVar1->bCastContactShadow) & 1 ^ this->field_0x27f;
  this->field_0x27f = bVar2;
  bVar2 = (pAVar1->field_0x578 << 2 ^ bVar2) & 4 ^ bVar2;
  this->field_0x27f = bVar2;
  bVar2 = (pAVar1->field_0x57c << 5 ^ bVar2) & 0x20 ^ bVar2;
  this->field_0x27f = bVar2;
  this->field_0x27f = (pAVar1->field_0x580 << 6 ^ bVar2) & 0x40 ^ bVar2;
  bVar3 = (pAVar1->field_0x584 << 4 ^ bVar3) & 0x10 ^ bVar3;
  this->field_0x27e = bVar3;
  bVar3 = (pAVar1->field_0x584 * '\x02' ^ bVar3) & 4 ^ bVar3;
  this->field_0x27e = bVar3;
  this->field_0x27e = (pAVar1->field_0x584 * '\x02' ^ bVar3) & 8 ^ bVar3;
  this->field_0x281 = (pAVar1->field_0x59c << 6 ^ this->field_0x281) & 0x40 ^ this->field_0x281;
  this->field_0x2aa = pAVar1->CustomDepthStencilWriteMask;
  *(int *)&this->field_0x2b4 = pAVar1->CustomDepthStencilValue;
  UPrimitiveComponent::SetCullDistance((UPrimitiveComponent *)this,pAVar1->LDMaxDrawDistance);
  this->field_0x288 = pAVar1->LightingChannels;
  this->field_0x27c = pAVar1->field_0x598 << 7 | this->field_0x27c & 0x7f;
  this->field_0x279 = pAVar1->ShadowCacheInvalidationBehavior;
  return;
}

