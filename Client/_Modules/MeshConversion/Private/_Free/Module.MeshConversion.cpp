// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 90

// `dynamic_initializer_for_'ModuleRegistrantMeshConversion'' @ 140f877e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMeshConversion__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MeshConversion";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MeshConversion",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMeshConversionModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PolyTriGroups'' @ 140f87830

void __cdecl ExtendedMeshAttribute::_dynamic_initializer_for__PolyTriGroups__(void)

{
  ::FName::FName(&PolyTriGroups,"PolyTriGroups");
  return;
}

// `scalar_deleting_destructor' @ 1443b5060

void * __thiscall
FMeshConversionModule::_scalar_deleting_destructor_(FMeshConversionModule *this,uint param_1)

{
  *this = (FMeshConversionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CopyTangents_Internal<float> @ 1443bd640

void __cdecl
CopyTangents_Internal<float>
          (FMeshDescription *param_1,FDynamicMesh3 *param_2,TMeshTangents<float> *param_3,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FVertexInstanceID FVar5;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar6;
  TMeshAttributeArraySet<float> *this;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  TMeshTangents<float> *pTVar15;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *this_00;
  bool bVar16;
  FMeshElementContainer *pFVar17;
  FAttributesSetEntry *pFVar18;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar19;
  TVector<float> *pTVar20;
  TMeshAttributeArrayBase<float> *this_01;
  TArrayView<FVertexInstanceID,int> *pTVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  FVertexInstanceID *pFVar26;
  uint uVar27;
  int iVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  TMeshTangents<float> *local_res18;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_148;
  undefined1 local_147 [3];
  uint local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  TVector<float> *local_130;
  uint local_128;
  TVector<float> *local_120;
  float *local_118;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_110;
  double local_108;
  TArrayView<FVertexInstanceID,int> local_100 [12];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar17 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Normal);
  if ((((pFVar18 == (FAttributesSetEntry *)0x0) ||
       (pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar18->Ptr).Ptr,
       (int)pTVar6->_padding_ != 1)) || (*(int *)((longlong)&pTVar6->_padding_ + 4) != 1)) ||
     ((pTVar6 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar6->_padding_ == 0)))) {
    pTVar20 = (TVector<float> *)0x0;
    iVar28 = 0;
    local_130 = (TVector<float> *)0x0;
    local_13c = 0;
  }
  else {
    pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar6,0);
    pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar19,0);
    iVar28 = (int)pTVar6->_padding_;
    local_13c = iVar28;
    local_130 = pTVar20;
    if ((iVar28 < 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar17 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::Tangent);
  if ((((pFVar18 == (FAttributesSetEntry *)0x0) ||
       (pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar18->Ptr).Ptr,
       (int)pTVar6->_padding_ != 1)) || (*(int *)((longlong)&pTVar6->_padding_ + 4) != 1)) ||
     ((pTVar6 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar6->_padding_ == 0)))) {
    iVar23 = 0;
    local_120 = (TVector<float> *)0x0;
    local_138 = 0;
  }
  else {
    pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar6,0);
    local_120 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar19,0);
    iVar23 = (int)pTVar6->_padding_;
    local_138 = iVar23;
    if ((iVar23 < 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar17 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar18 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar17->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if ((((pFVar18 == (FAttributesSetEntry *)0x0) ||
       (this = (TMeshAttributeArraySet<float> *)(pFVar18->Ptr).Ptr, (int)this->_padding_ != 3)) ||
      (*(int *)((longlong)&this->_padding_ + 4) != 1)) ||
     ((this == (TMeshAttributeArraySet<float> *)0x0 || ((int)this->_padding_ == 0)))) {
    iVar22 = 0;
    local_118 = (float *)0x0;
    local_134 = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
    local_118 = TMeshAttributeArrayBase<float>::GetElementBase(this_01,0);
    iVar22 = (int)this->_padding_;
    local_134 = iVar22;
    if ((iVar22 < 0) &&
       (bVar16 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iVar28 == 0) {
    local_res8[0] = 0;
    bVar16 = `CopyTangents_Internal<float>'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar16) {
      return;
    }
  }
  if (iVar23 == 0) {
    local_148 = 0;
    bVar16 = `CopyTangents_Internal<float>'::__l5::<lambda_2>::operator()(&local_148);
    if (!bVar16) {
      return;
    }
  }
  if (iVar22 == 0) {
    local_147[0] = 0;
    bVar16 = `CopyTangents_Internal<float>'::__l7::<lambda_3>::operator()(local_147);
    if (!bVar16) {
      return;
    }
  }
  param_3->Mesh = param_2;
  UE::Geometry::TMeshTangents<float>::SetTangentCount
            (param_3,((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_2->TriangleRefCounts).RefCounts.CurBlockUsed) * 3,false);
  fVar14 = __real_3f800000;
  dVar13 = __real_3e45798ee0000000;
  dVar12 = __real_3ff0000000000000;
  local_128 = (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_144 = 0;
  if ((local_128 != 0) &&
     (pFVar7 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar25 = 1;
    local_144 = 1;
    bVar16 = local_128 == 1;
    if ((int)local_128 < 2) goto LAB_1443bd930;
    do {
      lVar24 = *(longlong *)(pFVar7 + (ulonglong)(uVar25 >> 9) * 8);
      if ((*(short *)(lVar24 + (ulonglong)(uVar25 & 0x1ff) * 2) != 0) &&
         (local_144 = uVar25, *(short *)(lVar24 + (ulonglong)(uVar25 & 0x1ff) * 2) != -1)) break;
      uVar25 = uVar25 + 1;
      local_144 = uVar25;
    } while ((int)uVar25 < (int)local_128);
  }
  bVar16 = local_144 == local_128;
LAB_1443bd930:
  if (!bVar16) {
    local_110 = &param_1->TriangleVertexInstances;
LAB_1443bd9c0:
    do {
      this_00 = local_110;
      uVar25 = local_144;
      uVar27 = 0;
      if ((int)local_144 < param_4->ArrayNum) {
        uVar27 = ~local_144 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar16 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar21 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                          (this_00,local_100,
                           *(int *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar25 * 4));
      pTVar15 = local_res18;
      iVar23 = 0;
      lVar24 = (longlong)(int)uVar25 * 0x24;
      iVar28 = pTVar21->ArrayNum;
      pFVar26 = pTVar21->DataPtr;
      local_140 = uVar25 * 3;
      do {
        if ((iVar28 <= iVar23) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar5 = *pFVar26;
        uVar25 = 0;
        if ((int)FVar5 < local_13c) {
          uVar25 = ~(uint)FVar5 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar30 = pTVar20[(int)FVar5].field0_0x0._s_0.X;
        fVar1 = pTVar20[(int)FVar5].field0_0x0._s_0.Y;
        fVar32 = pTVar20[(int)FVar5].field0_0x0._s_0.Z;
        if ((iVar28 <= iVar23) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar5 = *pFVar26;
        uVar25 = 0;
        if ((int)FVar5 < local_138) {
          uVar25 = ~(uint)FVar5 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar2 = local_120[(int)FVar5].field0_0x0._s_0.X;
        fVar3 = local_120[(int)FVar5].field0_0x0._s_0.Y;
        fVar4 = local_120[(int)FVar5].field0_0x0._s_0.Z;
        dVar9 = (double)fVar2;
        dVar10 = (double)fVar3;
        dVar11 = (double)fVar4;
        if ((iVar28 <= iVar23) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar5 = *pFVar26;
        uVar25 = 0;
        if ((int)FVar5 < local_134) {
          uVar25 = ~(uint)FVar5 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar31 = local_118[(int)FVar5];
        fVar33 = (fVar1 * fVar4 - fVar32 * fVar3) * fVar31;
        fVar32 = (fVar32 * fVar2 - fVar30 * fVar4) * fVar31;
        fVar31 = (fVar30 * fVar3 - fVar1 * fVar2) * fVar31;
        dVar29 = dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11;
        if (dVar13 < dVar29) {
          local_108 = dVar12 / SQRT(dVar29);
          dVar9 = dVar9 * local_108;
          dVar10 = dVar10 * local_108;
          dVar11 = dVar11 * local_108;
        }
        fVar30 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar31 * fVar31);
        if (fVar30 <= 0.0) {
          fVar31 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
        }
        else {
          fVar30 = fVar14 / fVar30;
          fVar31 = fVar31 * fVar30;
          fVar32 = fVar32 * fVar30;
          fVar33 = fVar33 * fVar30;
        }
        uVar27 = local_140 + iVar23;
        uVar25 = 0;
        if ((int)uVar27 < (pTVar15->Tangents).ArrayNum) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (pTVar15->Tangents).AllocatorInstance.Data;
        *(float *)(pFVar7 + lVar24) = (float)dVar9;
        *(float *)(pFVar7 + lVar24 + 4) = (float)dVar10;
        *(float *)(pFVar7 + lVar24 + 8) = (float)dVar11;
        uVar25 = 0;
        if ((int)uVar27 < (pTVar15->Bitangents).ArrayNum) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (pTVar15->Bitangents).AllocatorInstance.Data;
        iVar23 = iVar23 + 1;
        pFVar26 = pFVar26 + 1;
        *(float *)(pFVar7 + lVar24) = fVar33;
        *(float *)(pFVar7 + lVar24 + 4) = fVar32;
        *(float *)(pFVar7 + lVar24 + 8) = fVar31;
        lVar24 = lVar24 + 0xc;
        pTVar20 = local_130;
      } while (iVar23 < 3);
      local_144 = local_144 + 1;
      param_4 = local_res20;
      if ((int)local_144 < (int)local_128) {
        do {
          lVar24 = *(longlong *)
                    ((local_res10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_144 >> 9) * 8);
          if ((*(short *)(lVar24 + (ulonglong)(local_144 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar24 + (ulonglong)(local_144 & 0x1ff) * 2) != -1)) goto LAB_1443bd9c0;
          local_144 = local_144 + 1;
        } while ((int)local_144 < (int)local_128);
      }
    } while (local_144 != local_128);
  }
  return;
}

// CopyTangents_Internal<double> @ 1443bdf20

void __cdecl
CopyTangents_Internal<double>
          (FMeshDescription *param_1,FDynamicMesh3 *param_2,TMeshTangents<double> *param_3,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_4)

{
  FVertexInstanceID FVar1;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar2;
  TMeshAttributeArraySet<float> *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TMeshTangents<double> *pTVar16;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *this_00;
  bool bVar17;
  FMeshElementContainer *pFVar18;
  FAttributesSetEntry *pFVar19;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar20;
  TMeshAttributeArrayBase<float> *this_01;
  TArrayView<FVertexInstanceID,int> *pTVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  FVertexInstanceID *pFVar26;
  int iVar27;
  longlong lVar28;
  double dVar29;
  undefined1 in_XMM3 [16];
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  TMeshTangents<double> *local_res18;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_158;
  undefined1 local_157 [3];
  uint local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  TVector<float> *local_138;
  TVector<float> *local_130;
  float *local_128;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_120;
  double local_118;
  double local_100;
  TArrayView<FVertexInstanceID,int> local_f8 [11];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar18 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar19 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::Normal);
  if ((((pFVar19 == (FAttributesSetEntry *)0x0) ||
       (pTVar2 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar19->Ptr).Ptr,
       (int)pTVar2->_padding_ != 1)) || (*(int *)((longlong)&pTVar2->_padding_ + 4) != 1)) ||
     ((pTVar2 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar2->_padding_ == 0)))) {
    iVar27 = 0;
    local_138 = (TVector<float> *)0x0;
    local_14c = 0;
  }
  else {
    pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar2,0);
    local_138 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,0);
    iVar27 = (int)pTVar2->_padding_;
    local_14c = iVar27;
    if ((iVar27 < 0) &&
       (bVar17 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar18 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar19 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::Tangent);
  if ((((pFVar19 == (FAttributesSetEntry *)0x0) ||
       (pTVar2 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar19->Ptr).Ptr,
       (int)pTVar2->_padding_ != 1)) || (*(int *)((longlong)&pTVar2->_padding_ + 4) != 1)) ||
     ((pTVar2 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar2->_padding_ == 0)))) {
    iVar23 = 0;
    local_130 = (TVector<float> *)0x0;
    local_148 = 0;
  }
  else {
    pTVar20 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar2,0);
    local_130 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar20,0);
    iVar23 = (int)pTVar2->_padding_;
    local_148 = iVar23;
    if ((iVar23 < 0) &&
       (bVar17 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar18 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar19 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if ((((pFVar19 == (FAttributesSetEntry *)0x0) ||
       (this = (TMeshAttributeArraySet<float> *)(pFVar19->Ptr).Ptr, (int)this->_padding_ != 3)) ||
      (*(int *)((longlong)&this->_padding_ + 4) != 1)) ||
     ((this == (TMeshAttributeArraySet<float> *)0x0 || ((int)this->_padding_ == 0)))) {
    iVar22 = 0;
    local_128 = (float *)0x0;
    local_144 = 0;
  }
  else {
    this_01 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
    local_128 = TMeshAttributeArrayBase<float>::GetElementBase(this_01,0);
    iVar22 = (int)this->_padding_;
    local_144 = iVar22;
    if ((iVar22 < 0) &&
       (bVar17 = FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iVar27 == 0) {
    local_res8[0] = 0;
    bVar17 = `CopyTangents_Internal<double>'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar17) {
      return;
    }
  }
  if (iVar23 == 0) {
    local_158 = 0;
    bVar17 = `CopyTangents_Internal<double>'::__l5::<lambda_2>::operator()(&local_158);
    if (!bVar17) {
      return;
    }
  }
  if (iVar22 == 0) {
    local_157[0] = 0;
    bVar17 = `CopyTangents_Internal<double>'::__l7::<lambda_3>::operator()(local_157);
    if (!bVar17) {
      return;
    }
  }
  param_3->Mesh = param_2;
  UE::Geometry::TMeshTangents<double>::SetTangentCount
            (param_3,((param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_2->TriangleRefCounts).RefCounts.CurBlockUsed) * 3,false);
  dVar15 = __real_3e45798ee0000000;
  dVar14 = __real_3ff0000000000000;
  local_140 = (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (param_2->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_154 = 0;
  if ((local_140 != 0) &&
     (pFVar3 = (param_2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar25 = 1;
    local_154 = 1;
    bVar17 = local_140 == 1;
    if ((int)local_140 < 2) goto LAB_1443be20e;
    do {
      lVar28 = *(longlong *)(pFVar3 + (ulonglong)(uVar25 >> 9) * 8);
      if ((*(short *)(lVar28 + (ulonglong)(uVar25 & 0x1ff) * 2) != 0) &&
         (local_154 = uVar25, *(short *)(lVar28 + (ulonglong)(uVar25 & 0x1ff) * 2) != -1)) break;
      uVar25 = uVar25 + 1;
      local_154 = uVar25;
    } while ((int)uVar25 < (int)local_140);
  }
  bVar17 = local_154 == local_140;
LAB_1443be20e:
  if (!bVar17) {
    local_120 = &param_1->TriangleVertexInstances;
LAB_1443be2a0:
    do {
      this_00 = local_120;
      uVar25 = local_154;
      uVar24 = 0;
      if ((int)local_154 < param_4->ArrayNum) {
        uVar24 = ~local_154 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar17 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar21 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                          (this_00,local_f8,
                           *(int *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar25 * 4));
      pTVar16 = local_res18;
      iVar23 = 0;
      lVar28 = (longlong)(int)uVar25 * 0x48;
      iVar27 = pTVar21->ArrayNum;
      pFVar26 = pTVar21->DataPtr;
      local_150 = uVar25 * 3;
      do {
        if ((iVar27 <= iVar23) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1 = *pFVar26;
        uVar25 = 0;
        if ((int)FVar1 < local_14c) {
          uVar25 = ~(uint)FVar1 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar8 = (double)local_138[(int)FVar1].field0_0x0._s_0.X;
        dVar13 = (double)local_138[(int)FVar1].field0_0x0._s_0.Y;
        dVar9 = (double)local_138[(int)FVar1].field0_0x0._s_0.Z;
        if ((iVar27 <= iVar23) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1 = *pFVar26;
        uVar25 = 0;
        if ((int)FVar1 < local_148) {
          uVar25 = ~(uint)FVar1 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar11 = (double)local_130[(int)FVar1].field0_0x0._s_0.X;
        dVar12 = (double)local_130[(int)FVar1].field0_0x0._s_0.Y;
        dVar10 = (double)local_130[(int)FVar1].field0_0x0._s_0.Z;
        if ((iVar27 <= iVar23) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1 = *pFVar26;
        uVar25 = 0;
        if ((int)FVar1 < local_144) {
          uVar25 = ~(uint)FVar1 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar29 = (double)local_128[(int)FVar1];
        dVar7 = (dVar13 * dVar10 - dVar9 * dVar12) * dVar29;
        dVar9 = (dVar9 * dVar11 - dVar8 * dVar10) * dVar29;
        dVar29 = (dVar8 * dVar12 - dVar13 * dVar11) * dVar29;
        dVar8 = dVar11 * dVar11 + dVar12 * dVar12 + dVar10 * dVar10;
        if (dVar15 < dVar8) {
          in_XMM3._0_8_ = dVar14 / SQRT(dVar8);
          in_XMM3._8_8_ = 0;
          dVar11 = dVar11 * in_XMM3._0_8_;
          dVar12 = dVar12 * in_XMM3._0_8_;
          dVar10 = dVar10 * in_XMM3._0_8_;
          local_118 = in_XMM3._0_8_;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar7 * dVar7 + dVar9 * dVar9 + dVar29 * dVar29;
        in_XMM3 = sqrtpd(in_XMM3,auVar6);
        if (in_XMM3._0_8_ <= 0.0) {
          dVar29 = 0.0;
          dVar9 = 0.0;
          dVar7 = 0.0;
        }
        else {
          dVar8 = dVar14 / in_XMM3._0_8_;
          dVar29 = dVar29 * dVar8;
          dVar9 = dVar9 * dVar8;
          dVar7 = dVar7 * dVar8;
        }
        uVar24 = local_150 + iVar23;
        uVar25 = 0;
        if ((int)uVar24 < (pTVar16->Tangents).ArrayNum) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        local_100 = dVar10;
        if ((uVar25 == 0) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar16->Tangents).AllocatorInstance.Data;
        auVar5._8_4_ = SUB84(dVar12,0);
        auVar5._0_8_ = dVar11;
        auVar5._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(pFVar3 + lVar28) = auVar5;
        *(double *)(pFVar3 + lVar28 + 0x10) = local_100;
        uVar25 = 0;
        if ((int)uVar24 < (pTVar16->Bitangents).ArrayNum) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar16->Bitangents).AllocatorInstance.Data;
        iVar23 = iVar23 + 1;
        pFVar26 = pFVar26 + 1;
        *(double *)(pFVar3 + lVar28) = dVar7;
        *(double *)(pFVar3 + lVar28 + 8) = dVar9;
        *(double *)(pFVar3 + lVar28 + 0x10) = dVar29;
        lVar28 = lVar28 + 0x18;
      } while (iVar23 < 3);
      local_154 = local_154 + 1;
      param_4 = local_res20;
      if ((int)local_154 < (int)local_140) {
        do {
          lVar28 = *(longlong *)
                    ((local_res10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_154 >> 9) * 8);
          if ((*(short *)(lVar28 + (ulonglong)(local_154 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar28 + (ulonglong)(local_154 & 0x1ff) * 2) != -1)) goto LAB_1443be2a0;
          local_154 = local_154 + 1;
        } while ((int)local_154 < (int)local_140);
      }
    } while (local_154 != local_140);
  }
  return;
}

// DefaultConstructItems<`FMeshDescriptionToDynamicMesh::Convert'::__l2::FTriData,int> @ 1443be7f0

void __cdecl
DefaultConstructItems<_FMeshDescriptionToDynamicMesh::Convert_::__l2::FTriData,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-4] = 0xffffffff;
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTriangleID,int> @ 1443be830

void __cdecl DefaultConstructItems<FTriangleID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FUVID,int> @ 1443be850

void __cdecl DefaultConstructItems<FUVID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FVertexID,int> @ 1443be870

void __cdecl DefaultConstructItems<FVertexID,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<`FDynamicMeshToMeshDescription::Convert_SharedInstances'::__l2::Tri,int> @ 1443be890

void __cdecl
DefaultConstructItems<_FDynamicMeshToMeshDescription::Convert_SharedInstances_::__l2::Tri,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TMeshAttributesRef<FUVID,UE::Math::TVector2<float>_>,int> @ 1443be8c0

void __cdecl
DefaultConstructItems<TMeshAttributesRef<FUVID,UE::Math::TVector2<float>_>,int>
          (void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<TArray<FUVID,TSizedDefaultAllocator<32>_>,int> @ 1443be8e0

void __cdecl
DestructItems<TArray<FUVID,TSizedDefaultAllocator<32>_>,int>
          (TArray<FUVID,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,1> @ 1443be920

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,1>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,2> @ 1443be980

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,2>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector2<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector2<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,UE::Math::TVector2<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,3> @ 1443be9e0

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,3>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<float_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<float_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<float_const_>_>)param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,float_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FTriangleID,float_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<float_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,4> @ 1443bea40

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,4>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<int_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<int_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FTriangleID,TArrayAttribute<int_const_>_>)param_3
              );
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,int_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FTriangleID,int_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<int_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,5> @ 1443beaa0

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,5>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<bool_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<bool_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<bool_const_>_>)param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,bool_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FTriangleID,bool_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<bool_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,6> @ 1443beb00

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,6>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<FName_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<FName_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<FName_const_>_>)param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,FName_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FTriangleID,FName_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<FName_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,7> @ 1443beb60

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,7>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TTransform<double>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>
                )param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,UE::Math::TTransform<double>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,UE::Math::TTransform<double>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FTriangleID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>,0> @ 1443bebc0

void __cdecl
ForEachConstImpl::Dispatch<FTriangleID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>,0>
          (FName param_1,<lambda_4> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector4<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
    operator()<TMeshAttributesRef<FTriangleID,UE::Math::TVector4<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FTriangleID,UE::Math::TVector4<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>::
  operator()<TMeshAttributesRef<FTriangleID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,1> @ 1443bec20

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,1>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,2> @ 1443bec80

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,2>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,3> @ 1443bece0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,3>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>)param_3
              );
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,float_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,float_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,4> @ 1443bed40

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,4>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>)param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,int_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,int_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_>_>(param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,5> @ 1443beda0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,5>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>)param_3)
    ;
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,bool_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,bool_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_>_>(param_2,param_1,&local_18)
  ;
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,6> @ 1443bee00

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,6>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>)param_3
              );
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,FName_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,FName_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,7> @ 1443bee60

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,7>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>,0> @ 1443beec0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>,0>
          (FName param_1,<lambda_2> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,1> @ 1443bef20

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,1>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,2> @ 1443bf330

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,2>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,3> @ 1443bf740

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,3>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,4> @ 1443bfb50

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,4>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,5> @ 1443bff60

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,5>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,6> @ 1443c0370

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,6>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,7> @ 1443c0780

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,7>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>,0> @ 1443c0b90

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>,0>
          (FName param_1,<lambda_3> *param_2,FMeshAttributeArraySetBase *param_3)

{
  TDynamicVector<float,512> *pTVar1;
  TArray<FMorphTargetAttribCopyInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar8;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTVar9;
  FDynamicMeshAttributeSet *this;
  FDynamicMesh3 *pFVar10;
  FName local_res18;
  FName local_res20;
  FName local_68;
  undefined8 local_60;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_58;
  undefined8 local_50;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_48;
  undefined8 local_40;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *pTStack_38;
  
  if (param_3->Extent == 0) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res18);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_60);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_58 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_60;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_58;
  }
  else if (param_3->Extent == 1) {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_res20);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_50);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_48 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_50;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_48;
    local_res18 = local_res20;
  }
  else {
    bVar6 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
    if (!bVar6) {
      return;
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute((FName)&local_68);
    pTVar8 = ::operator_new(0x30);
    pFVar10 = param_2->MeshOut;
    pTVar9 = (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0;
    if (pTVar8 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar1 = &pTVar8->AttribValues;
      pTVar8->_padding_ = 0;
      pTVar8->Parent = pFVar10;
      pTVar8->_padding_ =
           (longlong)
           &___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      pTVar1->CurBlock = 0;
      pTVar1->CurBlockUsed = 0;
      (pTVar8->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar8->AttribValues).Blocks.ArrayNum = 0;
      (pTVar8->AttribValues).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(pTVar1);
      UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
                (pTVar8,0.0);
      pTVar9 = pTVar8;
    }
    pTVar2 = param_2->MorphTargetAttribs;
    FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
              ((FSkeletalMeshAttributesShared *)&param_2->Attributes->field_0x8,(FName)&local_40);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTStack_38 = pTVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)pTVar2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = pTVar2->ArrayNum;
    if (iVar7 == pTVar2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = iVar7 + 1;
    pFVar3 = pFVar3 + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar3 = local_40;
    *(TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> **)(pFVar3 + 8) = pTStack_38;
    local_res18 = local_68;
  }
  pFVar4 = (pFVar10->AttributeSet).Ptr;
  this = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    this = pFVar4;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachMorphTargetAttribute(this,local_res18,pTVar9);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,1> @ 1443c0fa0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,1>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,2> @ 1443c1000

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,2>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector2<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector2<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,3> @ 1443c1060

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,3>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<float_const_>_>)param_3
              );
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,float_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,float_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<float_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,4> @ 1443c10c0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,4>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<int_const_>_>)param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,int_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,int_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<int_const_,int>_>_>(param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,5> @ 1443c1120

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,5>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<bool_const_>_>)param_3)
    ;
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,bool_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,bool_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<bool_const_,int>_>_>(param_2,param_1,&local_18)
  ;
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,6> @ 1443c1180

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,6>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,TArrayAttribute<FName_const_>_>)param_3
              );
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,FName_const_>_>
              (param_2,param_1,(TMeshAttributesRef<FVertexID,FName_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<FName_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,7> @ 1443c11e0

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,7>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TTransform<double>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TTransform<double>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TTransform<double>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// Dispatch<FVertexID,`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>,0> @ 1443c1240

void __cdecl
ForEachConstImpl::Dispatch<FVertexID,_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>,0>
          (FName param_1,<lambda_5> *param_2,FMeshAttributeArraySetBase *param_3)

{
  uint uVar1;
  TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_> local_18;
  
  uVar1 = param_3->Extent;
  if (uVar1 == 0) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,TArrayAttribute<UE::Math::TVector4<float>_const_>_>)
               param_3);
    return;
  }
  if (uVar1 == 1) {
    `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
    operator()<TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>_>
              (param_2,param_1,
               (TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_>)param_3);
    return;
  }
  local_18.Extent = uVar1;
  local_18.ArrayPtr = param_3;
  `FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>::
  operator()<TMeshAttributesRef<FVertexID,TArrayView<UE::Math::TVector4<float>_const_,int>_>_>
            (param_2,param_1,&local_18);
  return;
}

// ForEach<`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_2>_> @ 1443c24e0

void __thiscall
TAttributesSet<FVertexID>::ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_2>_>
          (TAttributesSet<FVertexID> *this,<lambda_2> *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FName FVar6;
  code *pcVar7;
  TAttributesSet<FVertexID> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  <lambda_2> local_b8;
  TAttributesSet<FVertexID> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TAttributesSet<FVertexID> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1443c257d;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_1443c257d:
  uVar13 = *(uint *)&this->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443c2680;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1443c2680:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this))
    break;
    local_b8.MeshOut = param_1->MeshOut;
    local_b8.SkinWeightAttribs = param_1->SkinWeightAttribs;
    local_b8.Attributes = param_1->Attributes;
    pFVar2 = (FName *)(*(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    FVar6 = pFVar2[1];
    (*::JumpTable.Fns[*(uint *)((longlong)FVar6 + 8)])
              (*pFVar2,&local_b8,(FMeshAttributeArraySetBase *)FVar6);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<`FMeshDescriptionToDynamicMesh::Convert'::__l80::<lambda_3>_> @ 1443c2720

void __thiscall
TAttributesSet<FVertexID>::ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l80::<lambda_3>_>
          (TAttributesSet<FVertexID> *this,<lambda_3> *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FName FVar6;
  code *pcVar7;
  TAttributesSet<FVertexID> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  <lambda_3> local_b8;
  TAttributesSet<FVertexID> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TAttributesSet<FVertexID> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1443c27bd;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_1443c27bd:
  uVar13 = *(uint *)&this->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443c28c0;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1443c28c0:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this))
    break;
    local_b8.MeshOut = param_1->MeshOut;
    local_b8.MorphTargetAttribs = param_1->MorphTargetAttribs;
    local_b8.Attributes = param_1->Attributes;
    pFVar2 = (FName *)(*(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    FVar6 = pFVar2[1];
    (*::JumpTable.Fns[*(uint *)((longlong)FVar6 + 8)])
              (*pFVar2,&local_b8,(FMeshAttributeArraySetBase *)FVar6);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_4>_> @ 1443c2960

void __thiscall
TAttributesSet<FTriangleID>::ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_4>_>
          (TAttributesSet<FTriangleID> *this,<lambda_4> *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FName FVar6;
  code *pcVar7;
  TAttributesSet<FTriangleID> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  <lambda_4> local_b8;
  TAttributesSet<FTriangleID> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TAttributesSet<FTriangleID> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1443c29fd;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_1443c29fd:
  uVar13 = *(uint *)&this->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443c2b00;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1443c2b00:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this))
    break;
    local_b8.TriAttribsSet = param_1->TriAttribsSet;
    local_b8.PolygroupAttribs = param_1->PolygroupAttribs;
    local_b8.PolygroupAttribNames = param_1->PolygroupAttribNames;
    pFVar2 = (FName *)(*(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    FVar6 = pFVar2[1];
    (*::JumpTable.Fns[*(uint *)((longlong)FVar6 + 8)])
              (*pFVar2,&local_b8,(FMeshAttributeArraySetBase *)FVar6);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<`FMeshDescriptionToDynamicMesh::Convert'::__l2::<lambda_5>_> @ 1443c2ba0

void __thiscall
TAttributesSet<FVertexID>::ForEach<_FMeshDescriptionToDynamicMesh::Convert_::__l2::<lambda_5>_>
          (TAttributesSet<FVertexID> *this,<lambda_5> *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FName FVar6;
  code *pcVar7;
  TAttributesSet<FVertexID> *pTVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  <lambda_5> local_b8;
  TAttributesSet<FVertexID> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TAttributesSet<FVertexID> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&this->field_0x28;
  puVar1 = &this->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&this->field_0x20;
    if (*(uint **)&this->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1443c2c3d;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar10;
    if (iVar4 < iStack_7c) {
      iStack_7c = iVar4;
    }
  }
LAB_1443c2c3d:
  uVar13 = *(uint *)&this->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_70 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&this->field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443c2d40;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1443c2d40:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == this))
    break;
    local_b8.VertAttribsSet = param_1->VertAttribsSet;
    local_b8.WeightAttribs = param_1->WeightAttribs;
    local_b8.WeightAttribNames = param_1->WeightAttribNames;
    pFVar2 = (FName *)(*(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    FVar6 = pFVar2[1];
    (*::JumpTable.Fns[*(uint *)((longlong)FVar6 + 8)])
              (*pFVar2,&local_b8,(FMeshAttributeArraySetBase *)FVar6);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetAttributesFromOverlay<UE::Math::TVector2<float>,2,UE::Math::TVector2<float>_> @ 1443c2ff0

void __cdecl
DynamicMeshToMeshDescriptionConversionHelper::
SetAttributesFromOverlay<UE::Math::TVector2<float>,2,UE::Math::TVector2<float>_>
          (FDynamicMesh3 *param_1,FMeshDescription *param_2,
          TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> *param_3,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_4,
          TVector2<float> param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FVertexInstanceID FVar4;
  longlong lVar5;
  FVertexInstanceID *pFVar6;
  code *pcVar7;
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  TVector2<float> TVar10;
  bool bVar11;
  TArrayView<FVertexInstanceID,int> *pTVar12;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar13;
  TVector2<float>_u_0 *pTVar14;
  int iVar15;
  TElementIDs local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  TConstIterator local_68;
  TArrayView<FVertexInstanceID,int> local_48;
  
  local_a8.Array = &FMeshElementChannels::Get(param_2->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_a8,(TConstIterator *)&local_88);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_a8,&local_68);
  while( true ) {
    if ((local_88.CurrentBitIndex == local_68.Iterator.CurrentBitIndex) &&
       (local_88.Array == local_68.Iterator.Array)) break;
    iVar15 = -1;
    if (local_88.CurrentBitIndex < (local_88.Array)->NumBits) {
      iVar15 = local_88.CurrentBitIndex;
    }
    pTVar12 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&param_2->TriangleVertexInstances,&local_48,iVar15);
    lVar5 = *(longlong *)&param_4->field_0x78;
    uVar3 = iVar15 * 3;
    pFVar6 = pTVar12->DataPtr;
    iVar15 = pTVar12->ArrayNum;
    uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                     (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)uVar1 < 0) {
      if (iVar15 < 1) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = *pFVar6;
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar14 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar4)->field0_0x0;
      pTVar14->_s_0 = (TVector2<float>_u_0_s_0)param_5.field0_0x0;
      if (iVar15 < 2) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = pFVar6[1];
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar14 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar4)->field0_0x0;
      pTVar14->_s_0 = (TVector2<float>_u_0_s_0)param_5.field0_0x0;
      if (iVar15 < 3) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = pFVar6[2];
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar14 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar4)->field0_0x0;
      pTVar14->_s_0 = (TVector2<float>_u_0_s_0)param_5.field0_0x0;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                       (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      uVar3 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                       (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      local_a0 = *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)&param_4->field_0x48 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8)
                  + (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
      uStack_9c = *(undefined4 *)
                   (*(longlong *)
                     (*(longlong *)&param_4->field_0x48 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8
                     ) + (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
      if (iVar15 < 1) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = *pFVar6;
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar14 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar4)->field0_0x0;
      TVar8.field0_0x0._s_0.Y = (float)uStack_9c;
      TVar8.field0_0x0._s_0.X = (float)local_a0;
      *pTVar14 = TVar8.field0_0x0;
      local_98 = *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)&param_4->field_0x48 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8)
                  + (ulonglong)(uVar2 * 2 & 0x1ff) * 4);
      uStack_94 = *(undefined4 *)
                   (*(longlong *)
                     (*(longlong *)&param_4->field_0x48 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8
                     ) + (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4);
      if (iVar15 < 2) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = pFVar6[1];
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar14 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar4)->field0_0x0;
      TVar9.field0_0x0._s_0.Y = (float)uStack_94;
      TVar9.field0_0x0._s_0.X = (float)local_98;
      *pTVar14 = TVar9.field0_0x0;
      local_90 = *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)&param_4->field_0x48 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8)
                  + (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
      uStack_8c = *(undefined4 *)
                   (*(longlong *)
                     (*(longlong *)&param_4->field_0x48 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8
                     ) + (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
      if (iVar15 < 3) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = pFVar6[2];
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar14 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar4)->field0_0x0;
      TVar10.field0_0x0._s_0.Y = (float)uStack_8c;
      TVar10.field0_0x0._s_0.X = (float)local_90;
      *pTVar14 = TVar10.field0_0x0;
    }
    local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
  }
  return;
}

// SetAttributesFromOverlay<UE::Math::TVector<float>,3,UE::Math::TVector<float>_> @ 1443c3460

void __cdecl
DynamicMeshToMeshDescriptionConversionHelper::
SetAttributesFromOverlay<UE::Math::TVector<float>,3,UE::Math::TVector<float>_>
          (FDynamicMesh3 *param_1,FMeshDescription *param_2,
          TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> *param_3,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_4,
          TVector<float> *param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FVertexInstanceID FVar6;
  longlong lVar7;
  FVertexInstanceID *pFVar8;
  longlong lVar9;
  code *pcVar10;
  uint uVar11;
  bool bVar12;
  TArrayView<FVertexInstanceID,int> *pTVar13;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar14;
  TVector<float> *pTVar15;
  float fVar16;
  int iVar17;
  undefined8 uVar18;
  TElementIDs local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  TConstIterator local_68;
  TArrayView<FVertexInstanceID,int> local_48;
  
  local_90.Array = &FMeshElementChannels::Get(param_2->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_90,(TConstIterator *)&local_88);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_90,&local_68);
  while( true ) {
    if ((local_88.CurrentBitIndex == local_68.Iterator.CurrentBitIndex) &&
       (local_88.Array == local_68.Iterator.Array)) break;
    iVar17 = -1;
    if (local_88.CurrentBitIndex < (local_88.Array)->NumBits) {
      iVar17 = local_88.CurrentBitIndex;
    }
    pTVar13 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&param_2->TriangleVertexInstances,&local_48,iVar17);
    lVar7 = *(longlong *)&param_4->field_0x78;
    uVar11 = iVar17 * 3;
    pFVar8 = pTVar13->DataPtr;
    iVar17 = pTVar13->ArrayNum;
    iVar3 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
    if (iVar3 < 0) {
      if (iVar17 < 1) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar6 = *pFVar8;
      pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar14,(int)FVar6);
      fVar16 = (param_5->field0_0x0)._s_0.Z;
      *(undefined8 *)&pTVar15->field0_0x0 = *(undefined8 *)&param_5->field0_0x0;
      (pTVar15->field0_0x0)._s_0.Z = fVar16;
      if (iVar17 < 2) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar6 = pFVar8[1];
      pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar14,(int)FVar6);
      fVar16 = (param_5->field0_0x0)._s_0.Z;
      *(undefined8 *)&pTVar15->field0_0x0 = *(undefined8 *)&param_5->field0_0x0;
      (pTVar15->field0_0x0)._s_0.Z = fVar16;
      if (iVar17 < 3) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar6 = pFVar8[2];
      pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar14,(int)FVar6);
      uVar18 = *(undefined8 *)&param_5->field0_0x0;
      fVar16 = (param_5->field0_0x0)._s_0.Z;
    }
    else {
      lVar9 = *(longlong *)&param_4->field_0x48;
      iVar4 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                      (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      iVar5 = *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                      (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      uVar11 = iVar3 * 3;
      uVar1 = *(undefined4 *)
               (*(longlong *)(lVar9 + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar2 = *(undefined4 *)
               (*(longlong *)(lVar9 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
               (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      fVar16 = *(float *)(*(longlong *)(lVar9 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                         (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      if (iVar17 < 1) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar6 = *pFVar8;
      pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar14,(int)FVar6);
      uVar11 = iVar4 * 3;
      *(ulonglong *)&pTVar15->field0_0x0 = CONCAT44(uVar2,uVar1);
      (pTVar15->field0_0x0)._s_0.Z = fVar16;
      lVar7 = *(longlong *)&param_4->field_0x48;
      uVar1 = *(undefined4 *)
               (*(longlong *)(lVar7 + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar2 = *(undefined4 *)
               (*(longlong *)(lVar7 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
               (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      fVar16 = *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                         (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      if (iVar17 < 2) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar6 = pFVar8[1];
      pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar14,(int)FVar6);
      *(ulonglong *)&pTVar15->field0_0x0 = CONCAT44(uVar2,uVar1);
      (pTVar15->field0_0x0)._s_0.Z = fVar16;
      lVar7 = *(longlong *)&param_4->field_0x48;
      uVar11 = iVar5 * 3;
      uVar1 = *(undefined4 *)
               (*(longlong *)(lVar7 + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar2 = *(undefined4 *)
               (*(longlong *)(lVar7 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
               (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      fVar16 = *(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                         (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      if (iVar17 < 3) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FVar6 = pFVar8[2];
      pTVar14 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3->ArrayPtr,
                           param_6);
      pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar14,(int)FVar6);
      uVar18 = CONCAT44(uVar2,uVar1);
    }
    *(undefined8 *)&pTVar15->field0_0x0 = uVar18;
    (pTVar15->field0_0x0)._s_0.Z = fVar16;
    local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
  }
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,0,1> @ 1443c3bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FDynamicMeshToMeshDescription::Convert_NoSharedInstances_::__l50::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`50'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,0,0> @ 1443c3be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FDynamicMeshToMeshDescription::Convert_NoSharedInstances_::__l54::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`54'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,0,1> @ 1443c3c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,0,1>
::
~TFunction_OwnedObject<_FDynamicMeshToMeshDescription::Convert_NoSharedInstances_::__l59::<lambda_4>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`59'::<lambda_4>,0,1>
        ::_vftable_;
  return;
}

// `default_constructor_closure' @ 1443c9620

void __thiscall UE::Math::TVector4<float>::_default_constructor_closure_(TVector4<float> *this)

{
  (this->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)&this->field0_0x0 = 0;
  (this->field0_0x0)._s_0.Z = 0.0;
  return;
}

// `scalar_deleting_destructor' @ 1443c9640

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::A]::<lambda_10>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c96a0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::D]::<lambda_11>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9710

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::H]::<lambda_12>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9780

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::L]::<lambda_13>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c97f0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'[::O]::<lambda_14>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9860

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::__l144::<lambda_15>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c98d0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::__l146::<lambda_16>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9940

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::__l116::<lambda_6>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c99a0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::__l119::<lambda_7>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9a10

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::__l122::<lambda_8>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9a80

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FMeshDescriptionToDynamicMesh::Convert'::__l125::<lambda_9>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9ae0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::A]::<lambda_10>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9b20

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::D]::<lambda_11>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9b60

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::H]::<lambda_12>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9ba0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::L]::<lambda_13>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9be0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'[::O]::<lambda_14>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9c20

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::__l144::<lambda_15>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9c60

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::__l146::<lambda_16>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9ca0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::__l116::<lambda_6>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9ce0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::__l119::<lambda_7>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9d20

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::__l122::<lambda_8>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9d60

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FMeshDescriptionToDynamicMesh::Convert'::__l125::<lambda_9>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9da0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXHPEAUFVertexInstanceID___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`50'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`54'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`59'::<lambda_4>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1443c9ea0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FDynamicMesh3,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Geometry::FDynamicMesh3,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// ConvertVertices @ 1443cf890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
DynamicMeshToMeshDescriptionConversionHelper::ConvertVertices
          (FDynamicMesh3 *param_1,FMeshDescriptionBuilder *param_2,bool param_3,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FMeshDescription *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  FMeshDescriptionBuilder *pFVar9;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FMeshElementContainer *pFVar14;
  FMeshElementContainer *pFVar15;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar16;
  TVector<float> *pTVar17;
  ulonglong uVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  int local_118;
  FMeshDescriptionBuilder *local_110;
  uint local_108 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *local_100;
  int local_f8 [2];
  FNonManifoldMappingSupport local_f0;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_110 = param_2;
  local_100 = param_4;
  TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNum
            (param_4,(param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_f0,param_1);
  if ((param_3) &&
     (bVar11 = UE::Geometry::FNonManifoldMappingSupport::IsNonManifoldVertexInSource(&local_f0),
     bVar11)) {
    iVar26 = 0;
    iVar24 = 0;
    uVar22 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    uVar21 = 0;
    if ((uVar22 != 0) &&
       (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar21 = 0,
       0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
      uVar20 = 1;
      uVar21 = 1;
      if (1 < (int)uVar22) {
        do {
          sVar2 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar20 >> 9) * 8) +
                            (ulonglong)(uVar20 & 0x1ff) * 2);
          if ((sVar2 != 0) && (uVar21 = uVar20, sVar2 != -1)) break;
          uVar20 = uVar20 + 1;
          uVar21 = uVar20;
        } while ((int)uVar20 < (int)uVar22);
      }
    }
joined_r0x0001443cf97a:
    if (uVar21 != uVar22) {
      while( true ) {
        iVar12 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                           (&local_f0,uVar21);
        if (iVar12 == -1) {
          iVar24 = iVar24 + 1;
          iVar12 = iVar26;
        }
        else if (iVar12 < iVar26) {
          iVar12 = iVar26;
        }
        iVar26 = iVar12;
        uVar21 = uVar21 + 1;
        if ((int)uVar22 <= (int)uVar21) break;
        while( true ) {
          lVar4 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar21 >> 9) * 8);
          if ((*(short *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 2) != -1)) break;
          uVar21 = uVar21 + 1;
          if ((int)uVar22 <= (int)uVar21) goto joined_r0x0001443cf97a;
        }
      }
      goto joined_r0x0001443cf97a;
    }
    iVar26 = iVar26 + 1;
    pFVar5 = local_110->MeshDescription;
    local_118 = iVar26;
    pFVar14 = FMeshElementChannels::Get(pFVar5->VertexElements,0);
    pFVar15 = FMeshElementChannels::Get(pFVar5->VertexElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar14->BitArray,
               ((pFVar15->BitArray).NumBits - pFVar15->NumHoles) + iVar26 + iVar24);
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    local_a8.Elements._48_4_ = 0xffffffff;
    uVar21 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar23 = 0;
    if (((uVar21 != 0) &&
        (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar23 = 0,
        0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar23 = 1, 1 < (int)uVar21)) {
      do {
        uVar18 = (ulonglong)((uint)uVar23 & 0x1ff);
        lVar4 = *(longlong *)(pFVar3 + (uVar23 >> 9) * 8);
        if ((*(short *)(lVar4 + uVar18 * 2) != 0) && (*(short *)(lVar4 + uVar18 * 2) != -1)) break;
        uVar22 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
      } while ((int)uVar22 < (int)uVar21);
    }
    uVar22 = (uint)uVar23;
joined_r0x0001443cfa9b:
    if (uVar22 == uVar21) {
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      return;
    }
    do {
      uVar22 = (uint)uVar23;
      lVar4 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8);
      local_b8 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar4 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      uVar20 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                         (&local_f0,uVar22);
      pTVar10 = local_100;
      pFVar9 = local_110;
      local_108[0] = uVar20;
      if (uVar20 == 0xffffffff) {
        local_118 = iVar26 + 1;
        pFVar14 = FMeshElementChannels::Get(local_110->MeshDescription->VertexElements,0);
        FMeshElementContainer::Insert(pFVar14,iVar26);
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (pFVar9->VertexPositions).ArrayPtr,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar16,iVar26)
        ;
        pTVar10 = local_100;
        (pTVar17->field0_0x0)._s_0.X = (float)dVar7;
        (pTVar17->field0_0x0)._s_0.Y = (float)dVar8;
        (pTVar17->field0_0x0)._s_0.Z = (float)local_b8;
        uVar20 = 0;
        if ((int)uVar22 < local_100->ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (local_128 = (longlong)(int)uVar22, local_120 = (longlong)local_100->ArrayNum,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar22 * 4) = iVar26;
      }
      else {
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_a8.Hash.SecondaryData;
          }
          for (iVar26 = *(int *)((longlong)FVar19 + (ulonglong)(local_a8.HashSize - 1U & uVar20) * 4
                                ); iVar26 != -1;
              iVar26 = *(int *)(local_a8.Elements._0_8_ + 4 + (longlong)iVar26 * 0xc)) {
            if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar26 * 0xc) == uVar20) {
              uVar13 = 0;
              if ((int)uVar22 < local_100->ArrayNum) {
                uVar13 = ~uVar22 >> 0x1f;
              }
              if (uVar13 == 0) {
                local_128 = (longlong)(int)uVar22;
                local_120 = (longlong)local_100->ArrayNum;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              *(uint *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar22 * 4) = uVar20;
              goto LAB_1443cfd1c;
            }
          }
        }
        pFVar14 = FMeshElementChannels::Get(local_110->MeshDescription->VertexElements,0);
        FMeshElementContainer::Insert(pFVar14,uVar20);
        pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (pFVar9->VertexPositions).ArrayPtr,0);
        pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar16,uVar20)
        ;
        pTVar10 = local_100;
        (pTVar17->field0_0x0)._s_0.X = (float)dVar7;
        (pTVar17->field0_0x0)._s_0.Y = (float)dVar8;
        (pTVar17->field0_0x0)._s_0.Z = (float)local_b8;
        uVar13 = 0;
        if ((int)uVar22 < local_100->ArrayNum) {
          uVar13 = ~uVar22 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_128 = (longlong)(int)uVar22;
          local_120 = (longlong)local_100->ArrayNum;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        *(uint *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar22 * 4) = uVar20;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_a8,local_f8,(bool *)local_108);
      }
LAB_1443cfd1c:
      uVar22 = uVar22 + 1;
      uVar23 = (ulonglong)uVar22;
      iVar26 = local_118;
      if ((int)uVar21 <= (int)uVar22) goto joined_r0x0001443cfa9b;
      while( true ) {
        uVar18 = (ulonglong)((uint)uVar23 & 0x1ff);
        lVar4 = *(longlong *)
                 ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar23 >> 9) * 8);
        if ((*(short *)(lVar4 + uVar18 * 2) != 0) && (*(short *)(lVar4 + uVar18 * 2) != -1)) break;
        uVar22 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
        if ((int)uVar21 <= (int)uVar22) goto joined_r0x0001443cfa9b;
      }
    } while( true );
  }
  pFVar5 = param_2->MeshDescription;
  iVar26 = (param_1->VertexRefCounts).UsedCount;
  pFVar14 = FMeshElementChannels::Get(pFVar5->VertexElements,0);
  pFVar15 = FMeshElementChannels::Get(pFVar5->VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar14->BitArray,((pFVar15->BitArray).NumBits - pFVar15->NumHoles) + iVar26);
  uVar21 = 0;
  uVar22 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar22 != 0) &&
     (pFVar3 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar21 = 1;
    bVar11 = uVar22 == 1;
    if ((int)uVar22 < 2) goto LAB_1443cfe28;
    do {
      lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar21 >> 9) * 8);
      if ((*(short *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 2) != -1)) break;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < (int)uVar22);
  }
  bVar11 = uVar21 == uVar22;
LAB_1443cfe28:
  if (!bVar11) {
LAB_1443cfe30:
    do {
      lVar25 = (longlong)(int)uVar21;
      lVar4 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8);
      pdVar1 = (double *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 0x18);
      dVar7 = *pdVar1;
      dStack_d8 = pdVar1[1];
      local_d0 = *(double *)(lVar4 + 0x10 + (ulonglong)(uVar21 & 0x1ff) * 0x18);
      local_e0 = dVar7;
      pFVar14 = FMeshElementChannels::Get(local_110->MeshDescription->VertexElements,0);
      iVar26 = FMeshElementContainer::Add(pFVar14);
      pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (local_110->VertexPositions).ArrayPtr,0);
      pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar16,iVar26);
      (pTVar17->field0_0x0)._s_0.X = (float)dVar7;
      (pTVar17->field0_0x0)._s_0.Y = (float)dStack_d8;
      (pTVar17->field0_0x0)._s_0.Z = (float)local_d0;
      uVar20 = 0;
      if ((int)uVar21 < param_4->ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_128 = lVar25, local_120 = (longlong)param_4->ArrayNum,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar21 = uVar21 + 1;
      *(int *)((param_4->AllocatorInstance).Data + lVar25 * 4) = iVar26;
      if ((int)uVar21 < (int)uVar22) {
        do {
          lVar4 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar21 >> 9) * 8);
          if ((*(short *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar4 + (ulonglong)(uVar21 & 0x1ff) * 2) != -1)) goto LAB_1443cfe30;
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < (int)uVar22);
      }
    } while (uVar21 != uVar22);
  }
  return;
}

// ShouldConversionUseSharedUVs @ 1443d9560

bool __cdecl
MeshDescriptionUVsToDynamicMeshLocals::ShouldConversionUseSharedUVs
          (FMeshDescription *param_1,int param_2)

{
  FMeshElementContainer *pFVar1;
  
  if (param_2 < (param_1->UVElements->Channels).ArrayNum) {
    pFVar1 = FMeshElementChannels::Get(param_1->UVElements,param_2);
    if ((pFVar1->BitArray).NumBits != 0) {
      return true;
    }
  }
  return false;
}

// IMPLEMENT_MODULE_MeshConversion @ 1443dc650

void __cdecl IMPLEMENT_MODULE_MeshConversion(void)

{
  return;
}

// operator() @ 1504bd800

bool __thiscall `CopyTangents_Internal<float>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246661>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246661>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bd840

bool __thiscall `CopyTangents_Internal<double>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246661>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246661>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bda00

bool __thiscall `CopyTangents_Internal<float>'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246662>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246662>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bda40

bool __thiscall `CopyTangents_Internal<double>'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246662>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246662>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdc00

bool __thiscall `CopyTangents_Internal<float>'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246663>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246663>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bdc40

bool __thiscall `CopyTangents_Internal<double>'::__l7::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1375024081778246663>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1375024081778246663>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

