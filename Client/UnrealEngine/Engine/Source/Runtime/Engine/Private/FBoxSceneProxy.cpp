// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetDynamicMeshElements @ 147837ef0

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
`UBoxComponent::CreateSceneProxy'::__l2::FBoxSceneProxy::GetDynamicMeshElements
          (void *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UBoxComponent::CreateSceneProxy(void)_::_2_::FBoxSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BoxSceneProxy_GetDynamicMeshElements>
  FVar10;
  FPrimitiveDrawInterface *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FName local_128;
  FLinearColor_u_0 local_110;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  FName local_a0;
  FName local_98;
  FLinearColor local_90;
  TVector<double>_u_0 local_78 [2];
  
  uVar15 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BoxSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UBoxComponent::CreateSceneProxy(void)_::_2_::FBoxSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BoxSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar9 = ::FName::FName(&local_a0,"STAT_BoxSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoxSceneProxy_GetDynamicMeshElements,
                 *pFVar9,L"STAT_BoxSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_BoxSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_BoxSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UBoxComponent::CreateSceneProxy(void)_::_2_::FBoxSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BoxSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar9 = ::FName::FName(&local_98,"STAT_BoxSceneProxy_GetDynamicMeshElements");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_UBoxComponent::CreateSceneProxy(void)_::_2_::FBoxSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_BoxSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_BoxSceneProxy_GetDynamicMeshElements,*pFVar9,
                          L"STAT_BoxSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_128 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  if ((local_128.ComparisonIndex.Value.Value != 0) || (local_128.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = local_128.ComparisonIndex.Value.Value;
        local_res10.Number = local_128.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\BoxComponent.cpp"
                   ,0xc1);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_128,CycleScopeStart);
      bVar4 = true;
      goto LAB_147838084;
    }
  }
  bVar4 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
LAB_147838084:
  fVar6 = __real_3b808081;
  iVar12 = param_1->ArrayNum;
  if (0 < iVar12) {
    uVar13 = 1;
    uVar16 = uVar15;
    do {
      uVar14 = (uint)uVar15;
      if ((param_3 & uVar13) != 0) {
        uVar8 = 0;
        if ((int)uVar14 < iVar12) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar1 = *(byte *)((longlong)this + 0x79);
        if (((bVar1 & 2) == 0) && ((bVar1 >> 2 & 1) == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        local_110._s_0.R = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x2a2)];
        local_110._s_0.G = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x2a1)];
        local_110._s_0.B = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)this + 0x2a0)];
        local_110._s_0.A = (float)*(byte *)((longlong)this + 0x2a3) * fVar6;
        GetViewSelectionColor
                  (&local_90,(FLinearColor *)&local_110._s_0,
                   *(FSceneView **)((param_1->AllocatorInstance).Data + uVar16),bVar7,
                   (bool)(bVar1 >> 4 & 1),false,(bool)(bVar1 >> 2 & 1));
        pFVar11 = FMeshElementCollector::GetPDI(param_4,uVar14);
        local_100._s_0.X = *(double *)((longlong)this + 0x150);
        local_100._s_0.Y = *(double *)((longlong)this + 0x158);
        local_e8._s_0.X = *(double *)((longlong)this + 0x130);
        local_e8._s_0.Y = *(double *)((longlong)this + 0x138);
        local_100._s_0.Z = *(double *)((longlong)this + 0x160);
        local_d0._s_0.X = *(double *)((longlong)this + 0x110);
        local_d0._s_0.Y = *(double *)((longlong)this + 0x118);
        local_e8._s_0.Z = *(double *)((longlong)this + 0x140);
        local_d0._s_0.Z = *(double *)((longlong)this + 0x120);
        local_b8._s_0.X = *(double *)((longlong)this + 0x170);
        local_b8._s_0.Y = *(double *)((longlong)this + 0x178);
        local_78[0]._0_8_ = *(double *)((longlong)this + 0x288);
        local_78[0]._8_8_ = *(double *)((longlong)this + 0x290);
        local_b8._s_0.Z = *(double *)((longlong)this + 0x180);
        local_78[0]._16_8_ = *(double *)((longlong)this + 0x298);
        DrawOrientedWireBox(pFVar11,(TVector<double> *)&local_b8._s_0,
                            (TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_e8._s_0,
                            (TVector<double> *)&local_100._s_0,(TVector<double> *)&local_78[0]._s_0,
                            &local_90,'\0',*(float *)((longlong)this + 0x2a4),0.0,false);
      }
      iVar12 = param_1->ArrayNum;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar14 + 1) < iVar12);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(local_128,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14783a760

uint __thiscall
`UBoxComponent::CreateSceneProxy'::__l2::FBoxSceneProxy::GetMemoryFootprint(void *this)

{
  return *(int *)((longlong)this + 0x104) * 4 + 0x2b0;
}

// GetTypeHash @ 14783dfc0

ulong64 __thiscall `UBoxComponent::CreateSceneProxy'::__l2::FBoxSceneProxy::GetTypeHash(void *this)

{
  return 0x1551f61e8;
}

// GetViewRelevance @ 14783e620

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
`UBoxComponent::CreateSceneProxy'::__l2::FBoxSceneProxy::GetViewRelevance
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

