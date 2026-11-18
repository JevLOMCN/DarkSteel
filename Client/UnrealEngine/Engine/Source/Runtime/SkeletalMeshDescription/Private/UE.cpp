// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 21

// Construct<FSourceGeometryPartID> @ 14438b890

void __cdecl UE::CoreUObject::Private::Construct<FSourceGeometryPartID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FSourceGeometryPartID> @ 14438b8a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceGeometryPartID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FSourceGeometryPartID> @ 14438b8b0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceGeometryPartID>(void *param_1)

{
  return;
}

// Copy<FSourceGeometryPartID> @ 14438b8c0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceGeometryPartID>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FSourceGeometryPartID> @ 14438b8f0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FSourceGeometryPartID>(void *param_1)

{
  return *(uint *)param_1;
}

// Construct<FBoneID> @ 14438ba00

void __cdecl UE::CoreUObject::Private::Construct<FBoneID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FBoneID> @ 14438ba10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBoneID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FBoneID> @ 14438ba20

void __cdecl UE::CoreUObject::Private::Destruct<FBoneID>(void *param_1)

{
  return;
}

// Copy<FBoneID> @ 14438ba30

bool __cdecl UE::CoreUObject::Private::Copy<FBoneID>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FBoneID> @ 14438baa0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FBoneID>(void *param_1)

{
  return *(uint *)param_1;
}

// ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType> @ 144391a60

/* WARNING: Removing unreachable block (ram,0x000144391aae) */

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar2 = *param_4;
  uVar1 = iVar2 + 1;
  if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  lVar3 = 4;
  uVar7 = (ulonglong)param_1;
  if (iVar2 != 0) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(uVar7 * lVar3,8);
  iVar6 = (int)(uVar4 / uVar7);
  if (iVar6 < (int)uVar1) {
    iVar6 = 0x7fffffff;
  }
  if ((param_3->Data != (FScriptContainerElement *)0x0) || (iVar6 != 0)) {
    if ((iVar6 < 0) || (0x7ffffffe < uVar7 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidAlignedHeapAllocatorNum(iVar6,uVar7);
    }
    pFVar5 = FMemory::Realloc(param_3->Data,(longlong)iVar6 * uVar7,8);
    param_3->Data = pFVar5;
  }
  *param_4 = iVar6;
  return iVar2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_> @ 144391b40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_>
          (ushort param_1,ForElementType<RigApplicationHelpers::FVertexInfo> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<RigApplicationHelpers::FVertexInfo>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_> @ 144391c10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<RigApplicationHelpers::FVertexInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<RigApplicationHelpers::FVertexInfo> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<RigApplicationHelpers::FVertexInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 1443964f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `UE::Impl::UnposeMesh'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FVertexInstanceID FVar8;
  longlong *plVar9;
  longlong lVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  ushort uVar16;
  uint uVar17;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar18;
  TVector<float> *pTVar19;
  TArrayView<int,int> *pTVar20;
  longlong lVar21;
  TMatrix<float> *pTVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_358 [32];
  ulonglong local_338;
  longlong local_330;
  float local_328;
  undefined8 local_320;
  float local_318;
  TAttributeArrayContainer<int> **local_310;
  TAttributeArrayContainer<int> *local_308;
  int local_300;
  undefined4 local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  FVertexInstanceID local_2ec;
  undefined8 local_2e8;
  float local_2e0;
  undefined8 local_2d8;
  float local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  FVertexInstanceID *local_2b8;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  FVertexInstanceID *local_278;
  TArrayView<FVertexInstanceID_const_,int> local_270;
  float local_258 [16];
  TArrayView<int,int> local_218;
  TArrayView<int,int> local_208;
  TArrayView<int,int> local_1f8;
  TArrayView<int,int> local_1e8;
  TArrayView<int,int> local_1d8;
  TArrayView<int,int> local_1c8;
  TArrayView<int,int> local_1b8;
  TArrayView<int,int> local_1a8;
  TMatrix<float> local_198;
  undefined1 local_158 [4];
  float fStack_154;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  float local_118 [2];
  undefined8 uStack_110;
  float local_108 [2];
  ulonglong uStack_100;
  float local_f8 [2];
  ulonglong uStack_f0;
  float local_e8 [2];
  ulonglong uStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_308 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel
                        ((TMeshUnboundedAttributeArraySet<int> *)
                         **(undefined8 **)((longlong)this + 0x20),0);
  local_310 = &local_308;
  local_2fc = local_270._12_4_;
  local_300 = param_1;
  pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,param_1);
  iVar24 = 0;
  local_320 = *(undefined8 *)&pTVar19->field0_0x0;
  local_328 = (pTVar19->field0_0x0)._s_0.Z;
  fStack_154 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_158 = (undefined1  [4])UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_148._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_148._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_138._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_138._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_128._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_128._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uStack_150 = (ulonglong)(uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_148._12_4_ = 0;
  local_148._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_138._12_4_ = 0;
  local_138._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_128._12_4_ = 0;
  local_128._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_218,*(int *)(local_310 + 1));
  if ((pTVar20->ArrayNum < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                          ,0x89,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_208,*(int *)(local_310 + 1));
  iVar5 = pTVar20->ArrayNum;
  if (((iVar5 < 0) ||
      (pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_1f8,*(int *)(local_310 + 1)),
      fVar28 = __real_37800080, pTVar20->ArrayNum < iVar5)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                          ,0x89,L""), fVar28 = __real_37800080, bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  for (; fVar26 = local_328, iVar24 != iVar5; iVar24 = iVar24 + 1) {
    pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_1e8,*(int *)(local_310 + 1));
    plVar9 = *(longlong **)((longlong)this + 0x28);
    uVar6 = pTVar20->DataPtr[iVar24];
    uVar16 = (ushort)(uVar6 >> 0x10);
    iVar7 = (int)plVar9[1];
    if ((iVar7 <= (int)(uint)uVar16) &&
       (local_338 = (ulonglong)uVar16, local_330 = (longlong)iVar7,
       bVar15 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar10 = *plVar9;
    lVar23 = (ulonglong)uVar16 * 0x40;
    lVar21 = 0;
    fVar26 = (float)(uVar6 & 0xffff) * fVar28;
    local_258[0] = fVar26 * *(float *)(lVar23 + lVar10);
    local_258[1] = fVar26 * *(float *)(lVar23 + 4 + lVar10);
    local_258[2] = fVar26 * *(float *)(lVar23 + 8 + lVar10);
    pfVar1 = (float *)(lVar23 + 0x10 + lVar10);
    local_258[3] = fVar26 * *(float *)(lVar23 + 0xc + lVar10);
    pfVar2 = (float *)(lVar23 + 0x20 + lVar10);
    local_258[4] = *pfVar1 * fVar26;
    local_258[5] = pfVar1[1] * fVar26;
    local_258[6] = pfVar1[2] * fVar26;
    local_258[7] = pfVar1[3] * fVar26;
    pfVar1 = (float *)(lVar23 + 0x30 + lVar10);
    local_258[8] = *pfVar2 * fVar26;
    local_258[9] = pfVar2[1] * fVar26;
    local_258[10] = pfVar2[2] * fVar26;
    local_258[0xb] = pfVar2[3] * fVar26;
    local_258[0xc] = *pfVar1 * fVar26;
    local_258[0xd] = pfVar1[1] * fVar26;
    local_258[0xe] = pfVar1[2] * fVar26;
    local_258[0xf] = pfVar1[3] * fVar26;
    do {
      fVar26 = *(float *)((longlong)local_258 + lVar21 + 4);
      fVar12 = *(float *)((longlong)local_258 + lVar21 + 8);
      fVar31 = *(float *)((longlong)local_258 + lVar21 + 0xc);
      fVar32 = *(float *)(local_158 + lVar21 + 4);
      fVar33 = *(float *)(local_158 + lVar21 + 8);
      fVar35 = *(float *)(local_148 + lVar21 + -4);
      *(float *)((longlong)local_118 + lVar21) =
           *(float *)((longlong)local_258 + lVar21) + *(float *)(local_158 + lVar21);
      *(float *)((longlong)local_118 + lVar21 + 4) = fVar26 + fVar32;
      *(float *)((longlong)&uStack_110 + lVar21) = fVar12 + fVar33;
      *(float *)((longlong)&uStack_110 + lVar21 + 4) = fVar31 + fVar35;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 < 0x40);
    local_158 = (undefined1  [4])local_118[0];
    fStack_154 = local_118[1];
    uStack_150 = uStack_110;
    local_148._0_4_ = local_108[0];
    local_148._4_4_ = local_108[1];
    local_148._8_8_ = uStack_100;
    local_138._0_4_ = local_f8[0];
    local_138._4_4_ = local_f8[1];
    local_138._8_8_ = uStack_f0;
    local_128._0_4_ = local_e8[0];
    local_128._4_4_ = local_e8[1];
    local_128._8_8_ = uStack_e0;
  }
  fVar34 = (float)local_320;
  fVar14 = local_320._4_4_;
  fStack_29c = 1.0;
  pTVar22 = UE::Math::TMatrix<float>::Inverse((TMatrix<float> *)local_158,&local_198);
  fVar28 = pTVar22->M[1][0];
  fVar12 = pTVar22->M[1][1];
  fVar31 = pTVar22->M[1][2];
  fVar32 = pTVar22->M[0][0];
  fVar33 = pTVar22->M[0][1];
  fVar35 = pTVar22->M[0][2];
  fVar36 = pTVar22->M[2][0];
  fVar37 = pTVar22->M[2][1];
  fVar13 = pTVar22->M[2][2];
  fVar27 = fStack_29c * pTVar22->M[3][0];
  fVar29 = fStack_29c * pTVar22->M[3][1];
  fVar30 = fStack_29c * pTVar22->M[3][2];
  pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,param_1);
  (pTVar19->field0_0x0)._s_0.X = fVar14 * fVar28 + fVar34 * fVar32 + fVar26 * fVar36 + fVar27;
  (pTVar19->field0_0x0)._s_0.Y = fVar14 * fVar12 + fVar34 * fVar33 + fVar26 * fVar37 + fVar29;
  (pTVar19->field0_0x0)._s_0.Z = fVar14 * fVar31 + fVar34 * fVar35 + fVar26 * fVar13 + fVar30;
  FMeshElementIndexer::Find<FVertexInstanceID>
            ((FMeshElementIndexer *)(*(longlong *)this + 0x100),&local_270,param_1,0);
  local_278 = local_270.DataPtr + local_270.ArrayNum;
  if (local_270.DataPtr != local_278) {
    do {
      FVar8 = *local_270.DataPtr;
      local_2ec = FVar8;
      local_2b8 = local_270.DataPtr;
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x10),0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar18,(int)FVar8);
      local_2e8 = *(undefined8 *)&pTVar19->field0_0x0;
      local_2e0 = (pTVar19->field0_0x0)._s_0.Z;
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x18),0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar18,(int)FVar8);
      iVar24 = 0;
      local_2d8 = *(undefined8 *)&pTVar19->field0_0x0;
      local_2d0 = (pTVar19->field0_0x0)._s_0.Z;
      local_320 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      local_2c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_318 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2c8 = local_320;
      pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_1d8,*(int *)(local_310 + 1));
      if ((pTVar20->ArrayNum < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x89,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_1c8,*(int *)(local_310 + 1));
      iVar5 = pTVar20->ArrayNum;
      if (((iVar5 < 0) ||
          (pTVar20 = TAttributeArrayContainer<int>::Get
                               (*local_310,&local_1b8,*(int *)(local_310 + 1)),
          pTVar20->ArrayNum < iVar5)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x89,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar12 = local_2d0;
      fVar26 = local_2d8._4_4_;
      fVar28 = (float)local_2d8;
      local_2f4 = local_2e8._4_4_;
      local_2f8 = (float)local_2e8;
      local_2f0 = local_2e0;
      fVar31 = local_318;
      fVar32 = local_320._4_4_;
      fVar33 = (float)local_320;
      fVar35 = local_2c0;
      fVar36 = local_2c8._4_4_;
      fVar37 = (float)local_2c8;
      for (; FVar8 = local_2ec, fVar13 = local_2f0, iVar24 != iVar5; iVar24 = iVar24 + 1) {
        pTVar20 = TAttributeArrayContainer<int>::Get(*local_310,&local_1a8,*(int *)(local_310 + 1));
        plVar9 = *(longlong **)((longlong)this + 0x30);
        uVar6 = pTVar20->DataPtr[iVar24];
        uVar17 = uVar6 >> 0x10;
        uVar25 = (ulonglong)uVar17;
        iVar7 = (int)plVar9[1];
        if ((iVar7 <= (int)uVar17) &&
           (local_338 = uVar25, local_330 = (longlong)iVar7,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *plVar9;
        lVar21 = uVar25 * 0x40;
        local_298 = local_2f8;
        fStack_294 = local_2f4;
        uStack_28c = 0;
        pfVar2 = (float *)(lVar21 + 0x10 + lVar10);
        pfVar3 = (float *)(lVar21 + 0x20 + lVar10);
        pfVar1 = (float *)(lVar21 + lVar10);
        pfVar4 = (float *)(lVar21 + 0x30 + lVar10);
        plVar9 = *(longlong **)((longlong)this + 0x28);
        iVar7 = (int)plVar9[1];
        fVar34 = (float)(uVar6 & 0xffff) * __real_37800080;
        fVar35 = fVar35 + (local_2f4 * pfVar2[2] + local_2f8 * pfVar1[2] + fVar13 * pfVar3[2] +
                          pfVar4[2] * 0.0) * fVar34;
        fVar37 = fVar37 + (local_2f4 * *pfVar2 + local_2f8 * *pfVar1 + fVar13 * *pfVar3 +
                          *pfVar4 * 0.0) * fVar34;
        fVar36 = fVar36 + (local_2f4 * pfVar2[1] + local_2f8 * pfVar1[1] + fVar13 * pfVar3[1] +
                          pfVar4[1] * 0.0) * fVar34;
        fStack_290 = fVar13;
        if ((iVar7 <= (int)uVar17) &&
           (local_338 = uVar25, local_330 = (longlong)iVar7,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar15)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar10 = *plVar9;
        uStack_27c = 0;
        pfVar2 = (float *)(lVar21 + 0x10 + lVar10);
        pfVar3 = (float *)(lVar21 + 0x20 + lVar10);
        pfVar1 = (float *)(lVar21 + lVar10);
        pfVar4 = (float *)(lVar21 + 0x30 + lVar10);
        fVar33 = fVar33 + (fVar26 * *pfVar2 + fVar28 * *pfVar1 + fVar12 * *pfVar3 + *pfVar4 * 0.0) *
                          fVar34;
        fVar32 = fVar32 + (fVar26 * pfVar2[1] + fVar28 * pfVar1[1] + fVar12 * pfVar3[1] +
                          pfVar4[1] * 0.0) * fVar34;
        fVar31 = fVar31 + (fVar26 * pfVar2[2] + fVar28 * pfVar1[2] + fVar12 * pfVar3[2] +
                          pfVar4[2] * 0.0) * fVar34;
        local_288 = fVar28;
        fStack_284 = fVar26;
        fStack_280 = fVar12;
      }
      fVar28 = fVar36 * fVar36 + fVar37 * fVar37 + fVar35 * fVar35;
      if (__real_322bcc77 < fVar28) {
        fVar28 = __real_3f800000 / SQRT(fVar28);
        fVar37 = fVar37 * fVar28;
        fVar36 = fVar36 * fVar28;
        fVar35 = fVar35 * fVar28;
      }
      fVar28 = fVar32 * fVar32 + fVar33 * fVar33 + fVar31 * fVar31;
      if (__real_322bcc77 < fVar28) {
        fVar28 = __real_3f800000 / SQRT(fVar28);
        fVar33 = fVar33 * fVar28;
        fVar32 = fVar32 * fVar28;
        fVar31 = fVar31 * fVar28;
      }
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x10),0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar18,(int)FVar8);
      *(ulonglong *)&pTVar19->field0_0x0 = CONCAT44(fVar36,fVar37);
      (pTVar19->field0_0x0)._s_0.Z = fVar35;
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x18),0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar18,(int)FVar8);
      local_270.DataPtr = local_2b8 + 1;
      *(ulonglong *)&pTVar19->field0_0x0 = CONCAT44(fVar32,fVar33);
      (pTVar19->field0_0x0)._s_0.Z = fVar31;
    } while (local_270.DataPtr != local_278);
  }
  return;
}

// operator() @ 144396e90

void __thiscall
`UE::Impl::PoseMesh'::__l20::<lambda_1>::operator()
          (void *this,FMorphProcessContext *param_1,int param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FVertexInstanceID *pFVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar13;
  TVector<float> *pTVar14;
  uint uVar15;
  undefined8 *puVar16;
  FVertexInstanceID *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  FVertexInstanceID local_res8 [2];
  undefined1 local_res18 [16];
  undefined8 local_a8;
  TArrayView<FVertexInstanceID_const_,int> local_98 [6];
  
  pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar13,param_2);
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_38d1b717;
  plVar7 = *(longlong **)((longlong)this + 0x10);
  bVar9 = false;
  lVar18 = plVar7[1];
  puVar16 = (undefined8 *)*plVar7;
  fVar23 = (pTVar14->field0_0x0)._s_0.Z;
  local_a8._4_4_ = (float)((ulonglong)*(undefined8 *)&pTVar14->field0_0x0 >> 0x20);
  local_a8._0_4_ = (float)*(undefined8 *)&pTVar14->field0_0x0;
  puVar1 = puVar16 + (longlong)(int)lVar18 * 3;
  while( true ) {
    if ((int)plVar7[1] != (int)lVar18) {
      `TCheckedPointerIterator<`UE::Impl::PoseMesh'::__l2::FMorphInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (puVar16 == puVar1) break;
    pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar16,0);
    pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar13,param_2);
    fVar22 = *(float *)(puVar16 + 2);
    local_98[0].DataPtr = *(FVertexInstanceID **)&pTVar14->field0_0x0;
    fVar21 = fVar22 * (pTVar14->field0_0x0)._s_0.Z;
    fVar20 = fVar22 * (float)((ulonglong)local_98[0].DataPtr >> 0x20);
    fVar22 = fVar22 * SUB84(local_98[0].DataPtr,0);
    if (((fVar10 < (float)((uint)fVar22 & uVar11)) || (fVar10 < (float)((uint)fVar20 & uVar11))) ||
       (fVar10 < (float)((uint)fVar21 & uVar11))) {
      local_a8._0_4_ = (float)local_a8 + fVar22;
      bVar9 = true;
      local_a8._4_4_ = local_a8._4_4_ + fVar20;
      fVar23 = fVar23 + fVar21;
    }
    puVar16 = puVar16 + 3;
  }
  if (bVar9) {
    pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         **(undefined8 **)((longlong)this + 8),0);
    pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar13,param_2);
    *(undefined8 *)&pTVar14->field0_0x0 = local_a8;
    (pTVar14->field0_0x0)._s_0.Z = fVar23;
    if ((*(char *)((longlong)this + 0x18) == '\0') && (*(char *)((longlong)this + 0x19) == '\0')) {
      FMeshElementIndexer::Find<FVertexInstanceID>
                ((FMeshElementIndexer *)(*(longlong *)this + 0x100),local_98,param_2,0);
      TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::Append
                (&param_1->DirtyVertexInstances,local_98);
      FMeshDescription::GetVertexAdjacentVertices<TSizedDefaultAllocator<32>_>
                (*(FMeshDescription **)this,(FVertexID)param_2,&param_1->Neighbors);
      pFVar19 = (param_1->Neighbors).AllocatorInstance.Data;
      iVar5 = (param_1->Neighbors).ArrayNum;
      pFVar2 = pFVar19 + (longlong)iVar5 * 4;
      while( true ) {
        if ((param_1->Neighbors).ArrayNum != iVar5) {
          `TCheckedPointerIterator<FVertexID,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar19 == pFVar2) break;
        FMeshElementIndexer::Find<FVertexInstanceID>
                  ((FMeshElementIndexer *)(*(longlong *)this + 0x100),local_98,*(int *)pFVar19,0);
        uVar11 = *(int *)&(param_1->DirtyVertexInstances).Elements.field_0x8 -
                 *(int *)&(param_1->DirtyVertexInstances).Elements.field_0x34;
        lVar18 = (longlong)local_98[0].ArrayNum;
        uVar15 = uVar11 + local_98[0].ArrayNum;
        if (uVar11 < uVar15) {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)param_1,uVar15);
          if (uVar15 < 4) {
            iVar12 = 1;
          }
          else {
            uVar4 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
            lVar8 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar12 = 1 << ((byte)lVar8 & 0x1f);
          }
          iVar6 = (param_1->DirtyVertexInstances).HashSize;
          if ((iVar6 == 0) || (iVar6 < iVar12)) {
            (param_1->DirtyVertexInstances).HashSize = iVar12;
            TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
            Rehash(&param_1->DirtyVertexInstances);
          }
        }
        pFVar3 = local_98[0].DataPtr + lVar18;
        for (pFVar17 = local_98[0].DataPtr; pFVar17 != pFVar3; pFVar17 = pFVar17 + 1) {
          TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
          Emplace<FVertexInstanceID_const_&>
                    (&param_1->DirtyVertexInstances,local_res8,(bool *)pFVar17);
        }
        pFVar19 = pFVar19 + 4;
      }
    }
  }
  return;
}

// operator() @ 144397910

void __thiscall
`UE::Impl::PoseMesh'::__l23::<lambda_2>::operator()
          (void *this,FMorphProcessContext *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  float fVar7;
  uint uVar8;
  undefined4 uVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  TMeshAttributeArrayBase<float> *pTVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8 [2];
  FMorphProcessContext *local_res10;
  FVertexInstanceID local_res18 [2];
  float local_108;
  float fStack_104;
  undefined4 local_100;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8 [2];
  TMatrix<float> local_c8 [2];
  
  local_res8[0] = param_2;
  local_res10 = param_1;
  pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,param_2);
  uVar2 = *(undefined8 *)&pTVar11->field0_0x0;
  fVar19 = (pTVar11->field0_0x0)._s_0.Z;
  pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 0x10),0);
  pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,param_2);
  fVar15 = (pTVar11->field0_0x0)._s_0.Z;
  uVar3 = *(undefined8 *)&pTVar11->field0_0x0;
  fVar16 = (float)((ulonglong)uVar3 >> 0x20);
  local_f8._s_0.Z = fVar15;
  pTVar12 = TMeshAttributeArraySet<float>::GetArrayForChannel
                      ((TMeshAttributeArraySet<float> *)**(undefined8 **)((longlong)this + 0x18),0);
  pfVar13 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar12,param_2);
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_38d1b717;
  plVar4 = *(longlong **)this;
  fVar20 = (float)((ulonglong)uVar2 >> 0x20);
  fVar18 = *pfVar13;
  lVar6 = plVar4[1];
  lVar14 = *plVar4;
  bVar5 = false;
  lVar1 = lVar14 + (longlong)(int)lVar6 * 0x18;
  local_108 = (float)uVar2;
  local_e8[0]._0_4_ = (fVar15 * fVar20 - fVar19 * fVar16) * fVar18;
  local_f8._s_0.X = (float)uVar3;
  local_e8[0]._4_4_ = (fVar19 * local_f8._s_0.X - fVar15 * local_108) * fVar18;
  local_e8[0]._8_4_ = (fVar16 * local_108 - local_f8._s_0.X * fVar20) * fVar18;
  fVar18 = local_108;
  _local_108 = uVar2;
  local_f8._0_8_ = uVar3;
  while( true ) {
    if ((int)plVar4[1] != (int)lVar6) {
      `TCheckedPointerIterator<`UE::Impl::PoseMesh'::__l2::FMorphInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (lVar14 == lVar1) break;
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar14 + 8),0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,param_2);
    fVar15 = *(float *)(lVar14 + 0x10);
    fVar17 = fVar15 * (pTVar11->field0_0x0)._s_0.Z;
    fVar16 = fVar15 * (float)((ulonglong)*(undefined8 *)&pTVar11->field0_0x0 >> 0x20);
    fVar15 = fVar15 * (float)*(undefined8 *)&pTVar11->field0_0x0;
    if (((fVar7 < (float)((uint)fVar15 & uVar8)) || (fVar7 < (float)((uint)fVar16 & uVar8))) ||
       (fVar7 < (float)((uint)fVar17 & uVar8))) {
      fVar18 = fVar18 + fVar15;
      bVar5 = true;
      fVar20 = fVar20 + fVar16;
      fVar19 = fVar19 + fVar17;
    }
    lVar14 = lVar14 + 0x18;
  }
  if (bVar5) {
    fVar15 = fVar18 * fVar18 + fVar20 * fVar20 + fVar19 * fVar19;
    if (fVar15 <= __real_322bcc77) {
      if (*(char *)((longlong)this + 0x20) == '\0') {
        TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
        Emplace<FVertexInstanceID_const_&>
                  (&local_res10->DirtyVertexInstances,local_res18,(bool *)local_res8);
      }
    }
    else {
      fVar15 = __real_3f800000 / SQRT(fVar15);
      local_100 = fVar19 * fVar15;
      fStack_104 = fVar20 * fVar15;
      local_108 = fVar18 * fVar15;
      UE::Math::TVector<float>::CreateOrthonormalBasis
                ((TVector<float> *)&local_f8._s_0,(TVector<float> *)&local_e8[0]._s_0,
                 (TVector<float> *)&local_108);
      pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 8),0);
      pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,param_2);
      uVar9 = local_100;
      *(undefined8 *)&pTVar11->field0_0x0 = _local_108;
      (pTVar11->field0_0x0)._s_0.Z = (float)local_100;
      pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x10),0);
      pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,param_2);
      fVar18 = __real_3f800000;
      *(undefined8 *)&pTVar11->field0_0x0 = local_f8._0_8_;
      local_c8[0].M[0][0] = local_f8._s_0.X;
      local_c8[0].M[1][0] = (float)local_e8[0]._0_4_;
      (pTVar11->field0_0x0)._s_0.Z = local_f8._s_0.Z;
      local_c8[0].M[1][2] = (float)local_e8[0]._8_4_;
      local_c8[0].M[0][1] = local_f8._s_0.Y;
      local_c8[0].M[2][1] = fStack_104;
      local_c8[0].M[1][1] = (float)local_e8[0]._4_4_;
      local_c8[0].M[3][0] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      local_c8[0].M[2][0] = local_108;
      local_c8[0].M[0][2] = local_f8._s_0.Z;
      local_c8[0].M[3][2] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_c8[0].M[3][1] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      local_c8[0].M[0][3] = 0.0;
      local_c8[0].M[1][3] = 0.0;
      local_c8[0].M[2][2] = (float)uVar9;
      local_c8[0].M[2][3] = 0.0;
      local_c8[0].M[3][3] = 1.0;
      fVar19 = UE::Math::TMatrix<float>::Determinant(local_c8);
      if (fVar19 < 0.0) {
        fVar18 = __real_bf800000;
      }
      pTVar12 = TMeshAttributeArraySet<float>::GetArrayForChannel
                          ((TMeshAttributeArraySet<float> *)**(undefined8 **)((longlong)this + 0x18)
                           ,0);
      pfVar13 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar12,param_2);
      *pfVar13 = fVar18;
    }
  }
  return;
}

// operator() @ 144397ce0

void __thiscall
`UE::Impl::UnposeMesh'::__l24::<lambda_2>::operator()
          (void *this,FMorphProcessContext *param_1,int param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FVertexInstanceID *pFVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar13;
  TVector<float> *pTVar14;
  uint uVar15;
  undefined8 *puVar16;
  FVertexInstanceID *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  FVertexInstanceID local_res8 [2];
  undefined1 local_res18 [16];
  undefined8 local_b8;
  TArrayView<FVertexInstanceID_const_,int> local_a8 [7];
  
  pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar13,param_2);
  uVar15 = __xmm_80000000800000008000000080000000;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_38d1b717;
  plVar7 = *(longlong **)((longlong)this + 0x10);
  bVar9 = false;
  lVar18 = plVar7[1];
  puVar16 = (undefined8 *)*plVar7;
  fVar23 = (pTVar14->field0_0x0)._s_0.Z;
  local_b8._4_4_ = (float)((ulonglong)*(undefined8 *)&pTVar14->field0_0x0 >> 0x20);
  local_b8._0_4_ = (float)*(undefined8 *)&pTVar14->field0_0x0;
  puVar1 = puVar16 + (longlong)(int)lVar18 * 3;
  while( true ) {
    if ((int)plVar7[1] != (int)lVar18) {
      `TCheckedPointerIterator<`UE::Impl::UnposeMesh'::__l2::FMorphInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (puVar16 == puVar1) break;
    pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar16,0);
    pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar13,param_2);
    fVar22 = *(float *)(puVar16 + 2);
    local_a8[0].DataPtr = *(FVertexInstanceID **)&pTVar14->field0_0x0;
    fVar20 = (float)((uint)(fVar22 * (pTVar14->field0_0x0)._s_0.Z) ^ uVar15);
    fVar21 = (float)((uint)(fVar22 * (float)((ulonglong)local_a8[0].DataPtr >> 0x20)) ^ uVar15);
    fVar22 = (float)((uint)(fVar22 * SUB84(local_a8[0].DataPtr,0)) ^ uVar15);
    if (((fVar10 < (float)((uint)fVar22 & uVar11)) || (fVar10 < (float)((uint)fVar21 & uVar11))) ||
       (fVar10 < (float)((uint)fVar20 & uVar11))) {
      local_b8._0_4_ = (float)local_b8 + fVar22;
      bVar9 = true;
      local_b8._4_4_ = local_b8._4_4_ + fVar21;
      fVar23 = fVar23 + fVar20;
    }
    puVar16 = puVar16 + 3;
  }
  if (bVar9) {
    pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         **(undefined8 **)((longlong)this + 8),0);
    pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar13,param_2);
    *(undefined8 *)&pTVar14->field0_0x0 = local_b8;
    (pTVar14->field0_0x0)._s_0.Z = fVar23;
    if (*(char *)((longlong)this + 0x18) == '\0') {
      FMeshElementIndexer::Find<FVertexInstanceID>
                ((FMeshElementIndexer *)(*(longlong *)this + 0x100),local_a8,param_2,0);
      TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::Append
                (&param_1->DirtyVertexInstances,local_a8);
      FMeshDescription::GetVertexAdjacentVertices<TSizedDefaultAllocator<32>_>
                (*(FMeshDescription **)this,(FVertexID)param_2,&param_1->Neighbors);
      pFVar19 = (param_1->Neighbors).AllocatorInstance.Data;
      iVar5 = (param_1->Neighbors).ArrayNum;
      pFVar2 = pFVar19 + (longlong)iVar5 * 4;
      while( true ) {
        if ((param_1->Neighbors).ArrayNum != iVar5) {
          `TCheckedPointerIterator<FVertexID,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar19 == pFVar2) break;
        FMeshElementIndexer::Find<FVertexInstanceID>
                  ((FMeshElementIndexer *)(*(longlong *)this + 0x100),local_a8,*(int *)pFVar19,0);
        uVar11 = *(int *)&(param_1->DirtyVertexInstances).Elements.field_0x8 -
                 *(int *)&(param_1->DirtyVertexInstances).Elements.field_0x34;
        lVar18 = (longlong)local_a8[0].ArrayNum;
        uVar15 = uVar11 + local_a8[0].ArrayNum;
        if (uVar11 < uVar15) {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)param_1,uVar15);
          if (uVar15 < 4) {
            iVar12 = 1;
          }
          else {
            uVar4 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
            lVar8 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar12 = 1 << ((byte)lVar8 & 0x1f);
          }
          iVar6 = (param_1->DirtyVertexInstances).HashSize;
          if ((iVar6 == 0) || (iVar6 < iVar12)) {
            (param_1->DirtyVertexInstances).HashSize = iVar12;
            TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
            Rehash(&param_1->DirtyVertexInstances);
          }
        }
        pFVar3 = local_a8[0].DataPtr + lVar18;
        for (pFVar17 = local_a8[0].DataPtr; pFVar17 != pFVar3; pFVar17 = pFVar17 + 1) {
          TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
          Emplace<FVertexInstanceID_const_&>
                    (&param_1->DirtyVertexInstances,local_res8,(bool *)pFVar17);
        }
        pFVar19 = pFVar19 + 4;
      }
    }
  }
  return;
}

// operator() @ 144398270

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall `UE::Impl::PoseMesh'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  FVertexInstanceID FVar9;
  float fVar10;
  longlong *plVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 uVar14;
  bool bVar15;
  ushort uVar16;
  uint uVar17;
  TAttributeArrayContainer<int> *this_00;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar18;
  TVector<float> *pTVar19;
  TArrayView<int,int> *pTVar20;
  longlong lVar21;
  int iVar22;
  FVertexInstanceID *pFVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 local_228;
  float local_218;
  float fStack_214;
  float local_1e8;
  float fStack_1e4;
  float local_1d8;
  float fStack_1d4;
  float local_1c8;
  float fStack_1c4;
  TArrayView<FVertexInstanceID_const_,int> local_178;
  TArrayView<int,int> local_168;
  TArrayView<int,int> local_158;
  TArrayView<int,int> local_148;
  TArrayView<int,int> local_138;
  TArrayView<int,int> local_128;
  TArrayView<int,int> local_118;
  TArrayView<int,int> local_108;
  TArrayView<int,int> local_f8 [11];
  
  this_00 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel
                      ((TMeshUnboundedAttributeArraySet<int> *)
                       **(undefined8 **)((longlong)this + 0x20),0);
  pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,param_1);
  uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  iVar22 = 0;
  uVar5 = *(undefined8 *)&pTVar19->field0_0x0;
  fVar25 = (pTVar19->field0_0x0)._s_0.Z;
  local_228 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_168,param_1);
  if ((pTVar20->ArrayNum < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                          ,0x89,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_158,param_1);
  iVar7 = pTVar20->ArrayNum;
  if (((iVar7 < 0) ||
      (pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_148,param_1),
      pTVar20->ArrayNum < iVar7)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                          ,0x89,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  fVar10 = __real_37800080;
  fStack_214 = (float)((ulonglong)uVar5 >> 0x20);
  local_218 = (float)uVar5;
  local_228._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  local_228._0_4_ = (float)uVar6;
  fVar27 = local_228._4_4_;
  fVar28 = (float)local_228;
  local_228 = uVar6;
  for (; iVar22 != iVar7; iVar22 = iVar22 + 1) {
    pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_138,param_1);
    plVar11 = *(longlong **)((longlong)this + 0x28);
    uVar8 = pTVar20->DataPtr[iVar22];
    uVar16 = (ushort)(uVar8 >> 0x10);
    if (((int)plVar11[1] <= (int)(uint)uVar16) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    lVar12 = *plVar11;
    lVar21 = (ulonglong)uVar16 * 0x40;
    pfVar2 = (float *)(lVar21 + 0x10 + lVar12);
    pfVar1 = (float *)(lVar21 + lVar12);
    pfVar3 = (float *)(lVar21 + 0x20 + lVar12);
    pfVar4 = (float *)(lVar21 + 0x30 + lVar12);
    fVar24 = (float)(uVar8 & 0xffff) * fVar10;
    fVar28 = fVar28 + fVar24 * (fStack_214 * *pfVar2 + local_218 * *pfVar1 + fVar25 * *pfVar3 +
                               *pfVar4 * 1.0);
    uVar26 = (float)uVar26 +
             fVar24 * (fStack_214 * pfVar2[2] + local_218 * pfVar1[2] + fVar25 * pfVar3[2] +
                      pfVar4[2] * 1.0);
    fVar27 = fVar27 + fVar24 * (fStack_214 * pfVar2[1] + local_218 * pfVar1[1] + fVar25 * pfVar3[1]
                               + pfVar4[1] * 1.0);
    local_228 = CONCAT44(fVar27,fVar28);
  }
  pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,param_1);
  *(undefined8 *)&pTVar19->field0_0x0 = local_228;
  (pTVar19->field0_0x0)._s_0.Z = (float)uVar26;
  FMeshElementIndexer::Find<FVertexInstanceID>
            ((FMeshElementIndexer *)(*(longlong *)this + 0x100),&local_178,param_1,0);
  pFVar23 = local_178.DataPtr;
  do {
    if (pFVar23 == local_178.DataPtr + local_178.ArrayNum) {
      return;
    }
    FVar9 = *pFVar23;
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         **(undefined8 **)((longlong)this + 0x10),0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar9)
    ;
    uVar5 = *(undefined8 *)&pTVar19->field0_0x0;
    fVar25 = (pTVar19->field0_0x0)._s_0.Z;
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         **(undefined8 **)((longlong)this + 0x18),0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar9)
    ;
    uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    iVar22 = 0;
    uVar6 = *(undefined8 *)&pTVar19->field0_0x0;
    fVar10 = (pTVar19->field0_0x0)._s_0.Z;
    pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_128,param_1);
    if ((pTVar20->ArrayNum < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                            ,0x89,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_118,param_1);
    iVar7 = pTVar20->ArrayNum;
    if (((iVar7 < 0) ||
        (pTVar20 = TAttributeArrayContainer<int>::Get(this_00,&local_108,param_1),
        pTVar20->ArrayNum < iVar7)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                            ,0x89,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    fStack_1e4 = (float)((ulonglong)uVar5 >> 0x20);
    fStack_1d4 = (float)((ulonglong)uVar6 >> 0x20);
    local_1d8 = (float)uVar6;
    fStack_1c4 = (float)((ulonglong)uVar14 >> 0x20);
    local_1c8 = (float)uVar14;
    local_1e8 = (float)uVar5;
    uVar29 = uVar26;
    fVar27 = fStack_1c4;
    fVar28 = local_1c8;
    for (; iVar22 != iVar7; iVar22 = iVar22 + 1) {
      pTVar20 = TAttributeArrayContainer<int>::Get(this_00,local_f8,param_1);
      plVar11 = *(longlong **)((longlong)this + 0x30);
      uVar8 = pTVar20->DataPtr[iVar22];
      uVar17 = uVar8 >> 0x10;
      if (((int)plVar11[1] <= (int)uVar17) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar12 = *plVar11;
      lVar21 = (ulonglong)uVar17 * 0x40;
      pfVar2 = (float *)(lVar12 + 0x10 + lVar21);
      pfVar3 = (float *)(lVar12 + 0x20 + lVar21);
      pfVar1 = (float *)(lVar12 + lVar21);
      pfVar4 = (float *)(lVar12 + 0x30 + lVar21);
      plVar11 = *(longlong **)((longlong)this + 0x28);
      fVar24 = (float)(uVar8 & 0xffff) * __real_37800080;
      uVar29 = (float)uVar29 +
               (fStack_1e4 * pfVar2[2] + local_1e8 * pfVar1[2] + fVar25 * pfVar3[2] +
               pfVar4[2] * 0.0) * fVar24;
      fVar28 = fVar28 + (fStack_1e4 * *pfVar2 + local_1e8 * *pfVar1 + fVar25 * *pfVar3 +
                        *pfVar4 * 0.0) * fVar24;
      fVar27 = fVar27 + (fStack_1e4 * pfVar2[1] + local_1e8 * pfVar1[1] + fVar25 * pfVar3[1] +
                        pfVar4[1] * 0.0) * fVar24;
      if (((int)plVar11[1] <= (int)uVar17) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar12 = *plVar11;
      pfVar2 = (float *)(lVar12 + 0x10 + lVar21);
      pfVar3 = (float *)(lVar12 + 0x20 + lVar21);
      pfVar1 = (float *)(lVar12 + lVar21);
      pfVar4 = (float *)(lVar12 + 0x30 + lVar21);
      local_1c8 = local_1c8 +
                  (fStack_1d4 * *pfVar2 + local_1d8 * *pfVar1 + fVar10 * *pfVar3 + *pfVar4 * 0.0) *
                  fVar24;
      fStack_1c4 = fStack_1c4 +
                   (fStack_1d4 * pfVar2[1] + local_1d8 * pfVar1[1] + fVar10 * pfVar3[1] +
                   pfVar4[1] * 0.0) * fVar24;
      uVar26 = (float)uVar26 +
               (fStack_1d4 * pfVar2[2] + local_1d8 * pfVar1[2] + fVar10 * pfVar3[2] +
               pfVar4[2] * 0.0) * fVar24;
    }
    fVar25 = fVar27 * fVar27 + fVar28 * fVar28 + (float)uVar29 * (float)uVar29;
    if (__real_322bcc77 < fVar25) {
      fVar25 = __real_3f800000 / SQRT(fVar25);
      fVar28 = fVar28 * fVar25;
      fVar27 = fVar27 * fVar25;
      uVar29 = (float)uVar29 * fVar25;
    }
    fVar25 = fStack_1c4 * fStack_1c4 + local_1c8 * local_1c8 + (float)uVar26 * (float)uVar26;
    if (__real_322bcc77 < fVar25) {
      fVar25 = __real_3f800000 / SQRT(fVar25);
      local_1c8 = local_1c8 * fVar25;
      fStack_1c4 = fStack_1c4 * fVar25;
      uVar26 = (float)uVar26 * fVar25;
    }
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         **(undefined8 **)((longlong)this + 0x10),0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar9)
    ;
    *(ulonglong *)&pTVar19->field0_0x0 = CONCAT44(fVar27,fVar28);
    (pTVar19->field0_0x0)._s_0.Z = (float)uVar29;
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         **(undefined8 **)((longlong)this + 0x18),0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar9)
    ;
    pFVar23 = pFVar23 + 1;
    *(ulonglong *)&pTVar19->field0_0x0 = CONCAT44(fStack_1c4,local_1c8);
    (pTVar19->field0_0x0)._s_0.Z = (float)uVar26;
  } while( true );
}

// operator() @ 144398ad0

void __thiscall
`UE::Impl::UnposeMesh'::__l27::<lambda_3>::operator()
          (void *this,FMorphProcessContext *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar11;
  TVector<float> *pTVar12;
  TMeshAttributeArrayBase<float> *pTVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res8 [2];
  FMorphProcessContext *local_res10;
  FVertexInstanceID local_res18 [2];
  float local_118;
  float fStack_114;
  undefined4 local_110;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8 [2];
  TMatrix<float> local_d8 [2];
  
  local_res8[0] = param_2;
  local_res10 = param_1;
  pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 8),0);
  pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,param_2);
  uVar2 = *(undefined8 *)&pTVar12->field0_0x0;
  fVar20 = (pTVar12->field0_0x0)._s_0.Z;
  pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       **(undefined8 **)((longlong)this + 0x10),0);
  pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,param_2);
  fVar18 = (pTVar12->field0_0x0)._s_0.Z;
  uVar3 = *(undefined8 *)&pTVar12->field0_0x0;
  fVar16 = (float)((ulonglong)uVar3 >> 0x20);
  local_108._s_0.Z = fVar18;
  pTVar13 = TMeshAttributeArraySet<float>::GetArrayForChannel
                      ((TMeshAttributeArraySet<float> *)**(undefined8 **)((longlong)this + 0x18),0);
  pfVar14 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar13,param_2);
  uVar9 = __xmm_80000000800000008000000080000000;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_38d1b717;
  plVar4 = *(longlong **)this;
  fVar21 = (float)((ulonglong)uVar2 >> 0x20);
  fVar19 = *pfVar14;
  lVar6 = plVar4[1];
  lVar15 = *plVar4;
  local_118 = (float)uVar2;
  lVar1 = lVar15 + (longlong)(int)lVar6 * 0x18;
  bVar5 = false;
  local_108._s_0.X = (float)uVar3;
  local_f8[0]._0_4_ = (fVar18 * fVar21 - fVar20 * fVar16) * fVar19;
  local_f8[0]._4_4_ = (fVar20 * local_108._s_0.X - fVar18 * local_118) * fVar19;
  local_f8[0]._8_4_ = (local_118 * fVar16 - fVar21 * local_108._s_0.X) * fVar19;
  fVar19 = local_118;
  _local_118 = uVar2;
  local_108._0_8_ = uVar3;
  while( true ) {
    if ((int)plVar4[1] != (int)lVar6) {
      `TCheckedPointerIterator<`UE::Impl::UnposeMesh'::__l2::FMorphInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (lVar15 == lVar1) break;
    pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar15 + 8),0);
    pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,param_2);
    fVar18 = *(float *)(lVar15 + 0x10);
    fVar16 = (float)((uint)(fVar18 * (pTVar12->field0_0x0)._s_0.Z) ^ uVar9);
    fVar17 = (float)((uint)(fVar18 * (float)((ulonglong)*(undefined8 *)&pTVar12->field0_0x0 >> 0x20)
                           ) ^ uVar9);
    fVar18 = (float)((uint)(fVar18 * (float)*(undefined8 *)&pTVar12->field0_0x0) ^ uVar9);
    if (((fVar7 < (float)((uint)fVar18 & uVar8)) || (fVar7 < (float)((uint)fVar17 & uVar8))) ||
       (fVar7 < (float)((uint)fVar16 & uVar8))) {
      fVar19 = fVar19 + fVar18;
      bVar5 = true;
      fVar21 = fVar21 + fVar17;
      fVar20 = fVar20 + fVar16;
    }
    lVar15 = lVar15 + 0x18;
  }
  if (bVar5) {
    fVar18 = fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20;
    if (fVar18 <= __real_322bcc77) {
      TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
      Emplace<FVertexInstanceID_const_&>
                (&local_res10->DirtyVertexInstances,local_res18,(bool *)local_res8);
    }
    else {
      fVar18 = __real_3f800000 / SQRT(fVar18);
      local_110 = fVar20 * fVar18;
      fStack_114 = fVar21 * fVar18;
      local_118 = fVar19 * fVar18;
      UE::Math::TVector<float>::CreateOrthonormalBasis
                ((TVector<float> *)&local_108._s_0,(TVector<float> *)&local_f8[0]._s_0,
                 (TVector<float> *)&local_118);
      pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 8),0);
      pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,param_2);
      uVar10 = local_110;
      *(undefined8 *)&pTVar12->field0_0x0 = _local_118;
      (pTVar12->field0_0x0)._s_0.Z = (float)local_110;
      pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x10),0);
      pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,param_2);
      fVar19 = __real_3f800000;
      *(undefined8 *)&pTVar12->field0_0x0 = local_108._0_8_;
      local_d8[0].M[0][0] = local_108._s_0.X;
      local_d8[0].M[1][0] = (float)local_f8[0]._0_4_;
      (pTVar12->field0_0x0)._s_0.Z = local_108._s_0.Z;
      local_d8[0].M[1][2] = (float)local_f8[0]._8_4_;
      local_d8[0].M[0][1] = local_108._s_0.Y;
      local_d8[0].M[2][1] = fStack_114;
      local_d8[0].M[1][1] = (float)local_f8[0]._4_4_;
      local_d8[0].M[3][0] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      local_d8[0].M[2][0] = local_118;
      local_d8[0].M[0][2] = local_108._s_0.Z;
      local_d8[0].M[3][2] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_d8[0].M[3][1] = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      local_d8[0].M[0][3] = 0.0;
      local_d8[0].M[1][3] = 0.0;
      local_d8[0].M[2][2] = (float)uVar10;
      local_d8[0].M[2][3] = 0.0;
      local_d8[0].M[3][3] = 1.0;
      fVar20 = UE::Math::TMatrix<float>::Determinant(local_d8);
      if (fVar20 < 0.0) {
        fVar19 = __real_bf800000;
      }
      pTVar13 = TMeshAttributeArraySet<float>::GetArrayForChannel
                          ((TMeshAttributeArraySet<float> *)**(undefined8 **)((longlong)this + 0x18)
                           ,0);
      pfVar14 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar13,param_2);
      *pfVar14 = fVar19;
    }
  }
  return;
}

// PoseMesh @ 1443aa890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Impl::PoseMesh(FMeshDescription *param_1,
                  TArrayView<UE::Math::TMatrix<float>_const_,int> *param_2,FName param_3,
                  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *param_4,bool param_5)

{
  undefined1 *puVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  FMeshDescription *pFVar7;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar8;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar9;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  atomic<unsigned_int> aVar16;
  FMeshElementContainer *pFVar17;
  FAttributesSetEntry *pFVar18;
  FName FVar19;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar20;
  byte bVar21;
  longlong lVar22;
  ulonglong uVar23;
  char cVar24;
  int iVar25;
  atomic<unsigned_int> aVar26;
  ForAnyElementType FVar27;
  TMatrix<float> *pTVar28;
  atomic<unsigned_int> aVar29;
  FMorphProcessContext *pFVar30;
  TMatrix<float> *pTVar31;
  uint uVar32;
  undefined1 *puVar34;
  uint *puVar35;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar36;
  char cVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStackY_678 [32];
  <lambda_1> local_628;
  char local_627;
  ForAnyElementType local_620;
  undefined8 local_618;
  undefined1 local_610;
  undefined1 local_60f [7];
  undefined1 local_608 [16];
  ForAnyElementType local_5f8;
  int local_5f0;
  int iStack_5ec;
  FMeshDescription *local_5e8;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_5e0;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> local_5d8;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_5d0;
  FMeshAttributeArraySetBase *local_5c8;
  FMeshAttributeArraySetBase *pFStack_5c0;
  uint local_5b8;
  undefined4 uStack_5b4;
  <lambda_2> local_5a8;
  int iStack_580;
  undefined4 uStack_57c;
  int local_578;
  int local_574;
  int local_570;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_568;
  FName local_560;
  TMeshAttributesRef<FVertexInstanceID,float> local_558;
  FName local_550;
  FName local_548;
  FName local_540;
  FMeshAttributeArraySetBase *local_538;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *local_530;
  int local_528;
  longlong *local_520;
  int iStack_518;
  uint uStack_514;
  TBitArray<FDefaultBitArrayAllocator> *local_510;
  undefined4 uStack_508;
  uint uStack_504;
  int local_500;
  undefined4 uStack_4fc;
  int iStack_4f8;
  undefined4 uStack_4f4;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_4f0;
  undefined1 auStack_4e8 [20];
  uint uStack_4d4;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  longlong *local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b8;
  undefined8 uStack_498;
  FMeshDescription *local_490;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *pTStack_488;
  TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
  *local_480;
  char cStack_478;
  bool bStack_477;
  undefined6 uStack_476;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_470;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *pTStack_468;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_460;
  TMeshAttributesRef<FVertexInstanceID,float> *pTStack_458;
  bool local_450;
  undefined7 uStack_44f;
  TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>
  local_448;
  TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>
  local_438;
  TArrayView<std::nullptr_t,int> local_428;
  code *local_418;
  FMeshDescription **local_410;
  FMeshDescription *local_408;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *local_400;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_3f8;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_3f0;
  FMeshAttributeArraySetBase **local_3e8;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *local_3e0;
  ForAnyElementType *local_3d8;
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  <lambda_1> local_378;
  FSkeletalMeshAttributes local_358;
  undefined4 local_304;
  undefined4 local_2e4;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [32];
  uint *local_278;
  uint local_270;
  undefined4 local_26c;
  undefined4 local_268;
  int local_264;
  ForElementType<FSetElementId> local_258;
  int local_250;
  TMatrix<float> local_248;
  FElementIDRemappings local_208;
  ulonglong local_78;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar33;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_5e8 = param_1;
  local_568 = param_4;
  local_560 = param_3;
  local_530 = param_2;
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_358,param_1);
  bVar12 = FMeshDescription::NeedsCompact(param_1);
  if (bVar12) {
    FElementIDRemappings::FElementIDRemappings(&local_208);
    FMeshDescription::Compact(param_1,&local_208);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewPolygonGroupIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewPolygonIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewUVIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewTriangleIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewEdgeIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewVertexInstanceIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewVertexIndexLookup);
  }
  else {
    FMeshElementIndexer::Build(&param_1->VertexToVertexInstances);
    FMeshElementIndexer::Build(&param_1->VertexToEdges);
  }
  pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x50),0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::Vertex::Position);
  lVar22 = local_358._padding_;
  pTVar33 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_5d8.ArrayPtr = (pFVar18->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d8.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d8.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_5d8.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar33;
  }
  pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x58),0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_5e0.ArrayPtr = (pFVar18->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5e0.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5e0.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_5e0.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar33;
  }
  pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar22 + 0x58),0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_5d0.ArrayPtr = (pFVar18->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d0.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d0.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_5d0.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar33;
  }
  pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar22 + 0x58),0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
      (local_558.ArrayPtr = (pFVar18->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_558.ArrayPtr)->_padding_
      != 3)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_558.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_558.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar33;
  }
  puVar1 = &param_4->field_0x10;
  local_608._0_8_ = (FScriptContainerElement *)0x0;
  local_608._8_8_ = 0;
  uVar14 = 1;
  uVar38 = *(uint *)&param_4->field_0x28;
  local_5a8._32_4_ = 0;
  uVar15 = local_5a8._32_4_;
  if (uVar38 != 0) {
    puVar35 = *(uint **)&param_4->field_0x20;
    if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
      puVar35 = (uint *)puVar1;
    }
    uVar15 = *puVar35;
    pTVar36 = pTVar33;
    local_5a8._32_4_ = 0;
    while (uVar15 == 0) {
      iVar25 = (int)pTVar33;
      local_5a8._32_4_ = (int)pTVar36 + 0x20;
      pTVar36 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                (ulonglong)(uint)local_5a8._32_4_;
      uVar32 = iVar25 + 1;
      pTVar33 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)uVar32;
      uVar15 = uVar38;
      if ((int)((uVar38 - 1) + ((int)(uVar38 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
      goto LAB_1443aaafd;
      uVar15 = puVar35[(longlong)iVar25 + 1];
    }
    uVar14 = -uVar15 & uVar15;
    uVar23 = (ulonglong)uVar14 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_528 = (int)lVar22;
    uVar15 = (local_5a8._32_4_ - 1) + local_528;
    if ((int)uVar38 < (int)uVar15) {
      uVar15 = uVar38;
    }
  }
LAB_1443aaafd:
  uVar32 = *(uint *)&param_4->field_0x28;
  iStack_580 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  uVar39 = uVar32 & 0xffffffe0;
  local_5a8.NormalAttribute =
       (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *)
       CONCAT44(uVar14,(int)pTVar33);
  local_5a8.BinormalSignsAttribute =
       (TMeshAttributesRef<FVertexInstanceID,float> *)CONCAT44(uVar15,0xffffffff);
  local_5a8._36_4_ = local_304;
  auStack_4e8._0_8_ = local_5a8.NormalAttribute;
  iVar25 = (int)uVar32 >> 5;
  uStack_4c8 = CONCAT44(uStack_57c,iStack_580);
  stack0xfffffffffffffb28 = local_5a8.BinormalSignsAttribute;
  local_4d0 = local_5a8._32_8_;
  local_5a8.MorphInfos =
       (TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
        *)param_4;
  local_5a8.TangentAttribute =
       (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *)puVar1;
  local_4f0 = param_4;
  auStack_4e8._8_8_ = puVar1;
  if ((((int)uVar32 < 0) || ((int)uVar38 < (int)uVar32)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = local_568;
  uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  uVar38 = *(uint *)&param_4->field_0x28;
  if (uVar32 != uVar38) {
    puVar34 = *(undefined1 **)&param_4->field_0x20;
    if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
      puVar34 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar25 * 4);
    while (uVar14 == 0) {
      lVar22 = (longlong)iVar25;
      uVar39 = uVar39 + 0x20;
      iVar25 = iVar25 + 1;
      uVar32 = uVar38;
      if ((int)((uVar38 - 1) + ((int)(uVar38 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_1443aac0f;
      uVar14 = *(uint *)(puVar34 + lVar22 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_570 = (int)lVar22;
    uVar32 = local_570 + -1 + uVar39;
    if ((int)uVar38 < (int)uVar32) {
      uVar32 = uVar38;
    }
  }
LAB_1443aac0f:
  cVar37 = '\x01';
  while( true ) {
    pTVar10 = local_4f0;
    if (*(int *)&local_4f0->field_0x8 - *(int *)&local_4f0->field_0x34 != (int)uStack_4c8) {
      local_610 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_610);
    }
    lVar22 = local_358._padding_;
    if (((uStack_4d4 == uVar32) && ((undefined1 *)auStack_4e8._8_8_ == puVar1)) &&
       (pTVar10 == pTVar8)) break;
    uVar38 = *(uint *)(*(longlong *)pTVar10 + 8 + (longlong)(int)uStack_4d4 * 0x14);
    pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x50),0);
    FVar19 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_3d0);
    pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar17->Attributes,*(FName *)FVar19);
    if ((((pFVar18 != (FAttributesSetEntry *)0x0) &&
         (pFVar2 = (pFVar18->Ptr).Ptr, pFVar2->Type == 1)) && (pFVar2->Extent == 1)) &&
       ((pFVar2 != (FMeshAttributeArraySetBase *)0x0 && (fVar4 < (float)(uVar38 & uVar15))))) {
      pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar22 + 0x58),0);
      FVar19 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_3c0);
      pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar17->Attributes,*(FName *)FVar19);
      if ((pFVar18 == (FAttributesSetEntry *)0x0) ||
         ((pFStack_5c0 = (pFVar18->Ptr).Ptr, pFStack_5c0->Type != 1 || (pFStack_5c0->Extent != 1))))
      {
        pFStack_5c0 = (FMeshAttributeArraySetBase *)0x0;
      }
      cVar24 = '\0';
      if (pFStack_5c0 != (FMeshAttributeArraySetBase *)0x0) {
        cVar24 = cVar37;
      }
      local_5c8 = pFVar2;
      local_5b8 = uVar38;
      if ((((ulonglong)local_608._0_8_ <= (FScriptContainerElement *)&local_5c8) &&
          ((FScriptContainerElement *)&local_5c8 <
           (FScriptContainerElement *)(local_608._0_8_ + (longlong)(int)local_608._12_4_ * 0x18)))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar25 = local_608._8_4_;
      if (local_608._8_4_ == local_608._12_4_) {
        iVar25 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)local_608,(int *)(local_608 + 0xc));
      }
      local_608._8_4_ = iVar25 + 1;
      *(FMeshAttributeArraySetBase **)(local_608._0_8_ + (longlong)iVar25 * 0x18) = local_5c8;
      *(FMeshAttributeArraySetBase **)
       ((FScriptContainerElement *)(local_608._0_8_ + (longlong)iVar25 * 0x18) + 8) = pFStack_5c0;
      *(ulonglong *)(local_608._0_8_ + (longlong)iVar25 * 0x18 + 0x10) =
           CONCAT44(uStack_5b4,local_5b8);
      cVar37 = cVar24;
    }
    stack0xfffffffffffffb28 =
         (TMeshAttributesRef<FVertexInstanceID,float> *)
         CONCAT44(uStack_4d4,auStack_4e8._16_4_ & ~auStack_4e8._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4e8);
  }
  local_627 = cVar37;
  if (local_608._8_4_ == 0) goto LAB_1443ab61e;
  pTStack_488 = &local_5d8;
  local_480 = (TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
               *)local_608;
  local_490 = local_5e8;
  local_620.Data = (FScriptContainerElement *)0x0;
  local_618 = 0;
  bStack_477 = param_5;
  cStack_478 = cVar37;
  pFVar17 = FMeshElementChannels::Get(local_5e8->VertexElements,0);
  aVar29 = (atomic<unsigned_int>)((pFVar17->BitArray).NumBits - pFVar17->NumHoles);
  if (0 < (int)aVar29) {
    bVar12 = FApp::ShouldUseThreadingForPerformance();
    if (bVar12) {
LAB_1443aaeaf:
      bVar12 = true;
    }
    else {
      bVar13 = FForkProcessHelper::IsForkedMultithreadInstance();
      bVar12 = false;
      if (bVar13) goto LAB_1443aaeaf;
    }
    aVar16 = (atomic<unsigned_int>)0x0;
    if (((1 < (int)aVar29) && (bVar12)) &&
       (aVar16 = aVar29, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar29)) {
      aVar16 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
    }
    bVar12 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                       ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
    aVar26 = (atomic<unsigned_int>)((int)aVar16 + 1);
    if (bVar12) {
      aVar26 = aVar16;
    }
    aVar16 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
    if ((int)aVar26 < (int)aVar16) {
      aVar16 = aVar26;
    }
    aVar26 = (atomic<unsigned_int>)0x1;
    if (1 < (int)aVar16) {
      aVar26 = aVar16;
    }
    if ((longlong)local_618 < 0) {
      DestructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
                ((FMorphProcessContext *)local_620.Data,(int)local_618);
      if (local_618._4_4_ != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,&local_620,0,(int *)((longlong)&local_618 + 4));
      }
    }
    else {
      DestructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
                ((FMorphProcessContext *)local_620.Data,(int)local_618);
    }
    iVar25 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,8,(int)aVar26,&local_620,(int *)&local_618,
                        (int *)((longlong)&local_618 + 4));
    DefaultConstructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
              (local_620.Data + (longlong)iVar25 * 0x60,(int)aVar26);
    local_448.ArrayNum = (int)local_618;
    local_448.DataPtr = (FMorphProcessContext *)local_620.Data;
    if (((int)local_618 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_378.bInSkipRecomputeNormalsTangents = bStack_477;
    local_378.bAllMorphNormalsValid = (bool)cStack_478;
    local_378._26_6_ = uStack_476;
    local_378.Mesh = local_490;
    local_378.PositionAttribute = pTStack_488;
    local_378.MorphInfos = local_480;
    ParallelForImpl::
    ParallelForInternal<_UE::Impl::PoseMesh_::__l20::<lambda_1>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l20::<lambda_1>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>
              (L"ParallelFor Task",(int)aVar29,1,&local_378,local_628,None,&local_448);
  }
  pFVar7 = local_5e8;
  if (cVar37 != '\0') {
    local_470 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)local_608;
    pTStack_468 = &local_5e0;
    local_450 = param_5;
    local_460 = &local_5d0;
    pTStack_458 = &local_558;
    pFVar17 = FMeshElementChannels::Get(local_5e8->VertexInstanceElements,0);
    aVar29 = (atomic<unsigned_int>)((pFVar17->BitArray).NumBits - pFVar17->NumHoles);
    if (0 < (int)aVar29) {
      bVar12 = FApp::ShouldUseThreadingForPerformance();
      if (bVar12) {
LAB_1443ab04e:
        bVar12 = true;
      }
      else {
        bVar13 = FForkProcessHelper::IsForkedMultithreadInstance();
        bVar12 = false;
        if (bVar13) goto LAB_1443ab04e;
      }
      aVar16 = (atomic<unsigned_int>)0x0;
      if (((1 < (int)aVar29) && (bVar12)) &&
         (aVar16 = aVar29, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar29)) {
        aVar16 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      }
      bVar12 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                         ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
      aVar26 = (atomic<unsigned_int>)((int)aVar16 + 1);
      if (bVar12) {
        aVar26 = aVar16;
      }
      aVar16 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if ((int)aVar26 < (int)aVar16) {
        aVar16 = aVar26;
      }
      aVar26 = (atomic<unsigned_int>)0x1;
      if (1 < (int)aVar16) {
        aVar26 = aVar16;
      }
      if ((longlong)local_618 < 0) {
        DestructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
                  ((FMorphProcessContext *)local_620.Data,(int)local_618);
        uVar23 = local_618 >> 0x20;
        local_618 = local_618 & 0xffffffff00000000;
        if ((int)uVar23 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,0,&local_620,0,(int *)((longlong)&local_618 + 4));
        }
      }
      else {
        DestructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
                  ((FMorphProcessContext *)local_620.Data,(int)local_618);
        local_618 = local_618 & 0xffffffff00000000;
      }
      iVar25 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,8,(int)aVar26,&local_620,(int *)&local_618,
                          (int *)((longlong)&local_618 + 4));
      DefaultConstructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
                (local_620.Data + (longlong)iVar25 * 0x60,(int)aVar26);
      local_438.ArrayNum = (int)local_618;
      local_438.DataPtr = (FMorphProcessContext *)local_620.Data;
      if (((int)local_618 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_5a8.MorphInfos =
           (TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
            *)local_470;
      local_5a8.NormalAttribute = pTStack_468;
      local_5a8._33_7_ = uStack_44f;
      local_5a8.bInSkipRecomputeNormalsTangents = local_450;
      local_5a8.TangentAttribute = local_460;
      local_5a8.BinormalSignsAttribute = pTStack_458;
      ParallelForImpl::
      ParallelForInternal<_UE::Impl::PoseMesh_::__l23::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l23::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>
                (L"ParallelFor Task",(int)aVar29,1,&local_5a8,(<lambda_1>)local_628,None,&local_438)
      ;
    }
  }
  if (!param_5) {
    iVar25 = (int)local_618;
    uVar23 = (ulonglong)(int)local_618;
    local_298._0_8_ = 0;
    local_278 = (uint *)0x0;
    local_270 = 0;
    local_264 = 0;
    pFVar30 = (FMorphProcessContext *)(local_620.Data + uVar23 * 0x60);
    local_258 = (ForElementType<FSetElementId>)0x0;
    local_250 = 0;
    local_298._8_8_ = 0;
    local_26c = 0x80;
    local_268 = 0xffffffff;
    FVar27.Data = local_620.Data;
    while( true ) {
      if ((int)uVar23 != iVar25) {
        local_60f[0] = 0;
        `TCheckedPointerIterator<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_60f);
      }
      uVar38 = local_270;
      if ((FMorphProcessContext *)FVar27.Data == pFVar30) break;
      TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                ((TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>
                  *)local_298,
                 (TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>
                  *)FVar27.Data);
      uVar23 = local_618 & 0xffffffff;
      FVar27.Data = FVar27.Data + 0x60;
    }
    if (local_298._8_4_ != local_264) {
      iStack_518 = 0;
      local_500 = 0;
      uStack_514 = 1;
      uStack_504 = 0;
      if (local_270 != 0) {
        puVar35 = (uint *)(local_298 + 0x10);
        if (local_278 != (uint *)0x0) {
          puVar35 = local_278;
        }
        uVar14 = *puVar35;
        while (uVar14 == 0) {
          lVar22 = (longlong)iStack_518;
          local_500 = local_500 + 0x20;
          iStack_518 = iStack_518 + 1;
          uStack_504 = local_270;
          if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_518)
          goto LAB_1443ab340;
          uVar14 = puVar35[lVar22 + 1];
        }
        uStack_514 = -uVar14 & uVar14;
        uVar23 = (ulonglong)uStack_514 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_578 = (int)lVar22;
        uStack_504 = local_500 + -1 + local_578;
        if ((int)local_270 < (int)uStack_504) {
          uStack_504 = local_270;
        }
      }
LAB_1443ab340:
      iStack_4f8 = local_298._8_4_ - local_264;
      local_520 = (longlong *)local_298;
      local_510 = (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10);
      uVar14 = local_270 & 0xffffffe0;
      uStack_508 = 0xffffffff;
      TStack_4b8.CurrentBitIndex = uStack_504;
      TStack_4b8.UnvisitedBitMask = 0xffffffff;
      TStack_4b8._padding_ = CONCAT44(uStack_514,iStack_518);
      uStack_4fc = local_2e4;
      iVar25 = (int)local_270 >> 5;
      TStack_4b8._28_4_ = local_2e4;
      TStack_4b8.BaseBitIndex = local_500;
      uStack_498 = CONCAT44(uStack_4f4,iStack_4f8);
      bVar21 = (byte)local_270;
      local_4c0 = local_520;
      TStack_4b8.Array = local_510;
      if (((int)local_270 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar38 != local_270) {
        puVar35 = (uint *)(local_298 + 0x10);
        if (local_278 != (uint *)0x0) {
          puVar35 = local_278;
        }
        uVar38 = -1 << (bVar21 & 0x1f) & puVar35[iVar25];
        while (uVar38 == 0) {
          lVar22 = (longlong)iVar25;
          uVar14 = uVar14 + 0x20;
          iVar25 = iVar25 + 1;
          uVar38 = local_270;
          if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_1443ab455;
          uVar38 = puVar35[lVar22 + 1];
        }
        uVar23 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_574 = (int)lVar22;
        uVar38 = (uVar14 - 1) + local_574;
        if ((int)local_270 < (int)uVar38) {
          uVar38 = local_270;
        }
      }
LAB_1443ab455:
      while( true ) {
        plVar11 = local_4c0;
        if ((int)local_4c0[1] - *(int *)((longlong)local_4c0 + 0x34) != (int)uStack_498) {
          local_628 = (<lambda_1>)0x0;
          `TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_628);
        }
        uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        if (((TStack_4b8.CurrentBitIndex == uVar38) &&
            (TStack_4b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10))) &&
           (plVar11 == (longlong *)local_298)) break;
        iVar25 = *(int *)(*plVar11 + (longlong)TStack_4b8.CurrentBitIndex * 0xc);
        this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                         ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5e0.ArrayPtr,0)
        ;
        pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this,iVar25);
        *(undefined8 *)&pTVar20->field0_0x0 = uVar5;
        (pTVar20->field0_0x0)._s_0.Z = (float)uVar6;
        TStack_4b8.UnvisitedBitMask = TStack_4b8.UnvisitedBitMask & ~TStack_4b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b8);
      }
      FStaticMeshOperations::ComputeTriangleTangentsAndNormals(pFVar7,fVar4,(wchar_t *)0x0);
      FStaticMeshOperations::ComputeTangentsAndNormals(pFVar7,WeightedNTBs);
      pFVar17 = FMeshElementChannels::Get(pFVar7->TriangleElements,0);
      FVar19 = MeshAttribute::Triangle::Normal;
      local_550 = MeshAttribute::Triangle::Normal;
      if (*(int *)&(pFVar17->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar17->Attributes).Map.field_0x34) {
        uVar38 = ::GetTypeHash(MeshAttribute::Triangle::Normal.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)&pFVar17->Attributes,FVar19.Number + uVar38,&local_550);
      }
      pFVar17 = FMeshElementChannels::Get(pFVar7->TriangleElements,0);
      FVar19 = MeshAttribute::Triangle::Tangent;
      local_548 = MeshAttribute::Triangle::Tangent;
      if (*(int *)&(pFVar17->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar17->Attributes).Map.field_0x34) {
        uVar38 = ::GetTypeHash(MeshAttribute::Triangle::Tangent.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)&pFVar17->Attributes,FVar19.Number + uVar38,&local_548);
      }
      pFVar17 = FMeshElementChannels::Get(pFVar7->TriangleElements,0);
      FVar19 = MeshAttribute::Triangle::Binormal;
      local_540 = MeshAttribute::Triangle::Binormal;
      if (*(int *)&(pFVar17->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar17->Attributes).Map.field_0x34) {
        uVar38 = ::GetTypeHash(MeshAttribute::Triangle::Binormal.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)&pFVar17->Attributes,FVar19.Number + uVar38,&local_540);
      }
    }
    local_250 = 0;
    if (local_258 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_258);
    }
    TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_298);
  }
  DestructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
            ((FMorphProcessContext *)local_620.Data,(int)local_618);
  if ((FMorphProcessContext *)local_620.Data != (FMorphProcessContext *)0x0) {
    FMemory::Free(local_620.Data);
  }
LAB_1443ab61e:
  pTVar9 = local_530;
  uVar38 = local_530->ArrayNum;
  local_5f8.Data = (FScriptContainerElement *)0x0;
  local_5f0 = 0;
  iStack_5ec = 0;
  if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
  }
  if (0 < (int)uVar38) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar38,&local_5f8,0,&iStack_5ec);
  }
  pTVar28 = pTVar9->DataPtr;
  pTVar31 = pTVar28 + pTVar9->ArrayNum;
  fVar40 = UE::Math::TMatrix<float>::Identity.M[0][0];
  fVar41 = UE::Math::TMatrix<float>::Identity.M[0][1];
  fVar42 = UE::Math::TMatrix<float>::Identity.M[0][2];
  fVar43 = UE::Math::TMatrix<float>::Identity.M[0][3];
  fVar44 = UE::Math::TMatrix<float>::Identity.M[1][0];
  fVar45 = UE::Math::TMatrix<float>::Identity.M[1][1];
  fVar46 = UE::Math::TMatrix<float>::Identity.M[1][2];
  fVar47 = UE::Math::TMatrix<float>::Identity.M[1][3];
  fVar48 = UE::Math::TMatrix<float>::Identity.M[2][0];
  fVar49 = UE::Math::TMatrix<float>::Identity.M[2][1];
  fVar50 = UE::Math::TMatrix<float>::Identity.M[2][2];
  fVar51 = UE::Math::TMatrix<float>::Identity.M[2][3];
  fVar52 = UE::Math::TMatrix<float>::Identity.M[3][0];
  fVar53 = UE::Math::TMatrix<float>::Identity.M[3][1];
  fVar54 = UE::Math::TMatrix<float>::Identity.M[3][2];
  fVar55 = UE::Math::TMatrix<float>::Identity.M[3][3];
  do {
    UE::Math::TMatrix<float>::Identity.M[0][0] = fVar40;
    UE::Math::TMatrix<float>::Identity.M[0][1] = fVar41;
    UE::Math::TMatrix<float>::Identity.M[0][2] = fVar42;
    UE::Math::TMatrix<float>::Identity.M[0][3] = fVar43;
    UE::Math::TMatrix<float>::Identity.M[1][0] = fVar44;
    UE::Math::TMatrix<float>::Identity.M[1][1] = fVar45;
    UE::Math::TMatrix<float>::Identity.M[1][2] = fVar46;
    UE::Math::TMatrix<float>::Identity.M[1][3] = fVar47;
    UE::Math::TMatrix<float>::Identity.M[2][0] = fVar48;
    UE::Math::TMatrix<float>::Identity.M[2][1] = fVar49;
    UE::Math::TMatrix<float>::Identity.M[2][2] = fVar50;
    UE::Math::TMatrix<float>::Identity.M[2][3] = fVar51;
    UE::Math::TMatrix<float>::Identity.M[3][0] = fVar52;
    UE::Math::TMatrix<float>::Identity.M[3][1] = fVar53;
    UE::Math::TMatrix<float>::Identity.M[3][2] = fVar54;
    UE::Math::TMatrix<float>::Identity.M[3][3] = fVar55;
    if (pTVar28 == pTVar31) {
      pFVar17 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x50),0);
      FVar19 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_3c8);
      pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar17->Attributes,*(FName *)FVar19);
      if (((pFVar18 == (FAttributesSetEntry *)0x0) ||
          (local_538 = (pFVar18->Ptr).Ptr, local_538->Type != 4)) || (local_538->Extent != 0)) {
        local_538 = (FMeshAttributeArraySetBase *)0x0;
      }
      local_400 = &local_5d8;
      local_3f8 = &local_5e0;
      local_3f0 = &local_5d0;
      local_3e8 = &local_538;
      local_3d8 = &local_5f8;
      local_408 = local_5e8;
      local_3e0 = pTVar9;
      pFVar17 = FMeshElementChannels::Get(local_5e8->VertexElements,0);
      local_428.DataPtr = (void **)0x0;
      local_418 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Impl::PoseMesh'::__l2::<lambda_3>,void,int>::Call;
      local_410 = &local_408;
      local_428.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(pFVar17->BitArray).NumBits - pFVar17->NumHoles,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_418,(<lambda_1>)local_628,None,&local_428
                );
      if (local_5f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data);
      }
      if ((FScriptContainerElement *)local_608._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_608._0_8_);
      }
      return;
    }
    if (((fVar4 < (float)((uint)pTVar28->M[0][0] & uVar15)) ||
        (fVar4 < (float)((uint)pTVar28->M[0][1] & uVar15))) ||
       (fVar4 < (float)((uint)pTVar28->M[0][2] & uVar15))) {
LAB_1443ab72f:
      FMath::MatrixInverse(&local_248,pTVar28);
      fVar40 = local_248.M[0][0];
      fVar41 = local_248.M[0][1];
      fVar42 = local_248.M[0][2];
      fVar43 = local_248.M[0][3];
      fVar44 = local_248.M[1][0];
      fVar45 = local_248.M[1][1];
      fVar46 = local_248.M[1][2];
      fVar47 = local_248.M[1][3];
      fVar48 = local_248.M[2][0];
      fVar49 = local_248.M[2][1];
      fVar50 = local_248.M[2][2];
      fVar51 = local_248.M[2][3];
      fVar52 = local_248.M[3][0];
      fVar53 = local_248.M[3][1];
      fVar54 = local_248.M[3][2];
      fVar55 = local_248.M[3][3];
    }
    else {
      if (((fVar4 < (float)((uint)pTVar28->M[1][0] & uVar15)) ||
          (fVar4 < (float)((uint)pTVar28->M[1][1] & uVar15))) ||
         (fVar4 < (float)((uint)pTVar28->M[1][2] & uVar15))) goto LAB_1443ab72f;
      if (((fVar4 < (float)((uint)pTVar28->M[2][0] & uVar15)) ||
          (fVar4 < (float)((uint)pTVar28->M[2][1] & uVar15))) ||
         (fVar4 < (float)((uint)pTVar28->M[2][2] & uVar15))) goto LAB_1443ab72f;
    }
    local_3b8 = fVar40;
    fStack_3b4 = fVar41;
    fStack_3b0 = fVar42;
    fStack_3ac = fVar43;
    local_3a8 = fVar44;
    fStack_3a4 = fVar45;
    fStack_3a0 = fVar46;
    fStack_39c = fVar47;
    local_398 = fVar48;
    fStack_394 = fVar49;
    fStack_390 = fVar50;
    fStack_38c = fVar51;
    local_388 = fVar52;
    fStack_384 = fVar53;
    fStack_380 = fVar54;
    fStack_37c = fVar55;
    local_2d8 = fVar40;
    fStack_2d4 = fVar44;
    fStack_2d0 = fVar48;
    fStack_2cc = fVar52;
    local_2c8 = fVar41;
    fStack_2c4 = fVar45;
    fStack_2c0 = fVar49;
    fStack_2bc = fVar53;
    local_2b8 = fVar42;
    fStack_2b4 = fVar46;
    fStack_2b0 = fVar50;
    fStack_2ac = fVar54;
    local_2a8 = fVar43;
    fStack_2a4 = fVar47;
    fStack_2a0 = fVar51;
    fStack_29c = fVar55;
    if (((local_5f8.Data <= (FScriptContainerElement *)&local_2d8) &&
        ((FScriptContainerElement *)&local_2d8 < local_5f8.Data + (longlong)iStack_5ec * 0x40)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_5f0 == iStack_5ec) {
      local_5f0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1040,&local_5f8,&iStack_5ec);
    }
    pTVar28 = pTVar28 + 1;
    lVar22 = (longlong)local_5f0 * 0x40;
    local_5f0 = local_5f0 + 1;
    *(ulonglong *)(local_5f8.Data + lVar22) = CONCAT44(fStack_2d4,local_2d8);
    *(ulonglong *)(local_5f8.Data + lVar22 + 8) = CONCAT44(fStack_2cc,fStack_2d0);
    *(ulonglong *)(local_5f8.Data + lVar22 + 0x10) = CONCAT44(fStack_2c4,local_2c8);
    *(ulonglong *)(local_5f8.Data + lVar22 + 0x10 + 8) = CONCAT44(fStack_2bc,fStack_2c0);
    *(ulonglong *)(local_5f8.Data + lVar22 + 0x20) = CONCAT44(fStack_2b4,local_2b8);
    *(ulonglong *)(local_5f8.Data + lVar22 + 0x20 + 8) = CONCAT44(fStack_2ac,fStack_2b0);
    *(ulonglong *)(local_5f8.Data + lVar22 + 0x30) = CONCAT44(fStack_2a4,local_2a8);
    *(ulonglong *)(local_5f8.Data + lVar22 + 0x30 + 8) = CONCAT44(fStack_29c,fStack_2a0);
    fVar40 = UE::Math::TMatrix<float>::Identity.M[0][0];
    fVar41 = UE::Math::TMatrix<float>::Identity.M[0][1];
    fVar42 = UE::Math::TMatrix<float>::Identity.M[0][2];
    fVar43 = UE::Math::TMatrix<float>::Identity.M[0][3];
    fVar44 = UE::Math::TMatrix<float>::Identity.M[1][0];
    fVar45 = UE::Math::TMatrix<float>::Identity.M[1][1];
    fVar46 = UE::Math::TMatrix<float>::Identity.M[1][2];
    fVar47 = UE::Math::TMatrix<float>::Identity.M[1][3];
    fVar48 = UE::Math::TMatrix<float>::Identity.M[2][0];
    fVar49 = UE::Math::TMatrix<float>::Identity.M[2][1];
    fVar50 = UE::Math::TMatrix<float>::Identity.M[2][2];
    fVar51 = UE::Math::TMatrix<float>::Identity.M[2][3];
    fVar52 = UE::Math::TMatrix<float>::Identity.M[3][0];
    fVar53 = UE::Math::TMatrix<float>::Identity.M[3][1];
    fVar54 = UE::Math::TMatrix<float>::Identity.M[3][2];
    fVar55 = UE::Math::TMatrix<float>::Identity.M[3][3];
  } while( true );
}

// UnposeMesh @ 1443afb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Impl::UnposeMesh
          (FMeshDescription *param_1,FMeshDescription *param_2,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *param_3,FName param_4,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_5)

{
  undefined1 *puVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  float fVar4;
  undefined4 uVar5;
  FMeshDescription *pFVar6;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar7;
  bool bVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  atomic<unsigned_int> aVar11;
  FMeshElementContainer *pFVar12;
  FAttributesSetEntry *pFVar13;
  FName FVar14;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar15;
  byte bVar16;
  ulonglong uVar17;
  char cVar18;
  longlong lVar19;
  int iVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  atomic<unsigned_int> aVar23;
  uint uVar24;
  TMatrix<float> *pTVar25;
  FMorphProcessContext *pFVar26;
  uint uVar27;
  undefined1 *puVar29;
  uint *puVar30;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar31;
  atomic<unsigned_int> aVar32;
  undefined8 uVar33;
  TMatrix<float> *pTVar34;
  char cVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStackY_668 [32];
  <lambda_1> local_618;
  char local_617;
  ForAnyElementType local_610;
  undefined8 local_608;
  undefined1 local_600 [8];
  ForAnyElementType local_5f8;
  int local_5f0;
  int iStack_5ec;
  TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
  local_5e8;
  undefined1 local_5d8 [8];
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_5d0;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_5c8;
  int iStack_5c0;
  atomic<unsigned_int> aStack_5bc;
  TBitArray<FDefaultBitArrayAllocator> *local_5b8;
  undefined4 uStack_5b0;
  uint uStack_5ac;
  uint local_5a8;
  undefined4 uStack_5a4;
  int iStack_5a0;
  undefined4 uStack_59c;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_598;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> local_590;
  undefined8 local_588;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> local_580;
  FMeshAttributeArraySetBase *pFStack_578;
  uint local_570;
  undefined4 uStack_56c;
  int local_568;
  int local_564;
  int local_560;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_558;
  FMeshDescription *local_550;
  TMeshAttributesRef<FVertexInstanceID,float> local_548;
  FName local_540;
  FName local_538;
  FName local_530;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined8 uStack_500;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4f0;
  undefined8 uStack_4d0;
  TArrayView<std::nullptr_t,int> local_4c8;
  code *local_4b8;
  FMeshDescription **local_4b0;
  TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>
  local_4a8;
  TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>
  local_498;
  FMeshDescription *local_488;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *pTStack_480;
  TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
  *local_478;
  bool bStack_470;
  undefined7 uStack_46f;
  TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_2_::FMorphInfo,TSizedDefaultAllocator<32>_>
  *local_468;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *pTStack_460;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_458;
  TMeshAttributesRef<FVertexInstanceID,float> *pTStack_450;
  FMeshDescription *local_448;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> *local_440;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_438;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *local_430;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> **local_428;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *local_420;
  ForAnyElementType *local_418;
  undefined1 local_410 [8];
  undefined1 local_408 [8];
  FMeshDescription *local_400;
  FSkeletalMeshAttributesShared local_3f8;
  undefined1 local_3e0 [8];
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  <lambda_2> local_398;
  <lambda_3> local_378;
  FSkeletalMeshAttributes local_358;
  undefined4 local_304;
  undefined4 local_2e4;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [32];
  uint *local_278;
  uint local_270;
  undefined4 local_26c;
  undefined4 local_268;
  int local_264;
  ForElementType<FSetElementId> local_258;
  int local_250;
  TMatrix<float> local_248;
  FElementIDRemappings local_208;
  ulonglong local_78;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar28;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_550 = param_1;
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_358,param_1);
  local_400 = param_2;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_3f8,param_2);
  bVar8 = FMeshDescription::NeedsCompact(param_1);
  if (bVar8) {
    FElementIDRemappings::FElementIDRemappings(&local_208);
    FMeshDescription::Compact(param_1,&local_208);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewPolygonGroupIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewPolygonIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewUVIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewTriangleIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewEdgeIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewVertexInstanceIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_208.NewVertexIndexLookup);
  }
  else {
    FMeshElementIndexer::Build(&param_1->VertexToVertexInstances);
    FMeshElementIndexer::Build(&param_1->VertexToEdges);
  }
  lVar19 = local_358._padding_;
  pFVar12 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x50),0);
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar12->Attributes,MeshAttribute::Vertex::Position);
  pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (local_590.ArrayPtr = (pFVar13->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_590.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_590.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_590.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar28;
  }
  pFVar12 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar19 + 0x58),0);
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar12->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (local_5d0.ArrayPtr = (pFVar13->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d0.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d0.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_5d0.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar28;
  }
  pFVar12 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar19 + 0x58),0);
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar12->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (local_598.ArrayPtr = (pFVar13->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_598.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_598.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_598.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar28;
  }
  pFVar12 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar19 + 0x58),0);
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar12->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (local_548.ArrayPtr = (pFVar13->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_548.ArrayPtr)->_padding_
      != 3)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_548.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_548.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar28;
  }
  uVar36 = param_3->ArrayNum;
  local_5f8.Data = (FScriptContainerElement *)0x0;
  local_5f0 = 0;
  iStack_5ec = 0;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  if (0 < (int)uVar36) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar36,&local_5f8,0,&iStack_5ec);
  }
  uVar36 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_322bcc77;
  pTVar25 = param_3->DataPtr;
  pTVar34 = pTVar25 + param_3->ArrayNum;
  fVar37 = UE::Math::TMatrix<float>::Identity.M[0][0];
  fVar38 = UE::Math::TMatrix<float>::Identity.M[0][1];
  fVar39 = UE::Math::TMatrix<float>::Identity.M[0][2];
  fVar40 = UE::Math::TMatrix<float>::Identity.M[0][3];
  fVar41 = UE::Math::TMatrix<float>::Identity.M[1][0];
  fVar42 = UE::Math::TMatrix<float>::Identity.M[1][1];
  fVar43 = UE::Math::TMatrix<float>::Identity.M[1][2];
  fVar44 = UE::Math::TMatrix<float>::Identity.M[1][3];
  fVar45 = UE::Math::TMatrix<float>::Identity.M[2][0];
  fVar46 = UE::Math::TMatrix<float>::Identity.M[2][1];
  fVar47 = UE::Math::TMatrix<float>::Identity.M[2][2];
  fVar48 = UE::Math::TMatrix<float>::Identity.M[2][3];
  fVar49 = UE::Math::TMatrix<float>::Identity.M[3][0];
  fVar50 = UE::Math::TMatrix<float>::Identity.M[3][1];
  fVar51 = UE::Math::TMatrix<float>::Identity.M[3][2];
  fVar52 = UE::Math::TMatrix<float>::Identity.M[3][3];
  for (; UE::Math::TMatrix<float>::Identity.M[0][0] = fVar37,
      UE::Math::TMatrix<float>::Identity.M[0][1] = fVar38,
      UE::Math::TMatrix<float>::Identity.M[0][2] = fVar39,
      UE::Math::TMatrix<float>::Identity.M[0][3] = fVar40,
      UE::Math::TMatrix<float>::Identity.M[1][0] = fVar41,
      UE::Math::TMatrix<float>::Identity.M[1][1] = fVar42,
      UE::Math::TMatrix<float>::Identity.M[1][2] = fVar43,
      UE::Math::TMatrix<float>::Identity.M[1][3] = fVar44,
      UE::Math::TMatrix<float>::Identity.M[2][0] = fVar45,
      UE::Math::TMatrix<float>::Identity.M[2][1] = fVar46,
      UE::Math::TMatrix<float>::Identity.M[2][2] = fVar47,
      UE::Math::TMatrix<float>::Identity.M[2][3] = fVar48,
      UE::Math::TMatrix<float>::Identity.M[3][0] = fVar49,
      UE::Math::TMatrix<float>::Identity.M[3][1] = fVar50,
      UE::Math::TMatrix<float>::Identity.M[3][2] = fVar51,
      UE::Math::TMatrix<float>::Identity.M[3][3] = fVar52, pTVar25 != pTVar34; pTVar25 = pTVar25 + 1
      ) {
    if (((fVar4 < (float)((uint)pTVar25->M[0][0] & uVar36)) ||
        (fVar4 < (float)((uint)pTVar25->M[0][1] & uVar36))) ||
       (fVar4 < (float)((uint)pTVar25->M[0][2] & uVar36))) {
LAB_1443afe22:
      FMath::MatrixInverse(&local_248,pTVar25);
      fVar37 = local_248.M[0][0];
      fVar38 = local_248.M[0][1];
      fVar39 = local_248.M[0][2];
      fVar40 = local_248.M[0][3];
      fVar41 = local_248.M[1][0];
      fVar42 = local_248.M[1][1];
      fVar43 = local_248.M[1][2];
      fVar44 = local_248.M[1][3];
      fVar45 = local_248.M[2][0];
      fVar46 = local_248.M[2][1];
      fVar47 = local_248.M[2][2];
      fVar48 = local_248.M[2][3];
      fVar49 = local_248.M[3][0];
      fVar50 = local_248.M[3][1];
      fVar51 = local_248.M[3][2];
      fVar52 = local_248.M[3][3];
    }
    else {
      if (((fVar4 < (float)((uint)pTVar25->M[1][0] & uVar36)) ||
          (fVar4 < (float)((uint)pTVar25->M[1][1] & uVar36))) ||
         (fVar4 < (float)((uint)pTVar25->M[1][2] & uVar36))) goto LAB_1443afe22;
      if (((fVar4 < (float)((uint)pTVar25->M[2][0] & uVar36)) ||
          (fVar4 < (float)((uint)pTVar25->M[2][1] & uVar36))) ||
         (fVar4 < (float)((uint)pTVar25->M[2][2] & uVar36))) goto LAB_1443afe22;
    }
    local_3d8 = fVar37;
    fStack_3d4 = fVar38;
    fStack_3d0 = fVar39;
    fStack_3cc = fVar40;
    local_3c8 = fVar41;
    fStack_3c4 = fVar42;
    fStack_3c0 = fVar43;
    fStack_3bc = fVar44;
    local_3b8 = fVar45;
    fStack_3b4 = fVar46;
    fStack_3b0 = fVar47;
    fStack_3ac = fVar48;
    local_3a8 = fVar49;
    fStack_3a4 = fVar50;
    fStack_3a0 = fVar51;
    fStack_39c = fVar52;
    local_2d8 = fVar37;
    fStack_2d4 = fVar41;
    fStack_2d0 = fVar45;
    fStack_2cc = fVar49;
    local_2c8 = fVar38;
    fStack_2c4 = fVar42;
    fStack_2c0 = fVar46;
    fStack_2bc = fVar50;
    local_2b8 = fVar39;
    fStack_2b4 = fVar43;
    fStack_2b0 = fVar47;
    fStack_2ac = fVar51;
    local_2a8 = fVar40;
    fStack_2a4 = fVar44;
    fStack_2a0 = fVar48;
    fStack_29c = fVar52;
    if (((local_5f8.Data <= (FScriptContainerElement *)&local_2d8) &&
        ((FScriptContainerElement *)&local_2d8 < local_5f8.Data + (longlong)iStack_5ec * 0x40)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_5f0 == iStack_5ec) {
      local_5f0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1040,&local_5f8,&iStack_5ec);
    }
    lVar19 = (longlong)local_5f0 * 0x40;
    local_5f0 = local_5f0 + 1;
    *(ulonglong *)(local_5f8.Data + lVar19) = CONCAT44(fStack_2d4,local_2d8);
    *(ulonglong *)(local_5f8.Data + lVar19 + 8) = CONCAT44(fStack_2cc,fStack_2d0);
    *(ulonglong *)(local_5f8.Data + lVar19 + 0x10) = CONCAT44(fStack_2c4,local_2c8);
    *(ulonglong *)(local_5f8.Data + lVar19 + 0x10 + 8) = CONCAT44(fStack_2bc,fStack_2c0);
    *(ulonglong *)(local_5f8.Data + lVar19 + 0x20) = CONCAT44(fStack_2b4,local_2b8);
    *(ulonglong *)(local_5f8.Data + lVar19 + 0x20 + 8) = CONCAT44(fStack_2ac,fStack_2b0);
    *(ulonglong *)(local_5f8.Data + lVar19 + 0x30) = CONCAT44(fStack_2a4,local_2a8);
    *(ulonglong *)(local_5f8.Data + lVar19 + 0x30 + 8) = CONCAT44(fStack_29c,fStack_2a0);
    fVar37 = UE::Math::TMatrix<float>::Identity.M[0][0];
    fVar38 = UE::Math::TMatrix<float>::Identity.M[0][1];
    fVar39 = UE::Math::TMatrix<float>::Identity.M[0][2];
    fVar40 = UE::Math::TMatrix<float>::Identity.M[0][3];
    fVar41 = UE::Math::TMatrix<float>::Identity.M[1][0];
    fVar42 = UE::Math::TMatrix<float>::Identity.M[1][1];
    fVar43 = UE::Math::TMatrix<float>::Identity.M[1][2];
    fVar44 = UE::Math::TMatrix<float>::Identity.M[1][3];
    fVar45 = UE::Math::TMatrix<float>::Identity.M[2][0];
    fVar46 = UE::Math::TMatrix<float>::Identity.M[2][1];
    fVar47 = UE::Math::TMatrix<float>::Identity.M[2][2];
    fVar48 = UE::Math::TMatrix<float>::Identity.M[2][3];
    fVar49 = UE::Math::TMatrix<float>::Identity.M[3][0];
    fVar50 = UE::Math::TMatrix<float>::Identity.M[3][1];
    fVar51 = UE::Math::TMatrix<float>::Identity.M[3][2];
    fVar52 = UE::Math::TMatrix<float>::Identity.M[3][3];
    lVar19 = local_358._padding_;
  }
  pFVar12 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar19 + 0x50),0);
  FVar14 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_408);
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar12->Attributes,*(FName *)FVar14);
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (local_558 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar13->Ptr).Ptr,
      *(uint *)&local_558->_padding_ != 4)) || (*(uint *)((longlong)&local_558->_padding_ + 4) != 0)
     ) {
    local_558 = pTVar28;
  }
  local_440 = &local_590;
  local_438 = &local_5d0;
  local_430 = &local_598;
  local_428 = &local_558;
  local_418 = &local_5f8;
  local_448 = param_1;
  local_420 = param_3;
  pFVar12 = FMeshElementChannels::Get(param_1->VertexElements,0);
  local_4c8.DataPtr = (void **)0x0;
  local_4b8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Impl::UnposeMesh'::__l2::<lambda_1>,void,int>::Call;
  local_4b0 = &local_448;
  local_4c8.ArrayNum = 0;
  local_588 = 1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(pFVar12->BitArray).NumBits - pFVar12->NumHoles,1,
             (TFunctionRef<void___cdecl(int)> *)&local_4b8,local_618,None,&local_4c8);
  puVar1 = &param_5->field_0x10;
  local_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e8.ArrayNum = 0;
  local_5e8.ArrayMax = 0;
  uVar24 = *(uint *)&param_5->field_0x28;
  local_5a8 = 0;
  uStack_5ac = 0;
  aStack_5bc = (atomic<unsigned_int>)0x1;
  if (uVar24 != 0) {
    puVar30 = *(uint **)&param_5->field_0x20;
    if (*(uint **)&param_5->field_0x20 == (uint *)0x0) {
      puVar30 = (uint *)puVar1;
    }
    uVar27 = *puVar30;
    pTVar31 = pTVar28;
    local_5a8 = 0;
    while (uVar27 == 0) {
      iVar20 = (int)pTVar28;
      local_5a8 = (int)pTVar31 + 0x20;
      pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)local_5a8;
      uVar27 = iVar20 + 1;
      pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)uVar27;
      uStack_5ac = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
      goto LAB_1443b01ad;
      uVar27 = puVar30[(longlong)iVar20 + 1];
    }
    aStack_5bc = (atomic<unsigned_int>)(-uVar27 & uVar27);
    uVar17 = (ulonglong)(uint)aStack_5bc * 2 + 1;
    lVar19 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_568 = (int)lVar19;
    uStack_5ac = (local_5a8 - 1) + local_568;
    if ((int)uVar24 < (int)uStack_5ac) {
      uStack_5ac = uVar24;
    }
  }
LAB_1443b01ad:
  uVar27 = *(uint *)&param_5->field_0x28;
  uStack_5a4 = local_304;
  iStack_5a0 = *(int *)&param_5->field_0x8 - *(int *)&param_5->field_0x34;
  local_5c8 = param_5;
  uVar22 = uVar27 & 0xffffffe0;
  iStack_5c0 = (int)pTVar28;
  TStack_520._padding_ = CONCAT44(aStack_5bc,iStack_5c0);
  uStack_5b0 = 0xffffffff;
  TStack_520.CurrentBitIndex = uStack_5ac;
  TStack_520.UnvisitedBitMask = 0xffffffff;
  local_528 = param_5;
  iVar20 = (int)uVar27 >> 5;
  TStack_520._28_4_ = local_304;
  TStack_520.BaseBitIndex = local_5a8;
  uStack_500 = CONCAT44(uStack_59c,iStack_5a0);
  local_5b8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_520.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar27 < 0) || ((int)uVar24 < (int)uVar27)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar24 = *(uint *)&param_5->field_0x28;
  if (uVar27 != uVar24) {
    puVar29 = *(undefined1 **)&param_5->field_0x20;
    if (*(undefined1 **)&param_5->field_0x20 == (undefined1 *)0x0) {
      puVar29 = puVar1;
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar20 * 4);
    while (uVar27 == 0) {
      lVar19 = (longlong)iVar20;
      uVar22 = uVar22 + 0x20;
      iVar20 = iVar20 + 1;
      uVar27 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_1443b02ad;
      uVar27 = *(uint *)(puVar29 + lVar19 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_560 = (int)lVar19;
    uVar27 = local_560 + -1 + uVar22;
    if ((int)uVar24 < (int)uVar27) {
      uVar27 = uVar24;
    }
  }
LAB_1443b02ad:
  cVar35 = '\x01';
  while( true ) {
    pTVar7 = local_528;
    if (*(int *)&local_528->field_0x8 - *(int *)&local_528->field_0x34 != (int)uStack_500) {
      local_600[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_600);
    }
    pFVar6 = local_550;
    if (((TStack_520.CurrentBitIndex == uVar27) &&
        (TStack_520.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_5)
       ) break;
    uVar24 = *(uint *)(*(longlong *)pTVar7 + 8 + (longlong)TStack_520.CurrentBitIndex * 0x14);
    pFVar12 = FMeshElementChannels::Get((local_3f8.MeshDescriptionShared)->VertexElements,0);
    FVar14 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_410);
    pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar12->Attributes,*(FName *)FVar14);
    if (((pFVar13 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar13->Ptr).Ptr, pFVar2->Type == 1)
        ) && ((pFVar2->Extent == 1 &&
              ((pFVar2 != (FMeshAttributeArraySetBase *)0x0 && (fVar4 < (float)(uVar24 & uVar36)))))
             )) {
      pFVar12 = FMeshElementChannels::Get
                          ((local_3f8.MeshDescriptionShared)->VertexInstanceElements,0);
      FVar14 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_3e0);
      pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar12->Attributes,*(FName *)FVar14);
      if ((pFVar13 == (FAttributesSetEntry *)0x0) ||
         ((pFStack_578 = (pFVar13->Ptr).Ptr, pFStack_578->Type != 1 || (pFStack_578->Extent != 1))))
      {
        pFStack_578 = (FMeshAttributeArraySetBase *)0x0;
      }
      cVar18 = '\0';
      if (pFStack_578 != (FMeshAttributeArraySetBase *)0x0) {
        cVar18 = cVar35;
      }
      local_580.Ptr = pFVar2;
      local_570 = uVar24;
      if (((local_5e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_580) &&
          ((FScriptContainerElement *)&local_580 <
           local_5e8.AllocatorInstance.Data + (longlong)local_5e8.ArrayMax * 0x18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar20 = local_5e8.ArrayNum;
      if (local_5e8.ArrayNum == local_5e8.ArrayMax) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_5e8.AllocatorInstance,&local_5e8.ArrayMax);
      }
      local_5e8.ArrayNum = iVar20 + 1;
      *(FMeshAttributeArraySetBase **)(local_5e8.AllocatorInstance.Data + (longlong)iVar20 * 0x18) =
           local_580.Ptr;
      *(FMeshAttributeArraySetBase **)
       (local_5e8.AllocatorInstance.Data + (longlong)iVar20 * 0x18 + 8) = pFStack_578;
      *(ulonglong *)(local_5e8.AllocatorInstance.Data + (longlong)iVar20 * 0x18 + 0x10) =
           CONCAT44(uStack_56c,local_570);
      cVar35 = cVar18;
    }
    TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
  }
  local_617 = cVar35;
  if (local_5e8.ArrayNum == 0) goto LAB_1443b0c3e;
  pTStack_480 = &local_590;
  local_478 = &local_5e8;
  local_610.Data = (FScriptContainerElement *)0x0;
  local_608 = 0;
  local_488 = local_550;
  bStack_470 = (bool)cVar35;
  pFVar12 = FMeshElementChannels::Get(local_550->VertexElements,0);
  aVar23 = (atomic<unsigned_int>)((pFVar12->BitArray).NumBits - pFVar12->NumHoles);
  uVar33 = local_588;
  if (0 < (int)aVar23) {
    bVar8 = FApp::ShouldUseThreadingForPerformance();
    if (bVar8) {
LAB_1443b0519:
      bVar8 = true;
    }
    else {
      bVar9 = FForkProcessHelper::IsForkedMultithreadInstance();
      bVar8 = false;
      if (bVar9) goto LAB_1443b0519;
    }
    aVar10 = (atomic<unsigned_int>)0x0;
    if (((1 < (int)aVar23) && (bVar8)) &&
       (aVar10 = aVar23, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar23)) {
      aVar10 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
    }
    bVar8 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                      ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
    aVar11 = (atomic<unsigned_int>)((int)aVar10 + 1);
    if (bVar8) {
      aVar11 = aVar10;
    }
    aVar10 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
    uVar33 = local_588;
    if ((int)aVar11 < (int)aVar10) {
      aVar10 = aVar11;
    }
    aVar32 = SUB84(local_588,0);
    aVar11 = aVar32;
    if (1 < (int)aVar10) {
      aVar11 = aVar10;
    }
    if ((longlong)local_608 < 0) {
      DestructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
                ((FMorphProcessContext *)local_610.Data,(int)local_608);
      if (local_608._4_4_ != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,&local_610,0,(int *)((longlong)&local_608 + 4));
      }
    }
    else {
      DestructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
                ((FMorphProcessContext *)local_610.Data,(int)local_608);
    }
    iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,8,(int)aVar11,&local_610,(int *)&local_608,
                        (int *)((longlong)&local_608 + 4));
    DefaultConstructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
              (local_610.Data + (longlong)iVar20 * 0x60,(int)aVar11);
    local_4a8.ArrayNum = (int)local_608;
    local_4a8.DataPtr = (FMorphProcessContext *)local_610.Data;
    if (((int)local_608 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_398._25_7_ = uStack_46f;
    local_398.bAllMorphNormalsValid = bStack_470;
    local_398.Mesh = local_488;
    local_398.PositionAttribute = pTStack_480;
    local_398.MorphInfos = local_478;
    ParallelForImpl::
    ParallelForInternal<_UE::Impl::UnposeMesh_::__l24::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l24::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>
              (L"ParallelFor Task",(int)aVar23,(int)aVar32,&local_398,(<lambda_1>)local_618,None,
               &local_4a8);
  }
  aVar23 = SUB84(uVar33,0);
  if (cVar35 != '\0') {
    local_468 = &local_5e8;
    pTStack_460 = &local_5d0;
    local_458 = &local_598;
    pTStack_450 = &local_548;
    pFVar12 = FMeshElementChannels::Get(pFVar6->VertexInstanceElements,0);
    aVar10 = (atomic<unsigned_int>)((pFVar12->BitArray).NumBits - pFVar12->NumHoles);
    if (0 < (int)aVar10) {
      bVar8 = FApp::ShouldUseThreadingForPerformance();
      if (bVar8) {
LAB_1443b06e8:
        bVar8 = true;
      }
      else {
        bVar9 = FForkProcessHelper::IsForkedMultithreadInstance();
        bVar8 = false;
        if (bVar9) goto LAB_1443b06e8;
      }
      aVar11 = (atomic<unsigned_int>)0x0;
      if (((1 < (int)aVar10) && (bVar8)) &&
         (aVar11 = aVar10, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar10)) {
        aVar11 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      }
      bVar8 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                        ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
      aVar32 = (atomic<unsigned_int>)((int)aVar11 + 1);
      if (bVar8) {
        aVar32 = aVar11;
      }
      aVar11 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if ((int)aVar32 < (int)aVar11) {
        aVar11 = aVar32;
      }
      aVar32 = aVar23;
      if (1 < (int)aVar11) {
        aVar32 = aVar11;
      }
      if ((longlong)local_608 < 0) {
        DestructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
                  ((FMorphProcessContext *)local_610.Data,(int)local_608);
        uVar17 = local_608 >> 0x20;
        local_608 = local_608 & 0xffffffff00000000;
        if ((int)uVar17 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,0,&local_610,0,(int *)((longlong)&local_608 + 4));
        }
      }
      else {
        DestructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
                  ((FMorphProcessContext *)local_610.Data,(int)local_608);
        local_608 = local_608 & 0xffffffff00000000;
      }
      iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,8,(int)aVar32,&local_610,(int *)&local_608,
                          (int *)((longlong)&local_608 + 4));
      DefaultConstructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
                (local_610.Data + (longlong)iVar20 * 0x60,(int)aVar32);
      local_498.ArrayNum = (int)local_608;
      local_498.DataPtr = (FMorphProcessContext *)local_610.Data;
      if (((int)local_608 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_378.MorphInfos = local_468;
      local_378.NormalAttribute = pTStack_460;
      local_378.TangentAttribute = local_458;
      local_378.BinormalSignsAttribute = pTStack_450;
      ParallelForImpl::
      ParallelForInternal<_UE::Impl::UnposeMesh_::__l27::<lambda_3>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l27::<lambda_3>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>
                (L"ParallelFor Task",(int)aVar10,(int)aVar23,&local_378,(<lambda_1>)local_618,None,
                 &local_498);
    }
  }
  iVar20 = (int)local_608;
  uVar17 = (ulonglong)(int)local_608;
  local_298._0_8_ = 0;
  local_278 = (uint *)0x0;
  local_270 = 0;
  local_264 = 0;
  pFVar26 = (FMorphProcessContext *)(local_610.Data + uVar17 * 0x60);
  local_258 = (ForElementType<FSetElementId>)0x0;
  local_250 = 0;
  local_298._8_8_ = 0;
  local_26c = 0x80;
  local_268 = 0xffffffff;
  FVar21.Data = local_610.Data;
  while( true ) {
    if ((int)uVar17 != iVar20) {
      local_618 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_618);
    }
    uVar36 = local_270;
    if ((FMorphProcessContext *)FVar21.Data == pFVar26) break;
    TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
    Append<FDefaultSetAllocator>
              ((TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *)
               local_298,
               (TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *)
               FVar21.Data);
    uVar17 = local_608 & 0xffffffff;
    FVar21.Data = FVar21.Data + 0x60;
  }
  if (local_298._8_4_ != local_264) {
    iStack_5c0 = 0;
    local_5a8 = 0;
    uStack_5ac = 0;
    if (local_270 != 0) {
      puVar30 = (uint *)(local_298 + 0x10);
      if (local_278 != (uint *)0x0) {
        puVar30 = local_278;
      }
      uVar24 = *puVar30;
      while (uVar24 == 0) {
        lVar19 = (longlong)iStack_5c0;
        local_5a8 = local_5a8 + 0x20;
        iStack_5c0 = iStack_5c0 + 1;
        uStack_5ac = local_270;
        if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_5c0)
        goto LAB_1443b0971;
        uVar24 = (puVar30 + 1)[lVar19];
      }
      aVar23 = (atomic<unsigned_int>)(-uVar24 & uVar24);
      uVar17 = (ulonglong)(uint)aVar23 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_564 = (int)lVar19;
      uStack_5ac = (local_5a8 - 1) + local_564;
      if ((int)local_270 < (int)uStack_5ac) {
        uStack_5ac = local_270;
      }
    }
LAB_1443b0971:
    iStack_5a0 = local_298._8_4_ - local_264;
    local_5c8 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)local_298;
    local_5b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10);
    uStack_5b0 = 0xffffffff;
    TStack_4f0.CurrentBitIndex = uStack_5ac;
    TStack_4f0.UnvisitedBitMask = 0xffffffff;
    uVar24 = local_270 & 0xffffffe0;
    TStack_4f0._padding_ = CONCAT44(aVar23,iStack_5c0);
    uStack_5a4 = local_2e4;
    iVar20 = (int)local_270 >> 5;
    TStack_4f0._28_4_ = local_2e4;
    TStack_4f0.BaseBitIndex = local_5a8;
    uStack_4d0 = CONCAT44(uStack_59c,iStack_5a0);
    bVar16 = (byte)local_270;
    aStack_5bc = aVar23;
    local_4f8 = local_5c8;
    TStack_4f0.Array = local_5b8;
    if (((int)local_270 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar36 != local_270) {
      puVar30 = (uint *)(local_298 + 0x10);
      if (local_278 != (uint *)0x0) {
        puVar30 = local_278;
      }
      uVar36 = -1 << (bVar16 & 0x1f) & puVar30[iVar20];
      while (uVar36 == 0) {
        lVar19 = (longlong)iVar20;
        uVar24 = uVar24 + 0x20;
        iVar20 = iVar20 + 1;
        uVar36 = local_270;
        if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_1443b0a90;
        uVar36 = (puVar30 + 1)[lVar19];
      }
      uVar17 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar36 = (int)lVar19 + -1 + uVar24;
      if ((int)local_270 < (int)uVar36) {
        uVar36 = local_270;
      }
    }
LAB_1443b0a90:
    while( true ) {
      pTVar7 = local_4f8;
      if (*(int *)&local_4f8->field_0x8 - *(int *)&local_4f8->field_0x34 != (int)uStack_4d0) {
        `TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5d8);
      }
      uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar33 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      if (((TStack_4f0.CurrentBitIndex == uVar36) &&
          (TStack_4f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10))) &&
         (pTVar7 == (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                     *)local_298)) break;
      iVar20 = *(int *)(*(longlong *)pTVar7 + (longlong)TStack_4f0.CurrentBitIndex * 0xc);
      this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                       ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_5d0.ArrayPtr,0);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this,iVar20);
      *(undefined8 *)&pTVar15->field0_0x0 = uVar33;
      (pTVar15->field0_0x0)._s_0.Z = (float)uVar5;
      TStack_4f0.UnvisitedBitMask = TStack_4f0.UnvisitedBitMask & ~TStack_4f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4f0);
    }
    FStaticMeshOperations::ComputeTriangleTangentsAndNormals(pFVar6,fVar4,(wchar_t *)0x0);
    FStaticMeshOperations::ComputeTangentsAndNormals(pFVar6,WeightedNTBs);
    pFVar12 = FMeshElementChannels::Get(pFVar6->TriangleElements,0);
    FVar14 = MeshAttribute::Triangle::Normal;
    local_540 = MeshAttribute::Triangle::Normal;
    if (*(int *)&(pFVar12->Attributes).Map.field_0x8 !=
        *(int *)&(pFVar12->Attributes).Map.field_0x34) {
      uVar36 = ::GetTypeHash(MeshAttribute::Triangle::Normal.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)&pFVar12->Attributes,FVar14.Number + uVar36,&local_540);
    }
    pFVar12 = FMeshElementChannels::Get(pFVar6->TriangleElements,0);
    FVar14 = MeshAttribute::Triangle::Tangent;
    local_538 = MeshAttribute::Triangle::Tangent;
    if (*(int *)&(pFVar12->Attributes).Map.field_0x8 !=
        *(int *)&(pFVar12->Attributes).Map.field_0x34) {
      uVar36 = ::GetTypeHash(MeshAttribute::Triangle::Tangent.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)&pFVar12->Attributes,FVar14.Number + uVar36,&local_538);
    }
    pFVar12 = FMeshElementChannels::Get(pFVar6->TriangleElements,0);
    FVar14 = MeshAttribute::Triangle::Binormal;
    local_530 = MeshAttribute::Triangle::Binormal;
    if (*(int *)&(pFVar12->Attributes).Map.field_0x8 !=
        *(int *)&(pFVar12->Attributes).Map.field_0x34) {
      uVar36 = ::GetTypeHash(MeshAttribute::Triangle::Binormal.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)&pFVar12->Attributes,FVar14.Number + uVar36,&local_530);
    }
  }
  local_250 = 0;
  if (local_258 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_258);
  }
  TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_298);
  DestructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
            ((FMorphProcessContext *)local_610.Data,(int)local_608);
  if ((FMorphProcessContext *)local_610.Data != (FMorphProcessContext *)0x0) {
    FMemory::Free(local_610.Data);
  }
LAB_1443b0c3e:
  if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.AllocatorInstance.Data);
  }
  if (local_5f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data);
  }
  return;
}

