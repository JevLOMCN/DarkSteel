// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 21

// Initialize<int> @ 14db32430

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::Initialize<int>
          (FCollectionClothSimPatternFacade *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  TVector2<float>_u_0 TVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TManagedArray<int> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TManagedArray<int> *pTVar15;
  code *pcVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  TVector<float> *pTVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStackY_1a0 [24];
  int local_170;
  int local_16c;
  TArrayView<UE::Math::TVector<float>,int> local_168;
  uint local_158;
  int local_154;
  TArrayView<UE::Math::TVector<float>,int> local_150;
  TVector<float> *local_140;
  int local_138;
  uint local_134;
  longlong local_130;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_118;
  undefined **local_108 [2];
  TReferenceControllerBase<1> *local_f8;
  TVector<float> *local_f0;
  longlong local_e8;
  TArrayView<UE::Math::TVector2<float>,int> local_e0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_d0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_c0 [8];
  
  Reset(this);
  SetFabricIndex(this,param_4);
  iVar3 = param_1->ArrayNum;
  local_154 = iVar3;
  if ((iVar3 != param_2->ArrayNum) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSimVertices == Positions3D.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0x84,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar8 = *(undefined8 *)&this->field_0x8;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108[1] = (undefined **)uVar8;
  local_f8 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_108[0] = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  AppendSimVertices(this,(int)auStackY_1a0 + 0x30);
  if ((local_170 != 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartVertexIndex[0] == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0x88,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  GetSimPosition2D(this,&local_e0);
  FCollectionClothFacade::GetSimPosition3D((FCollectionClothFacade *)local_108,&local_150);
  FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)local_108,&local_168);
  uVar23 = 0;
  if (0 < iVar3) {
    lVar27 = 0;
    lVar25 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar24 = 0;
      if ((int)uVar23 < local_e0.ArrayNum) {
        uVar24 = uVar22;
      }
      TVar9 = *(TVector2<float>_u_0 *)((param_1->AllocatorInstance).Data + lVar27 * 8);
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_e0.DataPtr[lVar27].field0_0x0 = TVar9;
      uVar24 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar10 = (param_2->AllocatorInstance).Data;
      uVar22 = local_16c + uVar23;
      uVar8 = *(undefined8 *)(pFVar10 + lVar25);
      fVar4 = *(float *)(pFVar10 + lVar25 + 8);
      uVar24 = 0;
      if ((int)uVar22 < local_150.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *(undefined8 *)&local_150.DataPtr[(int)uVar22].field0_0x0 = uVar8;
      local_150.DataPtr[(int)uVar22].field0_0x0._s_0.Z = fVar4;
      if (((int)uVar23 < 0) || (param_5->ArrayNum <= (int)uVar23)) {
        pTVar21 = &UE::Math::TVector<float>::ZeroVector;
      }
      else {
        if (((int)uVar23 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar21 = (TVector<float> *)
                  ((param_5->AllocatorInstance).Data + (longlong)(int)uVar23 * 0xc);
      }
      uVar8 = *(undefined8 *)pTVar21;
      uVar22 = local_16c + uVar23;
      fVar4 = *(float *)((longlong)pTVar21 + 8);
      uVar24 = 0;
      if ((int)uVar22 < local_168.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar23 = uVar23 + 1;
      lVar27 = lVar27 + 1;
      lVar25 = lVar25 + 0xc;
      *(undefined8 *)&local_168.DataPtr[(int)uVar22].field0_0x0 = uVar8;
      local_168.DataPtr[(int)uVar22].field0_0x0._s_0.Z = fVar4;
    } while (lVar27 < local_154);
  }
  iVar3 = param_3->ArrayNum;
  if ((param_3->ArrayNum !=
       (iVar3 / 3 + (iVar3 >> 0x1f) +
       (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Indices.Num() % 3 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0xd,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar3 = param_3->ArrayNum / 3;
  SetNumSimFaces(this,iVar3);
  GetSimIndices2D(this,&local_d0);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar19 = *(int *)&this->field_0x18;
  lVar25 = *(longlong *)&this->field_0x8;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar12 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar13 = *(TManagedArray<int> **)(lVar25 + 0xe0);
  lVar25 = *(longlong *)&this->field_0x8;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar27 = *(longlong *)&this->field_0x8;
  pTVar15 = *(TManagedArray<int> **)(lVar25 + 0xd8);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (local_c0,*(TManagedArray<UE::Math::TIntVector3<int>_> **)(lVar27 + 0x130),pTVar15,
             pTVar13,iVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  iVar19 = FConstClothCollection::GetElementsOffset
                     (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 200),0,
                      *(int *)&this->field_0x18);
  fVar17 = __real_3f800000;
  fVar4 = __real_322bcc77;
  local_130 = (longlong)iVar3;
  local_158 = 0;
  if (0 < iVar3) {
    lVar25 = 0;
    uVar23 = 2;
    do {
      uVar24 = local_158;
      uVar22 = 0;
      if ((int)(uVar23 - 2) < param_3->ArrayNum) {
        uVar22 = ~(uVar23 - 2) >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar3 = *(int *)((param_3->AllocatorInstance).Data + lVar25);
      uVar22 = 0;
      if ((int)(uVar23 - 1) < param_3->ArrayNum) {
        uVar22 = ~(uVar23 - 1) >> 0x1f;
      }
      local_138 = iVar3;
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar5 = *(int *)((param_3->AllocatorInstance).Data + lVar25 + 4);
      uVar22 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar25 + 8);
      uVar26 = iVar5 + local_16c;
      uVar22 = local_16c + iVar3;
      uVar2 = iVar6 + local_16c;
      local_140 = (TVector<float> *)CONCAT44(local_140._4_4_,iVar3 + iVar19);
      uVar20 = 0;
      if ((int)uVar24 < local_d0.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      local_134 = uVar22;
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *(undefined4 *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25) = local_140._0_4_;
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25 + 4) = iVar5 + iVar19;
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25 + 8) = iVar6 + iVar19;
      uVar20 = 0;
      if ((int)uVar24 < local_c0[0].ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar3 = local_150.ArrayNum;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25) = uVar22;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25 + 4) = uVar26;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25 + 8) = uVar2;
      uVar24 = 0;
      if ((int)uVar22 < local_150.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pTVar21 = local_150.DataPtr;
      lVar27 = (longlong)(int)uVar22;
      local_140 = local_150.DataPtr + lVar27;
      uVar24 = 0;
      if ((int)uVar26 < iVar3) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      local_e8 = lVar27;
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_f0 = pTVar21 + (int)uVar26;
      uVar24 = 0;
      if ((int)uVar2 < iVar3) {
        uVar24 = ~uVar2 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar30 = (local_140->field0_0x0)._s_0.X;
      fVar34 = (local_140->field0_0x0)._s_0.Y;
      fVar33 = pTVar21[(int)uVar2].field0_0x0._s_0.X - fVar30;
      fVar28 = (local_140->field0_0x0)._s_0.Z;
      fVar31 = pTVar21[(int)uVar2].field0_0x0._s_0.Y - fVar34;
      fVar29 = pTVar21[(int)uVar2].field0_0x0._s_0.Z - fVar28;
      fVar34 = (local_f0->field0_0x0)._s_0.Y - fVar34;
      fVar30 = (local_f0->field0_0x0)._s_0.X - fVar30;
      fVar28 = (local_f0->field0_0x0)._s_0.Z - fVar28;
      fVar35 = fVar30 * fVar29 - fVar28 * fVar33;
      fVar28 = fVar28 * fVar31 - fVar34 * fVar29;
      local_120 = fVar34 * fVar33 - fVar30 * fVar31;
      fVar30 = fVar35 * fVar35 + fVar28 * fVar28 + local_120 * local_120;
      if (fVar30 == fVar17) {
        fVar30 = fVar35;
        fVar34 = fVar28;
        uVar32 = local_120;
        local_118 = CONCAT44(fVar35,fVar28);
      }
      else if (fVar4 <= fVar30) {
        fVar29 = fVar17 / SQRT(fVar30);
        fVar30 = fVar35 * fVar29;
        fVar34 = fVar28 * fVar29;
        uVar32 = local_120 * fVar29;
      }
      else {
        fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_118 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar8 = local_118;
        local_118._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar34 = (float)local_118;
        uVar32 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_118 = uVar8;
      }
      _local_128 = CONCAT44(fVar35,fVar28);
      piVar1 = &param_5->ArrayNum;
      if ((local_138 < 0) || (*piVar1 <= local_138)) {
        uVar24 = 0;
        if ((int)local_134 < local_168.ArrayNum) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[lVar27].field0_0x0._s_0.Y;
        local_168.DataPtr[lVar27].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[lVar27].field0_0x0._s_0.X;
        fVar29 = local_168.DataPtr[lVar27].field0_0x0._s_0.Z;
        local_168.DataPtr[lVar27].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[lVar27].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      if ((iVar5 < 0) || (*piVar1 <= iVar5)) {
        uVar24 = 0;
        if ((int)uVar26 < local_168.ArrayNum) {
          uVar24 = ~uVar26 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Y;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[(int)uVar26].field0_0x0._s_0.X;
        fVar29 = local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Z;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      if ((iVar6 < 0) || (*piVar1 <= iVar6)) {
        uVar24 = 0;
        if ((int)uVar2 < local_168.ArrayNum) {
          uVar24 = ~uVar2 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Y;
        fVar29 = local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Z;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[(int)uVar2].field0_0x0._s_0.X;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      uVar23 = uVar23 + 3;
      local_158 = local_158 + 1;
      lVar25 = lVar25 + 0xc;
      local_130 = local_130 + -1;
    } while (local_130 != 0);
    local_130 = 0;
  }
  iVar3 = local_154;
  iVar19 = 0;
  if (0 < local_154) {
    do {
      uVar24 = local_16c + iVar19;
      uVar23 = 0;
      if ((int)uVar24 < local_168.ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar30 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.X;
      fVar34 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Y;
      fVar28 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
      fVar29 = fVar34 * fVar34 + fVar30 * fVar30 + fVar28 * fVar28;
      if (fVar29 == fVar17) {
        fVar30 = (float)*(undefined8 *)&local_168.DataPtr[(int)uVar24].field0_0x0;
        fVar34 = (float)((ulonglong)*(undefined8 *)&local_168.DataPtr[(int)uVar24].field0_0x0 >>
                        0x20);
        uVar32 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
      }
      else if (fVar4 <= fVar29) {
        fVar29 = fVar17 / SQRT(fVar29);
        fVar30 = fVar30 * fVar29;
        fVar34 = fVar34 * fVar29;
        uVar32 = fVar28 * fVar29;
      }
      else {
        fVar30 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
        fVar34 = (float)((ulonglong)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_ >> 0x20);
        uVar32 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
      }
      uVar24 = local_16c + iVar19;
      uVar23 = 0;
      if ((int)uVar24 < local_168.ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar19 = iVar19 + 1;
      *(ulonglong *)&local_168.DataPtr[(int)uVar24].field0_0x0 = CONCAT44(fVar34,fVar30);
      local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z = (float)uVar32;
    } while (iVar19 < iVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
  return;
}

// Initialize<unsigned_int> @ 14db331c0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::Initialize<unsigned_int>
          (FCollectionClothSimPatternFacade *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  TVector2<float>_u_0 TVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TManagedArray<int> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TManagedArray<int> *pTVar15;
  code *pcVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  TVector<float> *pTVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStackY_1a0 [24];
  int local_170;
  int local_16c;
  TArrayView<UE::Math::TVector<float>,int> local_168;
  uint local_158;
  int local_154;
  TArrayView<UE::Math::TVector<float>,int> local_150;
  TVector<float> *local_140;
  int local_138;
  uint local_134;
  longlong local_130;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_118;
  undefined **local_108 [2];
  TReferenceControllerBase<1> *local_f8;
  TVector<float> *local_f0;
  longlong local_e8;
  TArrayView<UE::Math::TVector2<float>,int> local_e0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_d0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_c0 [8];
  
  Reset(this);
  SetFabricIndex(this,param_4);
  iVar3 = param_1->ArrayNum;
  local_154 = iVar3;
  if ((iVar3 != param_2->ArrayNum) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSimVertices == Positions3D.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0x84,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar8 = *(undefined8 *)&this->field_0x8;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108[1] = (undefined **)uVar8;
  local_f8 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_108[0] = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  AppendSimVertices(this,(int)auStackY_1a0 + 0x30);
  if ((local_170 != 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartVertexIndex[0] == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0x88,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  GetSimPosition2D(this,&local_e0);
  FCollectionClothFacade::GetSimPosition3D((FCollectionClothFacade *)local_108,&local_150);
  FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)local_108,&local_168);
  uVar23 = 0;
  if (0 < iVar3) {
    lVar27 = 0;
    lVar25 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar24 = 0;
      if ((int)uVar23 < local_e0.ArrayNum) {
        uVar24 = uVar22;
      }
      TVar9 = *(TVector2<float>_u_0 *)((param_1->AllocatorInstance).Data + lVar27 * 8);
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_e0.DataPtr[lVar27].field0_0x0 = TVar9;
      uVar24 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar10 = (param_2->AllocatorInstance).Data;
      uVar22 = local_16c + uVar23;
      uVar8 = *(undefined8 *)(pFVar10 + lVar25);
      fVar4 = *(float *)(pFVar10 + lVar25 + 8);
      uVar24 = 0;
      if ((int)uVar22 < local_150.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *(undefined8 *)&local_150.DataPtr[(int)uVar22].field0_0x0 = uVar8;
      local_150.DataPtr[(int)uVar22].field0_0x0._s_0.Z = fVar4;
      if (((int)uVar23 < 0) || (param_5->ArrayNum <= (int)uVar23)) {
        pTVar21 = &UE::Math::TVector<float>::ZeroVector;
      }
      else {
        if (((int)uVar23 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar21 = (TVector<float> *)
                  ((param_5->AllocatorInstance).Data + (longlong)(int)uVar23 * 0xc);
      }
      uVar8 = *(undefined8 *)pTVar21;
      uVar22 = local_16c + uVar23;
      fVar4 = *(float *)((longlong)pTVar21 + 8);
      uVar24 = 0;
      if ((int)uVar22 < local_168.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar23 = uVar23 + 1;
      lVar27 = lVar27 + 1;
      lVar25 = lVar25 + 0xc;
      *(undefined8 *)&local_168.DataPtr[(int)uVar22].field0_0x0 = uVar8;
      local_168.DataPtr[(int)uVar22].field0_0x0._s_0.Z = fVar4;
    } while (lVar27 < local_154);
  }
  iVar3 = param_3->ArrayNum;
  if ((param_3->ArrayNum !=
       (iVar3 / 3 + (iVar3 >> 0x1f) +
       (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Indices.Num() % 3 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0xd,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar3 = param_3->ArrayNum / 3;
  SetNumSimFaces(this,iVar3);
  GetSimIndices2D(this,&local_d0);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar19 = *(int *)&this->field_0x18;
  lVar25 = *(longlong *)&this->field_0x8;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar12 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar13 = *(TManagedArray<int> **)(lVar25 + 0xe0);
  lVar25 = *(longlong *)&this->field_0x8;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar27 = *(longlong *)&this->field_0x8;
  pTVar15 = *(TManagedArray<int> **)(lVar25 + 0xd8);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (local_c0,*(TManagedArray<UE::Math::TIntVector3<int>_> **)(lVar27 + 0x130),pTVar15,
             pTVar13,iVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  iVar19 = FConstClothCollection::GetElementsOffset
                     (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 200),0,
                      *(int *)&this->field_0x18);
  fVar17 = __real_3f800000;
  fVar4 = __real_322bcc77;
  local_130 = (longlong)iVar3;
  local_158 = 0;
  if (0 < iVar3) {
    lVar25 = 0;
    uVar23 = 2;
    do {
      uVar24 = local_158;
      uVar22 = 0;
      if ((int)(uVar23 - 2) < param_3->ArrayNum) {
        uVar22 = ~(uVar23 - 2) >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar3 = *(int *)((param_3->AllocatorInstance).Data + lVar25);
      uVar22 = 0;
      if ((int)(uVar23 - 1) < param_3->ArrayNum) {
        uVar22 = ~(uVar23 - 1) >> 0x1f;
      }
      local_138 = iVar3;
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar5 = *(int *)((param_3->AllocatorInstance).Data + lVar25 + 4);
      uVar22 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar25 + 8);
      uVar26 = iVar5 + local_16c;
      uVar22 = local_16c + iVar3;
      uVar2 = iVar6 + local_16c;
      local_140 = (TVector<float> *)CONCAT44(local_140._4_4_,iVar3 + iVar19);
      uVar20 = 0;
      if ((int)uVar24 < local_d0.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      local_134 = uVar22;
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *(undefined4 *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25) = local_140._0_4_;
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25 + 4) = iVar5 + iVar19;
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25 + 8) = iVar6 + iVar19;
      uVar20 = 0;
      if ((int)uVar24 < local_c0[0].ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar3 = local_150.ArrayNum;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25) = uVar22;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25 + 4) = uVar26;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25 + 8) = uVar2;
      uVar24 = 0;
      if ((int)uVar22 < local_150.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pTVar21 = local_150.DataPtr;
      lVar27 = (longlong)(int)uVar22;
      local_140 = local_150.DataPtr + lVar27;
      uVar24 = 0;
      if ((int)uVar26 < iVar3) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      local_e8 = lVar27;
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_f0 = pTVar21 + (int)uVar26;
      uVar24 = 0;
      if ((int)uVar2 < iVar3) {
        uVar24 = ~uVar2 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar30 = (local_140->field0_0x0)._s_0.X;
      fVar34 = (local_140->field0_0x0)._s_0.Y;
      fVar33 = pTVar21[(int)uVar2].field0_0x0._s_0.X - fVar30;
      fVar28 = (local_140->field0_0x0)._s_0.Z;
      fVar31 = pTVar21[(int)uVar2].field0_0x0._s_0.Y - fVar34;
      fVar29 = pTVar21[(int)uVar2].field0_0x0._s_0.Z - fVar28;
      fVar34 = (local_f0->field0_0x0)._s_0.Y - fVar34;
      fVar30 = (local_f0->field0_0x0)._s_0.X - fVar30;
      fVar28 = (local_f0->field0_0x0)._s_0.Z - fVar28;
      fVar35 = fVar30 * fVar29 - fVar28 * fVar33;
      fVar28 = fVar28 * fVar31 - fVar34 * fVar29;
      local_120 = fVar34 * fVar33 - fVar30 * fVar31;
      fVar30 = fVar35 * fVar35 + fVar28 * fVar28 + local_120 * local_120;
      if (fVar30 == fVar17) {
        fVar30 = fVar35;
        fVar34 = fVar28;
        uVar32 = local_120;
        local_118 = CONCAT44(fVar35,fVar28);
      }
      else if (fVar4 <= fVar30) {
        fVar29 = fVar17 / SQRT(fVar30);
        fVar30 = fVar35 * fVar29;
        fVar34 = fVar28 * fVar29;
        uVar32 = local_120 * fVar29;
      }
      else {
        fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_118 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar8 = local_118;
        local_118._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar34 = (float)local_118;
        uVar32 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_118 = uVar8;
      }
      _local_128 = CONCAT44(fVar35,fVar28);
      piVar1 = &param_5->ArrayNum;
      if ((local_138 < 0) || (*piVar1 <= local_138)) {
        uVar24 = 0;
        if ((int)local_134 < local_168.ArrayNum) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[lVar27].field0_0x0._s_0.Y;
        local_168.DataPtr[lVar27].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[lVar27].field0_0x0._s_0.X;
        fVar29 = local_168.DataPtr[lVar27].field0_0x0._s_0.Z;
        local_168.DataPtr[lVar27].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[lVar27].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      if ((iVar5 < 0) || (*piVar1 <= iVar5)) {
        uVar24 = 0;
        if ((int)uVar26 < local_168.ArrayNum) {
          uVar24 = ~uVar26 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Y;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[(int)uVar26].field0_0x0._s_0.X;
        fVar29 = local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Z;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      if ((iVar6 < 0) || (*piVar1 <= iVar6)) {
        uVar24 = 0;
        if ((int)uVar2 < local_168.ArrayNum) {
          uVar24 = ~uVar2 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Y;
        fVar29 = local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Z;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[(int)uVar2].field0_0x0._s_0.X;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      uVar23 = uVar23 + 3;
      local_158 = local_158 + 1;
      lVar25 = lVar25 + 0xc;
      local_130 = local_130 + -1;
    } while (local_130 != 0);
    local_130 = 0;
  }
  iVar3 = local_154;
  iVar19 = 0;
  if (0 < local_154) {
    do {
      uVar24 = local_16c + iVar19;
      uVar23 = 0;
      if ((int)uVar24 < local_168.ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar30 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.X;
      fVar34 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Y;
      fVar28 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
      fVar29 = fVar34 * fVar34 + fVar30 * fVar30 + fVar28 * fVar28;
      if (fVar29 == fVar17) {
        fVar30 = (float)*(undefined8 *)&local_168.DataPtr[(int)uVar24].field0_0x0;
        fVar34 = (float)((ulonglong)*(undefined8 *)&local_168.DataPtr[(int)uVar24].field0_0x0 >>
                        0x20);
        uVar32 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
      }
      else if (fVar4 <= fVar29) {
        fVar29 = fVar17 / SQRT(fVar29);
        fVar30 = fVar30 * fVar29;
        fVar34 = fVar34 * fVar29;
        uVar32 = fVar28 * fVar29;
      }
      else {
        fVar30 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
        fVar34 = (float)((ulonglong)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_ >> 0x20);
        uVar32 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
      }
      uVar24 = local_16c + iVar19;
      uVar23 = 0;
      if ((int)uVar24 < local_168.ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar19 = iVar19 + 1;
      *(ulonglong *)&local_168.DataPtr[(int)uVar24].field0_0x0 = CONCAT44(fVar34,fVar30);
      local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z = (float)uVar32;
    } while (iVar19 < iVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f8);
  return;
}

// Initialize<UE::Math::TIntVector3<int>_> @ 14db33f50

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::Initialize<UE::Math::TIntVector3<int>_>
          (FCollectionClothSimPatternFacade *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  TVector2<float>_u_0 TVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TManagedArray<int> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TManagedArray<int> *pTVar15;
  code *pcVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  TVector<float> *pTVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStackY_1a0 [24];
  int local_170;
  int local_16c;
  TArrayView<UE::Math::TVector<float>,int> local_168;
  int local_158;
  TArrayView<UE::Math::TVector<float>,int> local_150;
  int local_140;
  uint local_13c;
  longlong local_138;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined8 local_120;
  undefined **local_110 [2];
  TReferenceControllerBase<1> *local_100;
  TVector<float> *local_f8;
  TVector<float> *local_f0;
  longlong local_e8;
  TArrayView<UE::Math::TVector2<float>,int> local_e0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_d0;
  TArrayView<UE::Math::TIntVector3<int>,int> local_c0 [8];
  
  Reset(this);
  SetFabricIndex(this,param_4);
  iVar3 = param_1->ArrayNum;
  local_158 = iVar3;
  if ((iVar3 != param_2->ArrayNum) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSimVertices == Positions3D.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0x84,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar8 = *(undefined8 *)&this->field_0x8;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_110[1] = (undefined **)uVar8;
  local_100 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_110[0] = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  AppendSimVertices(this,(int)auStackY_1a0 + 0x30);
  if ((local_170 != 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartVertexIndex[0] == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                          ,0x88,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  GetSimPosition2D(this,&local_e0);
  FCollectionClothFacade::GetSimPosition3D((FCollectionClothFacade *)local_110,&local_150);
  FCollectionClothFacade::GetSimNormal((FCollectionClothFacade *)local_110,&local_168);
  uVar23 = 0;
  if (0 < iVar3) {
    lVar27 = 0;
    lVar25 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar24 = 0;
      if ((int)uVar23 < local_e0.ArrayNum) {
        uVar24 = uVar22;
      }
      TVar9 = *(TVector2<float>_u_0 *)((param_1->AllocatorInstance).Data + lVar27 * 8);
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_e0.DataPtr[lVar27].field0_0x0 = TVar9;
      uVar24 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar10 = (param_2->AllocatorInstance).Data;
      uVar22 = local_16c + uVar23;
      uVar8 = *(undefined8 *)(pFVar10 + lVar25);
      fVar4 = *(float *)(pFVar10 + lVar25 + 8);
      uVar24 = 0;
      if ((int)uVar22 < local_150.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *(undefined8 *)&local_150.DataPtr[(int)uVar22].field0_0x0 = uVar8;
      local_150.DataPtr[(int)uVar22].field0_0x0._s_0.Z = fVar4;
      if (((int)uVar23 < 0) || (param_5->ArrayNum <= (int)uVar23)) {
        pTVar21 = &UE::Math::TVector<float>::ZeroVector;
      }
      else {
        if (((int)uVar23 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar21 = (TVector<float> *)
                  ((param_5->AllocatorInstance).Data + (longlong)(int)uVar23 * 0xc);
      }
      uVar8 = *(undefined8 *)pTVar21;
      uVar22 = local_16c + uVar23;
      fVar4 = *(float *)((longlong)pTVar21 + 8);
      uVar24 = 0;
      if ((int)uVar22 < local_168.ArrayNum) {
        uVar24 = ~uVar22 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar23 = uVar23 + 1;
      lVar27 = lVar27 + 1;
      lVar25 = lVar25 + 0xc;
      *(undefined8 *)&local_168.DataPtr[(int)uVar22].field0_0x0 = uVar8;
      local_168.DataPtr[(int)uVar22].field0_0x0._s_0.Z = fVar4;
    } while (lVar27 < local_158);
  }
  iVar3 = param_3->ArrayNum;
  SetNumSimFaces(this,iVar3);
  GetSimIndices2D(this,&local_d0);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar19 = *(int *)&this->field_0x18;
  lVar25 = *(longlong *)&this->field_0x8;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar12 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar13 = *(TManagedArray<int> **)(lVar25 + 0xe0);
  lVar25 = *(longlong *)&this->field_0x8;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar27 = *(longlong *)&this->field_0x8;
  pTVar15 = *(TManagedArray<int> **)(lVar25 + 0xd8);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (local_c0,*(TManagedArray<UE::Math::TIntVector3<int>_> **)(lVar27 + 0x130),pTVar15,
             pTVar13,iVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  iVar19 = FConstClothCollection::GetElementsOffset
                     (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 200),0,
                      *(int *)&this->field_0x18);
  fVar17 = __real_3f800000;
  fVar4 = __real_322bcc77;
  uVar23 = 0;
  local_138 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar25 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar3 = *(int *)((param_3->AllocatorInstance).Data + lVar25);
      uVar24 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar24 = uVar22;
      }
      local_140 = iVar3;
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar5 = *(int *)((param_3->AllocatorInstance).Data + lVar25 + 4);
      uVar24 = 0;
      if ((int)uVar23 < param_3->ArrayNum) {
        uVar24 = uVar22;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar6 = *(int *)((param_3->AllocatorInstance).Data + lVar25 + 8);
      uVar26 = iVar5 + local_16c;
      uVar24 = local_16c + iVar3;
      uVar2 = iVar6 + local_16c;
      uVar20 = 0;
      if ((int)uVar23 < local_d0.ArrayNum) {
        uVar20 = uVar22;
      }
      local_13c = uVar24;
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25) = iVar3 + iVar19;
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25 + 4) = iVar5 + iVar19;
      *(int *)((longlong)&(local_d0.DataPtr)->field0_0x0 + lVar25 + 8) = iVar6 + iVar19;
      uVar20 = 0;
      if ((int)uVar23 < local_c0[0].ArrayNum) {
        uVar20 = uVar22;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar3 = local_150.ArrayNum;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25) = uVar24;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25 + 4) = uVar26;
      *(uint *)((longlong)&(local_c0[0].DataPtr)->field0_0x0 + lVar25 + 8) = uVar2;
      uVar22 = 0;
      if ((int)uVar24 < local_150.ArrayNum) {
        uVar22 = ~uVar24 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pTVar21 = local_150.DataPtr;
      lVar27 = (longlong)(int)uVar24;
      local_f8 = local_150.DataPtr + lVar27;
      uVar22 = 0;
      if ((int)uVar26 < iVar3) {
        uVar22 = ~uVar26 >> 0x1f;
      }
      local_e8 = lVar27;
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_f0 = pTVar21 + (int)uVar26;
      uVar22 = 0;
      if ((int)uVar2 < iVar3) {
        uVar22 = ~uVar2 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar30 = (local_f8->field0_0x0)._s_0.X;
      fVar34 = (local_f8->field0_0x0)._s_0.Y;
      fVar33 = pTVar21[(int)uVar2].field0_0x0._s_0.X - fVar30;
      fVar28 = (local_f8->field0_0x0)._s_0.Z;
      fVar31 = pTVar21[(int)uVar2].field0_0x0._s_0.Y - fVar34;
      fVar29 = pTVar21[(int)uVar2].field0_0x0._s_0.Z - fVar28;
      fVar34 = (local_f0->field0_0x0)._s_0.Y - fVar34;
      fVar30 = (local_f0->field0_0x0)._s_0.X - fVar30;
      fVar28 = (local_f0->field0_0x0)._s_0.Z - fVar28;
      fVar35 = fVar30 * fVar29 - fVar28 * fVar33;
      fVar28 = fVar28 * fVar31 - fVar34 * fVar29;
      local_128 = fVar34 * fVar33 - fVar30 * fVar31;
      fVar30 = fVar35 * fVar35 + fVar28 * fVar28 + local_128 * local_128;
      if (fVar30 == fVar17) {
        fVar30 = fVar35;
        fVar34 = fVar28;
        uVar32 = local_128;
        local_120 = CONCAT44(fVar35,fVar28);
      }
      else if (fVar4 <= fVar30) {
        fVar29 = fVar17 / SQRT(fVar30);
        fVar30 = fVar35 * fVar29;
        fVar34 = fVar28 * fVar29;
        uVar32 = local_128 * fVar29;
      }
      else {
        fVar30 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_120 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar8 = local_120;
        local_120._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar34 = (float)local_120;
        uVar32 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_120 = uVar8;
      }
      _local_130 = CONCAT44(fVar35,fVar28);
      piVar1 = &param_5->ArrayNum;
      if ((local_140 < 0) || (*piVar1 <= local_140)) {
        uVar22 = 0;
        if ((int)local_13c < local_168.ArrayNum) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[lVar27].field0_0x0._s_0.Y;
        local_168.DataPtr[lVar27].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[lVar27].field0_0x0._s_0.X;
        fVar29 = local_168.DataPtr[lVar27].field0_0x0._s_0.Z;
        local_168.DataPtr[lVar27].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[lVar27].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      if ((iVar5 < 0) || (*piVar1 <= iVar5)) {
        uVar24 = 0;
        if ((int)uVar26 < local_168.ArrayNum) {
          uVar24 = ~uVar26 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Y;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[(int)uVar26].field0_0x0._s_0.X;
        fVar29 = local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Z;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[(int)uVar26].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      if ((iVar6 < 0) || (*piVar1 <= iVar6)) {
        uVar24 = 0;
        if ((int)uVar2 < local_168.ArrayNum) {
          uVar24 = ~uVar2 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        fVar28 = local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Y;
        fVar29 = local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Z;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.X =
             fVar34 + local_168.DataPtr[(int)uVar2].field0_0x0._s_0.X;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Y = fVar30 + fVar28;
        local_168.DataPtr[(int)uVar2].field0_0x0._s_0.Z = (float)uVar32 + fVar29;
      }
      uVar23 = uVar23 + 1;
      lVar25 = lVar25 + 0xc;
      local_138 = local_138 + -1;
    } while (local_138 != 0);
    local_138 = 0;
  }
  iVar3 = local_158;
  iVar19 = 0;
  if (0 < local_158) {
    do {
      uVar24 = local_16c + iVar19;
      uVar23 = 0;
      if ((int)uVar24 < local_168.ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar30 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.X;
      fVar34 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Y;
      fVar28 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
      fVar29 = fVar34 * fVar34 + fVar30 * fVar30 + fVar28 * fVar28;
      if (fVar29 == fVar17) {
        fVar30 = (float)*(undefined8 *)&local_168.DataPtr[(int)uVar24].field0_0x0;
        fVar34 = (float)((ulonglong)*(undefined8 *)&local_168.DataPtr[(int)uVar24].field0_0x0 >>
                        0x20);
        uVar32 = local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z;
      }
      else if (fVar4 <= fVar29) {
        fVar29 = fVar17 / SQRT(fVar29);
        fVar30 = fVar30 * fVar29;
        fVar34 = fVar34 * fVar29;
        uVar32 = fVar28 * fVar29;
      }
      else {
        fVar30 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
        fVar34 = (float)((ulonglong)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_ >> 0x20);
        uVar32 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
      }
      uVar24 = local_16c + iVar19;
      uVar23 = 0;
      if ((int)uVar24 < local_168.ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar19 = iVar19 + 1;
      *(ulonglong *)&local_168.DataPtr[(int)uVar24].field0_0x0 = CONCAT44(fVar34,fVar30);
      local_168.DataPtr[(int)uVar24].field0_0x0._s_0.Z = (float)uVar32;
    } while (iVar19 < iVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  return;
}

// FCollectionClothSimPatternFacade @ 14db3b3a0

FCollectionClothSimPatternFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::FCollectionClothSimPatternFacade
          (FCollectionClothSimPatternFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = (FConstClothCollection *)param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
            ((FCollectionClothSimPatternConstFacade *)this,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothSimPatternFacade @ 14db3bc00

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::~FCollectionClothSimPatternFacade
          (FCollectionClothSimPatternFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// AppendSimVertices @ 14db40830

TIntVector2<int> __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::AppendSimVertices
          (FCollectionClothSimPatternFacade *this,int param_1)

{
  int *piVar1;
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_01;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  TIntVector2<int> TVar15;
  TArrayView<int,int> *pTVar16;
  undefined4 in_register_00000014;
  TIntVector2<int>_u_0 TVar17;
  uint uVar18;
  ForAnyElementType *pFVar19;
  int iVar20;
  int in_R8D;
  uint uVar21;
  int local_98 [2];
  longlong local_90;
  int *local_88;
  undefined8 uStack_80;
  TArrayView<int,int> local_78;
  TArrayView<int,int> local_68;
  TArrayView<int,int> local_58;
  
  TVar17._s_0.Y = in_register_00000014;
  TVar17._s_0.X = param_1;
  iVar10 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::SimVertices3D);
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  iVar11 = FConstClothCollection::GetNumElements
                     (this_00,this_00->SimVertices2DStart,this_00->SimVertices2DEnd,
                      *(int *)&this->field_0x18);
  *(int *)((longlong)TVar17 + 4) = iVar10;
  *(int *)TVar17 = iVar11;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FClothCollection::SetNumElements
            (this_01,*(int *)((longlong)TVar17 + 4) + in_R8D,&ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SetNumSimVertices2D(this,*(int *)TVar17 + in_R8D);
  iVar10 = FConstClothCollection::GetElementsOffset
                     (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 200),0,
                      *(int *)&this->field_0x18);
  GetSimVertex3DLookup(this,&local_68);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  plVar5 = *(longlong **)(lVar4 + 0x180);
  if (plVar5 == (longlong *)0x0) {
    local_90 = 0;
    iVar11 = 0;
  }
  else {
    iVar11 = (**(code **)(*plVar5 + 0x60))(plVar5);
    local_90 = plVar5[2];
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        TVar15.field0_0x0 = (TIntVector2<int>_u_0)(*pcVar6)();
        return (TIntVector2<int>)TVar15.field0_0x0;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  bVar8 = FConstClothCollection::IsValid(*(FConstClothCollection **)&this->field_0x8,Import);
  if (bVar8) {
    pTVar16 = GetSimImportVertexID(this,&local_58);
  }
  else {
    local_78.DataPtr = (int *)0x0;
    pTVar16 = &local_78;
    local_78.ArrayNum = 0;
  }
  local_88 = pTVar16->DataPtr;
  uStack_80 = *(undefined8 *)&pTVar16->ArrayNum;
  iVar20 = 0;
  if (0 < in_R8D) {
    iVar7 = (int)uStack_80;
    do {
      uVar21 = *(int *)TVar17 + iVar20;
      uVar18 = *(int *)((longlong)TVar17 + 4) + iVar20;
      local_98[0] = uVar21 + iVar10;
      uVar12 = 0;
      if ((int)uVar21 < local_68.ArrayNum) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          TVar15.field0_0x0 = (TIntVector2<int>_u_0)(*pcVar6)();
          return (TIntVector2<int>)TVar15.field0_0x0;
        }
      }
      local_68.DataPtr[(int)uVar21] = uVar18;
      uVar12 = 0;
      if ((int)uVar18 < iVar11) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          TVar15.field0_0x0 = (TIntVector2<int>_u_0)(*pcVar6)();
          return (TIntVector2<int>)TVar15.field0_0x0;
        }
      }
      pFVar19 = (ForAnyElementType *)((longlong)(int)uVar18 * 0x10 + local_90);
      iVar14 = *(int *)((longlong)&pFVar19[1].Data + 4);
      piVar1 = (int *)((longlong)&pFVar19[1].Data + 4);
      *(undefined4 *)&pFVar19[1].Data = 0;
      iVar13 = 1;
      if (iVar14 != 1) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,pFVar19,0,piVar1);
        iVar13 = *piVar1;
      }
      if ((pFVar19->Data <= (FScriptContainerElement *)local_98) &&
         ((FScriptContainerElement *)local_98 < pFVar19->Data + (longlong)iVar13 * 4)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          TVar15.field0_0x0 = (TIntVector2<int>_u_0)(*pcVar6)();
          return (TIntVector2<int>)TVar15.field0_0x0;
        }
      }
      iVar14 = *(int *)&pFVar19[1].Data;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar19,piVar1);
      }
      *(int *)&pFVar19[1].Data = iVar14 + 1;
      *(int *)(pFVar19->Data + (longlong)iVar14 * 4) = local_98[0];
      if (bVar8) {
        uVar12 = 0;
        if ((int)uVar21 < iVar7) {
          uVar12 = ~uVar21 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            TVar15.field0_0x0 = (TIntVector2<int>_u_0)(*pcVar6)();
            return (TIntVector2<int>)TVar15.field0_0x0;
          }
        }
        local_88[(int)uVar21] = -1;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < in_R8D);
  }
  return (TIntVector2<int>)TVar17;
}

// GetClothCollection @ 14db57700

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::GetClothCollection
          (FCollectionClothSimPatternFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *__return_storage_ptr__)

{
  FClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSimImportVertexID @ 14db5edb0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::GetSimImportVertexID
          (FCollectionClothSimPatternFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  int iVar1;
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_01;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  bool bVar10;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  bVar10 = FConstClothCollection::IsValid(this_00,Import);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (!bVar10) {
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    this_01 = *(FClothCollection **)&this->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FClothCollection::DefineSchema(this_01,Import);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xd0);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 200);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,*(TManagedArray<int> **)(lVar8 + 0x148),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSimIndices2D @ 14db5f0e0

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::GetSimIndices2D
          (FCollectionClothSimPatternFacade *this,
          TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xe0);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xd8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TIntVector3<int>_> **)(lVar8 + 0x128),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSimIndices3D @ 14db5f3a0

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::GetSimIndices3D
          (FCollectionClothSimPatternFacade *this,
          TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xe0);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xd8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TIntVector3<int>_> **)(lVar8 + 0x130),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSimPosition2D @ 14db604d0

TArrayView<UE::Math::TVector2<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::GetSimPosition2D
          (FCollectionClothSimPatternFacade *this,
          TArrayView<UE::Math::TVector2<float>,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar14;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)(lVar6 + 0xd0);
  lVar8 = *(longlong *)&this->field_0x8;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)(lVar8 + 200);
  lVar10 = *(longlong *)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lVar10 = *(longlong *)(lVar10 + 0x138);
  if (((lVar8 != 0) && (lVar6 != 0)) && (lVar10 != 0)) {
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar2 = *(int *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar1 * 4);
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db606a0;
    }
    else if (iVar3 != -1) {
      TArrayView<UE::Math::TVector2<float>,int>::
      TArrayView<UE::Math::TVector2<float>,int><UE::Math::TVector2<float>_>
                (__return_storage_ptr__,
                 (TVector2<float> *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar2 * 8),
                 (iVar3 - iVar2) + 1);
      goto LAB_14db606af;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Start == End",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                        ,0x24d,
                        L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar11)();
      return pTVar14;
    }
  }
LAB_14db606a0:
  __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_14db606af:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetSimVertex3DLookup @ 14db60ab0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::GetSimVertex3DLookup
          (FCollectionClothSimPatternFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xd0);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 200);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,*(TManagedArray<int> **)(lVar8 + 0x140),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// Initialize @ 14db64d70

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::Initialize
          (FCollectionClothSimPatternFacade *this,FCollectionClothSimPatternConstFacade *param_1,
          int param_2,int param_3)

{
  TManagedArray<int> *pTVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar12;
  TArrayView<int,int> *pTVar13;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_118;
  TIntVector3<int>_u_0 local_108;
  TIntVector3<int>_u_0 local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<int,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_b8;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_a8;
  TArrayView<int_const_,int> local_98;
  TArrayView<UE::Math::TVector2<float>,int> local_88;
  TArrayView<int,int> local_78;
  TArrayView<UE::Math::TIntVector3<int>,int> local_68;
  TArrayView<UE::Math::TIntVector3<int>,int> local_58;
  TArrayView<int,int> local_48;
  
  Reset(this);
  pTVar1 = ((param_1->ClothCollection).Object)->SimPatternFabric;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    local_e8.DataPtr = (int *)0x0;
    local_e8.ArrayNum = 0;
  }
  else {
    local_e8.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_e8.DataPtr = *(int **)&pTVar1->field_0x10;
    if ((local_e8.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  piVar11 = TArrayView<int_const_,int>::operator[](&local_e8,param_1->PatternIndex);
  SetFabricIndex(this,*piVar11 + param_3);
  pFVar2 = (param_1->ClothCollection).Object;
  iVar8 = FConstClothCollection::GetNumElements
                    (pFVar2,pFVar2->SimVertices2DStart,pFVar2->SimVertices2DEnd,
                     param_1->PatternIndex);
  SetNumSimVertices2D(this,iVar8);
  pFVar2 = (param_1->ClothCollection).Object;
  uVar15 = param_1->PatternIndex;
  pTVar1 = pFVar2->SimVertices2DStart;
  if (((pTVar1 != (TManagedArray<int> *)0x0) &&
      (pTVar3 = pFVar2->SimVertices2DEnd, pTVar3 != (TManagedArray<int> *)0x0)) &&
     (pTVar4 = pFVar2->SimPosition2D, pTVar4 != (TManagedArray<UE::Math::TVector2<float>_> *)0x0)) {
    uVar9 = 0;
    if ((int)uVar15 < *(int *)&pTVar1->field_0x18) {
      uVar9 = ~uVar15 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar15 * 4);
    uVar9 = 0;
    if ((int)uVar15 < *(int *)&pTVar3->field_0x18) {
      uVar9 = ~uVar15 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = *(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar15 * 4);
    if (iVar8 == -1) {
      if (iVar10 == -1) goto LAB_14db64f91;
    }
    else if (iVar10 != -1) {
      iVar10 = (iVar10 - iVar8) + 1;
      local_118 = *(longlong *)&pTVar4->field_0x10 + (longlong)iVar8 * 8;
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_14db64f9c;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_14db64f91:
  local_118 = 0;
  iVar10 = 0;
LAB_14db64f9c:
  pTVar12 = GetSimPosition2D(this,&local_88);
  if ((pTVar12->ArrayNum != iVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("To.Num() == From.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                         ,0x297,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = 0;
  if (0 < pTVar12->ArrayNum) {
    lVar16 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar15 < iVar10) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar5 = *(undefined8 *)(lVar16 + local_118);
      uVar9 = 0;
      if ((int)uVar15 < pTVar12->ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = uVar15 + 1;
      *(undefined8 *)((longlong)&pTVar12->DataPtr->field0_0x0 + lVar16) = uVar5;
      lVar16 = lVar16 + 8;
    } while ((int)uVar15 < pTVar12->ArrayNum);
  }
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (&local_c8,pFVar2->SimVertex3DLookup,pFVar2->SimVertices2DStart,pFVar2->SimVertices2DEnd
             ,param_1->PatternIndex);
  pTVar13 = GetSimVertex3DLookup(this,&local_78);
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>(pTVar13,&local_c8,param_2);
  pFVar2 = (param_1->ClothCollection).Object;
  iVar8 = FConstClothCollection::GetNumElements
                    (pFVar2,pFVar2->SimFacesStart,pFVar2->SimFacesEnd,param_1->PatternIndex);
  SetNumSimFaces(this,iVar8);
  iVar8 = FConstClothCollection::GetElementsOffset
                    (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 200),0,
                     *(int *)&this->field_0x18);
  iVar10 = FConstClothCollection::GetElementsOffset
                     (((param_1->ClothCollection).Object)->SimVertices2DStart,0,
                      param_1->PatternIndex);
  pFVar2 = (param_1->ClothCollection).Object;
  iVar8 = iVar8 - iVar10;
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (&local_b8,pFVar2->SimIndices2D,pFVar2->SimFacesStart,pFVar2->SimFacesEnd,
             param_1->PatternIndex);
  pTVar14 = GetSimIndices2D(this,&local_68);
  local_108._s_0.X = iVar8;
  local_108._s_0.Y = iVar8;
  local_108._s_0.Z = iVar8;
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_>
            (pTVar14,&local_b8,(TIntVector3<int> *)&local_108._s_0);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (&local_a8,pFVar2->SimIndices3D,pFVar2->SimFacesStart,pFVar2->SimFacesEnd,
             param_1->PatternIndex);
  pTVar14 = GetSimIndices3D(this,&local_58);
  local_f8._s_0.X = param_2;
  local_f8._s_0.Y = param_2;
  local_f8._s_0.Z = param_2;
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_>
            (pTVar14,&local_a8,(TIntVector3<int> *)&local_f8._s_0);
  pFVar2 = (param_1->ClothCollection).Object;
  bVar7 = FConstClothCollection::IsValid(pFVar2,Import);
  if (bVar7) {
    FConstClothCollection::GetElements<int>
              (&local_98,pFVar2->SimImportVertexID,pFVar2->SimVertices2DStart,
               pFVar2->SimVertices2DEnd,param_1->PatternIndex);
    pTVar13 = GetSimImportVertexID(this,&local_48);
    FConstClothCollection::CopyArrayViewData<int>(pTVar13,&local_98);
  }
  else {
    bVar7 = FConstClothCollection::IsValid(*(FConstClothCollection **)&this->field_0x8,Import);
    if (bVar7) {
      GetSimImportVertexID(this,&local_d8);
      uVar15 = 0;
      if (0 < local_d8.ArrayNum) {
        lVar16 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar15 < local_d8.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = uVar15 + 1;
          *(undefined4 *)(lVar16 + (longlong)local_d8.DataPtr) = 0xffffffff;
          lVar16 = lVar16 + 4;
        } while ((int)uVar15 < local_d8.ArrayNum);
      }
    }
  }
  return;
}

// RemoveSimFaces @ 14db69350

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::RemoveSimFaces
          (FCollectionClothSimPatternFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TManagedArray<int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  uVar12 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar8 = FConstClothCollection::GetElementsOffset
                    (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0xd8),0,
                     *(int *)&this->field_0x18);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_1->ArrayNum,Default);
  iVar10 = param_1->ArrayNum;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)((param_1->AllocatorInstance).Data + uVar13);
      uVar9 = 0;
      if ((int)uVar11 < local_38.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(int *)(local_38.AllocatorInstance.Data + uVar13) = iVar10 + iVar8;
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 4;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar10 = *(int *)&this->field_0x18;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar5 = *(TManagedArray<int> **)(lVar3 + 0xe0);
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FClothCollection::RemoveElements
            (this_00,&ClothCollectionGroup::SimFaces,&local_38,
             *(TManagedArray<int> **)(lVar3 + 0xd8),pTVar5,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RemoveSimVertices2D @ 14db69cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::RemoveSimVertices2D
          (FCollectionClothSimPatternFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TManagedArray<int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  uVar12 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar8 = FConstClothCollection::GetElementsOffset
                    (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 200),0,
                     *(int *)&this->field_0x18);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_1->ArrayNum,Default);
  iVar10 = param_1->ArrayNum;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)((param_1->AllocatorInstance).Data + uVar13);
      uVar9 = 0;
      if ((int)uVar11 < local_38.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(int *)(local_38.AllocatorInstance.Data + uVar13) = iVar10 + iVar8;
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 4;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar10 = *(int *)&this->field_0x18;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar5 = *(TManagedArray<int> **)(lVar3 + 0xd0);
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FClothCollection::RemoveElements
            (this_00,&ClothCollectionGroup::SimVertices2D,&local_38,
             *(TManagedArray<int> **)(lVar3 + 200),pTVar5,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RemoveSimVertices2D @ 14db69ed0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::RemoveSimVertices2D
          (FCollectionClothSimPatternFacade *this,int param_1)

{
  FConstClothCollection *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  iVar3 = FConstClothCollection::GetNumElements
                    (this_00,this_00->SimVertices2DStart,this_00->SimVertices2DEnd,
                     *(int *)&this->field_0x18);
  if (param_1 < iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSimVertices >= NumSimVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                       ,0x126,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetNumSimVertices2D(this,iVar3 - param_1);
  return;
}

// Reset @ 14db6b710

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::Reset
          (FCollectionClothSimPatternFacade *this)

{
  FConstClothCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  SetNumSimFaces(this,0);
  pFVar1 = *(FConstClothCollection **)&this->field_0x8;
  iVar4 = FConstClothCollection::GetNumElements
                    (pFVar1,pFVar1->SimVertices2DStart,pFVar1->SimVertices2DEnd,
                     *(int *)&this->field_0x18);
  pFVar1 = *(FConstClothCollection **)&this->field_0x8;
  iVar5 = FConstClothCollection::GetNumElements
                    (pFVar1,pFVar1->SimVertices2DStart,pFVar1->SimVertices2DEnd,
                     *(int *)&this->field_0x18);
  if (iVar4 < iVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSimVertices >= NumSimVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                       ,0x126,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SetNumSimVertices2D(this,iVar5 - iVar4);
  SetDefaults(this);
  return;
}

// SetDefaults @ 14db6d410

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::SetDefaults
          (FCollectionClothSimPatternFacade *this)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar7 = (longlong)(int)uVar1;
  lVar2 = *(longlong *)&this->field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 200);
  uVar8 = ~uVar1 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xd0);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xd8);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xe0);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xe8);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetFabricIndex @ 14db6d6c0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::SetFabricIndex
          (FCollectionClothSimPatternFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  TArrayView<int,int> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0xe8);
  if (plVar4 == (longlong *)0x0) {
    local_18.DataPtr = (int *)0x0;
    local_18.ArrayNum = 0;
  }
  else {
    local_18.ArrayNum = (**(code **)(*plVar4 + 0x60))(plVar4);
    local_18.DataPtr = (int *)plVar4[2];
    if (local_18.ArrayNum < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  piVar7 = TArrayView<int,int>::operator[](&local_18,*(int *)&this->field_0x18);
  *piVar7 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetNumSimFaces @ 14db6ed90

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::SetNumSimFaces
          (FCollectionClothSimPatternFacade *this,int param_1)

{
  int iVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TManagedArray<int> *pTVar7;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  pTVar7 = *(TManagedArray<int> **)(lVar4 + 0xe0);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FClothCollection::SetNumElements
            (this_00,param_1,&ClothCollectionGroup::SimFaces,*(TManagedArray<int> **)(lVar6 + 0xd8),
             pTVar7,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetNumSimVertices2D @ 14db6f5f0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::SetNumSimVertices2D
          (FCollectionClothSimPatternFacade *this,int param_1)

{
  int iVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TManagedArray<int> *pTVar7;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  pTVar7 = *(TManagedArray<int> **)(lVar4 + 0xd0);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FClothCollection::SetNumElements
            (this_00,param_1,&ClothCollectionGroup::SimVertices2D,
             *(TManagedArray<int> **)(lVar6 + 200),pTVar7,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

