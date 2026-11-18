// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// <lambda_invoker_cdecl> @ 14ca42110

void __cdecl
`FOctreeDynamicMeshSceneProxy::MakeTangentsFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,int param_2,int param_3,TVector<float> *param_4,TVector<float> *param_5,
          TVector<float> *param_6)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f800000;
  fVar4 = (param_4->field0_0x0)._s_0.Z;
  fVar1 = (param_4->field0_0x0)._s_0.X;
  fVar3 = fVar1 * (param_4->field0_0x0)._s_0.Y;
  if (0.0 <= fVar4) {
    fVar5 = __real_3f800000 / (fVar4 + __real_3f800000);
    fVar4 = (float)((uint)(fVar5 * fVar3) ^ __xmm_80000000800000008000000080000000);
    (param_5->field0_0x0)._s_0.Y = fVar4;
    (param_5->field0_0x0)._s_0.X = fVar6 - fVar5 * fVar1 * fVar1;
    (param_5->field0_0x0)._s_0.Z = (float)((uint)(param_4->field0_0x0)._s_0.X ^ uVar2);
    (param_6->field0_0x0)._s_0.X = fVar4;
    fVar4 = (param_4->field0_0x0)._s_0.Y;
    fVar6 = fVar6 - fVar4 * fVar4 * fVar5;
  }
  else {
    fVar5 = __real_3f800000 / (__real_3f800000 - fVar4);
    fVar3 = fVar5 * fVar3;
    (param_5->field0_0x0)._s_0.Y = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    (param_5->field0_0x0)._s_0.X = fVar6 - fVar5 * fVar1 * fVar1;
    (param_5->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.X = fVar3;
    fVar4 = (param_4->field0_0x0)._s_0.Y;
    fVar6 = fVar4 * fVar4 * fVar5 - fVar6;
  }
  (param_6->field0_0x0)._s_0.Y = fVar6;
  (param_6->field0_0x0)._s_0.Z = (float)((uint)(param_4->field0_0x0)._s_0.Y ^ uVar2);
  return;
}

// operator() @ 14ca6e0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FName FVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FMeshRenderBufferSet *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompDestroy> FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_02;
  undefined1 local_res20 [8];
  FColor_u_0 local_88 [2];
  uint *local_80;
  FName local_78;
  FName local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  FVar17 = StatPtr_STAT_SculptToolOctree_UpdateDecompDestroy;
  if (StatPtr_STAT_SculptToolOctree_UpdateDecompDestroy ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompDestroy>)0x0) {
    pFVar16 = ::FName::FName(&local_60,"STAT_SculptToolOctree_UpdateDecompDestroy");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompDestroy>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SculptToolOctree_UpdateDecompDestroy,*pFVar16,
                        L"SculptToolOctree_UpdateDecompDestroy","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar4 = *(FName *)FVar17;
  bVar11 = false;
  bVar10 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar13 = false;
  bVar12 = false;
  if ((FVar4.ComparisonIndex.Value.Value == 0) && (FVar4.Number == 0)) {
LAB_14ca6e258:
    bVar11 = bVar13;
    bVar10 = bVar12;
    bVar12 = false;
    local_70 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_78.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                   ,0xad);
        bVar11 = true;
        bVar10 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca6e258;
    local_70 = FVar4;
    FThreadStats::AddMessage(FVar4,CycleScopeStart);
    bVar12 = true;
  }
  iVar3 = *(int *)((longlong)this + 0x10);
  puVar21 = *(uint **)((longlong)this + 8);
  local_80 = puVar21 + iVar3;
  puVar20 = local_80;
LAB_14ca6e285:
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    FVar4 = local_70;
    if (puVar21 == puVar20) {
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar12) && (FVar4 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_48.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
          local_48.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_68);
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
          local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
          local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
          local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_48);
          piVar1 = &this_00->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_00,false,false);
            return;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      return;
    }
    lVar5 = *(longlong *)this;
    uVar15 = *puVar21;
    this_02 = (TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(lVar5 + 0x4e8);
    if (*(int *)(lVar5 + 0x4f0) == *(int *)(lVar5 + 0x51c)) break;
    lVar6 = *(longlong *)(lVar5 + 0x528);
    lVar18 = lVar5 + 0x520;
    if (lVar6 != 0) {
      lVar18 = lVar6;
    }
    lVar2 = (ulonglong)(*(int *)(lVar5 + 0x530) - 1U & uVar15) * 4;
    iVar14 = *(int *)(lVar2 + lVar18);
    puVar20 = local_80;
    if (iVar14 == -1) break;
    pFVar7 = (this_02->Data).AllocatorInstance.Data;
    do {
      if (*(uint *)(pFVar7 + (longlong)iVar14 * 0x18) == uVar15) {
        lVar18 = lVar5 + 0x520;
        if (lVar6 != 0) {
          lVar18 = lVar6;
        }
        uVar19 = *(uint *)(lVar18 + lVar2);
        goto joined_r0x00014ca6e331;
      }
      iVar14 = *(int *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10);
    } while (iVar14 != -1);
    puVar21 = puVar21 + 1;
  }
  goto LAB_14ca6e4b1;
joined_r0x00014ca6e331:
  if (uVar19 == 0xffffffff) goto LAB_14ca6e34d;
  if (*(uint *)(pFVar7 + (longlong)(int)uVar19 * 0x18) == uVar15) {
    if (uVar19 == 0xffffffff) goto LAB_14ca6e352;
    goto LAB_14ca6e378;
  }
  uVar19 = *(uint *)(pFVar7 + (longlong)(int)uVar19 * 0x18 + 0x10);
  goto joined_r0x00014ca6e331;
LAB_14ca6e34d:
  uVar19 = 0xffffffff;
LAB_14ca6e352:
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("PairId.IsValidId()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x556,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14ca6e378:
  lVar6 = (longlong)(int)uVar19 * 0x18;
  pFVar8 = *(FMeshRenderBufferSet **)((this_02->Data).AllocatorInstance.Data + lVar6 + 8);
  if (((int)uVar19 < 0) || (*(int *)(lVar5 + 0x510) <= (int)uVar19)) {
LAB_14ca6e3ef:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Elements.IsValidIndex(ElementIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    if ((*(int *)(lVar5 + 0x510) <= (int)uVar19) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar18 = lVar5 + 0x4f8;
    if (*(longlong *)(lVar5 + 0x508) != 0) {
      lVar18 = *(longlong *)(lVar5 + 0x508);
    }
    uVar15 = uVar19;
    if ((int)uVar19 < 0) {
      uVar15 = uVar19 + 0x1f;
    }
    if ((*(uint *)(lVar18 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar19 & 0x1f) & 1) == 0)
    goto LAB_14ca6e3ef;
  }
  pFVar7 = (this_02->Data).AllocatorInstance.Data;
  lVar18 = lVar5 + 0x520;
  if (*(longlong *)(lVar5 + 0x528) != 0) {
    lVar18 = *(longlong *)(lVar5 + 0x528);
  }
  pFVar22 = (FScriptContainerElement *)(lVar18 + (longlong)*(int *)(pFVar7 + lVar6 + 0x14) * 4);
  while( true ) {
    uVar15 = *(uint *)pFVar22;
    if ((uVar15 == 0xffffffff) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar15 == uVar19) break;
    pFVar22 = (this_02->Data).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18 + 0x10;
  }
  *(uint *)pFVar22 = *(uint *)(pFVar7 + lVar6 + 0x10);
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this_02,uVar19,1);
  FBaseDynamicMeshSceneProxy::ReleaseRenderBufferSet(*(FBaseDynamicMeshSceneProxy **)this,pFVar8);
  puVar20 = local_80;
LAB_14ca6e4b1:
  puVar21 = puVar21 + 1;
  goto LAB_14ca6e285;
}

// operator() @ 14ca705d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FMeshRenderBufferSet *pFVar7;
  UMaterialInterface *pUVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  undefined1 auStackY_128 [32];
  undefined4 uStack_bc;
  code *local_b0 [3];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  plVar2 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_1 * 4);
  pTVar6 = UE::Geometry::FArrayIndexSetsDecomposition::GetIndexSetArray
                     (*(FArrayIndexSetsDecomposition **)((longlong)this + 8),iVar1);
  pFVar7 = FBaseDynamicMeshSceneProxy::AllocateNewRenderBufferSet
                     (*(FBaseDynamicMeshSceneProxy **)((longlong)this + 0x10));
  pUVar8 = FBaseDynamicMeshSceneProxy::GetMaterial
                     (*(FBaseDynamicMeshSceneProxy **)((longlong)this + 0x10),0);
  pFVar7->Material = pUVar8;
  local_b0[1] = *(code **)((longlong)this + 0x38);
  local_b0[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                ::Call;
  FBaseDynamicMeshSceneProxy::
  InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>_>
            (*(FBaseDynamicMeshSceneProxy **)((longlong)this + 0x10),pFVar7,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x18),pTVar6->ArrayNum,pTVar6,
             (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
             **(undefined8 **)((longlong)this + 0x20),
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 0x28),
             (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)
             **(undefined8 **)((longlong)this + 0x30),
             (TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
              *)local_b0,false,false);
  pcVar3 = *(code **)((longlong)this + 0x10);
  local_98[0] = (code *)0x0;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1___R<lambda_2>__5__UpdateFromDecomposition_FOctreeDynamicMeshSceneProxy__QEAAXAEBVFArrayIndexSetsDecomposition_Geometry_UE__AEBV__TArray_HV__TSizedDefaultAllocator__0CA______Z_QEBA_H_Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_70[1] = pcVar3;
  local_70[2] = (code *)CONCAT44(uStack_bc,iVar1);
  local_70[3] = (code *)pFVar7;
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>::operator()'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<__FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition_::__l6::<lambda_2>::operator()_::__l2::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<``FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>::operator()'::__l2::TSTR_FOctreeDynamicMeshSceneProxyUpdateAddOne213>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar9);
    uVar11 = (ulonglong)local_38;
    if (2 < uVar11) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar10 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar10 = local_40;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar10 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar10 = local_70;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  return;
}

// CanBeOccluded @ 14ca7d670

bool __thiscall FOctreeDynamicMeshSceneProxy::CanBeOccluded(FOctreeDynamicMeshSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetActiveRenderBufferSets @ 14ca8d940

void __thiscall
FOctreeDynamicMeshSceneProxy::GetActiveRenderBufferSets
          (FOctreeDynamicMeshSceneProxy *this,
          TArray<FMeshRenderBufferSet_*,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<int,FMeshRenderBufferSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<int,FMeshRenderBufferSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined8 uStack_a0;
  TMap<int,FMeshRenderBufferSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<int,FMeshRenderBufferSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMeshRenderBufferSet_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  puVar1 = &(this->RenderBufferSets).field_0x10;
  iVar9 = *(int *)&(this->RenderBufferSets).field_0x28;
  pTVar2 = &this->RenderBufferSets;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->RenderBufferSets).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14ca8d9ee;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_7c = (int)lVar10 + -1 + local_78;
    if (iVar9 < iStack_7c) {
      iStack_7c = iVar9;
    }
  }
LAB_14ca8d9ee:
  iStack_70 = *(int *)&(this->RenderBufferSets).field_0x8 -
              *(int *)&(this->RenderBufferSets).field_0x34;
  uVar11 = *(uint *)&(this->RenderBufferSets).field_0x28;
  uStack_80 = 0xffffffff;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->RenderBufferSets).field_0x28;
  if (uVar11 != uVar4) {
    puVar13 = *(undefined1 **)&(this->RenderBufferSets).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ca8daf0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14ca8daf0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FMeshRenderBufferSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    uStack_a0 = *(undefined8 *)
                 (*(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0x18 + 8);
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&uStack_a0) &&
        ((FScriptContainerElement *)&uStack_a0 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = uStack_a0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetLightRelevance @ 14ca900f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FOctreeDynamicMeshSceneProxy::GetLightRelevance
          (FOctreeDynamicMeshSceneProxy *this,FLightSceneProxy *param_1,bool *param_2,bool *param_3,
          bool *param_4,bool *param_5)

{
  *param_2 = true;
  *param_3 = true;
  *param_4 = false;
  *param_5 = false;
  return;
}

// GetMemoryFootprint @ 14ca907e0

uint __thiscall FOctreeDynamicMeshSceneProxy::GetMemoryFootprint(FOctreeDynamicMeshSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x540;
}

// GetTypeHash @ 14ca93fe0

ulong64 __thiscall FOctreeDynamicMeshSceneProxy::GetTypeHash(FOctreeDynamicMeshSceneProxy *this)

{
  return 0x1553480f8;
}

// GetViewRelevance @ 14ca94780

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
FOctreeDynamicMeshSceneProxy::GetViewRelevance
          (FOctreeDynamicMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3 | 2;
  uVar6 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6;
  uVar5 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar5 = 0x2000;
  }
  uVar5 = uVar5 | uVar6 & 0xffffdfff;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^ uVar5) & 0x4000 ^ uVar5;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar5 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar5 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar5 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar5;
  return __return_storage_ptr__;
}

// InitializeFromDecomposition @ 14ca95f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition
          (FOctreeDynamicMeshSceneProxy *this,FArrayIndexSetsDecomposition *param_1)

{
  longlong lVar1;
  uint uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FMeshRenderBufferSet *pFVar10;
  UMaterialInterface *pUVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  code **ppcVar15;
  undefined ***pppuVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_1c8 [32];
  undefined1 local_168 [8];
  undefined8 local_160;
  TArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*,TSizedDefaultAllocator<32>_>
  local_158;
  uint local_148;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_140;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_138;
  FDynamicMesh3 *local_130;
  FOctreeDynamicMeshSceneProxy *local_128;
  FScriptContainerElement *local_120;
  FOctreeDynamicMeshSceneProxy *local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  FMeshRenderBufferSet *local_108;
  code *local_100;
  code **local_f8;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_128 = this;
  if ((*(int *)&(this->RenderBufferSets).field_0x8 != *(int *)&(this->RenderBufferSets).field_0x34)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("RenderBufferSets.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                            ,0x76,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_130 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this->ParentComponent + 0xb38))();
  uVar13 = 0;
  local_160 = 0;
  local_140 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  pFVar3 = (local_130->AttributeSet).Ptr;
  local_138 = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    if (0 < (pFVar3->UVLayers).Array.ArrayNum) {
      uVar13 = *(undefined8 *)(pFVar3->UVLayers).Array.AllocatorInstance.Data;
    }
    if ((pFVar3->NormalLayers).Array.ArrayNum < 1) {
      local_140 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      local_140 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   (pFVar3->NormalLayers).Array.AllocatorInstance.Data;
    }
    local_138 = (pFVar3->ColorLayer).Ptr;
    local_160 = uVar13;
  }
  local_148 = (param_1->AllSetIDs).ArrayNum;
  uVar14 = (ulonglong)(int)local_148;
  pFVar20 = (param_1->AllSetIDs).AllocatorInstance.Data;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `FOctreeDynamicMeshSceneProxy::MakeTangentsFunc'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                ::Call;
  local_120 = pFVar20 + uVar14 * 4;
  local_50 = (undefined ***)0x0;
  do {
    pFVar6 = local_120;
    plVar19 = (longlong *)0x0;
    if ((param_1->AllSetIDs).ArrayNum != (int)uVar14) {
      local_168[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_168);
    }
    if (pFVar20 == pFVar6) {
      if (local_78[0] != (code *)0x0) {
        pppuVar16 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar16 = local_50;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      return;
    }
    uVar2 = *(uint *)pFVar20;
    plVar18 = plVar19;
    if (*(int *)&(param_1->SetIdentifierMap).field_0x8 !=
        *(int *)&(param_1->SetIdentifierMap).field_0x34) {
      puVar4 = *(undefined1 **)&(param_1->SetIdentifierMap).field_0x40;
      puVar17 = &(param_1->SetIdentifierMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar17 = puVar4;
      }
      iVar8 = *(int *)(puVar17 +
                      (ulonglong)(*(int *)&(param_1->SetIdentifierMap).field_0x48 - 1U & uVar2) * 4)
      ;
      if (iVar8 != -1) {
        do {
          lVar1 = *(longlong *)&param_1->SetIdentifierMap + (longlong)iVar8 * 0x18;
          if (*(uint *)(*(longlong *)&param_1->SetIdentifierMap + (longlong)iVar8 * 0x18) == uVar2)
          {
            plVar18 = (longlong *)(lVar1 + 8);
            if (lVar1 == 0) {
              plVar18 = plVar19;
            }
            if (plVar18 != (longlong *)0x0) goto LAB_14ca96135;
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x10);
        } while (iVar8 != -1);
      }
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Found != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexSetDecompositions.h"
                       ,0x4d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14ca96135:
    lVar1 = *plVar18;
    pFVar10 = FBaseDynamicMeshSceneProxy::AllocateNewRenderBufferSet
                        ((FBaseDynamicMeshSceneProxy *)this);
    pUVar11 = FBaseDynamicMeshSceneProxy::GetMaterial((FBaseDynamicMeshSceneProxy *)this,0);
    pFVar10->Material = pUVar11;
    iVar8 = *(int *)(lVar1 + 0x10);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_158.AllocatorInstance,&local_158.ArrayMax);
    local_158.ArrayNum = iVar9 + 1;
    *(undefined8 *)(local_158.AllocatorInstance.Data + (longlong)iVar9 * 8) = local_160;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<TUniqueFunction<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>,void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                ::Call;
    local_f8 = local_78;
    FMeshRenderBufferSetConversionUtil::
    InitializeBuffersFromOverlays<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              ((FMeshRenderBufferSetConversionUtil *)&this->_padding_,pFVar10,local_130,iVar8,
               (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar1 + 8),&local_158,local_140,local_138
               ,(TFunctionRef<void___cdecl(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&)>
                 *)&local_100,false,true);
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    this = local_128;
    local_118 = local_128;
    local_e8[0] = (code *)0x0;
    local_c0 = (code **)0x0;
    uStack_110 = uVar2;
    local_108 = pFVar10;
    local_c0 = FMemory::Malloc(0x20,8);
    *local_c0 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__BA___InitializeFromDecomposition_FOctreeDynamicMeshSceneProxy__QEAAXAEBVFArrayIndexSetsDecomposition_Geometry_UE___Z__00_00_Function_Private_Core_UE__6B_
    ;
    local_c0[1] = (code *)local_118;
    local_c0[2] = (code *)CONCAT44(uStack_10c,uStack_110);
    local_c0[3] = (code *)local_108;
    if (local_c0 + 1 != (code **)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition_::__l16::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_b8._0_8_ = local_e8[0];
      local_90 = local_c0;
      local_c0 = (code **)0x0;
      local_b8._16_8_ = local_d8[0];
      local_b8._24_8_ = local_d8[1];
      local_b8._32_8_ = local_d8[2];
      local_e8[0] = (code *)0x0;
      local_88 = 2;
      pFVar12 = (FRenderCommandTag *)
                TRenderCommandTag<`FOctreeDynamicMeshSceneProxy::InitializeFromDecomposition'::__l16::TSTR_FOctreeDynamicMeshSceneProxyInitializeFromDecomposition150>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_b8,pFVar12);
      uVar14 = (ulonglong)local_88;
      if ((2 < uVar14) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          ppcVar15 = (code **)(local_b8 + 0x10);
          if (local_90 != (code **)0x0) {
            ppcVar15 = local_90;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_b8);
      }
    }
    if (local_e8[0] != (code *)0x0) {
      ppcVar15 = local_e8 + 2;
      if (local_c0 != (code **)0x0) {
        ppcVar15 = local_c0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    uVar14 = (ulonglong)local_148;
    pFVar20 = pFVar20 + 4;
  } while( true );
}

// UpdateFromDecomposition @ 14caa7cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition
          (FOctreeDynamicMeshSceneProxy *this,FArrayIndexSetsDecomposition *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType _Src_00;
  FOctreeDynamicMeshSceneProxy *pFVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateFromDecomp> FVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompCreate> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  uint uVar17;
  code **ppcVar18;
  longlong lVar19;
  undefined ***pppuVar20;
  FColor_u_0 FVar21;
  FNameEntryId FVar22;
  longlong lVar23;
  ulonglong uVar24;
  FName FVar25;
  FName FVar26;
  undefined1 auStackY_278 [32];
  <lambda_1> local_218;
  FColor_u_0 local_210;
  uint uStack_20c;
  FName local_208;
  FColor_u_0 local_200 [2];
  FOctreeDynamicMeshSceneProxy *local_1f8;
  ForAnyElementType local_1f0;
  int local_1e8;
  int local_1e4;
  FColor_u_0 local_1e0;
  uint local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  FName local_1c0;
  FName local_1b0;
  FOctreeDynamicMeshSceneProxy *local_1a0;
  FArrayIndexSetsDecomposition *local_198;
  longlong local_190;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  FStatMessage local_178;
  FStatMessage local_168;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  TArray<int,TSizedDefaultAllocator<32>_> **local_140;
  TArray<int,TSizedDefaultAllocator<32>_> *local_138;
  FArrayIndexSetsDecomposition *local_130;
  FOctreeDynamicMeshSceneProxy *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 *local_108;
  code **local_100;
  FName local_f8;
  FName local_f0;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  FVar12 = StatPtr_STAT_SculptToolOctree_UpdateFromDecomp;
  local_1a0 = this;
  local_198 = param_1;
  if (StatPtr_STAT_SculptToolOctree_UpdateFromDecomp ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateFromDecomp>)0x0) {
    pFVar11 = ::FName::FName(&local_f8,"STAT_SculptToolOctree_UpdateFromDecomp");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateFromDecomp>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SculptToolOctree_UpdateFromDecomp
                        ,*pFVar11,L"SculptToolOctree_UpdateFromDecomp","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar26 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_1c0.ComparisonIndex.Value = 0;
  local_1c0.Number = 0;
  FVar21.Bits = (uint)FVar26.ComparisonIndex.Value;
  uVar17 = FVar26.Number;
  if ((FVar21.Bits == 0) && (uVar17 == 0)) {
LAB_14caa7e2d:
    bVar6 = false;
    FVar26 = local_1c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_200[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_200[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.Bits = FVar21.Bits;
        local_1dc = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1e0._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                   ,0xa7);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14caa7e2d;
    local_210.Bits = FVar21.Bits;
    uStack_20c = uVar17;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar6 = true;
  }
  local_1e8 = param_2->ArrayNum;
  lVar23 = (longlong)local_1e8;
  _Src = (param_2->AllocatorInstance).Data;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1f8 = this;
  if (local_1e8 == 0) {
    local_1e4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_1e8,0,&local_1f0,local_1e8,&local_1e4);
    memcpy(local_1f0.Data,_Src,lVar23 << 2);
  }
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x20,8);
  _Src_00.Data = local_1f0.Data;
  *local_c0 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateFromDecomposition_FOctreeDynamicMeshSceneProxy__QEAAXAEBVFArrayIndexSetsDecomposition_Geometry_UE__AEBV__TArray_HV__TSizedDefaultAllocator__0CA______Z__00_00_Function_Private_Core_UE__6B_
  ;
  ppcVar18 = local_c0 + 1;
  pFVar1 = (ForAnyElementType *)(local_c0 + 2);
  *ppcVar18 = (code *)local_1f8;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  lVar23 = (longlong)local_1e8;
  *(int *)(local_c0 + 3) = local_1e8;
  if (local_1e8 == 0) {
    *(int *)((longlong)local_c0 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_1e8,0,pFVar1,local_1e8,(int *)((longlong)local_c0 + 0x1c));
    memcpy(pFVar1->Data,_Src_00.Data,lVar23 << 2);
  }
  lVar23 = 0;
  if (ppcVar18 != (code **)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition_::__l2::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_c0 = (code **)0x0;
    local_b8._16_8_ = local_d8[0];
    local_b8._24_8_ = local_d8[1];
    local_b8._32_8_ = local_d8[2];
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l2::TSTR_FOctreeDynamicMeshSceneProxyUpdatePreClean170>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar13);
    uVar24 = (ulonglong)local_88;
    if ((2 < uVar24) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        ppcVar18 = (code **)(local_b8 + 0x10);
        if (local_90 != (code **)0x0) {
          ppcVar18 = local_90;
        }
        (**(code **)(*ppcVar18 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar24])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    ppcVar18 = local_e8 + 2;
    if (local_c0 != (code **)0x0) {
      ppcVar18 = local_c0;
    }
    (**(code **)(*ppcVar18 + 0x10))();
  }
  if (local_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  pFVar9 = local_1a0;
  local_190 = (**(code **)(*(longlong *)local_1a0->ParentComponent + 0xb38))();
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  lVar19 = *(longlong *)(local_190 + 0x208);
  if (lVar19 != 0) {
    local_1d8 = lVar23;
    if (0 < *(int *)(lVar19 + 0x28)) {
      local_1d8 = **(longlong **)(lVar19 + 0x20);
    }
    lVar19 = lVar23;
    if (*(longlong *)(local_190 + 0x208) != 0) {
      lVar19 = *(longlong *)(local_190 + 0x208);
    }
    local_1d0 = lVar23;
    if (0 < *(int *)(lVar19 + 0x38)) {
      local_1d0 = **(longlong **)(lVar19 + 0x30);
    }
    if (*(longlong *)(local_190 + 0x208) != 0) {
      lVar23 = *(longlong *)(local_190 + 0x208);
    }
    local_1c8 = *(undefined8 *)(lVar23 + 0x40);
  }
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_60 = `FOctreeDynamicMeshSceneProxy::MakeTangentsFunc'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),void,int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&>
                ::Call;
  local_50 = (undefined ***)0x0;
  FVar14 = StatPtr_STAT_SculptToolOctree_UpdateDecompCreate;
  if (StatPtr_STAT_SculptToolOctree_UpdateDecompCreate ==
      (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompCreate>)0x0) {
    pFVar11 = ::FName::FName(&local_f0,"STAT_SculptToolOctree_UpdateDecompCreate");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_SculptToolOctree_UpdateDecompCreate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SculptToolOctree_UpdateDecompCreate,*pFVar11,
                        L"SculptToolOctree_UpdateDecompCreate","STATGROUP_SculptToolOctree",
                        "STATCAT_Advanced",L"SculptToolOctree",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar25 = *(FName *)FVar14;
  bVar10 = false;
  bVar7 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FVar22 = FVar25.ComparisonIndex.Value;
  uVar17 = FVar25.Number;
  if ((FVar22.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_210.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_210._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar22.Value;
        local_208.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Components\\OctreeDynamicMeshSceneProxy.h"
                   ,199);
        bVar10 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_208.ComparisonIndex.Value = FVar22.Value;
      local_208.Number = uVar17;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar4 = true;
      goto LAB_14caa8249;
    }
  }
  bVar4 = false;
  FVar25 = local_1b0;
LAB_14caa8249:
  local_130 = local_198;
  local_120 = &local_190;
  local_158.DataPtr = (void **)0x0;
  local_118 = &local_1d8;
  local_110 = &local_1d0;
  local_108 = &local_1c8;
  local_100 = local_78;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`FOctreeDynamicMeshSceneProxy::UpdateFromDecomposition'::__l6::<lambda_2>,void,int>
              ::Call;
  local_140 = &local_138;
  local_158.ArrayNum = 0;
  local_128 = pFVar9;
  local_138 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_2->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_148,
             local_218,None,&local_158);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_178.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_178.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_188);
      local_178.StatData.Pad[4] = '\0';
      local_178.StatData.Pad[5] = '\0';
      local_178.StatData.Pad[6] = '\0';
      local_178.StatData.Pad[7] = '\0';
      local_178.StatData.Pad[0] = local_188.s.LowPart._0_1_;
      local_178.StatData.Pad[1] = local_188.s.LowPart._1_1_;
      local_178.StatData.Pad[2] = local_188.s.LowPart._2_1_;
      local_178.StatData.Pad[3] = local_188.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_178);
      piVar2 = &pFVar15->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar20 = local_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_168.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_180);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_180.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_180.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_180.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_180.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_168);
      piVar2 = &pFVar15->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return;
}

// UpdatedReferencedMaterials @ 14caa9070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOctreeDynamicMeshSceneProxy::UpdatedReferencedMaterials(FOctreeDynamicMeshSceneProxy *this)

{
  UOctreeDynamicMeshComponent *pUVar1;
  code *pcVar2;
  EShaderPlatform EVar3;
  FMaterialRelevance_u_0 *pFVar4;
  undefined1 local_res8 [8];
  
  FBaseDynamicMeshSceneProxy::UpdatedReferencedMaterials((FBaseDynamicMeshSceneProxy *)this);
  pUVar1 = this->ParentComponent;
  pcVar2 = *(code **)(*(longlong *)pUVar1 + 0xaa8);
  EVar3 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  pFVar4 = (FMaterialRelevance_u_0 *)(*pcVar2)(pUVar1,local_res8,EVar3);
  (this->MaterialRelevance).field0_0x0 = *pFVar4;
  return;
}

