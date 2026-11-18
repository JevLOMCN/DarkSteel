// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXRHI
// Functions: 2

// GetDLSSOptimalSettings @ 14de102c0

/* WARNING: Enum "Type": Some values do not have unique names */

FDLSSOptimalSettings * __thiscall
NGXRHI::FDLSSQueryFeature::GetDLSSOptimalSettings
          (FDLSSQueryFeature *this,FDLSSOptimalSettings *__return_storage_ptr__,
          FDLSSResolutionParameters *param_1)

{
  NVSDK_NGX_PerfQuality_Value NVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  NVSDK_NGX_Parameter *pNVar7;
  code *pcVar8;
  bool bVar9;
  NVSDK_NGX_Result NVar10;
  FDLSSOptimalSettings *pFVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  code *local_res10;
  
  if (this->CapabilityParameters == (NVSDK_NGX_Parameter *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CapabilityParameters",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x1eb,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FDLSSOptimalSettings *)(*pcVar8)();
      return pFVar11;
    }
  }
  pNVar7 = this->CapabilityParameters;
  NVar1 = param_1->PerfQuality;
  uVar2 = param_1->Height;
  uVar3 = param_1->Width;
  local_res10 = (code *)0x0;
  NVSDK_NGX_Parameter_GetVoidPointer(pNVar7,"DLSSOptimalSettingsCallback",&local_res10);
  if (local_res10 == (code *)0x0) {
    NVar10 = NVSDK_NGX_Result_FAIL_OutOfDate;
  }
  else {
    NVSDK_NGX_Parameter_SetUI(pNVar7,"Width",uVar3);
    NVSDK_NGX_Parameter_SetUI(pNVar7,"Height",uVar2);
    NVSDK_NGX_Parameter_SetI(pNVar7,"PerfQualityValue",NVar1);
    NVSDK_NGX_Parameter_SetI(pNVar7,"RTXValue",0);
    NVar10 = (*local_res10)(pNVar7);
    if ((NVar10 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
      NVSDK_NGX_Parameter_GetUI(pNVar7,"OutWidth",(uint *)__return_storage_ptr__);
      NVSDK_NGX_Parameter_GetUI
                (pNVar7,"OutHeight",(uint *)&(__return_storage_ptr__->RenderSize).field0_0x0._s_0.Y)
      ;
      iVar4 = (__return_storage_ptr__->RenderSize).field0_0x0._s_0.X;
      (__return_storage_ptr__->RenderSizeMax).field0_0x0._s_0.X = iVar4;
      iVar12 = (__return_storage_ptr__->RenderSize).field0_0x0._s_0.Y;
      (__return_storage_ptr__->RenderSizeMax).field0_0x0._s_0.Y = iVar12;
      (__return_storage_ptr__->RenderSizeMin).field0_0x0._s_0.X = iVar4;
      (__return_storage_ptr__->RenderSizeMin).field0_0x0._s_0.Y = iVar12;
      NVSDK_NGX_Parameter_GetUI
                (pNVar7,"DLSS.Get.Dynamic.Max.Render.Width",
                 (uint *)&__return_storage_ptr__->RenderSizeMax);
      NVSDK_NGX_Parameter_GetUI
                (pNVar7,"DLSS.Get.Dynamic.Max.Render.Height",
                 (uint *)&(__return_storage_ptr__->RenderSizeMax).field0_0x0._s_0.Y);
      NVSDK_NGX_Parameter_GetUI
                (pNVar7,"DLSS.Get.Dynamic.Min.Render.Width",
                 (uint *)&__return_storage_ptr__->RenderSizeMin);
      NVSDK_NGX_Parameter_GetUI
                (pNVar7,"DLSS.Get.Dynamic.Min.Render.Height",
                 (uint *)&(__return_storage_ptr__->RenderSizeMin).field0_0x0._s_0.Y);
      NVSDK_NGX_Parameter_GetF(pNVar7,"Sharpness",local_res8);
    }
  }
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    GetNGXResultAsString(NVar10);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
  }
  if ((NVar10 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((ResultGetOptimalSettings) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                       ,0x1ff,L"failed to query supported DLSS modes");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FDLSSOptimalSettings *)(*pcVar8)();
      return pFVar11;
    }
  }
  iVar4 = (__return_storage_ptr__->RenderSize).field0_0x0._s_0.X;
  if ((iVar4 < 1) || (iVar12 = (__return_storage_ptr__->RenderSize).field0_0x0._s_0.Y, iVar12 < 1))
  {
    iVar12 = (__return_storage_ptr__->RenderSize).field0_0x0._s_0.Y;
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  __return_storage_ptr__->bIsSupported = bVar9;
  iVar5 = (__return_storage_ptr__->RenderSizeMax).field0_0x0._s_0.Y;
  fVar16 = (float)(__return_storage_ptr__->RenderSizeMin).field0_0x0._s_0.Y / (float)param_1->Height
  ;
  fVar13 = (float)(__return_storage_ptr__->RenderSizeMin).field0_0x0._s_0.X / (float)param_1->Width;
  if (fVar13 <= fVar16) {
    fVar16 = fVar13;
  }
  iVar6 = (__return_storage_ptr__->RenderSizeMax).field0_0x0._s_0.X;
  __return_storage_ptr__->MinResolutionFraction = fVar16;
  fVar13 = (float)iVar5 / (float)param_1->Height;
  fVar14 = (float)iVar6 / (float)param_1->Width;
  if (fVar14 <= fVar13) {
    fVar13 = fVar14;
  }
  __return_storage_ptr__->MaxResolutionFraction = fVar13;
  fVar14 = (float)iVar12 / (float)param_1->Height;
  fVar15 = (float)iVar4 / (float)param_1->Width;
  if (fVar15 <= fVar14) {
    fVar14 = fVar15;
  }
  if (fVar13 <= fVar14) {
    fVar14 = fVar13;
  }
  if (fVar14 <= fVar16) {
    fVar14 = fVar16;
  }
  __return_storage_ptr__->OptimalResolutionFraction = fVar14;
  return __return_storage_ptr__;
}

// QueryDLSSSupport @ 14de11410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall NGXRHI::FDLSSQueryFeature::QueryDLSSSupport(FDLSSQueryFeature *this)

{
  NVSDK_NGX_Parameter *pNVar1;
  NVSDK_NGX_Result NVar2;
  NVSDK_NGX_Result NVar3;
  NVSDK_NGX_Result NVar4;
  NVSDK_NGX_Result NVar5;
  NVSDK_NGX_Result NVar6;
  NVSDK_NGX_Result local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [6];
  
  local_res10[0] = 1;
  local_res18[0] = 0;
  pNVar1 = this->CapabilityParameters;
  local_res20[0] = 0;
  local_68 = 1;
  local_64 = 0;
  local_60 = 0;
  if (pNVar1 == (NVSDK_NGX_Parameter *)0x0) {
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    this->NGXInitResult = NVSDK_NGX_Result_Fail;
    this->bIsDlssSRAvailable = false;
    this->bIsDlssRRAvailable = false;
    return;
  }
  NVar2 = (**(code **)((longlong)*pNVar1 + 0x58))
                    (pNVar1,"SuperSampling.NeedsUpdatedDriver",local_res10);
  NVar3 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                    (this->CapabilityParameters,"SuperSampling.MinDriverVersionMajor",local_res18);
  NVar4 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                    (this->CapabilityParameters,"SuperSampling.MinDriverVersionMinor",local_res20);
  NVar5 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                    (this->CapabilityParameters,"SuperSamplingDenoising.NeedsUpdatedDriver",
                     &local_68);
  local_res8[0] =
       (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                 (this->CapabilityParameters,"SuperSamplingDenoising.MinDriverVersionMajor",
                  &local_64);
  NVar6 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                    (this->CapabilityParameters,"SuperSamplingDenoising.MinDriverVersionMinor",
                     &local_60);
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    GetNGXResultAsString(NVar2);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      GetNGXResultAsString(NVar3);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      if (4 < (byte)LogDLSSNGXRHI._0_1_) {
        GetNGXResultAsString(NVar4);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
        if (4 < (byte)LogDLSSNGXRHI._0_1_) {
          GetNGXResultAsString(NVar5);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
          if (4 < (byte)LogDLSSNGXRHI._0_1_) {
            GetNGXResultAsString(local_res8[0]);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
            if (4 < (byte)LogDLSSNGXRHI._0_1_) {
              GetNGXResultAsString(NVar6);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
            }
          }
        }
      }
    }
  }
  if ((NVar2 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
  }
  else {
    (this->NGXDLSSSRDriverRequirements).DriverUpdateRequired = local_res10[0] != 0;
    if ((((NVar3 & 0xfff00000) != NVSDK_NGX_Result_Fail) &&
        ((NVar4 & 0xfff00000) != NVSDK_NGX_Result_Fail)) && (local_res18[0] != 0)) {
      (this->NGXDLSSSRDriverRequirements).MinDriverVersionMajor = local_res18[0];
      (this->NGXDLSSSRDriverRequirements).MinDriverVersionMinor = local_res20[0];
    }
    if (local_res10[0] == 0) {
      if (4 < (byte)LogDLSSNGXRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      }
    }
    else if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
  }
  (this->NGXDLSSRRDriverRequirements).DriverUpdateRequired = true;
  (this->NGXDLSSRRDriverRequirements).MinDriverVersionMajor = 0x219;
  (this->NGXDLSSRRDriverRequirements).MinDriverVersionMinor = 2;
  if ((NVar5 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
  }
  else {
    (this->NGXDLSSRRDriverRequirements).DriverUpdateRequired = local_68 != 0;
    if ((((local_res8[0] & 0xfff00000) != NVSDK_NGX_Result_Fail) &&
        ((NVar6 & 0xfff00000) != NVSDK_NGX_Result_Fail)) && (local_64 != 0)) {
      (this->NGXDLSSRRDriverRequirements).MinDriverVersionMajor = local_64;
      (this->NGXDLSSRRDriverRequirements).MinDriverVersionMinor = local_60;
    }
    if (local_68 == 0) {
      if (4 < (byte)LogDLSSNGXRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      }
    }
    else if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
  }
  local_5c = 0;
  NVar2 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                    (this->CapabilityParameters,"#\x01",&local_5c);
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    GetNGXResultAsString(NVar2);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
  }
  if (((NVar2 & 0xfff00000) != NVSDK_NGX_Result_Fail) && (local_5c != 0)) {
    this->bIsDlssSRAvailable = true;
    this->NGXDLSSSRInitResult = NVar2;
  }
  local_58[0] = 0;
  NVar2 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                    (this->CapabilityParameters,"SuperSamplingDenoising.Available",local_58);
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    GetNGXResultAsString(NVar2);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
  }
  if (((NVar2 & 0xfff00000) != NVSDK_NGX_Result_Fail) && (local_58[0] != 0)) {
    this->bIsDlssRRAvailable = this->bIsDlssSRAvailable;
    this->NGXDLSSRRInitResult = NVar2;
  }
  if (this->bIsDlssSRAvailable == false) {
    local_res8[0] = NVSDK_NGX_Result_Fail;
    NVar2 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                      (this->CapabilityParameters,"SuperSampling.FeatureInitResult",local_res8);
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      GetNGXResultAsString(local_res8[0]);
      GetNGXResultAsString(NVar2);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    NVar3 = NVSDK_NGX_Result_Fail;
    if ((NVar2 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
      NVar3 = local_res8[0];
    }
    this->NGXDLSSSRInitResult = NVar3;
  }
  if (this->bIsDlssRRAvailable == false) {
    local_res8[0] = NVSDK_NGX_Result_Fail;
    NVar2 = (**(code **)((longlong)*this->CapabilityParameters + 0x58))
                      (this->CapabilityParameters,"SuperSamplingDenoising.FeatureInitResult",
                       local_res8);
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      GetNGXResultAsString(local_res8[0]);
      GetNGXResultAsString(NVar2);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    }
    NVar3 = NVSDK_NGX_Result_Fail;
    if ((NVar2 & 0xfff00000) != NVSDK_NGX_Result_Fail) {
      NVar3 = local_res8[0];
    }
    this->NGXDLSSRRInitResult = NVar3;
  }
  return;
}

