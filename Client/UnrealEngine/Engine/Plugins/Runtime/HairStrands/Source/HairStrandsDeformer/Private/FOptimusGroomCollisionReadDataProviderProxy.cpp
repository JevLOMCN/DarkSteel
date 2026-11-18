// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 4

// FOptimusGroomCollisionReadDataProviderProxy @ 14e2659d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOptimusGroomCollisionReadDataProviderProxy * __thiscall
FOptimusGroomCollisionReadDataProviderProxy::FOptimusGroomCollisionReadDataProviderProxy
          (FOptimusGroomCollisionReadDataProviderProxy *this,UGroomSolverComponent *param_1)

{
  TMap<TObjectPtr<UMeshComponent>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>_>
  *this_00;
  
  this_00 = &this->CollisionObjects;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CollisionObjects).field_0x8 = 0;
  this->_padding_ = (longlong)&___7FOptimusGroomCollisionReadDataProviderProxy__6B_;
  *(undefined8 *)&(this->CollisionObjects).field_0x20 = 0;
  *(undefined4 *)&(this->CollisionObjects).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionObjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollisionObjects).field_0x34 = 0;
  *(undefined8 *)&(this->CollisionObjects).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionObjects).field_0x48 = 0;
  (this->CollisionResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionResources).ArrayNum = 0;
  (this->CollisionResources).ArrayMax = 0;
  this->FallbackStructuredSRV = (FRDGBufferSRV *)0x0;
  if (param_1 != (UGroomSolverComponent *)0x0) {
    if (this_00 != &param_1->CollisionComponents) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(this->CollisionObjects).field_0x38,
                 (int *)&(this->CollisionObjects).field_0x48,
                 (ForElementType<FSetElementId> *)&(param_1->CollisionComponents).field_0x38,
                 *(int *)&(param_1->CollisionComponents).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,
                  (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&param_1->CollisionComponents);
    }
    return this;
  }
  return this;
}

// AllocateResources @ 14e26c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomCollisionReadDataProviderProxy::AllocateResources
          (FOptimusGroomCollisionReadDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  FObjectPtr_u_0 *this_00;
  int iVar1;
  undefined1 *puVar2;
  FObjectPtr FVar3;
  longlong *plVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UStaticMesh *this_01;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FRDGBufferSRV *pFVar16;
  UClass *pUVar17;
  FStaticMeshRenderData *this_02;
  TRefCountPtr<FRHIShaderResourceView> TVar18;
  byte bVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  TArray<FOptimusGroomCollisionReadDataProviderProxy::FCollisionResources,TSizedDefaultAllocator<32>_>
  *pTVar29;
  undefined1 *puVar30;
  FScriptContainerElement *pFVar31;
  FRDGBuilder *pFVar32;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [4];
  uint local_1e4;
  FRDGBuilder *local_1e0;
  int local_1d8;
  uint uStack_1d4;
  undefined1 *puStack_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  TArray<FOptimusGroomCollisionReadDataProviderProxy::FCollisionResources,TSizedDefaultAllocator<32>_>
  *local_1b0;
  undefined1 *local_1a8;
  TMap<TObjectPtr<UMeshComponent>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>_>
  *local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  int iStack_178;
  undefined4 uStack_174;
  int local_170;
  int local_16c;
  TMap<TObjectPtr<UMeshComponent>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>_>
  *local_168;
  FRHICommandListBase *local_160;
  undefined1 local_158 [36];
  uint uStack_134;
  undefined1 *local_130;
  undefined8 uStack_128;
  longlong local_120;
  longlong lStack_118;
  FRDGBufferSRVDesc local_110;
  undefined4 local_d4;
  undefined4 local_c8 [2];
  void *local_c0;
  longlong local_b8;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  iVar25 = 0;
  local_1e0 = param_1;
  if (this->FallbackStructuredSRV == (FRDGBufferSRV *)0x0) {
    local_110.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_110._padding_._4_4_ = 0;
    local_110._padding_._0_4_ = 0xffffffff;
    local_110._padding_ = 0;
    local_110._padding_._0_1_ = 0;
    if ((((local_110.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_110._padding_._0_1_ = 0x1c;
    }
    pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_110);
    this->FallbackStructuredSRV = pFVar16;
  }
  pTVar29 = &this->CollisionResources;
  (this->CollisionResources).ArrayNum = 0;
  local_1b0 = pTVar29;
  if ((this->CollisionResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar29->AllocatorInstance,0,&(this->CollisionResources).ArrayMax);
  }
  iVar1 = *(int *)&(this->CollisionObjects).field_0x28;
  puVar30 = &(this->CollisionObjects).field_0x10;
  local_1a0 = &this->CollisionObjects;
  uVar12 = 1;
  iVar26 = 0;
  iVar13 = iVar26;
  if (iVar1 != 0) {
    puVar27 = *(uint **)&(this->CollisionObjects).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar30;
    }
    uVar14 = *puVar27;
    iVar26 = 0;
    iVar25 = 0;
    while (uVar14 == 0) {
      lVar20 = (longlong)iVar25;
      iVar26 = iVar26 + 0x20;
      iVar25 = iVar25 + 1;
      iVar13 = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14e26cb2e;
      uVar14 = puVar27[lVar20 + 1];
    }
    uVar12 = -uVar14 & uVar14;
    uVar21 = (ulonglong)uVar12 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_170 = (int)lVar20;
    iVar13 = local_170 + -1 + iVar26;
    if (iVar1 < iVar13) {
      iVar13 = iVar1;
    }
  }
LAB_14e26cb2e:
  iStack_178 = *(int *)&(this->CollisionObjects).field_0x8 -
               *(int *)&(this->CollisionObjects).field_0x34;
  uVar14 = *(uint *)&(this->CollisionObjects).field_0x28;
  iVar28 = (int)uVar14 >> 5;
  bVar19 = (byte)uVar14 & 0x1f;
  uStack_198 = CONCAT44(uVar12,iVar25);
  uStack_1d4 = 1 << bVar19;
  uVar12 = -1 << bVar19;
  uVar23 = uVar14 & 0xffffffe0;
  uStack_188 = CONCAT44(iVar13,0xffffffff);
  local_180 = CONCAT44(local_d4,iVar26);
  stack0xfffffffffffffec8 = uStack_198;
  lStack_118 = CONCAT44(uStack_174,iStack_178);
  uStack_128 = uStack_188;
  local_120 = local_180;
  local_1d8 = iVar28;
  puStack_1d0 = puVar30;
  local_1c8 = uVar12;
  uStack_1c4 = uVar14;
  uStack_1c0 = uVar23;
  local_168 = local_1a0;
  local_158._24_8_ = local_1a0;
  local_130 = puVar30;
  if ((((int)uVar14 < 0) || (iVar1 < (int)uVar14)) &&
     (local_190 = puVar30,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar15 = *(uint *)&(this->CollisionObjects).field_0x28;
  if (uVar14 != uVar15) {
    puVar2 = *(undefined1 **)&(this->CollisionObjects).field_0x20;
    if (puVar2 != (undefined1 *)0x0) {
      puVar30 = puVar2;
    }
    uVar12 = uVar12 & *(uint *)(puVar30 + (longlong)iVar28 * 4);
    while (uVar12 == 0) {
      uStack_1c0 = uVar23 + 0x20;
      local_1d8 = iVar28 + 1;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1d8)
      goto LAB_14e26cc6d;
      uVar12 = *(uint *)(puVar30 + (longlong)iVar28 * 4 + 4);
      local_1c8 = 0xffffffff;
      iVar28 = local_1d8;
      uVar23 = uStack_1c0;
    }
    uStack_1d4 = -uVar12 & uVar12;
    uVar21 = (ulonglong)uStack_1d4 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_16c = (int)lVar20;
    uStack_1c4 = local_16c + -1 + uVar23;
    if ((int)uVar15 < (int)uStack_1c4) {
LAB_14e26cc6d:
      uStack_1c4 = uVar15;
    }
  }
  uStack_198 = CONCAT44(uStack_1d4,local_1d8);
  uStack_188 = CONCAT44(uStack_1c4,local_1c8);
  local_180 = CONCAT44(uStack_1bc,uStack_1c0);
  local_190 = puStack_1d0;
  local_1a8 = puStack_1d0;
  local_1e4 = uStack_1c4;
  pFVar32 = local_1e0;
  do {
    uVar9 = local_158._24_8_;
    uVar12 = local_1e4;
    if (*(int *)(local_158._24_8_ + 8) - *(int *)(local_158._24_8_ + 0x34) != (int)lStack_118) {
      local_1e8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
    }
    if (((uStack_128._4_4_ == uVar12) && (local_130 == local_1a8)) &&
       ((TMap<TObjectPtr<UMeshComponent>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMeshComponent>,int,0>_>
         *)uVar9 == local_168)) {
      return;
    }
    lVar20 = *(longlong *)uVar9;
    this_00 = (FObjectPtr_u_0 *)(lVar20 + (longlong)(int)uStack_128._4_4_ * 0x18);
    if (*(longlong *)(lVar20 + (longlong)(int)uStack_128._4_4_ * 0x18) != 0) {
      pUVar17 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
      bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar17);
      if ((bVar10) &&
         (FVar3.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, FVar3.field0_0x0 != (UObject *)0x0)) {
        plVar4 = *(longlong **)((longlong)FVar3.field0_0x0 + 0x810);
        if (plVar4 != (longlong *)0x0) {
          uVar21 = 0;
          local_a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_98[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_98[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_88[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_88[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_78[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_78[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_68[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_68[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_58[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_58[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_c8[0] = 0xffffffff;
          local_c0 = (void *)0x0;
          local_b8 = 0;
          (**(code **)(*plVar4 + 0x90))(plVar4,pFVar32,local_c8);
          plVar4 = (longlong *)(*(longlong **)((longlong)FVar3.field0_0x0 + 0x810))[9];
          uVar14 = (**(code **)(**(longlong **)((longlong)FVar3.field0_0x0 + 0x810) + 0xa0))();
          uVar12 = 0;
          if ((int)uVar14 < (int)plVar4[1]) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((int)local_b8 != *(int *)(*(longlong *)(*plVar4 + (longlong)(int)uVar14 * 8) + 0x18))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CachedGeometry.Sections.Num() == MeshRenderData.LODRenderData[SkinnedMeshComponent->MeshObject->GetLOD()].RenderSections.Num()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomCollisionRead.cpp"
                                     ,0xb3,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar22 = uVar21;
          if (0 < (int)local_b8) {
            do {
              iVar25 = pTVar29->ArrayNum;
              if (iVar25 == pTVar29->ArrayMax) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar29->AllocatorInstance,&pTVar29->ArrayMax);
              }
              pTVar29->ArrayNum = iVar25 + 1;
              pFVar31 = (pTVar29->AllocatorInstance).Data + (longlong)iVar25 * 0x20;
              DefaultConstructItems<FOptimusGroomCollisionReadDataProviderProxy::FCollisionResources,int>
                        (pFVar31,1);
              uVar14 = (uint)uVar21;
              uVar23 = ~uVar14 >> 0x1f;
              uVar12 = 0;
              if ((int)uVar14 < (int)local_b8) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined8 *)pFVar31 = *(undefined8 *)(uVar22 + 0x18 + (longlong)local_c0);
              uVar15 = 0;
              uVar12 = uVar15;
              if ((int)uVar14 < (int)local_b8) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined8 *)(pFVar31 + 8) = *(undefined8 *)(uVar22 + 0x38 + (longlong)local_c0);
              uVar12 = uVar15;
              if ((int)uVar14 < (int)local_b8) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)(pFVar31 + 0x1c) = *(undefined4 *)(uVar22 + 0x48 + (longlong)local_c0);
              uVar12 = uVar15;
              if ((int)uVar14 < (int)local_b8) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)(pFVar31 + 0x18) = *(undefined4 *)(uVar22 + 0x4c + (longlong)local_c0);
              if ((int)uVar14 < (int)local_b8) {
                uVar15 = uVar23;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)(pFVar31 + 0x14) = *(undefined4 *)(uVar22 + 0x54 + (longlong)local_c0);
              uVar12 = 0;
              if ((int)uVar14 < (int)local_b8) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar21 = (ulonglong)(uVar14 + 1);
              *(undefined4 *)(pFVar31 + 0x10) = *(undefined4 *)(uVar22 + 0x50 + (longlong)local_c0);
              uVar22 = uVar22 + 0x70;
            } while ((int)(uVar14 + 1) < (int)local_b8);
          }
          if (local_c0 != (void *)0x0) {
            FMemory::Free(local_c0);
          }
        }
      }
      else if (this_00->Handle != (UObject *)0x0) {
        pUVar17 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar17);
        if ((bVar10) && (pUVar5 = this_00->Handle, pUVar5 != (UObject *)0x0)) {
          pUVar6 = *(UObject **)(pUVar5 + 0x24);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar6 != (UObject *)0x0) goto LAB_14e26d0f7;
          }
          else if (pUVar6 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar6);
LAB_14e26d0f7:
            this_01 = *(UStaticMesh **)(pUVar5 + 0x24);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UStaticMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            this_02 = UStaticMesh::GetRenderData(this_01);
            if (this_02 != (FStaticMeshRenderData *)0x0) {
              uVar14 = 0;
              uVar12 = 0;
              if (this_02->CurrentFirstLODIdx != 0) {
                uVar12 = (uint)this_02->CurrentFirstLODIdx;
              }
              uVar12 = FStaticMeshRenderData::GetFirstValidLODIdx(this_02,uVar12);
              lVar20 = (longlong)(int)uVar12;
              if ((-1 < (int)uVar12) && ((int)uVar12 < (this_02->LODResources).Array.ArrayNum)) {
                local_1b8 = 0;
                uVar23 = ~uVar12 >> 0x1f;
                while( true ) {
                  uVar15 = 0;
                  if ((int)uVar12 < (this_02->LODResources).Array.ArrayNum) {
                    uVar15 = uVar23;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pTVar29 = local_1b0;
                  pFVar32 = local_1e0;
                  if (*(int *)(*(longlong *)
                                ((this_02->LODResources).Array.AllocatorInstance.Data + lVar20 * 8)
                              + 0x38) <= (int)uVar14) break;
                  iVar25 = local_1b0->ArrayNum;
                  if (iVar25 == local_1b0->ArrayMax) {
                    iVar25 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&local_1b0->AllocatorInstance,&local_1b0->ArrayMax);
                  }
                  pTVar29->ArrayNum = iVar25 + 1;
                  pFVar31 = (pTVar29->AllocatorInstance).Data + (longlong)iVar25 * 0x20;
                  DefaultConstructItems<FOptimusGroomCollisionReadDataProviderProxy::FCollisionResources,int>
                            (pFVar31,1);
                  uVar15 = 0;
                  if ((int)uVar12 < (this_02->LODResources).Array.ArrayNum) {
                    uVar15 = uVar23;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  lVar7 = *(longlong *)
                           ((this_02->LODResources).Array.AllocatorInstance.Data + lVar20 * 8);
                  uVar15 = 0;
                  if ((int)uVar14 < *(int *)(lVar7 + 0x38)) {
                    uVar15 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  lVar24 = lVar7 + 0x10;
                  if (*(longlong *)(lVar7 + 0x30) != 0) {
                    lVar24 = *(longlong *)(lVar7 + 0x30);
                  }
                  uVar15 = 0;
                  if ((int)uVar12 < (this_02->LODResources).Array.ArrayNum) {
                    uVar15 = uVar23;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_158._16_8_ = 0;
                  local_158._8_8_ = 0x10000;
                  *(undefined8 *)pFVar31 =
                       *(undefined8 *)
                        (*(longlong *)
                          ((this_02->LODResources).Array.AllocatorInstance.Data + lVar20 * 8) +
                        0x1b0);
                  local_160 = (FRHICommandListBase *)local_1e0->_padding_;
                  uVar15 = 0;
                  if ((int)uVar12 < (this_02->LODResources).Array.ArrayNum) {
                    uVar15 = uVar23;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar11 = 0x20;
                  if (*(char *)(*(longlong *)
                                 ((this_02->LODResources).Array.AllocatorInstance.Data + lVar20 * 8)
                               + 0x274) != '\0') {
                    uVar11 = 0x1c;
                  }
                  local_158[9] = uVar11;
                  uVar15 = 0;
                  if ((int)uVar12 < (this_02->LODResources).Array.ArrayNum) {
                    uVar15 = uVar23;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  TVar18 = FRHICommandListBase::CreateShaderResourceView
                                     (local_160,(FRHIBuffer *)local_158,
                                      *(FInitializer **)
                                       (*(longlong *)
                                         ((this_02->LODResources).Array.AllocatorInstance.Data +
                                         lVar20 * 8) + 0x248));
                  *(undefined8 *)(pFVar31 + 8) = *(undefined8 *)TVar18.Reference;
                  if ((FRHIResource *)local_158._0_8_ != (FRHIResource *)0x0) {
                    FRHIResource::Release((FRHIResource *)local_158._0_8_);
                  }
                  uVar14 = uVar14 + 1;
                  *(undefined4 *)(pFVar31 + 0x1c) = *(undefined4 *)(local_1b8 + 8 + lVar24);
                  *(int *)(pFVar31 + 0x18) =
                       *(int *)(local_1b8 + 0x10 + lVar24) - *(int *)(local_1b8 + 0xc + lVar24);
                  *(undefined4 *)(pFVar31 + 0x14) = *(undefined4 *)(local_1b8 + 4 + lVar24);
                  lVar7 = local_1b8 + 0xc;
                  local_1b8 = local_1b8 + 0x1c;
                  *(undefined4 *)(pFVar31 + 0x10) = *(undefined4 *)(lVar7 + lVar24);
                }
              }
            }
          }
        }
      }
    }
    uStack_128 = CONCAT44(uStack_128._4_4_,(uint)uStack_128 & ~uStack_134);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_158 + 0x20));
  } while( true );
}

// GatherDispatchData @ 14e271e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomCollisionReadDataProviderProxy::GatherDispatchData
          (FOptimusGroomCollisionReadDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uchar *puVar12;
  uint uVar13;
  uint uVar14;
  longlong local_res10;
  
  if ((param_1->NumInvocations != (this->CollisionResources).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDispatchData.NumInvocations == CollisionResources.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomCollisionRead.cpp"
                         ,0xe4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar4 = param_1->ParameterBuffer;
  iVar2 = param_1->ParameterBufferStride;
  iVar3 = param_1->NumInvocations;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = 0;
  if (0 < iVar3) {
    puVar12 = puVar4 + (longlong)iVar1 + 0xc;
    local_res10 = 0;
    uVar9 = uVar11;
    uVar13 = uVar11;
    uVar14 = uVar11;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->CollisionResources).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar8 = (this->CollisionResources).AllocatorInstance.Data + local_res10;
      local_res10 = local_res10 + 0x20;
      *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(pFVar8 + 0x10);
      *(undefined4 *)puVar12 = *(undefined4 *)(pFVar8 + 0x14);
      *(undefined8 *)(puVar12 + 0x1c) = *(undefined8 *)(pFVar8 + 8);
      *(undefined8 *)(puVar12 + 0x14) = *(undefined8 *)pFVar8;
      *(undefined4 *)(puVar12 + -8) = *(undefined4 *)(pFVar8 + 0x1c);
      *(undefined4 *)(puVar12 + -0xc) = *(undefined4 *)(pFVar8 + 0x18);
      *(uint *)(puVar12 + 8) = uVar14;
      *(uint *)(puVar12 + 4) = uVar13;
      uVar13 = uVar13 + *(int *)(pFVar8 + 0x18);
      uVar14 = uVar14 + *(int *)(pFVar8 + 0x1c);
      puVar12 = puVar12 + iVar2;
    } while ((int)uVar9 < iVar3);
    puVar10 = (uint *)(puVar4 + (longlong)iVar1 + 0x18);
    do {
      if (((int)uVar11 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar10[1] = uVar14;
      uVar11 = uVar11 + 1;
      *puVar10 = uVar13;
      puVar10 = (uint *)((longlong)puVar10 + (longlong)iVar2);
    } while ((int)uVar11 < iVar3);
  }
  return;
}

// IsValid @ 14e288c20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusGroomCollisionReadDataProviderProxy::IsValid
          (FOptimusGroomCollisionReadDataProviderProxy *this,FValidationData *param_1)

{
  undefined1 *puVar1;
  FObjectPtr_u_0 *this_00;
  ulonglong uVar2;
  int iVar3;
  FObjectPtr FVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1->ParameterStructSize != 0x30) {
    return false;
  }
  iVar3 = *(int *)&(this->CollisionObjects).field_0x28;
  iVar16 = 0;
  iVar18 = 0;
  uVar10 = 1;
  puVar1 = &(this->CollisionObjects).field_0x10;
  iVar20 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->CollisionObjects).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14e288cdd;
      uVar15 = puVar19[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iVar11 = iVar18 + -1 + local_res20;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14e288cdd:
  uVar15 = *(uint *)&(this->CollisionObjects).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar16);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar18;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->CollisionObjects).field_0x8 -
                       *(int *)&(this->CollisionObjects).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar10 = *(uint *)&(this->CollisionObjects).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->CollisionObjects).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar14 = uVar14 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14e288df0;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_14e288df0:
  do {
    if (*(int *)&(this->CollisionObjects).field_0x8 - *(int *)&(this->CollisionObjects).field_0x34
        != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMeshComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return param_1->NumInvocations == iVar20;
    }
    this_00 = (FObjectPtr_u_0 *)
              (*(longlong *)&this->CollisionObjects + (longlong)TStack_68.CurrentBitIndex * 0x18);
    if (*(longlong *)
         (*(longlong *)&this->CollisionObjects + (longlong)TStack_68.CurrentBitIndex * 0x18) != 0) {
      pUVar12 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar12);
      if (((bVar8) &&
          (FVar4.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, FVar4.field0_0x0 != (UObject *)0x0))
         && (plVar5 = *(longlong **)((longlong)FVar4.field0_0x0 + 0x810), plVar5 != (longlong *)0x0)
         ) {
        plVar6 = (longlong *)plVar5[9];
        uVar14 = (**(code **)(*plVar5 + 0xa0))();
        uVar10 = 0;
        if ((int)uVar14 < (int)plVar6[1]) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar20 = iVar20 + *(int *)(*(longlong *)(*plVar6 + (longlong)(int)uVar14 * 8) + 0x18);
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

