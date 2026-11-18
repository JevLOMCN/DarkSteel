// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147296c20

UClass * __cdecl UMaterialExpressionCustom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCustom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCustom",
               &Z_Registration_Info_UClass_UMaterialExpressionCustom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCustom,0x120,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCustom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCustom>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCustom.InnerSingleton;
}

// UMaterialExpressionCustom @ 14729cc20

UMaterialExpressionCustom * __thiscall
UMaterialExpressionCustom::UMaterialExpressionCustom
          (UMaterialExpressionCustom *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCustom__6B_;
  (this->Code).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Code).Data.ArrayNum = 0;
  (this->Code).Data.ArrayMax = 0;
  (this->OutputType).Value = '\0';
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->AdditionalOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalOutputs).ArrayNum = 0;
  (this->AdditionalOutputs).ArrayMax = 0;
  (this->AdditionalDefines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDefines).ArrayNum = 0;
  (this->AdditionalDefines).ArrayMax = 0;
  (this->IncludeFilePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeFilePaths).ArrayNum = 0;
  (this->IncludeFilePaths).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionCustom @ 14729da80

void __thiscall
UMaterialExpressionCustom::~UMaterialExpressionCustom(UMaterialExpressionCustom *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionCustom__6B_;
  DestructItems<FString,int>
            ((FString *)(this->IncludeFilePaths).AllocatorInstance.Data,
             (this->IncludeFilePaths).ArrayNum);
  pFVar1 = (this->IncludeFilePaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCustomDefine,int>
            ((FCustomDefine *)(this->AdditionalDefines).AllocatorInstance.Data,
             (this->AdditionalDefines).ArrayNum);
  pFVar1 = (this->AdditionalDefines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Code).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0ad0

UClass * __cdecl UMaterialExpressionCustom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCustom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCustom",
               &Z_Registration_Info_UClass_UMaterialExpressionCustom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCustom,0x120,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCustom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCustom>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCustom.InnerSingleton;
}

// Serialize @ 1472a1b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionCustom::Serialize(UMaterialExpressionCustom *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUMaterialExpressionCustom @ 1472a1da0

void __cdecl UMaterialExpressionCustom::StaticRegisterNativesUMaterialExpressionCustom(void)

{
  return;
}

// UMaterialExpressionCustom @ 148afb470

UMaterialExpressionCustom * __thiscall
UMaterialExpressionCustom::UMaterialExpressionCustom
          (UMaterialExpressionCustom *this,FObjectInitializer *param_1)

{
  TArray<FCustomInput,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMaterialExpressionCustom *pUVar6;
  longlong lVar7;
  FName local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  UObject::UObject((UObject *)this,param_1);
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->Inputs;
  this->_padding_ = (longlong)&___7UMaterialExpressionCustom__6B_;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Code).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Code).Data.ArrayNum = 0;
  (this->Code).Data.ArrayMax = 0;
  (this->OutputType).Value = '\0';
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->AdditionalOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalOutputs).ArrayNum = 0;
  (this->AdditionalOutputs).ArrayMax = 0;
  (this->AdditionalDefines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDefines).ArrayNum = 0;
  (this->AdditionalDefines).ArrayMax = 0;
  (this->IncludeFilePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludeFilePaths).ArrayNum = 0;
  (this->IncludeFilePaths).ArrayMax = 0;
  ::FString::operator=(&this->Description,L"Custom");
  ::FString::operator=
            (&this->Code,
             L"// The below expression will get compiled\n// into the output of this node\nfloat3(1, 1, 1)"
            );
  this->ShowCode = false;
  (this->OutputType).Value = '\x02';
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  uStack_40 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->Inputs).ArrayMax * 0x30)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialExpressionCustom *)(*pcVar3)();
      return pUVar6;
    }
  }
  iVar5 = (this->Inputs).ArrayNum;
  if (iVar5 == (this->Inputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&(this->Inputs).ArrayMax);
  }
  lVar7 = (longlong)iVar5;
  (this->Inputs).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30) = local_48;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 8) = uStack_40;
  *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10) = local_38;
  *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x10 + 8) = CONCAT44(uStack_2c,uStack_30);
  *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20) = CONCAT44(uStack_24,uStack_28);
  *(ulonglong *)(pFVar2 + lVar7 * 0x30 + 0x20 + 8) = CONCAT44(uStack_1c,uStack_20);
  ::FName::FName(&local_res8,L"");
  if ((this->Inputs).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UMaterialExpressionCustom *)(*pcVar3)();
      return pUVar6;
    }
  }
  *(FName *)(pTVar1->AllocatorInstance).Data = local_res8;
  return this;
}

// Serialize @ 148b03b30

void __thiscall
UMaterialExpressionCustom::Serialize
          (UMaterialExpressionCustom *this,FStructuredArchiveRecord param_1)

{
  FScriptContainerElement *_Src;
  wchar_t *pwVar1;
  int iVar2;
  FArchiveState *this_00;
  FString *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  FString *this_01;
  longlong lVar7;
  ForAnyElementType FVar8;
  wchar_t **ppwVar9;
  FSlotBase local_res10;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FRenderingObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FNaniteResearchStreamObjectVersion::GUID);
  this_01 = &this->Code;
  lVar6 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = (this->Code).Data.ArrayNum;
  lVar7 = (longlong)local_90;
  _Src = (this_01->Data).AllocatorInstance.Data;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar7 * 2);
  }
  iVar2 = (this_00->ArUEVer).FileVersionUE4;
  if (iVar2 < 0x1f1) {
    ::FString::ReplaceInline
              (this_01,L"Parameters.WorldPosition",L"Parameters.AbsoluteWorldPosition",CaseSensitive
              );
  }
  else if (iVar2 < 0x1f9) {
    pFVar3 = UniformMembers;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(UniformMembers,L"FieldOfViewWideAngles");
        ::FString::FString(UniformMembers + 1,L"PrevFieldOfViewWideAngles");
        ::FString::FString(UniformMembers + 2,L"ViewRectMin");
        ::FString::FString(UniformMembers + 3,L"ViewSizeAndInvSize");
        ::FString::FString(UniformMembers + 4,L"BufferSizeAndInvSize");
        ::FString::FString(UniformMembers + 5,L"ExposureScale");
        ::FString::FString(UniformMembers + 6,L"DiffuseOverrideParameter");
        ::FString::FString(UniformMembers + 7,L"SpecularOverrideParameter");
        ::FString::FString(UniformMembers + 8,L"NormalOverrideParameter");
        ::FString::FString(UniformMembers + 9,L"RoughnessOverrideParameter");
        ::FString::FString(UniformMembers + 10,L"PrevFrameGameTime");
        ::FString::FString(UniformMembers + 0xb,L"PrevFrameRealTime");
        ::FString::FString(UniformMembers + 0xc,L"OutOfBoundsMask");
        ::FString::FString(UniformMembers + 0xd,L"WorldCameraMovementSinceLastFrame");
        ::FString::FString(UniformMembers + 0xe,L"CullingSign");
        ::FString::FString(UniformMembers + 0xf,L"NearPlane");
        ::FString::FString(UniformMembers + 0x10,L"GameTime");
        ::FString::FString(UniformMembers + 0x11,L"RealTime");
        ::FString::FString(UniformMembers + 0x12,L"Random");
        ::FString::FString(UniformMembers + 0x13,L"FrameNumber");
        ::FString::FString(UniformMembers + 0x14,L"CameraCut");
        ::FString::FString(UniformMembers + 0x15,L"UseLightmaps");
        ::FString::FString(UniformMembers + 0x16,L"UnlitViewmodeMask");
        ::FString::FString(UniformMembers + 0x17,L"DirectionalLightColor");
        ::FString::FString(UniformMembers + 0x18,L"DirectionalLightDirection");
        ::FString::FString(UniformMembers + 0x19,L"DirectionalLightShadowTransition");
        ::FString::FString(UniformMembers + 0x1a,L"DirectionalLightShadowSize");
        ::FString::FString(UniformMembers + 0x1b,L"DirectionalLightScreenToShadow");
        ::FString::FString(UniformMembers + 0x1c,L"DirectionalLightShadowDistances");
        ::FString::FString(UniformMembers + 0x1d,L"UpperSkyColor");
        ::FString::FString(UniformMembers + 0x1e,L"LowerSkyColor");
        ::FString::FString(UniformMembers + 0x1f,L"TranslucencyLightingVolumeMin");
        ::FString::FString(UniformMembers + 0x20,L"TranslucencyLightingVolumeInvSize");
        ::FString::FString(UniformMembers + 0x21,L"TemporalAAParams");
        ::FString::FString(UniformMembers + 0x22,L"CircleDOFParams");
        ::FString::FString(UniformMembers + 0x23,L"DepthOfFieldFocalDistance");
        ::FString::FString(UniformMembers + 0x24,L"DepthOfFieldScale");
        ::FString::FString(UniformMembers + 0x25,L"DepthOfFieldFocalLength");
        ::FString::FString(UniformMembers + 0x26,L"DepthOfFieldFocalRegion");
        ::FString::FString(UniformMembers + 0x27,L"DepthOfFieldNearTransitionRegion");
        ::FString::FString(UniformMembers + 0x28,L"DepthOfFieldFarTransitionRegion");
        ::FString::FString(UniformMembers + 0x29,L"MotionBlurNormalizedToPixel");
        ::FString::FString(UniformMembers + 0x2a,L"GeneralPurposeTweak");
        ::FString::FString(UniformMembers + 0x2b,L"DemosaicVposOffset");
        ::FString::FString(UniformMembers + 0x2c,L"IndirectLightingColorScale");
        ::FString::FString(UniformMembers + 0x2d,L"HDR32bppEncodingMode");
        ::FString::FString(UniformMembers + 0x2e,L"AtmosphericFogSunDirection");
        ::FString::FString(UniformMembers + 0x2f,L"AtmosphericFogSunPower");
        ::FString::FString(UniformMembers + 0x30,L"AtmosphericFogPower");
        ::FString::FString(UniformMembers + 0x31,L"AtmosphericFogDensityScale");
        ::FString::FString(UniformMembers + 0x32,L"AtmosphericFogDensityOffset");
        ::FString::FString(UniformMembers + 0x33,L"AtmosphericFogGroundOffset");
        ::FString::FString(UniformMembers + 0x34,L"AtmosphericFogDistanceScale");
        ::FString::FString(UniformMembers + 0x35,L"AtmosphericFogAltitudeScale");
        ::FString::FString(UniformMembers + 0x36,L"AtmosphericFogHeightScaleRayleigh");
        ::FString::FString(UniformMembers + 0x37,L"AtmosphericFogStartDistance");
        ::FString::FString(UniformMembers + 0x38,L"AtmosphericFogDistanceOffset");
        ::FString::FString(UniformMembers + 0x39,L"AtmosphericFogSunDiscScale");
        ::FString::FString(UniformMembers + 0x3a,L"AtmosphericFogRenderMask");
        ::FString::FString(UniformMembers + 0x3b,L"AtmosphericFogInscatterAltitudeSampleNum");
        ::FString::FString(UniformMembers + 0x3c,L"AtmosphericFogSunColor");
        ::FString::FString(UniformMembers + 0x3d,L"AmbientCubemapTint");
        ::FString::FString(UniformMembers + 0x3e,L"AmbientCubemapIntensity");
        ::FString::FString(UniformMembers + 0x3f,L"RenderTargetSize");
        ::FString::FString(UniformMembers + 0x40,L"SkyLightParameters");
        ::FString::FString(UniformMembers + 0x41,L"SceneFString(TEXTureMinMax");
        ::FString::FString(UniformMembers + 0x42,L"SkyLightColor");
        ::FString::FString(UniformMembers + 0x43,L"SkyIrradianceEnvironmentMap");
        ::FString::FString(UniformMembers + 0x44,L"MobilePreviewMode");
        ::FString::FString(UniformMembers + 0x45,L"HMDEyePaddingOffset");
        ::FString::FString(UniformMembers + 0x46,L"DirectionalLightShadowFString(TEXTure");
        ::FString::FString(UniformMembers + 0x47,L"SamplerState");
        atexit(`UMaterialExpressionCustom::Serialize'::__l12::
               _dynamic_atexit_destructor_for__UniformMembers__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    ::FString::FString(&local_58,L"View.");
    ::FString::FString(&local_68,L"Frame.");
    do {
      ::FString::ConcatFF(&local_78,&local_68,pFVar3);
      ::FString::ConcatFF(&local_88,&local_58,pFVar3);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar8.Data = local_88.Data.AllocatorInstance.Data;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar5.Data = local_78.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline(this_01,(wchar_t *)FVar5.Data,(wchar_t *)FVar8.Data,CaseSensitive);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != (FString *)&::_TSS0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = FArchiveState::CustomVer(this_00,&FRenderingObjectVersion::GUID);
  if (iVar2 < 7) {
    ::FString::ReplaceInline
              (this_01,L"View.RenderTargetSize",L"View.BufferSizeAndInvSize.xy",CaseSensitive);
  }
  iVar2 = FArchiveState::CustomVer(this_00,&FNaniteResearchStreamObjectVersion::GUID);
  if (iVar2 < 1) {
    ppwVar9 = UniformMembers;
    do {
      pwVar1 = *ppwVar9;
      pFVar3 = ::FString::FString(&local_68,L"View.");
      ::FString::ConcatFC(&local_88,pFVar3,pwVar1);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar3 = ::FString::FString(&local_38,L")");
      pFVar4 = ::FString::FString(&local_48,L"DFDemote(ResolvedView.");
      ::FString::ConcatFC(&local_58,pFVar4,pwVar1);
      ::FString::ConcatFF(&local_78,&local_58,pFVar3);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar8.Data = local_78.Data.AllocatorInstance.Data;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar5.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline(this_01,(wchar_t *)FVar5.Data,(wchar_t *)FVar8.Data,CaseSensitive);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      ppwVar9 = ppwVar9 + 1;
    } while (ppwVar9 != GlobalExpressionsToReplace);
    ::FString::ReplaceInline
              (this_01,L"ResolvedDFDemote(ResolvedView.",L"DFDemote(ResolvedView.",CaseSensitive);
    do {
      ::FString::ReplaceInline
                (this_01,*(wchar_t **)((longlong)GlobalExpressionsToReplace + lVar6),
                 *(wchar_t **)((longlong)GlobalExpressionsReplacement + lVar6),CaseSensitive);
      lVar6 = lVar6 + 8;
    } while (lVar6 < 0x28);
    ppwVar9 = GlobalExpressionsToDemote;
    do {
      pwVar1 = *ppwVar9;
      ::FString::PrintfImpl(&local_78,L"WSDemote(%s)");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar8.Data = local_78.Data.AllocatorInstance.Data;
      }
      ::FString::ReplaceInline(this_01,pwVar1,(wchar_t *)FVar8.Data,CaseSensitive);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      ppwVar9 = ppwVar9 + 1;
    } while (ppwVar9 != (wchar_t **)&UE::Engine::Private::bUseOldDuplicateEditInlineSubObjectsPath);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

