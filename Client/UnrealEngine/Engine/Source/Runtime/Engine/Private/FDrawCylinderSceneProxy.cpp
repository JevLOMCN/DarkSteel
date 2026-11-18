// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetDynamicMeshElements @ 147838a20

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
`UCapsuleComponent::CreateSceneProxy'::__l2::FDrawCylinderSceneProxy::GetDynamicMeshElements
          (void *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UCapsuleComponent::CreateSceneProxy(void)_::_2_::FDrawCylinderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GetDynamicMeshElements_DrawDynamicElements>
  FVar15;
  FPrimitiveDrawInterface *pFVar16;
  int iVar17;
  int iVar18;
  FName FVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  double dVar24;
  FColor_u_0 local_res10 [2];
  FName local_1a0;
  FName local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  FName local_148;
  FLinearColor_u_0 local_138;
  TVector<double>_u_0 local_128;
  FName local_110;
  FName local_108;
  double local_100;
  double local_f8;
  FLinearColor local_f0 [11];
  
  uVar21 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GetDynamicMeshElements_DrawDynamicElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UCapsuleComponent::CreateSceneProxy(void)_::_2_::FDrawCylinderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GetDynamicMeshElements_DrawDynamicElements>
         )0x0) {
      pFVar14 = ::FName::FName(&local_110,"STAT_GetDynamicMeshElements_DrawDynamicElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_GetDynamicMeshElements_DrawDynamicElements,*pFVar14,
                 L"STAT_GetDynamicMeshElements_DrawDynamicElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_GetDynamicMeshElements_DrawDynamicElements;
  if (StatPtr_STAT_GetDynamicMeshElements_DrawDynamicElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UCapsuleComponent::CreateSceneProxy(void)_::_2_::FDrawCylinderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GetDynamicMeshElements_DrawDynamicElements>
       )0x0) {
    pFVar14 = ::FName::FName(&local_108,"STAT_GetDynamicMeshElements_DrawDynamicElements");
    FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UCapsuleComponent::CreateSceneProxy(void)_::_2_::FDrawCylinderSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_GetDynamicMeshElements_DrawDynamicElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_GetDynamicMeshElements_DrawDynamicElements,*pFVar14,
                          L"STAT_GetDynamicMeshElements_DrawDynamicElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar4 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar11 = false;
  bVar5 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) ||
     (bVar3 = bVar4, bVar6 = bVar7, FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar4 = false;
      bVar7 = true;
      bVar11 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CapsuleComponent.cpp"
                   ,0x37);
        bVar4 = true;
        bVar7 = true;
        bVar11 = true;
        bVar5 = true;
      }
    }
    bVar3 = bVar4;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_198 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar11 = true;
      bVar5 = true;
      goto LAB_147838bce;
    }
  }
  bVar7 = bVar5;
  bVar4 = bVar11;
  bVar11 = false;
  bVar5 = false;
  local_198 = local_148;
  FVar19 = local_148;
LAB_147838bce:
  fVar10 = __real_3b808081;
  dVar9 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  iVar18 = param_1->ArrayNum;
  iVar12 = (int)(*(float *)((longlong)this + 0x284) * __real_3e800000);
  iVar17 = 0x40;
  if (iVar12 < 0x40) {
    iVar17 = iVar12;
  }
  iVar12 = 0x10;
  if (0x10 < iVar17) {
    iVar12 = iVar17;
  }
  if (0 < iVar18) {
    uVar22 = 1;
    uVar23 = uVar21;
    do {
      uVar20 = (uint)uVar21;
      if ((param_3 & uVar22) != 0) {
        uVar13 = 0;
        if ((int)uVar20 < iVar18) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar1 = *(byte *)((longlong)this + 0x79);
        if (((bVar1 & 2) == 0) && ((bVar1 >> 2 & 1) == 0)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        local_138._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x28e)];
        local_138._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x28d)];
        local_138._s_0.B = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x28c)];
        local_138._s_0.A = (float)*(byte *)((longlong)this + 0x28f) * fVar10;
        GetViewSelectionColor
                  (local_f0,(FLinearColor *)&local_138._s_0,
                   *(FSceneView **)((param_1->AllocatorInstance).Data + uVar23),bVar11,
                   (bool)(bVar1 >> 4 & 1),false,(bool)(bVar1 >> 2 & 1));
        pFVar16 = FMeshElementCollector::GetPDI(param_4,uVar20);
        local_190._s_0.X = *(double *)((longlong)this + 0x150);
        local_190._s_0.Y = *(double *)((longlong)this + 0x158);
        local_190._s_0.Z = *(double *)((longlong)this + 0x160);
        dVar24 = local_190._s_0.Y * local_190._s_0.Y + local_190._s_0.X * local_190._s_0.X +
                 local_190._s_0.Z * local_190._s_0.Z;
        if (dVar24 != dVar8) {
          if (dVar9 <= dVar24) {
            dVar24 = dVar8 / SQRT(dVar24);
            local_190._s_0.X = dVar24 * local_190._s_0.X;
            local_190._s_0.Y = dVar24 * local_190._s_0.Y;
            local_190._s_0.Z = dVar24 * local_190._s_0.Z;
          }
          else {
            local_190._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_190._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_190._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        local_178._s_0.X = *(double *)((longlong)this + 0x130);
        local_178._s_0.Y = *(double *)((longlong)this + 0x138);
        local_178._s_0.Z = *(double *)((longlong)this + 0x140);
        dVar24 = local_178._s_0.Y * local_178._s_0.Y + local_178._s_0.X * local_178._s_0.X +
                 local_178._s_0.Z * local_178._s_0.Z;
        if (dVar24 != dVar8) {
          if (dVar9 <= dVar24) {
            local_100 = dVar8 / SQRT(dVar24);
            local_178._s_0.X = local_100 * local_178._s_0.X;
            local_178._s_0.Y = local_100 * local_178._s_0.Y;
            local_178._s_0.Z = local_100 * local_178._s_0.Z;
          }
          else {
            local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        local_160._s_0.X = *(double *)((longlong)this + 0x110);
        local_160._s_0.Y = *(double *)((longlong)this + 0x118);
        local_160._s_0.Z = *(double *)((longlong)this + 0x120);
        dVar24 = local_160._s_0.Y * local_160._s_0.Y + local_160._s_0.X * local_160._s_0.X +
                 local_160._s_0.Z * local_160._s_0.Z;
        if (dVar24 != dVar8) {
          if (dVar9 <= dVar24) {
            local_f8 = dVar8 / SQRT(dVar24);
            local_160._s_0.X = local_160._s_0.X * local_f8;
            local_160._s_0.Y = local_160._s_0.Y * local_f8;
            local_160._s_0.Z = local_160._s_0.Z * local_f8;
          }
          else {
            local_160._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_160._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_160._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        local_128._s_0.X = *(double *)((longlong)this + 0x170);
        local_128._s_0.Y = *(double *)((longlong)this + 0x178);
        local_128._s_0.Z = *(double *)((longlong)this + 0x180);
        DrawWireCapsule(pFVar16,(TVector<double> *)&local_128._s_0,
                        (TVector<double> *)&local_160._s_0,(TVector<double> *)&local_178._s_0,
                        (TVector<double> *)&local_190._s_0,local_f0,
                        (double)*(float *)((longlong)this + 0x284),
                        (double)*(float *)((longlong)this + 0x288),iVar12,'\0',
                        *(float *)((longlong)this + 0x290),0.0,false);
      }
      iVar18 = param_1->ArrayNum;
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      uVar23 = uVar23 + 8;
      FVar19 = local_198;
      bVar3 = bVar4;
      bVar11 = bVar5;
      bVar6 = bVar7;
    } while ((int)(uVar20 + 1) < iVar18);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14783a7a0

uint __thiscall
`UCapsuleComponent::CreateSceneProxy'::__l2::FDrawCylinderSceneProxy::GetMemoryFootprint(void *this)

{
  return *(int *)((longlong)this + 0x104) * 4 + 0x2a0;
}

// GetTypeHash @ 14783dfe0

ulong64 __thiscall
`UCapsuleComponent::CreateSceneProxy'::__l2::FDrawCylinderSceneProxy::GetTypeHash(void *this)

{
  return 0x1551f6288;
}

// GetViewRelevance @ 14783e860

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
`UCapsuleComponent::CreateSceneProxy'::__l2::FDrawCylinderSceneProxy::GetViewRelevance
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

