// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetDynamicMeshElements @ 1478d1310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDrawFrustumSceneProxy::GetDynamicMeshElements
          (FDrawFrustumSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  FMeshElementCollector *this_00;
  bool bVar17;
  bool bVar18;
  FName *pFVar19;
  TStatIdData *pTVar20;
  double *pdVar21;
  FPrimitiveDrawInterface *pFVar22;
  uint uVar23;
  longlong lVar24;
  FName FVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float _X;
  uint uVar34;
  undefined1 auStackY_2c8 [32];
  FColor_u_0 local_254;
  FName local_250;
  FName local_248;
  FName local_240;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  FMeshElementCollector *local_170;
  FName local_168;
  FName local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar26 = 0;
  local_170 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FDrawFrustumSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FDrawFrustumSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FDrawFrustumSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_DrawFrustumSceneProxy_DrawDynamicElements = (TStatIdData *)0x0;
    pFVar19 = ::FName::FName(&local_168,"STAT_DrawFrustumSceneProxy_DrawDynamicElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FDrawFrustumSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_DrawFrustumSceneProxy_DrawDynamicElements,*pFVar19,
               L"STAT_DrawFrustumSceneProxy_DrawDynamicElements","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FDrawFrustumSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar20 = _StatPtr_STAT_DrawFrustumSceneProxy_DrawDynamicElements;
  if (_StatPtr_STAT_DrawFrustumSceneProxy_DrawDynamicElements == (TStatIdData *)0x0) {
    pFVar19 = ::FName::FName(&local_160,"STAT_DrawFrustumSceneProxy_DrawDynamicElements");
    pTVar20 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FDrawFrustumSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_DrawFrustumSceneProxy_DrawDynamicElements,*pFVar19,
                         L"STAT_DrawFrustumSceneProxy_DrawDynamicElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)&pTVar20->Name;
  bVar15 = false;
  bVar16 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  bVar17 = false;
  bVar18 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_254.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_254._s_0,(pTVar20->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar16 = true;
      bVar17 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_250.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_250.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_250,(pTVar20->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\DrawFrustumComponent.cpp"
                   ,0x30);
        bVar15 = true;
        bVar16 = true;
        bVar17 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_248 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar17 = true;
      goto LAB_1478d14dc;
    }
  }
  bVar16 = bVar18;
  bVar15 = bVar17;
  bVar17 = false;
  local_248 = local_240;
  FVar25 = local_240;
LAB_1478d14dc:
  fVar1 = this->FrustumAngle;
  _X = fVar1 * __real_3c0efa35;
  if (fVar1 <= 0.0) {
    fVar29 = __real_43fa0000;
    if (fVar1 != 0.0) {
      fVar29 = fVar1 * __real_bf000000;
    }
  }
  else {
    fVar29 = tanf(_X);
    fVar29 = fVar29 * this->FrustumStartDist;
  }
  fVar2 = this->FrustumAspectRatio;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_158 = (double)this->FrustumStartDist;
  dStack_150 = (double)fVar29;
  fVar33 = fVar29 / fVar2;
  local_148 = (double)fVar33;
  local_138 = CONCAT44((uint)((ulonglong)dStack_150 >> 0x20) ^ uVar34,SUB84(dStack_150,0) ^ uVar28);
  local_130 = local_148;
  local_118 = CONCAT44((uint)((ulonglong)local_148 >> 0x20) ^ uVar34,SUB84(local_148,0) ^ uVar28);
  local_100 = local_118;
  local_140 = local_158;
  local_128 = local_158;
  local_120 = local_138;
  local_110 = local_158;
  local_108 = dStack_150;
  if (0.0 < fVar1) {
    fVar29 = tanf(_X);
    fVar29 = fVar29 * this->FrustumEndDist;
    fVar33 = fVar29 / fVar2;
  }
  this_00 = local_170;
  fVar1 = __real_3b808081;
  pdVar21 = &dStack_150;
  local_f0 = (double)fVar29;
  lVar24 = 8;
  local_f8 = (double)this->FrustumEndDist;
  local_e8 = (double)fVar33;
  local_d8 = CONCAT44((uint)((ulonglong)local_f0 >> 0x20) ^ uVar34,SUB84(local_f0,0) ^ uVar28);
  local_d0 = local_e8;
  local_b8 = CONCAT44((uint)((ulonglong)local_e8 >> 0x20) ^ uVar34,SUB84(local_e8,0) ^ uVar28);
  local_c0 = local_d8;
  local_e0 = local_f8;
  local_c8 = local_f8;
  local_b0 = local_f8;
  local_a8 = local_f0;
  local_a0 = local_b8;
  do {
    auVar31 = *(undefined1 (*) [16])(pdVar21 + -1);
    dVar5 = auVar31._8_8_;
    dVar3 = pdVar21[1];
    dVar7 = *(double *)&this->field_0x138;
    dVar8 = *(double *)&this->field_0x118;
    dVar6 = auVar31._0_8_;
    auVar30._8_4_ = auVar31._0_4_;
    auVar30._0_8_ = dVar6;
    auVar30._12_4_ = auVar31._4_4_;
    auVar31._8_4_ = SUB84(dVar3,0);
    auVar31._0_8_ = dVar3;
    auVar31._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar9 = *(double *)&this->field_0x158;
    dVar10 = *(double *)&this->field_0x178;
    auVar32._8_4_ = SUB84(__real_3ff0000000000000,0);
    auVar32._0_8_ = __real_3ff0000000000000;
    auVar32._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar11 = *(double *)&this->field_0x140;
    dVar12 = *(double *)&this->field_0x120;
    dVar13 = *(double *)&this->field_0x160;
    pdVar21[-1] = dVar5 * *(double *)&this->field_0x130 + dVar6 * *(double *)&this->field_0x110 +
                  dVar3 * *(double *)&this->field_0x150 +
                  __real_3ff0000000000000 * *(double *)&this->field_0x170;
    dVar14 = *(double *)&this->field_0x180;
    *pdVar21 = dVar5 * dVar7 + auVar30._8_8_ * dVar8 + auVar31._8_8_ * dVar9 +
               auVar32._8_8_ * dVar10;
    pdVar21[1] = dVar5 * dVar11 + dVar6 * dVar12 + dVar3 * dVar13 + __real_3ff0000000000000 * dVar14
    ;
    pdVar21 = pdVar21 + 3;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  if (0 < param_1->ArrayNum) {
    uVar28 = 1;
    uVar27 = uVar26;
    do {
      uVar34 = (uint)uVar27;
      if ((param_3 & uVar28) != 0) {
        pFVar22 = FMeshElementCollector::GetPDI(this_00,uVar34);
        uVar23 = 0;
        if ((int)uVar34 < param_1->ArrayNum) {
          uVar23 = ~uVar34 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FPrimitiveSceneProxy::GetDepthPriorityGroup
                  ((FPrimitiveSceneProxy *)this,
                   *(FSceneView **)((param_1->AllocatorInstance).Data + uVar26));
        local_230 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_22c = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_228 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_224 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_158,&local_140,&local_230);
        local_220 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_21c = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_218 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_214 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_140,&local_128,&local_220);
        local_210 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_20c = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_208 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_204 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_128,&local_110,&local_210);
        local_200 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_1fc = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_1f8 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_1f4 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_110,&local_158,&local_200);
        local_1f0 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_1ec = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_1e8 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_1e4 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_f8,&local_e0,&local_1f0);
        local_1e0 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_1dc = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_1d8 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_1d4 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_e0,&local_c8,&local_1e0);
        local_1d0 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_1cc = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_1c8 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_1c4 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_c8,&local_b0,&local_1d0);
        local_1c0 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_1bc = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_1b8 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_1b4 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_b0,&local_f8,&local_1c0);
        local_1b0 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_1ac = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_1a8 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_1a4 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_158,&local_f8,&local_1b0);
        local_1a0 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_19c = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_198 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_194 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_140,&local_e0,&local_1a0);
        local_190 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_18c = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_188 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_184 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_128,&local_c8,&local_190);
        local_180 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.R];
        local_17c = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.G];
        local_178 = FLinearColor::sRGBToLinearTable[(this->FrustumColor).field0_0x0._s_0.B];
        local_174 = (float)(this->FrustumColor).field0_0x0._s_0.A * fVar1;
        (**(code **)(pFVar22->_padding_ + 0x30))(pFVar22,&local_110,&local_b0,&local_180);
      }
      uVar27 = (ulonglong)(uVar34 + 1);
      uVar28 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      uVar26 = uVar26 + 8;
      FVar25 = local_248;
    } while ((int)(uVar34 + 1) < param_1->ArrayNum);
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 1478d6340

uint __thiscall FDrawFrustumSceneProxy::GetMemoryFootprint(FDrawFrustumSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x2a0;
}

// GetTypeHash @ 1478ddaa0

ulong64 __thiscall FDrawFrustumSceneProxy::GetTypeHash(FDrawFrustumSceneProxy *this)

{
  return 0x1551f74b8;
}

// GetViewRelevance @ 1478deab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FDrawFrustumSceneProxy::GetViewRelevance
          (FDrawFrustumSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if (((bVar2) && ((param_1->Family->EngineShowFlags).CameraFrustums != 0)) &&
     (this->bFrustumEnabled != false)) {
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar3 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  bVar2 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 8;
  return __return_storage_ptr__;
}

