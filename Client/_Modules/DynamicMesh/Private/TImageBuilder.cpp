// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// BilinearSample<float,0> @ 14c862730

TVector4<float> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
          (TImageBuilder<UE::Math::TVector4<float>_> *this,TVector4<float> *__return_storage_ptr__,
          TVector2<double> *param_1,TVector4<float> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined1 *puVar28;
  TVector4<float> *pTVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  double dVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  FVector2i_u_0 local_res8;
  FVector2i_u_0 local_res18 [2];
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((0.0 <= dVar1) && (iVar31 = (this->Dimensions).Width, dVar1 <= (double)iVar31)) &&
      (dVar2 = (param_1->field0_0x0)._s_0.Y, 0.0 <= dVar2)) &&
     (iVar3 = (this->Dimensions).Height, dVar2 <= (double)iVar3)) {
    dVar9 = dVar1 - __real_3fe0000000000000;
    lVar30 = (longlong)dVar9;
    puVar28 = (undefined1 *)register0x00000020;
    dVar34 = dVar9;
    if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != dVar9)) {
      auVar35._8_8_ = dVar9;
      auVar35._0_8_ = dVar9;
      uVar27 = movmskpd((int)&stack0x00000000,auVar35);
      puVar28 = (undefined1 *)(ulonglong)(uVar27 & 1);
      dVar34 = (double)(lVar30 - (longlong)puVar28);
    }
    uVar27 = (uint)puVar28;
    dVar8 = dVar2 - __real_3fe0000000000000;
    lVar30 = (longlong)dVar8;
    dVar7 = dVar8;
    if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != dVar8)) {
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar8;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar6);
      uVar27 = uVar27 & 1;
      dVar7 = (double)(longlong)(lVar30 - (ulonglong)uVar27);
    }
    dVar1 = dVar1 + __real_3fe0000000000000;
    iVar32 = (int)dVar34;
    lVar30 = (longlong)dVar1;
    iVar33 = (int)dVar7;
    if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != dVar1)) {
      auVar4._8_4_ = SUB84(dVar1,0);
      auVar4._0_8_ = dVar1;
      auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar4);
      uVar27 = uVar27 & 1;
      dVar1 = (double)(longlong)(lVar30 - (ulonglong)uVar27);
    }
    dVar2 = dVar2 + __real_3fe0000000000000;
    lVar30 = (longlong)dVar2;
    if ((lVar30 != -0x8000000000000000) && ((double)lVar30 != dVar2)) {
      auVar5._8_4_ = SUB84(dVar2,0);
      auVar5._0_8_ = dVar2;
      auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar5);
      dVar2 = (double)(longlong)(lVar30 - (ulonglong)(uVar27 & 1));
    }
    dVar9 = dVar9 - dVar34;
    dVar8 = dVar8 - dVar7;
    if (iVar32 < 0) {
      iVar32 = 0;
    }
    if (iVar33 < 0) {
      iVar33 = 0;
    }
    iVar31 = iVar31 + -1;
    iVar10 = (int)dVar1;
    if (iVar31 < (int)dVar1) {
      iVar10 = iVar31;
    }
    iVar3 = iVar3 + -1;
    dVar34 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X - dVar9;
    dVar1 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y - dVar8;
    iVar31 = (int)dVar2;
    if (iVar3 < (int)dVar2) {
      iVar31 = iVar3;
    }
    local_res8._s_0.X = iVar32;
    local_res8._s_0.Y = iVar33;
    local_res18[0]._0_4_ = iVar10;
    local_res18[0]._4_4_ = iVar31;
    pTVar29 = GetPixel(this,(FVector2i *)&local_res8._s_0);
    fVar11 = (pTVar29->field0_0x0)._s_0.X;
    fVar12 = (pTVar29->field0_0x0)._s_0.Y;
    fVar13 = (pTVar29->field0_0x0)._s_0.Z;
    fVar14 = (pTVar29->field0_0x0)._s_0.W;
    local_res8._s_0.X = iVar10;
    local_res8._s_0.Y = iVar33;
    pTVar29 = GetPixel(this,(FVector2i *)&local_res8._s_0);
    fVar15 = (pTVar29->field0_0x0)._s_0.X;
    fVar16 = (pTVar29->field0_0x0)._s_0.Y;
    fVar17 = (pTVar29->field0_0x0)._s_0.Z;
    fVar18 = (pTVar29->field0_0x0)._s_0.W;
    local_res8._s_0.X = iVar32;
    local_res8._s_0.Y = iVar31;
    pTVar29 = GetPixel(this,(FVector2i *)&local_res8._s_0);
    fVar19 = (pTVar29->field0_0x0)._s_0.X;
    fVar20 = (pTVar29->field0_0x0)._s_0.Y;
    fVar21 = (pTVar29->field0_0x0)._s_0.Z;
    fVar22 = (pTVar29->field0_0x0)._s_0.W;
    pTVar29 = GetPixel(this,(FVector2i *)&local_res18[0]._s_0);
    fVar23 = (pTVar29->field0_0x0)._s_0.Y;
    fVar24 = (pTVar29->field0_0x0)._s_0.Z;
    fVar25 = (pTVar29->field0_0x0)._s_0.W;
    fVar38 = (float)(dVar1 * dVar9);
    fVar36 = (float)(dVar1 * dVar34);
    fVar39 = (float)(dVar34 * dVar8);
    fVar37 = (float)(dVar8 * dVar9);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         fVar39 * fVar19 + fVar36 * fVar11 + fVar38 * fVar15 + fVar37 * (pTVar29->field0_0x0)._s_0.X
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         fVar39 * fVar20 + fVar36 * fVar12 + fVar38 * fVar16 + fVar37 * fVar23;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         fVar39 * fVar21 + fVar36 * fVar13 + fVar38 * fVar17 + fVar37 * fVar24;
    (__return_storage_ptr__->field0_0x0)._s_0.W =
         fVar39 * fVar22 + fVar36 * fVar14 + fVar38 * fVar18 + fVar37 * fVar25;
    return __return_storage_ptr__;
  }
  uVar26 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar26;
  return __return_storage_ptr__;
}

// BilinearSampleUV<float,0> @ 14c862b90

TVector4<float> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSampleUV<float,0>
          (TImageBuilder<UE::Math::TVector4<float>_> *this,TVector4<float> *__return_storage_ptr__,
          TVector2<double> *param_1,TVector4<float> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector2<double>_u_0 local_18;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  if (0.0 <= dVar2) {
    if (__real_3ff0000000000000 <= dVar2) {
      dVar2 = __real_3ff0000000000000;
    }
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = 0.0;
  if ((0.0 <= dVar1) && (dVar3 = dVar1, __real_3ff0000000000000 <= dVar1)) {
    dVar3 = __real_3ff0000000000000;
  }
  local_18._s_0.X = (double)(this->Dimensions).Width * dVar2;
  local_18._s_0.Y = (double)(this->Dimensions).Height * dVar3;
  BilinearSample<float,0>(this,__return_storage_ptr__,(TVector2<double> *)&local_18._s_0,param_2);
  return __return_storage_ptr__;
}

// Clear @ 14c8c6b50

void __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::Clear
          (TImageBuilder<UE::Math::TVector4<float>_> *this,TVector4<float> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = 0;
  lVar7 = (this->Image).DimensionY * (this->Image).DimensionX;
  uVar3 = *(undefined8 *)&param_1->field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  lVar8 = lVar6;
  if (0 < lVar7) {
    do {
      if (((this->Image).Buffer.ArrayNum <= lVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = lVar6 + 1;
      pFVar1 = (this->Image).Buffer.AllocatorInstance.Data + lVar8;
      *(undefined8 *)pFVar1 = uVar3;
      *(undefined8 *)(pFVar1 + 8) = uVar4;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 < lVar7);
  }
  return;
}

// Clear @ 14c8c6bf0

void __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>::Clear
          (TImageBuilder<UE::Math::TVector<float>_> *this,TVector<float> *param_1)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = 0;
  lVar7 = (this->Image).DimensionY * (this->Image).DimensionX;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  lVar8 = lVar6;
  if (0 < lVar7) {
    do {
      if (((this->Image).Buffer.ArrayNum <= lVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Image).Buffer.AllocatorInstance.Data;
      lVar6 = lVar6 + 1;
      *(undefined8 *)(pFVar3 + lVar8) = uVar1;
      *(float *)(pFVar3 + lVar8 + 8) = fVar2;
      lVar8 = lVar8 + 0xc;
    } while (lVar6 < lVar7);
  }
  return;
}

// GetPixel @ 14c8f5140

TVector4<float> * __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::GetPixel
          (TImageBuilder<UE::Math::TVector4<float>_> *this,FVector2i *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)(this->Dimensions).Width +
          (longlong)(param_1->field0_0x0)._s_0.X;
  uVar3 = 0;
  if (lVar5 < (this->Image).Buffer.ArrayNum) {
    uVar3 = (uint)((ulonglong)lVar5 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<float> *)((this->Image).Buffer.AllocatorInstance.Data + lVar5 * 0x10);
}

// SetDimensions @ 14c916720

void __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::SetDimensions
          (TImageBuilder<UE::Math::TVector4<float>_> *this,FImageDimensions param_1)

{
  TDenseGrid2<UE::Math::TVector4<float>_> *pTVar1;
  long64 *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *_Dst;
  ulong64 uVar6;
  longlong lVar7;
  
  this->Dimensions = param_1;
  pTVar1 = &this->Image;
  lVar5 = (longlong)(this->Dimensions).Height;
  plVar2 = &(this->Image).Buffer.ArrayNum;
  (this->Image).DimensionX = (longlong)param_1.Width;
  uVar6 = param_1.Width * lVar5;
  (this->Image).DimensionY = lVar5;
  lVar5 = *plVar2;
  if (uVar6 - lVar5 != 0 && lVar5 <= (longlong)uVar6) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar6 - lVar5,(ForAnyElementType *)pTVar1,plVar2,
               &(this->Image).Buffer.ArrayMax);
    return;
  }
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar6);
  }
  if ((longlong)uVar6 < lVar5) {
    lVar5 = lVar5 - uVar6;
    if (((((uint)(uVar6 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar5 >> 0x3f) ^ 1)) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (lVar5 != 0) {
      _Dst = (pTVar1->Buffer).AllocatorInstance.Data + uVar6 * 0x10;
      lVar7 = (*plVar2 - lVar5) - uVar6;
      if (lVar7 != 0) {
        memmove(_Dst,_Dst + lVar5 * 0x10,lVar7 * 0x10);
      }
      *plVar2 = *plVar2 - lVar5;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x10,0x10,(ForAnyElementType *)pTVar1,*plVar2,&(this->Image).Buffer.ArrayMax);
    }
  }
  return;
}

// SetDimensions @ 14c916870

void __thiscall
UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>::SetDimensions
          (TImageBuilder<UE::Math::TVector<float>_> *this,FImageDimensions param_1)

{
  TDenseGrid2<UE::Math::TVector<float>_> *pTVar1;
  long64 *plVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulong64 uVar7;
  
  this->Dimensions = param_1;
  pTVar1 = &this->Image;
  lVar5 = (longlong)(this->Dimensions).Height;
  plVar2 = &(this->Image).Buffer.ArrayNum;
  (this->Image).DimensionX = (longlong)param_1.Width;
  uVar7 = param_1.Width * lVar5;
  (this->Image).DimensionY = lVar5;
  lVar5 = *plVar2;
  if (uVar7 - lVar5 != 0 && lVar5 <= (longlong)uVar7) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0xc,4,uVar7 - lVar5,(ForAnyElementType *)pTVar1,plVar2,&(this->Image).Buffer.ArrayMax
              );
    return;
  }
  if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar7);
  }
  if ((longlong)uVar7 < lVar5) {
    lVar5 = lVar5 - uVar7;
    if (((((uint)(uVar7 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar5 >> 0x3f) ^ 1)) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (lVar5 != 0) {
      _Dst = (pTVar1->Buffer).AllocatorInstance.Data + uVar7 * 0xc;
      lVar6 = (*plVar2 - lVar5) - uVar7;
      if (lVar6 != 0) {
        memmove(_Dst,_Dst + lVar5 * 0xc,lVar6 * 0xc);
      }
      *plVar2 = *plVar2 - lVar5;
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0xc,4,(ForAnyElementType *)pTVar1,*plVar2,&(this->Image).Buffer.ArrayMax);
    }
  }
  return;
}

