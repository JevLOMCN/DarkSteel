// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetDynamicMeshElements @ 1479c6ae0

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
`USphereComponent::CreateSceneProxy'::__l2::FSphereSceneProxy::GetDynamicMeshElements
          (void *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  FSceneView *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USphereComponent::CreateSceneProxy(void)_::_2_::FSphereSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SphereSceneProxy_GetDynamicMeshElements>
  FVar15;
  FPrimitiveDrawInterface *pFVar16;
  int iVar17;
  FName FVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  float fVar31;
  FColor_u_0 local_230;
  float local_22c;
  double local_228;
  double dStack_220;
  double local_218;
  FName local_208;
  FName local_200;
  FName local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  FLinearColor_u_0 local_1b8;
  FLinearColor local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  FName local_108;
  FName local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  
  uVar19 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SphereSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USphereComponent::CreateSceneProxy(void)_::_2_::FSphereSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SphereSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar14 = ::FName::FName(&local_108,"STAT_SphereSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SphereSceneProxy_GetDynamicMeshElements,
                 *pFVar14,L"STAT_SphereSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_SphereSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_SphereSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USphereComponent::CreateSceneProxy(void)_::_2_::FSphereSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SphereSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar14 = ::FName::FName(&local_100,"STAT_SphereSceneProxy_GetDynamicMeshElements");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USphereComponent::CreateSceneProxy(void)_::_2_::FSphereSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SphereSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SphereSceneProxy_GetDynamicMeshElements,*pFVar14,
                          L"STAT_SphereSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar8 = false;
  bVar10 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_230.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_230._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_208.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SphereComponent.cpp"
                   ,0x87);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_200 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar9 = true;
      goto LAB_1479c6c6c;
    }
  }
  bVar9 = false;
  local_200 = local_1f8;
  FVar18 = local_1f8;
LAB_1479c6c6c:
  iVar17 = param_1->ArrayNum;
  if (0 < iVar17) {
    uVar22 = 1;
    uVar21 = uVar19;
    fVar31 = __real_3b808081;
    do {
      uVar20 = (uint)uVar21;
      if ((param_3 & uVar22) != 0) {
        uVar12 = 0;
        if ((int)uVar20 < iVar17) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FSceneView **)((param_1->AllocatorInstance).Data + uVar19);
        pFVar16 = FMeshElementCollector::GetPDI(param_4,uVar20);
        bVar1 = *(byte *)((longlong)this + 0x79);
        if (((bVar1 & 2) == 0) && ((bVar1 >> 2 & 1) == 0)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        local_1b8._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x286)];
        local_1b8._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x285)];
        local_1b8._s_0.B = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x284)];
        local_1b8._s_0.A = (float)*(byte *)((longlong)this + 0x287) * fVar31;
        GetViewSelectionColor
                  (&local_1a8,(FLinearColor *)&local_1b8._s_0,pFVar2,bVar11,(bool)(bVar1 >> 4 & 1),
                   false,(bool)(bVar1 >> 2 & 1));
        dVar30 = (pFVar2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y -
                 *(double *)((longlong)this + 0x178);
        dVar27 = (pFVar2->ViewMatrices).ViewOrigin.field0_0x0._s_0.X -
                 *(double *)((longlong)this + 0x170);
        dVar23 = (pFVar2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z -
                 *(double *)((longlong)this + 0x180);
        fVar26 = (float)(dVar30 * dVar30 + dVar27 * dVar27 + dVar23 * dVar23);
        if ((*(float *)((longlong)this + 0x27c) * *(float *)((longlong)this + 0x27c) <= fVar26) &&
           (fVar26 <= *(float *)((longlong)this + 0x278) * *(float *)((longlong)this + 0x278))) {
          dVar23 = *(double *)((longlong)this + 0x110);
          dVar27 = *(double *)((longlong)this + 0x118);
          dVar30 = *(double *)((longlong)this + 0x120);
          local_1d0 = *(double *)((longlong)this + 0x130);
          dStack_1c8 = *(double *)((longlong)this + 0x138);
          local_1c0 = *(double *)((longlong)this + 0x140);
          dStack_220 = *(double *)((longlong)this + 0x158);
          local_218 = *(double *)((longlong)this + 0x160);
          dVar4 = dVar27 * dVar27 + dVar23 * dVar23 + dVar30 * dVar30;
          dVar5 = dStack_1c8 * dStack_1c8 + local_1d0 * local_1d0 + local_1c0 * local_1c0;
          local_228 = *(double *)((longlong)this + 0x150);
          auVar29._0_8_ = local_228 * local_228;
          auVar29._8_8_ = 0;
          auVar28._0_8_ = local_218 * local_218;
          auVar28._8_8_ = 0;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar5;
          auVar24 = sqrtpd(auVar29,auVar24);
          dVar7 = dStack_220 * dStack_220 + auVar29._0_8_ + auVar28._0_8_;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = dVar4;
          auVar29 = sqrtpd(auVar28,auVar25);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = dVar7;
          auVar25 = sqrtpd(auVar24,auVar6);
          local_22c = (float)auVar24._0_8_;
          if ((float)auVar29._0_8_ <= (float)auVar24._0_8_) {
            local_22c = (float)auVar29._0_8_;
          }
          if ((float)auVar25._0_8_ <= local_22c) {
            local_22c = (float)auVar25._0_8_;
          }
          dStack_1e0 = dVar27;
          local_1d8 = dVar30;
          local_1e8 = dVar23;
          if ((dVar4 != __real_3ff0000000000000) &&
             (dStack_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             local_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             local_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             __real_3e45798ee0000000 <= dVar4)) {
            local_f8 = __real_3ff0000000000000 / SQRT(dVar4);
            dStack_1e0 = dVar27 * local_f8;
            local_1d8 = dVar30 * local_f8;
            local_1e8 = dVar23 * local_f8;
          }
          dVar23 = (double)local_22c;
          local_198._s_0.Z = local_1d8 * dVar23;
          local_198._s_0.X = local_1e8 * dVar23;
          local_198._s_0.Y = dStack_1e0 * dVar23;
          if (dVar5 != __real_3ff0000000000000) {
            if (__real_3e45798ee0000000 <= dVar5) {
              local_f0 = __real_3ff0000000000000 / SQRT(dVar5);
              local_1d0 = local_f0 * local_1d0;
              dStack_1c8 = local_f0 * dStack_1c8;
              local_1c0 = local_f0 * local_1c0;
            }
            else {
              local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              dStack_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            }
          }
          local_168._s_0.X = local_1d0 * dVar23;
          local_168._s_0.Y = dStack_1c8 * dVar23;
          local_168._s_0.Z = local_1c0 * dVar23;
          if (dVar7 != __real_3ff0000000000000) {
            if (__real_3e45798ee0000000 <= dVar7) {
              local_e8 = __real_3ff0000000000000 / SQRT(dVar7);
              dStack_220 = local_e8 * dStack_220;
              local_228 = local_e8 * local_228;
              local_218 = local_e8 * local_218;
            }
            else {
              local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              dStack_220 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_228 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
          }
          local_150._s_0.Z = *(double *)((longlong)this + 0x180);
          local_180._s_0.X = local_228 * dVar23;
          local_180._s_0.Y = dStack_220 * dVar23;
          local_180._s_0.Z = local_218 * dVar23;
          iVar13 = (int)(*(float *)((longlong)this + 0x288) * __real_3e800000);
          local_150._s_0.X = *(double *)((longlong)this + 0x170);
          local_150._s_0.Y = *(double *)((longlong)this + 0x178);
          iVar17 = 0x40;
          if (iVar13 < 0x40) {
            iVar17 = iVar13;
          }
          iVar13 = 0x10;
          if (0x10 < iVar17) {
            iVar13 = iVar17;
          }
          DrawCircle(pFVar16,(TVector<double> *)&local_150._s_0,(TVector<double> *)&local_198._s_0,
                     (TVector<double> *)&local_168._s_0,&local_1a8,
                     (double)*(float *)((longlong)this + 0x288),iVar13,'\0',
                     *(float *)((longlong)this + 0x28c),0.0,false);
          local_138._s_0.X = *(double *)((longlong)this + 0x170);
          local_138._s_0.Y = *(double *)((longlong)this + 0x178);
          local_138._s_0.Z = *(double *)((longlong)this + 0x180);
          DrawCircle(pFVar16,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_198._s_0,
                     (TVector<double> *)&local_180._s_0,&local_1a8,
                     (double)*(float *)((longlong)this + 0x288),iVar13,'\0',
                     *(float *)((longlong)this + 0x28c),0.0,false);
          local_120._s_0.X = *(double *)((longlong)this + 0x170);
          local_120._s_0.Y = *(double *)((longlong)this + 0x178);
          local_120._s_0.Z = *(double *)((longlong)this + 0x180);
          DrawCircle(pFVar16,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_168._s_0,
                     (TVector<double> *)&local_180._s_0,&local_1a8,
                     (double)*(float *)((longlong)this + 0x288),iVar13,'\0',
                     *(float *)((longlong)this + 0x28c),0.0,false);
          fVar31 = __real_3b808081;
        }
      }
      iVar17 = param_1->ArrayNum;
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      uVar19 = uVar19 + 8;
      FVar18 = local_200;
    } while ((int)(uVar20 + 1) < iVar17);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 1479cbb70

uint __thiscall
`USphereComponent::CreateSceneProxy'::__l2::FSphereSceneProxy::GetMemoryFootprint(void *this)

{
  return *(int *)((longlong)this + 0x104) * 4 + 0x290;
}

// GetTypeHash @ 1479d3b90

ulong64 __thiscall
`USphereComponent::CreateSceneProxy'::__l2::FSphereSceneProxy::GetTypeHash(void *this)

{
  return 0x1551ff700;
}

// GetViewRelevance @ 1479d4dd0

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
`USphereComponent::CreateSceneProxy'::__l2::FSphereSceneProxy::GetViewRelevance
          (void *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  
  if (((*(byte *)((longlong)this + 0x280) & 1) == 0) ||
     ((*(byte *)((longlong)this + 0x79) & 6) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_1->Family->EngineShowFlags).Collision == 0) ||
     ((*(byte *)((longlong)this + 0x7b) & 0x20) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar3 = FPrimitiveSceneProxy::IsShown(this,param_1);
  if (((bVar3) && (bVar4)) || (bVar2)) {
    uVar5 = 4;
  }
  else {
    uVar5 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar5 | 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast(this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3;
  bVar4 = FPrimitiveSceneProxy::UseEditorCompositing(this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 8;
  return __return_storage_ptr__;
}

