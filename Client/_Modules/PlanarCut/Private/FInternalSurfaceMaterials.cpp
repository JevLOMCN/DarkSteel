// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 3

// operator() @ 14c9abc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`FInternalSurfaceMaterials::GetDefaultMaterialIDForGeometry'::__l2::<lambda_1>::operator()
          (void *this,FGeometryCollection *param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_e8 [32];
  uint local_b8;
  int local_b4;
  int local_b0;
  uint *local_a8 [2];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar12 = 0xffffffff;
  uVar13 = 0;
  uVar10 = (ulonglong)param_2;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_b0 = param_3;
  if (param_2 < param_3) {
    lVar14 = uVar10 * 4;
    bVar2 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    do {
      uVar9 = (uint)uVar10;
      if ((((int)uVar9 < 0) || (*(int *)&(param_1->Internal).field_0x28 <= (int)uVar9)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      puVar7 = *(undefined1 **)&(param_1->Internal).field_0x20;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(param_1->Internal).field_0x10;
      }
      uVar5 = uVar9;
      if ((int)uVar9 < 0) {
        uVar5 = uVar9 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)((int)uVar5 >> 5) * 4) & uVar11) != 0) {
        uVar5 = 0;
        if ((int)uVar9 < *(int *)&(param_1->MaterialID).field_0x18) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        local_b8 = *(uint *)(lVar14 + *(longlong *)&(param_1->MaterialID).field_0x10);
        if (local_98._8_4_ != local_64) {
          FVar8 = (ForElementType<FSetElementId>)local_60;
          if (local_58 != (ForElementType<FSetElementId>)0x0) {
            FVar8 = local_58;
          }
          uVar5 = *(uint *)((longlong)FVar8 + (ulonglong)(local_50 - 1U & local_b8) * 4);
          while (uVar5 != 0xffffffff) {
            pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)(int)uVar5 * 0x10);
            if (*(uint *)pFVar6 == local_b8) {
              if (pFVar6 != (FScriptContainerElement *)0x0) goto LAB_14c9abe10;
              break;
            }
            uVar5 = *(uint *)(pFVar6 + 8);
          }
        }
        local_a8[0] = &local_b8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_98,(uint)&local_b4,(TKeyInitializer<int_const_&> *)(ulonglong)local_b8,
                   (bool *)local_a8);
        pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_b4 * 0x10);
LAB_14c9abe10:
        uVar5 = *(uint *)(pFVar6 + 4) + 1;
        *(uint *)(pFVar6 + 4) = uVar5;
        if ((int)uVar13 < (int)uVar5) {
          uVar13 = uVar5;
          uVar12 = local_b8;
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      lVar14 = lVar14 + 4;
    } while ((int)(uVar9 + 1) < local_b0);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  bVar3 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return uVar12;
}

// GetDefaultMaterialIDForGeometry @ 14c9d2360

int __thiscall
FInternalSurfaceMaterials::GetDefaultMaterialIDForGeometry
          (FInternalSurfaceMaterials *this,FGeometryCollection *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res18 [8];
  
  lVar8 = (longlong)param_2;
  iVar4 = (**(code **)(*(longlong *)&param_1->Indices + 0x60))();
  if (-1 < param_2) {
    uVar7 = (uint)~param_2 >> 0x1f;
    uVar5 = 0;
    if (param_2 < *(int *)&(param_1->FaceStart).field_0x18) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar6 = *(int *)(*(longlong *)&(param_1->FaceStart).field_0x10 + lVar8 * 4);
    uVar5 = 0;
    if (param_2 < *(int *)&(param_1->FaceStart).field_0x18) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    lVar1 = *(longlong *)&(param_1->FaceStart).field_0x10;
    uVar5 = 0;
    if (param_2 < *(int *)&(param_1->FaceCount).field_0x18) {
      uVar5 = uVar7;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar6 = `FInternalSurfaceMaterials::GetDefaultMaterialIDForGeometry'::__l2::<lambda_1>::
            operator()(local_res18,param_1,iVar6,
                       *(int *)(*(longlong *)&(param_1->FaceCount).field_0x10 + lVar8 * 4) +
                       *(int *)(lVar1 + lVar8 * 4));
    if (iVar6 != -1) {
      return iVar6;
    }
  }
  iVar4 = `FInternalSurfaceMaterials::GetDefaultMaterialIDForGeometry'::__l2::<lambda_1>::operator()
                    (local_res18,param_1,0,iVar4);
  if (iVar4 == -1) {
    iVar4 = 0;
  }
  return iVar4;
}

// SetUVScaleFromCollection @ 14c9e0bc0

void __thiscall
FInternalSurfaceMaterials::SetUVScaleFromCollection
          (FInternalSurfaceMaterials *this,FCollectionMeshFacade *param_1,int param_2)

{
  FManagedArrayCollection *this_00;
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  FName FVar14;
  FName FVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar21;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  longlong local_res10;
  int local_res18;
  FName local_a8;
  FName local_a0;
  
  lVar24 = (longlong)param_2;
  if (((param_1->VertexAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar15 = GeometryCollection::UV::VerticesGroupName;
  FVar14 = GeometryCollection::UV::UVLayerNames[0];
  this_00 = (FManagedArrayCollection *)param_1->_padding_;
  pTVar1 = (param_1->VertexAttribute).ConstAttributeArray;
  bVar16 = FManagedArrayCollection::HasAttribute
                     (this_00,GeometryCollection::UV::UVLayerNames[0],
                      GeometryCollection::UV::VerticesGroupName);
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("HasAttribute(Name, Group)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x185,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_a8 = FVar14;
  local_a0 = FVar15;
  pTVar21 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&this_00->Map,(TTuple<FName,FName> *)&local_a8);
  if ((pTVar21 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar22 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TVector2<float>_>
                      ((FValueType *)&pTVar21->field_0x10);
  if (((param_1->IndicesAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar2 = (param_1->IndicesAttribute).ConstAttributeArray;
  if (((param_1->FaceStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar3 = (param_1->FaceStartAttribute).ConstAttributeArray;
  if (((param_1->FaceCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x67,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar4 = (param_1->FaceCountAttribute).ConstAttributeArray;
  local_res18 = 0;
  iVar17 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
  if (-1 < param_2) {
    uVar23 = (uint)~param_2 >> 0x1f;
    uVar18 = 0;
    if (param_2 < *(int *)&pTVar3->field_0x18) {
      uVar18 = uVar23;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_res18 = *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar24 * 4);
    uVar18 = 0;
    if (param_2 < *(int *)&pTVar4->field_0x18) {
      uVar18 = uVar23;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar5 = *(longlong *)&pTVar4->field_0x10;
    uVar18 = 0;
    if (param_2 < *(int *)&pTVar3->field_0x18) {
      uVar18 = uVar23;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar24 * 4) + *(int *)(lVar5 + lVar24 * 4);
  }
  uVar27 = (ulonglong)local_res18;
  dVar13 = 0.0;
  fVar41 = 0.0;
  dVar11 = 0.0;
  if ((longlong)uVar27 < (longlong)iVar17) {
    lVar24 = uVar27 * 0xc;
    local_res10 = (longlong)iVar17 - uVar27;
    do {
      uVar23 = (uint)uVar27;
      uVar18 = 0;
      if ((int)uVar23 < *(int *)&pTVar2->field_0x18) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)&pTVar2->field_0x10;
      uVar18 = *(uint *)(lVar24 + 4 + lVar5);
      lVar25 = (longlong)(int)uVar18;
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar1->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = *(uint *)(lVar24 + lVar5);
      lVar26 = (longlong)(int)uVar18;
      lVar6 = *(longlong *)&pTVar1->field_0x10;
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar1->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)&pTVar1->field_0x10;
      fVar38 = *(float *)(lVar6 + 4 + lVar25 * 0xc) - *(float *)(lVar7 + 4 + lVar26 * 0xc);
      fVar28 = *(float *)(lVar6 + 8 + lVar25 * 0xc) - *(float *)(lVar7 + 8 + lVar26 * 0xc);
      fVar35 = *(float *)(lVar6 + lVar25 * 0xc) - *(float *)(lVar7 + lVar26 * 0xc);
      uVar18 = *(uint *)(lVar24 + 4 + lVar5);
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar22->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar29 = *(float *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar18 * 8);
      fVar36 = *(float *)(*(longlong *)&pTVar22->field_0x10 + 4 + (longlong)(int)uVar18 * 8);
      uVar18 = *(uint *)(lVar24 + lVar5);
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar22->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)(lVar24 + 4 + lVar5);
      lVar25 = (longlong)(int)uVar19;
      auVar31._0_8_ =
           (double)*(float *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar18 * 8);
      auVar31._8_8_ = 0;
      uVar20 = 0;
      if ((int)uVar19 < *(int *)&pTVar1->field_0x18) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      dVar12 = (double)fVar29 - auVar31._0_8_;
      dVar11 = (double)fVar36 -
               (double)*(float *)(*(longlong *)&pTVar22->field_0x10 + 4 + (longlong)(int)uVar18 * 8)
      ;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = dVar11 * dVar11 + dVar12 * dVar12;
      auVar31 = sqrtpd(auVar31,auVar32);
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = *(uint *)(lVar24 + 8 + lVar5);
      lVar26 = (longlong)(int)uVar18;
      lVar6 = *(longlong *)&pTVar1->field_0x10;
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar1->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)&pTVar1->field_0x10;
      fVar39 = *(float *)(lVar6 + 4 + lVar25 * 0xc) - *(float *)(lVar7 + 4 + lVar26 * 0xc);
      fVar29 = *(float *)(lVar6 + 8 + lVar25 * 0xc) - *(float *)(lVar7 + 8 + lVar26 * 0xc);
      fVar36 = *(float *)(lVar6 + lVar25 * 0xc) - *(float *)(lVar7 + lVar26 * 0xc);
      uVar18 = *(uint *)(lVar24 + 4 + lVar5);
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar22->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar30 = *(float *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar18 * 8);
      fVar37 = *(float *)(*(longlong *)&pTVar22->field_0x10 + 4 + (longlong)(int)uVar18 * 8);
      uVar18 = *(uint *)(lVar24 + 8 + lVar5);
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar22->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)(lVar24 + 8 + lVar5);
      lVar25 = (longlong)(int)uVar19;
      auVar34._0_8_ =
           (double)*(float *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar18 * 8);
      auVar34._8_8_ = 0;
      uVar20 = 0;
      if ((int)uVar19 < *(int *)&pTVar1->field_0x18) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      dVar12 = (double)fVar30 - auVar34._0_8_;
      dVar11 = (double)fVar37 -
               (double)*(float *)(*(longlong *)&pTVar22->field_0x10 + 4 + (longlong)(int)uVar18 * 8)
      ;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar11 * dVar11 + dVar12 * dVar12;
      auVar32 = sqrtpd(auVar34,auVar9);
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = *(uint *)(lVar24 + lVar5);
      lVar26 = (longlong)(int)uVar18;
      lVar6 = *(longlong *)&pTVar1->field_0x10;
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar1->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)&pTVar1->field_0x10;
      fVar40 = *(float *)(lVar6 + 4 + lVar25 * 0xc) - *(float *)(lVar7 + 4 + lVar26 * 0xc);
      fVar30 = *(float *)(lVar6 + 8 + lVar25 * 0xc) - *(float *)(lVar7 + 8 + lVar26 * 0xc);
      fVar37 = *(float *)(lVar6 + lVar25 * 0xc) - *(float *)(lVar7 + lVar26 * 0xc);
      uVar18 = *(uint *)(lVar24 + 8 + lVar5);
      uVar19 = 0;
      if ((int)uVar18 < *(int *)&pTVar22->field_0x18) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      fVar41 = fVar41 + SQRT(fVar38 * fVar38 + fVar35 * fVar35 + fVar28 * fVar28) +
               SQRT(fVar39 * fVar39 + fVar36 * fVar36 + fVar29 * fVar29) +
               SQRT(fVar40 * fVar40 + fVar37 * fVar37 + fVar30 * fVar30);
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)(lVar24 + lVar5);
      fVar28 = *(float *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar18 * 8);
      fVar35 = *(float *)(*(longlong *)&pTVar22->field_0x10 + 4 + (longlong)(int)uVar18 * 8);
      uVar18 = 0;
      if ((int)uVar19 < *(int *)&pTVar22->field_0x18) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar27 = (ulonglong)(uVar23 + 1);
      lVar24 = lVar24 + 0xc;
      local_res10 = local_res10 + -1;
      auVar33._0_8_ =
           (double)*(float *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar19 * 8);
      auVar33._8_8_ = 0;
      dVar12 = (double)fVar28 - auVar33._0_8_;
      dVar11 = (double)fVar35 -
               (double)*(float *)(*(longlong *)&pTVar22->field_0x10 + 4 + (longlong)(int)uVar19 * 8)
      ;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar11 * dVar11 + dVar12 * dVar12;
      auVar34 = sqrtpd(auVar33,auVar10);
      dVar13 = dVar13 + auVar31._0_8_ + auVar32._0_8_ + auVar34._0_8_;
      dVar11 = dVar13;
    } while (local_res10 != 0);
  }
  iVar17 = _finite((double)this->GlobalUVScale);
  if ((iVar17 == 0) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4490104728457314432>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                          ,0x80,"FMath::IsFinite(GlobalUVScale)"), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (0.0 < fVar41) {
    this->GlobalUVScale = (float)dVar11 / fVar41;
  }
  iVar17 = _finite((double)this->GlobalUVScale);
  if ((iVar17 == 0) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4490104728457314437>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                          ,0x85,"FMath::IsFinite(GlobalUVScale)"), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar28 = __real_3f800000;
  fVar41 = this->GlobalUVScale;
  if (fVar41 <= 0.0) {
    this->GlobalUVScale = 1.0;
    fVar41 = fVar28;
  }
  iVar17 = _finite((double)fVar41);
  if ((iVar17 == 0) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4490104728457314442>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                          ,0x8a,"FMath::IsFinite(GlobalUVScale)"), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  return;
}

