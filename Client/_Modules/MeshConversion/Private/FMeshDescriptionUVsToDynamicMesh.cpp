// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 4

// operator() @ 1443c5900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshDescriptionUVsToDynamicMesh::GetUVMesh'::__l20::<lambda_1>::operator()
          (void *this,FTriangleID *param_1,FIndex3i *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TArrayView<FVertexID,int> *pTVar12;
  TArrayView<FVertexInstanceID,int> *pTVar13;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  TVector2<float>_u_0_s_0 *pTVar14;
  int *piVar15;
  undefined8 *puVar16;
  int iVar17;
  FVertexID *pFVar18;
  longlong lVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  int local_108;
  int local_104;
  undefined8 local_100;
  TPairInitializer<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV_const_&,int_const_&> local_f8;
  longlong local_e8;
  FVertexID *local_e0;
  int *local_d8;
  TVector<double>_u_0 local_d0;
  TArrayView<FVertexID,int> local_b8;
  TArrayView<FVertexInstanceID,int> local_a8;
  FVertexID local_98;
  float local_94;
  float local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar12 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                      ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                       (*(longlong *)((longlong)this + 8) + 200),&local_b8,(int)*param_1);
  local_104 = pTVar12->ArrayNum;
  pFVar18 = pTVar12->DataPtr;
  pTVar13 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                      ((TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)
                       (*(longlong *)((longlong)this + 8) + 0xa0),&local_a8,(int)*param_1);
  fVar6 = __real_3f800000;
  iVar17 = 0;
  lVar19 = 0;
  iVar2 = pTVar13->ArrayNum;
  local_e8 = (longlong)pTVar13->DataPtr - (longlong)pFVar18;
  local_f8.Value = (int *)((longlong)param_2 - (longlong)pFVar18);
  do {
    lVar1 = local_e8;
    puVar4 = *(undefined8 **)((longlong)this + 0x18);
    iVar11 = **(int **)this;
    if (iVar2 <= iVar17) {
      local_118 = lVar19;
      local_110 = (longlong)iVar2;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = *(int *)((longlong)&pFVar18->field_0x0 + lVar1);
    this_00 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*puVar4,iVar11);
    pTVar14 = (TVector2<float>_u_0_s_0 *)
              TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_00,iVar3);
    puVar4 = *(undefined8 **)((longlong)this + 0x10);
    local_100 = *pTVar14;
    if (local_104 <= iVar17) {
      local_118 = lVar19;
      local_110 = (longlong)local_104;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_98 = *pFVar18;
    fVar7 = (float)local_100;
    fVar8 = local_100._4_4_;
    local_94 = (float)local_100;
    local_90 = local_100._4_4_;
    uVar10 = (*FCrc::MemCrc32Func)(&local_98,0xc,0);
    if (*(int *)(puVar4 + 3) != *(int *)((longlong)puVar4 + 0x44)) {
      puVar16 = puVar4 + 9;
      if ((undefined8 *)puVar4[10] != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)puVar4[10];
      }
      iVar11 = *(int *)((longlong)puVar16 + (ulonglong)(*(int *)(puVar4 + 0xb) - 1U & uVar10) * 4);
      if (iVar11 != -1) {
        do {
          lVar1 = puVar4[2] + (longlong)iVar11 * 0x18;
          if (((*(FVertexID *)(puVar4[2] + (longlong)iVar11 * 0x18) == local_98) &&
              (local_94 == *(float *)(lVar1 + 4))) && (local_90 == *(float *)(lVar1 + 8))) {
            if (iVar11 != -1) {
              piVar15 = (int *)(lVar1 + 0xc);
              if (lVar1 == 0) {
                piVar15 = (int *)0x0;
              }
              if (piVar15 != (int *)0x0) {
                iVar11 = *piVar15;
                goto LAB_1443c5b90;
              }
            }
            break;
          }
          iVar11 = *(int *)(lVar1 + 0x10);
        } while (iVar11 != -1);
      }
    }
    local_d0._s_0.Z = 0.0;
    local_d0._s_0.X = (double)(fVar6 - fVar8) * (double)puVar4[1];
    local_d0._s_0.Y = (double)fVar7 * (double)puVar4[1];
    local_108 = UE::Geometry::FDynamicMesh3::AppendVertex
                          ((FDynamicMesh3 *)*puVar4,(TVector<double> *)&local_d0._s_0);
    local_e0 = &local_98;
    local_d8 = &local_108;
    TSet<TTuple<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int>,TDefaultMapHashableKeyFuncs<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV_const_&,int_const_&>_>
              ((TSet<TTuple<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int>,TDefaultMapHashableKeyFuncs<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int,0>,FDefaultSetAllocator>
                *)(puVar4 + 2),&local_f8,(bool *)&local_e0);
    iVar11 = local_108;
LAB_1443c5b90:
    iVar17 = iVar17 + 1;
    lVar19 = lVar19 + 1;
    *(int *)((longlong)local_f8.Value + (longlong)pFVar18) = iVar11;
    pFVar18 = pFVar18 + 1;
    if (2 < iVar17) {
      return;
    }
  } while( true );
}

// BakeBackUVsFromUVMesh @ 1443cb1b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshDescriptionUVsToDynamicMesh::BakeBackUVsFromUVMesh
          (FMeshDescriptionUVsToDynamicMesh *this,FDynamicMesh3 *param_1,FMeshDescription *param_2)

{
  double *pdVar1;
  short sVar2;
  FVertexInstanceID FVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  FVertexInstanceID *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  TVector2<float> TVar11;
  TVector2<float> TVar12;
  TVector2<float> TVar13;
  TVector2<float> TVar14;
  TVector2<float> TVar15;
  TVector2<float> TVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  FMeshElementContainer *pFVar23;
  FAttributesSetEntry *pFVar24;
  TArrayView<FVertexInstanceID,int> *pTVar25;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar26;
  TVector2<float>_u_0 *pTVar27;
  ForElementType<unsigned_int> FVar28;
  ulonglong uVar29;
  FTriangleID FVar30;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar31;
  ForAnyElementType FVar32;
  uint uVar33;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar34;
  longlong lVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  double dVar39;
  undefined1 local_138 [4];
  FTriangleID local_134;
  TArrayView<FUVID,int> local_130;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  float local_110;
  float fStack_10c;
  longlong local_108;
  longlong local_100;
  float local_f8;
  float fStack_f4;
  int local_f0;
  FTriangleID local_ec;
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  double local_b8;
  FUVID *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FUVID_const_,int> local_98;
  double local_88;
  double dStack_80;
  double local_78;
  TArrayView<FVertexInstanceID,int> local_70 [3];
  
  if ((this->ScaleFactor == 0.0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScaleFactor != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                          ,0x106,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar23 = FMeshElementChannels::Get(param_2->TriangleElements,0);
  if (((param_1->TriangleRefCounts).UsedCount != (pFVar23->BitArray).NumBits - pFVar23->NumHoles) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("DynamicMesh->TriangleCount() == MeshDescription->Triangles().Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                          ,0x107,L""), bVar19)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar23 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar23->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  dVar17 = __real_3ff0000000000000;
  if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
      (pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar24->Ptr).Ptr,
      *(uint *)&pTVar31->_padding_ != 2)) || (*(uint *)((longlong)&pTVar31->_padding_ + 4) != 1)) {
    pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  uVar37 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  pTVar34 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  if (((uVar37 != 0) &&
      (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
      pTVar34 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0,
      0xfffd < (ushort)(**(short **)pFVar5 - 1U))) &&
     (pTVar34 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&DAT_00000001, 1 < (int)uVar37
     )) {
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar5 + ((ulonglong)pTVar34 >> 9) * 8) +
                        (ulonglong)((uint)pTVar34 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar33 = (uint)pTVar34 + 1;
      pTVar34 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(ulonglong)uVar33;
    } while ((int)uVar33 < (int)uVar37);
  }
  if ((uint)pTVar34 != uVar37) {
LAB_1443cb330:
    do {
      uVar33 = (uint)pTVar34;
      pTVar25 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                          (&param_2->TriangleVertexInstances,local_70,uVar33);
      dVar9 = dVar17 / this->ScaleFactor;
      iVar36 = this->UVLayerIndex;
      iVar38 = pTVar25->ArrayNum;
      pFVar6 = pTVar25->DataPtr;
      lVar35 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + ((ulonglong)pTVar34 >> 9) * 8)
      ;
      local_e8 = *(undefined8 *)(lVar35 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
      local_e0 = *(uint *)(lVar35 + 8 + (ulonglong)(uVar33 & 0x1ff) * 0xc);
      lVar35 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)local_e8 >> 9) * 8);
      local_b8 = *(double *)(lVar35 + 0x10 + (ulonglong)((uint)local_e8 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar35 + (ulonglong)((uint)local_e8 & 0x1ff) * 0x18);
      local_110 = (float)(pdVar1[1] * dVar9);
      fStack_10c = (float)(dVar17 - *pdVar1 * dVar9);
      if ((iVar38 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar3 = *pFVar6;
      pTVar26 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (pTVar31,iVar36);
      pTVar27 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar26,(int)FVar3)->field0_0x0;
      TVar11.field0_0x0._s_0.Y = fStack_10c;
      TVar11.field0_0x0._s_0.X = local_110;
      *pTVar27 = TVar11.field0_0x0;
      dVar9 = dVar17 / this->ScaleFactor;
      iVar36 = this->UVLayerIndex;
      lVar35 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_e8._4_4_ >> 9) * 8);
      local_b8 = *(double *)(lVar35 + 0x10 + (ulonglong)(local_e8._4_4_ & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar35 + (ulonglong)(local_e8._4_4_ & 0x1ff) * 0x18);
      local_110 = (float)(pdVar1[1] * dVar9);
      fStack_10c = (float)(dVar17 - *pdVar1 * dVar9);
      if ((iVar38 < 2) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar3 = pFVar6[1];
      pTVar26 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (pTVar31,iVar36);
      pTVar27 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar26,(int)FVar3)->field0_0x0;
      TVar12.field0_0x0._s_0.Y = fStack_10c;
      TVar12.field0_0x0._s_0.X = local_110;
      *pTVar27 = TVar12.field0_0x0;
      lVar35 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(local_e0 >> 9) * 8)
      ;
      local_b8 = *(double *)(lVar35 + 0x10 + (ulonglong)(local_e0 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar35 + (ulonglong)(local_e0 & 0x1ff) * 0x18);
      iVar36 = this->UVLayerIndex;
      dVar9 = dVar17 / this->ScaleFactor;
      local_110 = (float)(pdVar1[1] * dVar9);
      fStack_10c = (float)(dVar17 - *pdVar1 * dVar9);
      if ((iVar38 < 3) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar3 = pFVar6[2];
      pTVar26 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (pTVar31,iVar36);
      pTVar27 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar26,(int)FVar3)->field0_0x0;
      TVar13.field0_0x0._s_0.Y = fStack_10c;
      TVar13.field0_0x0._s_0.X = local_110;
      uVar33 = uVar33 + 1;
      pTVar34 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(ulonglong)uVar33;
      *pTVar27 = TVar13.field0_0x0;
      if ((int)uVar33 < (int)uVar37) {
        pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          uVar29 = (ulonglong)((uint)pTVar34 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar5 + ((ulonglong)pTVar34 >> 9) * 8) + uVar29 * 2) != 0)
             && (*(short *)(*(longlong *)(pFVar5 + ((ulonglong)pTVar34 >> 9) * 8) + uVar29 * 2) !=
                 -1)) goto LAB_1443cb330;
          uVar33 = (uint)pTVar34 + 1;
          pTVar34 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(ulonglong)uVar33;
        } while ((int)uVar33 < (int)uVar37);
      }
    } while (uVar33 != uVar37);
  }
  if ((this->UVLayerIndex < (param_2->UVElements->Channels).ArrayNum) &&
     (pFVar23 = FMeshElementChannels::Get(param_2->UVElements,this->UVLayerIndex),
     (pFVar23->BitArray).NumBits != 0)) {
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&local_120,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    iVar36 = local_120.ArrayNum;
    uVar29 = (ulonglong)local_120.ArrayNum;
    pFVar5 = local_120.AllocatorInstance.Data + uVar29 * 4;
    FVar32.Data = local_120.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar29 != iVar36) {
        local_138[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (FVar32.Data == pFVar5) break;
      *(undefined4 *)FVar32.Data = 0xffffffff;
      FVar32.Data = FVar32.Data + 4;
      uVar29 = local_120._8_8_ & 0xffffffff;
    }
    pFVar23 = FMeshElementChannels::Get(param_2->UVElements,this->UVLayerIndex);
    pFVar24 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar23->Attributes,MeshAttribute::UV::UVCoordinate);
    if (((pFVar24 == (FAttributesSetEntry *)0x0) ||
        (pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar24->Ptr).Ptr,
        *(uint *)&pTVar31->_padding_ != 2)) || (*(uint *)((longlong)&pTVar31->_padding_ + 4) != 1))
    {
      pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
    }
    (param_2->UVToTriangles).bSuspended = true;
    local_f0 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    local_134 = (FTriangleID)0x0;
    if ((local_f0 != 0) &&
       (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
      FVar30 = (FTriangleID)0x1;
      local_134 = (FTriangleID)0x1;
      if (1 < local_f0) {
        do {
          lVar35 = *(longlong *)(pFVar5 + (ulonglong)((uint)FVar30 >> 9) * 8);
          if ((*(short *)(lVar35 + (ulonglong)((uint)FVar30 & 0x1ff) * 2) != 0) &&
             (local_134 = FVar30, *(short *)(lVar35 + (ulonglong)((uint)FVar30 & 0x1ff) * 2) != -1))
          break;
          FVar30 = (FTriangleID)((int)FVar30 + 1);
          local_134 = FVar30;
        } while ((int)FVar30 < local_f0);
      }
    }
    local_ec = (FTriangleID)
               ((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed);
    if (local_134 != local_ec) {
LAB_1443cb7a0:
      do {
        FVar30 = local_134;
        TMeshAttributesRef<int,TArrayView<FUVID,int>_>::Get
                  (&param_2->TriangleUVs,&local_130,(int)local_134,this->UVLayerIndex);
        uVar18 = local_130._8_8_;
        uVar29 = (ulonglong)((uint)FVar30 & 0x1ff);
        iVar36 = 0;
        bVar19 = false;
        lVar35 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)FVar30 >> 9) * 8);
        local_d0 = *(undefined4 *)(lVar35 + 8 + uVar29 * 0xc);
        local_d8 = *(undefined8 *)(lVar35 + uVar29 * 0xc);
        local_108 = 0;
        local_100 = 0;
        do {
          uVar37 = *(uint *)((longlong)&local_d8 + local_100);
          lVar35 = (longlong)(int)uVar37;
          iVar38 = (int)uVar18;
          if ((iVar38 <= iVar36) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar33 = *(uint *)(&(local_130.DataPtr)->field_0x0 + local_100);
          uVar21 = 0;
          if ((int)uVar37 < local_120.ArrayNum) {
            uVar21 = ~uVar37 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)(local_120.AllocatorInstance.Data + lVar35 * 4) == -1) {
            pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
            lVar7 = *(longlong *)(pFVar5 + (ulonglong)(uVar37 >> 9) * 8);
            dVar39 = dVar17 / this->ScaleFactor;
            local_b8 = *(double *)(lVar7 + 0x10 + (ulonglong)(uVar37 & 0x1ff) * 0x18);
            pdVar1 = (double *)(lVar7 + (ulonglong)(uVar37 & 0x1ff) * 0x18);
            dVar9 = *pdVar1;
            dVar10 = pdVar1[1];
            local_f8 = (float)(dVar10 * dVar39);
            fStack_f4 = (float)(dVar17 - dVar9 * dVar39);
            if (uVar37 == uVar33) {
LAB_1443cbd2f:
              uVar21 = 0;
              if ((int)uVar37 < local_120.ArrayNum) {
                uVar21 = ~uVar37 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(uint *)(local_120.AllocatorInstance.Data + lVar35 * 4) = uVar33;
              if ((iVar38 <= iVar36) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar20)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar22 = *(int *)(&(local_130.DataPtr)->field_0x0 + local_100);
              pTVar26 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (pTVar31,0);
              pTVar27 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (pTVar26,iVar22)->field0_0x0;
              TVar16.field0_0x0._s_0.Y = fStack_f4;
              TVar16.field0_0x0._s_0.X = local_f8;
              *pTVar27 = TVar16.field0_0x0;
            }
            else {
              if ((-1 < (int)uVar33) &&
                 ((int)uVar33 <
                  (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
                uVar29 = (ulonglong)(uVar33 & 0x1ff);
                if ((ushort)(*(short *)(*(longlong *)
                                         ((param_1->VertexRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + (ulonglong)(uVar33 >> 9) * 8) +
                                       uVar29 * 2) - 1U) < 0xfffe) {
                  lVar7 = *(longlong *)(pFVar5 + (ulonglong)(uVar33 >> 9) * 8);
                  pdVar1 = (double *)(lVar7 + uVar29 * 0x18);
                  local_88 = *pdVar1;
                  dStack_80 = pdVar1[1];
                  local_78 = *(double *)(lVar7 + 0x10 + uVar29 * 0x18);
                  if (((local_88 == dVar9) && (dStack_80 == dVar10)) && (local_78 == local_b8))
                  goto LAB_1443cbd2f;
                }
              }
              FVar28 = (ForElementType<unsigned_int>)
                       FMeshElementChannels::Get(param_2->UVElements,this->UVLayerIndex);
              if ((-1 < (int)uVar37) && ((int)uVar37 < *(int *)((longlong)FVar28 + 0x18))) {
                if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
                }
                uVar33 = uVar37;
                if ((int)uVar37 < 0) {
                  uVar33 = uVar37 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar28 + (longlong)((int)uVar33 >> 5) * 4) >>
                     (uVar37 & 0x1f) & 1) != 0) {
                  uVar33 = 0;
                  if ((int)uVar37 < local_120.ArrayNum) {
                    uVar33 = ~uVar37 >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *(uint *)(local_120.AllocatorInstance.Data + lVar35 * 4) = uVar37;
                  pTVar26 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                      (pTVar31,0);
                  pTVar27 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                       (pTVar26,uVar37)->field0_0x0;
                  TVar14.field0_0x0._s_0.Y = fStack_f4;
                  TVar14.field0_0x0._s_0.X = local_f8;
                  *pTVar27 = TVar14.field0_0x0;
                  if ((iVar38 <= iVar36) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  bVar19 = true;
                  *(uint *)(&(local_130.DataPtr)->field_0x0 + local_100) = uVar37;
                  goto LAB_1443cbe07;
                }
              }
              pFVar23 = FMeshElementChannels::Get(param_2->UVElements,this->UVLayerIndex);
              iVar22 = FMeshElementContainer::Add(pFVar23);
              if ((iVar38 <= iVar36) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar7 = local_100;
              *(int *)(&(local_130.DataPtr)->field_0x0 + local_100) = iVar22;
              if ((iVar38 <= iVar36) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar4 = *(undefined4 *)(&(local_130.DataPtr)->field_0x0 + lVar7);
              uVar33 = 0;
              if ((int)uVar37 < local_120.ArrayNum) {
                uVar33 = ~uVar37 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)(local_120.AllocatorInstance.Data + lVar35 * 4) = uVar4;
              if ((iVar38 <= iVar36) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar22 = *(int *)(&(local_130.DataPtr)->field_0x0 + lVar7);
              pTVar26 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (pTVar31,0);
              pTVar27 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (pTVar26,iVar22)->field0_0x0;
              TVar15.field0_0x0._s_0.Y = fStack_f4;
              TVar15.field0_0x0._s_0.X = local_f8;
              bVar19 = true;
              *pTVar27 = TVar15.field0_0x0;
            }
          }
          else {
            uVar21 = 0;
            if ((int)uVar37 < local_120.ArrayNum) {
              uVar21 = ~uVar37 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(uint *)(local_120.AllocatorInstance.Data + lVar35 * 4) != uVar33) {
              uVar33 = 0;
              if ((int)uVar37 < local_120.ArrayNum) {
                uVar33 = ~uVar37 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar4 = *(undefined4 *)(local_120.AllocatorInstance.Data + lVar35 * 4);
              if ((iVar38 <= iVar36) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar19 = true;
              *(undefined4 *)(&(local_130.DataPtr)->field_0x0 + local_100) = uVar4;
            }
          }
LAB_1443cbe07:
          FVar30 = local_134;
          iVar36 = iVar36 + 1;
          local_108 = local_108 + 1;
          local_100 = local_100 + 4;
        } while (iVar36 < 3);
        if (bVar19) {
          local_a8 = local_130.DataPtr;
          local_98._12_4_ = uStack_9c;
          local_98.ArrayNum = iVar38;
          local_98.DataPtr = local_130.DataPtr;
          iStack_a0 = iVar38;
          FMeshDescription::SetTriangleUVIndices(param_2,local_134,&local_98,this->UVLayerIndex);
        }
        local_134 = (FTriangleID)((int)FVar30 + 1);
        if ((int)local_134 < local_f0) {
          do {
            lVar35 = *(longlong *)
                      ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)local_134 >> 9) * 8);
            if ((*(short *)(lVar35 + (ulonglong)((uint)local_134 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar35 + (ulonglong)((uint)local_134 & 0x1ff) * 2) != -1))
            goto LAB_1443cb7a0;
            local_134 = (FTriangleID)((int)local_134 + 1);
          } while ((int)local_134 < local_f0);
        }
      } while (local_134 != local_ec);
    }
    (param_2->UVToTriangles).bSuspended = false;
    (param_2->UVToTriangles).bEverythingStale = true;
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNumUVLayers @ 1443d6050

int __thiscall
UE::Geometry::FMeshDescriptionUVsToDynamicMesh::GetNumUVLayers
          (FMeshDescriptionUVsToDynamicMesh *this,FMeshDescription *param_1)

{
  FMeshElementContainer *pFVar1;
  FAttributesSetEntry *pFVar2;
  FMeshAttributeArraySetBase *pFVar3;
  
  pFVar1 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar2 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar1->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar2 == (FAttributesSetEntry *)0x0) || (pFVar3 = (pFVar2->Ptr).Ptr, pFVar3->Type != 2)) ||
     (pFVar3->Extent != 1)) {
    pFVar3 = (FMeshAttributeArraySetBase *)0x0;
  }
  return pFVar3[2].Type;
}

// GetUVMesh @ 1443d62a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<UE::Geometry::FDynamicMesh3,1> * __thiscall
UE::Geometry::FMeshDescriptionUVsToDynamicMesh::GetUVMesh
          (FMeshDescriptionUVsToDynamicMesh *this,
          TSharedPtr<UE::Geometry::FDynamicMesh3,1> *__return_storage_ptr__,
          FMeshDescription *param_1)

{
  double *pdVar1;
  FDynamicMesh3 *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  FUVID FVar6;
  FUVID *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  EMeshResult EVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar17;
  FMeshElementContainer *pFVar18;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar19;
  FAttributesSetEntry *pFVar20;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float>_u_0_s_0 *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  FTriangleID FVar23;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar24;
  undefined1 auStack_308 [32];
  FUVID local_2d0;
  FUVID FStack_2cc;
  FUVID local_2c8;
  TArrayView<FUVID,int> local_2c0;
  undefined8 local_2b0;
  TVector<double>_u_0 local_2a8;
  undefined8 local_290;
  float local_288;
  undefined8 local_284;
  float local_27c;
  TVector2<float>_u_0 local_278;
  undefined2 local_270;
  undefined1 local_26e;
  FTriangleID local_268 [2];
  TElementIDs local_260;
  TElementIDs local_258;
  FMeshDescriptionUVsToDynamicMesh *local_250;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_248;
  TReferenceControllerBase<1> *local_240;
  FMeshDescription *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  TVector<double>_u_0 local_1f0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1cc;
  float local_1c4;
  TVector2<float>_u_0 local_1c0;
  undefined2 local_1b8;
  undefined1 local_1b6;
  TVector<double>_u_0 local_1b0;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  TVector2<float>_u_0 local_180;
  undefined2 local_178;
  undefined1 local_176;
  TVector<double>_u_0 local_170;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  float local_144;
  TVector2<float>_u_0 local_140;
  undefined2 local_138;
  undefined1 local_136;
  FMeshDescriptionUVsToDynamicMesh *local_130;
  FMeshDescription *local_128;
  FDynamicMesh3 **local_120;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> **local_118;
  TConstIterator local_110;
  TConstIterator local_f0;
  FDynamicMesh3 *local_c8;
  double local_c0;
  TSparseArray<TSparseSetElement<TTuple<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b8;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_250 = this;
  local_238 = param_1;
  if (this->ScaleFactor == 0.0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScaleFactor != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                       ,0x6e,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
      return pTVar17;
    }
  }
  if (this->UVLayerIndex < (param_1->UVElements->Channels).ArrayNum) {
    pFVar18 = FMeshElementChannels::Get(param_1->UVElements,this->UVLayerIndex);
    if ((pFVar18->BitArray).NumBits != 0) {
      bVar8 = true;
      goto LAB_1443d6344;
    }
  }
  bVar8 = false;
LAB_1443d6344:
  pTVar19 = ::operator_new(0x240);
  pTVar24 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  if (pTVar19 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    __return_storage_ptr__->Object = (FDynamicMesh3 *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar19 = pTVar24;
  }
  else {
    *(uint *)&pTVar19->_padding_ = 1;
    *(uint *)((longlong)&pTVar19->_padding_ + 4) = 1;
    pTVar19->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&pTVar19->_padding_);
    if (&pTVar19->_padding_ == (longlong *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
        return pTVar17;
      }
    }
    __return_storage_ptr__->Object = (FDynamicMesh3 *)&pTVar19->_padding_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar19;
    LOCK();
    *(uint *)&pTVar19->_padding_ = *(uint *)&pTVar19->_padding_ + 1;
    UNLOCK();
    this = local_250;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar19);
  if (bVar8) {
    pFVar18 = FMeshElementChannels::Get(param_1->UVElements,this->UVLayerIndex);
    pFVar20 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar18->Attributes,MeshAttribute::UV::UVCoordinate);
    if (((pFVar20 == (FAttributesSetEntry *)0x0) ||
        (pTVar19 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar20->Ptr).Ptr,
        *(uint *)&pTVar19->_padding_ != 2)) || (*(uint *)((longlong)&pTVar19->_padding_ + 4) != 1))
    {
      pTVar19 = pTVar24;
    }
    if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
        return pTVar17;
      }
    }
    (**(code **)(__return_storage_ptr__->Object->_padding_ + 8))();
    local_260.Array = &pFVar18->BitArray;
    TMeshElementContainer<FUVID>::TElementIDs::begin(&local_260,(TConstIterator *)&local_230);
    TMeshElementContainer<FUVID>::TElementIDs::end(&local_260,&local_110);
    fVar5 = __real_3f800000;
    while( true ) {
      if ((local_230.CurrentBitIndex == local_110.Iterator.CurrentBitIndex) &&
         (local_230.Array == local_110.Iterator.Array)) break;
      iVar12 = -1;
      if (local_230.CurrentBitIndex < (local_230.Array)->NumBits) {
        iVar12 = local_230.CurrentBitIndex;
      }
      this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar19,0);
      pTVar21 = (TVector2<float>_u_0_s_0 *)
                TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_01,iVar12);
      local_2b0 = *pTVar21;
      if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      local_1d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1f0._s_0.Z = 0.0;
      local_1c0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_1b8 = 0;
      local_1b6 = 0;
      local_1f0._s_0.X = (double)(fVar5 - local_2b0._4_4_) * this->ScaleFactor;
      local_1f0._s_0.Y = (double)(float)(undefined4)local_2b0 * this->ScaleFactor;
      local_1d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      FDynamicMesh3::InsertVertex
                (__return_storage_ptr__->Object,iVar12,(FVertexInfo *)&local_1f0._s_0,true);
      local_230.UnvisitedBitMask = local_230.UnvisitedBitMask & ~local_230._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
    }
    if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
        return pTVar17;
      }
    }
    (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x10))();
  }
  pFVar18 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar20 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar20 == (FAttributesSetEntry *)0x0) ||
      (local_248 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar20->Ptr).Ptr,
      *(uint *)&local_248->_padding_ != 2)) || (*(uint *)((longlong)&local_248->_padding_ + 4) != 1)
     ) {
    local_248 = pTVar24;
  }
  local_c8 = __return_storage_ptr__->Object;
  local_c0 = this->ScaleFactor;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_b8._32_8_ = 0;
  local_b8._40_4_ = 0;
  local_b8._44_4_ = 0x80;
  local_b8._48_4_ = 0xffffffff;
  local_b8._52_4_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  if ((local_c8 == (FDynamicMesh3 *)0x0) || (local_c0 == 0.0)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshToAddTo && ScaleFactorIn != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                       ,0x48,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
      return pTVar17;
    }
  }
  if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
      return pTVar17;
    }
  }
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x18))();
  local_258.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_258,(TConstIterator *)&local_210);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_258,&local_f0);
  do {
    if ((local_210.CurrentBitIndex == local_f0.Iterator.CurrentBitIndex) &&
       (local_210.Array == local_f0.Iterator.Array)) {
      if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x20))();
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<MeshDescriptionUVsToDynamicMeshLocals::FVertexUV,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8);
      return __return_storage_ptr__;
    }
    _local_2d0 = -1;
    FVar23 = (FTriangleID)0xffffffff;
    if (local_210.CurrentBitIndex < (local_210.Array)->NumBits) {
      FVar23 = (FTriangleID)local_210.CurrentBitIndex;
    }
    local_2c8 = (FUVID)0xffffffff;
    local_2b0._0_4_ = FVar23;
    local_120 = &local_c8;
    local_118 = &local_248;
    local_268[0] = FVar23;
    local_130 = this;
    local_128 = param_1;
    if (bVar8) {
      TMeshAttributesRef<int,TArrayView<FUVID,int>_>::Get
                (&param_1->TriangleUVs,&local_2c0,(int)FVar23,this->UVLayerIndex);
      iVar12 = local_2c0.ArrayNum;
      if (local_2c0.ArrayNum < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      pFVar7 = local_2c0.DataPtr;
      if (*local_2c0.DataPtr == (FUVID)0xffffffff) goto LAB_1443d6933;
      if (iVar12 < 2) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      if (pFVar7[1] == (FUVID)0xffffffff) goto LAB_1443d6933;
      if (iVar12 < 3) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      if (pFVar7[2] == (FUVID)0xffffffff) goto LAB_1443d6933;
      if (iVar12 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      _local_2d0 = CONCAT44(FStack_2cc,*pFVar7);
      if (iVar12 < 2) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      _local_2d0 = CONCAT44(pFVar7[1],local_2d0);
      if (iVar12 < 3) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      local_2c8 = pFVar7[2];
    }
    else {
LAB_1443d6933:
      `UE::Geometry::FMeshDescriptionUVsToDynamicMesh::GetUVMesh'::__l20::<lambda_1>::operator()
                (&local_130,local_268,(FIndex3i *)&local_2d0);
    }
    pTVar22 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    this_00 = __return_storage_ptr__->Object;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar6 = local_2d0;
    local_240 = pTVar22;
    if ((local_2d0 == FStack_2cc) || (local_2d0 == local_2c8)) {
      if (this_00 == (FDynamicMesh3 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      if ((((int)FVar6 < 0) ||
          ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)FVar6)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this_00->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)((uint)FVar6 >> 9) * 8)
                                      + (ulonglong)((uint)FVar6 & 0x1ff) * 2) - 1U))) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshOut->IsVertex(Vid)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                           ,0xc0,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      if (this_00 == (FDynamicMesh3 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      local_178 = 0;
      local_176 = 0;
      lVar2 = *(longlong *)
               ((this_00->Vertices).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)FVar6 >> 9) * 8);
      pdVar1 = (double *)(lVar2 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
      local_1b0._s_0.X = *pdVar1;
      local_1b0._s_0.Y = pdVar1[1];
      local_1b0._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
      local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_184 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_198 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_18c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_180 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      iVar12 = FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_1b0._s_0);
      _local_2d0 = CONCAT44(FStack_2cc,iVar12);
    }
    lVar2 = _local_2d0;
    FVar6 = FStack_2cc;
    if (FStack_2cc == local_2c8) {
      if (this_00 == (FDynamicMesh3 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      if (((lVar2 < 0) ||
          ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)FVar6)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this_00->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)((uint)FVar6 >> 9) * 8)
                                      + (ulonglong)((uint)FVar6 & 0x1ff) * 2) - 1U))) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshOut->IsVertex(Vid)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                           ,0xc0,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      if (this_00 == (FDynamicMesh3 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      local_138 = 0;
      local_136 = 0;
      lVar2 = *(longlong *)
               ((this_00->Vertices).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)FVar6 >> 9) * 8);
      pdVar1 = (double *)(lVar2 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
      local_170._s_0.X = *pdVar1;
      local_170._s_0.Y = pdVar1[1];
      local_170._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
      local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_144 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_14c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      iVar12 = FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_170._s_0);
      _local_2d0 = CONCAT44(iVar12,local_2d0);
    }
    if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
        return pTVar17;
      }
    }
    EVar13 = FDynamicMesh3::InsertTriangle
                       (__return_storage_ptr__->Object,(int)FVar23,(FIndex3i *)&local_2d0,0,true);
    if (EVar13 == Failed_WouldCreateNonmanifoldEdge) {
      bVar9 = false;
      if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      uVar14 = FDynamicMesh3::FindEdge
                         (__return_storage_ptr__->Object,(int)local_2d0,(int)FStack_2cc);
      if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      uVar15 = FDynamicMesh3::FindEdge
                         (__return_storage_ptr__->Object,(int)FStack_2cc,(int)local_2c8);
      if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      uVar16 = FDynamicMesh3::FindEdge(__return_storage_ptr__->Object,(int)local_2c8,(int)local_2d0)
      ;
      bVar10 = false;
      if (uVar14 != 0xffffffff) {
        if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        bVar10 = false;
        if (*(int *)(*(longlong *)
                      ((__return_storage_ptr__->Object->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar14 >> 9) * 8) + 0xc + (ulonglong)(uVar14 & 0x1ff) * 0x10) !=
            -1) {
          bVar10 = true;
        }
      }
      bVar4 = bVar10;
      if (uVar15 != 0xffffffff) {
        if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if (*(int *)(*(longlong *)
                      ((__return_storage_ptr__->Object->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar15 >> 9) * 8) + 0xc + (ulonglong)(uVar15 & 0x1ff) * 0x10) !=
            -1) {
          bVar4 = true;
          bVar9 = true;
        }
      }
      if (uVar16 == 0xffffffff) {
LAB_1443d6e37:
        if (bVar10) goto LAB_1443d6e40;
      }
      else {
        if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if (*(int *)(*(longlong *)
                      ((__return_storage_ptr__->Object->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar16 >> 9) * 8) + 0xc + (ulonglong)(uVar16 & 0x1ff) * 0x10) ==
            -1) goto LAB_1443d6e37;
        bVar9 = true;
LAB_1443d6e40:
        FVar6 = local_2d0;
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if ((((int)FVar6 < 0) ||
            ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)FVar6)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this_00->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data +
                                          (ulonglong)((uint)FVar6 >> 9) * 8) +
                                        (ulonglong)((uint)FVar6 & 0x1ff) * 2) - 1U))) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("MeshOut->IsVertex(Vid)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                              ,0xc0,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        local_270 = 0;
        local_26e = 0;
        lVar2 = *(longlong *)
                 ((this_00->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)FVar6 >> 9) * 8);
        pdVar1 = (double *)(lVar2 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
        local_2a8._s_0.X = *pdVar1;
        local_2a8._s_0.Y = pdVar1[1];
        local_2a8._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
        local_288 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_27c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_290 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_284 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_278 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar12 = FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_2a8._s_0);
        _local_2d0 = CONCAT44(FStack_2cc,iVar12);
      }
      lVar2 = _local_2d0;
      if (bVar4) {
        FVar6 = FStack_2cc;
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if (((lVar2 < 0) ||
            ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)FVar6)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this_00->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data +
                                          (ulonglong)((uint)FVar6 >> 9) * 8) +
                                        (ulonglong)((uint)FVar6 & 0x1ff) * 2) - 1U))) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("MeshOut->IsVertex(Vid)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                              ,0xc0,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        local_270 = 0;
        local_26e = 0;
        lVar2 = *(longlong *)
                 ((this_00->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)FVar6 >> 9) * 8);
        pdVar1 = (double *)(lVar2 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
        local_2a8._s_0.X = *pdVar1;
        local_2a8._s_0.Y = pdVar1[1];
        local_2a8._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
        local_288 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_27c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_290 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_284 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_278 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar12 = FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_2a8._s_0);
        _local_2d0 = CONCAT44(iVar12,local_2d0);
      }
      FVar6 = local_2c8;
      if (bVar9) {
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if ((((int)FVar6 < 0) ||
            ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)FVar6)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this_00->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data +
                                          (ulonglong)((uint)FVar6 >> 9) * 8) +
                                        (ulonglong)((uint)FVar6 & 0x1ff) * 2) - 1U))) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshOut->IsVertex(Vid)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                             ,0xc0,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
            return pTVar17;
          }
        }
        local_270 = 0;
        local_26e = 0;
        lVar2 = *(longlong *)
                 ((this_00->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)FVar6 >> 9) * 8);
        pdVar1 = (double *)(lVar2 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
        local_2a8._s_0.X = *pdVar1;
        local_2a8._s_0.Y = pdVar1[1];
        local_2a8._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)((uint)FVar6 & 0x1ff) * 0x18);
        local_288 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_27c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_290 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_284 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_278 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_2c8 = (FUVID)FDynamicMesh3::AppendVertex(this_00,(FVertexInfo *)&local_2a8._s_0);
      }
      if (__return_storage_ptr__->Object == (FDynamicMesh3 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
          return pTVar17;
        }
      }
      EVar13 = FDynamicMesh3::InsertTriangle
                         (__return_storage_ptr__->Object,(undefined4)local_2b0,
                          (FIndex3i *)&local_2d0,0,true);
      pTVar22 = local_240;
      param_1 = local_238;
    }
    if ((EVar13 != Ok) && (EVar13 != Failed_TriangleAlreadyExists)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == EMeshResult::Ok || Result == EMeshResult::Failed_TriangleAlreadyExists"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionUVsToDynamicMesh.cpp"
                         ,0xfa,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        pTVar17 = (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)(*pcVar3)();
        return pTVar17;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
    this = local_250;
  } while( true );
}

