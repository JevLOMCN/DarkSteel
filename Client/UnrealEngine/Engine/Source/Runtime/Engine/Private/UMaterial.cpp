// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 147

// StaticClass @ 147eea300

UClass * __cdecl UMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Material",&Z_Registration_Info_UClass_UMaterial.InnerSingleton,
               StaticRegisterNativesUMaterial,0x288,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterial>,InternalVTableHelperCtorCaller<UMaterial>,local_res8,
               UMaterialInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterial.InnerSingleton;
}

// UMaterial @ 147ef0460

UMaterial * __thiscall UMaterial::UMaterial(UMaterial *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMaterialInterface::UMaterialInterface((UMaterialInterface *)this,param_1);
  this_00 = &(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
  this->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  (this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RenderTracePhysicalMaterialOutputs).ArrayNum = 0;
  (this->RenderTracePhysicalMaterialOutputs).ArrayMax = 0;
  (this->NaniteOverrideMaterial).bEnableOverride = true;
  (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DisplacementScaling).Magnitude = 4.0;
  (this->DisplacementScaling).Center = 0.5;
  (this->DisplacementFadeRange).StartSizePixels = 4.0;
  (this->DisplacementFadeRange).EndSizePixels = 1.0;
  (this->ShadingModels).ShadingModelField = 0;
  this->TranslucentLocalLightShadowQuality = 0.0;
  this->TranslucentDirectionalLightShadowQuality = 0.0;
  (this->UserSceneTexture).ComparisonIndex = 0;
  (this->UserSceneTexture).Number = 0;
  (this->UserTextureDivisor).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ResolutionRelativeToInput).ComparisonIndex = 0;
  (this->ResolutionRelativeToInput).Number = 0;
  this->StencilRefValue = '\0';
  this->NeuralProfileId = -1;
  this->UsageFlagCacheMiss = (atomic<unsigned_int>)0x0;
  (this->SubstrateCompilationConfig).bFullSimplify = false;
  (this->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
  (this->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  (this->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedMaterialResources).ArrayNum = 0;
  (this->LoadedMaterialResources).ArrayMax = 0;
  (this->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialResources).ArrayNum = 0;
  (this->MaterialResources).ArrayMax = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x1;
  this->bCachingUniformExpressions = false;
  SetInitialValues(this);
  return this;
}

// UMaterial @ 147ef05f0

UMaterial * __thiscall UMaterial::UMaterial(UMaterial *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UMaterialInterface::UMaterialInterface((UMaterialInterface *)this,param_1);
  this_00 = &(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
  this->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  (this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RenderTracePhysicalMaterialOutputs).ArrayNum = 0;
  (this->RenderTracePhysicalMaterialOutputs).ArrayMax = 0;
  (this->NaniteOverrideMaterial).bEnableOverride = true;
  (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DisplacementScaling).Magnitude = 4.0;
  (this->DisplacementScaling).Center = 0.5;
  (this->DisplacementFadeRange).StartSizePixels = 4.0;
  (this->DisplacementFadeRange).EndSizePixels = 1.0;
  (this->ShadingModels).ShadingModelField = 0;
  this->TranslucentLocalLightShadowQuality = 0.0;
  this->TranslucentDirectionalLightShadowQuality = 0.0;
  (this->UserSceneTexture).ComparisonIndex = 0;
  (this->UserSceneTexture).Number = 0;
  (this->UserTextureDivisor).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ResolutionRelativeToInput).ComparisonIndex = 0;
  (this->ResolutionRelativeToInput).Number = 0;
  this->StencilRefValue = '\0';
  this->NeuralProfileId = -1;
  this->UsageFlagCacheMiss = (atomic<unsigned_int>)0x0;
  (this->SubstrateCompilationConfig).bFullSimplify = false;
  (this->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
  (this->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  (this->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedMaterialResources).ArrayNum = 0;
  (this->LoadedMaterialResources).ArrayMax = 0;
  (this->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialResources).ArrayNum = 0;
  (this->MaterialResources).ArrayMax = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x1;
  this->bCachingUniformExpressions = false;
  SetInitialValues(this);
  return this;
}

// UMaterial @ 147ef0780

UMaterial * __thiscall UMaterial::UMaterial(UMaterial *this)

{
  undefined1 *this_00;
  
  UMaterialInterface::UMaterialInterface((UMaterialInterface *)this);
  this_00 = &(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
  this->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  this->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  this->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
  (this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RenderTracePhysicalMaterialOutputs).ArrayNum = 0;
  (this->RenderTracePhysicalMaterialOutputs).ArrayMax = 0;
  (this->NaniteOverrideMaterial).bEnableOverride = true;
  (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DisplacementScaling).Magnitude = 4.0;
  (this->DisplacementScaling).Center = 0.5;
  (this->DisplacementFadeRange).StartSizePixels = 4.0;
  (this->DisplacementFadeRange).EndSizePixels = 1.0;
  (this->ShadingModels).ShadingModelField = 0;
  this->TranslucentLocalLightShadowQuality = 0.0;
  this->TranslucentDirectionalLightShadowQuality = 0.0;
  (this->UserSceneTexture).ComparisonIndex = 0;
  (this->UserSceneTexture).Number = 0;
  (this->UserTextureDivisor).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ResolutionRelativeToInput).ComparisonIndex = 0;
  (this->ResolutionRelativeToInput).Number = 0;
  this->StencilRefValue = '\0';
  this->NeuralProfileId = -1;
  this->UsageFlagCacheMiss = (atomic<unsigned_int>)0x0;
  (this->SubstrateCompilationConfig).bFullSimplify = false;
  (this->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
  (this->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
  (this->StateId).A = 0;
  (this->StateId).B = 0;
  (this->StateId).C = 0;
  (this->StateId).D = 0;
  (this->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedMaterialResources).ArrayNum = 0;
  (this->LoadedMaterialResources).ArrayMax = 0;
  (this->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialResources).ArrayNum = 0;
  (this->MaterialResources).ArrayMax = 0;
  this->ReleasedByRT = (FThreadSafeBool)0x1;
  this->bCachingUniformExpressions = false;
  SetInitialValues(this);
  return this;
}

// ~UMaterial @ 147ef26f0

void __thiscall UMaterial::~UMaterial(UMaterial *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->MaterialResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMaterialResource,int>
            ((FMaterialResource *)(this->LoadedMaterialResources).AllocatorInstance.Data,
             (this->LoadedMaterialResources).ArrayNum);
  pFVar1 = (this->LoadedMaterialResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialInterface::~UMaterialInterface((UMaterialInterface *)this);
  return;
}

// operator() @ 147ef3a70

void __thiscall
`UMaterial::BeginDestroy'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FMaterialRenderProxy *this_00;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  this_00 = *(FMaterialRenderProxy **)(*(longlong *)((longlong)this + 0x10) + 600);
  if (this_00 != (FMaterialRenderProxy *)0x0) {
    this_00->MarkedForGarbageCollection = '\x01';
    (**(code **)(this_00->_padding_ + 0x20))(this_00);
  }
  puVar3 = *(undefined8 **)this;
  iVar2 = *(int *)((longlong)this + 8);
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<FMaterialResource>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    (**(code **)(*(longlong *)*puVar3 + 0x10))();
    puVar3 = puVar3 + 1;
  }
  DestructItems<TRefCountPtr<FMaterialResource>,int>
            (*(TRefCountPtr<FMaterialResource> **)this,*(int *)((longlong)this + 8));
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x284) != '\0') {
    FMaterialRenderProxy::CancelCacheUniformExpressions(this_00);
    *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x284) = 0;
  }
  LOCK();
  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x280) = 1;
  UNLOCK();
  return;
}

// AddReferencedObjects @ 147ef4b90

void __cdecl UMaterial::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UMaterial>(&local_38);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = GetPrivateStaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar3->_padding_)) {
    puVar5 = *(undefined8 **)&param_1[0xf].field_0x18;
    iVar2 = *(int *)&param_1[0xf].field_0x20;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)&param_1[0xf].field_0x20 != iVar2) {
        `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar5 == puVar1) break;
      (**(code **)(*(longlong *)*puVar5 + 0x4f0))();
      puVar5 = puVar5 + 1;
    }
    UMaterialInterface::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar4 = GetTypeName<UMaterial>(&local_38);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// AllMaterialsCacheResourceShadersForRendering @ 147ef4d60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __cdecl UMaterial::AllMaterialsCacheResourceShadersForRendering(bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FIdentityFunctor local_res18 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  pUVar3 = StaticClass();
  GetObjectsOfClass(pUVar3,&local_18,true,RF_ClassDefaultObject,Borrowed);
  AlgoImpl::
  IntroSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,_UMaterial::AllMaterialsCacheResourceShadersForRendering_::__l2::<lambda_1>_>_>
            ((UObject **)local_18.AllocatorInstance.Data,local_18.ArrayNum,local_res18[0],
             (<lambda_1> *)local_res18);
  iVar2 = local_18.ArrayNum;
  uVar4 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar4 * 8;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar5.Data == pFVar1) break;
    CacheResourceShadersForRendering(*(UMaterial **)FVar5.Data,false,(uint)param_2);
    uVar4 = local_18._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AllocateResource @ 147ef4e30

FMaterialResource * __thiscall UMaterial::AllocateResource(UMaterial *this)

{
  FMaterialResource *pFVar1;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,Materials,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Materials,true);
  pFVar1 = ::operator_new(0x160);
  if (pFVar1 == (FMaterialResource *)0x0) {
    pFVar1 = (FMaterialResource *)0x0;
  }
  else {
    pFVar1 = FMaterialResource::FMaterialResource(pFVar1);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return pFVar1;
}

// AttemptInsertNewGroupName @ 147ef57c0

bool __thiscall UMaterial::AttemptInsertNewGroupName(UMaterial *this,FString *param_1)

{
  return false;
}

// BeginDestroy @ 147ef57d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterial::BeginDestroy(UMaterial *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMaterialResource *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_118 [32];
  TRefCountPtr<FMaterialResource> *local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TRefCountPtr<FMaterialResource> local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar2 = (this->MaterialResources).ArrayNum;
  pFVar12 = (this->MaterialResources).AllocatorInstance.Data;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  while( true ) {
    if ((this->MaterialResources).ArrayNum != iVar2) {
      local_c8[0] = 0;
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c8);
    }
    if (pFVar12 == pFVar1) break;
    this_00 = *(FMaterialResource **)pFVar12;
    *(uint *)&this_00->_padding_ = (uint)this_00->_padding_ | 8;
    cVar6 = (**(code **)(this_00->_padding_ + 8))(this_00);
    if (cVar6 != '\0') {
      local_b0.Reference = this_00;
      FMaterial::AddRef((FMaterial *)this_00);
      if (local_c0.Data <= (FScriptContainerElement *)&local_b0) {
        if ((FScriptContainerElement *)&local_b0 < local_c0.Data + (longlong)local_b8._4_4_ * 8) {
          local_e0 = (longlong)(int)local_b8;
          local_d8 = 8;
          local_f8 = &local_b0;
          local_f0 = local_c0.Data;
          local_e8 = (longlong)local_b8._4_4_;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      iVar8 = (int)local_b8;
      if ((int)local_b8 == local_b8._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_c0,(int *)((longlong)&local_b8 + 4));
      }
      local_b8 = CONCAT44(local_b8._4_4_,iVar8 + 1);
      *(undefined8 *)(local_c0.Data + (longlong)iVar8 * 8) = 0;
      *(FMaterialResource **)(local_c0.Data + (longlong)iVar8 * 8) = local_b0.Reference;
      local_b0.Reference = (FMaterialResource *)0x0;
    }
    pFVar12 = pFVar12 + 8;
  }
  UMaterialInterface::BeginDestroy((UMaterialInterface *)this);
  FVar4.Data = local_c0.Data;
  iVar2 = (int)local_b8;
  if ((this->DefaultMaterialInstance != (FDefaultMaterialInstance *)0x0) || (0 < (int)local_b8)) {
    LOCK();
    this->ReleasedByRT = (FThreadSafeBool)0x0;
    UNLOCK();
    uVar5 = local_b8._4_4_;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    local_80[1] = (code *)FVar4.Data;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UMaterial::BeginDestroy'::`12'::<lambda_1>,1,1>::
                         _vftable_;
    *(int *)(local_80 + 2) = iVar2;
    *(undefined4 *)((longlong)local_80 + 0x14) = uVar5;
    local_80[3] = (code *)this;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMaterial::BeginDestroy'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UMaterial::BeginDestroy_::__l12::TSTR_BeginDestroyCommand5986>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78[0] = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_68[0] = local_98[0];
      local_68[1] = local_98[1];
      local_68[2] = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`UMaterial::BeginDestroy'::__l12::TSTR_BeginDestroyCommand5986>::
               Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar9);
      uVar11 = (ulonglong)local_48;
      if ((2 < uVar11) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_78[0] != (code *)0x0) {
          ppcVar10 = local_78 + 2;
          if (local_50 != (code **)0x0) {
            ppcVar10 = local_50;
          }
          (**(code **)(*ppcVar10 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])();
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar10 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar10 = local_80;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
    DestructItems<TRefCountPtr<FMaterialResource>,int>((TRefCountPtr<FMaterialResource> *)0x0,0);
  }
  DestructItems<TRefCountPtr<FMaterialResource>,int>
            ((TRefCountPtr<FMaterialResource> *)local_c0.Data,(int)local_b8);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

// CacheResourceShadersForRendering @ 147ef5b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterial::CacheResourceShadersForRendering
          (UMaterial *this,bool param_1,EMaterialShaderPrecompileMode param_2)

{
  Type TVar1;
  short sVar2;
  EShaderPlatform EVar3;
  FMaterialResource *this_00;
  code *pcVar4;
  EMaterialShaderPrecompileMode EVar5;
  bool bVar6;
  uint uVar7;
  EMaterialShaderPrecompileMode EVar8;
  uint uVar9;
  FString *pFVar10;
  longlong lVar11;
  FCachedSystemScalabilityCVars *pFVar12;
  ulong64 uVar13;
  FWriteBuffer *pFVar14;
  wchar_t *pwVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  char cVar18;
  ulonglong uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStackY_108 [32];
  char local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  EMaterialShaderPrecompileMode local_a0;
  FMaterialResource *local_98 [2];
  FScriptContainerElement *local_88;
  undefined8 local_80;
  undefined8 local_78;
  FString local_70;
  FString local_60;
  TLogScope<1> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar23 = -1 < CpuChannel->Enabled;
  local_a0 = param_2;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2662,"UMaterial::CacheResourceShadersForRendering",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
               ,0xa66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2662);
  }
  pFVar17 = (FScriptContainerElement *)0x0;
  iVar20 = 0;
  local_88 = (FScriptContainerElement *)0x0;
  pFVar21 = pFVar17;
  if (-1 < CpuChannel->Enabled) {
    pFVar10 = UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_70,(UObject *)0x0,None);
    iVar20 = 0;
    if (&local_60 != pFVar10) {
      pFVar21 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar20 = (pFVar10->Data).ArrayNum;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      local_88 = pFVar21;
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  uVar19 = (ulonglong)_tls_index;
  local_b8 = '\0';
  if (-1 < CpuChannel->Enabled) {
    UE::Trace::Private::FLogScope::ScopedStampedEnter<FCpuCacheResourceShadersForRenderingFields>
              (&local_50);
    pFVar17 = (FScriptContainerElement *)L"";
    if (iVar20 != 0) {
      pFVar17 = pFVar21;
    }
    iVar20 = 0;
    sVar2 = *(short *)pFVar17;
    pFVar21 = pFVar17;
    while (sVar2 != 0) {
      pFVar21 = pFVar21 + 2;
      iVar20 = iVar20 + 1;
      sVar2 = *(short *)pFVar21;
    }
    UE::Trace::Private::Field_WriteStringWide(0,(wchar_t *)pFVar17,iVar20);
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8);
    if (*(char *)(lVar22 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(lVar22 + 0x20);
    **(undefined1 **)(lVar22 + 0x20) = 6;
    lVar11 = *(longlong *)(lVar22 + 0x20) + 1;
    *(longlong *)(lVar22 + 0x20) = lVar11;
    if (lVar22 != local_50._8_8_) {
      *(longlong *)(lVar22 + 0x28) = lVar11;
    }
    pFVar17 = (FScriptContainerElement *)&DAT_00000001;
    local_b8 = '\x01';
    *(undefined8 *)(local_50._8_8_ + 0x28) = *(undefined8 *)(local_50._8_8_ + 0x20);
  }
  cVar18 = (char)pFVar17;
  if (param_1) {
    local_80 = 0;
    local_78 = 0;
    (**(code **)(this->_padding_ + 0x5c8))(this,&local_80);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar15 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar15,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pFVar12 = GetCachedScalabilityCVars();
    TVar1 = pFVar12->MaterialQualityLevel;
    uVar7 = UMaterialInterface::GetFeatureLevelsToCompileForRendering((UMaterialInterface *)this);
    EVar5 = local_a0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    if (uVar7 != 0) {
      do {
        uVar16 = -uVar7 & uVar7;
        uVar7 = uVar7 & uVar7 - 1;
        local_a0 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> local_a0 == 0; local_a0 = local_a0 - Background) {
          }
        }
        EVar8 = None;
        if (uVar16 != 0) {
          EVar8 = local_a0;
        }
        EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)EVar8];
        local_98[0] = FindOrCreateMaterialResource
                                (&this->MaterialResources,this,(UMaterialInstance *)0x0,EVar3,TVar1)
        ;
        if ((local_98[0] == (FMaterialResource *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentResource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                               ,0xa8e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar22 = local_a8;
        uVar16 = local_a8._4_4_;
        local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
        uVar9 = 0;
        if ((lVar22 < 0) && (uVar9 = 0, uVar16 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_b0,0,(int *)((longlong)&local_a8 + 4));
          uVar16 = local_a8._4_4_;
          uVar9 = (uint)local_a8;
        }
        if ((local_b0.Data <= (FScriptContainerElement *)local_98) &&
           ((FScriptContainerElement *)local_98 < local_b0.Data + (longlong)(int)uVar16 * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = local_a8._4_4_;
          uVar9 = (uint)local_a8;
        }
        if (uVar9 == uVar16) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
        }
        iVar20 = uVar9 + 1;
        local_a8 = CONCAT44(local_a8._4_4_,iVar20);
        uVar16 = 0;
        *(FMaterialResource **)(local_b0.Data + (longlong)(int)uVar9 * 8) = local_98[0];
        if (0 < iVar20) {
          lVar22 = 0;
          do {
            uVar9 = 0;
            if ((int)uVar16 < iVar20) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = *(FMaterialResource **)(local_b0.Data + lVar22);
            bVar6 = FMaterial::CacheShaders((FMaterial *)this_00,EVar5,(ITargetPlatform *)0x0);
            MaterialImpl::HandleCacheShadersForResourcesErrors(bVar6,EVar3,this,this_00);
            uVar16 = uVar16 + 1;
            lVar22 = lVar22 + 8;
            iVar20 = (uint)local_a8;
          } while ((int)uVar16 < (int)(uint)local_a8);
        }
      } while (uVar7 != 0);
      uVar19 = (ulonglong)_tls_index;
      cVar18 = local_b8;
    }
    (**(code **)(this->_padding_ + 0x598))(this,1);
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
  }
  if (cVar18 != '\0') {
    uVar13 = UE::Trace::Private::TimeGetTimestamp();
    lVar11 = uVar13 - UE::Trace::Private::GStartCycle;
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8);
    if (*(char *)(lVar22 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar14 = *(FWriteBuffer **)(lVar22 + 0x20);
    if ((int)pFVar14 - *(int *)&pFVar14->Cursor < 8) {
      pFVar14 = UE::Trace::Private::Writer_NextBuffer();
    }
    *(longlong *)pFVar14->Cursor = lVar11 * 0x100 + 0x12;
    pFVar14->Cursor = pFVar14->Cursor + 8;
    pFVar14->Committed = pFVar14->Cursor;
  }
  if (local_88 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CacheShaders @ 147ef6080

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __thiscall UMaterial::CacheShaders(UMaterial *this,EMaterialShaderPrecompileMode param_1)

{
  CacheResourceShadersForRendering(this,false,param_1);
  return;
}

// CacheShadersForResources @ 147ef6090

/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterial::CacheShadersForResources
          (UMaterial *this,EShaderPlatform param_1,
          TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_2,
          EMaterialShaderPrecompileMode param_3,ITargetPlatform *param_4)

{
  FMaterialResource *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = param_2->ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FMaterialResource **)((param_2->AllocatorInstance).Data + lVar6);
      bVar2 = FMaterial::CacheShaders((FMaterial *)this_00,param_3,param_4);
      MaterialImpl::HandleCacheShadersForResourcesErrors(bVar2,param_1,this,this_00);
      iVar5 = param_2->ArrayNum;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// CanBeClusterRoot @ 147ef61b0

bool __thiscall UMaterial::CanBeClusterRoot(UMaterial *this)

{
  return true;
}

// CastsRayTracedShadows @ 147ef61d0

bool __thiscall UMaterial::CastsRayTracedShadows(UMaterial *this)

{
  return this->bCastRayTracedShadows;
}

// CheckMaterialUsage @ 147ef61e0

bool __thiscall UMaterial::CheckMaterialUsage(UMaterial *this,EMaterialUsage param_1)

{
  code *pcVar1;
  bool bVar2;
  bool local_res18 [16];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x792,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  local_res18[0] = false;
  bVar2 = SetMaterialUsage(this,local_res18,param_1,(UMaterialInterface *)0x0);
  return bVar2;
}

// CheckMaterialUsage_Concurrent @ 147ef6250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall UMaterial::CheckMaterialUsage_Concurrent(UMaterial *this,EMaterialUsage param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  uchar uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  FTaskBase *pFVar9;
  FTaskBase *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterial::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
  FVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FTaskBase *pFVar15;
  uint uVar16;
  FTaskBase *this_00;
  ETaskPriority local_res8;
  undefined7 uStackX_9;
  EExtendedTaskPriority local_res10 [8];
  FName local_res18;
  FName local_res20;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  this_00 = (FTaskBase *)0x0;
  local_res10[0] = None;
  local_res10[1] = None;
  local_res10[2] = None;
  local_res10[3] = None;
  uVar16 = 1 << ((byte)param_1 & 0x1f);
  uVar3 = (this->MaterialDomain).Value;
  bVar6 = true;
  if ((uVar3 == '\0') || ((uVar3 - 1 & 0xfd) == 0)) {
    bVar5 = GetUsageByFlag(this,param_1);
    if ((bVar5) || (this->bUsedAsSpecialEngineMaterial != '\0')) goto LAB_147ef6684;
    if ((this->UsageFlagWarnings & uVar16) == 0) {
      bVar6 = IsInGameThread();
      if (bVar6) {
        uVar7 = (**(code **)(this->_padding_ + 0x370))(this,param_1);
        return (bool)uVar7;
      }
      aVar8 = this->UsageFlagCacheMiss;
      do {
        LOCK();
        aVar2 = this->UsageFlagCacheMiss;
        bVar6 = aVar8 == aVar2;
        if (bVar6) {
          this->UsageFlagCacheMiss = (atomic<unsigned_int>)((uint)aVar8 | uVar16);
          aVar2 = aVar8;
        }
        aVar8 = aVar2;
        UNLOCK();
      } while (!bVar6);
      if (((uint)aVar8 & uVar16) == 0) {
        if (4 < (byte)LogMaterial._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b8,(UObject *)0x0);
          GetUsageName(this,&local_a8,param_1);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        pFVar9 = ::operator_new(0x10);
        pFVar15 = this_00;
        if (pFVar9 != (FTaskBase *)0x0) {
          pFVar9->_padding_ = (longlong)this;
          *(EMaterialUsage *)&pFVar9->_padding_ = param_1;
          pFVar15 = pFVar9;
        }
        pFVar10 = ::operator_new(0x18);
        pFVar9 = this_00;
        if (pFVar10 != (FTaskBase *)0x0) {
          *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar10->_padding_)[1] = (atomic<int>)0x1;
          pFVar10->_padding_ =
               (longlong)
               &SharedPointerInternals::
                TReferenceControllerWithDeleter<`UMaterial::CheckMaterialUsage_Concurrent'::`13'::FCallSMU,SharedPointerInternals::DefaultDeleter<`UMaterial::CheckMaterialUsage_Concurrent'::`13'::FCallSMU>,1>
                ::_vftable_;
          pFVar10->_padding_ = (longlong)pFVar15;
          pFVar9 = pFVar10;
        }
        if ((pFVar15 == (FTaskBase *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InRawPtrProxy.Object != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0xe3,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage ==
              (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterial::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
               )0x0) {
            pFVar11 = ::FName::FName(&local_res18,"STAT_FSimpleDelegateGraphTask_CheckMaterialUsage"
                                    );
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage,*pFVar11,
                       L"FSimpleDelegateGraphTask.CheckMaterialUsage","STATGROUP_TaskGraphTasks",
                       "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                       MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        FVar12 = StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage;
        if (StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage ==
            (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterial::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
             )0x0) {
          pFVar11 = ::FName::FName(&local_res20,"STAT_FSimpleDelegateGraphTask_CheckMaterialUsage");
          FVar12 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UMaterial::CheckMaterialUsage_Concurrent(EMaterialUsage)const_::_13_::FStat_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_FSimpleDelegateGraphTask_CheckMaterialUsage,*pFVar11,
                                L"FSimpleDelegateGraphTask.CheckMaterialUsage",
                                "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",
                                true,true,ST_int64,true,false,MCR_Invalid);
        }
        local_98 = (undefined1  [8])0x0;
        local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_90.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                   (FWriteAccessScope *)&local_68);
        local_50 = &local_90;
        puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_90);
        if (puVar13 == (undefined8 *)0x0) {
          pFVar15 = (FTaskBase *)CONCAT71(uStackX_9,local_res8);
          pFVar10 = this_00;
        }
        else {
          if (pFVar9 != (FTaskBase *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar9->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
            UNLOCK();
          }
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[2] = uVar14;
          *puVar13 = &TBaseSPMethodDelegateInstance<0,`UMaterial::CheckMaterialUsage_Concurrent'::`13'::FCallSMU,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                      ::_vftable_;
          puVar13[3] = pFVar15;
          puVar13[4] = pFVar9;
          if (pFVar9 != (FTaskBase *)0x0) {
            LOCK();
            ((atomic<int> *)&pFVar9->_padding_)[1] =
                 (atomic<int>)((int)((atomic<int> *)&pFVar9->_padding_)[1] + 1);
            UNLOCK();
          }
          puVar13[5] = `UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU::Task;
          pFVar10 = (FTaskBase *)&DAT_00000001;
          pFVar15 = pFVar9;
        }
        if (pFVar10 != (FTaskBase *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar15);
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
        pFVar15 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
        if (pFVar15 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask
                    ((FBaseGraphTask *)pFVar15,
                     (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      *)0x0);
          pFVar15->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
          this_00 = pFVar15;
        }
        this_00[1]._padding_ = (longlong)FVar12;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_00[1]._padding_
                   ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_98);
        *(undefined4 *)&this_00[1]._padding_ = 0x101;
        UE::Tasks::Private::TranslatePriority(GameThread_Local,&local_res8,local_res10);
        UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res8,local_res10[0],None);
        if (this_00 == (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
        }
        else {
          LOCK();
          this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar8 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar8 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                   (FWriteAccessScope *)&local_80);
        if ((local_90.DelegateSize != 0) &&
           (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_90,0,0,0x10);
          local_90.DelegateSize = 0;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_90.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar9);
      }
      return false;
    }
  }
  bVar6 = false;
LAB_147ef6684:
  if (((uint)this->UsageFlagCacheMiss & uVar16) != 0) {
    LOCK();
    this->UsageFlagCacheMiss = (atomic<unsigned_int>)((uint)this->UsageFlagCacheMiss & ~uVar16);
    UNLOCK();
  }
  return bVar6;
}

// ClearNumericParameterDefault @ 147ef6750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterial::ClearNumericParameterDefault
          (UMaterial *this,EMaterialParameterType param_1,FMemoryImageMaterialParameterInfo *param_2
          ,EShaderPlatform param_3)

{
  return;
}

// DumpDebugInfo @ 147ef6fe0

void __thiscall UMaterial::DumpDebugInfo(UMaterial *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->MaterialResources).AllocatorInstance.Data;
  iVar2 = (this->MaterialResources).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MaterialResources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialResource_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FMaterial::DumpDebugInfo(*(FMaterial **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// FinishCacheUniformExpressions @ 147ef7c60

void __thiscall UMaterial::FinishCacheUniformExpressions(UMaterial *this)

{
  this->bCachingUniformExpressions = false;
  return;
}

// FinishDestroy @ 147ef7c70

void __thiscall UMaterial::FinishDestroy(UMaterial *this)

{
  ReleaseResources(this);
  UMaterialInterface::FinishDestroy((UMaterialInterface *)this);
  return;
}

// ForceNoCompilationInPostLoad @ 147ef7ca0

void __cdecl UMaterial::ForceNoCompilationInPostLoad(bool param_1)

{
  return;
}

// GetAssetRegistryTags @ 147ef8a80

void __thiscall UMaterial::GetAssetRegistryTags(UMaterial *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetBlendMode @ 147efa340

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __thiscall UMaterial::GetBlendMode(UMaterial *this)

{
  bool bVar1;
  short *psVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((this->BlendMode).Value == '\x01') {
    return (byte)~this->field_0x1fd >> 1 & BLEND_Masked;
  }
  psVar2 = (short *)(**(code **)(this->_padding_ + 0x468))(this,local_res8);
  if (*psVar2 == 0x800) {
    local_18 = 0;
    uStack_10 = 0;
    lVar3 = (**(code **)(this->_padding_ + 0x2f0))(this,&local_18);
    if (((*(uint *)(lVar3 + 0x4d8) >> 0x1e & 1) == 0) &&
       (bVar1 = Substrate::IsHiddenMaterialAssetConversionEnabled(), bVar1)) {
      return BLEND_TranslucentColoredTransmittance;
    }
  }
  return (uint)(this->BlendMode).Value;
}

// GetBlendModeFromString @ 147efa3d0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

EBlendMode __cdecl UMaterial::GetBlendModeFromString(wchar_t *param_1)

{
  int iVar1;
  EBlendMode EVar2;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_Opaque",param_1);
  if (iVar1 == 0) {
    return BLEND_Opaque;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_Masked",param_1);
  if (iVar1 == 0) {
    return BLEND_Masked;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_Translucent",param_1);
  if (iVar1 != 0) {
    iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_Additive",param_1);
    if (iVar1 == 0) {
      return BLEND_Additive;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_Modulate",param_1);
    if (iVar1 == 0) {
      return BLEND_ColoredTransmittanceOnly;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_AlphaComposite",param_1);
    if (iVar1 == 0) {
      return BLEND_AlphaComposite;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_AlphaHoldout",param_1);
    if (iVar1 == 0) {
      return BLEND_AlphaHoldout;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_TranslucentColoredTransmittance",param_1);
    if (iVar1 == 0) {
      return BLEND_TranslucentColoredTransmittance;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_TranslucentGreyTransmittance",param_1);
    if (iVar1 != 0) {
      iVar1 = FGenericPlatformStricmp::Stricmp(L"BLEND_ColoredTransmittanceOnly",param_1);
      EVar2 = BLEND_Opaque;
      if (iVar1 == 0) {
        EVar2 = BLEND_ColoredTransmittanceOnly;
      }
      return EVar2;
    }
  }
  return BLEND_Translucent;
}

// GetBlendModeString @ 147efa510

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

wchar_t * __cdecl UMaterial::GetBlendModeString(EBlendMode param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = Substrate::IsSubstrateEnabled();
  switch(param_1) {
  default:
    return L"BLEND_Opaque";
  case BLEND_Masked:
    return L"BLEND_Masked";
  case BLEND_Translucent:
    pwVar2 = L"BLEND_Translucent";
    if (bVar1) {
      pwVar2 = L"BLEND_TranslucentGreyTransmittance";
    }
    break;
  case BLEND_Additive:
    return L"BLEND_Additive";
  case BLEND_ColoredTransmittanceOnly:
    pwVar2 = L"BLEND_Modulate";
    if (bVar1) {
      pwVar2 = L"BLEND_ColoredTransmittanceOnly";
    }
    return pwVar2;
  case BLEND_AlphaComposite:
    return L"BLEND_AlphaComposite";
  case BLEND_AlphaHoldout:
    return L"BLEND_AlphaHoldout";
  case BLEND_TranslucentColoredTransmittance:
    pwVar2 = L"BLEND_TranslucentColoredTransmittance_SUBSTRATEONLY";
    if (bVar1) {
      pwVar2 = L"BLEND_TranslucentColoredTransmittance";
    }
    return pwVar2;
  }
  return pwVar2;
}

// GetBlendableLocation @ 147efa610

/* WARNING: Enum "EBlendableLocation": Some values do not have unique names */

EBlendableLocation __thiscall UMaterial::GetBlendableLocation(UMaterial *this,UMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  EBlendableLocation EVar3;
  
  if (param_1 == this) {
    return (EBlendableLocation)(this->BlendableLocation).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Base == this",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                     ,0x97f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return (EBlendableLocation)(this->BlendableLocation).Value;
}

// GetBlendablePriority @ 147efa690

int __thiscall UMaterial::GetBlendablePriority(UMaterial *this,UMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == this) {
    return this->BlendablePriority;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Base == this",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                     ,0x985,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return this->BlendablePriority;
}

// GetCastDynamicShadowAsMasked @ 147efa700

bool __thiscall UMaterial::GetCastDynamicShadowAsMasked(UMaterial *this)

{
  return this->bCastDynamicShadowAsMasked;
}

// GetDefaultMaterial @ 147efab80

UMaterial * __cdecl UMaterial::GetDefaultMaterial(EMaterialDomain param_1)

{
  code *pcVar1;
  bool bVar2;
  UMaterial *pUVar3;
  
  UMaterialInterface::InitDefaultMaterials();
  if (MD_RuntimeVirtualTexture < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Domain >= MD_Surface && Domain < MD_MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x432,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterial *)(*pcVar1)();
      return pUVar3;
    }
  }
  if (GDefaultMaterials[(int)param_1] == (UMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GDefaultMaterials[Domain] != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x433,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMaterial *)(*pcVar1)();
      return pUVar3;
    }
  }
  return GDefaultMaterials[(int)param_1];
}

// GetDependencies @ 147efac80

void __thiscall
UMaterial::GetDependencies
          (UMaterial *this,
          TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
          *param_1)

{
  UMaterialInterface *local_res8 [2];
  UMaterial *local_res18 [2];
  
  local_res18[0] = this;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  Emplace<UMaterialInterface_*>(param_1,local_res8,(bool *)local_res18);
  return;
}

// GetDisplacementFadeRange @ 147efacf0

FDisplacementFadeRange __thiscall UMaterial::GetDisplacementFadeRange(UMaterial *this)

{
  FDisplacementFadeRange in_RDX;
  
  *(FDisplacementFadeRange *)in_RDX = this->DisplacementFadeRange;
  return in_RDX;
}

// GetDisplacementScaling @ 147efad30

FDisplacementScaling __thiscall UMaterial::GetDisplacementScaling(UMaterial *this)

{
  FDisplacementScaling in_RDX;
  
  *(FDisplacementScaling *)in_RDX = this->DisplacementScaling;
  return in_RDX;
}

// GetLightingGuidChain @ 147efb3b0

void __thiscall
UMaterial::GetLightingGuidChain
          (UMaterial *this,bool param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetMaterial @ 147efb3c0

UMaterial * __thiscall UMaterial::GetMaterial(UMaterial *this)

{
  return this;
}

// GetMaterial @ 147efb3d0

UMaterial * __thiscall UMaterial::GetMaterial(UMaterial *this)

{
  return this;
}

// GetMaterialInheritanceChain @ 147efb400

void __thiscall
UMaterial::GetMaterialInheritanceChain(UMaterial *this,FMaterialInheritanceChain *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMaterialCachedExpressionData *pFVar3;
  
  if (param_1->BaseMaterial != (UMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OutChain.BaseMaterial",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x8d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->BaseMaterial = this;
  if (param_1->CachedExpressionData == (FMaterialCachedExpressionData *)0x0) {
    pFVar3 = &FMaterialCachedExpressionData::EmptyData;
    if ((FMaterialCachedExpressionData *)this->_padding_ != (FMaterialCachedExpressionData *)0x0) {
      pFVar3 = (FMaterialCachedExpressionData *)this->_padding_;
    }
    param_1->CachedExpressionData = pFVar3;
  }
  return;
}

// GetMaterialLayers @ 147efb4a0

bool __thiscall
UMaterial::GetMaterialLayers
          (UMaterial *this,FMaterialLayersFunctions *param_1,
          TMaterialRecursionGuard<UMaterialInterface> *param_2)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x4d0) & 1) != 0)) {
    FMaterialLayersFunctionsRuntimeData::operator=
              ((FMaterialLayersFunctionsRuntimeData *)param_1,
               (FMaterialLayersFunctionsRuntimeData *)(lVar1 + 0x478));
    return true;
  }
  return false;
}

// GetMaterialResource @ 147efb550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __thiscall
UMaterial::GetMaterialResource(UMaterial *this,EShaderPlatform param_1,Type param_2)

{
  Type TVar1;
  int iVar2;
  FMaterialResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  FMaterialResource *pFVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_2 == Num) {
    pFVar7 = GetCachedScalabilityCVars();
    param_2 = pFVar7->MaterialQualityLevel;
  }
  iVar2 = (this->MaterialResources).ArrayNum;
  pFVar8 = (FMaterialResource *)0x0;
  uVar10 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->MaterialResources).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMaterialResource *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = *(FMaterialResource **)((this->MaterialResources).AllocatorInstance.Data + lVar9 * 8)
      ;
      if (GMaxRHIShaderPlatform == param_1) {
        TVar1 = (Type)pFVar3->_padding_;
        if (TVar1 == param_2) {
          return pFVar3;
        }
        if (TVar1 == Num) {
          pFVar8 = pFVar3;
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  return pFVar8;
}

// GetMaterialResource @ 147efb650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterialResource * __thiscall
UMaterial::GetMaterialResource(UMaterial *this,EShaderPlatform param_1,Type param_2)

{
  Type TVar1;
  int iVar2;
  FMaterialResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FCachedSystemScalabilityCVars *pFVar7;
  FMaterialResource *pFVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_2 == Num) {
    pFVar7 = GetCachedScalabilityCVars();
    param_2 = pFVar7->MaterialQualityLevel;
  }
  iVar2 = (this->MaterialResources).ArrayNum;
  pFVar8 = (FMaterialResource *)0x0;
  uVar10 = 0;
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->MaterialResources).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FMaterialResource *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = *(FMaterialResource **)((this->MaterialResources).AllocatorInstance.Data + lVar9 * 8)
      ;
      if (GMaxRHIShaderPlatform == param_1) {
        TVar1 = (Type)pFVar3->_padding_;
        if (TVar1 == param_2) {
          return pFVar3;
        }
        if (TVar1 == Num) {
          pFVar8 = pFVar3;
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  return pFVar8;
}

// GetMaterialShadingModelFromString @ 147efb750

EMaterialShadingModel __cdecl UMaterial::GetMaterialShadingModelFromString(wchar_t *param_1)

{
  int iVar1;
  EMaterialShadingModel EVar2;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_Unlit",param_1);
  if (iVar1 == 0) {
    return MSM_Unlit;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_DefaultLit",param_1);
  if (iVar1 == 0) {
    return MSM_DefaultLit;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_Subsurface",param_1);
  if (iVar1 == 0) {
    return MSM_Subsurface;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_PreintegratedSkin",param_1);
  if (iVar1 == 0) {
    return MSM_PreintegratedSkin;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_ClearCoat",param_1);
  if (iVar1 == 0) {
    return MSM_ClearCoat;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_SubsurfaceProfile",param_1);
  if (iVar1 == 0) {
    return MSM_SubsurfaceProfile;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_TwoSidedFoliage",param_1);
  if (iVar1 == 0) {
    return MSM_TwoSidedFoliage;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_Hair",param_1);
  if (iVar1 == 0) {
    return MSM_Hair;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_Cloth",param_1);
  if (iVar1 == 0) {
    return MSM_Cloth;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_Eye",param_1);
  if (iVar1 == 0) {
    return MSM_Eye;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_SingleLayerWater",param_1);
  if (iVar1 == 0) {
    return MSM_SingleLayerWater;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_ThinTranslucent",param_1);
  if (iVar1 == 0) {
    return MSM_ThinTranslucent;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_Strata",param_1);
  if (iVar1 == 0) {
    return MSM_Strata;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_NUM",param_1);
  if (iVar1 == 0) {
    return MSM_NUM;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"MSM_FromMaterialExpression",param_1);
  EVar2 = MSM_DefaultLit;
  if (iVar1 == 0) {
    EVar2 = MSM_FromMaterialExpression;
  }
  return EVar2;
}

// GetMaterialShadingModelString @ 147efb930

wchar_t * __cdecl UMaterial::GetMaterialShadingModelString(EMaterialShadingModel param_1)

{
  switch(param_1) {
  case MSM_Unlit:
    return L"MSM_Unlit";
  default:
    return L"MSM_DefaultLit";
  case MSM_Subsurface:
    return L"MSM_Subsurface";
  case MSM_PreintegratedSkin:
    return L"MSM_PreintegratedSkin";
  case MSM_ClearCoat:
    return L"MSM_ClearCoat";
  case MSM_SubsurfaceProfile:
    return L"MSM_SubsurfaceProfile";
  case MSM_TwoSidedFoliage:
    return L"MSM_TwoSidedFoliage";
  case MSM_Hair:
    return L"MSM_Hair";
  case MSM_Cloth:
    return L"MSM_Cloth";
  case MSM_Eye:
    return L"MSM_Eye";
  case MSM_SingleLayerWater:
    return L"MSM_SingleLayerWater";
  case MSM_ThinTranslucent:
    return L"MSM_ThinTranslucent";
  case MSM_Strata:
    return L"MSM_Strata";
  case MSM_NUM:
    return L"MSM_NUM";
  case MSM_FromMaterialExpression:
    return L"MSM_FromMaterialExpression";
  }
}

// GetMaterial_Concurrent @ 147efba10

UMaterial * __thiscall
UMaterial::GetMaterial_Concurrent
          (UMaterial *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  return this;
}

// GetMaxWorldPositionOffsetDisplacement @ 147efba20

float __thiscall UMaterial::GetMaxWorldPositionOffsetDisplacement(UMaterial *this)

{
  return this->MaxWorldPositionOffsetDisplacement;
}

// GetNaniteOverride @ 147efba30

UMaterialInterface * __thiscall
UMaterial::GetNaniteOverride(UMaterial *this,TMaterialRecursionGuard<UMaterialInterface> *param_1)

{
  return (this->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr;
}

// GetNeuralProfile_Internal @ 147efba50

UNeuralProfile * __thiscall UMaterial::GetNeuralProfile_Internal(UMaterial *this)

{
  return (UNeuralProfile *)this->_padding_;
}

// GetNewResources @ 147efba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterial::GetNewResources
          (UMaterial *this,EShaderPlatform param_1,
          TArray<FMaterialResource_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UMaterialShaderQualitySettings *this_00;
  UShaderPlatformQualitySettings *this_01;
  longlong lVar6;
  FMaterialQualityOverrides *pFVar7;
  ForElementType<bool> FVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  FScriptContainerElement *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  TArray<bool,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58.ArrayMax = 4;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<bool>)0x0;
  local_58.ArrayNum = 0;
  UMaterialInterface::GetQualityLevelUsage((UMaterialInterface *)this,&local_58,param_1,true);
  this_00 = UMaterialShaderQualitySettings::Get();
  this_01 = UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings(this_00,param_1);
  bVar3 = false;
  if (local_58.ArrayNum < 1) {
    local_98 = (longlong *)0x0;
    local_90 = (FScriptContainerElement *)(longlong)local_58.ArrayNum;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (ForElementType<bool>)&local_58;
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FVar8 = local_58.AllocatorInstance.SecondaryData;
  }
  if (*(char *)FVar8 == '\0') {
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Low);
    if (pFVar7->bDiscardQualityDuringCook == false) {
      bVar3 = true;
    }
  }
  else {
    lVar6 = (**(code **)(this->_padding_ + 0x5c0))(this);
    local_68 = lVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UMaterial **)(lVar6 + 0x40) = this;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 0;
    *(Type *)(lVar6 + 0x24) = GMaxRHIFeatureLevel;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      local_80 = (longlong)param_2->ArrayNum;
      local_78 = 8;
      local_98 = &local_68;
      local_90 = pFVar1;
      local_88 = (longlong)param_2->ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
  }
  if (local_58.ArrayNum < 2) {
    local_98 = (longlong *)&DAT_00000001;
    local_90 = (FScriptContainerElement *)(longlong)local_58.ArrayNum;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (ForElementType<bool>)&local_58;
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FVar8 = local_58.AllocatorInstance.SecondaryData;
  }
  if (*(uchar *)((longlong)FVar8 + 1) == '\0') {
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,High);
    if (pFVar7->bDiscardQualityDuringCook == false) {
      bVar3 = true;
    }
  }
  else {
    lVar6 = (**(code **)(this->_padding_ + 0x5c0))(this);
    local_68 = lVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UMaterial **)(lVar6 + 0x40) = this;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 1;
    *(Type *)(lVar6 + 0x24) = GMaxRHIFeatureLevel;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      local_80 = (longlong)param_2->ArrayNum;
      local_78 = 8;
      local_98 = &local_68;
      local_90 = pFVar1;
      local_88 = (longlong)param_2->ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
  }
  if (local_58.ArrayNum < 3) {
    local_98 = (longlong *)&DAT_00000002;
    local_90 = (FScriptContainerElement *)(longlong)local_58.ArrayNum;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (ForElementType<bool>)&local_58;
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FVar8 = local_58.AllocatorInstance.SecondaryData;
  }
  if (*(uchar *)((longlong)FVar8 + 2) == '\0') {
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Medium);
    if (pFVar7->bDiscardQualityDuringCook == false) {
      bVar3 = true;
    }
  }
  else {
    lVar6 = (**(code **)(this->_padding_ + 0x5c0))(this);
    local_68 = lVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UMaterial **)(lVar6 + 0x40) = this;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 2;
    *(Type *)(lVar6 + 0x24) = GMaxRHIFeatureLevel;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      local_80 = (longlong)param_2->ArrayNum;
      local_78 = 8;
      local_98 = &local_68;
      local_90 = pFVar1;
      local_88 = (longlong)param_2->ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
  }
  if (local_58.ArrayNum < 4) {
    local_98 = (longlong *)&DAT_00000003;
    local_90 = (FScriptContainerElement *)(longlong)local_58.ArrayNum;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (ForElementType<bool>)&local_58;
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FVar8 = local_58.AllocatorInstance.SecondaryData;
  }
  if (*(uchar *)((longlong)FVar8 + 3) == '\0') {
    pFVar7 = UShaderPlatformQualitySettings::GetQualityOverrides(this_01,Epic);
    if (pFVar7->bDiscardQualityDuringCook != false) goto LAB_147efbfe9;
  }
  else {
    lVar6 = (**(code **)(this->_padding_ + 0x5c0))(this);
    local_68 = lVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UMaterial **)(lVar6 + 0x40) = this;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 3;
    *(Type *)(lVar6 + 0x24) = GMaxRHIFeatureLevel;
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      local_80 = (longlong)param_2->ArrayNum;
      local_78 = 8;
      local_98 = &local_68;
      local_90 = pFVar1;
      local_88 = (longlong)param_2->ArrayMax;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
LAB_147efbfe9:
    if (!bVar3) goto LAB_147efc0c0;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x5c0))(this);
  local_60 = lVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(UMaterial **)(lVar6 + 0x40) = this;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 4;
  *(Type *)(lVar6 + 0x24) = GMaxRHIFeatureLevel;
  pFVar1 = (param_2->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_60) &&
     ((FScriptContainerElement *)&local_60 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    local_80 = (longlong)param_2->ArrayNum;
    local_78 = 8;
    local_98 = &local_60;
    local_90 = pFVar1;
    local_88 = (longlong)param_2->ArrayMax;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_60;
LAB_147efc0c0:
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<bool>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetOpacityMaskClipValue @ 147efc180

float __thiscall UMaterial::GetOpacityMaskClipValue(UMaterial *this)

{
  return this->OpacityMaskClipValue;
}

// GetParameterValue @ 147efc500

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "EMaterialGetParameterValueFlags": Some values do not have unique names */

bool __thiscall
UMaterial::GetParameterValue
          (UMaterial *this,EMaterialParameterType param_1,FMemoryImageMaterialParameterInfo *param_2
          ,FMaterialParameterMetadata *param_3,EMaterialGetParameterValueFlags param_4)

{
  undefined4 uVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  FMaterialCachedExpressionData *this_00;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  FMaterialCachedParameterEntry *pFVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  FMaterialParameterInfo local_38;
  
  if (((param_4 & CheckNonOverrides) == None) ||
     (this_00 = (FMaterialCachedExpressionData *)this->_padding_,
     this_00 == (FMaterialCachedExpressionData *)0x0)) {
    return false;
  }
  if (param_1 < NumRuntime) {
    pFVar8 = this_00->RuntimeEntries + param_1;
  }
  else {
    pFVar8 = &FMaterialCachedParameterEntry::EmptyData;
  }
  uVar1 = (param_2->Name).ComparisonIndex;
  uVar2 = (param_2->Association).Value;
  uVar3 = (param_2->Name).Number;
  iVar4 = param_2->Index;
  local_38.Name.Number = uVar3;
  local_38.Name.ComparisonIndex.Value = uVar1;
  local_38.Association.Value = uVar2;
  local_38.Index = iVar4;
  uVar6 = ::GetTypeHash(&local_38);
  if (*(int *)&(pFVar8->ParameterInfoSet).Elements.field_0x8 !=
      *(int *)&(pFVar8->ParameterInfoSet).Elements.field_0x34) {
    FVar10 = (pFVar8->ParameterInfoSet).Hash.SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&(pFVar8->ParameterInfoSet).Hash;
    }
    iVar9 = *(int *)((longlong)FVar10 +
                    (ulonglong)((pFVar8->ParameterInfoSet).HashSize - 1U & uVar6) * 4);
    if (iVar9 != -1) {
      lVar5 = *(longlong *)&(pFVar8->ParameterInfoSet).Elements;
      do {
        lVar7 = (longlong)iVar9;
        if ((((*(uint *)(lVar5 + lVar7 * 0x18) == uVar1) &&
             (*(uint *)(lVar5 + 4 + lVar7 * 0x18) == uVar3)) &&
            (*(uchar *)(lVar5 + 8 + lVar7 * 0x18) == uVar2)) &&
           (*(int *)(lVar5 + 0xc + lVar7 * 0x18) == iVar4)) {
          if (iVar9 == -1) {
            return false;
          }
          FMaterialCachedExpressionData::GetParameterValueByIndex(this_00,param_1,iVar9,param_3);
          return true;
        }
        iVar9 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
      } while (iVar9 != -1);
    }
  }
  return false;
}

// GetPhysicalMaterial @ 147efd400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicalMaterial * __thiscall UMaterial::GetPhysicalMaterial(UMaterial *this)

{
  UPhysicalMaterial *pUVar1;
  
  if (GEngine == (UEngine *)0x0) {
    pUVar1 = (UPhysicalMaterial *)0x0;
  }
  else {
    pUVar1 = (this->PhysMaterial).field0_0x0.DebugPtr;
    if (pUVar1 == (UPhysicalMaterial *)0x0) {
      return (GEngine->DefaultPhysMaterial).field0_0x0.DebugPtr;
    }
  }
  return pUVar1;
}

// GetPhysicalMaterialFromMap @ 147efd430

UPhysicalMaterial * __thiscall UMaterial::GetPhysicalMaterialFromMap(UMaterial *this,int param_1)

{
  if ((uint)param_1 < 8) {
    return this->PhysicalMaterialMap[param_1].field0_0x0.DebugPtr;
  }
  return (UPhysicalMaterial *)0x0;
}

// GetPhysicalMaterialMask @ 147efd450

UPhysicalMaterialMask * __thiscall UMaterial::GetPhysicalMaterialMask(UMaterial *this)

{
  return (this->PhysMaterialMask).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 147efd620

UClass * __cdecl UMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Material",&Z_Registration_Info_UClass_UMaterial.InnerSingleton,
               StaticRegisterNativesUMaterial,0x288,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterial>,InternalVTableHelperCtorCaller<UMaterial>,local_res8,
               UMaterialInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterial.InnerSingleton;
}

// GetRefractionSettings @ 147efdbb0

bool __thiscall UMaterial::GetRefractionSettings(UMaterial *this,float *param_1)

{
  *param_1 = this->RefractionDepthBias;
  return true;
}

// GetRenderProxy @ 147efdbd0

FMaterialRenderProxy * __thiscall UMaterial::GetRenderProxy(UMaterial *this)

{
  return (FMaterialRenderProxy *)this->DefaultMaterialInstance;
}

// GetRenderTracePhysicalMaterialOutputs @ 147efdbe0

TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> * __thiscall
UMaterial::GetRenderTracePhysicalMaterialOutputs
          (UMaterial *this,
          TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> *pTVar4;
  
  iVar1 = (this->RenderTracePhysicalMaterialOutputs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UPhysicalMaterial> *)
       (this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UPhysicalMaterial>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 147efdc50

void __thiscall UMaterial::GetResourceSizeEx(UMaterial *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  if (this->DefaultMaterialInstance != (FDefaultMaterialInstance *)0x0) {
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,200);
  }
  pFVar3 = (this->MaterialResources).AllocatorInstance.Data;
  iVar2 = (this->MaterialResources).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MaterialResources).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FMaterialResource::GetResourceSizeEx(*(FMaterialResource **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetShadingModels @ 147efdd40

FMaterialShadingModelField __thiscall UMaterial::GetShadingModels(UMaterial *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterialShadingModelField FVar3;
  ushort uVar4;
  ushort *in_RDX;
  
  FVar3.ShadingModelField = (ushort)in_RDX;
  switch((this->MaterialDomain).Value) {
  case '\0':
  case '\x03':
    *in_RDX = (this->ShadingModels).ShadingModelField;
    return (FMaterialShadingModelField)FVar3.ShadingModelField;
  case '\x01':
  case '\x06':
    *in_RDX = 2;
    return (FMaterialShadingModelField)FVar3.ShadingModelField;
  case '\x02':
  case '\x04':
  case '\x05':
    goto switchD_147efdd67_caseD_2;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x1cc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FMaterialShadingModelField)uVar4;
    }
switchD_147efdd67_caseD_2:
    *in_RDX = 1;
    return (FMaterialShadingModelField)FVar3.ShadingModelField;
  }
}

// GetSpecularProfile_Internal @ 147efdeb0

USpecularProfile * __thiscall UMaterial::GetSpecularProfile_Internal(UMaterial *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  USpecularProfile *pUVar4;
  
  if ((uint)this->_padding_ <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index<uint32(SpecularProfiles.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x1d5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USpecularProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (int)this->_padding_) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USpecularProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(USpecularProfile **)(this->_padding_ + (longlong)(int)param_1 * 8);
}

// GetSubsurfaceProfileOverride_Internal @ 147efdf70

USubsurfaceProfile * __thiscall UMaterial::GetSubsurfaceProfileOverride_Internal(UMaterial *this)

{
  return (USubsurfaceProfile *)0x0;
}

// GetSubsurfaceProfileRoot_Internal @ 147efe020

USubsurfaceProfile * __thiscall
UMaterial::GetSubsurfaceProfileRoot_Internal(UMaterial *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  USubsurfaceProfile *pUVar4;
  
  if ((uint)this->_padding_ <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index<uint32(SubsurfaceProfiles.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x1d4a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USubsurfaceProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (int)this->_padding_) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USubsurfaceProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(USubsurfaceProfile **)(this->_padding_ + (longlong)(int)param_1 * 8);
}

// GetSubsurfaceProfileRoot_Internal @ 147efe0c0

USubsurfaceProfile * __thiscall UMaterial::GetSubsurfaceProfileRoot_Internal(UMaterial *this)

{
  return (USubsurfaceProfile *)this->_padding_;
}

// GetSubsurfaceProfile_Internal @ 147efe0d0

USubsurfaceProfile * __thiscall UMaterial::GetSubsurfaceProfile_Internal(UMaterial *this)

{
  return (USubsurfaceProfile *)this->_padding_;
}

// GetUsageByFlag @ 147efe1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMaterial::GetUsageByFlag(UMaterial *this,EMaterialUsage param_1)

{
  switch(param_1) {
  case MATUSAGE_SkeletalMesh:
    return this->bUsedWithSkeletalMesh;
  case MATUSAGE_ParticleSprites:
    return this->bUsedWithParticleSprites;
  case MATUSAGE_BeamTrails:
    return this->bUsedWithBeamTrails;
  case MATUSAGE_MeshParticles:
    return this->bUsedWithMeshParticles;
  case MATUSAGE_StaticLighting:
    return this->bUsedWithStaticLighting;
  case MATUSAGE_MorphTargets:
    return this->bUsedWithMorphTargets;
  case MATUSAGE_SplineMesh:
    return this->bUsedWithSplineMeshes;
  case MATUSAGE_InstancedStaticMeshes:
    return this->bUsedWithInstancedStaticMeshes;
  case MATUSAGE_GeometryCollections:
    return this->bUsedWithGeometryCollections;
  case MATUSAGE_Clothing:
    return this->bUsedWithClothing;
  case MATUSAGE_NiagaraSprites:
    return this->bUsedWithNiagaraSprites;
  case MATUSAGE_NiagaraRibbons:
    return this->bUsedWithNiagaraRibbons;
  case MATUSAGE_NiagaraMeshParticles:
    return this->bUsedWithNiagaraMeshParticles;
  case MATUSAGE_GeometryCache:
    return this->bUsedWithGeometryCache;
  case MATUSAGE_Water:
    return this->bUsedWithWater;
  case MATUSAGE_HairStrands:
    return this->bUsedWithHairStrands;
  case MATUSAGE_LidarPointCloud:
    return this->bUsedWithLidarPointCloud;
  case MATUSAGE_VirtualHeightfieldMesh:
    return this->bUsedWithVirtualHeightfieldMesh;
  case MATUSAGE_Nanite:
    return this->bUsedWithNanite;
  case MATUSAGE_Voxels:
    return this->bUsedWithVoxels;
  case MATUSAGE_VolumetricCloud:
    return this->bUsedWithVolumetricCloud;
  case MATUSAGE_HeterogeneousVolumes:
    return this->bUsedWithHeterogeneousVolumes;
  case MATUSAGE_StaticMesh:
    return this->bUsedWithStaticMesh;
  default:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    return false;
  }
}

// GetUsageName @ 147efe440

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UMaterial::GetUsageName(UMaterial *this,FString *__return_storage_ptr__,EMaterialUsage param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  switch(param_1) {
  case MATUSAGE_SkeletalMesh:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithSkeletalMesh");
    return __return_storage_ptr__;
  case MATUSAGE_ParticleSprites:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithParticleSprites");
    return __return_storage_ptr__;
  case MATUSAGE_BeamTrails:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithBeamTrails");
    return __return_storage_ptr__;
  case MATUSAGE_MeshParticles:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithMeshParticles");
    return __return_storage_ptr__;
  case MATUSAGE_StaticLighting:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithStaticLighting");
    return __return_storage_ptr__;
  case MATUSAGE_MorphTargets:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithMorphTargets");
    return __return_storage_ptr__;
  case MATUSAGE_SplineMesh:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithSplineMeshes");
    return __return_storage_ptr__;
  case MATUSAGE_InstancedStaticMeshes:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithInstancedStaticMeshes");
    return __return_storage_ptr__;
  case MATUSAGE_GeometryCollections:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithGeometryCollections");
    return __return_storage_ptr__;
  case MATUSAGE_Clothing:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithClothing");
    return __return_storage_ptr__;
  case MATUSAGE_NiagaraSprites:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithNiagaraSprites");
    return __return_storage_ptr__;
  case MATUSAGE_NiagaraRibbons:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithNiagaraRibbons");
    return __return_storage_ptr__;
  case MATUSAGE_NiagaraMeshParticles:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithNiagaraMeshParticles");
    return __return_storage_ptr__;
  case MATUSAGE_GeometryCache:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithGeometryCache");
    return __return_storage_ptr__;
  case MATUSAGE_Water:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithWater");
    return __return_storage_ptr__;
  case MATUSAGE_HairStrands:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithHairStrands");
    return __return_storage_ptr__;
  case MATUSAGE_LidarPointCloud:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithLidarPointCloud");
    return __return_storage_ptr__;
  case MATUSAGE_VirtualHeightfieldMesh:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithVirtualHeightfieldMesh");
    return __return_storage_ptr__;
  case MATUSAGE_Nanite:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithNanite");
    return __return_storage_ptr__;
  case MATUSAGE_Voxels:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithVoxels");
    return __return_storage_ptr__;
  case MATUSAGE_VolumetricCloud:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithVolumetricCloud");
    return __return_storage_ptr__;
  case MATUSAGE_HeterogeneousVolumes:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithHeterogeneousVolumes");
    return __return_storage_ptr__;
  case MATUSAGE_StaticMesh:
    ::FString::operator=(__return_storage_ptr__,L"bUsedWithStaticMesh");
    return __return_storage_ptr__;
  default:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    return __return_storage_ptr__;
  }
}

// GetUsedTextures @ 147efe7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147efe8bb) */
/* WARNING: Removing unreachable block (ram,0x000147efe8e0) */
/* WARNING: Removing unreachable block (ram,0x000147efe8e1) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterial::GetUsedTextures
          (UMaterial *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TOptional<EMaterialQualityLevel::Type> param_2,TOptional<EShaderPlatform> param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  FMaterial *this_00;
  code *pcVar5;
  uint uVar6;
  ForElementType<FMaterialResource_const_*> FVar7;
  UTextureCollection *pUVar8;
  bool bVar9;
  Type TVar10;
  uint uVar11;
  FMaterialResource *pFVar12;
  ulonglong uVar13;
  FMaterialResource *pFVar14;
  FMaterialTextureParameterInfo *this_01;
  FScriptContainerElement *pFVar15;
  ForElementType<FMaterialResource_const_*> FVar16;
  EMaterialTextureParameterType EVar17;
  FMaterialResource *pFVar18;
  uint uVar19;
  FMaterialResource *pFVar20;
  FMaterialTextureParameterInfo *pFVar21;
  uint uVar22;
  undefined6 in_register_00000082;
  ulonglong uVar23;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined1 auStackY_128 [32];
  uint local_f8;
  undefined1 local_f0;
  undefined1 local_ef [7];
  ForElementType<FMaterialResource_const_*> local_e8;
  ForElementType<FMaterialResource_const_*> local_e0;
  UTexture *local_d8;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> *local_d0;
  FMaterialResource *local_c8;
  UTextureCollection *local_c0;
  undefined1 local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  UTexture *local_a8;
  UMaterial *local_a0;
  TArrayView<FMaterialTextureParameterInfo_const_,int> local_98;
  TArrayView<FMaterialTextureCollectionParameterInfo_const_,int> local_88;
  TArray<FMaterialResource_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar22 = 0;
  param_1->ArrayNum = 0;
  local_d0 = param_1;
  local_a0 = this;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_f8 = 0;
  local_e0._0_4_ = 3;
  uVar11 = local_e0._0_4_;
  local_e0._0_4_ = 3;
  if (((Type *)CONCAT62(in_register_00000082,param_2))[1] != Low) {
    TVar10 = *(Type *)CONCAT62(in_register_00000082,param_2);
    if (TVar10 == Num) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8429753030781434638>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x4f2,"QualityLevel != EMaterialQualityLevel::Num");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TVar10 = GetCurrentMaterialQualityLevelChecked();
    }
    uVar22 = (uint)TVar10;
    uStack_b4 = (uint)TVar10;
    local_b8 = 1;
    uStack_b0 = uStack_b0 & 0xffffff00;
    local_f8 = (uint)TVar10;
    uStack_ac = uStack_b4;
    uVar11 = uStack_b4;
  }
  local_e0._0_4_ = uVar11;
  uVar11 = CONCAT22(0,GMaxRHIShaderPlatform);
  local_e8._0_4_ = uVar11;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<FMaterialResource_const_*>)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 4;
  do {
    iVar3 = local_78.ArrayNum;
    uVar6 = uVar11;
    if ((int)local_e0._0_4_ < (int)uVar22) {
      uVar13 = (ulonglong)local_78.ArrayNum;
      FVar16 = (ForElementType<FMaterialResource_const_*>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FMaterialResource_const_*>)0x0
         ) {
        FVar16 = local_78.AllocatorInstance.SecondaryData;
      }
      local_e8 = (ForElementType<FMaterialResource_const_*>)((longlong)FVar16 + uVar13 * 8);
      uVar23 = uVar13;
      pTVar24 = local_d0;
      while( true ) {
        FVar7 = local_e8;
        EVar17 = Standard2D;
        local_e0 = FVar16;
        if ((int)uVar13 != (int)uVar23) {
          `TCheckedPointerIterator<FMaterialResource_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_f0);
        }
        if (FVar16 == FVar7) break;
        this_00 = *(FMaterial **)FVar16;
        do {
          FMaterial::GetUniformTextureExpressions(this_00,&local_98,EVar17);
          pFVar21 = local_98.DataPtr + local_98.ArrayNum;
          for (this_01 = local_98.DataPtr; this_01 != pFVar21; this_01 = this_01 + 1) {
            local_d8 = (UTexture *)0x0;
            FMaterialTextureParameterInfo::GetGameThreadTextureValue
                      (this_01,(UMaterialInterface *)this,this_00,&local_d8);
            if (local_d8 != (UTexture *)0x0) {
              TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                        (pTVar24,&local_d8);
            }
          }
          EVar17 = EVar17 + Cube;
        } while (EVar17 < Count);
        FMaterial::GetUniformTextureCollectionExpressions(this_00,&local_88);
        local_c8 = (FMaterialResource *)
                   ((longlong)&(local_88.DataPtr)->ParameterInfo +
                   (longlong)local_88.ArrayNum * 0x1c);
        pFVar12 = (FMaterialResource *)local_88.DataPtr;
        if ((FMaterialResource *)local_88.DataPtr != local_c8) {
          do {
            local_c0 = (UTextureCollection *)0x0;
            FMaterialTextureCollectionParameterInfo::GetGameThreadTextureCollectionValue
                      ((FMaterialTextureCollectionParameterInfo *)pFVar12,(UMaterialInterface *)this
                       ,this_00,&local_c0);
            pUVar8 = local_c0;
            pTVar24 = local_d0;
            if (local_c0 != (UTextureCollection *)0x0) {
              pFVar15 = (local_c0->Textures).AllocatorInstance.Data;
              iVar4 = (local_c0->Textures).ArrayNum;
              pFVar1 = pFVar15 + (longlong)iVar4 * 8;
              while( true ) {
                if ((pUVar8->Textures).ArrayNum != iVar4) {
                  `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_ef);
                }
                this = local_a0;
                if (pFVar15 == pFVar1) break;
                local_a8 = *(UTexture **)pFVar15;
                if (local_a8 != (UTexture *)0x0) {
                  TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                            (pTVar24,&local_a8);
                }
                pFVar15 = pFVar15 + 8;
              }
            }
            pFVar12 = (FMaterialResource *)((longlong)&pFVar12->_padding_ + 4);
            pTVar24 = local_d0;
          } while (pFVar12 != local_c8);
        }
        uVar13 = (ulonglong)(uint)local_78.ArrayNum;
        FVar16 = (ForElementType<FMaterialResource_const_*>)((longlong)local_e0 + 8);
        uVar23 = (ulonglong)(uint)iVar3;
      }
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FMaterialResource_const_*>)0x0
         ) {
        FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
      }
      return;
    }
    while( true ) {
      pFVar12 = (FMaterialResource *)0x0;
      if ((int)uVar11 < (int)uVar6) break;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[(ulonglong)uVar6 & 0xffff].
          bContainsValidPlatformInfo != 0) {
        iVar3 = (this->MaterialResources).ArrayNum;
        pFVar14 = pFVar12;
        pFVar18 = pFVar12;
        pFVar20 = pFVar12;
        if (0 < iVar3) {
          do {
            uVar19 = (uint)pFVar20;
            uVar11 = 0;
            if ((int)uVar19 < (this->MaterialResources).ArrayNum) {
              uVar11 = ~uVar19 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               uVar22 = local_f8, bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar12 = *(FMaterialResource **)
                       ((this->MaterialResources).AllocatorInstance.Data + (longlong)pFVar14 * 8);
            if (GMaxRHIShaderPlatform == (EShaderPlatform)uVar6) {
              cVar2 = (char)pFVar12->_padding_;
              if (cVar2 == (char)uVar22) break;
              if (cVar2 == '\x04') {
                pFVar18 = pFVar12;
              }
            }
            pFVar12 = pFVar18;
            pFVar14 = (FMaterialResource *)
                      ((longlong)
                       &(((FMemoryImageMaterialParameterInfo *)&pFVar14->_padding_)->Name).
                        ComparisonIndex.Value + 1);
            pFVar18 = pFVar12;
            pFVar20 = (FMaterialResource *)(ulonglong)(uVar19 + 1);
          } while ((longlong)pFVar14 < (longlong)iVar3);
        }
        local_c8 = pFVar12;
        if (pFVar12 != (FMaterialResource *)0x0) {
          TArray<FMaterialResource_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FMaterialResource_const_*_const_&>(&local_78,&local_c8);
        }
      }
      uVar11 = local_e8._0_4_;
      uVar22 = local_f8;
      uVar6 = uVar6 + 1;
    }
    uVar22 = uVar22 + 1;
    local_f8 = uVar22;
  } while( true );
}

// GetUsedTexturesAndIndices @ 147efebc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMaterial::GetUsedTexturesAndIndices
          (UMaterial *this,TArray<UTexture_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          Type param_3,EShaderPlatform param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TArrayView<FMaterialTextureParameterInfo_const_,int> *pTVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FMaterial *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FMaterial *this_00;
  FMaterialTextureParameterInfo *pFVar14;
  FMaterial *pFVar15;
  FMaterialTextureParameterInfo *this_01;
  undefined1 auStackY_158 [32];
  UTexture *local_f8;
  TArrayView<FMaterialTextureParameterInfo_const_,int> local_f0;
  UMaterial *local_e0;
  FMaterial *local_d8;
  FMaterialTextureParameterInfo **local_d0;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> *local_c8;
  FMaterialTextureParameterInfo *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FMaterialTextureParameterInfo *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FMaterialTextureParameterInfo *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FMaterialTextureParameterInfo *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FMaterialTextureParameterInfo *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FMaterialTextureParameterInfo *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FMaterialTextureParameterInfo *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar12 = 0;
  param_1->ArrayNum = 0;
  local_e0 = this;
  local_c8 = param_1;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  piVar1 = &param_2->ArrayNum;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum);
  *piVar1 = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (((param_3 == Num) || (param_4 == SP_NumPlatforms)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("QualityLevel != EMaterialQualityLevel::Num && InShaderPlatform != EShaderPlatform::SP_NumPlatforms"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x562,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (this->MaterialResources).ArrayNum;
  pFVar10 = (FMaterial *)0x0;
  this_00 = pFVar10;
  pFVar15 = pFVar10;
  if (0 < iVar7) {
    do {
      uVar4 = (uint)pFVar10;
      uVar8 = 0;
      if ((int)uVar4 < (this->MaterialResources).ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_d8 = *(FMaterial **)((this->MaterialResources).AllocatorInstance.Data + lVar12 * 8);
      this_00 = pFVar15;
      if (GMaxRHIShaderPlatform == param_4) {
        this_00 = local_d8;
        if (local_d8->QualityLevel == param_3) break;
        this_00 = pFVar15;
        if (local_d8->QualityLevel == Num) {
          this_00 = local_d8;
        }
      }
      pFVar10 = (FMaterial *)(ulonglong)(uVar4 + 1);
      lVar12 = lVar12 + 1;
      this = local_e0;
      pFVar15 = this_00;
    } while (lVar12 < iVar7);
  }
  if (this_00 != (FMaterial *)0x0) {
    local_b8 = (FMaterialTextureParameterInfo *)0x0;
    iStack_b0 = 0;
    local_a8 = (FMaterialTextureParameterInfo *)0x0;
    iStack_a0 = 0;
    local_98 = (FMaterialTextureParameterInfo *)0x0;
    iStack_90 = 0;
    local_88 = (FMaterialTextureParameterInfo *)0x0;
    iStack_80 = 0;
    local_78 = (FMaterialTextureParameterInfo *)0x0;
    iStack_70 = 0;
    local_68 = (FMaterialTextureParameterInfo *)0x0;
    iStack_60 = 0;
    local_58 = (FMaterialTextureParameterInfo *)0x0;
    iStack_50 = 0;
    local_d8 = this_00;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,Standard2D);
    local_b8 = pTVar6->DataPtr;
    iVar7 = pTVar6->ArrayNum;
    uStack_ac = *(undefined4 *)&pTVar6->field_0xc;
    iStack_b0 = iVar7;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,Cube);
    local_a8 = pTVar6->DataPtr;
    iStack_a0 = pTVar6->ArrayNum;
    uStack_9c = *(undefined4 *)&pTVar6->field_0xc;
    iVar7 = iVar7 + iStack_a0;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,Array2D);
    local_98 = pTVar6->DataPtr;
    iStack_90 = pTVar6->ArrayNum;
    uStack_8c = *(undefined4 *)&pTVar6->field_0xc;
    iVar7 = iVar7 + iStack_90;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,ArrayCube);
    local_88 = pTVar6->DataPtr;
    iStack_80 = pTVar6->ArrayNum;
    uStack_7c = *(undefined4 *)&pTVar6->field_0xc;
    iVar7 = iVar7 + iStack_80;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,Volume);
    local_78 = pTVar6->DataPtr;
    iStack_70 = pTVar6->ArrayNum;
    uStack_6c = *(undefined4 *)&pTVar6->field_0xc;
    iVar7 = iVar7 + iStack_70;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,Virtual);
    local_68 = pTVar6->DataPtr;
    iStack_60 = pTVar6->ArrayNum;
    uStack_5c = *(undefined4 *)&pTVar6->field_0xc;
    iVar7 = iVar7 + iStack_60;
    pTVar6 = FMaterial::GetUniformTextureExpressions(this_00,&local_f0,SparseVolume);
    local_58 = pTVar6->DataPtr;
    iStack_50 = pTVar6->ArrayNum;
    uStack_4c = *(undefined4 *)&pTVar6->field_0xc;
    uVar8 = iVar7 + iStack_50;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,*piVar1)
    ;
    *piVar1 = 0;
    if (param_2->ArrayMax != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar8,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    uVar8 = 0;
    local_d0 = &local_b8;
    do {
      this_01 = *local_d0;
      pFVar14 = this_01 + *(int *)(local_d0 + 1);
      if (this_01 != pFVar14) {
        pFVar13 = (FScriptContainerElement *)&this_01->TextureIndex;
        do {
          local_f8 = (UTexture *)0x0;
          FMaterialTextureParameterInfo::GetGameThreadTextureValue
                    (this_01,(UMaterialInterface *)local_e0,this_00,&local_f8);
          if (local_f8 != (UTexture *)0x0) {
            uVar4 = TArray<UTexture_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UTexture_*_const_&>(local_c8,&local_f8);
            if (*piVar1 <= (int)uVar4) {
              iVar9 = (uVar4 - *piVar1) + 1;
              iVar7 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax)
              ;
              memset((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10,0,
                     (longlong)iVar9 << 4);
            }
            uVar5 = 0;
            if ((int)uVar4 < *piVar1) {
              uVar5 = ~uVar4 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar11 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10;
            if (((*(FScriptContainerElement **)&pFVar11->field_0x0 <= pFVar13) &&
                (pFVar13 < *(FScriptContainerElement **)&pFVar11->field_0x0 +
                           (longlong)*(int *)(pFVar11 + 0xc) * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar7 = *(int *)&pFVar11[8].field_0x0;
            if (iVar7 == *(int *)(pFVar11 + 0xc)) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
            }
            *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
            *(undefined4 *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar7 * 4)
                 = *(undefined4 *)pFVar13;
            this_00 = local_d8;
          }
          this_01 = this_01 + 1;
          pFVar13 = pFVar13 + 0x1c;
        } while (this_01 != pFVar14);
      }
      uVar8 = uVar8 + 1;
      local_d0 = local_d0 + 2;
    } while (uVar8 < 7);
  }
  return;
}

// HasAmbientOcclusionConnected @ 147eff5b0

bool __thiscall UMaterial::HasAmbientOcclusionConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d8) >> 0x12) & 1);
}

// HasAnisotropyConnected @ 147eff600

bool __thiscall UMaterial::HasAnisotropyConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d8) >> 9) & 1);
}

// HasBaseColorConnected @ 147eff650

bool __thiscall UMaterial::HasBaseColorConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)(*(byte *)(lVar1 + 0x4d8) >> 5 & 1);
}

// HasCustomPrimitiveData @ 147eff690

bool __thiscall UMaterial::HasCustomPrimitiveData(UMaterial *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar3 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  piVar4 = *(int **)(lVar3 + 800);
  iVar2 = *(int *)(lVar3 + 0x328);
  piVar1 = piVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x328) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar4 == piVar1) break;
    if (*piVar4 != -1) {
      return true;
    }
    piVar4 = piVar4 + 1;
  }
  piVar4 = *(int **)(lVar3 + 0x330);
  iVar2 = *(int *)(lVar3 + 0x338);
  piVar1 = piVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x338) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar4 == piVar1) break;
    if (*piVar4 != -1) {
      return true;
    }
    piVar4 = piVar4 + 1;
  }
  return false;
}

// HasCustomizedUVs @ 147eff750

bool __thiscall UMaterial::HasCustomizedUVs(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d0) >> 0xc) & 1);
}

// HasDisplacementConnected @ 147eff7a0

bool __thiscall UMaterial::HasDisplacementConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)((ulonglong)*(undefined8 *)(lVar1 + 0x4d8) >> 0x20) & 1);
}

// HasEmissiveColorConnected @ 147eff7f0

bool __thiscall UMaterial::HasEmissiveColorConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)(*(byte *)(lVar1 + 0x4d8) & 1);
}

// HasMeshPaintTexture @ 147eff850

bool __thiscall UMaterial::HasMeshPaintTexture(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d0) >> 0xd) & 1);
}

// HasMetallicConnected @ 147eff8a0

bool __thiscall UMaterial::HasMetallicConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)(*(byte *)(lVar1 + 0x4d8) >> 6 & 1);
}

// HasNormalConnected @ 147eff8f0

bool __thiscall UMaterial::HasNormalConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d8) >> 10) & 1);
}

// HasPixelAnimation @ 147eff960

bool __thiscall UMaterial::HasPixelAnimation(UMaterial *this)

{
  return this->bHasPixelAnimation;
}

// HasPixelDepthOffsetConnected @ 147eff990

bool __thiscall UMaterial::HasPixelDepthOffsetConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)((uint)*(undefined4 *)(lVar1 + 0x4d8) >> 0x1c) & 1);
}

// HasRoughnessConnected @ 147eff9f0

bool __thiscall UMaterial::HasRoughnessConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)((uint)*(undefined4 *)(lVar1 + 0x4d8) >> 8) & 1);
}

// HasSpecularConnected @ 147effab0

bool __thiscall UMaterial::HasSpecularConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)(*(byte *)(lVar1 + 0x4d8) >> 7);
}

// HasSubstrateFrontMaterialConnected @ 147effaf0

bool __thiscall UMaterial::HasSubstrateFrontMaterialConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)((uint)*(undefined4 *)(lVar1 + 0x4d8) >> 0x1e) & 1);
}

// HasSubstrateRoughnessTracking @ 147effb40

bool __thiscall UMaterial::HasSubstrateRoughnessTracking(UMaterial *this)

{
  return this->bSubstrateRoughnessTracking;
}

// HasSurfaceThicknessConnected @ 147effb60

bool __thiscall UMaterial::HasSurfaceThicknessConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return SUB41((uint)*(undefined4 *)(lVar1 + 0x4d8) >> 0x1f,0);
}

// HasVertexInterpolator @ 147effbb0

bool __thiscall UMaterial::HasVertexInterpolator(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d0) >> 0xb) & 1);
}

// HasVertexPositionOffsetConnected @ 147effc00

bool __thiscall UMaterial::HasVertexPositionOffsetConnected(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d8) >> 0xc) & 1);
}

// IsCompatibleWithLumenCardSharing @ 147f026c0

bool __thiscall UMaterial::IsCompatibleWithLumenCardSharing(UMaterial *this)

{
  return this->bCompatibleWithLumenCardSharing;
}

// IsCompilingOrHadCompileError @ 147f026e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UMaterial::IsCompilingOrHadCompileError(UMaterial *this,EShaderPlatform param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x390))(this,param_1,4);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    return false;
  }
  return true;
}

// IsCompilingOrHadCompileError @ 147f02710

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall UMaterial::IsCompilingOrHadCompileError(UMaterial *this,Type param_1)

{
  longlong lVar1;
  EShaderPlatform EVar2;
  
  if (param_1 == Num) {
    EVar2 = SP_NumPlatforms;
  }
  else {
    EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  lVar1 = (**(code **)(this->_padding_ + 0x390))(this,EVar2,4);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    return false;
  }
  return true;
}

// IsComplete @ 147f02760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall UMaterial::IsComplete(UMaterial *this)

{
  Type TVar1;
  EShaderPlatform EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FCachedSystemScalabilityCVars *pFVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar12 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar12,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) {
    return true;
  }
  pFVar10 = GetCachedScalabilityCVars();
  TVar1 = pFVar10->MaterialQualityLevel;
  uVar7 = UMaterialInterface::GetFeatureLevelsToCompileForRendering((UMaterialInterface *)this);
  if (uVar7 == 0) {
    return true;
  }
  do {
    uVar13 = -uVar7 & uVar7;
    uVar7 = uVar7 & uVar7 - 1;
    iVar3 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar8 = 0;
    if (uVar13 != 0) {
      iVar8 = iVar3;
    }
    lVar11 = 0;
    uVar13 = 0;
    lVar14 = 0;
    EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar8];
    iVar3 = (this->MaterialResources).ArrayNum;
    lVar15 = lVar11;
    if (0 < iVar3) {
      do {
        uVar9 = 0;
        if ((int)uVar13 < (this->MaterialResources).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar11 = *(longlong *)((this->MaterialResources).AllocatorInstance.Data + lVar14 * 8);
        if (GMaxRHIShaderPlatform == EVar2) {
          if (*(Type *)(lVar11 + 0x20) == TVar1) break;
          if (*(Type *)(lVar11 + 0x20) == Num) {
            lVar15 = lVar11;
          }
        }
        lVar11 = lVar15;
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        lVar15 = lVar11;
      } while (lVar14 < iVar3);
    }
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x2c) == '\0')) {
      return false;
    }
    if (uVar7 == 0) {
      return true;
    }
  } while( true );
}

// IsDefaultMaterial @ 147f02970

bool __thiscall UMaterial::IsDefaultMaterial(UMaterial *this)

{
  UMaterial *pUVar1;
  bool bVar2;
  UMaterial **ppUVar3;
  
  bVar2 = false;
  ppUVar3 = GDefaultMaterials;
  do {
    if (0x15521492f < (longlong)ppUVar3) {
      return bVar2;
    }
    pUVar1 = *ppUVar3;
    bVar2 = this == pUVar1;
    ppUVar3 = ppUVar3 + 1;
  } while (this != pUVar1);
  return bVar2;
}

// IsDeferredDecal @ 147f029b0

bool __thiscall UMaterial::IsDeferredDecal(UMaterial *this)

{
  return (this->MaterialDomain).Value == '\x01';
}

// IsDisplacementFadeEnabled @ 147f02a00

bool __thiscall UMaterial::IsDisplacementFadeEnabled(UMaterial *this)

{
  return this->bEnableDisplacementFade;
}

// IsDitheredLODTransition @ 147f02a40

bool __thiscall UMaterial::IsDitheredLODTransition(UMaterial *this)

{
  return this->DitheredLODTransition;
}

// IsMasked @ 147f02a90

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterial::IsMasked(UMaterial *this)

{
  bool bVar1;
  char cVar2;
  EBlendMode EVar3;
  
  EVar3 = (**(code **)(this->_padding_ + 0x460))();
  bVar1 = IsMaskedBlendMode(EVar3);
  if (bVar1) {
    return true;
  }
  EVar3 = (**(code **)(this->_padding_ + 0x460))(this);
  bVar1 = IsTranslucentOnlyBlendMode(EVar3);
  if ((bVar1) && (cVar2 = (**(code **)(this->_padding_ + 0x458))(this), cVar2 != '\0')) {
    return true;
  }
  return false;
}

// IsMobileSeparateTranslucencyEnabled @ 147f02b00

bool __thiscall UMaterial::IsMobileSeparateTranslucencyEnabled(UMaterial *this)

{
  char cVar1;
  
  if (this->bEnableMobileSeparateTranslucency != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0x4c0))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(this->_padding_ + 0x4b8))(this);
      if (cVar1 == '\0') {
        return true;
      }
    }
  }
  return false;
}

// IsPostProcessMaterial @ 147f02b70

bool __thiscall UMaterial::IsPostProcessMaterial(UMaterial *this)

{
  return (this->MaterialDomain).Value == '\x04';
}

// IsPostProcessMaterialOutputingAlpha @ 147f02b90

bool __thiscall UMaterial::IsPostProcessMaterialOutputingAlpha(UMaterial *this)

{
  if (((this->MaterialDomain).Value == '\x04') &&
     ((this->BlendableOutputAlpha != 0 || ((this->BlendableLocation).Value == '\x05')))) {
    return true;
  }
  return false;
}

// IsPropertyActive @ 147f02bc0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterial::IsPropertyActive(UMaterial *this,EMaterialProperty param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  FMaterialShadingModelField FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EBlendMode EVar9;
  ushort *puVar10;
  bool bVar11;
  bool local_res8;
  undefined1 local_46 [14];
  
  bVar11 = true;
  bVar5 = Substrate::IsSubstrateEnabled();
  if ((bVar5) && (bVar5 = Substrate::IsHiddenMaterialAssetConversionEnabled(), !bVar5)) {
    bVar11 = false;
    switch(param_1) {
    case MP_Opacity:
    case MP_OpacityMask:
    case MP_WorldPositionOffset:
    case MP_AmbientOcclusion:
    case MP_Refraction:
    case MP_PixelDepthOffset:
    case MP_FrontMaterial:
    case MP_SurfaceThickness:
    case MP_Displacement:
      bVar11 = true;
    default:
      if (param_1 - MP_CustomizedUVs0 < 8) {
        if ((this->bUseMaterialAttributes == '\0') &&
           (this->NumCustomizedUVs <= (int)(param_1 - MP_CustomizedUVs0))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
      break;
    case MP_MaterialAttributes:
      bVar11 = this->bUseMaterialAttributes;
    }
  }
  bVar5 = (bool)(**(code **)(this->_padding_ + 0x480))(this);
  bVar6 = (bool)(**(code **)(this->_padding_ + 0x498))(this);
  bVar7 = (bool)(**(code **)(this->_padding_ + 0x470))(this);
  if (((this->MaterialDomain).Value == '\x04') &&
     ((this->BlendableOutputAlpha != 0 || ((this->BlendableLocation).Value == '\x05')))) {
    local_res8 = true;
  }
  else {
    local_res8 = false;
  }
  bVar8 = (bool)(**(code **)(this->_padding_ + 0x578))(this);
  bVar2 = (this->RefractionMethod).Value;
  bVar3 = (this->TranslucencyLightingMode).Value;
  puVar10 = (ushort *)(**(code **)(this->_padding_ + 0x468))(this,local_46);
  FVar4.ShadingModelField = *puVar10;
  EVar9 = (**(code **)(this->_padding_ + 0x460))(this);
  bVar5 = IsPropertyActive_Internal
                    (param_1,(uint)(this->MaterialDomain).Value,EVar9,FVar4,(uint)bVar3,(uint)bVar2,
                     bVar8,local_res8,this->bUsesDistortion,bVar7,bVar6,bVar5,bVar11,false);
  return bVar5;
}

// IsPropertyActiveInDerived @ 147f02dd0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall
UMaterial::IsPropertyActiveInDerived
          (UMaterial *this,EMaterialProperty param_1,UMaterialInterface *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  FMaterialShadingModelField FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EBlendMode EVar9;
  ushort *puVar10;
  bool bVar11;
  bool local_res8;
  undefined1 local_46 [14];
  
  bVar11 = true;
  bVar5 = Substrate::IsSubstrateEnabled();
  if ((bVar5) && (bVar5 = Substrate::IsHiddenMaterialAssetConversionEnabled(), !bVar5)) {
    bVar11 = false;
    switch(param_1) {
    case MP_Opacity:
    case MP_OpacityMask:
    case MP_WorldPositionOffset:
    case MP_AmbientOcclusion:
    case MP_Refraction:
    case MP_PixelDepthOffset:
    case MP_FrontMaterial:
    case MP_SurfaceThickness:
    case MP_Displacement:
      bVar11 = true;
    default:
      if (param_1 - MP_CustomizedUVs0 < 8) {
        if ((this->bUseMaterialAttributes == '\0') &&
           (this->NumCustomizedUVs <= (int)(param_1 - MP_CustomizedUVs0))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
      break;
    case MP_MaterialAttributes:
      bVar11 = this->bUseMaterialAttributes;
    }
  }
  bVar5 = (bool)(**(code **)(this->_padding_ + 0x480))(this);
  bVar6 = (bool)(**(code **)(this->_padding_ + 0x498))(this);
  bVar7 = (bool)(**(code **)(param_2->_padding_ + 0x470))(param_2);
  if (((this->MaterialDomain).Value == '\x04') &&
     ((this->BlendableOutputAlpha != 0 || ((this->BlendableLocation).Value == '\x05')))) {
    local_res8 = true;
  }
  else {
    local_res8 = false;
  }
  bVar8 = (bool)(**(code **)(param_2->_padding_ + 0x578))(param_2);
  bVar2 = (this->RefractionMethod).Value;
  bVar3 = (this->TranslucencyLightingMode).Value;
  puVar10 = (ushort *)(**(code **)(param_2->_padding_ + 0x468))(param_2,local_46);
  FVar4.ShadingModelField = *puVar10;
  EVar9 = (**(code **)(param_2->_padding_ + 0x460))(param_2);
  bVar5 = IsPropertyActive_Internal
                    (param_1,(uint)(this->MaterialDomain).Value,EVar9,FVar4,(uint)bVar3,(uint)bVar2,
                     bVar8,local_res8,this->bUsesDistortion,bVar7,bVar6,bVar5,bVar11,false);
  return bVar5;
}

// IsPropertyConnected @ 147f03880

bool __thiscall UMaterial::IsPropertyConnected(UMaterial *this,EMaterialProperty param_1)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(ulonglong *)(lVar1 + 0x4d8) >> ((byte)param_1 & 0x3f)) & 1);
}

// IsPropertyRelevantForMobile @ 147f038c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl UMaterial::IsPropertyRelevantForMobile(EMaterialProperty param_1)

{
  FMobileProperty *pFVar1;
  
  pFVar1 = MaterialImpl::GMobileRelevantMaterialProperties;
  do {
    if (pFVar1->Property == param_1) {
      return true;
    }
    pFVar1 = pFVar1 + 1;
  } while (pFVar1 != (FMobileProperty *)
                     &
                     _Value___TStructOpsFakeVTableForTypeImpl_UFMaterialAggregateAttribute___0A__MP6AXPEAX_Z1___Construct_UFMaterialAggregateAttribute___Private_CoreUObject_UE__YAX0_Z_MP6AX0_Z1___ConstructForTests_UFMaterialAggregateAttribute___234_YAX0_Z_MP6AX0_Z1___Destruct_UFMaterialAggregateAttribute___234_YAX0_Z_MP6A_N0PEBXH_Z1___Copy_UFMaterialAggregateAttribute___234_YA_N01H_Z_Private_CoreUObject_UE__2QEBUFStructOpsFakeVTable_234_EB
          );
  return false;
}

// IsPropertySupported @ 147f038f0

bool __thiscall UMaterial::IsPropertySupported(UMaterial *this,EMaterialProperty param_1)

{
  bool bVar1;
  
  bVar1 = Substrate::IsSubstrateEnabled();
  if ((bVar1) && (bVar1 = Substrate::IsHiddenMaterialAssetConversionEnabled(), !bVar1)) {
    bVar1 = false;
    switch(param_1) {
    case MP_Opacity:
    case MP_OpacityMask:
    case MP_WorldPositionOffset:
    case MP_AmbientOcclusion:
    case MP_Refraction:
    case MP_PixelDepthOffset:
    case MP_FrontMaterial:
    case MP_SurfaceThickness:
    case MP_Displacement:
      bVar1 = true;
      break;
    case MP_MaterialAttributes:
      return this->bUseMaterialAttributes;
    }
    if (7 < param_1 - MP_CustomizedUVs0) {
      return bVar1;
    }
    if ((this->bUseMaterialAttributes == '\0') &&
       (this->NumCustomizedUVs <= (int)(param_1 - MP_CustomizedUVs0))) {
      return false;
    }
  }
  return true;
}

// IsReadyForFinishDestroy @ 147f039d0

bool __thiscall UMaterial::IsReadyForFinishDestroy(UMaterial *this)

{
  bool bVar1;
  
  bVar1 = UMaterialInterface::IsReadyForFinishDestroy((UMaterialInterface *)this);
  if ((bVar1) && (this->ReleasedByRT != (FThreadSafeBool)0x0)) {
    return true;
  }
  return false;
}

// IsShadingModelFromMaterialExpression @ 147f03a40

bool __thiscall UMaterial::IsShadingModelFromMaterialExpression(UMaterial *this)

{
  return (this->ShadingModel).Value == '\x0e';
}

// IsTessellationEnabled @ 147f03ad0

bool __thiscall UMaterial::IsTessellationEnabled(UMaterial *this)

{
  return this->bEnableTessellation;
}

// IsThinSurface @ 147f03af0

bool __thiscall UMaterial::IsThinSurface(UMaterial *this)

{
  return this->bIsThinSurface;
}

// IsTranslucencyVelocityFromDepth @ 147f03b40

bool __thiscall UMaterial::IsTranslucencyVelocityFromDepth(UMaterial *this)

{
  return this->bIsTranslucencyVelocityFromDepth;
}

// IsTranslucencyWritingCustomDepth @ 147f03b70

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterial::IsTranslucencyWritingCustomDepth(UMaterial *this)

{
  bool bVar1;
  EBlendMode EVar2;
  
  if (this->AllowTranslucentCustomDepthWrites != '\0') {
    EVar2 = (**(code **)(this->_padding_ + 0x460))();
    bVar1 = IsTranslucentBlendMode(EVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsTranslucencyWritingFrontLayerTransparency @ 147f03bc0

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterial::IsTranslucencyWritingFrontLayerTransparency(UMaterial *this)

{
  uchar uVar1;
  bool bVar2;
  EBlendMode EVar3;
  
  EVar3 = (**(code **)(this->_padding_ + 0x460))();
  bVar2 = IsTranslucentBlendMode(EVar3);
  if ((bVar2) &&
     (((uVar1 = (this->TranslucencyLightingMode).Value, uVar1 == '\x04' || (uVar1 == '\x05')) &&
      (this->bAllowFrontLayerTranslucency != '\0')))) {
    return true;
  }
  return false;
}

// IsTranslucencyWritingVelocity @ 147f03c20

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall UMaterial::IsTranslucencyWritingVelocity(UMaterial *this)

{
  bool bVar1;
  EBlendMode EVar2;
  
  if (this->bOutputTranslucentVelocity != '\0') {
    EVar2 = (**(code **)(this->_padding_ + 0x460))();
    bVar1 = IsTranslucentBlendMode(EVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsTwoSided @ 147f03c60

bool __thiscall UMaterial::IsTwoSided(UMaterial *this)

{
  return this->TwoSided;
}

// IsUIMaterial @ 147f03c80

bool __thiscall UMaterial::IsUIMaterial(UMaterial *this)

{
  return (this->MaterialDomain).Value == '\x05';
}

// IsUsageFlagDirty @ 147f03ca0

bool __thiscall UMaterial::IsUsageFlagDirty(UMaterial *this,EMaterialUsage param_1)

{
  return false;
}

// LogMaterialsAndTextures @ 147f03f40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UMaterial::LogMaterialsAndTextures(UMaterial *this,FOutputDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  int iVar3;
  FMaterial *this_00;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  wchar_t *pwVar10;
  Type TVar11;
  FMaterialTextureParameterInfo *this_01;
  ForAnyElementType FVar12;
  uint uVar13;
  FMaterialTextureParameterInfo *pFVar14;
  EShaderPlatform EVar15;
  EMaterialTextureParameterType EVar16;
  undefined1 local_res8 [8];
  FOutputDevice *local_res10;
  int local_res18;
  UTexture *local_res20;
  FName local_98;
  FName local_90;
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  TArrayView<FMaterialTextureParameterInfo_const_,int> local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  lVar8 = (**(code **)(this->_padding_ + 0x180))();
  pFVar9 = GetCachedScalabilityCVars();
  TVar2 = pFVar9->MaterialQualityLevel;
  TVar11 = GMaxRHIFeatureLevel;
  if (lVar8 != 0) {
    TVar11 = (uint)*(byte *)(lVar8 + 0x188);
  }
  local_98 = (FName)this->_padding_;
  ::FName::ToString(&local_98,&local_78);
  if ((0xff < (uint)param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x279,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FOutputDevice::LogfImpl(local_res10,L"%sMaterial: %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (TVar11 == Num) {
    EVar15 = SP_NumPlatforms;
  }
  else {
    EVar15 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar11];
  }
  iVar3 = (this->MaterialResources).ArrayNum;
  uVar13 = 0;
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar13 < (this->MaterialResources).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(FMaterial **)((this->MaterialResources).AllocatorInstance.Data + lVar8 * 8);
      if ((GMaxRHIShaderPlatform == EVar15) && (this_00->QualityLevel == TVar2)) {
        if (this_00 != (FMaterial *)0x0) {
          bVar6 = FMaterial::HasValidGameThreadShaderMap(this_00);
          if (bVar6) {
            EVar16 = Standard2D;
            local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_88.ArrayNum = 0;
            local_88.ArrayMax = 0;
            do {
              FMaterial::GetUniformTextureExpressions(this_00,&local_58,EVar16);
              pFVar14 = local_58.DataPtr + local_58.ArrayNum;
              iVar3 = local_res18;
              FVar12.Data = local_88.AllocatorInstance.Data;
              for (this_01 = local_58.DataPtr; local_res18 = iVar3,
                  local_88.AllocatorInstance.Data = FVar12.Data, this_01 != pFVar14;
                  this_01 = this_01 + 1) {
                local_res20 = (UTexture *)0x0;
                FMaterialTextureParameterInfo::GetGameThreadTextureValue
                          (this_01,(UMaterialInterface *)this,this_00,&local_res20);
                if (local_res20 != (UTexture *)0x0) {
                  TArray<UTexture_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UTexture_*_const_&>
                            (&local_88,&local_res20);
                }
                iVar3 = local_res18;
                FVar12.Data = local_88.AllocatorInstance.Data;
              }
              EVar16 = EVar16 + Cube;
            } while (EVar16 < Count);
            iVar5 = local_88.ArrayNum;
            pFVar1 = FVar12.Data + (longlong)local_88.ArrayNum * 8;
            while( true ) {
              if (local_88.ArrayNum != iVar5) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res8);
              }
              if (FVar12.Data == pFVar1) break;
              if (*(longlong *)FVar12.Data != 0) {
                local_90 = *(FName *)(*(longlong *)FVar12.Data + 0x18);
                ::FName::ToString(&local_90,&local_68);
                if (((iVar3 + 1 < 0) || (0xff < iVar3 + 1)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NumTabs >= 0 && NumTabs <= TCStringSpcHelper<T>::MAX_TABS",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                       ,0x279,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FOutputDevice::LogfImpl(local_res10,L"%s%s");
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
              }
              FVar12.Data = FVar12.Data + 8;
            }
            if (local_88.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_88.AllocatorInstance.Data);
            return;
          }
          TCString<wchar_t>::Tab(local_res18 + 1);
          pwVar10 = L"%sNo Textures : Invalid GameThread ShaderMap";
          goto LAB_147f040e2;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  TCString<wchar_t>::Tab(local_res18 + 1);
  pwVar10 = L"%sNo Textures : Invalid MaterialResource";
LAB_147f040e2:
  FOutputDevice::LogfImpl(local_res10,pwVar10);
  return;
}

// MarkUsageFlagDirty @ 147f042b0

void __thiscall
UMaterial::MarkUsageFlagDirty(UMaterial *this,EMaterialUsage param_1,bool param_2,bool param_3)

{
  return;
}

// NeedsSetMaterialUsage_Concurrent @ 147f04380

bool __thiscall
UMaterial::NeedsSetMaterialUsage_Concurrent(UMaterial *this,bool *param_1,EMaterialUsage param_2)

{
  uchar uVar1;
  uint uVar2;
  bool bVar3;
  
  *param_1 = true;
  uVar1 = (this->MaterialDomain).Value;
  if ((uVar1 == '\0') || ((uVar1 - 1 & 0xfd) == 0)) {
    bVar3 = GetUsageByFlag(this,param_2);
    if ((!bVar3) &&
       ((this->bUsedAsSpecialEngineMaterial == '\0' &&
        (uVar2 = this->UsageFlagWarnings, *param_1 = false,
        (1 << ((byte)param_2 & 0x1f) & uVar2) == 0)))) {
      return true;
    }
  }
  else {
    *param_1 = false;
  }
  return false;
}

// NumSpecularProfile_Internal @ 147f04410

uint __thiscall UMaterial::NumSpecularProfile_Internal(UMaterial *this)

{
  return (uint)this->_padding_;
}

// NumSubsurfaceProfileRoot_Internal @ 147f04420

uint __thiscall UMaterial::NumSubsurfaceProfileRoot_Internal(UMaterial *this)

{
  return (uint)this->_padding_;
}

// OverrideTexture @ 147f04760

void __thiscall
UMaterial::OverrideTexture(UMaterial *this,UTexture *param_1,UTexture *param_2,Type param_3)

{
  return;
}

// PostDuplicate @ 147f047b0

void __thiscall UMaterial::PostDuplicate(UMaterial *this,bool param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  UMaterialInterface::PostDuplicate((UMaterialInterface *)this,param_1);
  pTVar1 = CVarMaterialsDuplicateVerbatim.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_147f047e4;
    }
  }
  lVar3 = 0;
LAB_147f047e4:
  if (pTVar1->ShadowedValue[lVar3] == false) {
    FWindowsPlatformMisc::CreateGuid(&this->StateId);
  }
  return;
}

// PostInitProperties @ 147f04810

void __thiscall UMaterial::PostInitProperties(UMaterial *this)

{
  FDefaultMaterialInstance *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res8,Materials,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Materials,true);
  UMaterialInterface::PostInitProperties((UMaterialInterface *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = ::operator_new(200);
    if (this_00 != (FDefaultMaterialInstance *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)this_00,&local_18);
      this_00->Material = this;
      this_00->_padding_ = (longlong)&___7FDefaultMaterialInstance__6B_;
    }
    this->DefaultMaterialInstance = this_00;
    FWindowsPlatformMisc::CreateGuid(&this->StateId);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (this->StateId).A = 0;
    (this->StateId).B = 0;
    (this->StateId).C = 0;
    (this->StateId).D = 0;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PostLoad @ 147f048f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall UMaterial::PostLoad(UMaterial *this)

{
  int *piVar1;
  Type TVar2;
  undefined1 uVar3;
  ushort uVar4;
  UMaterial *pUVar5;
  longlong lVar6;
  FName FVar7;
  code *pcVar8;
  double dVar9;
  UMaterialInterface **ppUVar10;
  TConsoleVariableData<int> *pTVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  char cVar17;
  EShaderPlatform EVar18;
  uint uVar19;
  UClass *pUVar20;
  longlong lVar21;
  FCachedSystemScalabilityCVars *pFVar22;
  FString *pFVar23;
  FMaterialShaderMap *pFVar24;
  FMaterialResource *this_00;
  FPackageFileVersion FVar25;
  FLinkerLoad *pFVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading> FVar28;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FMaterial *pFVar29;
  uchar uVar30;
  UMaterial **ppUVar31;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar32;
  int iVar33;
  FMaterialShaderMap *pFVar34;
  UMaterial **ppUVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  wchar_t *pwVar38;
  uint uVar39;
  wchar_t *pwVar40;
  FMaterial *pFVar41;
  FNameEntryId FVar42;
  undefined1 auStackY_218 [32];
  undefined1 local_1b7;
  undefined1 local_1b6;
  Type local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3 [3];
  FLLMScope local_1b0 [2];
  FMemScope local_1a8;
  FLLMScope local_1a0;
  int local_19c;
  FPSOPrecacheParams_u_0 local_198;
  UMaterialInstance *local_190;
  UMaterial *local_188;
  longlong local_180;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_178;
  int local_168;
  UMaterial *local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  FName local_148;
  FVertexFactoryType *local_140;
  FMemScope local_138;
  undefined1 local_130 [16];
  uint local_120;
  uint local_11c;
  FGuid *local_118;
  UMaterial **local_110;
  TArrayView<FVertexFactoryType_const_*_const,int> local_108;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  FLLMScope::FLLMScope(&local_1a0,Materials,false,None,Default,true);
  FMemScope::FMemScope(&local_138,Materials,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar14 = false;
    bVar16 = false;
  }
  else {
    bVar14 = true;
    bVar16 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4373,"MaterialPostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
               ,0x1115);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4373);
  }
  UMaterialInterface::PostLoad((UMaterialInterface *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar40 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar40,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  pwVar40 = L"";
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    FLLMScope::FLLMScope(local_1b0,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1a8,Shaders,true);
    bVar13 = IsInGameThread();
    if ((!bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                            ,0x385,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((this->LoadedMaterialResources).ArrayNum != 0) {
      if (this == (UMaterial *)0x0) {
LAB_147f04af4:
        local_190 = (UMaterialInstance *)0x0;
        if (this == (UMaterial *)0x0) {
          pFVar23 = GetTypeName<UMaterial>(&local_d8);
          if ((pFVar23->Data).ArrayNum != 0) {
            pwVar40 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar40);
        }
        pUVar20 = GetPrivateStaticClass();
        iVar33 = (int)pUVar20->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar33) ||
           (local_188 = this,
           (longlong *)
           *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar33 * 8) !=
           &pUVar20->_padding_)) {
          pFVar23 = GetTypeName<UMaterial>(&local_c8);
          if ((pFVar23->Data).ArrayNum == 0) {
            pwVar38 = L"";
          }
          else {
            pwVar38 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
          pFVar23 = GetFullNameForCastLogError<UMaterialInterface>
                              (&local_b8,(UMaterialInterface *)this);
          if ((pFVar23->Data).ArrayNum != 0) {
            pwVar40 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar40,pwVar38);
        }
      }
      else {
        pUVar20 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        iVar33 = (int)pUVar20->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar33) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar33 * 8) !=
            &pUVar20->_padding_)) goto LAB_147f04af4;
        local_188 = UMaterialInterface::GetBaseMaterial((UMaterialInterface *)this);
        local_190 = (UMaterialInstance *)this;
      }
      iVar33 = (this->LoadedMaterialResources).ArrayNum;
      pFVar29 = (FMaterial *)(this->LoadedMaterialResources).AllocatorInstance.Data;
      pFVar41 = (FMaterial *)((longlong)pFVar29 + (longlong)iVar33 * 0x160);
      while( true ) {
        if ((this->LoadedMaterialResources).ArrayNum != iVar33) {
          local_1b6 = 0;
          `TCheckedPointerIterator<FMaterialResource,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1b6);
        }
        pTVar11 = CVarDiscardUnusedQualityLevels.Ref;
        if (pFVar29 == pFVar41) break;
        FMaterial::RegisterInlineShaderMap(pFVar29,true);
        pFVar29 = (FMaterial *)&pFVar29[5].QualityLevel;
      }
      bVar13 = IsInParallelGameThread();
      if ((bVar13) || (bVar13 = IsInGameThread(), bVar13)) {
        lVar21 = 0;
      }
      else {
        lVar21 = 4;
      }
      local_19c = *(int *)((longlong)pTVar11->ShadowedValue + lVar21);
      pFVar22 = GetCachedScalabilityCVars();
      iVar12 = local_19c;
      iVar33 = (this->LoadedMaterialResources).ArrayNum;
      uVar39 = 0;
      local_1b5 = pFVar22->MaterialQualityLevel;
      if (0 < iVar33) {
        local_180 = 0;
        do {
          lVar21 = local_180;
          uVar19 = 0;
          if ((int)uVar39 < iVar33) {
            uVar19 = ~uVar39 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar34 = *(FMaterialShaderMap **)
                     ((this->LoadedMaterialResources).AllocatorInstance.Data + lVar21 + 0x10);
          if (pFVar34 != (FMaterialShaderMap *)0x0) {
            if ((FShaderMapContent *)pFVar34->_padding_ == (FShaderMapContent *)0x0) {
              EVar18 = SP_NumPlatforms;
            }
            else {
              EVar18 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar34->_padding_)
              ;
            }
            if (EVar18 == GMaxRHIShaderPlatform) {
              TVar2 = (pFVar34->ShaderMapId).QualityLevel;
              if ((GRHIGlobals.ShaderPlatformForFeatureLevel
                   [(int)(pFVar34->ShaderMapId).FeatureLevel] != GMaxRHIShaderPlatform) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("GRHIGlobals.ShaderPlatformForFeatureLevel[LoadedFeatureLevel] == GMaxRHIShaderPlatform"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                                      ,0x3ad,L""), bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (((iVar12 == 0) || (TVar2 == local_1b5)) || (TVar2 == Num)) {
                if ((GODSCManager != (FODSCManager *)0x0) &&
                   (GODSCManager->Thread != (FODSCThread *)0x0)) {
                  pFVar23 = UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)this,&local_e8,(UObject *)0x0);
                  pFVar24 = FODSCManager::FindMaterialShaderMap(pFVar23,&pFVar34->ShaderMapId);
                  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                  }
                  lVar21 = local_180;
                  if (pFVar24 != (FMaterialShaderMap *)0x0) {
                    pFVar34 = pFVar24;
                  }
                }
                if ((FShaderMapContent *)pFVar34->_padding_ == (FShaderMapContent *)0x0) {
                  EVar18 = SP_NumPlatforms;
                }
                else {
                  EVar18 = FShaderMapContent::GetShaderPlatform
                                     ((FShaderMapContent *)pFVar34->_padding_);
                }
                this_00 = FindOrCreateMaterialResource
                                    (&this->MaterialResources,local_188,local_190,EVar18,TVar2);
                FMaterial::SetInlineShaderMap((FMaterial *)this_00,pFVar34);
              }
            }
          }
          iVar33 = (this->LoadedMaterialResources).ArrayNum;
          local_180 = lVar21 + 0x160;
          uVar39 = uVar39 + 1;
          bVar14 = bVar16;
        } while ((int)uVar39 < iVar33);
      }
    }
    FMemScope::~FMemScope(&local_1a8);
    FLLMScope::~FLLMScope(local_1b0);
  }
  else {
    iVar33 = (this->LoadedMaterialResources).ArrayNum;
    pFVar29 = (FMaterial *)(this->LoadedMaterialResources).AllocatorInstance.Data;
    pFVar41 = (FMaterial *)((longlong)pFVar29 + (longlong)iVar33 * 0x160);
    while( true ) {
      if ((this->LoadedMaterialResources).ArrayNum != iVar33) {
        local_1b7 = 0;
        `TCheckedPointerIterator<FMaterialResource,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1b7);
      }
      if (pFVar29 == pFVar41) break;
      FMaterial::DiscardShaderMap(pFVar29);
      pFVar29 = (FMaterial *)&pFVar29[5].QualityLevel;
    }
  }
  DestructItems<FMaterialResource,int>
            ((FMaterialResource *)(this->LoadedMaterialResources).AllocatorInstance.Data,
             (this->LoadedMaterialResources).ArrayNum);
  piVar1 = &(this->LoadedMaterialResources).ArrayMax;
  (this->LoadedMaterialResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,0,&(this->LoadedMaterialResources).AllocatorInstance,0,piVar1);
  }
  FMaterialOverrideNanite::FixupLegacySoftReference(&this->NaniteOverrideMaterial,(UObject *)this);
  ppUVar35 = GDefaultMaterials;
  ppUVar31 = GDefaultMaterials;
  do {
    if (0x15521492f < (longlong)ppUVar31) {
      if ((GIsInitialLoad == false) || (GEventDrivenLoaderEnabled == false)) {
        do {
          if ((*ppUVar35 == (UMaterial *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GDefaultMaterials[Domain] != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                                  ,0x321,L""), bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((((uint)(*ppUVar35)->_padding_ >> 0xc & 1) != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!GDefaultMaterials[Domain]->HasAnyFlags(RF_NeedPostLoad)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                                  ,0x322,L""), bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          ppUVar35 = ppUVar35 + 1;
        } while ((longlong)ppUVar35 < 0x155214930);
      }
      break;
    }
    pUVar5 = *ppUVar31;
    ppUVar31 = ppUVar31 + 1;
  } while (this != pUVar5);
  FVar25 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar25 < 0x1d7) && (this->bUsedWithUI_DEPRECATED != 0)) {
    (this->MaterialDomain).Value = '\x05';
  }
  pFVar26 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar26 != (FLinkerLoad *)0x0) &&
     (pFVar26 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this),
     (int)pFVar26->_padding_ < 0x132)) {
    CityHash64((char *)&`public:_struct_FGuid_const&___ptr64___cdecl_UMaterialInterface::GetLightingGuid(void)const___ptr64'
                        ::__l2::NullGuid,0x10);
    local_110 = &local_160;
    local_118 = &`public:_struct_FGuid_const&___ptr64___cdecl_UMaterialInterface::GetLightingGuid(void)const___ptr64'
                 ::__l2::NullGuid;
    local_160 = this;
    TSet<TTuple<FGuid,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FGuid,UMaterialInterface_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGuid_const_&,UMaterialInterface_*_&&>_>
              ((TSet<TTuple<FGuid,UMaterialInterface_*>,TDefaultMapHashableKeyFuncs<FGuid,UMaterialInterface_*,0>,FDefaultSetAllocator>
                *)&LightingGuidFixupMap,
               (TPairInitializer<FGuid_const_&,UMaterialInterface_*_&&> *)local_130,
               (bool *)&local_118);
  }
  bVar15 = (this->ShadingModel).Value;
  if (bVar15 == 0xf) {
    (this->ShadingModel).Value = '\x01';
    bVar15 = 1;
LAB_147f04efa:
    if ((0xc < bVar15) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InShadingModel < MSM_NUM",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                            ,0x2e3,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->ShadingModels).ShadingModelField = (ushort)(1 << (bVar15 & 0x1f));
  }
  else if (bVar15 != 0xe) goto LAB_147f04efa;
  if ((this->DecalBlendMode).Value == '\x11') {
    (this->DecalBlendMode).Value = '\0';
  }
  uVar3 = this->field_0x1e8;
  if ((this->bUseFullPrecision_DEPRECATED != '\0') && ((this->FloatPrecisionMode).Value == '\x03'))
  {
    (this->FloatPrecisionMode).Value = '\x02';
    this->field_0x1e8 = uVar3 & 0xef;
  }
  UMaterialInterface::FilterOutPlatformShadingModels(GMaxRHIShaderPlatform,&this->ShadingModels);
  bVar15 = (this->ShadingModel).Value;
  if ((((this->ShadingModels).ShadingModelField >> (bVar15 & 0x1f) & 1) == 0) &&
     ((bVar15 != 0xe ||
      (bVar16 = AllowPerPixelShadingModels((FStaticShaderPlatform)GMaxRHIShaderPlatform), !bVar16)))
     ) {
    uVar4 = (this->ShadingModels).ShadingModelField;
    if (((uVar4 == 0) || (0x1fff < uVar4)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                            ,0x2fc,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = (this->ShadingModels).ShadingModelField;
    local_168 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> local_168 & 1) == 0; local_168 = local_168 + 1) {
      }
    }
    uVar30 = ' ';
    if (uVar4 != 0) {
      uVar30 = (uchar)local_168;
    }
    (this->ShadingModel).Value = uVar30;
  }
  if ((((this->StateId).D == 0 && (this->StateId).C == 0) && (this->StateId).B == 0) &&
      (this->StateId).A == 0) {
    FWindowsPlatformMisc::CreateGuid(&this->StateId);
  }
  UMaterialInterface::UpdateMaterialRenderProxy
            ((UMaterialInterface *)this,(FMaterialRenderProxy *)this->DefaultMaterialInstance);
  if ((this->_padding_ == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedExpressionData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                          ,0x1244,
                          L"Missing cached expression data for material, should have been either serialized or created during PostLoad"
                         ), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar21 = this->_padding_;
  lVar6 = *(longlong *)(lVar21 + 0x448);
  iVar33 = *(int *)(lVar21 + 0x450);
  puVar36 = (undefined8 *)(lVar6 + 0x10);
  while( true ) {
    if (*(int *)(lVar21 + 0x450) != iVar33) {
      `TCheckedPointerIterator<FMaterialParameterCollectionInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1b4);
    }
    if (puVar36 + -2 == (undefined8 *)(lVar6 + (longlong)iVar33 * 0x18)) break;
    if ((UObject *)*puVar36 != (UObject *)0x0) {
      UObject::ConditionalPostLoad((UObject *)*puVar36);
    }
    puVar36 = puVar36 + 3;
  }
  QueryPerformanceCounter(&local_158);
  dVar9 = (double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar40 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar40,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (this->bIsMaterialEditorStatsMaterial == 0)) {
    lVar21 = this->_padding_;
    puVar37 = *(undefined8 **)(lVar21 + 0x400);
    iVar33 = *(int *)(lVar21 + 0x408);
    puVar36 = puVar37 + iVar33;
    while( true ) {
      if (*(int *)(lVar21 + 0x408) != iVar33) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1b3);
      }
      if (puVar37 == puVar36) break;
      if ((UObject *)*puVar37 != (UObject *)0x0) {
        UObject::ConditionalPostLoad((UObject *)*puVar37);
      }
      puVar37 = puVar37 + 1;
    }
    bVar16 = IsMaterialMapDDCEnabled();
    CacheResourceShadersForRendering(this,false,(uint)bVar16);
  }
  QueryPerformanceCounter(&local_150);
  ppUVar10 = (UMaterialInterface **)
             (double)(float)((double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                            dVar9);
  if ((double)ppUVar10 != 0.0) {
    FVar28 = StatPtr_STAT_ShaderCompiling_MaterialLoading;
    if (StatPtr_STAT_ShaderCompiling_MaterialLoading ==
        (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading>)0x0) {
      pFVar27 = ::FName::FName(&local_f0,"STAT_ShaderCompiling_MaterialLoading");
      FVar28 = (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_MaterialLoading
                          ,*pFVar27,L"Material Loading","STATGROUP_ShaderCompiling",
                          "STATCAT_Advanced",L"Shader Compiling",true,false,NumBits,false,false,
                          MCR_Invalid);
    }
    FVar7 = *(FName *)FVar28;
    FVar42 = FVar7.ComparisonIndex.Value;
    uVar39 = FVar7.Number;
    local_1a8._0_4_ = FVar42.Value;
    local_1a8.PrevTag = uVar39;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_11c = uVar39 & 0xffffafff | 0xa000;
      local_148 = FVar7;
      local_130._8_8_ = ppUVar10;
      local_120 = FVar42.Value;
      FThreadStats::AddStatMessage(this_01,(FStatMessage *)(local_130 + 8));
      FStatsTrace::Add(&local_148,(double)ppUVar10);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  bVar16 = IsPSOShaderPreloadingEnabled();
  if (bVar16) {
    cVar17 = (**(code **)(this->_padding_ + 0x4c0))();
    if ((((cVar17 == '\0') &&
         (cVar17 = (**(code **)(this->_padding_ + 0x4b8))(this), cVar17 == '\0')) &&
        ((this->MaterialDomain).Value != '\x02')) &&
       (cVar17 = (**(code **)(this->_padding_ + 0x4c8))(this), cVar17 == '\0')) goto LAB_147f0545f;
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 4;
    pFVar29 = (FMaterial *)(**(code **)(this->_padding_ + 0x390))(this,GMaxRHIShaderPlatform,4);
    PreloadMaterialShaderMap(pFVar29,&local_a8);
    FVar32 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar32 = local_a8.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar32,local_a8.ArrayNum);
    local_78.AllocatorInstance.SecondaryData = local_a8.AllocatorInstance.SecondaryData;
  }
  else {
    cVar17 = (**(code **)(this->_padding_ + 0x4b8))(this);
    if (((cVar17 == '\0') && (cVar17 = (**(code **)(this->_padding_ + 0x4c0))(this), cVar17 == '\0')
        ) && (((this->MaterialDomain).Value != '\x02' &&
              (cVar17 = (**(code **)(this->_padding_ + 0x4c8))(this), cVar17 == '\0'))))
    goto LAB_147f0545f;
    local_108.ArrayNum = 1;
    local_198.Data = (ulonglong)((uint)local_198.Data & 0x8000) | 0x13c00;
    local_140 = &FLocalVertexFactory::StaticType;
    local_108.DataPtr = &local_140;
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    UMaterialInterface::PrecachePSOs
              ((UMaterialInterface *)this,&local_78,&local_108,(FPSOPrecacheParams *)&local_198._s_0
               ,Medium,&local_178);
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    FVar32 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar32 = local_78.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar32,local_78.ArrayNum);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
LAB_147f0545f:
  UMaterialInterface::CacheTexturesSamplingInfo((UMaterialInterface *)this);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_138);
  FLLMScope::~FLLMScope(&local_1a0);
  return;
}

// PreSave @ 147f05750

void __thiscall UMaterial::PreSave(UMaterial *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UMaterialInterface::PreSave((UMaterialInterface *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// PrecachePSOs @ 147f05b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
UMaterial::PrecachePSOs
          (UMaterial *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,FPSOPrecacheParams *param_2,EPSOPrecachePriority param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  Type TVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  wchar_t *pwVar12;
  uint uVar13;
  ulonglong uVar14;
  FMaterial *this_00;
  EShaderPlatform EVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> _Src;
  FMaterial *pFVar16;
  longlong lVar17;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  undefined1 auStackY_d8 [32];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar14 = (ulonglong)_tls_index;
  __return_storage_ptr__->ArrayMax = 4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar12 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar12,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) && (0 < (this->MaterialResources).ArrayNum)) &&
     (((bVar5 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar5 ||
       (bVar5 = IsPSOShaderPreloadingEnabled(), bVar5)) && (bDefaultMaterialInitialized != false))))
  {
    pFVar9 = GetCachedScalabilityCVars();
    TVar1 = pFVar9->MaterialQualityLevel;
    uVar6 = UMaterialInterface::GetFeatureLevelsToCompileForRendering((UMaterialInterface *)this);
    while (uVar6 != 0) {
      uVar13 = -uVar6 & uVar6;
      uVar6 = uVar6 & uVar6 - 1;
      iVar3 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar8 = 0;
      if (uVar13 != 0) {
        iVar8 = iVar3;
      }
      if (iVar8 == 5) {
        EVar15 = SP_NumPlatforms;
      }
      else {
        EVar15 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar8];
      }
      iVar3 = (this->MaterialResources).ArrayNum;
      this_00 = (FMaterial *)0x0;
      uVar13 = 0;
      lVar17 = 0;
      pFVar16 = this_00;
      if (0 < iVar3) {
        do {
          uVar7 = 0;
          if ((int)uVar13 < (this->MaterialResources).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)(*pcVar4)();
            return pTVar10;
          }
          this_00 = *(FMaterial **)((this->MaterialResources).AllocatorInstance.Data + lVar17 * 8);
          if (GMaxRHIShaderPlatform == EVar15) {
            if (this_00->QualityLevel == TVar1) break;
            if (this_00->QualityLevel == Num) {
              pFVar16 = this_00;
            }
          }
          this_00 = pFVar16;
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 1;
          pFVar16 = this_00;
        } while (lVar17 < iVar3);
      }
      if (this_00 != (FMaterial *)0x0) {
        FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                 FMaterial::CollectPSOs(this_00,&local_88,param_1,param_2,param_3,param_4);
        if (((ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__ == FVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)(*pcVar4)();
          return pTVar10;
        }
        iVar3 = *(int *)((longlong)FVar11 + 0x28);
        if (iVar3 != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                            (8,8,iVar3,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          _Src = FVar11;
          if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar11 + 0x20) !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            _Src = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar11 + 0x20);
          }
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = FVar2;
          }
          memmove((void *)((longlong)FVar18 + (longlong)iVar8 * 8),(void *)_Src,(longlong)iVar3 << 3
                 );
          *(int *)((longlong)FVar11 + 0x28) = 0;
        }
        FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar11 = local_88.AllocatorInstance.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_88.ArrayNum);
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// PropagateDataToMaterialProxy @ 147f062b0

void __thiscall UMaterial::PropagateDataToMaterialProxy(UMaterial *this)

{
  UMaterialInterface::UpdateMaterialRenderProxy
            ((UMaterialInterface *)this,(FMaterialRenderProxy *)this->DefaultMaterialInstance);
  return;
}

// RecacheUniformExpressions @ 147f064b0

void __thiscall UMaterial::RecacheUniformExpressions(UMaterial *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (!GEventDrivenLoaderEnabled) {
    UMaterialInterface::InitDefaultMaterials();
    if (GDefaultMaterials[0] == (UMaterial *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GDefaultMaterials[Domain] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                         ,0x433,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (this->DefaultMaterialInstance != (FDefaultMaterialInstance *)0x0) {
    FMaterialRenderProxy::CacheUniformExpressions_GameThread
              ((FMaterialRenderProxy *)this->DefaultMaterialInstance,param_1);
  }
  return;
}

// ReleaseResources @ 147f06c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterial::ReleaseResources(UMaterial *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [16];
  code *local_98 [2];
  undefined **local_88;
  FDefaultMaterialInstance *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FDefaultMaterialInstance *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (this->MaterialResources).AllocatorInstance.Data;
  iVar3 = (this->MaterialResources).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->MaterialResources).ArrayNum != iVar3) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if (pFVar9 == pFVar2) break;
    puVar4 = *(undefined8 **)pFVar9;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    pFVar9 = pFVar9 + 8;
  }
  piVar1 = &(this->MaterialResources).ArrayMax;
  (this->MaterialResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MaterialResources).AllocatorInstance,0,piVar1);
  }
  pFStack_80 = this->DefaultMaterialInstance;
  if (pFStack_80 != (FDefaultMaterialInstance *)0x0) {
    local_70 = (undefined ***)0x0;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__GameThread_Destroy_FDefaultMaterialInstance__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FDefaultMaterialInstance::GameThread_Destroy_::__l2::TSTR_FDestroyDefaultMaterialInstanceCommand413>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FDefaultMaterialInstance::GameThread_Destroy'::__l2::TSTR_FDestroyDefaultMaterialInstanceCommand413>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar7);
      uVar10 = (ulonglong)local_38;
      if (2 < uVar10) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar8 = local_40;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar8 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar8 = local_70;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    this->DefaultMaterialInstance = (FDefaultMaterialInstance *)0x0;
  }
  return;
}

// ReleaseResourcesAndMutateDDCKey @ 147f06e40

void __thiscall UMaterial::ReleaseResourcesAndMutateDDCKey(UMaterial *this,FGuid *param_1)

{
  uint *puVar1;
  uint uVar2;
  FMaterial *this_00;
  int iVar3;
  wchar_t *pwVar4;
  FGuid *pFVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TArray<TRefCountPtr<FMaterial>,TSizedDefaultAllocator<32>_> local_38;
  ForAnyElementType local_28;
  uint local_20;
  int local_1c;
  
  pFVar5 = &this->StateId;
  if (((param_1->A == 0 && param_1->B == 0) && param_1->C == 0) && param_1->D == 0) {
    FWindowsPlatformMisc::CreateGuid(pFVar5);
  }
  else {
    pFVar5->A = pFVar5->A ^ param_1->A;
    puVar1 = &(this->StateId).B;
    *puVar1 = *puVar1 ^ param_1->B;
    puVar1 = &(this->StateId).C;
    *puVar1 = *puVar1 ^ param_1->C;
    puVar1 = &(this->StateId).D;
    *puVar1 = *puVar1 ^ param_1->D;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar4 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar4,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pFVar7 = (this->MaterialResources).AllocatorInstance.Data;
    iVar3 = (this->MaterialResources).ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->MaterialResources).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      FMaterial::ReleaseShaderMap(*(FMaterial **)pFVar7);
      pFVar7 = pFVar7 + 8;
    }
    pFVar8 = (this->MaterialResources).AllocatorInstance.Data;
    (this->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar2 = (this->MaterialResources).ArrayNum;
    uVar6 = (ulonglong)(int)uVar2;
    local_1c = (this->MaterialResources).ArrayMax;
    (this->MaterialResources).ArrayNum = 0;
    (this->MaterialResources).ArrayMax = 0;
    local_28.Data = pFVar8;
    local_20 = uVar2;
    if (0 < (int)uVar2) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar7 = pFVar8 + uVar6 * 8;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      while( true ) {
        if ((uint)uVar6 != uVar2) {
          `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar8 == pFVar7) break;
        this_00 = *(FMaterial **)pFVar8;
        (**(code **)(this_00->_padding_ + 8))(this_00);
        iVar3 = local_38.ArrayNum;
        if (local_38.ArrayNum == local_38.ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
        }
        local_38.ArrayNum = iVar3 + 1;
        *(FMaterial **)(local_38.AllocatorInstance.Data + (longlong)iVar3 * 8) = this_00;
        FMaterial::AddRef(this_00);
        uVar6 = (ulonglong)local_20;
        pFVar8 = pFVar8 + 8;
      }
      local_20 = 0;
      if (local_1c != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_28,0,&local_1c);
      }
      FMaterial::DeleteMaterialsOnRenderThread(&local_38);
      DestructItems<TRefCountPtr<FMaterial>,int>
                ((TRefCountPtr<FMaterial> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

// SaveShaderStableKeys @ 147f071f0

void __thiscall UMaterial::SaveShaderStableKeys(UMaterial *this,ITargetPlatform *param_1)

{
  return;
}

// SaveShaderStableKeysInner @ 147f07200

void __thiscall
UMaterial::SaveShaderStableKeysInner
          (UMaterial *this,ITargetPlatform *param_1,FStableShaderKeyAndValue *param_2)

{
  return;
}

// Serialize @ 147f07240

void __thiscall UMaterial::Serialize(UMaterial *this,FArchive *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong *puVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  IConsoleManager *pIVar10;
  longlong *plVar11;
  TConsoleVariableData<int> *pTVar12;
  longlong lVar13;
  char cVar14;
  int *piVar15;
  FLLMScope local_res10 [2];
  uint local_res18 [2];
  FName local_res20;
  FMemScope local_38 [2];
  
  FLLMScope::FLLMScope(local_res10,Materials,false,None,Default,true);
  FMemScope::FMemScope(local_38,Materials,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3057,"MaterialSerializeTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
               ,0xbf1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3057);
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  UMaterialInterface::Serialize((UMaterialInterface *)this,param_1);
  if (0x103 < *(int *)&param_1->field_0x40) {
    local_res20 = (FName)this->_padding_;
    UE::MaterialInterface::Private::SerializeInlineShaderMaps
              (param_1,&this->LoadedMaterialResources,&local_res20);
  }
  if (*(int *)&param_1->field_0x40 < 0x1ae) {
    if (((this->BlendMode).Value == '\x01') && (this->bIsMasked_DEPRECATED == '\0')) {
      this->field_0x1fd = this->field_0x1fd | 2;
    }
    else {
      this->bCanMaskedBeAssumedOpaque = '\0';
    }
  }
  if ((((param_1->field_0x28 & 1) != 0) &&
      (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID),
      iVar9 < 4)) && ((this->MaterialDomain).Value == '\x01')) {
    (this->BlendMode).Value = '\x02';
  }
  iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if (iVar9 < 0x2f) goto LAB_147f07474;
  cVar14 = '\0';
  if ((((param_1->field_0x28 & 4) != 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
     ((*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0 &&
      (((param_1->field_0x29 & 1) != 0 && ((param_1->field_0x2b & 1) == 0)))))) {
    piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar15 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar10 = IConsoleManager::Get();
      plVar11 = (longlong *)
                (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.Nanite.ForceEnableMeshes",1);
      pTVar12 = (TConsoleVariableData<int> *)0x0;
      if (plVar11 != (longlong *)0x0) {
        pTVar12 = (TConsoleVariableData<int> *)(**(code **)(*plVar11 + 0x68))(plVar11);
      }
      NaniteForceEnableMeshesCVar = pTVar12;
      _Init_thread_footer(&::_TSS0);
    }
    cVar14 = bForceNaniteUsageValue;
    if ((*piVar15 < ::_TSS1) &&
       (_Init_thread_header(&::_TSS1), pTVar12 = NaniteForceEnableMeshesCVar,
       cVar14 = bForceNaniteUsageValue, ::_TSS1 == -1)) {
      if (NaniteForceEnableMeshesCVar == (TConsoleVariableData<int> *)0x0) {
LAB_147f0770d:
        bForceNaniteUsageValue = false;
      }
      else {
        bVar8 = IsInParallelGameThread();
        if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
          lVar13 = 0;
        }
        else {
          lVar13 = 4;
        }
        if (*(int *)((longlong)pTVar12->ShadowedValue + lVar13) == 0) goto LAB_147f0770d;
        bForceNaniteUsageValue = true;
      }
      _Init_thread_footer(&::_TSS1);
      cVar14 = bForceNaniteUsageValue;
    }
  }
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = (uint)(cVar14 != '\0');
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar2 = param_1->field_0x28;
    uVar3 = local_res18[0];
  }
  else {
    uVar3 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar2 = param_1->field_0x28;
  }
  if (((bVar2 & 1) != 0) && (uVar3 != 0)) {
    this->bUsedWithNanite = 1;
  }
LAB_147f07474:
  if ((param_1->field_0x28 & 1) != 0) {
    iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if ((iVar9 < 0x2c) && (this->bEnableSeparateTranslucency_DEPRECATED == 0)) {
      (this->TranslucencyPass).Value = '\0';
    }
    if ((param_1->field_0x28 & 1) != 0) {
      iVar9 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
      if (iVar9 < 0x99) {
        (this->PixelDepthOffsetMode).Value = '\0';
      }
      if (((((param_1->field_0x28 & 1) != 0) &&
           (iVar9 = FArchiveState::CustomVer
                              ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
           iVar9 < 0xa9)) && ((int)this->_padding_ == 0)) &&
         (plVar11 = &this->_padding_, this->_padding_ != 0)) {
        if ((((undefined1 *)this->_padding_ <= plVar11) &&
            (plVar11 < (undefined1 *)this->_padding_ +
                       (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)this->_padding_;
        piVar15 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar9 == *piVar15) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&this->_padding_,piVar15);
        }
        *(int *)&this->_padding_ = iVar9 + 1;
        pUVar5 = (UObject *)*plVar11;
        *(UObject **)(this->_padding_ + (longlong)iVar9 * 8) = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
      }
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Serialize @ 147f07720

void __thiscall UMaterial::Serialize(UMaterial *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetInitialValues @ 147f07a80

void __thiscall UMaterial::SetInitialValues(UMaterial *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  
  (this->BlendMode).Value = '\0';
  (this->ShadingModel).Value = '\x01';
  (this->TranslucencyLightingMode).Value = '\0';
  this->TranslucencyDirectionalLightingIntensity = 1.0;
  (this->ShadingModels).ShadingModelField = 2;
  this->TranslucentShadowDensityScale = 0.5;
  this->TranslucentSelfShadowDensityScale = 2.0;
  this->TranslucentSelfShadowSecondDensityScale = 10.0;
  this->TranslucentSelfShadowSecondOpacity = 0.0;
  this->TranslucentBackscatteringExponent = 30.0;
  (this->TranslucentMultipleScatteringExtinction).field0_0x0._s_0.R = 1.0;
  (this->TranslucentMultipleScatteringExtinction).field0_0x0._s_0.G = 0.833;
  (this->TranslucentMultipleScatteringExtinction).field0_0x0._s_0.B = 0.588;
  (this->TranslucentMultipleScatteringExtinction).field0_0x0._s_0.A = 1.0;
  this->bCastDynamicShadowAsMasked = '\0';
  this->bUsedWithVolumetricCloud = 0;
  this->bUsedWithHeterogeneousVolumes = 0;
  this->bEnableMobileSeparateTranslucency = '\0';
  this->bUseLightmapDirectionality = '\x01';
  this->bHasPixelAnimation = '\0';
  this->bUsedWithWater = 0;
  this->BlendableOutputAlpha = '\0';
  this->bIsBlendable = '\x01';
  this->bDisablePreExposureScale = '\0';
  this->bEnableStencilTest = '\0';
  this->bUsedWithStaticMesh = 1;
  this->bAllowTranslucentLocalLightShadow = '\0';
  this->bIsMaterialEditorStatsMaterial = '\0';
  this->bRelaxRuntimeVirtualTextureRestrictionsForOldContent = '\0';
  this->bRelaxRuntimeVirtualTextureRestrictions = '\0';
  puVar2 = &this->field_0x1a0;
  this->bEnableSeparateTranslucency_DEPRECATED = '\x01';
  this->bContactShadows = '\0';
  this->bScreenSpaceReflections = '\0';
  this->bEnableResponsiveAA = '\0';
  this->TranslucentShadowStartOffset = 100.0;
  this->OpacityMaskClipValue = 0.3333;
  this->bAllowFrontLayerTranslucency = '\x01';
  this->bCompatibleWithLumenCardSharing = '\0';
  (this->TranslucencyPass).Value = '\x01';
  (this->BlendableLocation).Value = '\0';
  this->bForceCompatibleWithLightFunctionAtlas = '\0';
  this->bAutomaticallySetUsageInEditor = '\x01';
  this->BlendablePriority = 0;
  this->PreshaderGap = 0;
  this->TranslucentLocalLightShadowQuality = 0.0;
  this->TranslucentDirectionalLightShadowQuality = 0.0;
  this->RefractionDepthBias = 0.0;
  (this->MaterialDecalResponse).Value = '\x01';
  this->RefractionMethod = '\x03';
  this->RefractionCoverageMode = '\x01';
  (this->PixelDepthOffsetMode).Value = '\x01';
  (this->SubstrateCompilationConfig).bFullSimplify = false;
  (this->SubstrateCompilationConfig).field_0x1 = 0;
  (this->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
  (this->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
  puVar2 = &this->field_0x1d8;
  this->bTangentSpaceNormal = '\x01';
  this->bSubstrateRoughnessTracking = '\x01';
  this->bUseEmissiveForDynamicAreaLighting = '\0';
  puVar2 = &this->field_0x1fe;
  this->bCastRayTracedShadows = '\x01';
  this->bAllowDevelopmentShaderCompile = '\x01';
  this->bIsSky = '\0';
  this->bApplyCloudFogging = '\0';
  this->bUseTranslucencyVertexFog = '\x01';
  (this->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
  (this->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
  puVar2 = &this->field_0x1fd;
  this->bAllowVariableRateShading = '\x01';
  this->bUseMaterialAttributes = '\0';
  this->bIsFunctionPreviewMaterial = '\0';
  this->bIsPreviewMaterial = '\0';
  (this->FloatPrecisionMode).Value = '\0';
  this->bUsedWithStaticLighting = '\0';
  this->bRootNodeOverridesDefaultDistortion_DEPRECATED = '\0';
  return;
}

// SetMaterialUsage @ 147f07c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMaterial::SetMaterialUsage
          (UMaterial *this,bool *param_1,EMaterialUsage param_2,UMaterialInterface *param_3)

{
  uchar uVar1;
  FScriptContainerElement *pFVar2;
  UMaterial *this_00;
  bool bVar3;
  FString *pFVar4;
  uint uVar5;
  FString local_70;
  FString local_60;
  FString local_50;
  
  *param_1 = false;
  uVar1 = (this->MaterialDomain).Value;
  if ((uVar1 == '\0') || ((uVar1 - 1 & 0xfd) == 0)) {
    bVar3 = GetUsageByFlag(this,param_2);
    if ((bVar3) || (this->bUsedAsSpecialEngineMaterial != '\0')) {
      return true;
    }
    uVar5 = 1 << ((byte)param_2 & 0x1f);
    if ((this->UsageFlagWarnings & uVar5) == 0) {
      if (2 < (byte)LogMaterial._0_1_) {
        GetUsageName(this,&local_50,param_2);
        bVar3 = param_3 == (UMaterialInterface *)0x0;
        pFVar4 = &local_70;
        this_00 = this;
        if (!bVar3) {
          pFVar4 = &local_60;
          this_00 = (UMaterial *)param_3;
        }
        pFVar4 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this_00,pFVar4,(UObject *)0x0);
        pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
        if ((bVar3) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((!bVar3) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      if ((this->bAutomaticallySetUsageInEditor != '\0') && (2 < (byte)LogMaterial._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      }
      this->UsageFlagWarnings = this->UsageFlagWarnings | uVar5;
    }
  }
  return false;
}

// SetNumericParameterDefault @ 147f07e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

void __thiscall
UMaterial::SetNumericParameterDefault
          (UMaterial *this,EMaterialParameterType param_1,FMemoryImageMaterialParameterInfo *param_2
          ,FValue *param_3,EShaderPlatform param_4)

{
  return;
}

// SetRenderTracePhysicalMaterialOutputs @ 147f07e40

void __thiscall
UMaterial::SetRenderTracePhysicalMaterialOutputs
          (UMaterial *this,TArrayView<TObjectPtr<UPhysicalMaterial>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UPhysicalMaterial> *pTVar4;
  
  iVar2 = param_1->ArrayNum;
  iVar3 = (this->RenderTracePhysicalMaterialOutputs).ArrayMax;
  piVar1 = &(this->RenderTracePhysicalMaterialOutputs).ArrayMax;
  pTVar4 = param_1->DataPtr;
  (this->RenderTracePhysicalMaterialOutputs).ArrayNum = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,iVar3,&(this->RenderTracePhysicalMaterialOutputs).AllocatorInstance,iVar2,
             piVar1);
  ConstructItems<TObjectPtr<UPhysicalMaterial>,TObjectPtr<UPhysicalMaterial>,int>
            ((this->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data,pTVar4,iVar2);
  return;
}

// SetShadingModel @ 147f07ed0

void __thiscall UMaterial::SetShadingModel(UMaterial *this,EMaterialShadingModel param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xc < (this->ShadingModel).Value) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8429753030781428321>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\Material.cpp"
                       ,0x1d9f,"ShadingModel < MSM_NUM");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ShadingModel).Value = (uchar)param_1;
  if (MSM_Strata < (param_1 & 0xff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShadingModel < MSM_NUM",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                       ,0x2e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ShadingModels).ShadingModelField = (ushort)(1 << (param_1 & 0x1f));
  return;
}

// SetUsageByFlag @ 147f07f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMaterial::SetUsageByFlag(UMaterial *this,EMaterialUsage param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  GetUsageByFlag(this,param_1);
  switch(param_1) {
  case MATUSAGE_SkeletalMesh:
    this->bUsedWithSkeletalMesh = '\0';
    this->field_0x1d8 = this->field_0x1d8 | param_2 << 7;
    return;
  case MATUSAGE_ParticleSprites:
    this->bUsedWithParticleSprites = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 * '\x02';
    return;
  case MATUSAGE_BeamTrails:
    this->bUsedWithBeamTrails = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 << 2;
    return;
  case MATUSAGE_MeshParticles:
    this->bUsedWithMeshParticles = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 << 3;
    return;
  case MATUSAGE_StaticLighting:
    this->bUsedWithStaticLighting = '\0';
    this->field_0x1da = this->field_0x1da | param_2;
    return;
  case MATUSAGE_MorphTargets:
    this->bUsedWithMorphTargets = '\0';
    this->field_0x1da = this->field_0x1da | param_2 * '\x02';
    return;
  case MATUSAGE_SplineMesh:
    this->bUsedWithSplineMeshes = '\0';
    this->field_0x1da = this->field_0x1da | param_2 << 2;
    return;
  case MATUSAGE_InstancedStaticMeshes:
    this->bUsedWithInstancedStaticMeshes = '\0';
    this->field_0x1da = this->field_0x1da | param_2 << 3;
    return;
  case MATUSAGE_GeometryCollections:
    this->bUsedWithGeometryCollections = '\0';
    this->field_0x1da = this->field_0x1da | param_2 << 4;
    return;
  case MATUSAGE_Clothing:
    this->bUsedWithClothing = '\0';
    this->field_0x1da = this->field_0x1da | param_2 << 7;
    return;
  case MATUSAGE_NiagaraSprites:
    this->bUsedWithNiagaraSprites = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 << 4;
    return;
  case MATUSAGE_NiagaraRibbons:
    this->bUsedWithNiagaraRibbons = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 << 5;
    return;
  case MATUSAGE_NiagaraMeshParticles:
    this->bUsedWithNiagaraMeshParticles = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 << 6;
    return;
  case MATUSAGE_GeometryCache:
    this->bUsedWithGeometryCache = '\0';
    this->field_0x1d9 = this->field_0x1d9 | param_2 << 7;
    return;
  case MATUSAGE_Water:
    this->bUsedWithWater = 0;
    *(uint *)&this->field_0x1dc = *(uint *)&this->field_0x1dc | uVar1;
    return;
  case MATUSAGE_HairStrands:
    this->bUsedWithHairStrands = 0;
    *(uint *)&this->field_0x1dc = *(uint *)&this->field_0x1dc | uVar1 * 2;
    return;
  case MATUSAGE_LidarPointCloud:
    this->bUsedWithLidarPointCloud = 0;
    *(uint *)&this->field_0x1dc = *(uint *)&this->field_0x1dc | uVar1 << 2;
    return;
  case MATUSAGE_VirtualHeightfieldMesh:
    this->bUsedWithVirtualHeightfieldMesh = 0;
    *(uint *)&this->field_0x1dc = *(uint *)&this->field_0x1dc | uVar1 << 3;
    return;
  case MATUSAGE_Nanite:
    this->bUsedWithNanite = 0;
    *(uint *)&this->field_0x1dc = *(uint *)&this->field_0x1dc | uVar1 << 4;
    return;
  case MATUSAGE_Voxels:
    this->bUsedWithVoxels = '\0';
    this->field_0x1e0 = this->field_0x1e0 | param_2;
    return;
  case MATUSAGE_VolumetricCloud:
    this->bUsedWithVolumetricCloud = 0;
    *(uint *)&this->field_0x1e4 = *(uint *)&this->field_0x1e4 | uVar1;
    return;
  case MATUSAGE_HeterogeneousVolumes:
    this->bUsedWithHeterogeneousVolumes = 0;
    *(uint *)&this->field_0x1e4 = *(uint *)&this->field_0x1e4 | uVar1 * 2;
    return;
  case MATUSAGE_StaticMesh:
    this->bUsedWithStaticMesh = 0;
    *(uint *)&this->field_0x1e4 = *(uint *)&this->field_0x1e4 | uVar1 << 2;
    return;
  default:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    return;
  }
}

// ShouldAlwaysEvaluateWorldPositionOffset @ 147f08340

bool __thiscall UMaterial::ShouldAlwaysEvaluateWorldPositionOffset(UMaterial *this)

{
  return this->bAlwaysEvaluateWorldPositionOffset;
}

// StartCacheUniformExpressions @ 147f084f0

void __thiscall UMaterial::StartCacheUniformExpressions(UMaterial *this)

{
  this->bCachingUniformExpressions = true;
  return;
}

// StaticRegisterNativesUMaterial @ 147f08520

void __cdecl UMaterial::StaticRegisterNativesUMaterial(void)

{
  return;
}

// UpdateLightmassTextureTracking @ 147f08ed0

bool __thiscall UMaterial::UpdateLightmassTextureTracking(UMaterial *this)

{
  return false;
}

// UpdateMaterialShaders @ 147f08ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMaterialShaderPrecompileMode": Some values do not have unique names */

void __cdecl
UMaterial::UpdateMaterialShaders
          (TArray<FShaderType_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexFactoryType_const_*,TSizedDefaultAllocator<32>_> *param_3,
          EShaderPlatform param_4)

{
  UMaterial *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  EInternalObjectFlags EVar5;
  ulonglong uVar6;
  UClass *pUVar7;
  FText *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStackY_168 [32];
  TObjectIterator<UMaterial> local_138;
  TObjectIterator<UMaterial> local_120;
  FText local_108;
  FMaterialUpdateContext local_f8;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar14 = 0;
  uVar3 = 0;
  if ((param_3->ArrayNum < 1) && (param_2->ArrayNum < 1)) {
    iVar9 = param_1->ArrayNum;
    uVar11 = uVar14;
    uVar16 = uVar14;
    if (0 < iVar9) {
      do {
        uVar10 = (uint)uVar11;
        uVar4 = uVar3;
        if ((int)uVar10 < iVar9) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar11 = *(ulonglong *)((param_1->AllocatorInstance).Data + uVar16);
        uVar6 = uVar14;
        if (*(int *)(uVar11 + 8) == 1) {
          uVar6 = uVar11;
        }
        if (uVar6 != 0) goto LAB_147f09013;
        uVar4 = uVar3;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar11 = *(ulonglong *)((param_1->AllocatorInstance).Data + uVar16);
        uVar6 = uVar14;
        if (*(int *)(uVar11 + 8) == 2) {
          uVar6 = uVar11;
        }
        if (uVar6 != 0) goto LAB_147f09013;
        iVar9 = param_1->ArrayNum;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar10 + 1) < iVar9);
    }
  }
  else {
LAB_147f09013:
    FMaterialUpdateContext::FMaterialUpdateContext(&local_f8,6,param_4);
    local_120.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ObjectArray.ArrayNum = 0;
    local_120.ObjectArray.ArrayMax = 0;
    local_120.Index = -1;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = StaticClass();
    GetObjectsOfClass(pUVar7,&local_120.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted))
    ;
    uVar11 = uVar14;
    while( true ) {
      TObjectIterator<UMaterial>::Advance(&local_120);
      iVar9 = (int)uVar11;
      if ((local_120.Index < 0) || (local_120.ObjectArray.ArrayNum <= local_120.Index)) break;
      uVar11 = (ulonglong)(iVar9 + 1);
    }
    if (local_120.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.ObjectArray.AllocatorInstance.Data);
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"Material",L"BeginAsyncMaterialShaderCompilesTask",
                        L"Kicking off async material shader compiles...");
    FFeedbackContext::StatusUpdate(GWarn,0,iVar9,pFVar8);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    local_138.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ObjectArray.ArrayNum = 0;
    local_138.ObjectArray.ArrayMax = 0;
    local_138.Index = 0xffffffff;
    iVar15 = 1;
    if (1 < iVar9 / 0x14) {
      iVar15 = iVar9 / 0x14;
    }
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = StaticClass();
    GetObjectsOfClass(pUVar7,&local_138.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted))
    ;
    while( true ) {
      TObjectIterator<UMaterial>::Advance(&local_138);
      lVar12 = (longlong)local_138.Index;
      if ((local_138.Index < 0) || (local_138.ObjectArray.ArrayNum <= local_138.Index)) break;
      uVar4 = uVar3;
      if (local_138.Index < local_138.ObjectArray.ArrayNum) {
        uVar4 = (uint)~local_138.Index >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = *(UMaterial **)(local_138.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
      FMaterialUpdateContext::AddMaterial(&local_f8,this);
      CacheResourceShadersForRendering(this,false,Background);
      iVar13 = (int)uVar14;
      if (iVar13 % iVar15 == 0) {
        FFeedbackContext::UpdateProgress(GWarn,iVar13,iVar9);
      }
      uVar14 = (ulonglong)(iVar13 + 1);
    }
    if (local_138.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.ObjectArray.AllocatorInstance.Data);
    }
    FMaterialUpdateContext::~FMaterialUpdateContext(&local_f8);
  }
  return;
}

// WritesToRuntimeVirtualTexture @ 147f09270

bool __thiscall UMaterial::WritesToRuntimeVirtualTexture(UMaterial *this)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (**(code **)(this->_padding_ + 0x2f0))(0,&local_18);
  return (bool)((byte)(*(uint *)(lVar1 + 0x4d0) >> 1) & 1);
}

// __VTableCtorCaller @ 147f09770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMaterial::__VTableCtorCaller(FVTableHelper *param_1)

{
  undefined1 *this;
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterial *this_00;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this_00 = (UMaterial *)
            StaticAllocateObject
                      (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                       Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                       (FGCReconstructionGuard *)0x0);
  if (this_00 != (UMaterial *)0x0) {
    UMaterialInterface::UMaterialInterface((UMaterialInterface *)this_00,param_1);
    this = &(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x18;
    this_00->_padding_ = (longlong)&_vftable__for__UObject__;
    this_00->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
    this_00->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    (this_00->PhysMaterial).field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
    (this_00->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
    this_00->PhysicalMaterialMap[0].field0_0x0.DebugPtr = (UPhysicalMaterial *)0x0;
    this_00->PhysicalMaterialMap[1].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[2].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[3].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[4].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[5].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[6].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    this_00->PhysicalMaterialMap[7].field0_0x0 = (TObjectPtr<UPhysicalMaterial>_u_0)0x0;
    (this_00->RenderTracePhysicalMaterialOutputs).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this_00->RenderTracePhysicalMaterialOutputs).ArrayNum = 0;
    (this_00->RenderTracePhysicalMaterialOutputs).ArrayMax = 0;
    (this_00->NaniteOverrideMaterial).bEnableOverride = true;
    (this_00->NaniteOverrideMaterial).OverrideMaterial.field0_0x0.DebugPtr =
         (UMaterialInterface *)0x0;
    *(undefined8 *)this = 0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x20 =
         0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr = 0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x10 =
         0;
    *(undefined8 *)&(this_00->NaniteOverrideMaterial).OverrideMaterialRef.SoftObjectPtr.field_0x8 =
         0;
    FUtf8String::Reset((FUtf8String *)this,0);
    (this_00->DisplacementScaling).Magnitude = 4.0;
    (this_00->DisplacementScaling).Center = 0.5;
    (this_00->DisplacementFadeRange).StartSizePixels = 4.0;
    (this_00->DisplacementFadeRange).EndSizePixels = 1.0;
    (this_00->ShadingModels).ShadingModelField = 0;
    this_00->TranslucentLocalLightShadowQuality = 0.0;
    this_00->TranslucentDirectionalLightShadowQuality = 0.0;
    (this_00->UserSceneTexture).ComparisonIndex = 0;
    (this_00->UserSceneTexture).Number = 0;
    (this_00->UserTextureDivisor).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this_00->ResolutionRelativeToInput).ComparisonIndex = 0;
    (this_00->ResolutionRelativeToInput).Number = 0;
    this_00->StencilRefValue = '\0';
    this_00->NeuralProfileId = -1;
    this_00->UsageFlagCacheMiss = (atomic<unsigned_int>)0x0;
    (this_00->SubstrateCompilationConfig).bFullSimplify = false;
    (this_00->SubstrateCompilationConfig).BytesPerPixelOverride = -1;
    (this_00->SubstrateCompilationConfig).ClosuresPerPixelOverride = -1;
    (this_00->StateId).A = 0;
    (this_00->StateId).B = 0;
    (this_00->StateId).C = 0;
    (this_00->StateId).D = 0;
    (this_00->LoadedMaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->LoadedMaterialResources).ArrayNum = 0;
    (this_00->LoadedMaterialResources).ArrayMax = 0;
    (this_00->MaterialResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->MaterialResources).ArrayNum = 0;
    (this_00->MaterialResources).ArrayMax = 0;
    this_00->ReleasedByRT = (FThreadSafeBool)0x1;
    this_00->bCachingUniformExpressions = false;
    SetInitialValues(this_00);
    return (UObject *)this_00;
  }
  return (UObject *)0x0;
}

