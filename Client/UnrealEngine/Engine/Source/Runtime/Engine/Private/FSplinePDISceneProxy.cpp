// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetDynamicMeshElements @ 1479c7c30

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
`USplineComponent::CreateSceneProxy'::__l2::FSplinePDISceneProxy::GetDynamicMeshElements
          (void *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  FSceneView *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplinePDISceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
  FVar9;
  FPrimitiveDrawInterface *pFVar10;
  int iVar11;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  FColor_u_0 local_res10 [4];
  uint local_res20;
  FName local_68;
  uint local_60;
  uint uStack_5c;
  FName local_58;
  FName local_50;
  FName local_48;
  
  uVar16 = 0;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplinePDISceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_SplineSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements,
                 *pFVar8,L"STAT_SplineSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplinePDISceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar8 = ::FName::FName(&local_50,"STAT_SplineSceneProxy_GetDynamicMeshElements");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl__public:_virtual_class_FPrimitiveSceneProxy_*___cdecl_USplineComponent::CreateSceneProxy(void)_::_2_::FSplinePDISceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_SplineSceneProxy_GetDynamicMeshElements>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_SplineSceneProxy_GetDynamicMeshElements,*pFVar8,
                         L"STAT_SplineSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar12.Value;
        local_68.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SplineComponent.cpp"
                   ,0xae9);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60 = FVar12.Value;
      uStack_5c = uVar14;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_1479c7daf;
    }
  }
  bVar4 = false;
  FVar13 = local_48;
LAB_1479c7daf:
  iVar11 = param_1->ArrayNum;
  if (0 < iVar11) {
    uVar14 = 1;
    uVar17 = uVar16;
    do {
      uVar15 = (uint)uVar16;
      if ((param_3 & uVar14) != 0) {
        uVar7 = 0;
        if ((int)uVar15 < iVar11) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FSceneView **)((param_1->AllocatorInstance).Data + uVar17);
        pFVar10 = FMeshElementCollector::GetPDI(param_4,uVar15);
        dVar21 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y -
                 *(double *)((longlong)this + 0x178);
        dVar20 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X -
                 *(double *)((longlong)this + 0x170);
        dVar18 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z -
                 *(double *)((longlong)this + 0x180);
        fVar19 = (float)(dVar21 * dVar21 + dVar20 * dVar20 + dVar18 * dVar18);
        param_3 = local_res20;
        if ((*(float *)((longlong)this + 0x27c) * *(float *)((longlong)this + 0x27c) <= fVar19) &&
           (fVar19 <= *(float *)((longlong)this + 0x278) * *(float *)((longlong)this + 0x278))) {
          USplineComponent::Draw
                    (pFVar10,pFVar1,(FInterpCurveVector *)((longlong)this + 0x288),
                     (TMatrix<double> *)((longlong)this + 0x110),
                     (FLinearColor *)((longlong)this + 0x2a0),'\0');
          param_3 = local_res20;
        }
      }
      iVar11 = param_1->ArrayNum;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar15 + 1) < iVar11);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 1479cbbb0

uint __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplinePDISceneProxy::GetMemoryFootprint(void *this)

{
  return *(int *)((longlong)this + 0x104) * 4 + 0x2b0;
}

// GetTypeHash @ 1479d3bb0

ulong64 __thiscall
`USplineComponent::CreateSceneProxy'::__l2::FSplinePDISceneProxy::GetTypeHash(void *this)

{
  return 0x1551ffc78;
}

// GetViewRelevance @ 1479d5020

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
`USplineComponent::CreateSceneProxy'::__l2::FSplinePDISceneProxy::GetViewRelevance
          (void *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if (*(char *)((longlong)this + 0x280) != '\0') {
    bVar2 = FPrimitiveSceneProxy::IsShown(this,param_1);
    if ((bVar2) && ((param_1->Family->EngineShowFlags).Splines != 0)) {
      uVar3 = 4;
      goto LAB_1479d507d;
    }
  }
  uVar3 = 0;
LAB_1479d507d:
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar3 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast(this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  bVar2 = FPrimitiveSceneProxy::UseEditorCompositing(this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 8;
  return __return_storage_ptr__;
}

