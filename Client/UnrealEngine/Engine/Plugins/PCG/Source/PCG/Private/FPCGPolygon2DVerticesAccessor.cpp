// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 20

// ~FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> @ 149890010

void __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::
~FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPCGPolygon2DData *this_00;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TPolygon2<double> local_128;
  undefined1 local_118 [24];
  ForAnyElementType FStack_100;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_e8;
  FWeakObjectPtr local_d8;
  int local_d0;
  UPCGPolygon2DData *local_c8;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  undefined1 auStack_a8 [20];
  uint uStack_94;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 local_64;
  
  pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ModifiedVertices).field_0x10;
  this->_padding_ =
       (longlong)&___7__FPCGPolygon2DVerticesAccessor_U__TVector2_N_Math_UE___04_PCGTemporary__6B_;
  this_01 = (TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->ModifiedVertices;
  iVar9 = *(int *)&(this->ModifiedVertices).field_0x28;
  local_118._8_4_ = 0;
  iVar19 = 0;
  local_118._12_4_ = 1;
  FStack_100.Data._4_4_ = 0;
  if (iVar9 != 0) {
    puVar20 = *(uint **)&(this->ModifiedVertices).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar22;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar11 = (longlong)(int)local_118._8_4_;
      iVar19 = iVar19 + 0x20;
      local_118._8_4_ = local_118._8_4_ + 1;
      FStack_100.Data._4_4_ = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_118._8_4_)
      goto LAB_1498900d1;
      uVar15 = puVar20[lVar11 + 1];
    }
    local_118._12_4_ = -uVar15 & uVar15;
    uVar10 = (ulonglong)(uint)local_118._12_4_ * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    FStack_100.Data._4_4_ = iVar19 + -1 + local_res20;
    if (iVar9 < FStack_100.Data._4_4_) {
      FStack_100.Data._4_4_ = iVar9;
    }
  }
LAB_1498900d1:
  uVar15 = *(uint *)&(this->ModifiedVertices).field_0x28;
  iStack_f0 = *(int *)&(this->ModifiedVertices).field_0x8 -
              *(int *)&(this->ModifiedVertices).field_0x34;
  FStack_100.Data._0_4_ = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  local_f8 = CONCAT44(local_64,iVar19);
  auStack_a8._0_8_ = local_118._8_8_;
  iVar19 = (int)uVar15 >> 5;
  uStack_88 = CONCAT44(uStack_ec,iStack_f0);
  local_90 = local_f8;
  stack0xffffffffffffff68 = FStack_100.Data;
  local_res18 = uVar15;
  local_118._0_8_ = this_01;
  local_118._16_8_ = pTVar22;
  local_c0 = this_01;
  local_b8 = pTVar22;
  local_b0 = this_01;
  auStack_a8._8_8_ = pTVar22;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->ModifiedVertices).field_0x28;
  if (uVar15 != uVar8) {
    puVar18 = *(undefined1 **)&(this->ModifiedVertices).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar22;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar19;
      uVar14 = uVar14 + 0x20;
      iVar19 = iVar19 + 1;
      uVar15 = uVar8;
      local_res18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1498901f0;
      uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uVar15 = local_d0 + -1 + uVar14;
    local_res18 = uVar15;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
      local_res18 = uVar8;
    }
  }
LAB_1498901f0:
  do {
    pTVar6 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((uStack_94 == uVar15) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_a8._8_8_ == pTVar22)) &&
       (pTVar6 == this_01)) {
      *(undefined4 *)&this_01[1].field_0x10 = 0;
      if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_01[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_01);
      return;
    }
    lVar11 = *(longlong *)pTVar6;
    lVar21 = (longlong)(int)uStack_94 * 0x20;
    local_d8.ObjectIndex = *(int *)(lVar21 + lVar11);
    local_d8.ObjectSerialNumber = *(int *)(lVar21 + 4 + lVar11);
    this_00 = (UPCGPolygon2DData *)FWeakObjectPtr::Get(&local_d8);
    local_c8 = this_00;
    if (this_00 != (UPCGPolygon2DData *)0x0) {
      local_118._0_8_ = (FScriptContainerElement *)0x0;
      local_118._8_8_ = 0;
      FStack_100.Data = (FScriptContainerElement *)0x0;
      local_f8 = 0;
      if ((*(int *)(lVar21 + 0x10 + lVar11) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = *(undefined8 **)(lVar21 + 8 + lVar11);
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = *(int *)(puVar1 + 1);
      lVar12 = (longlong)local_e8.ArrayNum;
      pvVar2 = (void *)*puVar1;
      if (local_e8.ArrayNum == 0) {
        local_e8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_e8.ArrayNum,0,&local_e8.AllocatorInstance,local_e8.ArrayNum,
                   &local_e8.ArrayMax);
        memcpy(local_e8.AllocatorInstance.Data,pvVar2,lVar12 << 4);
      }
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_118,
                 &local_e8);
      dVar5 = UE::Geometry::TPolygon2<double>::SignedArea((TPolygon2<double> *)&local_e8);
      local_118[0x10] = dVar5 < 0.0;
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      iVar9 = *(int *)(lVar21 + 0x10 + lVar11);
      uVar15 = 1;
      if (1 < iVar9) {
        lVar12 = 0x10;
        do {
          uVar14 = 0;
          if ((int)uVar15 < iVar9) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(lVar21 + 8 + lVar11);
          local_128.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Vertices.ArrayNum = *(int *)(lVar3 + 8 + lVar12);
          lVar16 = (longlong)local_128.Vertices.ArrayNum;
          pvVar2 = *(void **)(lVar3 + lVar12);
          if (local_128.Vertices.ArrayNum == 0) {
            local_128.Vertices.ArrayMax = 0;
            iVar9 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_128.Vertices.ArrayNum,0,(ForAnyElementType *)&local_128,
                       local_128.Vertices.ArrayNum,&local_128.Vertices.ArrayMax);
            memcpy(local_128.Vertices.AllocatorInstance.Data,pvVar2,lVar16 << 4);
            iVar9 = local_128.Vertices.ArrayNum;
          }
          uVar14 = 0;
          iVar19 = iVar9;
          if (0 < iVar9) {
            do {
              uVar8 = 0;
              if ((int)uVar14 < iVar19) {
                uVar8 = ~uVar14 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar7 = UE::Geometry::TPolygon2<double>::Contains
                                ((TPolygon2<double> *)local_118,
                                 (TVector2<double> *)
                                 (local_128.Vertices.AllocatorInstance.Data +
                                 (ulonglong)uVar14 * 0x10));
              if (!bVar7) goto LAB_1498905aa;
              uVar14 = uVar14 + 1;
              iVar19 = local_128.Vertices.ArrayNum;
            } while ((int)uVar14 < iVar9);
          }
          bVar7 = UE::Geometry::TPolygon2<double>::Intersects
                            ((TPolygon2<double> *)local_118,&local_128);
          if (!bVar7) {
            iVar9 = (int)local_f8;
            uVar10 = (ulonglong)(int)local_f8;
            pFVar17 = FStack_100.Data + uVar10 * 0x10;
            FVar13.Data = FStack_100.Data;
            while( true ) {
              if ((int)uVar10 != iVar9) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (FVar13.Data == pFVar17) break;
              bVar7 = UE::Geometry::TPolygon2<double>::Overlaps
                                (&local_128,(TPolygon2<double> *)FVar13.Data);
              if (bVar7) goto LAB_1498905aa;
              uVar10 = local_f8 & 0xffffffff;
              FVar13.Data = FVar13.Data + 0x10;
            }
            dVar5 = UE::Geometry::TPolygon2<double>::SignedArea(&local_128);
            if ((bool)local_118[0x10] != dVar5 < 0.0) {
              if (((FStack_100.Data <= (FScriptContainerElement *)&local_128) &&
                  ((FScriptContainerElement *)&local_128 <
                   FStack_100.Data + (longlong)local_f8._4_4_ * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar9 = (int)local_f8;
              if ((int)local_f8 == local_f8._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&FStack_100,(int *)((longlong)&local_f8 + 4));
              }
              local_f8 = CONCAT44(local_f8._4_4_,iVar9 + 1);
              UE::Geometry::TPolygon2<double>::TPolygon2<double>
                        ((TPolygon2<double> *)(FStack_100.Data + (longlong)iVar9 * 0x10),&local_128)
              ;
            }
          }
LAB_1498905aa:
          if (local_128.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Vertices.AllocatorInstance.Data);
          }
          iVar9 = *(int *)(lVar21 + 0x10 + lVar11);
          uVar15 = uVar15 + 1;
          lVar12 = lVar12 + 0x10;
          this_00 = local_c8;
          this_01 = local_c0;
        } while ((int)uVar15 < iVar9);
      }
      UE::Geometry::TGeneralPolygon2<double>::operator=
                (&this_00->Polygon,(TGeneralPolygon2<double> *)local_118);
      UPCGPolygon2DData::UpdateMappings(this_00);
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)FStack_100.Data,(int)local_f8);
      if (FStack_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data);
      }
      uVar15 = local_res18;
      if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._0_8_);
        uVar15 = local_res18;
      }
    }
    stack0xffffffffffffff68 =
         (FScriptContainerElement *)CONCAT44(uStack_94,auStack_a8._16_4_ & ~auStack_a8._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a8);
    pTVar22 = local_b8;
  } while( true );
}

// ~FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> @ 149890680

void __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::
~FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPCGPolygon2DData *this_00;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TPolygon2<double> local_128;
  undefined1 local_118 [24];
  ForAnyElementType FStack_100;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_e8;
  FWeakObjectPtr local_d8;
  int local_d0;
  UPCGPolygon2DData *local_c8;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  undefined1 auStack_a8 [20];
  uint uStack_94;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined4 local_64;
  
  pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ModifiedVertices).field_0x10;
  this->_padding_ =
       (longlong)&___7__FPCGPolygon2DVerticesAccessor_U__TVector_N_Math_UE___0A__PCGTemporary__6B_;
  this_01 = (TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&this->ModifiedVertices;
  iVar9 = *(int *)&(this->ModifiedVertices).field_0x28;
  local_118._8_4_ = 0;
  iVar19 = 0;
  local_118._12_4_ = 1;
  FStack_100.Data._4_4_ = 0;
  if (iVar9 != 0) {
    puVar20 = *(uint **)&(this->ModifiedVertices).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar22;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar11 = (longlong)(int)local_118._8_4_;
      iVar19 = iVar19 + 0x20;
      local_118._8_4_ = local_118._8_4_ + 1;
      FStack_100.Data._4_4_ = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_118._8_4_)
      goto LAB_149890741;
      uVar15 = puVar20[lVar11 + 1];
    }
    local_118._12_4_ = -uVar15 & uVar15;
    uVar10 = (ulonglong)(uint)local_118._12_4_ * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    FStack_100.Data._4_4_ = iVar19 + -1 + local_res20;
    if (iVar9 < FStack_100.Data._4_4_) {
      FStack_100.Data._4_4_ = iVar9;
    }
  }
LAB_149890741:
  uVar15 = *(uint *)&(this->ModifiedVertices).field_0x28;
  iStack_f0 = *(int *)&(this->ModifiedVertices).field_0x8 -
              *(int *)&(this->ModifiedVertices).field_0x34;
  FStack_100.Data._0_4_ = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  local_f8 = CONCAT44(local_64,iVar19);
  auStack_a8._0_8_ = local_118._8_8_;
  iVar19 = (int)uVar15 >> 5;
  uStack_88 = CONCAT44(uStack_ec,iStack_f0);
  local_90 = local_f8;
  stack0xffffffffffffff68 = FStack_100.Data;
  local_res18 = uVar15;
  local_118._0_8_ = this_01;
  local_118._16_8_ = pTVar22;
  local_c0 = this_01;
  local_b8 = pTVar22;
  local_b0 = this_01;
  auStack_a8._8_8_ = pTVar22;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->ModifiedVertices).field_0x28;
  if (uVar15 != uVar8) {
    puVar18 = *(undefined1 **)&(this->ModifiedVertices).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar22;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar19;
      uVar14 = uVar14 + 0x20;
      iVar19 = iVar19 + 1;
      uVar15 = uVar8;
      local_res18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_149890860;
      uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uVar15 = local_d0 + -1 + uVar14;
    local_res18 = uVar15;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
      local_res18 = uVar8;
    }
  }
LAB_149890860:
  do {
    pTVar6 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((uStack_94 == uVar15) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_a8._8_8_ == pTVar22)) &&
       (pTVar6 == this_01)) {
      *(undefined4 *)&this_01[1].field_0x10 = 0;
      if (*(void **)&this_01[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_01[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_01);
      return;
    }
    lVar11 = *(longlong *)pTVar6;
    lVar21 = (longlong)(int)uStack_94 * 0x20;
    local_d8.ObjectIndex = *(int *)(lVar21 + lVar11);
    local_d8.ObjectSerialNumber = *(int *)(lVar21 + 4 + lVar11);
    this_00 = (UPCGPolygon2DData *)FWeakObjectPtr::Get(&local_d8);
    local_c8 = this_00;
    if (this_00 != (UPCGPolygon2DData *)0x0) {
      local_118._0_8_ = (FScriptContainerElement *)0x0;
      local_118._8_8_ = 0;
      FStack_100.Data = (FScriptContainerElement *)0x0;
      local_f8 = 0;
      if ((*(int *)(lVar21 + 0x10 + lVar11) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = *(undefined8 **)(lVar21 + 8 + lVar11);
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = *(int *)(puVar1 + 1);
      lVar12 = (longlong)local_e8.ArrayNum;
      pvVar2 = (void *)*puVar1;
      if (local_e8.ArrayNum == 0) {
        local_e8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_e8.ArrayNum,0,&local_e8.AllocatorInstance,local_e8.ArrayNum,
                   &local_e8.ArrayMax);
        memcpy(local_e8.AllocatorInstance.Data,pvVar2,lVar12 << 4);
      }
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_118,
                 &local_e8);
      dVar5 = UE::Geometry::TPolygon2<double>::SignedArea((TPolygon2<double> *)&local_e8);
      local_118[0x10] = dVar5 < 0.0;
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      iVar9 = *(int *)(lVar21 + 0x10 + lVar11);
      uVar15 = 1;
      if (1 < iVar9) {
        lVar12 = 0x10;
        do {
          uVar14 = 0;
          if ((int)uVar15 < iVar9) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(lVar21 + 8 + lVar11);
          local_128.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Vertices.ArrayNum = *(int *)(lVar3 + 8 + lVar12);
          lVar16 = (longlong)local_128.Vertices.ArrayNum;
          pvVar2 = *(void **)(lVar3 + lVar12);
          if (local_128.Vertices.ArrayNum == 0) {
            local_128.Vertices.ArrayMax = 0;
            iVar9 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_128.Vertices.ArrayNum,0,(ForAnyElementType *)&local_128,
                       local_128.Vertices.ArrayNum,&local_128.Vertices.ArrayMax);
            memcpy(local_128.Vertices.AllocatorInstance.Data,pvVar2,lVar16 << 4);
            iVar9 = local_128.Vertices.ArrayNum;
          }
          uVar14 = 0;
          iVar19 = iVar9;
          if (0 < iVar9) {
            do {
              uVar8 = 0;
              if ((int)uVar14 < iVar19) {
                uVar8 = ~uVar14 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              bVar7 = UE::Geometry::TPolygon2<double>::Contains
                                ((TPolygon2<double> *)local_118,
                                 (TVector2<double> *)
                                 (local_128.Vertices.AllocatorInstance.Data +
                                 (ulonglong)uVar14 * 0x10));
              if (!bVar7) goto LAB_149890c1a;
              uVar14 = uVar14 + 1;
              iVar19 = local_128.Vertices.ArrayNum;
            } while ((int)uVar14 < iVar9);
          }
          bVar7 = UE::Geometry::TPolygon2<double>::Intersects
                            ((TPolygon2<double> *)local_118,&local_128);
          if (!bVar7) {
            iVar9 = (int)local_f8;
            uVar10 = (ulonglong)(int)local_f8;
            pFVar17 = FStack_100.Data + uVar10 * 0x10;
            FVar13.Data = FStack_100.Data;
            while( true ) {
              if ((int)uVar10 != iVar9) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res10);
              }
              if (FVar13.Data == pFVar17) break;
              bVar7 = UE::Geometry::TPolygon2<double>::Overlaps
                                (&local_128,(TPolygon2<double> *)FVar13.Data);
              if (bVar7) goto LAB_149890c1a;
              uVar10 = local_f8 & 0xffffffff;
              FVar13.Data = FVar13.Data + 0x10;
            }
            dVar5 = UE::Geometry::TPolygon2<double>::SignedArea(&local_128);
            if ((bool)local_118[0x10] != dVar5 < 0.0) {
              if (((FStack_100.Data <= (FScriptContainerElement *)&local_128) &&
                  ((FScriptContainerElement *)&local_128 <
                   FStack_100.Data + (longlong)local_f8._4_4_ * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar9 = (int)local_f8;
              if ((int)local_f8 == local_f8._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&FStack_100,(int *)((longlong)&local_f8 + 4));
              }
              local_f8 = CONCAT44(local_f8._4_4_,iVar9 + 1);
              UE::Geometry::TPolygon2<double>::TPolygon2<double>
                        ((TPolygon2<double> *)(FStack_100.Data + (longlong)iVar9 * 0x10),&local_128)
              ;
            }
          }
LAB_149890c1a:
          if (local_128.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Vertices.AllocatorInstance.Data);
          }
          iVar9 = *(int *)(lVar21 + 0x10 + lVar11);
          uVar15 = uVar15 + 1;
          lVar12 = lVar12 + 0x10;
          this_00 = local_c8;
          this_01 = local_c0;
        } while ((int)uVar15 < iVar9);
      }
      UE::Geometry::TGeneralPolygon2<double>::operator=
                (&this_00->Polygon,(TGeneralPolygon2<double> *)local_118);
      UPCGPolygon2DData::UpdateMappings(this_00);
      DestructItems<UE::Geometry::TPolygon2<double>,int>
                ((TPolygon2<double> *)FStack_100.Data,(int)local_f8);
      if (FStack_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_100.Data);
      }
      uVar15 = local_res18;
      if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._0_8_);
        uVar15 = local_res18;
      }
    }
    stack0xffffffffffffff68 =
         (FScriptContainerElement *)CONCAT44(uStack_94,auStack_a8._16_4_ & ~auStack_a8._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a8);
    pTVar22 = local_b8;
  } while( true );
}

// GetRangeImpl @ 1498c2d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<int,2>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<int,2> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  TTuple<int,int> *pTVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 auStackY_f8 [32];
  longlong *local_c8 [2];
  TArrayView<void_const_*,int> local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b8.ArrayNum = 1;
  local_b8.DataPtr = local_c8;
  iVar10 = 0;
  local_c8[0] = (longlong *)0x0;
  bVar5 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_b8);
  if (bVar5) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar6 = (*pcVar2)(param_3);
    plVar4 = local_c8[0];
    if (cVar6 == '\0') {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081179>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    else {
      (**(code **)(*local_c8[0] + 0x498))(local_c8[0],local_a8);
      iVar11 = (int)plVar4[0x37] - *(int *)((longlong)plVar4 + 0x1e4);
      if (iVar11 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar8 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                     ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                    *)(plVar4 + 0x36),(param_2 + iVar10) % iVar11);
            TVar3 = *pTVar8;
            piVar9 = TArrayView<int,int>::operator[](param_1,iVar10);
            iVar10 = iVar10 + 1;
            *piVar9 = TVar3._0_4_;
          } while (iVar10 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c2e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<int,3>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<int,3> *this,TArrayView<int,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  TTuple<int,int> *pTVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 auStackY_f8 [32];
  longlong *local_c8 [2];
  TArrayView<void_const_*,int> local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_b8.ArrayNum = 1;
  local_b8.DataPtr = local_c8;
  iVar10 = 0;
  local_c8[0] = (longlong *)0x0;
  bVar5 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_b8);
  if (bVar5) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar6 = (*pcVar2)(param_3);
    plVar4 = local_c8[0];
    if (cVar6 == '\0') {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081179>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    else {
      (**(code **)(*local_c8[0] + 0x498))(local_c8[0],local_a8);
      iVar11 = (int)plVar4[0x37] - *(int *)((longlong)plVar4 + 0x1e4);
      if (iVar11 != 0) {
        iVar1 = param_1->ArrayNum;
        if (0 < iVar1) {
          do {
            pTVar8 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                     ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                    *)(plVar4 + 0x36),(param_2 + iVar10) % iVar11);
            TVar3 = *pTVar8;
            piVar9 = TArrayView<int,int>::operator[](param_1,iVar10);
            iVar10 = iVar10 + 1;
            *piVar9 = TVar3._4_4_;
          } while (iVar10 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c2fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<double,4>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<double,4> *this,TArrayView<double,int> *param_1,int param_2
          ,IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  double dVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  TTuple<int,int> *pTVar10;
  double *pdVar11;
  TPolygon2<double> *this_00;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStackY_138 [32];
  longlong *local_100;
  TArrayView<void_const_*,int> local_f8;
  TSegment2<double> local_e8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8.ArrayNum = 1;
  local_f8.DataPtr = &local_100;
  local_100 = (longlong *)0x0;
  bVar6 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_f8);
  if (bVar6) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar7 = (*pcVar2)(param_3);
    plVar5 = local_100;
    if (cVar7 == '\0') {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081179>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      (**(code **)(*local_100 + 0x498))(local_100,local_b8);
      dVar4 = __real_4000000000000000;
      iVar14 = (int)plVar5[0x37] - *(int *)((longlong)plVar5 + 0x1e4);
      if (iVar14 != 0) {
        iVar1 = param_1->ArrayNum;
        iVar12 = 0;
        if (0 < iVar1) {
          do {
            pTVar10 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar5 + 0x36),(param_2 + iVar12) % iVar14);
            TVar3 = *pTVar10;
            uVar13 = TVar3._4_4_;
            this_00 = (TPolygon2<double> *)(plVar5 + 0x22);
            if (uVar13 != 0xffffffff) {
              uVar9 = 0;
              if ((int)uVar13 < (int)plVar5[0x26]) {
                uVar9 = ~uVar13 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              this_00 = (TPolygon2<double> *)((longlong)(int)uVar13 * 0x10 + plVar5[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment(this_00,&local_e8,TVar3._0_4_);
            pdVar11 = TArrayView<double,int>::operator[](param_1,iVar12);
            iVar12 = iVar12 + 1;
            *pdVar11 = local_e8.Extent * dVar4;
          } while (iVar12 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  uint uVar16;
  TTuple<int,int> *pTVar17;
  TMatrix<double> *this_00;
  TQuat<double> *pTVar18;
  TPolygon2<double> *this_01;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStackY_258 [32];
  longlong *local_220;
  TArrayView<void_const_*,int> local_218;
  TVector<double>_u_0 local_208;
  TSegment2<double> local_1f0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TQuat<double> local_1a8;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_218.ArrayNum = 1;
  local_218.DataPtr = &local_220;
  local_220 = (longlong *)0x0;
  bVar13 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_218);
  if (bVar13) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar14 = (*pcVar2)(param_3);
    plVar12 = local_220;
    if (cVar14 == '\0') {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5660170522739081179>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                          ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        uVar15 = (*pcVar2)();
        return (bool)uVar15;
      }
    }
    else {
      (**(code **)(*local_220 + 0x498))(local_220,&local_188);
      iVar20 = (int)plVar12[0x37] - *(int *)((longlong)plVar12 + 0x1e4);
      if (iVar20 != 0) {
        iVar1 = param_1->ArrayNum;
        iVar21 = 0;
        if (0 < iVar1) {
          do {
            pTVar17 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar12 + 0x36),(param_2 + iVar21) % iVar20);
            TVar3 = *pTVar17;
            uVar19 = TVar3._4_4_;
            this_01 = (TPolygon2<double> *)(plVar12 + 0x22);
            if (uVar19 != 0xffffffff) {
              uVar16 = 0;
              if ((int)uVar19 < (int)plVar12[0x26]) {
                uVar16 = ~uVar19 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar2 = (code *)swi(3);
                uVar15 = (*pcVar2)();
                return (bool)uVar15;
              }
              this_01 = (TPolygon2<double> *)((longlong)(int)uVar19 * 0x10 + plVar12[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment(this_01,&local_1f0,TVar3._0_4_);
            local_208._s_0.Z = 0.0;
            local_208._s_0.X = local_1f0.Direction.field0_0x0._s_0.X;
            local_208._s_0.Y = local_1f0.Direction.field0_0x0._s_0.Y;
            this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                                (&local_128,(TVector<double> *)&local_208._s_0,
                                 &UE::Math::TVector<double>::UpVector);
            pTVar18 = UE::Math::TMatrix<double>::ToQuat(this_00,&local_1a8);
            dVar8 = pTVar18->Z;
            dVar9 = pTVar18->W;
            dVar10 = pTVar18->X;
            dVar11 = pTVar18->Y;
            dVar5 = local_188 * dVar9 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dStack_170 * dVar10 +
                    dStack_180 * dVar8 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    local_178 * dVar11 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar6 = local_188 * dVar8 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    dStack_170 * dVar11 +
                    dStack_180 * dVar9 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    local_178 * dVar10 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar22 = SUB84(dVar6,0);
            uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
            dVar6 = local_188 * dVar11 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    dStack_170 * dVar8 +
                    dStack_180 * dVar10 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    local_178 * dVar9 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar8 = local_188 * dVar10 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    dStack_170 * dVar9 +
                    dStack_180 * dVar11 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    local_178 * dVar8 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar24 = SUB84(dVar8,0);
            uVar25 = (undefined4)((ulonglong)dVar8 >> 0x20);
            local_1c8._8_4_ = uVar22;
            local_1c8._0_8_ = dVar5;
            local_1c8._12_4_ = uVar23;
            local_1b8._8_4_ = uVar24;
            local_1b8._0_8_ = dVar6;
            local_1b8._12_4_ = uVar25;
            pTVar18 = TArrayView<UE::Math::TQuat<double>,int>::operator[](param_1,iVar21);
            iVar21 = iVar21 + 1;
            auVar4._8_4_ = uVar22;
            auVar4._0_8_ = dVar5;
            auVar4._12_4_ = uVar23;
            pTVar18->X = dVar5;
            pTVar18->Y = (double)auVar4._8_8_;
            auVar7._8_4_ = uVar24;
            auVar7._0_8_ = dVar6;
            auVar7._12_4_ = uVar25;
            pTVar18->Z = dVar6;
            pTVar18->W = (double)auVar7._8_8_;
          } while (iVar21 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c3510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6> *this,
          TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  TTuple<int,int> *pTVar13;
  TMatrix<double> *this_00;
  TQuat<double> *pTVar14;
  TPolygon2<double> *this_01;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStackY_208 [32];
  longlong *local_1d0;
  TArrayView<void_const_*,int> local_1c8;
  TVector<double>_u_0 local_1b8;
  TSegment2<double> local_1a0;
  TQuat<double> local_178;
  undefined1 local_158 [96];
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c8.ArrayNum = 1;
  local_1c8.DataPtr = &local_1d0;
  local_1d0 = (longlong *)0x0;
  bVar9 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_1c8);
  if (bVar9) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar10 = (*pcVar2)(param_3);
    plVar8 = local_1d0;
    if (cVar10 == '\0') {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081179>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar11 = (*pcVar2)();
        return (bool)uVar11;
      }
    }
    else {
      (**(code **)(*local_1d0 + 0x498))(local_1d0,local_158);
      iVar16 = (int)plVar8[0x37] - *(int *)((longlong)plVar8 + 0x1e4);
      if (iVar16 != 0) {
        iVar1 = param_1->ArrayNum;
        iVar17 = 0;
        if (0 < iVar1) {
          do {
            pTVar13 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar8 + 0x36),(param_2 + iVar17) % iVar16);
            TVar3 = *pTVar13;
            uVar15 = TVar3._4_4_;
            this_01 = (TPolygon2<double> *)(plVar8 + 0x22);
            if (uVar15 != 0xffffffff) {
              uVar12 = 0;
              if ((int)uVar15 < (int)plVar8[0x26]) {
                uVar12 = ~uVar15 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                uVar11 = (*pcVar2)();
                return (bool)uVar11;
              }
              this_01 = (TPolygon2<double> *)((longlong)(int)uVar15 * 0x10 + plVar8[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment(this_01,&local_1a0,TVar3._0_4_);
            local_1b8._s_0.Z = 0.0;
            local_1b8._s_0.X = local_1a0.Direction.field0_0x0._s_0.X;
            local_1b8._s_0.Y = local_1a0.Direction.field0_0x0._s_0.Y;
            this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                                (&local_f8,(TVector<double> *)&local_1b8._s_0,
                                 &UE::Math::TVector<double>::UpVector);
            pTVar14 = UE::Math::TMatrix<double>::ToQuat(this_00,&local_178);
            dVar4 = pTVar14->X;
            dVar5 = pTVar14->Y;
            dVar6 = pTVar14->Z;
            dVar7 = pTVar14->W;
            pTVar14 = TArrayView<UE::Math::TQuat<double>,int>::operator[](param_1,iVar17);
            iVar17 = iVar17 + 1;
            pTVar14->X = dVar4;
            pTVar14->Y = dVar5;
            pTVar14->Z = dVar6;
            pTVar14->W = dVar7;
          } while (iVar17 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c3770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  TTuple<int,int> TVar2;
  longlong *plVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  TTuple<int,int> *pTVar11;
  TVector2<double> *pTVar12;
  TPolygon2<double> *this_00;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_158 [32];
  longlong *local_128 [2];
  TArrayView<void_const_*,int> local_118;
  TVector2<double>_u_0 local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_118.ArrayNum = 1;
  local_118.DataPtr = local_128;
  local_128[0] = (longlong *)0x0;
  bVar7 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_118);
  if (bVar7) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar8 = (*pcVar1)(param_3);
    plVar3 = local_128[0];
    if (cVar8 == '\0') {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081179>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        uVar9 = (*pcVar1)();
        return (bool)uVar9;
      }
    }
    else {
      (**(code **)(*local_128[0] + 0x498))(local_128[0],local_d8);
      iVar15 = (int)plVar3[0x37] - *(int *)((longlong)plVar3 + 0x1e4);
      if (iVar15 != 0) {
        iVar14 = 0;
        if (0 < param_1->ArrayNum) {
          do {
            pTVar11 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar3 + 0x36),(iVar14 + param_2) % iVar15);
            TVar2 = *pTVar11;
            uVar13 = TVar2._4_4_;
            this_00 = (TPolygon2<double> *)(plVar3 + 0x22);
            if (uVar13 != 0xffffffff) {
              uVar10 = 0;
              if ((int)uVar13 < (int)plVar3[0x26]) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar1 = (code *)swi(3);
                uVar9 = (*pcVar1)();
                return (bool)uVar9;
              }
              this_00 = (TPolygon2<double> *)((longlong)(int)uVar13 * 0x10 + plVar3[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment
                      (this_00,(TSegment2<double> *)&local_108._s_0,TVar2._0_4_);
            dVar6 = local_e8;
            dVar5 = local_f0;
            uVar4 = local_108._s_0.Y;
            pTVar12 = TArrayView<UE::Math::TVector2<double>,int>::operator[](param_1,iVar14);
            iVar14 = iVar14 + 1;
            (pTVar12->field0_0x0)._s_0.X = local_108._s_0.X - local_f8 * dVar6;
            (pTVar12->field0_0x0)._s_0.Y = (double)uVar4 - dVar5 * dVar6;
          } while (iVar14 < param_1->ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c39c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this,
          TArrayView<UE::Math::TVector2<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  code *pcVar1;
  TTuple<int,int> TVar2;
  longlong *plVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  TTuple<int,int> *pTVar11;
  TVector2<double> *pTVar12;
  TPolygon2<double> *this_00;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_158 [32];
  longlong *local_128 [2];
  TArrayView<void_const_*,int> local_118;
  TVector2<double>_u_0 local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_d8 [96];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_118.ArrayNum = 1;
  local_118.DataPtr = local_128;
  local_128[0] = (longlong *)0x0;
  bVar7 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_118);
  if (bVar7) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar8 = (*pcVar1)(param_3);
    plVar3 = local_128[0];
    if (cVar8 == '\0') {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2526794840092442565>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.inl"
                         ,0x3b,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        uVar9 = (*pcVar1)();
        return (bool)uVar9;
      }
    }
    else {
      (**(code **)(*local_128[0] + 0x498))(local_128[0],local_d8);
      iVar15 = (int)plVar3[0x37] - *(int *)((longlong)plVar3 + 0x1e4);
      if (iVar15 != 0) {
        iVar14 = 0;
        if (0 < param_1->ArrayNum) {
          do {
            pTVar11 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar3 + 0x36),(iVar14 + param_2) % iVar15);
            TVar2 = *pTVar11;
            uVar13 = TVar2._4_4_;
            this_00 = (TPolygon2<double> *)(plVar3 + 0x22);
            if (uVar13 != 0xffffffff) {
              uVar10 = 0;
              if ((int)uVar13 < (int)plVar3[0x26]) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar1 = (code *)swi(3);
                uVar9 = (*pcVar1)();
                return (bool)uVar9;
              }
              this_00 = (TPolygon2<double> *)((longlong)(int)uVar13 * 0x10 + plVar3[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment
                      (this_00,(TSegment2<double> *)&local_108._s_0,TVar2._0_4_);
            dVar6 = local_e8;
            dVar5 = local_f0;
            uVar4 = local_108._s_0.Y;
            pTVar12 = TArrayView<UE::Math::TVector2<double>,int>::operator[](param_1,iVar14);
            iVar14 = iVar14 + 1;
            (pTVar12->field0_0x0)._s_0.X = local_108._s_0.X - local_f8 * dVar6;
            (pTVar12->field0_0x0)._s_0.Y = (double)uVar4 - dVar5 * dVar6;
          } while (iVar14 < param_1->ArrayNum);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c3c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  longlong *plVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  TTuple<int,int> *pTVar15;
  TVector<double> *pTVar16;
  TPolygon2<double> *this_00;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_1c8 [32];
  longlong *local_190;
  TArrayView<void_const_*,int> local_188;
  TVector2<double>_u_0 local_178;
  double local_168;
  double local_160;
  double local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_188.ArrayNum = 1;
  local_188.DataPtr = &local_190;
  local_190 = (longlong *)0x0;
  bVar11 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_188);
  if (bVar11) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar12 = (*pcVar2)(param_3);
    plVar10 = local_190;
    if (cVar12 == '\0') {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5660170522739081179>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                          ,0x25,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
    }
    else {
      (**(code **)(*local_190 + 0x498))(local_190,local_118);
      iVar18 = (int)plVar10[0x37] - *(int *)((longlong)plVar10 + 0x1e4);
      if (iVar18 != 0) {
        iVar1 = param_1->ArrayNum;
        iVar19 = 0;
        if (0 < iVar1) {
          do {
            pTVar15 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar10 + 0x36),(param_2 + iVar19) % iVar18);
            TVar3 = *pTVar15;
            uVar17 = TVar3._4_4_;
            this_00 = (TPolygon2<double> *)(plVar10 + 0x22);
            if (uVar17 != 0xffffffff) {
              uVar14 = 0;
              if ((int)uVar17 < (int)plVar10[0x26]) {
                uVar14 = ~uVar17 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar2 = (code *)swi(3);
                uVar13 = (*pcVar2)();
                return (bool)uVar13;
              }
              this_00 = (TPolygon2<double> *)((longlong)(int)uVar17 * 0x10 + plVar10[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment
                      (this_00,(TSegment2<double> *)&local_178._s_0,TVar3._0_4_);
            dVar33 = local_c8 * 0.0;
            dVar9 = dStack_c0 * 0.0;
            dVar5 = local_108._8_8_;
            dVar28 = local_178._s_0.X - local_168 * local_158;
            local_140 = 0;
            dVar25 = local_178._s_0.Y - local_160 * local_158;
            dVar29 = local_118._8_8_;
            dVar4 = local_108._0_8_;
            auVar30 = blendpd(local_118,local_108,2);
            dVar6 = local_d8 * dVar28;
            dVar7 = dStack_d0 * dVar25;
            uVar31 = (undefined4)((ulonglong)dVar7 >> 0x20);
            local_150._8_4_ = SUB84(dVar25,0);
            local_150._0_8_ = dVar28;
            local_150._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            auVar34._8_4_ = SUB84(dVar7,0);
            auVar34._0_8_ = dVar6;
            auVar34._12_4_ = uVar31;
            auVar20._8_4_ = SUB84(dVar7,0);
            auVar20._0_8_ = dVar6;
            auVar20._12_4_ = uVar31;
            auVar8._8_4_ = SUB84(dVar9,0);
            auVar8._0_8_ = dVar33;
            auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            auVar21 = blendpd(auVar20,auVar8,2);
            auVar35._0_8_ = auVar34._8_8_ * local_118._0_8_ - dVar29 * dVar6;
            auVar35._8_8_ = dVar33 * dVar29 - dVar4 * dVar7;
            auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar30._0_8_ * dVar33;
            auVar22._8_8_ = auVar21._8_8_ * dVar5 - auVar30._8_8_ * dVar9;
            auVar21 = blendpd(auVar35,auVar22,2);
            dVar9 = auVar35._8_8_ + auVar35._8_8_;
            dVar25 = auVar22._0_8_ + auVar22._0_8_;
            uVar31 = (undefined4)((ulonglong)dVar25 >> 0x20);
            auVar36._0_8_ = auVar21._0_8_ + auVar21._0_8_;
            auVar36._8_8_ = auVar21._8_8_ + auVar21._8_8_;
            auVar26._8_4_ = SUB84(dVar25,0);
            auVar26._0_8_ = dVar9;
            auVar26._12_4_ = uVar31;
            auVar23._8_4_ = SUB84(dVar25,0);
            auVar23._0_8_ = dVar9;
            auVar23._12_4_ = uVar31;
            auVar21 = blendpd(auVar23,auVar36,2);
            auVar27._0_8_ = auVar26._8_8_ * local_118._0_8_ - dVar9 * dVar29;
            auVar27._8_8_ = auVar36._0_8_ * dVar29 - dVar25 * dVar4;
            auVar24._0_8_ = auVar21._0_8_ * dVar4 - auVar36._0_8_ * auVar30._0_8_;
            auVar24._8_8_ = auVar21._8_8_ * dVar5 - auVar36._8_8_ * auVar30._8_8_;
            auVar21 = blendpd(auVar27,auVar24,2);
            dVar33 = auVar36._0_8_ * dVar5 + dVar33 + auVar21._0_8_ + local_e8;
            dVar4 = dVar9 * dVar5 + dVar6 + auVar27._8_8_ + local_f8;
            dVar5 = dVar25 * dVar5 + dVar7 + auVar24._0_8_ + dStack_f0;
            uVar31 = SUB84(dVar5,0);
            uVar32 = (undefined4)((ulonglong)dVar5 >> 0x20);
            local_138._8_4_ = uVar31;
            local_138._0_8_ = dVar4;
            local_138._12_4_ = uVar32;
            local_128 = dVar33;
            pTVar16 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar19);
            iVar19 = iVar19 + 1;
            auVar21._8_4_ = uVar31;
            auVar21._0_8_ = dVar4;
            auVar21._12_4_ = uVar32;
            *(undefined1 (*) [16])&pTVar16->field0_0x0 = auVar21;
            (pTVar16->field0_0x0)._s_0.Z = dVar33;
          } while (iVar19 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// GetRangeImpl @ 1498c3fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::GetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  code *pcVar2;
  TTuple<int,int> TVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  longlong *plVar10;
  bool bVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  TTuple<int,int> *pTVar15;
  TVector<double> *pTVar16;
  TPolygon2<double> *this_00;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_1c8 [32];
  longlong *local_190;
  TArrayView<void_const_*,int> local_188;
  TVector2<double>_u_0 local_178;
  double local_168;
  double local_160;
  double local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_188.ArrayNum = 1;
  local_188.DataPtr = &local_190;
  local_190 = (longlong *)0x0;
  bVar11 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_188);
  if (bVar11) {
    pcVar2 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar12 = (*pcVar2)(param_3);
    plVar10 = local_190;
    if (cVar12 == '\0') {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2526794840092442565>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.inl"
                          ,0x3b,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
    }
    else {
      (**(code **)(*local_190 + 0x498))(local_190,local_118);
      iVar18 = (int)plVar10[0x37] - *(int *)((longlong)plVar10 + 0x1e4);
      if (iVar18 != 0) {
        iVar1 = param_1->ArrayNum;
        iVar19 = 0;
        if (0 < iVar1) {
          do {
            pTVar15 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)(plVar10 + 0x36),(param_2 + iVar19) % iVar18);
            TVar3 = *pTVar15;
            uVar17 = TVar3._4_4_;
            this_00 = (TPolygon2<double> *)(plVar10 + 0x22);
            if (uVar17 != 0xffffffff) {
              uVar14 = 0;
              if ((int)uVar17 < (int)plVar10[0x26]) {
                uVar14 = ~uVar17 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar2 = (code *)swi(3);
                uVar13 = (*pcVar2)();
                return (bool)uVar13;
              }
              this_00 = (TPolygon2<double> *)((longlong)(int)uVar17 * 0x10 + plVar10[0x25]);
            }
            UE::Geometry::TPolygon2<double>::Segment
                      (this_00,(TSegment2<double> *)&local_178._s_0,TVar3._0_4_);
            dVar33 = local_c8 * 0.0;
            dVar9 = dStack_c0 * 0.0;
            dVar5 = local_108._8_8_;
            dVar28 = local_178._s_0.X - local_168 * local_158;
            local_140 = 0;
            dVar25 = local_178._s_0.Y - local_160 * local_158;
            dVar29 = local_118._8_8_;
            dVar4 = local_108._0_8_;
            auVar30 = blendpd(local_118,local_108,2);
            dVar6 = local_d8 * dVar28;
            dVar7 = dStack_d0 * dVar25;
            uVar31 = (undefined4)((ulonglong)dVar7 >> 0x20);
            local_150._8_4_ = SUB84(dVar25,0);
            local_150._0_8_ = dVar28;
            local_150._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            auVar34._8_4_ = SUB84(dVar7,0);
            auVar34._0_8_ = dVar6;
            auVar34._12_4_ = uVar31;
            auVar20._8_4_ = SUB84(dVar7,0);
            auVar20._0_8_ = dVar6;
            auVar20._12_4_ = uVar31;
            auVar8._8_4_ = SUB84(dVar9,0);
            auVar8._0_8_ = dVar33;
            auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            auVar21 = blendpd(auVar20,auVar8,2);
            auVar35._0_8_ = auVar34._8_8_ * local_118._0_8_ - dVar29 * dVar6;
            auVar35._8_8_ = dVar33 * dVar29 - dVar4 * dVar7;
            auVar22._0_8_ = auVar21._0_8_ * dVar4 - auVar30._0_8_ * dVar33;
            auVar22._8_8_ = auVar21._8_8_ * dVar5 - auVar30._8_8_ * dVar9;
            auVar21 = blendpd(auVar35,auVar22,2);
            dVar9 = auVar35._8_8_ + auVar35._8_8_;
            dVar25 = auVar22._0_8_ + auVar22._0_8_;
            uVar31 = (undefined4)((ulonglong)dVar25 >> 0x20);
            auVar36._0_8_ = auVar21._0_8_ + auVar21._0_8_;
            auVar36._8_8_ = auVar21._8_8_ + auVar21._8_8_;
            auVar26._8_4_ = SUB84(dVar25,0);
            auVar26._0_8_ = dVar9;
            auVar26._12_4_ = uVar31;
            auVar23._8_4_ = SUB84(dVar25,0);
            auVar23._0_8_ = dVar9;
            auVar23._12_4_ = uVar31;
            auVar21 = blendpd(auVar23,auVar36,2);
            auVar27._0_8_ = auVar26._8_8_ * local_118._0_8_ - dVar9 * dVar29;
            auVar27._8_8_ = auVar36._0_8_ * dVar29 - dVar25 * dVar4;
            auVar24._0_8_ = auVar21._0_8_ * dVar4 - auVar36._0_8_ * auVar30._0_8_;
            auVar24._8_8_ = auVar21._8_8_ * dVar5 - auVar36._8_8_ * auVar30._8_8_;
            auVar21 = blendpd(auVar27,auVar24,2);
            dVar33 = auVar36._0_8_ * dVar5 + dVar33 + auVar21._0_8_ + local_e8;
            dVar4 = dVar9 * dVar5 + dVar6 + auVar27._8_8_ + local_f8;
            dVar5 = dVar25 * dVar5 + dVar7 + auVar24._0_8_ + dStack_f0;
            uVar31 = SUB84(dVar5,0);
            uVar32 = (undefined4)((ulonglong)dVar5 >> 0x20);
            local_138._8_4_ = uVar31;
            local_138._0_8_ = dVar4;
            local_138._12_4_ = uVar32;
            local_128 = dVar33;
            pTVar16 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,iVar19);
            iVar19 = iVar19 + 1;
            auVar21._8_4_ = uVar31;
            auVar21._0_8_ = dVar4;
            auVar21._12_4_ = uVar32;
            *(undefined1 (*) [16])&pTVar16->field0_0x0 = auVar21;
            (pTVar16->field0_0x0)._s_0.Z = dVar33;
          } while (iVar19 < iVar1);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e8250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<int,2>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<int,2> *this,TArrayView<int_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 auStackY_c8 [32];
  longlong *local_98 [2];
  TArrayView<void_*,int> local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88.ArrayNum = 1;
  local_88.DataPtr = local_98;
  local_98[0] = (longlong *)0x0;
  bVar2 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_88);
  if (bVar2) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar3 = (*pcVar1)(param_3);
    if (cVar3 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081096>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      (**(code **)(*local_98[0] + 0x498))(local_98[0],local_78);
    }
  }
  return false;
}

// SetRangeImpl @ 1498e8340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<int,3>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<int,3> *this,TArrayView<int_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 auStackY_c8 [32];
  longlong *local_98 [2];
  TArrayView<void_*,int> local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88.ArrayNum = 1;
  local_88.DataPtr = local_98;
  local_98[0] = (longlong *)0x0;
  bVar2 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_88);
  if (bVar2) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar3 = (*pcVar1)(param_3);
    if (cVar3 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081096>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      (**(code **)(*local_98[0] + 0x498))(local_98[0],local_78);
    }
  }
  return false;
}

// SetRangeImpl @ 1498e8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<double,4>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<double,4> *this,TArrayView<double_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 auStackY_c8 [32];
  longlong *local_98 [2];
  TArrayView<void_*,int> local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88.ArrayNum = 1;
  local_88.DataPtr = local_98;
  local_98[0] = (longlong *)0x0;
  bVar2 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_88);
  if (bVar2) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar3 = (*pcVar1)(param_3);
    if (cVar3 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081096>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      (**(code **)(*local_98[0] + 0x498))(local_98[0],local_78);
    }
  }
  return false;
}

// SetRangeImpl @ 1498e8520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,1> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 auStackY_c8 [32];
  longlong *local_98 [2];
  TArrayView<void_*,int> local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88.ArrayNum = 1;
  local_88.DataPtr = local_98;
  local_98[0] = (longlong *)0x0;
  bVar2 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_88);
  if (bVar2) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar3 = (*pcVar1)(param_3);
    if (cVar3 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081096>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      (**(code **)(*local_98[0] + 0x498))(local_98[0],local_78);
    }
  }
  return false;
}

// SetRangeImpl @ 1498e8610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TQuat<double>,6> *this,
          TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 auStackY_c8 [32];
  longlong *local_98 [2];
  TArrayView<void_*,int> local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88.ArrayNum = 1;
  local_88.DataPtr = local_98;
  local_98[0] = (longlong *)0x0;
  bVar2 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_88);
  if (bVar2) {
    pcVar1 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar3 = (*pcVar1)(param_3);
    if (cVar3 == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5660170522739081096>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                         ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      (**(code **)(*local_98[0] + 0x498))(local_98[0],local_78);
    }
  }
  return false;
}

// SetRangeImpl @ 1498e8700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int *piVar1;
  TGeneralPolygon2<double> *pTVar2;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  code *pcVar5;
  TTuple<int,int> TVar6;
  void *pvVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UPCGPolygon2DData *pUVar11;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar12;
  TMap<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *this_00;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TTuple<int,int> *pTVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar30;
  undefined1 auStackY_1a8 [32];
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  undefined1 local_148;
  undefined1 local_147 [7];
  TPolygon2<double> local_140;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_130;
  bool local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_108;
  int local_f8;
  int local_f4;
  UPCGPolygon2DData *local_f0;
  TArrayView<UE::Math::TVector2<double>_const_,int> *local_e8;
  TMap<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *local_e0;
  UPCGPolygon2DData *local_d8;
  TArrayView<void_*,int> local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)&local_f0;
  local_108.ArrayNum = 1;
  local_c8._12_4_ = local_108.ArrayMax;
  local_c8.ArrayNum = 1;
  local_f0 = (UPCGPolygon2DData *)0x0;
  local_f8 = param_2;
  local_e8 = param_1;
  local_c8.DataPtr = (void **)local_108.AllocatorInstance.Data;
  bVar13 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_c8);
  if (bVar13) {
    pcVar5 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar14 = (*pcVar5)(param_3);
    pUVar11 = local_f0;
    if (cVar14 == '\0') {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5660170522739081096>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                          ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar13) {
        pcVar5 = (code *)swi(3);
        uVar15 = (*pcVar5)();
        return (bool)uVar15;
      }
    }
    else {
      local_d8 = local_f0;
      (**(code **)(*(longlong *)local_f0 + 0x498))(local_f0,local_b8);
      local_e0 = &pUVar11->SegmentIndexToSegmentAndHoleIndices;
      pTVar2 = &pUVar11->Polygon;
      local_f4 = *(int *)&(pUVar11->SegmentIndexToSegmentAndHoleIndices).field_0x8 -
                 *(int *)&(pUVar11->SegmentIndexToSegmentAndHoleIndices).field_0x34;
      if (local_f4 != 0) {
        uVar16 = (pUVar11->Polygon).Holes.ArrayNum + 1;
        local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.ArrayNum = 0;
        local_130.ArrayMax = 0;
        local_150 = 0;
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110 = 0;
        local_158.Data = (FScriptContainerElement *)0x0;
        local_14c = 0;
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        if (((((int)uVar16 < 1) ||
             (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar16,&local_158,0,&local_14c), local_158.Data <= pTVar2)) &&
            (pTVar2 < local_158.Data + (longlong)local_14c * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar15 = (*pcVar5)();
          return (bool)uVar15;
        }
        if (local_150 == local_14c) {
          local_150 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_158,&local_14c);
        }
        lVar22 = (longlong)local_150;
        local_150 = local_150 + 1;
        pFVar23 = local_158.Data + lVar22 * 0x10;
        *(FScriptContainerElement **)&pFVar23->field_0x0 = (FScriptContainerElement *)0x0;
        iVar18 = (pUVar11->Polygon).Outer.Vertices.ArrayNum;
        pFVar29 = (pTVar2->Outer).Vertices.AllocatorInstance.Data;
        *(int *)(pFVar23 + 8) = iVar18;
        if (iVar18 == 0) {
          *(int *)(pFVar23 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar18,0,(ForAnyElementType *)pFVar23,iVar18,(int *)(pFVar23 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar23->field_0x0,pFVar29,(longlong)iVar18 << 4);
        }
        iVar18 = (pUVar11->Polygon).Holes.ArrayNum;
        pTVar24 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  (pUVar11->Polygon).Holes.AllocatorInstance.Data;
        pTVar30 = pTVar24 + iVar18;
        while( true ) {
          if ((pUVar11->Polygon).Holes.ArrayNum != iVar18) {
            local_148 = 0;
            `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_148);
          }
          this_00 = local_e0;
          pTVar12 = local_e8;
          if (pTVar24 == pTVar30) break;
          if (((local_158.Data <= pTVar24) &&
              (pTVar24 < (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                         (local_158.Data + (longlong)local_14c * 0x10))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
          if (local_150 == local_14c) {
            local_150 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_158,&local_14c);
          }
          lVar22 = (longlong)local_150;
          local_150 = local_150 + 1;
          pFVar23 = local_158.Data + lVar22 * 0x10;
          *(FScriptContainerElement **)&pFVar23->field_0x0 = (FScriptContainerElement *)0x0;
          iVar27 = pTVar24->ArrayNum;
          pFVar29 = (pTVar24->AllocatorInstance).Data;
          *(int *)(pFVar23 + 8) = iVar27;
          if (iVar27 == 0) {
            *(int *)(pFVar23 + 0xc) = 0;
            pTVar24 = pTVar24 + 1;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar27,0,(ForAnyElementType *)pFVar23,iVar27,(int *)(pFVar23 + 0xc));
            memcpy(*(FScriptContainerElement **)&pFVar23->field_0x0,pFVar29,(longlong)iVar27 << 4);
            pTVar24 = pTVar24 + 1;
          }
        }
        uVar16 = 0;
        iVar18 = local_e8->ArrayNum;
        if (0 < iVar18) {
          lVar22 = 0;
          do {
            pTVar19 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)this_00,(int)(local_f8 + uVar16) % local_f4);
            TVar6 = *pTVar19;
            uVar17 = 0;
            if ((int)uVar16 < iVar18) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            uVar21 = TVar6._4_4_ + 1;
            puVar4 = (undefined8 *)((longlong)&pTVar12->DataPtr->field0_0x0 + lVar22);
            uVar9 = *puVar4;
            uVar10 = puVar4[1];
            uVar17 = 0;
            if ((int)uVar21 < local_150) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            FVar25.Data = local_158.Data;
            uVar26 = TVar6._0_4_;
            uVar17 = 0;
            if ((int)uVar26 < *(int *)(local_158.Data + (longlong)(int)uVar21 * 0x10 + 8)) {
              uVar17 = ~uVar26 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            uVar16 = uVar16 + 1;
            iVar18 = pTVar12->ArrayNum;
            lVar22 = lVar22 + 0x10;
            puVar4 = (undefined8 *)
                     (*(longlong *)&FVar25.Data[(longlong)(int)uVar21 * 0x10].field_0x0 +
                     (longlong)(int)uVar26 * 0x10);
            *puVar4 = uVar9;
            puVar4[1] = uVar10;
          } while ((int)uVar16 < iVar18);
        }
        if ((local_150 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar15 = (*pcVar5)();
          return (bool)uVar15;
        }
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = *(int *)(local_158.Data + 8);
        lVar22 = (longlong)local_108.ArrayNum;
        pvVar7 = *(void **)local_158.Data;
        if (local_108.ArrayNum == 0) {
          local_108.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_108.ArrayNum,0,&local_108.AllocatorInstance,local_108.ArrayNum,
                     &local_108.ArrayMax);
          memcpy(local_108.AllocatorInstance.Data,pvVar7,lVar22 << 4);
        }
        TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                  (&local_130,&local_108);
        dVar8 = UE::Geometry::TPolygon2<double>::SignedArea((TPolygon2<double> *)&local_108);
        local_120 = dVar8 < 0.0;
        if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        if (1 < local_150) {
          lVar22 = 0x10;
          uVar16 = 1;
          do {
            uVar17 = 0;
            if ((int)uVar16 < local_150) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            local_140.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_140.Vertices.ArrayNum = *(int *)(local_158.Data + lVar22 + 8);
            lVar28 = (longlong)local_140.Vertices.ArrayNum;
            pvVar7 = *(void **)(local_158.Data + lVar22);
            if (local_140.Vertices.ArrayNum == 0) {
              local_140.Vertices.ArrayMax = 0;
              iVar18 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_140.Vertices.ArrayNum,0,(ForAnyElementType *)&local_140,
                         local_140.Vertices.ArrayNum,&local_140.Vertices.ArrayMax);
              memcpy(local_140.Vertices.AllocatorInstance.Data,pvVar7,lVar28 << 4);
              iVar18 = local_140.Vertices.ArrayNum;
            }
            uVar20 = 0;
            iVar27 = iVar18;
            if (0 < iVar18) {
              do {
                uVar21 = (uint)uVar20;
                uVar17 = 0;
                if ((int)uVar21 < iVar27) {
                  uVar17 = ~uVar21 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  uVar15 = (*pcVar5)();
                  return (bool)uVar15;
                }
                bVar13 = UE::Geometry::TPolygon2<double>::Contains
                                   ((TPolygon2<double> *)&local_130,
                                    (TVector2<double> *)
                                    (local_140.Vertices.AllocatorInstance.Data + uVar20 * 0x10));
                if (!bVar13) goto LAB_1498e8f22;
                uVar20 = (ulonglong)(uVar21 + 1);
                iVar27 = local_140.Vertices.ArrayNum;
              } while ((int)(uVar21 + 1) < iVar18);
            }
            bVar13 = UE::Geometry::TPolygon2<double>::Intersects
                               ((TPolygon2<double> *)&local_130,&local_140);
            if (!bVar13) {
              iVar18 = (int)local_110;
              uVar20 = (ulonglong)(int)local_110;
              pFVar29 = local_118.Data + uVar20 * 0x10;
              FVar25.Data = local_118.Data;
              while( true ) {
                if ((int)uVar20 != iVar18) {
                  local_147[0] = 0;
                  `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(local_147);
                }
                if (FVar25.Data == pFVar29) break;
                bVar13 = UE::Geometry::TPolygon2<double>::Overlaps
                                   (&local_140,(TPolygon2<double> *)FVar25.Data);
                if (bVar13) goto LAB_1498e8f22;
                uVar20 = local_110 & 0xffffffff;
                FVar25.Data = FVar25.Data + 0x10;
              }
              dVar8 = UE::Geometry::TPolygon2<double>::SignedArea(&local_140);
              if (local_120 != dVar8 < 0.0) {
                if (((local_118.Data <= (FScriptContainerElement *)&local_140) &&
                    ((FScriptContainerElement *)&local_140 <
                     local_118.Data + (longlong)local_110._4_4_ * 0x10)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  uVar15 = (*pcVar5)();
                  return (bool)uVar15;
                }
                iVar18 = (int)local_110;
                if ((int)local_110 == local_110._4_4_) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_118,(int *)((longlong)&local_110 + 4));
                }
                local_110 = CONCAT44(local_110._4_4_,iVar18 + 1);
                UE::Geometry::TPolygon2<double>::TPolygon2<double>
                          ((TPolygon2<double> *)(local_118.Data + (longlong)iVar18 * 0x10),
                           &local_140);
              }
            }
LAB_1498e8f22:
            if (local_140.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Vertices.AllocatorInstance.Data);
            }
            uVar16 = uVar16 + 1;
            lVar22 = lVar22 + 0x10;
          } while ((int)uVar16 < local_150);
        }
        pUVar11 = local_d8;
        TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                   &local_d8->Polygon,&local_130);
        pTVar3 = &(pUVar11->Polygon).Holes;
        (pUVar11->Polygon).bOuterIsCW = local_120;
        if (pTVar3 != (TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                      &local_118) {
          DestructItems<UE::Geometry::TPolygon2<double>,int>
                    ((TPolygon2<double> *)(pTVar3->AllocatorInstance).Data,
                     (pUVar11->Polygon).Holes.ArrayNum);
          FVar25.Data = local_118.Data;
          iVar27 = (int)local_110;
          piVar1 = &(pUVar11->Polygon).Holes.ArrayMax;
          iVar18 = *piVar1;
          (pUVar11->Polygon).Holes.ArrayNum = (int)local_110;
          if (((int)local_110 == 0) && (iVar18 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(int)local_110,iVar18,&pTVar3->AllocatorInstance,(int)local_110,piVar1
                      );
            ConstructItems<UE::Geometry::TPolygon2<double>,UE::Geometry::TPolygon2<double>,int>
                      ((pTVar3->AllocatorInstance).Data,(TPolygon2<double> *)FVar25.Data,iVar27);
          }
        }
        UPCGPolygon2DData::UpdateMappings(pUVar11);
        DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_158.Data,
                   local_150);
        if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_158.Data !=
            (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_158.Data);
        }
        DestructItems<UE::Geometry::TPolygon2<double>,int>
                  ((TPolygon2<double> *)local_118.Data,(int)local_110);
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498e9050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector2<double>,5> *this,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  code *pcVar5;
  void *pvVar6;
  TTuple<int,int> TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  UObject *pUVar10;
  TArrayView<UE::Math::TVector2<double>_const_,int> *pTVar11;
  bool bVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar16;
  ulonglong uVar17;
  TTuple<int,int> *pTVar18;
  atomic<unsigned_char> *paVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  UObject *pUVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *this_00;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  undefined1 auStackY_198 [32];
  char *pcVar29;
  undefined1 local_148 [8];
  UObject *local_140;
  TKeyInitializer<UPCGPolygon2DData_*_&> local_138;
  int local_130;
  int local_12c;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  UObject *local_118;
  TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *local_110;
  atomic<unsigned_char> *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  UObject *local_f8;
  UObject **local_f0;
  TArrayView<UE::Math::TVector2<double>_const_,int> *local_e8;
  TArrayView<void_*,int> local_d8;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_108 = (atomic<unsigned_char> *)&local_118;
  uStack_100 = 1;
  local_d8._12_4_ = uStack_fc;
  local_d8.ArrayNum = 1;
  local_118 = (UObject *)0x0;
  local_130 = param_2;
  local_e8 = param_1;
  local_d8.DataPtr = (void **)local_108;
  bVar12 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_d8);
  if (bVar12) {
    pcVar5 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar13 = (*pcVar5)(param_3);
    pUVar10 = local_118;
    if (cVar13 == '\0') {
      iVar15 = 0x8e;
      pcVar29 = "Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())";
      paVar19 = &bGEnsureHasExecuted<_2526794840092442482>;
    }
    else {
      local_140 = local_118;
      this_00 = (TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                 *)&local_118[10].field_0x20;
      local_12c = *(int *)(local_118 + 0xb) - *(int *)&local_118[0xc].field_0x4;
      if (local_12c == 0) {
        return false;
      }
      paVar19 = &(this->Lock).State;
      puVar2 = &local_118[6].field_0x20;
      local_110 = this_00;
      local_108 = paVar19;
      if ((paVar19 == (atomic<unsigned_char> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
      LOCK();
      bVar12 = ((FMutex *)paVar19)->State == (atomic<unsigned_char>)0x0;
      if (bVar12) {
        ((FMutex *)paVar19)->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar12) {
        UE::FMutex::LockSlow((FMutex *)paVar19);
      }
      pUVar22 = local_140;
      local_120.ObjectIndex = 0;
      local_120.ObjectSerialNumber = 0;
      if (local_140 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_140);
        }
        local_128.ObjectIndex = 0;
        local_128.ObjectSerialNumber = 0;
        local_f8 = pUVar22;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar22);
        }
        FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_f8);
        local_120 = local_128;
      }
      pUVar22 = local_140;
      pTVar16 = TMapBase<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->ModifiedVertices,(TObjectKey<UPCGPolygon2DData> *)&local_120);
      if (pTVar16 ==
          (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        local_f0 = &local_140;
        TSet<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<UPCGPolygon2DData_*_&>_>
                  ((TSet<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->ModifiedVertices,&local_138,(bool *)&local_f0);
        pTVar16 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*(longlong *)&this->ModifiedVertices + (longlong)(int)local_138.Key * 0x20 + 8
                     );
        uVar25 = *(int *)&pUVar10[7].field_0x18 + 1;
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
        }
        iVar15 = pTVar16->ArrayMax;
        piVar1 = &pTVar16->ArrayMax;
        if (iVar15 < (int)uVar25) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar25,(ForAnyElementType *)pTVar16,pTVar16->ArrayNum,piVar1);
          iVar15 = *piVar1;
        }
        pFVar21 = (pTVar16->AllocatorInstance).Data;
        if (((pFVar21 <= puVar2) && (puVar2 < pFVar21 + (longlong)iVar15 * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar14 = (*pcVar5)();
          return (bool)uVar14;
        }
        iVar15 = pTVar16->ArrayNum;
        if (iVar15 == pTVar16->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pTVar16,piVar1);
          pTVar16->ArrayNum = iVar15;
        }
        pTVar16->ArrayNum = iVar15 + 1;
        pFVar21 = (pTVar16->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
        *(undefined8 *)&pFVar21->field_0x0 = 0;
        iVar15 = *(int *)(pUVar10 + 7);
        pvVar6 = *(void **)puVar2;
        *(int *)&pFVar21[8].field_0x0 = iVar15;
        if (iVar15 == 0) {
          *(int *)(pFVar21 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar15,0,(ForAnyElementType *)pFVar21,iVar15,(int *)(pFVar21 + 0xc));
          memcpy(*(void **)&pFVar21->field_0x0,pvVar6,(longlong)iVar15 << 4);
        }
        local_138.Key._4_4_ = *(uint *)&pUVar10[7].field_0x18;
        uVar17 = (ulonglong)(int)local_138.Key._4_4_;
        pFVar21 = *(FScriptContainerElement **)&pUVar10[7].field_0x10;
        pFVar24 = pFVar21 + uVar17 * 0x10;
        while( true ) {
          if (*(int *)&pUVar10[7].field_0x18 != (int)uVar17) {
            local_148[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_148);
          }
          pUVar22 = local_140;
          paVar19 = local_108;
          this_00 = local_110;
          if (pFVar21 == pFVar24) break;
          pFVar27 = (pTVar16->AllocatorInstance).Data;
          if (((pFVar27 <= pFVar21) && (pFVar21 < pFVar27 + (longlong)pTVar16->ArrayMax * 0x10)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          iVar15 = pTVar16->ArrayNum;
          if (iVar15 == pTVar16->ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pTVar16,&pTVar16->ArrayMax);
          }
          pTVar16->ArrayNum = iVar15 + 1;
          pFVar27 = (pTVar16->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
          *(undefined8 *)&pFVar27->field_0x0 = 0;
          iVar15 = *(int *)(pFVar21 + 8);
          pvVar6 = *(void **)pFVar21;
          *(int *)&pFVar27[8].field_0x0 = iVar15;
          if (iVar15 == 0) {
            *(int *)(pFVar27 + 0xc) = 0;
            pFVar21 = pFVar21 + 0x10;
            uVar17 = (ulonglong)local_138.Key._4_4_;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar15,0,(ForAnyElementType *)pFVar27,iVar15,(int *)(pFVar27 + 0xc));
            memcpy(*(void **)&pFVar27->field_0x0,pvVar6,(longlong)iVar15 << 4);
            uVar17 = (ulonglong)local_138.Key._4_4_;
            pFVar21 = pFVar21 + 0x10;
          }
        }
      }
      uVar17 = 0;
      if (paVar19 != (atomic<unsigned_char> *)0x0) {
        LOCK();
        aVar4 = *paVar19;
        *paVar19 = (atomic<unsigned_char>)((char)*paVar19 + -1);
        UNLOCK();
        pUVar22 = local_140;
        if (((byte)aVar4 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)paVar19);
          pUVar22 = local_140;
        }
      }
      if (pTVar16 !=
          (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        (**(code **)(*(longlong *)pUVar22 + 0x498))(pUVar22,local_c8);
        pTVar11 = local_e8;
        iVar15 = local_e8->ArrayNum;
        uVar28 = uVar17;
        if (0 < iVar15) {
          do {
            uVar23 = (uint)uVar17;
            pTVar18 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked(this_00,(int)(local_130 + uVar23) % local_12c);
            TVar7 = *pTVar18;
            uVar25 = 0;
            if ((int)uVar23 < iVar15) {
              uVar25 = ~uVar23 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            uVar20 = TVar7._4_4_ + 1;
            puVar3 = (undefined8 *)((longlong)&pTVar11->DataPtr->field0_0x0 + uVar28);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar25 = 0;
            if ((int)uVar20 < pTVar16->ArrayNum) {
              uVar25 = ~uVar20 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            uVar26 = TVar7._0_4_;
            pFVar21 = (pTVar16->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10;
            uVar25 = 0;
            if ((int)uVar26 < *(int *)(pFVar21 + 8)) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            uVar17 = (ulonglong)(uVar23 + 1);
            iVar15 = pTVar11->ArrayNum;
            puVar3 = (undefined8 *)(*(longlong *)pFVar21 + (longlong)(int)uVar26 * 0x10);
            *puVar3 = uVar8;
            puVar3[1] = uVar9;
            this_00 = local_110;
            uVar28 = uVar28 + 0x10;
          } while ((int)(uVar23 + 1) < iVar15);
        }
        return true;
      }
      iVar15 = 0xb8;
      pcVar29 = "VerticesPtr";
      paVar19 = &bGEnsureHasExecuted<_2526794840092442440>;
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar19,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.inl"
                        ,iVar15,pcVar29);
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
  }
  return false;
}

// SetRangeImpl @ 1498e9680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int *piVar1;
  TGeneralPolygon2<double> *pTVar2;
  TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  double *pdVar4;
  code *pcVar5;
  TTuple<int,int> TVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  UPCGPolygon2DData *pUVar11;
  TMap<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *this_00;
  bool bVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  TTuple<int,int> *pTVar16;
  ulonglong uVar17;
  uint uVar18;
  UPCGPolygon2DData *pUVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined1 auStackY_2c8 [32];
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  undefined1 local_268;
  undefined1 local_267 [7];
  TPolygon2<double> local_260;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_250;
  bool local_240;
  ForAnyElementType local_238;
  undefined8 local_230;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_228;
  int local_218;
  int local_214;
  TArrayView<UE::Math::TVector<double>_const_,int> *local_210;
  UPCGPolygon2DData *local_208;
  TMap<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *local_200;
  UPCGPolygon2DData *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  TTransform<double> local_1d8;
  TArrayView<void_*,int> local_178;
  undefined1 local_168 [16];
  double local_158;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)&local_208;
  local_208 = (UPCGPolygon2DData *)0x0;
  local_228.ArrayNum = 1;
  local_178._12_4_ = local_228.ArrayMax;
  local_178.ArrayNum = 1;
  local_214 = param_2;
  local_210 = param_1;
  local_178.DataPtr = (void **)local_228.AllocatorInstance.Data;
  bVar12 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_178);
  if (bVar12) {
    pcVar5 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar13 = (*pcVar5)(param_3);
    pUVar11 = local_208;
    if (cVar13 == '\0') {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5660170522739081096>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPolygon2DAccessor.h"
                          ,0x78,"Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
    }
    else {
      local_1f8 = local_208;
      pUVar19 = local_208;
      (**(code **)(*(longlong *)local_208 + 0x498))(local_208,&local_148);
      local_200 = &pUVar11->SegmentIndexToSegmentAndHoleIndices;
      local_218 = *(int *)&(pUVar11->SegmentIndexToSegmentAndHoleIndices).field_0x8 -
                  *(int *)&(pUVar11->SegmentIndexToSegmentAndHoleIndices).field_0x34;
      pTVar2 = &pUVar11->Polygon;
      if (local_218 != 0) {
        auVar37._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_148.Scale3D.ZW.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_148.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar37._8_4_ = _UNK_15061cc88 & local_148.Scale3D.ZW.m128d_f64[1]._0_4_;
        auVar37._12_4_ = _UNK_15061cc8c & local_148.Scale3D.ZW.m128d_f64[1]._4_4_;
        auVar43._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_148.Scale3D.XY.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_148.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar43._8_4_ = _UNK_15061cc88 & local_148.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar43._12_4_ = _UNK_15061cc8c & local_148.Scale3D.XY.m128d_f64[1]._4_4_;
        auVar33._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar37._8_8_);
        auVar33._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar37._0_8_);
        uVar18 = movmskpd((int)pUVar19,auVar33);
        lVar31 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar43._8_8_);
        auVar58._8_4_ = (int)lVar31;
        auVar58._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar43._0_8_);
        auVar58._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
        iVar15 = movmskpd((int)local_200,auVar58);
        if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
          uVar59 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar60 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar61 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar62 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar55 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar56 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar66 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar67 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar68 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar70 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar71 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar72 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar42 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_1d8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_1d8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_1d8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_1d8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_1d8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_1d8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(&local_148,&local_1d8);
          uVar42 = local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar50 = local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar51 = local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar52 = local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar53 = local_1d8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar54 = local_1d8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar55 = local_1d8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar56 = local_1d8.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar59 = local_1d8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar60 = local_1d8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar61 = local_1d8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar62 = local_1d8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar63 = local_1d8.Translation.XY.m128d_f64[0]._0_4_;
          uVar64 = local_1d8.Translation.XY.m128d_f64[0]._4_4_;
          uVar65 = local_1d8.Translation.XY.m128d_f64[1]._0_4_;
          uVar66 = local_1d8.Translation.XY.m128d_f64[1]._4_4_;
          uVar67 = local_1d8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar68 = local_1d8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar69 = local_1d8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar70 = local_1d8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar71 = local_1d8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar72 = local_1d8.Scale3D.XY.m128d_f64[1]._4_4_;
        }
        uVar18 = (pUVar11->Polygon).Holes.ArrayNum + 1;
        local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_250.ArrayNum = 0;
        local_250.ArrayMax = 0;
        local_270 = 0;
        local_238.Data = (FScriptContainerElement *)0x0;
        local_230 = 0;
        local_278.Data = (FScriptContainerElement *)0x0;
        local_26c = 0;
        local_1f0 = uVar42;
        uStack_1ec = uVar50;
        uStack_1e8 = uVar51;
        uStack_1e4 = uVar52;
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
        if (((((int)uVar18 < 1) ||
             (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar18,&local_278,0,&local_26c), local_278.Data <= pTVar2)) &&
            (pTVar2 < local_278.Data + (longlong)local_26c * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar14 = (*pcVar5)();
          return (bool)uVar14;
        }
        if (local_270 == local_26c) {
          local_270 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_278,&local_26c);
        }
        lVar31 = (longlong)local_270;
        local_270 = local_270 + 1;
        pFVar21 = local_278.Data + lVar31 * 0x10;
        *(FScriptContainerElement **)&pFVar21->field_0x0 = (FScriptContainerElement *)0x0;
        iVar15 = (pUVar11->Polygon).Outer.Vertices.ArrayNum;
        pFVar27 = (pTVar2->Outer).Vertices.AllocatorInstance.Data;
        *(int *)(pFVar21 + 8) = iVar15;
        if (iVar15 == 0) {
          *(int *)(pFVar21 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar15,0,(ForAnyElementType *)pFVar21,iVar15,(int *)(pFVar21 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar21->field_0x0,pFVar27,(longlong)iVar15 << 4);
        }
        iVar15 = (pUVar11->Polygon).Holes.ArrayNum;
        pTVar22 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                  (pUVar11->Polygon).Holes.AllocatorInstance.Data;
        pTVar28 = pTVar22 + iVar15;
        while( true ) {
          if ((pUVar11->Polygon).Holes.ArrayNum != iVar15) {
            local_268 = 0;
            `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_268);
          }
          this_00 = local_200;
          iVar25 = local_218;
          if (pTVar22 == pTVar28) break;
          if (((local_278.Data <= pTVar22) &&
              (pTVar22 < (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                         (local_278.Data + (longlong)local_26c * 0x10))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          if (local_270 == local_26c) {
            local_270 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_278,&local_26c);
          }
          lVar31 = (longlong)local_270;
          local_270 = local_270 + 1;
          pFVar21 = local_278.Data + lVar31 * 0x10;
          *(FScriptContainerElement **)&pFVar21->field_0x0 = (FScriptContainerElement *)0x0;
          iVar25 = pTVar22->ArrayNum;
          pFVar27 = (pTVar22->AllocatorInstance).Data;
          *(int *)(pFVar21 + 8) = iVar25;
          if (iVar25 == 0) {
            *(int *)(pFVar21 + 0xc) = 0;
            pTVar22 = pTVar22 + 1;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar25,0,(ForAnyElementType *)pFVar21,iVar25,(int *)(pFVar21 + 0xc));
            memcpy(*(FScriptContainerElement **)&pFVar21->field_0x0,pFVar27,(longlong)iVar25 << 4);
            pTVar22 = pTVar22 + 1;
          }
        }
        uVar17 = 0;
        iVar15 = local_210->ArrayNum;
        if (0 < iVar15) {
          auVar57._4_4_ = uVar60;
          auVar57._0_4_ = uVar59;
          auVar57._8_4_ = uVar61;
          auVar57._12_4_ = uVar62;
          auVar10._4_4_ = uVar54;
          auVar10._0_4_ = uVar53;
          auVar10._8_4_ = uVar55;
          auVar10._12_4_ = uVar56;
          auVar58 = blendpd(auVar57,auVar10,2);
          uVar29 = uVar17;
          do {
            uVar20 = (uint)uVar17;
            pTVar16 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked((TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                                     *)this_00,(int)(local_214 + uVar20) % iVar25);
            TVar6 = *pTVar16;
            uVar18 = 0;
            if ((int)uVar20 < iVar15) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            uVar30 = TVar6._4_4_ + 1;
            pdVar4 = (double *)((longlong)&local_210->DataPtr->field0_0x0 + uVar29);
            dVar47 = (double)CONCAT44(uVar70,uVar69) * *pdVar4;
            dVar48 = (double)CONCAT44(uVar72,uVar71) * pdVar4[1];
            uVar18 = 0;
            if ((int)uVar30 < local_270) {
              uVar18 = ~uVar30 >> 0x1f;
            }
            auVar44._8_4_ = SUB84(dVar48,0);
            auVar44._0_8_ = dVar47;
            uVar49 = (undefined4)((ulonglong)dVar48 >> 0x20);
            auVar44._12_4_ = uVar49;
            auVar32._8_4_ = SUB84(dVar48,0);
            auVar32._0_8_ = dVar47;
            auVar32._12_4_ = uVar49;
            dVar9 = *(double *)((longlong)&local_210->DataPtr->field0_0x0 + uVar29 + 0x10) *
                    (double)CONCAT44(uVar50,uVar42);
            dVar40 = (double)CONCAT44(uVar52,uVar51) * 0.0;
            auVar8._8_4_ = SUB84(dVar40,0);
            auVar8._0_8_ = dVar9;
            auVar8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            auVar33 = blendpd(auVar32,auVar8,2);
            auVar45._0_8_ =
                 auVar44._8_8_ * (double)CONCAT44(uVar60,uVar59) -
                 (double)CONCAT44(uVar62,uVar61) * dVar47;
            auVar45._8_8_ =
                 dVar9 * (double)CONCAT44(uVar62,uVar61) - (double)CONCAT44(uVar54,uVar53) * dVar48;
            auVar34._0_8_ = auVar33._0_8_ * (double)CONCAT44(uVar54,uVar53) - auVar58._0_8_ * dVar9;
            auVar34._8_8_ = auVar33._8_8_ * (double)CONCAT44(uVar56,uVar55) - auVar58._8_8_ * dVar40
            ;
            auVar33 = blendpd(auVar45,auVar34,2);
            dVar40 = auVar45._8_8_ + auVar45._8_8_;
            dVar41 = auVar34._0_8_ + auVar34._0_8_;
            auVar46._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar46._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            auVar38._8_4_ = SUB84(dVar41,0);
            auVar38._0_8_ = dVar40;
            uVar42 = (undefined4)((ulonglong)dVar41 >> 0x20);
            auVar38._12_4_ = uVar42;
            auVar35._8_4_ = SUB84(dVar41,0);
            auVar35._0_8_ = dVar40;
            auVar35._12_4_ = uVar42;
            auVar33 = blendpd(auVar35,auVar46,2);
            auVar39._0_8_ =
                 auVar38._8_8_ * (double)CONCAT44(uVar60,uVar59) -
                 dVar40 * (double)CONCAT44(uVar62,uVar61);
            auVar39._8_8_ =
                 auVar46._0_8_ * (double)CONCAT44(uVar62,uVar61) -
                 dVar41 * (double)CONCAT44(uVar54,uVar53);
            auVar36._0_8_ =
                 auVar33._0_8_ * (double)CONCAT44(uVar54,uVar53) - auVar46._0_8_ * auVar58._0_8_;
            auVar36._8_8_ =
                 auVar33._8_8_ * (double)CONCAT44(uVar56,uVar55) - auVar46._8_8_ * auVar58._8_8_;
            dVar47 = (double)CONCAT44(uVar56,uVar55) * dVar40 + dVar47 + auVar39._8_8_ +
                     (double)CONCAT44(uVar64,uVar63);
            dVar48 = (double)CONCAT44(uVar56,uVar55) * dVar41 + dVar48 + auVar36._0_8_ +
                     (double)CONCAT44(uVar66,uVar65);
            auVar33 = blendpd(auVar39,auVar36,2);
            local_168._8_4_ = SUB84(dVar48,0);
            local_168._0_8_ = dVar47;
            local_168._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
            local_158 = (double)CONCAT44(uVar56,uVar55) * auVar46._0_8_ + dVar9 + auVar33._0_8_ +
                        (double)CONCAT44(uVar68,uVar67);
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            FVar23.Data = local_278.Data;
            uVar24 = TVar6._0_4_;
            uVar18 = 0;
            if ((int)uVar24 < *(int *)(local_278.Data + (longlong)(int)uVar30 * 0x10 + 8)) {
              uVar18 = ~uVar24 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            lVar31 = *(longlong *)&FVar23.Data[(longlong)(int)uVar30 * 0x10].field_0x0;
            uVar17 = (ulonglong)(uVar20 + 1);
            uVar29 = uVar29 + 0x18;
            *(double *)(lVar31 + (longlong)(int)uVar24 * 0x10) = dVar47;
            *(double *)(lVar31 + 8 + (longlong)(int)uVar24 * 0x10) = dVar48;
            iVar15 = local_210->ArrayNum;
            uVar42 = local_1f0;
            uVar50 = uStack_1ec;
            uVar51 = uStack_1e8;
            uVar52 = uStack_1e4;
          } while ((int)(uVar20 + 1) < iVar15);
        }
        uVar18 = 1;
        if ((local_270 < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar14 = (*pcVar5)();
          return (bool)uVar14;
        }
        local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.ArrayNum = *(int *)(local_278.Data + 8);
        lVar31 = (longlong)local_228.ArrayNum;
        pvVar7 = *(void **)local_278.Data;
        if (local_228.ArrayNum == 0) {
          local_228.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_228.ArrayNum,0,&local_228.AllocatorInstance,local_228.ArrayNum,
                     &local_228.ArrayMax);
          memcpy(local_228.AllocatorInstance.Data,pvVar7,lVar31 << 4);
        }
        TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                  (&local_250,&local_228);
        dVar47 = UE::Geometry::TPolygon2<double>::SignedArea((TPolygon2<double> *)&local_228);
        local_240 = dVar47 < 0.0;
        if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        if (1 < local_270) {
          lVar31 = 0x10;
          do {
            uVar20 = 0;
            if ((int)uVar18 < local_270) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar14 = (*pcVar5)();
              return (bool)uVar14;
            }
            local_260.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_260.Vertices.ArrayNum = *(int *)(local_278.Data + lVar31 + 8);
            lVar26 = (longlong)local_260.Vertices.ArrayNum;
            pvVar7 = *(void **)(local_278.Data + lVar31);
            if (local_260.Vertices.ArrayNum == 0) {
              local_260.Vertices.ArrayMax = 0;
              iVar15 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_260.Vertices.ArrayNum,0,(ForAnyElementType *)&local_260,
                         local_260.Vertices.ArrayNum,&local_260.Vertices.ArrayMax);
              memcpy(local_260.Vertices.AllocatorInstance.Data,pvVar7,lVar26 << 4);
              iVar15 = local_260.Vertices.ArrayNum;
            }
            uVar17 = 0;
            iVar25 = iVar15;
            if (0 < iVar15) {
              do {
                uVar30 = (uint)uVar17;
                uVar20 = 0;
                if ((int)uVar30 < iVar25) {
                  uVar20 = ~uVar30 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar14 = (*pcVar5)();
                  return (bool)uVar14;
                }
                bVar12 = UE::Geometry::TPolygon2<double>::Contains
                                   ((TPolygon2<double> *)&local_250,
                                    (TVector2<double> *)
                                    (local_260.Vertices.AllocatorInstance.Data + uVar17 * 0x10));
                if (!bVar12) goto LAB_1498ea0e2;
                uVar17 = (ulonglong)(uVar30 + 1);
                iVar25 = local_260.Vertices.ArrayNum;
              } while ((int)(uVar30 + 1) < iVar15);
            }
            bVar12 = UE::Geometry::TPolygon2<double>::Intersects
                               ((TPolygon2<double> *)&local_250,&local_260);
            if (!bVar12) {
              iVar15 = (int)local_230;
              uVar17 = (ulonglong)(int)local_230;
              pFVar27 = local_238.Data + uVar17 * 0x10;
              FVar23.Data = local_238.Data;
              while( true ) {
                if ((int)uVar17 != iVar15) {
                  local_267[0] = 0;
                  `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>,int,0>::operator!='::__l2
                  ::<lambda_1>::operator()(local_267);
                }
                if (FVar23.Data == pFVar27) break;
                bVar12 = UE::Geometry::TPolygon2<double>::Overlaps
                                   (&local_260,(TPolygon2<double> *)FVar23.Data);
                if (bVar12) goto LAB_1498ea0e2;
                uVar17 = local_230 & 0xffffffff;
                FVar23.Data = FVar23.Data + 0x10;
              }
              dVar47 = UE::Geometry::TPolygon2<double>::SignedArea(&local_260);
              if (local_240 != dVar47 < 0.0) {
                if (((local_238.Data <= (FScriptContainerElement *)&local_260) &&
                    ((FScriptContainerElement *)&local_260 <
                     local_238.Data + (longlong)local_230._4_4_ * 0x10)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar14 = (*pcVar5)();
                  return (bool)uVar14;
                }
                iVar15 = (int)local_230;
                if ((int)local_230 == local_230._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_238,(int *)((longlong)&local_230 + 4));
                }
                local_230 = CONCAT44(local_230._4_4_,iVar15 + 1);
                UE::Geometry::TPolygon2<double>::TPolygon2<double>
                          ((TPolygon2<double> *)(local_238.Data + (longlong)iVar15 * 0x10),
                           &local_260);
              }
            }
LAB_1498ea0e2:
            if (local_260.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Vertices.AllocatorInstance.Data);
            }
            uVar18 = uVar18 + 1;
            lVar31 = lVar31 + 0x10;
          } while ((int)uVar18 < local_270);
        }
        pUVar11 = local_1f8;
        TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                   &local_1f8->Polygon,&local_250);
        pTVar3 = &(pUVar11->Polygon).Holes;
        (pUVar11->Polygon).bOuterIsCW = local_240;
        if (pTVar3 != (TArray<UE::Geometry::TPolygon2<double>,TSizedDefaultAllocator<32>_> *)
                      &local_238) {
          DestructItems<UE::Geometry::TPolygon2<double>,int>
                    ((TPolygon2<double> *)(pTVar3->AllocatorInstance).Data,
                     (pUVar11->Polygon).Holes.ArrayNum);
          FVar23.Data = local_238.Data;
          iVar25 = (int)local_230;
          piVar1 = &(pUVar11->Polygon).Holes.ArrayMax;
          iVar15 = *piVar1;
          (pUVar11->Polygon).Holes.ArrayNum = (int)local_230;
          if (((int)local_230 == 0) && (iVar15 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(int)local_230,iVar15,&pTVar3->AllocatorInstance,(int)local_230,piVar1
                      );
            ConstructItems<UE::Geometry::TPolygon2<double>,UE::Geometry::TPolygon2<double>,int>
                      ((pTVar3->AllocatorInstance).Data,(TPolygon2<double> *)FVar23.Data,iVar25);
          }
        }
        UPCGPolygon2DData::UpdateMappings(pUVar11);
        DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_278.Data,
                   local_270);
        if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)local_278.Data !=
            (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_278.Data);
        }
        DestructItems<UE::Geometry::TPolygon2<double>,int>
                  ((TPolygon2<double> *)local_238.Data,(int)local_230);
        if (local_238.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data);
        }
        if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.AllocatorInstance.Data);
        }
        return true;
      }
    }
  }
  return false;
}

// SetRangeImpl @ 1498ea250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
PCGTemporary::FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0>::SetRangeImpl
          (FPCGPolygon2DVerticesAccessor<UE::Math::TVector<double>,0> *this,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
          IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int *piVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  code *pcVar4;
  void *_Src;
  TTuple<int,int> TVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  UObject *pUVar12;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar19;
  ulonglong uVar20;
  TTuple<int,int> *pTVar21;
  atomic<unsigned_char> *paVar22;
  UObject *pUVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *this_00;
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined1 auStackY_2b8 [32];
  char *pcVar71;
  undefined1 local_268 [8];
  UObject *local_260;
  TKeyInitializer<UPCGPolygon2DData_*_&> local_258;
  int local_250;
  int local_24c;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  TArrayView<UE::Math::TVector<double>_const_,int> *local_238;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  UObject *local_218;
  TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
  *local_210;
  UObject *local_208;
  UObject **local_200;
  void *local_1f8;
  TTransform<double> local_1e8;
  TArrayView<void_*,int> local_188;
  undefined1 local_178 [16];
  double local_168;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uStack_220 = 1;
  local_228 = (atomic<unsigned_char> *)&local_218;
  local_188._12_4_ = uStack_21c;
  local_188.ArrayNum = 1;
  local_218 = (UObject *)0x0;
  local_24c = param_2;
  local_238 = param_1;
  local_188.DataPtr = (void **)local_228;
  bVar13 = IPCGAttributeAccessorKeys::GetKeys<void>(param_3,param_2,&local_188);
  if (bVar13) {
    pcVar4 = *(code **)(param_3->_padding_ + 0x18);
    UPCGPolygon2DData::StaticClass();
    cVar14 = (*pcVar4)(param_3);
    pUVar12 = local_218;
    if (cVar14 == '\0') {
      iVar28 = 0x8e;
      pcVar71 = "Keys.IsClassSupported(UPCGPolygon2DData::StaticClass())";
      paVar22 = &bGEnsureHasExecuted<_2526794840092442482>;
    }
    else {
      local_260 = local_218;
      this_00 = (TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                 *)&local_218[10].field_0x20;
      iVar28 = *(int *)(local_218 + 0xb) - *(int *)&local_218[0xc].field_0x4;
      if (iVar28 == 0) {
        return false;
      }
      paVar22 = &(this->Lock).State;
      puVar27 = &local_218[6].field_0x20;
      local_250 = iVar28;
      local_228 = paVar22;
      local_210 = this_00;
      if ((paVar22 == (atomic<unsigned_char> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar15 = (*pcVar4)();
        return (bool)uVar15;
      }
      LOCK();
      bVar13 = ((FMutex *)paVar22)->State == (atomic<unsigned_char>)0x0;
      if (bVar13) {
        ((FMutex *)paVar22)->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar13) {
        UE::FMutex::LockSlow((FMutex *)paVar22);
      }
      pUVar23 = local_260;
      local_240.ObjectIndex = 0;
      local_240.ObjectSerialNumber = 0;
      if (local_260 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_260);
        }
        local_248.ObjectIndex = 0;
        local_248.ObjectSerialNumber = 0;
        local_208 = pUVar23;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar23);
        }
        FWeakObjectPtr::operator=(&local_248,(FObjectPtr)&local_208);
        local_240 = local_248;
      }
      pUVar23 = local_260;
      pTVar19 = TMapBase<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->ModifiedVertices,(TObjectKey<UPCGPolygon2DData> *)&local_240);
      if (pTVar19 ==
          (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        local_200 = &local_260;
        TSet<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<UPCGPolygon2DData_*_&>_>
                  ((TSet<TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->ModifiedVertices,&local_258,(bool *)&local_200);
        pTVar19 = (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*(longlong *)&this->ModifiedVertices + (longlong)(int)local_258.Key * 0x20 + 8
                     );
        uVar26 = *(int *)&pUVar12[7].field_0x18 + 1;
        if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
        }
        iVar28 = pTVar19->ArrayMax;
        piVar1 = &pTVar19->ArrayMax;
        if (iVar28 < (int)uVar26) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar26,(ForAnyElementType *)pTVar19,pTVar19->ArrayNum,piVar1);
          iVar28 = *piVar1;
        }
        pFVar24 = (pTVar19->AllocatorInstance).Data;
        if (((pFVar24 <= puVar27) && (puVar27 < pFVar24 + (longlong)iVar28 * 0x10)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        iVar28 = pTVar19->ArrayNum;
        if (iVar28 == pTVar19->ArrayMax) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pTVar19,piVar1);
          pTVar19->ArrayNum = iVar28;
        }
        pTVar19->ArrayNum = iVar28 + 1;
        pFVar24 = (pTVar19->AllocatorInstance).Data + (longlong)iVar28 * 0x10;
        *(undefined8 *)&pFVar24->field_0x0 = 0;
        iVar28 = *(int *)(pUVar12 + 7);
        _Src = *(void **)puVar27;
        *(int *)&pFVar24[8].field_0x0 = iVar28;
        if (iVar28 == 0) {
          *(int *)(pFVar24 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar28,0,(ForAnyElementType *)pFVar24,iVar28,(int *)(pFVar24 + 0xc));
          memcpy(*(void **)&pFVar24->field_0x0,_Src,(longlong)iVar28 << 4);
        }
        local_258.Key._4_4_ = *(uint *)&pUVar12[7].field_0x18;
        uVar20 = (ulonglong)(int)local_258.Key._4_4_;
        pFVar24 = *(FScriptContainerElement **)&pUVar12[7].field_0x10;
        pFVar29 = pFVar24 + uVar20 * 0x10;
        while( true ) {
          if (*(int *)&pUVar12[7].field_0x18 != (int)uVar20) {
            local_268[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TPolygon2<double>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_268);
          }
          pUVar23 = local_260;
          paVar22 = local_228;
          this_00 = local_210;
          iVar28 = local_250;
          if (pFVar24 == pFVar29) break;
          pFVar30 = (pTVar19->AllocatorInstance).Data;
          if (((pFVar30 <= pFVar24) && (pFVar24 < pFVar30 + (longlong)pTVar19->ArrayMax * 0x10)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
          iVar28 = pTVar19->ArrayNum;
          if (iVar28 == pTVar19->ArrayMax) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pTVar19,&pTVar19->ArrayMax);
          }
          pTVar19->ArrayNum = iVar28 + 1;
          pFVar30 = (pTVar19->AllocatorInstance).Data + (longlong)iVar28 * 0x10;
          *(undefined8 *)&pFVar30->field_0x0 = 0;
          local_1f8 = *(void **)pFVar24;
          iVar28 = *(int *)(pFVar24 + 8);
          *(int *)&pFVar30[8].field_0x0 = iVar28;
          if (iVar28 == 0) {
            *(int *)(pFVar30 + 0xc) = 0;
            pFVar24 = pFVar24 + 0x10;
            uVar20 = (ulonglong)local_258.Key._4_4_;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar28,0,(ForAnyElementType *)pFVar30,iVar28,(int *)(pFVar30 + 0xc));
            memcpy(*(void **)&pFVar30->field_0x0,local_1f8,(longlong)iVar28 << 4);
            uVar20 = (ulonglong)local_258.Key._4_4_;
            pFVar24 = pFVar24 + 0x10;
          }
        }
      }
      if (paVar22 != (atomic<unsigned_char> *)0x0) {
        LOCK();
        aVar3 = *paVar22;
        *paVar22 = (atomic<unsigned_char>)((char)*paVar22 + -1);
        UNLOCK();
        pUVar23 = local_260;
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)paVar22);
          pUVar23 = local_260;
        }
      }
      if (pTVar19 !=
          (TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        uVar16 = (**(code **)(*(longlong *)pUVar23 + 0x498))(pUVar23,&local_158);
        auVar38._0_8_ =
             (double)CONCAT44(local_158.Scale3D.ZW.m128d_f64[0]._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_158.Scale3D.ZW.m128d_f64[0]._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar38._8_4_ = local_158.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88;
        auVar38._12_4_ = local_158.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
        auVar34._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar38._8_8_);
        auVar34._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar38._0_8_);
        auVar39._0_8_ =
             (double)CONCAT44(local_158.Scale3D.XY.m128d_f64[0]._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_158.Scale3D.XY.m128d_f64[0]._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar39._8_4_ = local_158.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
        auVar39._12_4_ = local_158.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
        lVar32 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar39._8_8_);
        uVar26 = movmskpd((int)pUVar23,auVar34);
        auVar60._8_4_ = (int)lVar32;
        auVar60._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar39._0_8_);
        auVar60._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
        iVar17 = movmskpd(uVar16,auVar60);
        if ((uVar26 & 0x3fffffff) == 0 && iVar17 == 0) {
          uVar16 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar56 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar57 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar58 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar53 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar55 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar61 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar66 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar67 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar69 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar70 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_220 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_21c = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_1e8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_1e8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_1e8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_1e8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_1e8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_1e8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(&local_158,&local_1e8);
          uVar51 = local_1e8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar50 = local_1e8.Scale3D.ZW.m128d_f64[0]._4_4_;
          uStack_220 = local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_;
          uStack_21c = local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar52 = local_1e8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar53 = local_1e8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar54 = local_1e8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar55 = local_1e8.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar16 = local_1e8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar56 = local_1e8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar57 = local_1e8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar58 = local_1e8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar61 = local_1e8.Translation.XY.m128d_f64[0]._0_4_;
          uVar62 = local_1e8.Translation.XY.m128d_f64[0]._4_4_;
          uVar63 = local_1e8.Translation.XY.m128d_f64[1]._0_4_;
          uVar64 = local_1e8.Translation.XY.m128d_f64[1]._4_4_;
          uVar65 = local_1e8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar66 = local_1e8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar67 = local_1e8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar68 = local_1e8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar69 = local_1e8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar70 = local_1e8.Scale3D.XY.m128d_f64[1]._4_4_;
        }
        uVar26 = 0;
        local_228 = (atomic<unsigned_char> *)CONCAT44(uVar50,uVar51);
        iVar17 = local_238->ArrayNum;
        if (0 < iVar17) {
          lVar32 = 0;
          auVar59._4_4_ = uVar56;
          auVar59._0_4_ = uVar16;
          auVar59._8_4_ = uVar57;
          auVar59._12_4_ = uVar58;
          auVar9._4_4_ = uVar53;
          auVar9._0_4_ = uVar52;
          auVar9._8_4_ = uVar54;
          auVar9._12_4_ = uVar55;
          auVar60 = blendpd(auVar59,auVar9,2);
          do {
            uVar11 = uStack_21c;
            uVar10 = uStack_220;
            pTVar21 = TMapBase<int,TTuple<int,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,int>,0>_>
                      ::FindChecked(this_00,(int)(local_24c + uVar26) % iVar28);
            TVar5 = *pTVar21;
            uVar18 = 0;
            if ((int)uVar26 < iVar17) {
              uVar18 = ~uVar26 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            uVar31 = TVar5._4_4_ + 1;
            pdVar2 = (double *)((longlong)&local_238->DataPtr->field0_0x0 + lVar32);
            dVar45 = (double)CONCAT44(uVar68,uVar67) * *pdVar2;
            dVar46 = (double)CONCAT44(uVar70,uVar69) * pdVar2[1];
            uVar18 = 0;
            if ((int)uVar31 < pTVar19->ArrayNum) {
              uVar18 = ~uVar31 >> 0x1f;
            }
            auVar42._8_4_ = SUB84(dVar46,0);
            auVar42._0_8_ = dVar45;
            uVar47 = (undefined4)((ulonglong)dVar46 >> 0x20);
            auVar42._12_4_ = uVar47;
            auVar33._8_4_ = SUB84(dVar46,0);
            auVar33._0_8_ = dVar45;
            auVar33._12_4_ = uVar47;
            dVar48 = *(double *)((longlong)&local_238->DataPtr->field0_0x0 + lVar32 + 0x10) *
                     (double)CONCAT44(uVar50,uVar51);
            dVar49 = (double)CONCAT44(uVar11,uVar10) * 0.0;
            auVar7._8_8_ = dVar49;
            auVar7._0_8_ = dVar48;
            auVar34 = blendpd(auVar33,auVar7,2);
            auVar43._0_8_ =
                 auVar42._8_8_ * (double)CONCAT44(uVar56,uVar16) -
                 (double)CONCAT44(uVar58,uVar57) * dVar45;
            auVar43._8_8_ =
                 dVar48 * (double)CONCAT44(uVar58,uVar57) - (double)CONCAT44(uVar53,uVar52) * dVar46
            ;
            auVar35._0_8_ = auVar34._0_8_ * (double)CONCAT44(uVar53,uVar52) - auVar60._0_8_ * dVar48
            ;
            auVar35._8_8_ = auVar34._8_8_ * (double)CONCAT44(uVar55,uVar54) - auVar60._8_8_ * dVar49
            ;
            auVar34 = blendpd(auVar43,auVar35,2);
            dVar49 = auVar43._8_8_ + auVar43._8_8_;
            dVar8 = auVar35._0_8_ + auVar35._0_8_;
            uVar51 = (undefined4)((ulonglong)dVar8 >> 0x20);
            auVar44._0_8_ = auVar34._0_8_ + auVar34._0_8_;
            auVar44._8_8_ = auVar34._8_8_ + auVar34._8_8_;
            auVar40._8_4_ = SUB84(dVar8,0);
            auVar40._0_8_ = dVar49;
            auVar40._12_4_ = uVar51;
            auVar36._8_4_ = SUB84(dVar8,0);
            auVar36._0_8_ = dVar49;
            auVar36._12_4_ = uVar51;
            auVar34 = blendpd(auVar36,auVar44,2);
            auVar41._0_8_ =
                 auVar40._8_8_ * (double)CONCAT44(uVar56,uVar16) -
                 dVar49 * (double)CONCAT44(uVar58,uVar57);
            auVar41._8_8_ =
                 auVar44._0_8_ * (double)CONCAT44(uVar58,uVar57) -
                 dVar8 * (double)CONCAT44(uVar53,uVar52);
            auVar37._0_8_ =
                 auVar34._0_8_ * (double)CONCAT44(uVar53,uVar52) - auVar44._0_8_ * auVar60._0_8_;
            auVar37._8_8_ =
                 auVar34._8_8_ * (double)CONCAT44(uVar55,uVar54) - auVar44._8_8_ * auVar60._8_8_;
            auVar34 = blendpd(auVar41,auVar37,2);
            dVar45 = dVar49 * (double)CONCAT44(uVar55,uVar54) + dVar45 + auVar41._8_8_ +
                     (double)CONCAT44(uVar62,uVar61);
            dVar46 = dVar8 * (double)CONCAT44(uVar55,uVar54) + dVar46 + auVar37._0_8_ +
                     (double)CONCAT44(uVar64,uVar63);
            local_168 = auVar44._0_8_ * (double)CONCAT44(uVar55,uVar54) + dVar48 + auVar34._0_8_ +
                        (double)CONCAT44(uVar66,uVar65);
            local_178._8_4_ = SUB84(dVar46,0);
            local_178._0_8_ = dVar45;
            local_178._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            pFVar24 = (pTVar19->AllocatorInstance).Data;
            uVar25 = TVar5._0_4_;
            uVar18 = 0;
            if ((int)uVar25 < *(int *)(pFVar24 + (longlong)(int)uVar31 * 0x10 + 8)) {
              uVar18 = ~uVar25 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              uVar15 = (*pcVar4)();
              return (bool)uVar15;
            }
            lVar6 = *(longlong *)(pFVar24 + (longlong)(int)uVar31 * 0x10);
            uVar26 = uVar26 + 1;
            lVar32 = lVar32 + 0x18;
            *(double *)(lVar6 + (longlong)(int)uVar25 * 0x10) = dVar45;
            *(double *)(lVar6 + 8 + (longlong)(int)uVar25 * 0x10) = dVar46;
            iVar17 = local_238->ArrayNum;
            this_00 = local_210;
            uVar51 = (undefined4)local_228;
            uVar50 = local_228._4_4_;
          } while ((int)uVar26 < iVar17);
        }
        return true;
      }
      iVar28 = 0xb8;
      pcVar71 = "VerticesPtr";
      paVar22 = &bGEnsureHasExecuted<_2526794840092442440>;
    }
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar22,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DData.inl"
                        ,iVar28,pcVar71);
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
  }
  return false;
}

