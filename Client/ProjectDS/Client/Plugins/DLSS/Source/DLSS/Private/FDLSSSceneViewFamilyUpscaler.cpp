// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 8

// operator() @ 14de22290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRDGResource *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 auStack_3c8 [32];
  FRHIResource *local_3a8;
  FRHIResource *local_3a0;
  FRHIResource *local_398;
  FRHIResource *local_390;
  FRHIResource *local_388;
  FRHIResource *local_380;
  FRHIResource *pFStack_378;
  FRHIResource *local_370;
  FRHIResource *pFStack_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  TVector2<float>_u_0 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined1 local_227;
  undefined2 local_226;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined8 local_20c;
  int local_204;
  undefined8 local_200;
  undefined8 local_1f8 [2];
  FRHIResource *local_1e8;
  FRHIResource *local_1e0;
  FRHIResource *local_1d8;
  FRHIResource *local_1d0;
  FRHIResource *local_1c8;
  FRHIResource *local_1c0;
  FRHIResource *local_1b8;
  FRHIResource *local_1b0;
  FRHIResource *local_1a8;
  FRHIResource *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  TVector2<float>_u_0 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined8 local_38;
  TReferenceControllerBase<1> *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  local_360 = 0;
  local_380 = (FRHIResource *)0x0;
  pFStack_378 = (FRHIResource *)0x0;
  local_370 = (FRHIResource *)0x0;
  pFStack_368 = (FRHIResource *)0x0;
  memset(&local_328,0,0x100);
  local_218 = *(undefined4 *)((longlong)this + 0xbc);
  local_226 = 0;
  local_20c = 0;
  local_200 = 0;
  local_358 = *(undefined8 *)((longlong)this + 0xa8);
  local_350 = *(undefined8 *)((longlong)this + 0xb0);
  local_348 = *(undefined8 *)((longlong)this + 0x20);
  local_340 = *(undefined8 *)((longlong)this + 0x28);
  local_227 = *(undefined1 *)((longlong)this + 0xb8);
  local_338 = *(undefined8 *)((longlong)this + 0x30);
  local_330 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  local_228 = *(undefined1 *)((longlong)this + 0x3c);
  local_20d = *(undefined1 *)((longlong)this + 0xe2);
  local_224 = *(undefined4 *)((longlong)this + 0xc0);
  local_220 = *(undefined4 *)((longlong)this + 0xc4);
  local_21c = *(undefined4 *)((longlong)this + 200);
  if (**(longlong **)((longlong)this + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassParameters->SceneColorInput",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x43d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGResource::MarkResourceAsUsed((FRDGResource *)**(undefined8 **)((longlong)this + 8));
  pFVar1 = (FRDGResource *)**(undefined8 **)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(pFVar1);
  local_3a8 = pFVar1->ResourceRHI;
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassParameters->SceneVelocityInput",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x442,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x18));
  pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x18);
  FRDGResource::ValidateRHIAccess(pFVar1);
  local_398 = pFVar1->ResourceRHI;
  if ((*(char *)((longlong)this + 0xe3) == '\0') ||
     (pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x20),
     pFVar1 == (FRDGResource *)0x0)) {
    local_388 = (FRHIResource *)0x0;
    local_20e = 0;
  }
  else {
    FRDGResource::MarkResourceAsUsed(pFVar1);
    pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x20);
    FRDGResource::ValidateRHIAccess(pFVar1);
    local_388 = pFVar1->ResourceRHI;
    local_20e = *(undefined1 *)((longlong)this + 0xe3);
  }
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassParameters->SceneDepthInput",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x453,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 8));
  pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 8);
  FRDGResource::ValidateRHIAccess(pFVar1);
  local_3a0 = pFVar1->ResourceRHI;
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassParameters->EyeAdaptation",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x457,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x10));
  pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x10);
  FRDGResource::ValidateRHIAccess(pFVar1);
  local_390 = pFVar1->ResourceRHI;
  local_214 = *(undefined4 *)((longlong)this + 0x38);
  local_210 = *(undefined1 *)((longlong)this + 0xe0);
  local_20f = *(undefined1 *)((longlong)this + 0xe1);
  local_204 = *(int *)((longlong)this + 0x40);
  if (local_204 == 1) {
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x28) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PassParameters->DiffuseAlbedo",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                         ,0x464,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x28));
    pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x28);
    FRDGResource::ValidateRHIAccess(pFVar1);
    local_380 = pFVar1->ResourceRHI;
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x30) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PassParameters->SpecularAlbedo",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                         ,0x468,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x30));
    pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x30);
    FRDGResource::ValidateRHIAccess(pFVar1);
    pFStack_378 = pFVar1->ResourceRHI;
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x38) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PassParameters->Normal",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                         ,0x46c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x38));
    pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x38);
    FRDGResource::ValidateRHIAccess(pFVar1);
    local_370 = pFVar1->ResourceRHI;
    if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x40) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PassParameters->Roughness",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                         ,0x470,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x40));
    pFVar1 = *(FRDGResource **)(*(longlong *)((longlong)this + 8) + 0x40);
    FRDGResource::ValidateRHIAccess(pFVar1);
    pFStack_368 = pFVar1->ResourceRHI;
  }
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x48) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassParameters->SceneColorOutput",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0x492,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x1c7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(lVar2 + 0x48));
  lVar2 = *(longlong *)((longlong)this + 8);
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x1c7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = *(FRDGResource **)(lVar2 + 0x48);
  FRDGResource::ValidateRHIAccess(pFVar1);
  local_1f8[0] = *(undefined8 *)this;
  local_1e8 = local_3a8;
  local_1e0 = local_3a0;
  local_1d8 = local_398;
  local_1d0 = local_390;
  local_1c8 = local_388;
  local_1c0 = local_380;
  local_1b8 = pFStack_378;
  local_1b0 = local_370;
  local_1a8 = pFStack_368;
  local_1a0 = pFVar1->ResourceRHI;
  local_198 = local_358;
  local_190 = local_350;
  local_168 = local_328;
  uStack_160 = uStack_320;
  local_188 = local_348;
  local_158 = local_318;
  uStack_150 = uStack_310;
  local_148 = local_308;
  uStack_140 = uStack_300;
  local_180 = local_340;
  local_138 = local_2f8;
  uStack_130 = uStack_2f0;
  local_128 = local_2e8;
  uStack_120 = uStack_2e0;
  local_178 = local_338;
  local_118 = local_2d8;
  uStack_110 = uStack_2d0;
  local_108 = local_2c8;
  uStack_100 = uStack_2c0;
  local_170 = local_330;
  local_f8 = local_2b8;
  uStack_f0 = uStack_2b0;
  local_e8 = local_2a8;
  uStack_e0 = uStack_2a0;
  local_68 = local_228;
  local_d8 = local_298;
  uStack_d0 = uStack_290;
  local_c8 = local_288;
  uStack_c0 = uStack_280;
  local_67 = local_227;
  local_b8 = local_278;
  uStack_b0 = uStack_270;
  local_a8 = local_268;
  uStack_a0 = uStack_260;
  local_64 = local_224;
  local_98 = local_258;
  uStack_90 = uStack_250;
  local_88 = local_248;
  uStack_80 = uStack_240;
  local_60 = local_220;
  local_5c = local_21c;
  local_58 = local_218;
  local_78 = local_238;
  uStack_70 = uStack_230;
  local_50 = local_210;
  local_4f = local_20f;
  local_4e = local_20e;
  local_4d = local_20d;
  local_4c = (undefined4)local_20c;
  local_48 = local_20c._4_4_;
  local_44 = local_204;
  local_38 = *(undefined8 *)((longlong)this + 0xd0);
  local_30 = *(TReferenceControllerBase<1> **)((longlong)this + 0xd8);
  local_54 = local_214;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar5 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x1f0,0x10);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar5;
    *(undefined8 **)&param_1->field_0x30 = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &TRHILambdaCommand<FRHICommandListImmediate,``FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::`60'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[2] = local_1f8[0];
    puVar5[4] = local_1e8;
    puVar5[5] = local_1e0;
    puVar5[6] = local_1d8;
    puVar5[7] = local_1d0;
    puVar5[8] = local_1c8;
    puVar5[9] = local_1c0;
    puVar5[10] = local_1b8;
    puVar5[0xb] = local_1b0;
    puVar5[0xc] = local_1a8;
    puVar5[0xd] = local_1a0;
    puVar5[0xe] = local_198;
    puVar5[0xf] = local_190;
    puVar5[0x10] = local_188;
    puVar5[0x11] = local_180;
    puVar5[0x12] = local_178;
    *(TVector2<float>_u_0 *)(puVar5 + 0x13) = local_170;
    puVar5[0x14] = local_168;
    puVar5[0x15] = uStack_160;
    puVar5[0x16] = local_158;
    puVar5[0x17] = uStack_150;
    puVar5[0x18] = local_148;
    puVar5[0x19] = uStack_140;
    puVar5[0x1a] = local_138;
    puVar5[0x1b] = uStack_130;
    puVar5[0x1c] = local_128;
    puVar5[0x1d] = uStack_120;
    puVar5[0x1e] = local_118;
    puVar5[0x1f] = uStack_110;
    puVar5[0x20] = local_108;
    puVar5[0x21] = uStack_100;
    puVar5[0x22] = local_f8;
    puVar5[0x23] = uStack_f0;
    puVar5[0x24] = local_e8;
    puVar5[0x25] = uStack_e0;
    puVar5[0x26] = local_d8;
    puVar5[0x27] = uStack_d0;
    puVar5[0x28] = local_c8;
    puVar5[0x29] = uStack_c0;
    puVar5[0x2a] = local_b8;
    puVar5[0x2b] = uStack_b0;
    puVar5[0x2c] = local_a8;
    puVar5[0x2d] = uStack_a0;
    puVar5[0x2e] = local_98;
    puVar5[0x2f] = uStack_90;
    puVar5[0x30] = local_88;
    puVar5[0x31] = uStack_80;
    puVar5[0x32] = local_78;
    puVar5[0x33] = uStack_70;
    *(undefined1 *)(puVar5 + 0x34) = local_68;
    *(undefined1 *)((longlong)puVar5 + 0x1a1) = local_67;
    *(undefined4 *)((longlong)puVar5 + 0x1a4) = local_64;
    *(undefined4 *)(puVar5 + 0x35) = local_60;
    *(undefined4 *)((longlong)puVar5 + 0x1ac) = local_5c;
    *(undefined4 *)(puVar5 + 0x36) = local_58;
    *(undefined4 *)((longlong)puVar5 + 0x1b4) = local_54;
    *(undefined1 *)(puVar5 + 0x37) = local_50;
    *(undefined1 *)((longlong)puVar5 + 0x1b9) = local_4f;
    *(undefined1 *)((longlong)puVar5 + 0x1ba) = local_4e;
    *(undefined1 *)((longlong)puVar5 + 0x1bb) = local_4d;
    *(undefined4 *)((longlong)puVar5 + 0x1bc) = local_4c;
    *(undefined4 *)(puVar5 + 0x38) = local_48;
    *(int *)((longlong)puVar5 + 0x1c4) = local_44;
    puVar5[0x3a] = local_38;
    puVar5[0x3b] = local_30;
    local_30 = (TReferenceControllerBase<1> *)0x0;
    local_38 = 0;
    puVar5[0x3c] = L"TRHILambdaCommand";
  }
  else {
    ``FDLSSSceneViewFamilyUpscaler::AddDLSSPass'::__l60::<lambda_2>::operator()'::__l2::<lambda_1>::
    operator()(local_1f8,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// AddDLSSPass @ 14de233a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FDLSSOutputs __thiscall
FDLSSSceneViewFamilyUpscaler::AddDLSSPass
          (FDLSSSceneViewFamilyUpscaler *this,FRDGBuilder *param_1,FSceneView *param_2,
          FDLSSPassParameters *param_3,
          TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory> param_4,
          TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory> *param_5)

{
  int *piVar1;
  FDLSSShaderParameters *pFVar2;
  ENGXDLSSDenoiserMode EVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  IHistory *pIVar6;
  FConvexVolume *pFVar7;
  IHistory IVar8;
  undefined4 uVar9;
  bool bVar10;
  float fVar11;
  NGXRHI *pNVar12;
  TConsoleVariableData<int> *pTVar13;
  TConsoleVariableData<int> *pTVar14;
  FSceneView *pFVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  NVSDK_NGX_DLSS_Hint_Render_Preset NVar19;
  NVSDK_NGX_RayReconstruction_Hint_Render_Preset NVar20;
  NVSDK_NGX_PerfQuality_Value NVar21;
  FDLSSOutputs FVar22;
  FRDGTexture *pFVar23;
  wchar_t *pwVar24;
  IHistory IVar25;
  undefined8 *puVar26;
  FRDGEventName *pFVar27;
  longlong *plVar28;
  atomic<int> *paVar29;
  IConsoleManager *pIVar30;
  code *pcVar31;
  longlong *plVar32;
  int iVar33;
  undefined4 uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  longlong *in_stack_00000038;
  undefined1 auStackY_3c8 [32];
  bool local_348;
  bool local_347;
  IHistory local_338;
  int iStack_32c;
  IHistory local_328;
  undefined1 local_320 [16];
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  uchar local_300 [4];
  uchar local_2fc [4];
  int local_2f8;
  int local_2f4;
  TIntPoint<int>_u_0 local_2f0;
  TIntPoint<int>_u_0 local_2e8;
  FSceneView *local_2e0;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_2d8;
  TIntPoint<int>_u_0 local_2c8;
  uchar local_2c0 [4];
  int iStack_2bc;
  TIntPoint<int>_u_0 local_2b8;
  FDLSSShaderParameters *local_2b0;
  FDLSSPassParameters *local_2a8;
  TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory> *local_2a0;
  TIntPoint<int>_u_0 local_298;
  IHistory local_290;
  IHistory local_288;
  FDLSSSceneViewFamilyUpscaler *local_280;
  ulonglong local_278;
  longlong *local_270;
  undefined1 local_268 [8];
  ForElementType<UE::Math::TPlane<double>_> local_260;
  FDLSSPassParameters *local_258;
  IHistory local_250;
  IHistory IStack_248;
  FString local_240;
  FString local_230;
  FString local_220;
  IHistory local_210;
  IHistory local_208;
  FString local_200;
  FRDGTextureAccess local_1f0;
  FRDGEventName local_1d8;
  <lambda_2> local_1c0;
  undefined1 local_d8 [24];
  float local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_270 = in_stack_00000038;
  local_338 = (IHistory)((ulonglong)local_338 & 0xffffffff00000000);
  local_2a8 = (FDLSSPassParameters *)param_4.Reference;
  local_2a0 = param_5;
  local_320._8_8_ = param_1;
  local_2e0 = param_2;
  local_280 = this;
  local_258 = param_3;
  bVar16 = IsInRenderingThread();
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x371,L""), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  bVar16 = FDLSSUpscaler::IsDLSSActive(this->Upscaler);
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Upscaler->IsDLSSActive()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x372,L""), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  if ((*(char *)((longlong)&param_3[0x1d].EyeAdaptation + 4) != '\0') ||
     (local_347 = false, param_5->Reference == (IHistory *)0x0)) {
    local_347 = true;
  }
  if (((*(int *)(param_4.Reference + 2) != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
      (*(int *)&param_4.Reference[2].field_0x4 !=
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputViewRect.Min == FIntPoint::ZeroValue",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0xf2,L"The DLSS OutputViewRect %dx%d must be non-zero"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  if ((param_4.Reference[7] == (IHistory)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneColorInput",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0xe4,L""), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  uVar4 = *(undefined8 *)((longlong)param_4.Reference[7] + 0xa4);
  local_298._s_0.X = *(int *)(param_4.Reference + 3) - *(int *)(param_4.Reference + 2);
  local_298._s_0.Y =
       *(int *)&param_4.Reference[3].field_0x4 - *(int *)&param_4.Reference[2].field_0x4;
  QuantizeSceneBufferSize((TIntPoint<int> *)&local_298._s_0,(TIntPoint<int> *)&local_2c8._s_0,0);
  uVar5 = CONCAT44(local_2c8._s_0.Y,local_2c8._s_0.X);
  if (local_2c8._s_0.X < (int)uVar4) {
    uVar5 = uVar4;
  }
  uVar9 = (undefined4)uVar5;
  local_288 = param_4.Reference[3];
  iVar18 = (int)((ulonglong)uVar4 >> 0x20);
  uVar34 = local_2c8._s_0.Y;
  if (local_2c8._s_0.Y < iVar18) {
    uVar34 = iVar18;
  }
  local_290 = param_4.Reference[2];
  iVar33 = local_288._0_4_;
  iVar18 = local_290._0_4_;
  fVar37 = (float)(SUB84(param_4.Reference[1],0) - SUB84(*param_4.Reference,0)) /
           (float)(iVar33 - iVar18);
  fVar38 = (float)(SUB84(param_4.Reference[1],4) - SUB84(*param_4.Reference,4)) /
           (float)(local_288._4_4_ - local_290._4_4_);
  if ((this->DLSSQualityMode == NumValues) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("DLSSQualityMode != EDLSSQualityMode::NumValues",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x385,L"Invalid Quality mode, not initialized"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  bVar16 = FDLSSUpscaler::IsQualityModeSupported(this->Upscaler,this->DLSSQualityMode);
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Upscaler->IsQualityModeSupported(DLSSQualityMode)",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x386,L"%u is not a valid Quality mode"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  fVar11 = __real_3c23d70a;
  if ((99 < iVar33 - iVar18) &&
     ((fVar36 = FDLSSUpscaler::GetMinResolutionFractionForQuality
                          (this->Upscaler,this->DLSSQualityMode), fVar37 < fVar36 - fVar11 ||
      (fVar36 = FDLSSUpscaler::GetMaxResolutionFractionForQuality
                          (this->Upscaler,this->DLSSQualityMode), fVar36 + fVar11 < fVar37)))) {
    FDLSSUpscaler::GetMaxResolutionFractionForQuality(this->Upscaler,this->DLSSQualityMode);
    FDLSSUpscaler::GetMinResolutionFractionForQuality(this->Upscaler,this->DLSSQualityMode);
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("DestRect.Width() < 100 || GetMinUpsampleResolutionFraction() - kDLSSResolutionFractionError <= ScaleX && ScaleX <= GetMaxUpsampleResolutionFraction() + kDLSSResolutionFractionError"
                        ,
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                        ,0x38c,
                        L"The current resolution fraction %f is out of the supported DLSS range [%f ... %f] for quality mode %d."
                       );
    if (bVar16) {
      pcVar31 = (code *)swi(3);
      FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
      return (FDLSSOutputs)FVar22.SceneColor;
    }
  }
  if ((99 < (int)(local_288._4_4_ - local_290._4_4_)) &&
     ((fVar37 = FDLSSUpscaler::GetMinResolutionFractionForQuality
                          (this->Upscaler,this->DLSSQualityMode), fVar38 < fVar37 - fVar11 ||
      (fVar37 = FDLSSUpscaler::GetMaxResolutionFractionForQuality
                          (this->Upscaler,this->DLSSQualityMode), fVar37 + fVar11 < fVar38)))) {
    FDLSSUpscaler::GetMaxResolutionFractionForQuality(this->Upscaler,this->DLSSQualityMode);
    FDLSSUpscaler::GetMinResolutionFractionForQuality(this->Upscaler,this->DLSSQualityMode);
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("DestRect.Height() < 100 || GetMinUpsampleResolutionFraction() - kDLSSResolutionFractionError <= ScaleY && ScaleY <= GetMaxUpsampleResolutionFraction() + kDLSSResolutionFractionError"
                        ,
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                        ,0x38f,
                        L"The current resolution fraction %f is out of the supported DLSS range [%f ... %f] for quality mode %d."
                       );
    if (bVar16) {
      pcVar31 = (code *)swi(3);
      FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
      return (FDLSSOutputs)FVar22.SceneColor;
    }
  }
  uVar4 = local_320._8_8_;
  bVar10 = true;
  bVar35 = false;
  bVar16 = false;
  local_b8 = 0;
  local_98 = (void *)0x0;
  *(longlong *)local_320._8_8_ = 0;
  local_c0 = FClearValueBinding::Black.Value.Color[3];
  local_bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_90 = 0;
  local_b4._4_4_ = uVar34;
  local_b4._0_1_ = (uchar)uVar9;
  local_b4._1_1_ = SUB41(uVar9,1);
  local_b4._2_1_ = SUB41(uVar9,2);
  local_b4._3_1_ = SUB41(uVar9,3);
  local_d8._0_8_ = 0x20008;
  local_d8._8_8_ = FClearValueBinding::Black._0_8_;
  local_d8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_ac = 0x10001;
  local_a8 = 0xa000101;
  local_a4 = 0xff00;
  local_8c = 1;
  local_2c0 = (uchar  [4])uVar9;
  iStack_2bc = uVar34;
  pFVar23 = FRDGBuilder::CreateTexture
                      ((FRDGBuilder *)local_2e0,(FRDGTextureDesc *)local_d8,L"DLSSOutputSceneColor",
                       None);
  *(longlong *)uVar4 = (longlong)pFVar23;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  pIVar6 = local_2a0->Reference;
  if ((pIVar6 == (IHistory *)0x0) ||
     (((pwVar24 = (wchar_t *)(**(code **)((longlong)*pIVar6 + 0x20))(pIVar6),
       pwVar24 != L"FDLSSSceneViewFamilyUpscaler" &&
       (pwVar24 != L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")) ||
      (local_328 = pIVar6[3], local_328 == (IHistory)0x0)))) {
    IVar25 = (IHistory)::operator_new(0x20);
    if (IVar25 == (IHistory)0x0) {
      local_250 = ___xmm_00000000000000000000000000000010;
      local_328 = (IHistory)0x10;
      IStack_248 = _UNK_150651568;
    }
    else {
      *(atomic<int> *)((longlong)IVar25 + 8) = (atomic<int>)0x1;
      local_328 = (IHistory)((longlong)IVar25 + 0x10);
      *(atomic<int> *)((longlong)IVar25 + 0xc) = (atomic<int>)0x1;
      *(undefined ***)IVar25 =
           &___7__TIntrusiveReferenceController_UFDLSSState___00_SharedPointerInternals__6B_;
      ((TReferenceControllerBase<1> *)((longlong)IVar25 + 0x10))->_padding_ = 0;
      *(undefined8 *)((longlong)IVar25 + 0x18) = 0;
      if ((local_328 == (IHistory)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar16)) {
        pcVar31 = (code *)swi(3);
        FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
        return (FDLSSOutputs)FVar22.SceneColor;
      }
      LOCK();
      *(atomic<int> *)((longlong)IVar25 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)IVar25 + 8) + 1);
      UNLOCK();
      IStack_248 = IVar25;
      local_250 = local_328;
    }
    bVar10 = false;
    bVar35 = true;
    bVar16 = true;
    local_338 = IVar25;
  }
  else {
    IVar25 = pIVar6[4];
    local_210 = local_328;
    local_208 = IVar25;
    if (IVar25 != (IHistory)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)IVar25 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)IVar25 + 8) + 1);
      UNLOCK();
    }
  }
  IVar8 = local_208;
  if (IVar25 != (IHistory)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)IVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)IVar25 + 8) + 1);
    UNLOCK();
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IStack_248);
  }
  if (bVar35) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_338);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IVar8);
  }
  pFVar15 = local_2e0;
  puVar26 = FMemStackBase::Alloc((FMemStackBase *)&local_2e0->ViewUniformBuffer,0x70,0x10);
  if (puVar26 == (undefined8 *)0x0) {
    puVar26 = (undefined8 *)0x0;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar16) {
      pcVar31 = (code *)swi(3);
      FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
      return (FDLSSOutputs)FVar22.SceneColor;
    }
  }
  else {
    *puVar26 = &___7__TObject_VFDLSSShaderParameters___FRDGAllocator__6B_;
    puVar26[2] = 0;
    puVar26[3] = 0;
    puVar26[4] = 0;
    puVar26[5] = 0;
    puVar26[6] = 0;
    puVar26[7] = 0;
    puVar26[8] = 0;
    puVar26[9] = 0;
    puVar26[10] = 0;
    puVar26[0xb] = 0;
    *(undefined4 *)(puVar26 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar26 + 100) = 0;
  }
  pFVar7 = (pFVar15->StereoCullingFrustum).Object;
  local_320._0_8_ = puVar26;
  if (((pFVar7 <= (FConvexVolume *)local_320) &&
      (local_320 <
       (pFVar7->Planes).AllocatorInstance.InlineData +
       (longlong)
       *(int *)((longlong)&(pFVar15->StereoCullingFrustum).SharedReferenceCount.ReferenceController
               + 4) * 8)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  iVar18 = *(int *)&(pFVar15->StereoCullingFrustum).SharedReferenceCount.ReferenceController;
  piVar1 = (int *)((longlong)
                   &(pFVar15->StereoCullingFrustum).SharedReferenceCount.ReferenceController + 4);
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar15->StereoCullingFrustum,piVar1);
  }
  pFVar7 = (pFVar15->StereoCullingFrustum).Object;
  *(int *)&(pFVar15->StereoCullingFrustum).SharedReferenceCount.ReferenceController = iVar18 + 1;
  pFVar2 = (FDLSSShaderParameters *)(puVar26 + 2);
  *(undefined8 *)((pFVar7->Planes).AllocatorInstance.InlineData + (longlong)iVar18 * 8) =
       local_320._0_8_;
  iVar33 = SUB84(param_4.Reference[1],0);
  local_2f0 = *(TIntPoint<int>_u_0 *)param_4.Reference;
  local_2f8 = iVar33 - *(int *)((longlong)param_4.Reference[7] + 0xa4);
  iStack_32c = SUB84(param_4.Reference[1],4);
  iVar18 = iStack_32c - *(int *)((longlong)param_4.Reference[7] + 0xa8);
  local_308 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  if (UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y < iVar18) {
    local_308 = iVar18;
  }
  local_304 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  if (UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X < local_2f8) {
    local_304 = local_2f8;
  }
  local_2e8._s_0.X = iVar33 - local_304;
  local_278 = (ulonglong)(uint)local_2e8._s_0.X;
  if (iVar18 < local_2f8) {
    iVar18 = local_2f8;
  }
  local_2e8._s_0.Y = iStack_32c - local_308;
  local_2b8 = local_2f0;
  local_2b0 = pFVar2;
  if ((2 < (byte)LogDLSS._0_1_) && (0 < iVar18)) {
    local_310 = (iStack_32c - local_308) - local_2f0._s_0.Y;
    local_30c = local_2e8._s_0.X - local_2f0._s_0.X;
    ::FString::PrintfImpl(&local_230,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_240,L"X=%d Y=%d");
    ::FString::PrintfImpl(&local_220,L"Min=(%s) Max=(%s)");
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    IVar8 = param_4.Reference[7];
    local_300 = *(uchar (*) [4])((longlong)IVar8 + 0xa8);
    local_2fc = *(uchar (*) [4])((longlong)IVar8 + 0xa4);
    local_260 = *(ForElementType<UE::Math::TPlane<double>_> *)((longlong)IVar8 + 8);
    local_2f4 = *(int *)&param_4.Reference[1].field_0x4 - *(int *)&(param_4.Reference)->field_0x4;
    UE::Math::TIntRect<int>::ToString((TIntRect<int> *)param_4.Reference,&local_200);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
  pFVar2->SceneColorInput = (FRDGTexture *)param_4.Reference[7];
  *(IHistory *)(puVar26 + 3) = param_4.Reference[9];
  *(IHistory *)(puVar26 + 5) = param_4.Reference[8];
  *(IHistory *)(puVar26 + 6) = param_4.Reference[10];
  *(IHistory *)(puVar26 + 4) = param_4.Reference[0x12];
  *(IHistory *)(puVar26 + 7) = param_4.Reference[0xb];
  *(IHistory *)(puVar26 + 8) = param_4.Reference[0xc];
  *(IHistory *)(puVar26 + 9) = param_4.Reference[0xd];
  *(IHistory *)(puVar26 + 10) = param_4.Reference[0xe];
  FRDGTextureAccess::FRDGTextureAccess
            (&local_1f0,(FRDGTexture *)*(longlong *)local_320._8_8_,UAVCompute);
  puVar26[0xb] = local_1f0.Texture;
  *(FRDGTextureSubresourceRange *)(puVar26 + 0xc) = local_1f0.SubresourceRange;
  puVar26[0xd] = local_1f0._16_8_;
  pTVar13 = CVarNGXDLSSAutoExposure.Ref;
  fVar37 = *(float *)((longlong)(local_258->InputViewRect).field0_0x0._s_0.Max.field0_0x0 + 0x9c) *
           __real_447a0000;
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  pTVar14 = CVarNGXDLSSBiasCurrentColorMask.Ref;
  iVar18 = pTVar13->ShadowedValue[1];
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  pTVar13 = CVarNGXDLSSReleaseMemoryOnDelete.Ref;
  bVar35 = pTVar14->ShadowedValue[1] != 0;
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  iVar33 = pTVar13->ShadowedValue[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar30 = IConsoleManager::Get();
    PropagateAlphaCVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar30 + 0xc0))(pIVar30,L"r.PostProcessing.PropagateAlpha",1);
    _Init_thread_footer(&::_TSS0);
  }
  pTVar13 = CVarNGXEnableAlphaUpscaling.Ref;
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  pTVar14 = CVarNGXEnableAlphaUpscaling.Ref;
  if (pTVar13->ShadowedValue[1] < 0) {
    if (PropagateAlphaCVar != (IConsoleVariable *)0x0) {
      cVar17 = (**(code **)(*(longlong *)PropagateAlphaCVar + 0xc0))();
      local_348 = true;
      if (cVar17 != '\0') goto LAB_14de23f1c;
    }
    local_348 = false;
  }
  else {
    bVar16 = IsInParallelRenderingThread();
    if ((!bVar16) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
      pcVar31 = (code *)swi(3);
      FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
      return (FDLSSOutputs)FVar22.SceneColor;
    }
    local_348 = 0 < pTVar14->ShadowedValue[1];
  }
LAB_14de23f1c:
  pNVar12 = FDLSSUpscaler::NGXRHIExtensions;
  NVar19 = GetNGXDLSSPresetFromQualityMode(this->DLSSQualityMode);
  NVar20 = GetNGXDLSSRRPresetFromQualityMode(this->DLSSQualityMode);
  NVar21 = ToNGXQuality(local_280->DLSSQualityMode);
  local_1c0.LocalNGXRHIExtensions = pNVar12;
  local_1c0.PassParameters = local_2b0;
  FDLSSPassParameters::FDLSSPassParameters(&local_1c0.Inputs,local_2a8);
  local_1c0.AdjustedInputViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)local_2b8;
  local_1c0.AdjustedInputViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)local_2e8;
  local_1c0.bCameraCut = local_347;
  local_1c0.DLSSState.Object = (FDLSSState *)local_328;
  if (IVar25 != (IHistory)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)IVar25 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)IVar25 + 8) + 1);
    UNLOCK();
  }
  local_1c0.bEnableAlphaUpscaling = local_348;
  local_1c0.DeltaWorldTimeMS = fVar37;
  local_1c0.NGXDLSSPreset = NVar19;
  local_1c0.NGXDLSSRRPreset = NVar20;
  local_1c0.NGXPerfQuality = NVar21;
  local_1c0.DLSSState.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)IVar25;
  local_1c0.bUseAutoExposure = iVar18 != 0;
  local_1c0.bReleaseMemoryOnDelete = iVar33 != 0;
  local_1c0.bUseBiasCurrentColorMask = bVar35;
  pFVar27 = FRDGEventName::FRDGEventName(&local_1d8,L"DLSS %s%s %dx%d -> %dx%d");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar31 = FDLSSShaderParameters::zzAppendMemberGetPrev;
    local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.ArrayNum = 0;
    local_2d8.ArrayMax = 0;
    do {
      pcVar31 = (code *)(*pcVar31)(bVar35,&local_2d8);
    } while (pcVar31 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_2d8.AllocatorInstance.Data,local_2d8.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FDLSSShaderParameters",
               L"FDLSSShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
               ,0xa7,0x60,&local_2d8,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_2d8.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_2d8.AllocatorInstance.Data);
    }
    atexit(`FDLSSShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  plVar32 = (longlong *)0x0;
  FRDGBuilder::
  AddPassInternal<FDLSSShaderParameters,_FDLSSSceneViewFamilyUpscaler::AddDLSSPass_::__l60::<lambda_2>_>
            ((FRDGBuilder *)local_2e0,pFVar27,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDLSSShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,local_2b0,SkipRenderPass|Copy|Compute|Raster,&local_1c0);
  if (local_1d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.DLSSState.SharedReferenceCount.ReferenceController);
  if ((local_270 == (longlong *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputCustomHistoryInterface",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x4ab,L""), bVar16)) {
    pcVar31 = (code *)swi(3);
    FVar22.SceneColor = (FRDGTexture *)(*pcVar31)();
    return (FDLSSOutputs)FVar22.SceneColor;
  }
  plVar28 = ::operator_new(0x30);
  if (plVar28 != (longlong *)0x0) {
    EVar3 = local_2a8->DenoiserMode;
    if (IVar25 == (IHistory)0x0) {
      paVar29 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar29 = (atomic<int> *)((longlong)IVar25 + 8);
      LOCK();
      *paVar29 = (atomic<int>)((int)*paVar29 + 1);
      UNLOCK();
    }
    *(undefined4 *)(plVar28 + 2) = 0;
    *plVar28 = (longlong)
               &FDLSSUpscalerHistory::
                _vftable__for__UE__Renderer__Private__ITemporalUpscaler__IHistory__;
    plVar28[1] = (longlong)&FDLSSUpscalerHistory::_vftable__for__FRefCountBase__;
    *(IHistory *)(plVar28 + 3) = local_328;
    *(IHistory *)(plVar28 + 4) = IVar25;
    if (IVar25 != (IHistory)0x0) {
      LOCK();
      *paVar29 = (atomic<int>)((int)*paVar29 + 1);
      UNLOCK();
    }
    *(ENGXDLSSDenoiserMode *)(plVar28 + 5) = EVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IVar25);
    plVar32 = plVar28;
  }
  plVar28 = (longlong *)*local_270;
  if (plVar28 != plVar32) {
    *local_270 = (longlong)plVar32;
    if (plVar32 != (longlong *)0x0) {
      (**(code **)(*plVar32 + 8))(plVar32,local_268);
    }
    if (plVar28 != (longlong *)0x0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IVar25);
  if (local_2a0->Reference != (IHistory *)0x0) {
    (**(code **)((longlong)*local_2a0->Reference + 0x10))();
  }
  return (FDLSSOutputs)(FRDGTexture *)local_320._8_8_;
}

// AddPasses @ 14de24320

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

FOutputs * __thiscall
FDLSSSceneViewFamilyUpscaler::AddPasses
          (FDLSSSceneViewFamilyUpscaler *this,FOutputs *__return_storage_ptr__,FRDGBuilder *param_1,
          FSceneView *param_2,FInputs *param_3)

{
  IHistory *pIVar1;
  FSceneViewFamily *pFVar2;
  longlong lVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  char cVar8;
  FOutputs *pFVar9;
  FRDGScope *this_00;
  ulonglong uVar10;
  UClass *this_01;
  FGBufferResolveOutputs *pFVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  uchar uVar16;
  undefined1 local_res18 [8];
  TIntRect<int>_u_0 local_1d8;
  FRDGTexture *local_1c8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1c0;
  char local_1b0;
  undefined1 local_1a8 [8];
  FRDGTexture *local_1a0;
  TRefCountPtr<UE::Renderer::Private::ITemporalUpscaler::IHistory> local_198;
  undefined1 local_190 [52];
  undefined1 local_15c;
  int local_158;
  FRDGTexture *local_150;
  FRDGTexture *local_148;
  FRDGTexture *local_140;
  FRDGTexture *local_138;
  FRDGTexture *local_130;
  FRDGTexture *local_128;
  FRDGTexture *pFStack_120;
  FRDGTexture *local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  FRDGTexture *local_f8;
  TIntRect<int>_u_0 local_e8;
  TIntRect<int>_u_0 local_d8;
  TIntRect<int>_u_0 local_c8;
  FCustomDepthTextures local_b8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<5>_const_*,std::tuple<>_> local_98 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  FRDGTexture *local_68;
  FGBufferResolveOutputs local_60;
  
  (__return_storage_ptr__->FullRes).Texture = (FRDGTexture *)0x0;
  (__return_storage_ptr__->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->NewHistory).Reference = (IHistory *)0x0;
  pIVar1 = (param_3->PrevHistory).Reference;
  if (pIVar1 != (IHistory *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  local_1d8._s_0.Min.field0_0x0 =
       (TIntPoint<int>)*(undefined8 *)&(param_3->SceneDepth).ViewRect.field0_0x0;
  local_190._24_8_ = *(undefined8 *)&(param_3->OutputViewRect).field0_0x0;
  local_1a0 = (param_3->SceneVelocity).Texture;
  local_1d8._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       ((TIntPoint<int>_u_0 *)((longlong)&(param_3->SceneDepth).ViewRect.field0_0x0 + 8))->_s_0;
  local_190._32_8_ =
       ((TIntPoint<int>_u_0 *)((longlong)&(param_3->OutputViewRect).field0_0x0 + 8))->_s_0;
  local_190._48_4_ = param_3->PreExposure;
  local_190._8_8_ = (param_3->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  local_190._16_8_ = (param_3->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  local_190._40_8_ = (param_3->TemporalJitterPixels).field0_0x0;
  local_150 = (param_3->SceneColor).Texture;
  local_140 = (param_3->SceneDepth).Texture;
  local_130 = (FRDGTexture *)0x0;
  local_f8 = param_3->EyeAdaptationTexture;
  local_128 = (FRDGTexture *)0x0;
  pFStack_120 = (FRDGTexture *)0x0;
  local_118 = (FRDGTexture *)0x0;
  lStack_110 = 0;
  local_108 = 0;
  lStack_100 = 0;
  if (((((local_1d8._0_4_ != (int)local_190._24_8_) ||
        (local_1d8._4_4_ != SUB84(local_190._24_8_,4))) ||
       (local_1d8._8_4_ != (int)local_190._32_8_)) ||
      (local_1d8._12_4_ != SUB84(local_190._32_8_,4))) &&
     ((param_2->PrimaryScreenPercentageMethod != TemporalUpscale &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsDLAA || (View.PrimaryScreenPercentageMethod == EPrimaryScreenPercentageMethod::TemporalUpscale)"
                          ,
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                          ,0x2f6,
                          L"DLSS-SR requires TemporalUpscale. If you hit this assert, please set r.TemporalAA.Upscale=1"
                         ), bVar7)))) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOutputs *)(*pcVar4)();
    return pFVar9;
  }
  cVar8 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_1b0 = '\0';
  if ((cVar8 != '\0') && ((cVar8 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_ProjectDS_Client_P;
      local_78 = 0x54da10c0;
      uStack_74 = 1;
      ::Desc._padding_._0_4_ = 0x54da10c0;
      ::Desc._padding_._4_4_ = local_98[1]._Myfirst._Val._4_4_;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_DLSS;
      ::Desc._padding_ = (longlong)u_DLSS;
      ::Desc._padding_._0_4_ = 0x2fa;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDLSSSceneViewFamilyUpscaler::AddPasses'::__l17::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_98[0]._Myfirst._Val = &::Desc;
    local_1c0.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    uVar15 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_1c0.Scope = this_00;
    if ((3 < uVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FOutputs *)(*pcVar4)();
      return pFVar9;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar15])(&this_00->Impl);
    FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<5>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,local_98);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_1b0 = '\x01';
  }
  if (((this->Upscaler == (FDLSSUpscaler *)0x0) ||
      (cVar8 = (**(code **)(FDLSSUpscaler::NGXRHIExtensions->_padding_ + 0x10))(),
      pTVar5 = CVarNGXDLSSDenoiserMode.Ref, cVar8 == '\0')) ||
     ((FDLSSUpscaler::NGXRHIExtensions->NGXQueryFeature).bIsDlssRRAvailable == false)) {
    local_158 = 0;
  }
  else {
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FOutputs *)(*pcVar4)();
      return pFVar9;
    }
    iVar12 = 1;
    if (pTVar5->ShadowedValue[1] < 1) {
      iVar12 = pTVar5->ShadowedValue[1];
    }
    local_158 = 0;
    if (0 < iVar12) {
      local_158 = iVar12;
    }
  }
  pTVar5 = CVarNGXDLSSDilateMotionVectors.Ref;
  uVar15 = 0;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOutputs *)(*pcVar4)();
    return pFVar9;
  }
  pTVar6 = CVarNGXDLSSBiasCurrentColorMask.Ref;
  bVar14 = local_158 != 1 && pTVar5->ShadowedValue[1] != 0;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOutputs *)(*pcVar4)();
    return pFVar9;
  }
  pTVar5 = CVarNGXDLSSBiasCurrentColorMaskStencilValue.Ref;
  iVar12 = pTVar6->ShadowedValue[1];
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    uVar10 = 4;
    if (!bVar7) goto LAB_14de246a8;
  }
  uVar10 = uVar15;
LAB_14de246a8:
  uVar13 = 0xff;
  if (*(int *)((longlong)pTVar5->ShadowedValue + uVar10) < 0xff) {
    uVar13 = *(uint *)((longlong)pTVar5->ShadowedValue + uVar10);
  }
  if (0 < (int)uVar13) {
    uVar15 = (ulonglong)(uVar13 & 0xff);
  }
  uVar16 = (uchar)uVar15;
  if (uVar16 == '\0') {
    this_01 = UDLSSSettings::StaticClass();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    uVar16 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x8;
  }
  local_1c8 = (FRDGTexture *)0x0;
  if (iVar12 != 0) {
    pFVar2 = param_2->Family;
    if (((pFVar2->bIsViewFamilyInfo == false) ||
        (*(char *)(*(longlong *)&pFVar2[1].DebugViewShaderMode + 8) == '\0')) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                           ,0x7c0,
                           L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FOutputs *)(*pcVar4)();
      return pFVar9;
    }
    lVar3 = *(longlong *)&pFVar2[1].DebugViewShaderMode;
    local_b8._16_8_ = *(longlong *)(lVar3 + 0x1d0);
    if ((*(longlong *)(lVar3 + 0x1c0) != 0) && (*(longlong *)(lVar3 + 0x1c8) != 0)) {
      local_b8.Depth = *(FRDGTexture **)(lVar3 + 0x1c0);
      local_b8.Stencil = *(FRDGTextureSRV **)(lVar3 + 0x1c8);
      local_b8._16_8_ = *(longlong *)(lVar3 + 0x1d0);
      local_1c8 = AddBiasCurrentColorPass
                            (param_1,param_2,(TIntRect<int> *)&local_1d8._s_0,&local_b8,uVar16);
    }
  }
  local_e8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_190._24_8_;
  local_e8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_190._32_8_;
  local_d8._s_0.Min.field0_0x0 = local_1d8._s_0.Min.field0_0x0;
  local_d8._s_0.Max.field0_0x0 = local_1d8._s_0.Max.field0_0x0;
  local_148 = AddVelocityCombinePass
                        (param_1,param_2,local_140,local_1a0,(FRDGTexture *)0x0,
                         (TIntRect<int> *)&local_d8._s_0,(TIntRect<int> *)&local_e8._s_0,
                         (TVector2<float>)local_190._40_8_,bVar14);
  local_138 = local_1c8;
  local_15c = bVar14;
  if (local_158 == 1) {
    local_c8._s_0.Min.field0_0x0 = local_1d8._s_0.Min.field0_0x0;
    local_c8._s_0.Max.field0_0x0 = local_1d8._s_0.Max.field0_0x0;
    pFVar11 = AddGBufferResolvePass
                        (&local_60,param_1,param_2,param_3,(TIntRect<int> *)&local_c8._s_0,true);
    local_130 = pFVar11->DiffuseAlbedo;
    pFStack_120 = pFVar11->Normals;
    local_140 = pFVar11->LinearDepth;
    local_128 = pFVar11->SpecularAlbedo;
    local_118 = pFVar11->Roughness;
    local_68 = local_140;
  }
  local_198.Reference = pIVar1;
  if (pIVar1 != (IHistory *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_1a8);
  }
  AddDLSSPass(this,(FRDGBuilder *)local_190,(FSceneView *)param_1,(FDLSSPassParameters *)param_2,
              (IHistory *)(local_190 + 8),&local_198);
  (__return_storage_ptr__->FullRes).Texture = (FRDGTexture *)local_190._0_8_;
  (__return_storage_ptr__->FullRes).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_190._24_8_;
  (__return_storage_ptr__->FullRes).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_190._32_8_;
  if (local_1b0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1c0);
  }
  if (pIVar1 != (IHistory *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  }
  return __return_storage_ptr__;
}

// Fork_GameThread @ 14de26380

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

ITemporalUpscaler * __thiscall
FDLSSSceneViewFamilyUpscaler::Fork_GameThread
          (FDLSSSceneViewFamilyUpscaler *this,FSceneViewFamily *param_1)

{
  EDLSSQualityMode EVar1;
  ITemporalUpscaler IVar2;
  ITemporalUpscaler *pIVar3;
  
  pIVar3 = ::operator_new(0x18);
  if (pIVar3 != (ITemporalUpscaler *)0x0) {
    IVar2 = (ITemporalUpscaler)this->Upscaler;
    EVar1 = this->DLSSQualityMode;
    *pIVar3 = (ITemporalUpscaler)&___7FDLSSSceneViewFamilyUpscaler__6B_;
    pIVar3[1] = IVar2;
    *(EDLSSQualityMode *)(pIVar3 + 2) = EVar1;
    return pIVar3;
  }
  return (ITemporalUpscaler *)0x0;
}

// GetDebugName @ 14de26bc0

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

wchar_t * __thiscall FDLSSSceneViewFamilyUpscaler::GetDebugName(FDLSSSceneViewFamilyUpscaler *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  char cVar3;
  bool bVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  
  if (((this->Upscaler == (FDLSSUpscaler *)0x0) ||
      (cVar3 = (**(code **)(FDLSSUpscaler::NGXRHIExtensions->_padding_ + 0x10))(),
      pTVar2 = CVarNGXDLSSDenoiserMode.Ref, cVar3 == '\0')) ||
     ((FDLSSUpscaler::NGXRHIExtensions->NGXQueryFeature).bIsDlssRRAvailable == false)) {
    iVar7 = 0;
  }
  else {
    bVar4 = IsInParallelRenderingThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
      pcVar1 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar1)();
      return pwVar5;
    }
    iVar6 = 1;
    if (pTVar2->ShadowedValue[1] < 1) {
      iVar6 = pTVar2->ShadowedValue[1];
    }
    iVar7 = 0;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
  }
  pwVar5 = L"FDLSSSceneViewFamilyUpscaler";
  if (iVar7 == 1) {
    pwVar5 = L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)";
  }
  return pwVar5;
}

// GetMaxUpsampleResolutionFraction @ 14de26e50

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

float __thiscall
FDLSSSceneViewFamilyUpscaler::GetMaxUpsampleResolutionFraction(FDLSSSceneViewFamilyUpscaler *this)

{
  float fVar1;
  
  fVar1 = FDLSSUpscaler::GetMaxResolutionFractionForQuality(this->Upscaler,this->DLSSQualityMode);
  return fVar1;
}

// GetMinUpsampleResolutionFraction @ 14de26f20

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

float __thiscall
FDLSSSceneViewFamilyUpscaler::GetMinUpsampleResolutionFraction(FDLSSSceneViewFamilyUpscaler *this)

{
  float fVar1;
  
  fVar1 = FDLSSUpscaler::GetMinResolutionFractionForQuality(this->Upscaler,this->DLSSQualityMode);
  return fVar1;
}

// IsDLSSTemporalUpscaler @ 14de27f10

bool __cdecl FDLSSSceneViewFamilyUpscaler::IsDLSSTemporalUpscaler(ITemporalUpscaler *param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 != (ITemporalUpscaler *)0x0) {
    pwVar1 = (wchar_t *)(**(code **)((longlong)*param_1 + 8))();
    if ((pwVar1 == L"FDLSSSceneViewFamilyUpscaler") ||
       (pwVar1 == L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)")) {
      return true;
    }
  }
  return false;
}

