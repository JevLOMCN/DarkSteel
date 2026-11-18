// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXRHI
// Functions: 5

// operator() @ 14de0fb50

void __thiscall
`FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
          (void *this,TIntRect<int> *param_1,FRHITexture *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FName local_res18;
  FString local_18;
  
  if (param_2 != (FRHITexture *)0x0) {
    local_res18 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res18,&local_18);
    lVar3 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    if (*(int *)(lVar3 + 0x24) < *(int *)((longlong)&param_1->field0_0x0 + 8)) {
      (**(code **)(param_2->_padding_ + 0x20))(param_2);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRect.Max.X <= InTexture->GetDesc().Extent.X",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x49,
                         L"Texture rect validation failed: Rect.Max.X (%d) exceeds texture width (%d) for texture \'%s\'"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar3 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    if (*(int *)(lVar3 + 0x28) < *(int *)((longlong)&param_1->field0_0x0 + 0xc)) {
      (**(code **)(param_2->_padding_ + 0x20))(param_2);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRect.Max.Y <= InTexture->GetDesc().Extent.Y",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x4c,
                         L"Texture rect validation failed: Rect.Max.Y (%d) exceeds texture height (%d) for texture \'%s\'"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNGXCommonDLSSFeatureFlags @ 14de10a70

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

uint __thiscall FRHIDLSSArguments::GetNGXCommonDLSSFeatureFlags(FRHIDLSSArguments *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
    bVar2 = IsInRHIThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x22e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
  }
  uVar3 = 9;
  if (this->DenoiserMode != Off) {
    uVar3 = 1;
  }
  uVar4 = 0;
  if (this->bHighResolutionMotionVectors == false) {
    uVar4 = 2;
  }
  return -(uint)(this->bEnableAlphaUpscaling != false) & 0x80 |
         -(uint)(this->bUseAutoExposure != false) & 0x40 | uVar3 | uVar4;
}

// GetNGXDLSSCreateParams @ 14de10b10

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

NVSDK_NGX_DLSS_Create_Params * __thiscall
FRHIDLSSArguments::GetNGXDLSSCreateParams
          (FRHIDLSSArguments *this,NVSDK_NGX_DLSS_Create_Params *__return_storage_ptr__)

{
  NVSDK_NGX_PerfQuality_Value NVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  NVSDK_NGX_DLSS_Create_Params *pNVar6;
  longlong lVar7;
  FRHITexture *pFVar8;
  
  if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
    bVar4 = IsInRHIThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x23f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pNVar6 = (NVSDK_NGX_DLSS_Create_Params *)(*pcVar3)();
        return pNVar6;
      }
    }
  }
  __return_storage_ptr__->InFeatureCreateFlags = 0;
  __return_storage_ptr__->InEnableOutputSubrects = false;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = 0;
  (__return_storage_ptr__->Feature).InWidth =
       *(int *)((longlong)&(this->SrcRect).field0_0x0 + 8) - *(int *)&(this->SrcRect).field0_0x0;
  (__return_storage_ptr__->Feature).InHeight =
       *(int *)((longlong)&(this->SrcRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->SrcRect).field0_0x0 + 4);
  (__return_storage_ptr__->Feature).InTargetWidth =
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 8) - *(int *)&(this->DestRect).field0_0x0;
  (__return_storage_ptr__->Feature).InTargetHeight =
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 4);
  NVar1 = this->PerfQuality;
  (__return_storage_ptr__->Feature).InPerfQualityValue = NVar1;
  if (((int)NVar1 < 0) || (5 < (int)NVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.Feature.InPerfQualityValue >= NVSDK_NGX_PerfQuality_Value_MaxPerf) && (Result.Feature.InPerfQualityValue <= NVSDK_NGX_PerfQuality_Value_DLAA)"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x247,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pNVar6 = (NVSDK_NGX_DLSS_Create_Params *)(*pcVar3)();
      return pNVar6;
    }
  }
  uVar5 = GetNGXCommonDLSSFeatureFlags(this);
  __return_storage_ptr__->InFeatureCreateFlags = uVar5;
  pFVar8 = (FRHITexture *)0x0;
  if ((this->OutputColor->TextureDesc).Dimension == Texture2D) {
    pFVar8 = this->OutputColor;
  }
  lVar7 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
  iVar2 = *(int *)(lVar7 + 0x28);
  lVar7 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
  if ((*(int *)(lVar7 + 0x24) ==
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 8) - *(int *)&(this->DestRect).field0_0x0)
     && (iVar2 == *(int *)((longlong)&(this->DestRect).field0_0x0 + 0xc) -
                  *(int *)((longlong)&(this->DestRect).field0_0x0 + 4))) {
    __return_storage_ptr__->InEnableOutputSubrects = false;
  }
  else {
    __return_storage_ptr__->InEnableOutputSubrects = true;
  }
  return __return_storage_ptr__;
}

// GetNGXDLSSRRCreateParams @ 14de10c40

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

NVSDK_NGX_DLSSD_Create_Params * __thiscall
FRHIDLSSArguments::GetNGXDLSSRRCreateParams
          (FRHIDLSSArguments *this,NVSDK_NGX_DLSSD_Create_Params *__return_storage_ptr__)

{
  NVSDK_NGX_PerfQuality_Value NVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  NVSDK_NGX_DLSSD_Create_Params *pNVar6;
  longlong lVar7;
  FRHITexture *pFVar8;
  
  if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
    bVar4 = IsInRHIThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x250,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pNVar6 = (NVSDK_NGX_DLSSD_Create_Params *)(*pcVar3)();
        return pNVar6;
      }
    }
  }
  __return_storage_ptr__->InDenoiseMode = NVSDK_NGX_DLSS_Denoise_Mode_Off;
  __return_storage_ptr__->InRoughnessMode = NVSDK_NGX_DLSS_Roughness_Mode_Unpacked;
  __return_storage_ptr__->InUseHWDepth = NVSDK_NGX_DLSS_Depth_Type_Linear;
  __return_storage_ptr__->InFeatureCreateFlags = 0;
  __return_storage_ptr__->InEnableOutputSubrects = false;
  *(undefined3 *)&__return_storage_ptr__->field_0x25 = 0;
  __return_storage_ptr__->InWidth =
       *(int *)((longlong)&(this->SrcRect).field0_0x0 + 8) - *(int *)&(this->SrcRect).field0_0x0;
  __return_storage_ptr__->InHeight =
       *(int *)((longlong)&(this->SrcRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->SrcRect).field0_0x0 + 4);
  __return_storage_ptr__->InTargetWidth =
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 8) - *(int *)&(this->DestRect).field0_0x0;
  __return_storage_ptr__->InTargetHeight =
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 0xc) -
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 4);
  NVar1 = this->PerfQuality;
  __return_storage_ptr__->InPerfQualityValue = NVar1;
  if (((int)NVar1 < 0) || (5 < (int)NVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Result.InPerfQualityValue >= NVSDK_NGX_PerfQuality_Value_MaxPerf) && (Result.InPerfQualityValue <= NVSDK_NGX_PerfQuality_Value_DLAA)"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,600,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pNVar6 = (NVSDK_NGX_DLSSD_Create_Params *)(*pcVar3)();
      return pNVar6;
    }
  }
  uVar5 = GetNGXCommonDLSSFeatureFlags(this);
  __return_storage_ptr__->InFeatureCreateFlags = uVar5;
  pFVar8 = (FRHITexture *)0x0;
  if ((this->OutputColor->TextureDesc).Dimension == Texture2D) {
    pFVar8 = this->OutputColor;
  }
  lVar7 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
  iVar2 = *(int *)(lVar7 + 0x28);
  lVar7 = (**(code **)(pFVar8->_padding_ + 0x20))(pFVar8);
  if ((*(int *)(lVar7 + 0x24) ==
       *(int *)((longlong)&(this->DestRect).field0_0x0 + 8) - *(int *)&(this->DestRect).field0_0x0)
     && (iVar2 == *(int *)((longlong)&(this->DestRect).field0_0x0 + 0xc) -
                  *(int *)((longlong)&(this->DestRect).field0_0x0 + 4))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  __return_storage_ptr__->InEnableOutputSubrects = bVar4;
  __return_storage_ptr__->InDenoiseMode = NVSDK_NGX_DLSS_Denoise_Mode_DLUnified;
  return __return_storage_ptr__;
}

// Validate @ 14de12430

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __thiscall FRHIDLSSArguments::Validate(FRHIDLSSArguments *this)

{
  code *pcVar1;
  bool bVar2;
  TIntRect<int>_u_0 *pTVar3;
  undefined1 local_res8 [8];
  TIntRect<int>_u_0 local_28;
  TIntRect<int>_u_0 local_18;
  
  if (this->OutputColor == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputColor",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,&this->DestRect,this->OutputColor);
  local_18._s_0.Max.field0_0x0 =
       (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)&(this->SrcRect).field0_0x0 + 8))->_s_0;
  local_18._s_0.Min.field0_0x0 = (TIntPoint<int>)*(undefined8 *)&(this->SrcRect).field0_0x0;
  local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_28._8_4_ = local_18._8_4_ - local_18._0_4_;
  local_28._12_4_ = local_18._12_4_ - local_18._4_4_;
  if (this->InputColor == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputColor",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_18._s_0,this->InputColor);
  if (this->InputDepth == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputDepth",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = &local_28;
  if (this->DenoiserMode != DLSSRR) {
    pTVar3 = &local_18;
  }
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&pTVar3->_s_0,this->InputDepth);
  if (this->InputMotionVectors == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputMotionVectors",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_28._s_0,this->InputMotionVectors);
  if (this->InputExposure == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputExposure",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_18._s_0,this->InputBiasCurrentColorMask);
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_28._s_0,this->InputDiffuseAlbedo);
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_28._s_0,this->InputSpecularAlbedo);
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_28._s_0,this->InputNormals);
  `FRHIDLSSArguments::Validate'::__l2::<lambda_1>::operator()
            (local_res8,(TIntRect<int> *)&local_28._s_0,this->InputRoughness);
  return;
}

