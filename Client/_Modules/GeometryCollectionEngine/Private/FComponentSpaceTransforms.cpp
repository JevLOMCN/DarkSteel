// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// RequestAllTransforms @ 146389f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
UGeometryCollectionComponent::FComponentSpaceTransforms::RequestAllTransforms
          (FComponentSpaceTransforms *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  UGeometryCollectionComponent *pUVar3;
  UGeometryCollection *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGeometryCollection *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_GCCUGlobalMatrices> FVar30;
  FGeometryDynamicCollection *pFVar31;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar32;
  TManagedArray<int> *pTVar33;
  FName FVar34;
  longlong lVar35;
  undefined1 auStackY_1a8 [32];
  uint local_140;
  FColor_u_0 local_138 [2];
  FName local_130;
  longlong local_128;
  FName local_120;
  FComponentSpaceTransforms *local_118;
  undefined **local_110;
  undefined1 local_108;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  FName local_f0;
  UGeometryCollection *local_e0;
  FName local_d8 [2];
  __m128 local_c8;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  __m128 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FVar30 = StatPtr_STAT_GCCUGlobalMatrices;
  local_118 = this;
  if (StatPtr_STAT_GCCUGlobalMatrices == (FThreadSafeStaticStat<FStat_STAT_GCCUGlobalMatrices>)0x0)
  {
    pFVar29 = ::FName::FName(local_d8,"STAT_GCCUGlobalMatrices");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_GCCUGlobalMatrices>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GCCUGlobalMatrices,*pFVar29,
                        L"Geometry Collection Component CalculateGlobalMatrices","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar30;
  bVar9 = false;
  bVar10 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar23 = false;
  bVar24 = false;
  if ((FVar34.ComparisonIndex.Value.Value == 0) && (FVar34.Number == 0)) {
LAB_14638a09f:
    bVar10 = bVar24;
    bVar9 = bVar23;
    bVar23 = false;
    local_120 = local_f0;
    FVar34 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar23 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_130.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionComponent.cpp"
                   ,0x17b9);
        bVar9 = true;
        bVar10 = true;
        bVar23 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14638a09f;
    local_120 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar23 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UGeometryCollectionComponent::FComponentSpaceTransforms::RequestAllTransforms'::__l2::
           _dynamic_atexit_destructor_for__EmptyArray__);
    _Init_thread_footer(&::_TSS0);
  }
  pUVar3 = this->Component;
  if ((pUVar3 == (UGeometryCollectionComponent *)0x0) ||
     (pTVar32 = &this->Transforms, (this->Transforms).ArrayNum == 0)) {
    pTVar32 = &::EmptyArray;
  }
  else if (this->bIsDirty != '\0') {
    if ((pUVar3->DynamicCollection).Object == (FGeometryDynamicCollection *)0x0) {
      pUVar4 = (pUVar3->RestCollection).field0_0x0.DebugPtr;
      pTVar5 = (pUVar4->GeometryCollection).SharedReferenceCount.ReferenceController;
      pFVar6 = (pUVar4->GeometryCollection).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar6 == (FGeometryCollection *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar8 = (code *)swi(3);
        pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar32;
      }
      iVar25 = (**(code **)(pFVar6->_padding_ + 0x60))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    else {
      pFVar31 = TSharedPtr<FGeometryDynamicCollection,1>::operator->(&pUVar3->DynamicCollection);
      iVar25 = FTransformDynamicCollection::GetNumTransforms((FTransformDynamicCollection *)pFVar31)
      ;
    }
    pUVar3 = this->Component;
    local_e0 = (pUVar3->RestCollection).field0_0x0.DebugPtr;
    if ((local_e0 == (UGeometryCollection *)0x0) ||
       ((local_e0->BreadthFirstTransformIndices).ArrayNum != iVar25)) {
      pFVar31 = (pUVar3->DynamicCollection).Object;
      if (pFVar31 != (FGeometryDynamicCollection *)0x0) {
        GeometryCollectionAlgo::Private::GlobalMatrices(pFVar31,pTVar32);
        this->bIsRootDirty = '\0';
        this->bIsDirty = '\0';
        goto LAB_14638a60a;
      }
      if ((pUVar3->RestTransforms).ArrayNum < 1) {
        pTVar33 = GetParentArrayRest(pUVar3);
        pUVar4 = (pUVar3->RestCollection).field0_0x0.DebugPtr;
        pTVar5 = (pUVar4->GeometryCollection).SharedReferenceCount.ReferenceController;
        pFVar6 = (pUVar4->GeometryCollection).Object;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar6 == (FGeometryCollection *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar24)) {
          pcVar8 = (code *)swi(3);
          pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar32;
        }
        GeometryCollectionAlgo::
        GlobalMatrices<UE::Math::TTransform<float>,UE::Math::TTransform<float>_>
                  ((TManagedArray<UE::Math::TTransform<float>_> *)&pFVar6->_padding_,pTVar33,pTVar32
                  );
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      }
      else {
        pTVar33 = GetParentArrayRest(pUVar3);
        local_f8 = (pUVar3->RestTransforms).ArrayNum;
        lVar35 = (longlong)local_f8;
        pFVar2 = (pUVar3->RestTransforms).AllocatorInstance.Data;
        local_110 = &___7__TManagedArrayBase_U__TTransform_N_Math_UE____6B_;
        local_108 = 0;
        local_100.Data = (FScriptContainerElement *)0x0;
        if (local_f8 == 0) {
          local_f4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,local_f8,0,&local_100,local_f8,&local_f4);
          memcpy(local_100.Data,pFVar2,lVar35 * 0x60);
        }
        local_110 = &___7__TManagedArray_U__TTransform_N_Math_UE____6B_;
        GeometryCollectionAlgo::
        GlobalMatrices<UE::Math::TTransform<float>,UE::Math::TTransform<double>_>
                  ((TManagedArray<UE::Math::TTransform<double>_> *)&local_110,pTVar33,pTVar32);
        local_110 = &___7__TManagedArrayBase_U__TTransform_N_Math_UE____6B_;
        if (local_100.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data);
          this->bIsRootDirty = '\0';
          this->bIsDirty = '\0';
          goto LAB_14638a60a;
        }
      }
    }
    else {
      iVar25 = (local_e0->BreadthFirstTransformIndices).ArrayNum;
      local_140 = 0;
      if (0 < iVar25) {
        local_128 = 0;
        do {
          pUVar4 = local_e0;
          lVar35 = local_128;
          uVar26 = 0;
          if ((int)local_140 < iVar25) {
            uVar26 = ~local_140 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar8 = (code *)swi(3);
            pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
            ;
            return pTVar32;
          }
          uVar26 = *(uint *)((pUVar4->BreadthFirstTransformIndices).AllocatorInstance.Data + lVar35)
          ;
          lVar35 = (longlong)(int)uVar26;
          pFVar31 = (this->Component->DynamicCollection).Object;
          if (pFVar31 == (FGeometryDynamicCollection *)0x0) {
            pUVar4 = (this->Component->RestCollection).field0_0x0.DebugPtr;
            pTVar5 = (pUVar4->GeometryCollection).SharedReferenceCount.ReferenceController;
            pFVar6 = (pUVar4->GeometryCollection).Object;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar6 == (FGeometryCollection *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar24)) {
              pcVar8 = (code *)swi(3);
              pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar32;
            }
            uVar27 = 0;
            if ((int)uVar26 < (int)pFVar6->_padding_) {
              uVar27 = ~uVar26 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar8 = (code *)swi(3);
              pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar32;
            }
            uVar27 = *(uint *)(pFVar6->_padding_ + lVar35 * 4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
          else {
            uVar27 = FTransformDynamicCollection::GetParent
                               ((FTransformDynamicCollection *)pFVar31,uVar26);
          }
          GetCurrentTransform(this->Component,(TTransform<float> *)&local_98,uVar26);
          iVar25 = (this->Transforms).ArrayNum;
          if (uVar27 == 0xffffffff) {
            uVar11 = local_98.m128_f32[0];
            uVar12 = local_98.m128_f32[1];
            uVar13 = local_98.m128_f32[2];
            uVar14 = local_98.m128_f32[3];
            fVar15 = local_88;
            fVar16 = fStack_84;
            fVar17 = fStack_80;
            fVar18 = fStack_7c;
            fVar19 = local_78;
            fVar20 = fStack_74;
            fVar21 = fStack_70;
            fVar22 = fStack_6c;
            uVar27 = 0;
            if ((int)uVar26 < iVar25) {
              uVar27 = ~uVar26 >> 0x1f;
            }
          }
          else {
            uVar28 = 0;
            if ((int)uVar27 < iVar25) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar8 = (code *)swi(3);
              pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar8)();
              return pTVar32;
            }
            local_c8 = GlobalVectorConstants::Float0001;
            _local_b8 = GlobalVectorConstants::FloatZero;
            _local_a8 = GlobalVectorConstants::Float1110;
            UE::Math::TTransform<float>::Multiply
                      ((TTransform<float> *)&local_c8,(TTransform<float> *)&local_98,
                       (TTransform<float> *)
                       ((pTVar32->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x30));
            uVar11 = local_c8.m128_i32[0];
            uVar12 = local_c8.m128_i32[1];
            uVar13 = local_c8.m128_i32[2];
            uVar14 = local_c8.m128_i32[3];
            fVar15 = (float)local_b8._0_4_;
            fVar16 = (float)local_b8._4_4_;
            fVar17 = fStack_b0;
            fVar18 = fStack_ac;
            fVar19 = (float)local_a8._0_4_;
            fVar20 = (float)local_a8._4_4_;
            fVar21 = fStack_a0;
            fVar22 = fStack_9c;
            uVar27 = 0;
            if ((int)uVar26 < (this->Transforms).ArrayNum) {
              uVar27 = ~uVar26 >> 0x1f;
            }
          }
          if ((uVar27 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar8 = (code *)swi(3);
            pTVar32 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
            ;
            return pTVar32;
          }
          pFVar7 = (pTVar32->AllocatorInstance).Data;
          local_140 = local_140 + 1;
          local_128 = local_128 + 4;
          pFVar2 = pFVar7 + lVar35 * 0x30;
          *(undefined4 *)pFVar2 = uVar11;
          *(undefined4 *)(pFVar2 + 4) = uVar12;
          *(undefined4 *)(pFVar2 + 8) = uVar13;
          *(undefined4 *)(pFVar2 + 0xc) = uVar14;
          pFVar2 = pFVar7 + lVar35 * 0x30 + 0x10;
          *(float *)pFVar2 = fVar15;
          *(float *)(pFVar2 + 4) = fVar16;
          *(float *)(pFVar2 + 8) = fVar17;
          *(float *)(pFVar2 + 0xc) = fVar18;
          pFVar7 = pFVar7 + lVar35 * 0x30 + 0x20;
          *(float *)pFVar7 = fVar19;
          *(float *)(pFVar7 + 4) = fVar20;
          *(float *)(pFVar7 + 8) = fVar21;
          *(float *)(pFVar7 + 0xc) = fVar22;
          iVar25 = (local_e0->BreadthFirstTransformIndices).ArrayNum;
        } while ((int)local_140 < iVar25);
        local_118->bIsRootDirty = '\0';
        local_118->bIsDirty = '\0';
        FVar34 = local_120;
        goto LAB_14638a60a;
      }
    }
    this->bIsRootDirty = '\0';
    this->bIsDirty = '\0';
  }
LAB_14638a60a:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar23) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return pTVar32;
}

// RequestRootTransform @ 14638a6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTransform<float> * __thiscall
UGeometryCollectionComponent::FComponentSpaceTransforms::RequestRootTransform
          (FComponentSpaceTransforms *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  bool bVar14;
  uint uVar15;
  TTransform<float> *pTVar16;
  longlong lVar17;
  TTransform<float> local_38;
  
  if (this->Component == (UGeometryCollectionComponent *)0x0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7287575455585003611>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionComponent.cpp"
                        ,0x17a5,"false");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TTransform<float> *)(*pcVar5)();
      return pTVar16;
    }
  }
  else {
    iVar2 = this->RootIndex;
    if ((-1 < iVar2) && (iVar2 < (this->Transforms).ArrayNum)) {
      if (this->bIsRootDirty != 0) {
        pTVar16 = GetCurrentTransform(this->Component,&local_38,iVar2);
        uVar3 = this->RootIndex;
        lVar17 = (longlong)(int)uVar3;
        fVar6 = (pTVar16->Rotation).m128_f32[0];
        fVar7 = (pTVar16->Rotation).m128_f32[1];
        fVar8 = (pTVar16->Rotation).m128_f32[2];
        fVar9 = (pTVar16->Rotation).m128_f32[3];
        uVar10 = (pTVar16->Translation).m128_u64[0];
        uVar11 = (pTVar16->Translation).m128_u64[1];
        uVar12 = (pTVar16->Scale3D).m128_u64[0];
        uVar13 = (pTVar16->Scale3D).m128_u64[1];
        uVar15 = 0;
        if ((int)uVar3 < (this->Transforms).ArrayNum) {
          uVar15 = ~uVar3 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TTransform<float> *)(*pcVar5)();
          return pTVar16;
        }
        pFVar4 = (this->Transforms).AllocatorInstance.Data;
        pFVar1 = pFVar4 + lVar17 * 0x30;
        *(float *)pFVar1 = fVar6;
        *(float *)(pFVar1 + 4) = fVar7;
        *(float *)(pFVar1 + 8) = fVar8;
        *(float *)(pFVar1 + 0xc) = fVar9;
        *(ulong64 *)(pFVar4 + lVar17 * 0x30 + 0x10) = uVar10;
        *(ulong64 *)(pFVar4 + lVar17 * 0x30 + 0x10 + 8) = uVar11;
        *(ulong64 *)(pFVar4 + lVar17 * 0x30 + 0x20) = uVar12;
        *(ulong64 *)(pFVar4 + lVar17 * 0x30 + 0x20 + 8) = uVar13;
        this->bIsRootDirty = '\0';
      }
      uVar3 = this->RootIndex;
      uVar15 = 0;
      if ((int)uVar3 < (this->Transforms).ArrayNum) {
        uVar15 = ~uVar3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TTransform<float> *)(*pcVar5)();
        return pTVar16;
      }
      return (TTransform<float> *)
             ((this->Transforms).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30);
    }
  }
  return &UE::Math::TTransform<float>::Identity;
}

