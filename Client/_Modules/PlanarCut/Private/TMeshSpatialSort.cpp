// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 3

// operator() @ 14c9aacf0

bool __thiscall
`UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::Compute'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  dVar2 = *(double *)(*plVar3 + (longlong)param_1 * 0x10);
  uVar7 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pdVar1 = (double *)(*plVar3 + (longlong)param_2 * 0x10);
  return *pdVar1 <= dVar2 && dVar2 != *pdVar1;
}

// Compute @ 14c9ba5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::Compute
          (TMeshSpatialSort<UE::Geometry::FDynamicMesh3> *this)

{
  int *piVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double dVar4;
  undefined8 uVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  ForAnyElementType FVar11;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulong64 uVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  TArray<UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::FMeshNesting,TSizedDefaultAllocator<32>_>
  *pTVar28;
  longlong lVar29;
  uint uVar30;
  TMeshSpatialSort<UE::Geometry::FDynamicMesh3> *pTVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auStackY_318 [32];
  FIdentityFunctor local_2c8 [4];
  uint local_2c4;
  undefined8 local_2c0;
  uint local_2b8 [2];
  double local_2b0;
  double local_2a8;
  ForAnyElementType local_2a0;
  int local_298 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  TArray<int,TSizedDefaultAllocator<32>_> local_280;
  TArray<UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::FMeshNesting,TSizedDefaultAllocator<32>_>
  *local_270;
  TMeshSpatialSort<UE::Geometry::FDynamicMesh3> *local_268;
  TArray<bool,TSizedDefaultAllocator<32>_> local_260;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_250;
  int local_218 [2];
  ForAnyElementType *local_210 [3];
  TVector<double>_u_0 local_1f8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  TVector<double>_u_0 local_1b8;
  undefined1 local_198 [48];
  undefined **local_168;
  code *local_160;
  undefined ***local_150;
  double local_148;
  TDynamicVector<int,512> local_140;
  TDynamicVector<UE::Math::TVector<double>,512> local_128;
  TDynamicVector<UE::Math::TVector<double>,512> local_110;
  TDynamicVector<int,512> local_f8;
  longlong local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_268 = this;
  if ((this->MeshBounds).ArrayNum != (this->InputMeshes).ArrayNum) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5409212860624535665>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshSpatialSort.h"
                        ,0x71,"MeshBounds.Num() == InputMeshes.Num()");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    InitBounds(this);
  }
  uVar33 = SUB84(__real_ffefffffffffffff,0);
  uVar36 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  uVar34 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  iVar15 = (this->MeshBounds).ArrayNum;
  pFVar19 = (this->MeshBounds).AllocatorInstance.Data;
  local_2a8 = __real_ffefffffffffffff;
  pFVar25 = pFVar19 + (longlong)iVar15 * 0x30;
  dVar39 = __real_ffefffffffffffff;
  uVar35 = uVar33;
  uVar38 = uVar36;
  uVar37 = SUB84(__real_7fefffffffffffff,0);
  uVar45 = SUB84(__real_7fefffffffffffff,0);
  uVar46 = uVar34;
  dVar40 = __real_7fefffffffffffff;
  while( true ) {
    local_2b0 = dVar39;
    if ((this->MeshBounds).ArrayNum != iVar15) {
      local_2c8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UE::Geometry::TAxisAlignedBox3<double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2c8);
    }
    if (pFVar19 == pFVar25) break;
    dVar39 = *(double *)(pFVar19 + 8);
    dVar4 = *(double *)(pFVar19 + 0x10);
    uVar41 = SUB84(dVar39,0);
    uVar42 = (int)((ulonglong)dVar39 >> 0x20);
    if ((double)CONCAT44(uVar34,uVar37) <= dVar39) {
      uVar41 = uVar37;
      uVar42 = uVar34;
    }
    dVar39 = *(double *)(pFVar19 + 0x20);
    uVar33 = SUB84(dVar39,0);
    uVar36 = (undefined4)((ulonglong)dVar39 >> 0x20);
    uVar43 = SUB84(dVar4,0);
    uVar44 = (int)((ulonglong)dVar4 >> 0x20);
    if ((double)CONCAT44(uVar46,uVar45) <= dVar4) {
      uVar43 = uVar45;
      uVar44 = uVar46;
    }
    if (dVar39 <= local_2a8) {
      uVar33 = SUB84(local_2a8,0);
      uVar36 = (undefined4)((ulonglong)local_2a8 >> 0x20);
    }
    dVar4 = *(double *)(pFVar19 + 0x18);
    dVar39 = *(double *)(pFVar19 + 0x28);
    if (*(double *)(pFVar19 + 0x28) <= local_2b0) {
      dVar39 = local_2b0;
    }
    if (*(double *)pFVar19 <= dVar40) {
      dVar40 = *(double *)pFVar19;
    }
    uVar34 = SUB84(dVar4,0);
    uVar37 = (int)((ulonglong)dVar4 >> 0x20);
    if (dVar4 <= (double)CONCAT44(uVar38,uVar35)) {
      uVar34 = uVar35;
      uVar37 = uVar38;
    }
    local_2a8 = (double)CONCAT44(uVar36,uVar33);
    pFVar19 = pFVar19 + 0x30;
    uVar35 = uVar34;
    uVar38 = uVar37;
    uVar34 = uVar42;
    uVar37 = uVar41;
    uVar45 = uVar43;
    uVar46 = uVar44;
  }
  DestructItems<UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::FMeshNesting,int>
            ((FMeshNesting *)(this->Nests).AllocatorInstance.Data,(this->Nests).ArrayNum);
  piVar22 = &(this->Nests).ArrayMax;
  uVar20 = 0;
  lVar21 = 0;
  (this->Nests).ArrayNum = 0;
  if (*piVar22 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Nests).AllocatorInstance,0,piVar22);
  }
  uVar24 = (this->InputMeshes).ArrayNum;
  local_270 = (TArray<UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::FMeshNesting,TSizedDefaultAllocator<32>_>
               *)CONCAT44(local_270._4_4_,uVar24);
  local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.ArrayNum = 0;
  local_290.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_290,uVar24,Default);
  lVar29 = (longlong)(int)uVar24;
  lVar26 = lVar21;
  uVar30 = uVar20;
  local_2b0 = (double)lVar29;
  if (0 < (int)uVar24) {
    do {
      uVar23 = uVar20;
      if ((int)uVar30 < local_290.ArrayNum) {
        uVar23 = ~uVar30 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)(local_290.AllocatorInstance.Data + lVar26 * 4) = uVar30;
      lVar26 = lVar26 + 1;
      uVar30 = uVar30 + 1;
    } while (lVar26 < lVar29);
  }
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298[0] = 0;
  local_298[1] = 0;
  if ((int)uVar24 < 1) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar24,&local_2a0,local_298,local_298 + 1);
  }
  auVar10 = ___xmm_7fffffffffffffff7fffffffffffffff;
  dVar39 = dVar39 - (double)CONCAT44(uVar46,uVar45);
  dVar40 = (double)CONCAT44(uVar38,uVar35) - dVar40;
  dVar4 = (double)CONCAT44(uVar36,uVar33) - (double)CONCAT44(uVar34,uVar37);
  if (dVar39 <= 0.0) {
    dVar39 = 0.0;
  }
  if (dVar40 <= 0.0) {
    dVar40 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar39 <= dVar4) {
    dVar39 = dVar4;
  }
  if (dVar39 <= dVar40) {
    dVar39 = dVar40;
  }
  dVar40 = __real_3ff0000000000000 / (dVar39 + __real_3f1a36e2e0000000);
  if (0 < (int)uVar24) {
    do {
      uVar23 = ~uVar20 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar20 < (this->InputMeshes).ArrayNum) {
        uVar30 = uVar23;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar39 = TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeNonWatertight
                         ((this->InputMeshes).DataPtr + (int)uVar20,dVar40);
      uVar30 = 0;
      if ((int)uVar20 < local_298[0]) {
        uVar30 = uVar23;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_2a0.Data[lVar21 + 8] = (FScriptContainerElement)(0.0 <= dVar39);
      uVar30 = 0;
      if ((int)uVar20 < local_298[0]) {
        uVar30 = uVar23;
      }
      if ((uVar30 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar20 = uVar20 + 1;
      *(ulonglong *)(local_2a0.Data + lVar21) =
           CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & auVar10._4_4_,
                    SUB84(dVar39,0) & auVar10._0_4_);
      lVar21 = lVar21 + 0x10;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  uVar20 = 0;
  local_210[0] = &local_2a0;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::Compute_::__l2::<lambda_1>_>_>
            ((int *)local_290.AllocatorInstance.Data,local_290.ArrayNum,local_2c8[0],
             (<lambda_1> *)local_210);
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  local_218[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_280,local_218,uVar24);
  dVar4 = __real_4000000000000000;
  dVar39 = __real_3fe0000000000000;
  dVar40 = __real_3e45798ee2308c3a;
  local_2c0 = (int *)((ulonglong)local_2c0._4_4_ << 0x20);
  if (1 < (int)uVar24) {
    uVar30 = 1;
    local_2a8 = 0.0;
    do {
      dVar32 = local_2a8;
      uVar24 = 0;
      if ((int)uVar20 < local_290.ArrayNum) {
        uVar24 = ~uVar20 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar24 = *(uint *)(local_290.AllocatorInstance.Data + (longlong)dVar32 * 4);
      uVar23 = 0;
      if ((int)uVar24 < local_298[0]) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar11.Data = local_2a0.Data;
      uVar23 = 0;
      if ((int)uVar24 < (this->InputMeshes).ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = (int)local_2c0;
      if (this->NestingMethod == InLargestParent) {
        uVar23 = 0;
        if ((int)local_2c0 < local_280.ArrayNum) {
          uVar23 = ~uVar20 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_280.AllocatorInstance.Data + (longlong)dVar32 * 4) == -1)
        goto LAB_14c9bac23;
      }
      else {
LAB_14c9bac23:
        if (((FVar11.Data[(longlong)(int)uVar24 * 0x10 + 8] != (FScriptContainerElement)0x0) ||
            (this->NestingMethod == InSmallestParent)) || (this->bOnlyParentPostiveVolumes == false)
           ) {
          iVar14 = -1;
          if (FVar11.Data[(longlong)(int)uVar24 * 0x10 + 8] != (FScriptContainerElement)0x0) {
            iVar14 = 1;
          }
          uVar20 = 0;
          if ((int)uVar24 < (this->InputMeshes).ArrayNum) {
            uVar20 = ~uVar24 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_148 = dVar40;
          local_198._24_4_ = 3;
          pFVar6 = (this->InputMeshes).DataPtr;
          local_198._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
          local_198._16_8_ = 0;
          local_168 = &
                      ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
          ;
          local_160 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                      MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
          local_150 = (undefined ***)0x0;
          local_198._32_8_ =
               Core::Private::Function::
               TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
               ::Call;
          local_140.CurBlock = 0;
          local_140.CurBlockUsed = 0;
          local_140.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.Blocks.ArrayNum = 0;
          local_140.Blocks.ArrayMax = 0;
          TDynamicVector<int,512>::AddAllocatedBlock(&local_140);
          local_128.CurBlock = 0;
          local_128.CurBlockUsed = 0;
          local_128.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Blocks.ArrayNum = 0;
          local_128.Blocks.ArrayMax = 0;
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_128);
          local_110.CurBlock = 0;
          local_110.CurBlockUsed = 0;
          local_110.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.Blocks.ArrayNum = 0;
          local_110.Blocks.ArrayMax = 0;
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_110);
          local_f8.CurBlock = 0;
          local_f8.CurBlockUsed = 0;
          local_f8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Blocks.ArrayNum = 0;
          local_f8.Blocks.ArrayMax = 0;
          TDynamicVector<int,512>::AddAllocatedBlock(&local_f8);
          local_e0 = -1;
          local_198._16_8_ = 0;
          local_198._8_8_ = pFVar6 + (int)uVar24;
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                    ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_198,false);
          local_198._16_8_ = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_198._8_8_);
          local_250.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_198;
          local_250.FWNBeta = dVar4;
          local_250.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.FastWindingCache.ArrayNum = 0;
          local_250.FastWindingCache.ArrayMax = 0;
          local_250.FastWindingCacheOffset = 0;
          local_250.FastWindingCacheMeshChangeStamp = 0;
          local_250.FWNApproxOrder = 2;
          if ((local_e0 < 0) ||
             (uVar16 = FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_198._8_8_),
             local_198._16_8_ != uVar16)) {
            pTVar12 = local_250.Tree;
            TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_250.Tree,false);
            uVar16 = FDynamicMesh3::GetChangeStamp(pTVar12->Mesh);
            pTVar12->MeshChangeStamp = uVar16;
          }
          TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_250);
          lVar21 = (longlong)dVar32 + 1;
          local_250.FastWindingCacheMeshChangeStamp = (local_250.Tree)->MeshChangeStamp;
          if (lVar21 < (longlong)local_2b0) {
            do {
              uVar20 = 0;
              if ((int)uVar30 < local_290.ArrayNum) {
                uVar20 = ~uVar30 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar20 = *(uint *)(local_290.AllocatorInstance.Data + lVar21 * 4);
              lVar26 = (longlong)(int)uVar20;
              uVar24 = 0;
              if ((int)uVar20 < local_298[0]) {
                uVar24 = ~uVar20 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar11.Data = local_2a0.Data;
              uVar24 = 0;
              if ((int)uVar20 < (this->InputMeshes).ArrayNum) {
                uVar24 = ~uVar20 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar6 = (this->InputMeshes).DataPtr;
              if (pFVar6[lVar26].VertexRefCounts.UsedCount == 0) {
LAB_14c9bb2bc:
                iVar15 = (int)local_2c0;
              }
              else {
                if (this->NestingMethod == InLargestParent) {
                  if ((this->bOnlyNestNegativeVolumes == false) ||
                     (FVar11.Data[lVar26 * 0x10 + 8] == (FScriptContainerElement)0x0)) {
                    uVar20 = 0;
                    if ((int)uVar30 < local_280.ArrayNum) {
                      uVar20 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    if (*(int *)(local_280.AllocatorInstance.Data + lVar21 * 4) == -1)
                    goto LAB_14c9bafca;
                  }
                  goto LAB_14c9bb2bc;
                }
LAB_14c9bafca:
                uVar27 = 0;
                uVar20 = pFVar6[lVar26].VertexRefCounts.RefCounts.CurBlock;
                if (this->bOnlyCheckSingleVertexForNesting == false) {
                  uVar24 = pFVar6[lVar26].VertexRefCounts.RefCounts.CurBlockUsed;
                  if (0 < (int)(uVar20 * 0x200 + uVar24)) {
                    do {
                      uVar23 = (uint)uVar27;
                      if ((-1 < (int)uVar23) && ((int)uVar23 < (int)(uVar20 * 0x200 + uVar24))) {
                        uVar18 = (ulonglong)(uVar23 & 0x1ff);
                        if ((ushort)(*(short *)(*(longlong *)
                                                 (pFVar6[lVar26].VertexRefCounts.RefCounts.Blocks.
                                                  AllocatorInstance.Data + (uVar27 >> 9) * 8) +
                                               uVar18 * 2) - 1U) < 0xfffe) {
                          lVar29 = *(longlong *)
                                    (pFVar6[lVar26].Vertices.Blocks.AllocatorInstance.Data +
                                    (uVar27 >> 9) * 8);
                          pdVar3 = (double *)(lVar29 + uVar18 * 0x18);
                          dVar8 = *pdVar3;
                          dVar9 = pdVar3[1];
                          dVar32 = *(double *)(lVar29 + 0x10 + uVar18 * 0x18);
                          local_1d8 = dVar8;
                          dStack_1d0 = dVar9;
                          local_1c8 = dVar32;
                          if ((local_250.Tree == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0)
                             && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("Tree",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                                                  ,0x16c,L""), bVar13)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          pTVar12 = local_250.Tree;
                          if (((local_250.Tree)->RootIndex < 0) ||
                             (uVar16 = FDynamicMesh3::GetChangeStamp((local_250.Tree)->Mesh),
                             pTVar12->MeshChangeStamp != uVar16)) {
                            pTVar12 = local_250.Tree;
                            TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                                      (local_250.Tree,false);
                            uVar16 = FDynamicMesh3::GetChangeStamp(pTVar12->Mesh);
                            pTVar12->MeshChangeStamp = uVar16;
                          }
                          if (local_250.FastWindingCacheMeshChangeStamp !=
                              (local_250.Tree)->MeshChangeStamp) {
                            TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
                                      (&local_250);
                            local_250.FastWindingCacheMeshChangeStamp =
                                 (local_250.Tree)->MeshChangeStamp;
                          }
                          local_1f8._s_0.X = dVar8;
                          local_1f8._s_0.Y = dVar9;
                          local_1f8._s_0.Z = dVar32;
                          dVar32 = TFastWindingTree<UE::Geometry::FDynamicMesh3>::
                                   branch_fast_winding_num
                                             (&local_250,(local_250.Tree)->RootIndex,
                                              (TVector<double> *)&local_1f8._s_0);
                          if (dVar32 * (double)iVar14 < dVar39) goto LAB_14c9bb2bc;
                        }
                      }
                      uVar20 = pFVar6[lVar26].VertexRefCounts.RefCounts.CurBlock;
                      uVar27 = (ulonglong)(uVar23 + 1);
                      uVar24 = pFVar6[lVar26].VertexRefCounts.RefCounts.CurBlockUsed;
                    } while ((int)(uVar23 + 1) < (int)(uVar20 * 0x200 + uVar24));
                  }
                }
                else {
                  uVar24 = pFVar6[lVar26].VertexRefCounts.RefCounts.CurBlockUsed;
                  if (0 < (int)(uVar20 * 0x200 + uVar24)) {
                    do {
                      uVar23 = (uint)uVar27;
                      if ((-1 < (int)uVar23) && ((int)uVar23 < (int)(uVar20 * 0x200 + uVar24))) {
                        uVar18 = (ulonglong)(uVar23 & 0x1ff);
                        if ((ushort)(*(short *)(*(longlong *)
                                                 (pFVar6[lVar26].VertexRefCounts.RefCounts.Blocks.
                                                  AllocatorInstance.Data + (uVar27 >> 9) * 8) +
                                               uVar18 * 2) - 1U) < 0xfffe) {
                          lVar26 = *(longlong *)
                                    (pFVar6[lVar26].Vertices.Blocks.AllocatorInstance.Data +
                                    (uVar27 >> 9) * 8);
                          puVar2 = (undefined4 *)(lVar26 + uVar18 * 0x18);
                          uVar35 = *puVar2;
                          uVar38 = puVar2[1];
                          uVar34 = puVar2[2];
                          uVar37 = puVar2[3];
                          uVar5 = *(double *)(lVar26 + 0x10 + uVar18 * 0x18);
                          goto LAB_14c9bb04a;
                        }
                      }
                      uVar27 = (ulonglong)(uVar23 + 1);
                    } while ((int)(uVar23 + 1) < (int)(uVar20 * 0x200 + uVar24));
                  }
                  uVar35 = local_1f8._0_4_;
                  uVar38 = local_1f8._4_4_;
                  uVar34 = local_1f8._8_4_;
                  uVar37 = local_1f8._12_4_;
                  uVar5 = local_1f8._s_0.Z;
LAB_14c9bb04a:
                  if ((local_250.Tree == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Tree",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                                          ,0x16c,L""), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pTVar12 = local_250.Tree;
                  if (((local_250.Tree)->RootIndex < 0) ||
                     (uVar16 = FDynamicMesh3::GetChangeStamp((local_250.Tree)->Mesh),
                     pTVar12->MeshChangeStamp != uVar16)) {
                    pTVar12 = local_250.Tree;
                    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_250.Tree,false);
                    uVar16 = FDynamicMesh3::GetChangeStamp(pTVar12->Mesh);
                    pTVar12->MeshChangeStamp = uVar16;
                  }
                  if (local_250.FastWindingCacheMeshChangeStamp != (local_250.Tree)->MeshChangeStamp
                     ) {
                    TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
                              (&local_250);
                    local_250.FastWindingCacheMeshChangeStamp = (local_250.Tree)->MeshChangeStamp;
                  }
                  local_1b8._0_4_ = uVar35;
                  local_1b8._4_4_ = uVar38;
                  local_1b8._8_4_ = uVar34;
                  local_1b8._12_4_ = uVar37;
                  local_1b8._s_0.Z = (double)uVar5;
                  dVar32 = TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                                     (&local_250,(local_250.Tree)->RootIndex,
                                      (TVector<double> *)&local_1b8._s_0);
                  if (dVar32 * (double)iVar14 <= dVar39) goto LAB_14c9bb2bc;
                }
                uVar20 = 0;
                if ((int)uVar30 < local_280.ArrayNum) {
                  uVar20 = ~uVar30 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(int *)(local_280.AllocatorInstance.Data + lVar21 * 4) = (int)local_2c0;
                iVar15 = (int)local_2c0;
              }
              uVar30 = uVar30 + 1;
              lVar21 = lVar21 + 1;
            } while (lVar21 < (longlong)local_2b0);
          }
          if (local_250.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.FastWindingCache.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_f8,0);
          if (local_f8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_110,0);
          if (local_110.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_128,0);
          if (local_128.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_140,0);
          if (local_140.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Blocks.AllocatorInstance.Data);
          }
          dVar32 = local_2a8;
          if ((code *)local_198._32_8_ != (code *)0x0) {
            pppuVar17 = &local_168;
            if (local_150 != (undefined ***)0x0) {
              pppuVar17 = local_150;
            }
            (*(code *)(*pppuVar17)[2])();
            dVar32 = local_2a8;
          }
        }
      }
      uVar20 = iVar15 + 1;
      local_2a8 = (double)((longlong)dVar32 + 1);
      local_2c0 = (int *)CONCAT44(local_2c0._4_4_,uVar20);
      uVar30 = iVar15 + 2;
      uVar24 = (uint)local_270;
    } while ((int)uVar30 < (int)(uint)local_270);
  }
  uVar20 = 0;
  local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.ArrayNum = 0;
  local_260.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_260,uVar24,Default);
  if (0 < (int)uVar24) {
    local_2a8 = 0.0;
    local_270 = &local_268->Nests;
    local_2c0 = &(local_268->Nests).ArrayMax;
    piVar22 = local_2c0;
    pTVar28 = local_270;
    dVar40 = local_2b0;
    pTVar31 = local_268;
LAB_14c9bb400:
    do {
      dVar39 = local_2a8;
      uVar24 = 0;
      if ((int)uVar20 < local_290.ArrayNum) {
        uVar24 = ~uVar20 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_2c4 = *(uint *)(local_290.AllocatorInstance.Data + (longlong)dVar39 * 4);
      uVar24 = 0;
      if ((int)uVar20 < local_260.ArrayNum) {
        uVar24 = ~uVar20 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_260.AllocatorInstance.Data[(longlong)dVar39] == (FScriptContainerElement)0x0) {
        if (pTVar31->bOnlyParentPostiveVolumes != false) {
          lVar21 = (longlong)(int)local_2c4;
          uVar24 = 0;
          if ((int)local_2c4 < local_298[0]) {
            uVar24 = ~local_2c4 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_2a0.Data[lVar21 * 0x10 + 8] == (FScriptContainerElement)0x0) {
            pFVar19 = (pTVar31->SkippedMeshIndices).AllocatorInstance.Data;
            if (((pFVar19 <= (FScriptContainerElement *)&local_2c4) &&
                ((FScriptContainerElement *)&local_2c4 <
                 pFVar19 + (longlong)(pTVar31->SkippedMeshIndices).ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar15 = (pTVar31->SkippedMeshIndices).ArrayNum;
            piVar1 = &(pTVar31->SkippedMeshIndices).ArrayMax;
            if (iVar15 == *piVar1) {
              iVar15 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&(pTVar31->SkippedMeshIndices).AllocatorInstance,piVar1);
            }
            (pTVar31->SkippedMeshIndices).ArrayNum = iVar15 + 1;
            *(uint *)((pTVar31->SkippedMeshIndices).AllocatorInstance.Data + (longlong)iVar15 * 4) =
                 local_2c4;
            goto LAB_14c9bb923;
          }
        }
        iVar15 = pTVar28->ArrayNum;
        if (iVar15 == *piVar22) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar28->AllocatorInstance,piVar22);
        }
        pFVar19 = (pTVar28->AllocatorInstance).Data;
        pTVar28->ArrayNum = iVar15 + 1;
        lVar21 = (longlong)iVar15;
        *(undefined4 *)(pFVar19 + lVar21 * 0x18) = 0;
        *(undefined4 *)(pFVar19 + lVar21 * 0x18 + 4) = 0xffffffff;
        *(undefined8 *)(pFVar19 + lVar21 * 0x18 + 8) = 0;
        *(undefined8 *)(pFVar19 + lVar21 * 0x18 + 0x10) = 0;
        *(uint *)(pFVar19 + lVar21 * 0x18) = local_2c4;
        if (local_268->NestingMethod == InSmallestParent) {
          uVar24 = 0;
          if ((int)uVar20 < local_280.ArrayNum) {
            uVar24 = ~uVar20 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar24 = *(uint *)(local_280.AllocatorInstance.Data + (longlong)dVar39 * 4);
          if (-1 < (int)uVar24) {
            uVar30 = 0;
            if ((int)uVar24 < local_290.ArrayNum) {
              uVar30 = ~uVar24 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)(pFVar19 + lVar21 * 0x18 + 4) =
                 *(undefined4 *)(local_290.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
          }
        }
        pTVar31 = local_268;
        lVar26 = (longlong)dVar39 + 1;
        piVar22 = local_2c0;
        pTVar28 = local_270;
        dVar40 = local_2b0;
        uVar24 = uVar20;
        if (lVar26 < (longlong)local_2b0) {
          do {
            uVar24 = uVar24 + 1;
            uVar30 = 0;
            if ((int)uVar24 < local_290.ArrayNum) {
              uVar30 = ~uVar24 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_2b8[0] = *(uint *)(local_290.AllocatorInstance.Data + lVar26 * 4);
            uVar30 = 0;
            if ((int)uVar24 < local_280.ArrayNum) {
              uVar30 = ~uVar24 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(uint *)(local_280.AllocatorInstance.Data + lVar26 * 4) == uVar20) {
              lVar29 = (longlong)(int)local_2b8[0];
              uVar30 = 0;
              if ((int)local_2b8[0] < local_298[0]) {
                uVar30 = ~local_2b8[0] >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((local_2a0.Data[lVar29 * 0x10 + 8] == (FScriptContainerElement)0x0) ||
                 (pTVar31->bOnlyNestNegativeVolumes == false)) {
                if ((*(uint **)(pFVar19 + lVar21 * 0x18 + 8) <= local_2b8) &&
                   ((local_2b8 <
                     *(uint **)(pFVar19 + lVar21 * 0x18 + 8) +
                     *(int *)(pFVar19 + lVar21 * 0x18 + 0x14) &&
                    (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar13)))) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                iVar15 = *(int *)(pFVar19 + lVar21 * 0x18 + 0x10);
                if (iVar15 == *(int *)(pFVar19 + lVar21 * 0x18 + 0x14)) {
                  iVar15 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)(pFVar19 + lVar21 * 0x18 + 8),
                                      (int *)(pFVar19 + lVar21 * 0x18 + 0x14));
                }
                *(int *)(pFVar19 + lVar21 * 0x18 + 0x10) = iVar15 + 1;
                *(uint *)(*(longlong *)(pFVar19 + lVar21 * 0x18 + 8) + (longlong)iVar15 * 4) =
                     local_2b8[0];
                uVar30 = 0;
                if ((int)uVar24 < local_260.ArrayNum) {
                  uVar30 = ~uVar24 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                local_260.AllocatorInstance.Data[lVar26] = (FScriptContainerElement)0x1;
              }
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < (longlong)local_2b0);
          uVar20 = uVar20 + 1;
          local_2a8 = (double)((longlong)local_2a8 + 1);
          piVar22 = local_2c0;
          pTVar28 = local_270;
          dVar40 = local_2b0;
          pTVar31 = local_268;
          goto LAB_14c9bb400;
        }
      }
LAB_14c9bb923:
      local_2a8 = (double)((longlong)dVar39 + 1);
      uVar20 = uVar20 + 1;
    } while ((longlong)local_2a8 < (longlong)dVar40);
  }
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  if (local_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data);
  }
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  return;
}

// InitBounds @ 14c9d3c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshSpatialSort<UE::Geometry::FDynamicMesh3>::InitBounds
          (TMeshSpatialSort<UE::Geometry::FDynamicMesh3> *this)

{
  TArray<UE::Geometry::TAxisAlignedBox3<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  undefined1 auVar4 [16];
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  FDynamicMesh3 *pFVar17;
  FDynamicMesh3 *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  
  pTVar1 = &this->MeshBounds;
  piVar2 = &(this->MeshBounds).ArrayMax;
  (this->MeshBounds).ArrayNum = 0;
  if ((this->MeshBounds).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar19 = (this->InputMeshes).ArrayNum;
  if (-1 < (int)uVar19) {
    if (*piVar2 < (int)uVar19) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar19,&pTVar1->AllocatorInstance,(this->MeshBounds).ArrayNum,piVar2);
    }
    dVar13 = _UNK_150a9e6d8;
    dVar12 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dVar11 = _UNK_150a9e648;
    dVar10 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dVar9 = _UNK_1508ffb58;
    dVar8 = ___xmm_ffefffffffffffffffefffffffffffff;
    pFVar18 = (this->InputMeshes).DataPtr;
    pFVar17 = pFVar18 + (this->InputMeshes).ArrayNum;
    while( true ) {
      if (pFVar18 == pFVar17) {
        return;
      }
      uVar20 = 0;
      iVar21 = (pFVar18->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar18->VertexRefCounts).RefCounts.CurBlockUsed;
      local_90 = dVar10;
      dStack_88 = dVar11;
      local_80 = dVar12;
      dStack_78 = dVar13;
      local_70 = dVar8;
      dStack_68 = dVar9;
      if (0 < iVar21) {
        uVar26 = SUB84(dVar13,0);
        uVar27 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar28 = SUB84(dVar10,0);
        uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar22 = dVar9;
        dVar23 = dVar8;
        dVar24 = dVar12;
        dVar25 = dVar11;
        do {
          uVar16 = (ulonglong)((uint)uVar20 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar18->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (uVar20 >> 9) * 8) + uVar16 * 2) - 1U) < 0xfffe) {
            lVar15 = *(longlong *)
                      ((pFVar18->Vertices).Blocks.AllocatorInstance.Data + (uVar20 >> 9) * 8);
            auVar4 = *(undefined1 (*) [16])(lVar15 + uVar16 * 0x18);
            dVar3 = *(double *)(lVar15 + 0x10 + uVar16 * 0x18);
            dVar7 = auVar4._0_8_;
            if (dVar7 < (double)CONCAT44(uVar29,uVar28)) {
              uVar28 = auVar4._0_4_;
              uVar29 = auVar4._4_4_;
              local_90 = dVar7;
            }
            if ((double)CONCAT44(uVar27,uVar26) <= dVar7 && dVar7 != (double)CONCAT44(uVar27,uVar26)
               ) {
              uVar26 = auVar4._0_4_;
              uVar27 = auVar4._4_4_;
              dStack_78 = dVar7;
            }
            dVar7 = auVar4._8_8_;
            if (dVar7 < dVar25) {
              dVar25 = dVar7;
              dStack_88 = dVar7;
            }
            if (dVar23 < dVar7) {
              dVar23 = dVar7;
              local_70 = dVar7;
            }
            if (dVar3 < dVar24) {
              dVar24 = dVar3;
              local_80 = dVar3;
            }
            if (dVar22 < dVar3) {
              dVar22 = dVar3;
              dStack_68 = dVar3;
            }
          }
          uVar19 = (uint)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
        } while ((int)uVar19 < iVar21);
      }
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < pFVar5 + (longlong)*piVar2 * 0x30)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) break;
      iVar21 = (this->MeshBounds).ArrayNum;
      if (iVar21 == *piVar2) {
        iVar21 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar18 = pFVar18 + 1;
      (this->MeshBounds).ArrayNum = iVar21 + 1;
      lVar15 = (longlong)iVar21;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar5 + lVar15 * 0x30) = local_90;
      *(double *)(pFVar5 + lVar15 * 0x30 + 8) = dStack_88;
      *(double *)(pFVar5 + lVar15 * 0x30 + 0x10) = local_80;
      *(double *)(pFVar5 + lVar15 * 0x30 + 0x10 + 8) = dStack_78;
      *(double *)(pFVar5 + lVar15 * 0x30 + 0x20) = local_70;
      *(double *)(pFVar5 + lVar15 * 0x30 + 0x20 + 8) = dStack_68;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
}

