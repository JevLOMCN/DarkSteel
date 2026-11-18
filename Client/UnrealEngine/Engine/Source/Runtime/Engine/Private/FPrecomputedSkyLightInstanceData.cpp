// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147990820

UScriptStruct * __cdecl FPrecomputedSkyLightInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData,
                         (UObject *)pUVar1,L"PrecomputedSkyLightInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FPrecomputedSkyLightInstanceData.OuterSingleton;
}

// ContainsData @ 147990860

bool __thiscall
FPrecomputedSkyLightInstanceData::ContainsData(FPrecomputedSkyLightInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 147990870

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
FPrecomputedSkyLightInstanceData::ApplyToComponent
          (FPrecomputedSkyLightInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  UClass *pUVar9;
  longlong *plVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  USkyLightComponent *local_res10;
  longlong local_78 [5];
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar11 = GetTypeName<USkyLightComponent>(&local_38);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar9 = USkyLightComponent::StaticClass();
  iVar1 = (int)pUVar9->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar9->_padding_)) {
    if (this == (FPrecomputedSkyLightInstanceData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LightMapData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                         ,0x2cb,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar8 = ULightComponentBase::HasStaticShadowing((ULightComponentBase *)param_1);
    if (bVar8) {
      plVar10 = local_78 + 4;
      local_78[4]._0_4_ = (this->OriginalLightGuid).A;
      local_78[4]._4_4_ = (this->OriginalLightGuid).B;
      uStack_50._0_4_ = (this->OriginalLightGuid).C;
      uStack_50._4_4_ = (this->OriginalLightGuid).D;
    }
    else {
      local_78[0] = 0;
      plVar10 = local_78;
      local_78[1] = 0;
    }
    lVar6 = plVar10[1];
    param_1[3]._padding_ = *plVar10;
    param_1[3]._padding_ = lVar6;
    bVar8 = ULightComponentBase::HasStaticShadowing((ULightComponentBase *)param_1);
    if (bVar8) {
      plVar10 = &local_48;
      local_48._0_4_ = (this->LightGuid).A;
      local_48._4_4_ = (this->LightGuid).B;
      uStack_40._0_4_ = (this->LightGuid).C;
      uStack_40._4_4_ = (this->LightGuid).D;
    }
    else {
      local_78[2] = 0;
      plVar10 = local_78 + 2;
      local_78[3] = 0;
    }
    lVar6 = plVar10[1];
    param_1[3]._padding_ = *plVar10;
    param_1[3]._padding_ = lVar6;
    TRefCountPtr<FSkyTextureCubeResource>::operator=
              ((TRefCountPtr<FSkyTextureCubeResource> *)&param_1[3].field_0xb8,
               (this->ProcessedSkyTexture).Reference);
    lVar6 = *(longlong *)((this->IrradianceEnvironmentMap).R.V + 2);
    param_1[4]._padding_ = *(longlong *)(this->IrradianceEnvironmentMap).R.V;
    param_1[4]._padding_ = lVar6;
    lVar6 = *(longlong *)((this->IrradianceEnvironmentMap).R.V + 6);
    param_1[4]._padding_ = *(longlong *)((this->IrradianceEnvironmentMap).R.V + 4);
    param_1[4]._padding_ = lVar6;
    lVar6 = *(longlong *)((this->IrradianceEnvironmentMap).R.V + 10);
    param_1[4]._padding_ = *(longlong *)((this->IrradianceEnvironmentMap).R.V + 8);
    param_1[4]._padding_ = lVar6;
    lVar6 = *(longlong *)((this->IrradianceEnvironmentMap).G.V + 2);
    param_1[4]._padding_ = *(longlong *)(this->IrradianceEnvironmentMap).G.V;
    param_1[4].PrimaryComponentTick._padding_ = lVar6;
    lVar6 = *(longlong *)((this->IrradianceEnvironmentMap).G.V + 6);
    param_1[4].PrimaryComponentTick._padding_ =
         *(longlong *)((this->IrradianceEnvironmentMap).G.V + 4);
    param_1[4].PrimaryComponentTick._padding_ = lVar6;
    lVar6 = *(longlong *)((this->IrradianceEnvironmentMap).G.V + 10);
    param_1[4].PrimaryComponentTick._padding_ =
         *(longlong *)((this->IrradianceEnvironmentMap).G.V + 8);
    param_1[4].PrimaryComponentTick._padding_ = lVar6;
    pFVar7 = *(FScriptContainerElement **)((this->IrradianceEnvironmentMap).B.V + 2);
    param_1[4].PrimaryComponentTick.Target =
         *(UActorComponent **)(this->IrradianceEnvironmentMap).B.V;
    param_1[4].ComponentTags.AllocatorInstance.Data = pFVar7;
    fVar3 = (this->IrradianceEnvironmentMap).B.V[5];
    fVar4 = (this->IrradianceEnvironmentMap).B.V[6];
    fVar5 = (this->IrradianceEnvironmentMap).B.V[7];
    param_1[4].ComponentTags.ArrayNum = (int)(this->IrradianceEnvironmentMap).B.V[4];
    param_1[4].ComponentTags.ArrayMax = (int)fVar3;
    *(float *)&param_1[4].AssetUserData.AllocatorInstance.Data = fVar4;
    *(float *)((longlong)&param_1[4].AssetUserData.AllocatorInstance.Data + 4) = fVar5;
    fVar3 = (this->IrradianceEnvironmentMap).B.V[9];
    fVar4 = (this->IrradianceEnvironmentMap).B.V[10];
    fVar5 = (this->IrradianceEnvironmentMap).B.V[0xb];
    param_1[4].AssetUserData.ArrayNum = (int)(this->IrradianceEnvironmentMap).B.V[8];
    param_1[4].AssetUserData.ArrayMax = (int)fVar3;
    *(float *)&param_1[4].field_0x88 = fVar4;
    *(float *)&param_1[4].field_0x8c = fVar5;
    param_1[4].UCSSerializationIndex = (int)this->AverageBrightness;
    if ((*(longlong *)&param_1[3].field_0xb8 != 0) &&
       (*(char *)((longlong)&param_1[3].WorldPrivate + 1) != '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)&USkyLightComponent::SkyCapturesToUpdateLock);
      local_res10 = (USkyLightComponent *)param_1;
      TArray<USkyLightComponent_*,TSizedDefaultAllocator<32>_>::Remove
                (&USkyLightComponent::SkyCapturesToUpdate,&local_res10);
      LeaveCriticalSection((LPCRITICAL_SECTION)&USkyLightComponent::SkyCapturesToUpdateLock);
    }
    UActorComponent::MarkRenderStateDirty(param_1);
    return;
  }
  pFVar11 = GetTypeName<USkyLightComponent>(&local_28);
  pwVar12 = L"";
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  pFVar11 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar11->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar13);
}

// FPrecomputedSkyLightInstanceData @ 1479a3b10

FPrecomputedSkyLightInstanceData * __thiscall
FPrecomputedSkyLightInstanceData::FPrecomputedSkyLightInstanceData
          (FPrecomputedSkyLightInstanceData *this)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  this->AverageBrightness = 1.0;
  this->_padding_ = (longlong)&___7FPrecomputedSkyLightInstanceData__6B_;
  (this->OriginalLightGuid).A = 0;
  (this->OriginalLightGuid).B = 0;
  (this->OriginalLightGuid).C = 0;
  (this->OriginalLightGuid).D = 0;
  (this->LightGuid).A = 0;
  (this->LightGuid).B = 0;
  (this->LightGuid).C = 0;
  (this->LightGuid).D = 0;
  (this->ProcessedSkyTexture).Reference = (FSkyTextureCubeResource *)0x0;
  (this->IrradianceEnvironmentMap).R.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0xb] = 0.0;
  return this;
}

// ~FPrecomputedSkyLightInstanceData @ 1479a8de0

void __thiscall
FPrecomputedSkyLightInstanceData::~FPrecomputedSkyLightInstanceData
          (FPrecomputedSkyLightInstanceData *this)

{
  TRefCountPtr<FSkyTextureCubeResource>::~TRefCountPtr<FSkyTextureCubeResource>
            (&this->ProcessedSkyTexture);
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

