// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 85

// StaticClass @ 14db0a820

UClass * __cdecl ULandscapeTexturePatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTexturePatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeTexturePatch",
               &Z_Registration_Info_UClass_ULandscapeTexturePatch.InnerSingleton,
               StaticRegisterNativesULandscapeTexturePatch,0x330,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTexturePatch>,
               InternalVTableHelperCtorCaller<ULandscapeTexturePatch>,local_res8,
               ULandscapePatchComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTexturePatch.InnerSingleton;
}

// ULandscapeTexturePatch @ 14db130d0

ULandscapeTexturePatch * __thiscall
ULandscapeTexturePatch::ULandscapeTexturePatch(ULandscapeTexturePatch *this,FVTableHelper *param_1)

{
  ULandscapePatchComponent::ULandscapePatchComponent((ULandscapePatchComponent *)this,param_1);
  this->ResolutionX = 0x20;
  this->ResolutionY = 0x20;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapeTexturePatch__6B_;
  (this->UnscaledPatchCoverage).field0_0x0._s_0.X = 2000.0;
  (this->UnscaledPatchCoverage).field0_0x0._s_0.Y = 2000.0;
  (this->HeightEncodingSettings).WorldSpaceEncodingScale = 1.0;
  this->BlendMode = AlphaBlend;
  this->FalloffMode = RoundedRectangle;
  this->Falloff = 0.0;
  this->HeightSourceMode = None;
  this->DetailPanelHeightSourceMode = None;
  (this->HeightInternalData).field0_0x0.DebugPtr = (ULandscapeHeightTextureBackedRenderTarget *)0x0;
  (this->HeightTextureAsset).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->bUseTextureAlphaForHeight = false;
  this->HeightEncoding = WorldUnits;
  (this->HeightEncodingSettings).ZeroInEncoding = 0.0;
  this->ZeroHeightMeaning = PatchZ;
  this->bApplyComponentZScale = true;
  (this->WeightPatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightPatches).ArrayNum = 0;
  (this->WeightPatches).ArrayMax = 0;
  this->bReinitializeHeightOnNextRender = false;
  this->bBaseResolutionOffLandscape = true;
  this->ResolutionMultiplier = 1.0;
  this->InitTextureSizeX = 0x21;
  this->InitTextureSizeY = 0x21;
  (this->HeightRenderTargetFormat).Value = '\a';
  return this;
}

// ULandscapeTexturePatch @ 14db131e0

ULandscapeTexturePatch * __thiscall
ULandscapeTexturePatch::ULandscapeTexturePatch
          (ULandscapeTexturePatch *this,FObjectInitializer *param_1)

{
  ULandscapePatchComponent::ULandscapePatchComponent((ULandscapePatchComponent *)this,param_1);
  this->ResolutionX = 0x20;
  this->ResolutionY = 0x20;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapeTexturePatch__6B_;
  (this->UnscaledPatchCoverage).field0_0x0._s_0.X = 2000.0;
  (this->UnscaledPatchCoverage).field0_0x0._s_0.Y = 2000.0;
  (this->HeightEncodingSettings).WorldSpaceEncodingScale = 1.0;
  this->BlendMode = AlphaBlend;
  this->FalloffMode = RoundedRectangle;
  this->Falloff = 0.0;
  this->HeightSourceMode = None;
  this->DetailPanelHeightSourceMode = None;
  (this->HeightInternalData).field0_0x0.DebugPtr = (ULandscapeHeightTextureBackedRenderTarget *)0x0;
  (this->HeightTextureAsset).field0_0x0.DebugPtr = (UTexture *)0x0;
  this->bUseTextureAlphaForHeight = false;
  this->HeightEncoding = WorldUnits;
  (this->HeightEncodingSettings).ZeroInEncoding = 0.0;
  this->ZeroHeightMeaning = PatchZ;
  this->bApplyComponentZScale = true;
  (this->WeightPatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightPatches).ArrayNum = 0;
  (this->WeightPatches).ArrayMax = 0;
  this->bReinitializeHeightOnNextRender = false;
  this->bBaseResolutionOffLandscape = true;
  this->ResolutionMultiplier = 1.0;
  this->InitTextureSizeX = 0x21;
  this->InitTextureSizeY = 0x21;
  (this->HeightRenderTargetFormat).Value = '\a';
  return this;
}

// ~ULandscapeTexturePatch @ 14db13580

void __thiscall ULandscapeTexturePatch::~ULandscapeTexturePatch(ULandscapeTexturePatch *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7ULandscapeTexturePatch__6B_;
  pFVar1 = (this->WeightPatches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ULandscapePatchComponent::~ULandscapePatchComponent((ULandscapePatchComponent *)this);
  return;
}

// AddWeightPatch @ 14db154d0

void __thiscall
ULandscapeTexturePatch::AddWeightPatch
          (ULandscapeTexturePatch *this,FName *param_1,ELandscapeTexturePatchSourceMode param_2,
          bool param_3)

{
  return;
}

// ClearWeightPatchBlendModeOverride @ 14db15550

void __thiscall
ULandscapeTexturePatch::ClearWeightPatchBlendModeOverride
          (ULandscapeTexturePatch *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar3 + 0x28) == *param_1)) {
      *(undefined1 *)(*(longlong *)pFVar3 + 0x4b) = 0;
      return;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// DisableAllWeightPatches @ 14db15f40

void __thiscall ULandscapeTexturePatch::DisableAllWeightPatches(ULandscapeTexturePatch *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetAllWeightPatchLayerNames @ 14db18290

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
ULandscapeTexturePatch::GetAllWeightPatchLayerNames
          (ULandscapeTexturePatch *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar3 + 0x28) != (FName)0x0)) {
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,(FName *)(*(longlong *)pFVar3 + 0x28));
    }
    pFVar3 = pFVar3 + 8;
  }
  return __return_storage_ptr__;
}

// GetFullUnscaledWorldSize @ 14db18410

TVector2<double> * __thiscall
ULandscapeTexturePatch::GetFullUnscaledWorldSize
          (ULandscapeTexturePatch *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined1 local_18 [16];
  
  pdVar2 = (double *)(**(code **)(*(longlong *)this + 0x6a8))(this,local_18);
  dVar1 = __real_3ff0000000000000;
  dVar3 = *pdVar2 - __real_3ff0000000000000;
  if (*pdVar2 - __real_3ff0000000000000 <= __real_3ff0000000000000) {
    dVar3 = __real_3ff0000000000000;
  }
  dVar4 = pdVar2[1] - __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((this->UnscaledPatchCoverage).field0_0x0._s_0.X / dVar3) * *pdVar2;
  if (dVar4 <= dVar1) {
    dVar4 = dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((this->UnscaledPatchCoverage).field0_0x0._s_0.Y / dVar4) * pdVar2[1];
  return __return_storage_ptr__;
}

// GetHeightInternalTexture @ 14db18490

UTexture2D * __thiscall
ULandscapeTexturePatch::GetHeightInternalTexture(ULandscapeTexturePatch *this)

{
  return (UTexture2D *)0x0;
}

// GetHeightRenderTarget @ 14db184a0

UTextureRenderTarget2D * __thiscall
ULandscapeTexturePatch::GetHeightRenderTarget(ULandscapeTexturePatch *this,bool param_1)

{
  return (UTextureRenderTarget2D *)0x0;
}

// GetHeightSourceMode @ 14db184b0

ELandscapeTexturePatchSourceMode __thiscall
ULandscapeTexturePatch::GetHeightSourceMode(ULandscapeTexturePatch *this)

{
  return this->HeightSourceMode;
}

// GetInitResolutionFromLandscape @ 14db18700

bool __thiscall
ULandscapeTexturePatch::GetInitResolutionFromLandscape
          (ULandscapeTexturePatch *this,float param_1,TVector2<double> *param_2)

{
  ALandscape *pAVar1;
  TTransform<double> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  
  pAVar1 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&this->field_0x278);
  if (pAVar1 != (ALandscape *)0x0) {
    (param_2->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector;
    pAVar1 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&this->field_0x278);
    if (*(longlong *)&pAVar1->field_0x1b8 == 0) {
      pTVar2 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar2 = (TTransform<double> *)(*(longlong *)&pAVar1->field_0x1b8 + 0x1f0);
    }
    dVar5 = (double)CONCAT44(*(uint *)((longlong)(pTVar2->Scale3D).XY.m128d_f64 + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)(pTVar2->Scale3D).XY.m128d_f64 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar6 = (double)CONCAT44(*(uint *)((longlong)(pTVar2->Scale3D).XY.m128d_f64 + 0xc) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)((pTVar2->Scale3D).XY.m128d_f64 + 1) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar5 <= dVar6) {
      dVar5 = dVar6;
    }
    if (0.0 < dVar5) {
      if (param_1 <= 0.0) {
        param_1 = __real_3f800000;
      }
      dVar6 = __real_3ff0000000000000 / (dVar5 / (double)param_1);
      dVar5 = *(double *)&this->field_0x238 * (this->UnscaledPatchCoverage).field0_0x0._s_0.Y *
              dVar6;
      dVar6 = *(double *)&this->field_0x230 * (this->UnscaledPatchCoverage).field0_0x0._s_0.X *
              dVar6;
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      lVar4 = 1 - ((longlong)ROUND(__real_bfe0000000000000 - (dVar5 + dVar5)) >> 1);
      lVar3 = 1 - ((longlong)ROUND(__real_bfe0000000000000 - (dVar6 + dVar6)) >> 1);
      if (lVar3 < 1) {
        lVar3 = 1;
      }
      if (lVar4 < 1) {
        lVar4 = 1;
      }
      (param_2->field0_0x0)._s_0.X = (double)lVar3;
      (param_2->field0_0x0)._s_0.Y = (double)lVar4;
      return true;
    }
  }
  return false;
}

// GetPatchToWorldTransform @ 14db18ac0

TTransform<double> * __thiscall
ULandscapeTexturePatch::GetPatchToWorldTransform
          (ULandscapeTexturePatch *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ALandscape *pAVar5;
  TTransform<double> *pTVar6;
  TQuat<double> *pTVar7;
  TQuat<double> local_78;
  TRotator<double> local_58;
  TRotator<double> local_40;
  TQuat<double> local_28;
  
  dVar1 = *(double *)&this->field_0x1f8;
  dVar2 = *(double *)&this->field_0x200;
  dVar3 = *(double *)&this->field_0x208;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)&this->field_0x1f0;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)&this->field_0x210;
  dVar4 = *(double *)&this->field_0x218;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = *(double *)&this->field_0x220;
  dVar3 = *(double *)&this->field_0x228;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = *(double *)&this->field_0x230;
  dVar4 = *(double *)&this->field_0x238;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = *(double *)&this->field_0x240;
  dVar3 = *(double *)&this->field_0x248;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  pAVar5 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&this->field_0x278);
  if (pAVar5 != (ALandscape *)0x0) {
    local_78.X = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
    local_78.Y = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
    local_78.Z = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
    local_78.W = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_78,&local_40);
    pAVar5 = TSoftObjectPtr<ALandscape>::Get((TSoftObjectPtr<ALandscape> *)&this->field_0x278);
    if (*(longlong *)&pAVar5->field_0x1b8 == 0) {
      pTVar6 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar6 = (TTransform<double> *)(*(longlong *)&pAVar5->field_0x1b8 + 0x1f0);
    }
    local_78.X = (pTVar6->Rotation).XY.m128d_f64[0];
    local_78.Y = (pTVar6->Rotation).XY.m128d_f64[1];
    local_78.Z = (pTVar6->Rotation).ZW.m128d_f64[0];
    local_78.W = (pTVar6->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_78,&local_58);
    local_78.X = local_58.Pitch;
    local_78.Z = local_58.Roll;
    local_78.Y = local_40.Yaw;
    pTVar7 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_78,&local_28);
    dVar1 = pTVar7->Y;
    dVar2 = pTVar7->Z;
    dVar3 = pTVar7->W;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar7->X;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14db19060

UClass * __cdecl ULandscapeTexturePatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeTexturePatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapeTexturePatch",
               &Z_Registration_Info_UClass_ULandscapeTexturePatch.InnerSingleton,
               StaticRegisterNativesULandscapeTexturePatch,0x330,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ULandscapeTexturePatch>,
               InternalVTableHelperCtorCaller<ULandscapeTexturePatch>,local_res8,
               ULandscapePatchComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeTexturePatch.InnerSingleton;
}

// GetResolution @ 14db19320

TVector2<double> * __thiscall
ULandscapeTexturePatch::GetResolution
          (ULandscapeTexturePatch *this,TVector2<double> *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = this->ResolutionX;
  uVar2 = this->ResolutionY;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)uVar2;
  return __return_storage_ptr__;
}

// GetUnscaledCoverage @ 14db1b0e0

TVector2<double> * __thiscall
ULandscapeTexturePatch::GetUnscaledCoverage
          (ULandscapeTexturePatch *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->UnscaledPatchCoverage).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->UnscaledPatchCoverage).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetWeightPatchInternalTexture @ 14db1b100

UTexture2D * __thiscall
ULandscapeTexturePatch::GetWeightPatchInternalTexture
          (ULandscapeTexturePatch *this,ULandscapeWeightPatchTextureInfo *param_1)

{
  return (UTexture2D *)0x0;
}

// GetWeightPatchRenderTarget @ 14db1b110

UTextureRenderTarget2D * __thiscall
ULandscapeTexturePatch::GetWeightPatchRenderTarget
          (ULandscapeTexturePatch *this,ULandscapeWeightPatchTextureInfo *param_1)

{
  return (UTextureRenderTarget2D *)0x0;
}

// GetWeightPatchRenderTarget @ 14db1b120

UTextureRenderTarget2D * __thiscall
ULandscapeTexturePatch::GetWeightPatchRenderTarget
          (ULandscapeTexturePatch *this,FName *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res20 [8];
  
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) {
    return (UTextureRenderTarget2D *)0x0;
  }
  pFVar4 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar4 == pFVar1) break;
    if (((*(longlong *)pFVar4 != 0) && ((*(uint *)(*(longlong *)pFVar4 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar4 + 0x28) == *param_1)) {
      if (param_2) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      }
      return (UTextureRenderTarget2D *)0x0;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (UTextureRenderTarget2D *)0x0;
}

// GetWeightPatchSourceMode @ 14db1b1e0

ELandscapeTexturePatchSourceMode __thiscall
ULandscapeTexturePatch::GetWeightPatchSourceMode(ULandscapeTexturePatch *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar3 + 0x28) == *param_1)) {
      return *(ELandscapeTexturePatchSourceMode *)(*(longlong *)pFVar3 + 0x48);
    }
    pFVar3 = pFVar3 + 8;
  }
  return None;
}

// GetWeightPatchTextureAsset @ 14db1b270

UTexture * __thiscall
ULandscapeTexturePatch::GetWeightPatchTextureAsset(ULandscapeTexturePatch *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar3 + 0x28) == *param_1)) {
      return *(UTexture **)(*(longlong *)pFVar3 + 0x38);
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UTexture *)0x0;
}

// RemoveAllWeightPatches @ 14db1bcf0

void __thiscall ULandscapeTexturePatch::RemoveAllWeightPatches(ULandscapeTexturePatch *this)

{
  (this->WeightPatches).ArrayNum = 0;
  if ((this->WeightPatches).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->WeightPatches).AllocatorInstance,0,&(this->WeightPatches).ArrayMax);
  }
  return;
}

// RemoveWeightPatch @ 14db1bd30

void __thiscall
ULandscapeTexturePatch::RemoveWeightPatch(ULandscapeTexturePatch *this,FName *param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  
  FVar2 = *param_1;
  iVar1 = (this->WeightPatches).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
    iVar8 = 0;
    if (((*(longlong *)pFVar3 == 0) || ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) != 0)) ||
       (*(FName *)(*(longlong *)pFVar3 + 0x28) != FVar2)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    lVar7 = 0;
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      do {
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 1;
        if (iVar1 <= lVar7) break;
        if (((*(longlong *)(pFVar3 + lVar7 * 8) == 0) ||
            ((*(uint *)(*(longlong *)(pFVar3 + lVar7 * 8) + 8) >> 0x1e & 1) != 0)) ||
           (*(FName *)(*(longlong *)(pFVar3 + lVar7 * 8) + 0x28) != FVar2)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
      } while (bVar9 == bVar4);
      if (bVar9 != 0) {
        if (iVar8 != iVar5) {
          memmove(pFVar3 + (longlong)iVar8 * 8,pFVar3 + (longlong)iVar5 * 8,
                  (longlong)(iVar6 - iVar5) << 3);
        }
        iVar8 = iVar8 + (iVar6 - iVar5);
      }
      bVar9 = bVar9 ^ 1;
      iVar5 = iVar6;
    } while (lVar7 < iVar1);
    (this->WeightPatches).ArrayNum = iVar8;
  }
  return;
}

// RequestReinitializeHeight @ 14db1be60

void __thiscall ULandscapeTexturePatch::RequestReinitializeHeight(ULandscapeTexturePatch *this)

{
  return;
}

// RequestReinitializeWeights @ 14db1be70

void __thiscall ULandscapeTexturePatch::RequestReinitializeWeights(ULandscapeTexturePatch *this)

{
  return;
}

// ResetHeightEncodingMode @ 14db1be80

void __thiscall
ULandscapeTexturePatch::ResetHeightEncodingMode
          (ULandscapeTexturePatch *this,ELandscapeTextureHeightPatchEncoding param_1)

{
  return;
}

// Serialize @ 14db1be90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULandscapeTexturePatch::Serialize(ULandscapeTexturePatch *this,FArchive *param_1)

{
  USceneComponent::Serialize((USceneComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014db1beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// Serialize @ 14db1bec0

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
ULandscapeTexturePatch::Serialize(ULandscapeTexturePatch *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// SetEditVisibilityLayer @ 14db1bf30

void __thiscall
ULandscapeTexturePatch::SetEditVisibilityLayer
          (ULandscapeTexturePatch *this,FName *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar3 + 0x28) == *param_1)) {
      *(bool *)(*(longlong *)pFVar3 + 0x30) = param_2;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetHeightEncodingSettings @ 14db1bfe0

void __thiscall
ULandscapeTexturePatch::SetHeightEncodingSettings
          (ULandscapeTexturePatch *this,FLandscapeTexturePatchEncodingSettings *param_1)

{
  double dVar1;
  
  dVar1 = param_1->WorldSpaceEncodingScale;
  (this->HeightEncodingSettings).ZeroInEncoding = param_1->ZeroInEncoding;
  (this->HeightEncodingSettings).WorldSpaceEncodingScale = dVar1;
  return;
}

// SetHeightRenderTargetFormat @ 14db1c000

void __thiscall
ULandscapeTexturePatch::SetHeightRenderTargetFormat
          (ULandscapeTexturePatch *this,ETextureRenderTargetFormat param_1)

{
  ULandscapeHeightTextureBackedRenderTarget *pUVar1;
  
  if ((this->HeightRenderTargetFormat).Value != param_1) {
    (this->HeightRenderTargetFormat).Value = (uchar)param_1;
    pUVar1 = (this->HeightInternalData).field0_0x0.DebugPtr;
    if (pUVar1 != (ULandscapeHeightTextureBackedRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014db1c023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,param_1 & 0xff);
      return;
    }
  }
  return;
}

// SetHeightSourceMode @ 14db1c040

void __thiscall
ULandscapeTexturePatch::SetHeightSourceMode
          (ULandscapeTexturePatch *this,ELandscapeTexturePatchSourceMode param_1)

{
  return;
}

// SetHeightTextureAsset @ 14db1c050

void __thiscall
ULandscapeTexturePatch::SetHeightTextureAsset(ULandscapeTexturePatch *this,UTexture *param_1)

{
  undefined1 local_res8 [8];
  
  if ((param_1 != (UTexture *)0x0) && (param_1->VirtualTextureStreaming != '\0')) {
    `ULandscapeTexturePatch::SetHeightTextureAsset'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->HeightTextureAsset).field0_0x0.DebugPtr = param_1;
  return;
}

// SetResolution @ 14db1c110

void __thiscall
ULandscapeTexturePatch::SetResolution(ULandscapeTexturePatch *this,TVector2<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  ULandscapeHeightTextureBackedRenderTarget *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined1 local_res8 [8];
  
  dVar11 = (param_1->field0_0x0)._s_0.X;
  if (dVar11 <= __real_3ff0000000000000) {
    dVar11 = __real_3ff0000000000000;
  }
  iVar9 = (int)dVar11;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  if (dVar11 <= __real_3ff0000000000000) {
    dVar11 = __real_3ff0000000000000;
  }
  iVar10 = (int)dVar11;
  if ((iVar9 != this->ResolutionX) || (iVar10 != this->ResolutionY)) {
    this->ResolutionX = iVar9;
    this->ResolutionY = iVar10;
    this->InitTextureSizeX = iVar9;
    this->InitTextureSizeY = iVar10;
    pUVar4 = (this->HeightInternalData).field0_0x0.DebugPtr;
    if ((this->HeightSourceMode != TextureAsset) && (this->HeightSourceMode != None)) {
      if ((pUVar4 == (ULandscapeHeightTextureBackedRenderTarget *)0x0) ||
         (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1038252320254589609>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Editor\\LandscapePatch\\Source\\LandscapePatch\\Private\\LandscapeTexturePatch.cpp"
                           ,0x557,"IsValid(InternalData)");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        (**(code **)(pUVar4->_padding_ + 0x2c8))(pUVar4,iVar9,iVar10);
      }
    }
    pFVar8 = (this->WeightPatches).AllocatorInstance.Data;
    iVar3 = (this->WeightPatches).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->WeightPatches).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      if ((*(longlong *)pFVar8 == 0) || ((*(uint *)(*(longlong *)pFVar8 + 8) >> 0x1e & 1) != 0)) {
LAB_14db1c27a:
        pFVar8 = pFVar8 + 8;
      }
      else {
        cVar2 = *(char *)(*(longlong *)pFVar8 + 0x48);
        plVar5 = *(longlong **)(*(longlong *)pFVar8 + 0x40);
        if ((cVar2 == '\x03') || (cVar2 == '\0')) goto LAB_14db1c27a;
        if ((plVar5 == (longlong *)0x0) || ((*(uint *)(plVar5 + 1) >> 0x1e & 1) != 0)) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1038252320254589609>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Editor\\LandscapePatch\\Source\\LandscapePatch\\Private\\LandscapeTexturePatch.cpp"
                             ,0x557,"IsValid(InternalData)");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          goto LAB_14db1c27a;
        }
        (**(code **)(*plVar5 + 0x2c8))(plVar5,iVar9,iVar10);
        pFVar8 = pFVar8 + 8;
      }
    }
  }
  return;
}

// SetUnscaledCoverage @ 14db1c2d0

void __thiscall
ULandscapeTexturePatch::SetUnscaledCoverage(ULandscapeTexturePatch *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->UnscaledPatchCoverage).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->UnscaledPatchCoverage).field0_0x0._s_0.Y = dVar1;
  return;
}

// SetUseAlphaChannelForWeightPatch @ 14db1c300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULandscapeTexturePatch::SetUseAlphaChannelForWeightPatch
          (ULandscapeTexturePatch *this,FName *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  pFVar4 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (((*(longlong *)pFVar4 != 0) && ((*(uint *)(*(longlong *)pFVar4 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar4 + 0x28) == *param_1)) {
      *(bool *)(*(longlong *)pFVar4 + 0x4a) = param_2;
      plVar3 = *(longlong **)(*(longlong *)pFVar4 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x300))(plVar3,param_2);
      }
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  ::FName::ToString(param_1,&local_28);
  if (2 < (byte)LogLandscapePatch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscapePatch);
  }
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return;
}

// SetWeightPatchBlendModeOverride @ 14db1c410

void __thiscall
ULandscapeTexturePatch::SetWeightPatchBlendModeOverride
          (ULandscapeTexturePatch *this,FName *param_1,ELandscapeTexturePatchBlendMode param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->WeightPatches).AllocatorInstance.Data;
  iVar2 = (this->WeightPatches).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->WeightPatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)pFVar3 != 0) && ((*(uint *)(*(longlong *)pFVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*(longlong *)pFVar3 + 0x28) == *param_1)) {
      *(ELandscapeTexturePatchBlendMode *)(*(longlong *)pFVar3 + 0x4c) = param_2;
      *(undefined1 *)(*(longlong *)pFVar3 + 0x4b) = 1;
      return;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SetWeightPatchSourceMode @ 14db1c4b0

void __thiscall
ULandscapeTexturePatch::SetWeightPatchSourceMode
          (ULandscapeTexturePatch *this,FName *param_1,ELandscapeTexturePatchSourceMode param_2)

{
  return;
}

// SetWeightPatchTextureAsset @ 14db1c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULandscapeTexturePatch::SetWeightPatchTextureAsset
          (ULandscapeTexturePatch *this,FName *param_1,UTexture *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  FString local_38;
  
  if (((param_2 == (UTexture *)0x0) || (param_2->VirtualTextureStreaming == '\0')) ||
     (bVar4 = `ULandscapeTexturePatch::SetWeightPatchTextureAsset'::__l3::<lambda_1>::operator()
                        (local_res18), bVar4)) {
    pFVar5 = (this->WeightPatches).AllocatorInstance.Data;
    iVar2 = (this->WeightPatches).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->WeightPatches).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar5 == pFVar1) {
        ::FName::ToString(param_1,&local_38);
        if (2 < (byte)LogLandscapePatch._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscapePatch);
        }
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
      if (((*(longlong *)pFVar5 != 0) && ((*(uint *)(*(longlong *)pFVar5 + 8) >> 0x1e & 1) == 0)) &&
         (lVar3 = *(longlong *)pFVar5, *(FName *)(lVar3 + 0x28) == *param_1)) break;
      pFVar5 = pFVar5 + 8;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    *(UTexture **)(lVar3 + 0x38) = param_2;
  }
  return;
}

// SnapToLandscape @ 14db1c8c0

void __thiscall ULandscapeTexturePatch::SnapToLandscape(ULandscapeTexturePatch *this)

{
  return;
}

// StaticRegisterNativesULandscapeTexturePatch @ 14db1d560

void __cdecl ULandscapeTexturePatch::StaticRegisterNativesULandscapeTexturePatch(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x28;
  local_18.DataPtr = Z_Construct_UClass_ULandscapeTexturePatch_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateHeightConvertToNativeParamsIfNeeded @ 14db1d5e0

void __thiscall
ULandscapeTexturePatch::UpdateHeightConvertToNativeParamsIfNeeded(ULandscapeTexturePatch *this)

{
  return;
}

// execAddWeightPatch @ 14db1da00

void __cdecl
ULandscapeTexturePatch::execAddWeightPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  uchar local_res20 [8];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x6d8))(param_1,puVar2,local_res8[0],local_res10[0] != 0);
  return;
}

// execClearWeightPatchBlendModeOverride @ 14db1db30

void __cdecl
ULandscapeTexturePatch::execClearWeightPatchBlendModeOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x728))(param_1,puVar2);
  return;
}

// execDisableAllWeightPatches @ 14db1dc60

void __cdecl
ULandscapeTexturePatch::execDisableAllWeightPatches(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014db1dc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x6f0))();
  return;
}

// execGetAllWeightPatchLayerNames @ 14db1dc90

void __cdecl
ULandscapeTexturePatch::execGetAllWeightPatchLayerNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar3 = *(longlong **)&param_1[0x13].field_0x8;
  iVar2 = *(int *)&param_1[0x13].field_0x10;
  plVar1 = plVar3 + iVar2;
  while( true ) {
    if (*(int *)&param_1[0x13].field_0x10 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar3 == plVar1) break;
    if (((*plVar3 != 0) && ((*(uint *)(*plVar3 + 8) >> 0x1e & 1) == 0)) &&
       (*(FName *)(*plVar3 + 0x28) != (FName)0x0)) {
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (&local_28,(FName *)(*plVar3 + 0x28));
    }
    plVar3 = plVar3 + 1;
  }
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetBlendMode @ 14db1dd90

void __cdecl
ULandscapeTexturePatch::execGetBlendMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x11].field_0x18;
  return;
}

// execGetFalloff @ 14db1ddf0

void __cdecl ULandscapeTexturePatch::execGetFalloff(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x11].field_0x1c;
  return;
}

// execGetFalloffMode @ 14db1de20

void __cdecl
ULandscapeTexturePatch::execGetFalloffMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x11].field_0x19;
  return;
}

// execGetFullUnscaledWorldSize @ 14db1de50

void __cdecl
ULandscapeTexturePatch::execGetFullUnscaledWorldSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x6a0))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetHeightRenderTarget @ 14db1de90

void __cdecl
ULandscapeTexturePatch::execGetHeightRenderTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x6d0))(param_1,local_res8[0] != 0);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetHeightSourceMode @ 14db1df40

void __cdecl
ULandscapeTexturePatch::execGetHeightSourceMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x6c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetInitResolutionFromLandscape @ 14db1e010

void __cdecl
ULandscapeTexturePatch::execGetInitResolutionFromLandscape
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  undefined4 local_res8 [2];
  uchar local_18 [16];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar3 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x6b8))(param_1,local_res8[0],puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetPatchToWorldTransform @ 14db1e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULandscapeTexturePatch::execGetPatchToWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x688))(param_1,local_78);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  uVar1 = puVar2[7];
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar1;
  uVar1 = puVar2[9];
  *(undefined8 *)((longlong)param_3 + 0x40) = puVar2[8];
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar1;
  uVar1 = puVar2[0xb];
  *(undefined8 *)((longlong)param_3 + 0x50) = puVar2[10];
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar1;
  return;
}

// execGetResolution @ 14db1e4c0

void __cdecl
ULandscapeTexturePatch::execGetResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x6a8))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetUnscaledCoverage @ 14db1e500

void __cdecl
ULandscapeTexturePatch::execGetUnscaledCoverage(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x690))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetWeightPatchRenderTarget @ 14db1e540

void __cdecl
ULandscapeTexturePatch::execGetWeightPatchRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  int local_res8 [2];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x710))(param_1,puVar3,local_res8[0] != 0);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetWeightPatchSourceMode @ 14db1e640

void __cdecl
ULandscapeTexturePatch::execGetWeightPatchSourceMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x6f8))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetWeightPatchTextureAsset @ 14db1e6f0

void __cdecl
ULandscapeTexturePatch::execGetWeightPatchTextureAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x700))(param_1,puVar3);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execRemoveAllWeightPatches @ 14db1e890

void __cdecl
ULandscapeTexturePatch::execRemoveAllWeightPatches(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014db1e8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x6e8))();
  return;
}

// execRemoveWeightPatch @ 14db1e950

void __cdecl
ULandscapeTexturePatch::execRemoveWeightPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar2 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x6e0))(param_1,puVar2);
  return;
}

// execRequestReinitializeHeight @ 14db1ea60

void __cdecl
ULandscapeTexturePatch::execRequestReinitializeHeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execRequestReinitializeWeights @ 14db1ea80

void __cdecl
ULandscapeTexturePatch::execRequestReinitializeWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execResetHeightEncodingMode @ 14db1eaa0

void __cdecl
ULandscapeTexturePatch::execResetHeightEncodingMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetBlendMode @ 14db1eb10

void __cdecl
ULandscapeTexturePatch::execSetBlendMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x11].field_0x18 != local_res8[0]) {
    param_1[0x11].field_0x18 = local_res8[0];
  }
  return;
}

// execSetEditVisibilityLayer @ 14db1ec20

void __cdecl
ULandscapeTexturePatch::execSetEditVisibilityLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  int local_res8 [2];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x730))(param_1,puVar2,local_res8[0] != 0);
  return;
}

// execSetFalloff @ 14db1ed10

void __cdecl ULandscapeTexturePatch::execSetFalloff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8[0] != *(float *)&param_1[0x11].field_0x1c) {
    *(float *)&param_1[0x11].field_0x1c = local_res8[0];
  }
  return;
}

// execSetFalloffMode @ 14db1eda0

void __cdecl
ULandscapeTexturePatch::execSetFalloffMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x11].field_0x19 != local_res8[0]) {
    param_1[0x11].field_0x19 = local_res8[0];
  }
  return;
}

// execSetHeightEncodingMode @ 14db1ee30

void __cdecl
ULandscapeTexturePatch::execSetHeightEncodingMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x12].field_0x11 != local_res8[0]) {
    param_1[0x12].field_0x11 = local_res8[0];
  }
  return;
}

// execSetHeightEncodingSettings @ 14db1eec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ULandscapeTexturePatch::execSetHeightEncodingSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = _UNK_15061cbc8;
  local_18 = ___xmm_3ff00000000000000000000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  puVar17 = (uchar *)&local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[0x12].field_0x18 = puVar17[0];
  param_1[0x12].field_0x19 = uVar2;
  param_1[0x12].field_0x1a = uVar3;
  param_1[0x12].field_0x1b = uVar4;
  param_1[0x12].field_0x1c = uVar5;
  param_1[0x12].field_0x1d = uVar6;
  param_1[0x12].field_0x1e = uVar7;
  param_1[0x12].field_0x1f = uVar8;
  param_1[0x12].field_0x20 = uVar9;
  param_1[0x12].field_0x21 = uVar10;
  param_1[0x12].field_0x22 = uVar11;
  param_1[0x12].field_0x23 = uVar12;
  param_1[0x12].field_0x24 = uVar13;
  param_1[0x12].field_0x25 = uVar14;
  param_1[0x12].field_0x26 = uVar15;
  param_1[0x12].field_0x27 = uVar16;
  return;
}

// execSetHeightRenderTargetFormat @ 14db1ef70

void __cdecl
ULandscapeTexturePatch::execSetHeightRenderTargetFormat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 0x14) != local_res8[0]) {
    *(char *)(param_1 + 0x14) = local_res8[0];
    if (*(longlong **)(param_1 + 0x12) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x12) + 0x300))();
    }
  }
  return;
}

// execSetHeightSourceMode @ 14db1f010

void __cdecl
ULandscapeTexturePatch::execSetHeightSourceMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x6c8))(param_1,local_res8[0]);
  return;
}

// execSetHeightTextureAsset @ 14db1f0a0

void __cdecl
ULandscapeTexturePatch::execSetHeightTextureAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined1 local_res8 [8];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != (UObject *)0x0) && ((local_res10[6].field_0x26 & 4) != 0)) {
    `ULandscapeTexturePatch::SetHeightTextureAsset'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&param_1[0x12].field_0x8 = pUVar2;
  return;
}

// execSetResolution @ 14db1f390

void __cdecl
ULandscapeTexturePatch::execSetResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x6b0))(param_1,&local_18);
  return;
}

// execSetUnscaledCoverage @ 14db1f4b0

void __cdecl
ULandscapeTexturePatch::execSetUnscaledCoverage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x698))(param_1,&local_18);
  return;
}

// execSetUseAlphaChannelForHeight @ 14db1f540

void __cdecl
ULandscapeTexturePatch::execSetUseAlphaChannelForHeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[0x12].field_0x10 != (local_res8[0] != 0)) {
    param_1[0x12].field_0x10 = local_res8[0] != 0;
  }
  return;
}

// execSetUseAlphaChannelForWeightPatch @ 14db1f5e0

void __cdecl
ULandscapeTexturePatch::execSetUseAlphaChannelForWeightPatch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  int local_res8 [2];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x718))(param_1,puVar2,local_res8[0] != 0);
  return;
}

// execSetWeightPatchBlendModeOverride @ 14db1f6d0

void __cdecl
ULandscapeTexturePatch::execSetWeightPatchBlendModeOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 local_res8 [8];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x720))(param_1,puVar2,local_res8[0]);
  return;
}

// execSetWeightPatchSourceMode @ 14db1f7c0

void __cdecl
ULandscapeTexturePatch::execSetWeightPatchSourceMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 local_res8 [8];
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x708))(param_1,puVar2,local_res8[0]);
  return;
}

// execSetWeightPatchTextureAsset @ 14db1f8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ULandscapeTexturePatch::execSetWeightPatchTextureAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UObject *pUVar5;
  bool bVar6;
  longlong *plVar7;
  FName *this;
  undefined1 local_res10 [8];
  UObject *local_res20;
  FName local_48;
  FString local_40;
  
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (UObject *)0x0;
  this = &local_48;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    this = (FName *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 == (UObject *)0x0) || ((local_res20[6].field_0x26 & 4) == 0)) ||
     (bVar6 = `ULandscapeTexturePatch::SetWeightPatchTextureAsset'::__l3::<lambda_1>::operator()
                        (local_res10), bVar6)) {
    plVar7 = *(longlong **)&param_1[0x13].field_0x8;
    iVar2 = *(int *)&param_1[0x13].field_0x10;
    plVar1 = plVar7 + iVar2;
    while( true ) {
      if (*(int *)&param_1[0x13].field_0x10 != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeWeightPatchTextureInfo>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (plVar7 == plVar1) {
        ::FName::ToString(this,&local_40);
        if (2 < (byte)LogLandscapePatch._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscapePatch);
        }
        if (local_40.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
        return;
      }
      if (((*plVar7 != 0) && ((*(uint *)(*plVar7 + 8) >> 0x1e & 1) == 0)) &&
         (lVar4 = *plVar7, *(FName *)(lVar4 + 0x28) == *this)) break;
      plVar7 = plVar7 + 1;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)(lVar4 + 0x38) = pUVar5;
  }
  return;
}

// execSetZeroHeightMeaning @ 14db1fa80

void __cdecl
ULandscapeTexturePatch::execSetZeroHeightMeaning(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 0x13) != local_res8[0]) {
    *(char *)(param_1 + 0x13) = local_res8[0];
  }
  return;
}

// execSnapToLandscape @ 14db1fb10

void __cdecl
ULandscapeTexturePatch::execSnapToLandscape(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// operator() @ 15058a0e0

bool __thiscall
`ULandscapeTexturePatch::SetHeightTextureAsset'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1038252320254589358>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1038252320254589358>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058a120

bool __thiscall
`ULandscapeTexturePatch::SetWeightPatchTextureAsset'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1038252320254588989>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1038252320254588989>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

