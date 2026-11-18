// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 16

// operator() @ 144395d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBoneWeights * __thiscall
`FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh'::__l2::<lambda_1>::operator()
          (void *this,FBoneWeights *__return_storage_ptr__,
          TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBoneWeights *pFVar6;
  TArrayView<int_const_,int> *pTVar7;
  uint *puVar8;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar9;
  uint *puVar10;
  longlong lVar11;
  undefined2 uVar12;
  longlong *plVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined2 uVar17;
  undefined1 auStack_198 [32];
  uchar *local_178;
  ForElementType<UE::AnimationCore::FBoneWeight> local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_148;
  uchar local_144 [4];
  undefined4 local_140;
  FBoneWeightsSettings local_13c;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_128 [2];
  ForElementType<UE::AnimationCore::FBoneWeight> local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_108;
  TArrayView<int_const_,int> local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  TArrayView<int_const_,int> local_b8;
  TArrayView<int_const_,int> local_a8;
  TArrayView<int_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  puVar15 = (uint *)0x0;
  local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_40 = 0;
  local_3c = 0xc;
  if (*(longlong *)this == 0) {
    if ((param_1 == (TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InWeights",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x88,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    pTVar7 = TAttributeArrayContainer<int>::Get
                       (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_b8,
                        *(int *)((undefined8 *)param_1->_padding_ + 1));
    if ((pTVar7->ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                           ,0x89,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    pTVar7 = TAttributeArrayContainer<int>::Get
                       (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_a8,
                        *(int *)((undefined8 *)param_1->_padding_ + 1));
    iVar1 = pTVar7->ArrayNum;
    if ((param_1 == (TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InWeights",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x88,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    if (((iVar1 < 0) ||
        (pTVar7 = TAttributeArrayContainer<int>::Get
                            (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_98,
                             *(int *)((undefined8 *)param_1->_padding_ + 1)),
        pTVar7->ArrayNum < iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                           ,0x89,L""), puVar15 = (uint *)0x0, bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    while (iVar14 = (int)puVar15, iVar14 != iVar1) {
      pTVar7 = TAttributeArrayContainer<int>::Get
                         (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_88,
                          *(int *)((undefined8 *)param_1->_padding_ + 1));
      uVar17 = (undefined2)pTVar7->DataPtr[iVar14];
      uVar12 = (undefined2)((uint)pTVar7->DataPtr[iVar14] >> 0x10);
      local_140._2_1_ = (char)uVar17;
      local_140._3_1_ = (char)((ushort)uVar17 >> 8);
      local_140._0_1_ = (char)uVar12;
      local_140._1_1_ = (char)((ushort)uVar12 >> 8);
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar9 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_140) {
        FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar9 = local_78.SecondaryData;
        }
        if (&local_140 < (undefined4 *)((longlong)FVar9 + (longlong)local_3c * 4)) {
          local_160 = (longlong)local_40;
          local_158 = 4;
          local_178 = (uchar *)&local_140;
          local_170 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            local_170 = local_78.SecondaryData;
          }
          local_168 = (longlong)local_3c;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FBoneWeights *)(*pcVar3)();
            return pFVar6;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                             (0x204,&local_78,&local_3c);
      }
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar9 = local_78.SecondaryData;
      }
      lVar11 = (longlong)local_40;
      local_40 = local_40 + 1;
      *(undefined4 *)((longlong)FVar9 + lVar11 * 4) = local_140;
      puVar15 = (uint *)(ulonglong)(iVar14 + 1);
    }
  }
  else {
    if ((param_1 == (TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InWeights",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x88,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    pTVar7 = TAttributeArrayContainer<int>::Get
                       (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_f8,
                        *(int *)((undefined8 *)param_1->_padding_ + 1));
    if ((pTVar7->ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                           ,0x89,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    pTVar7 = TAttributeArrayContainer<int>::Get
                       (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_e8,
                        *(int *)((undefined8 *)param_1->_padding_ + 1));
    iVar1 = pTVar7->ArrayNum;
    if ((param_1 == (TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> *)0x0)
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("InWeights",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x88,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    if (((iVar1 < 0) ||
        (pTVar7 = TAttributeArrayContainer<int>::Get
                            (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_d8,
                             *(int *)((undefined8 *)param_1->_padding_ + 1)), puVar10 = puVar15,
        pTVar7->ArrayNum < iVar1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                           ,0x89,L""), puVar10 = (uint *)0x0, bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBoneWeights *)(*pcVar3)();
      return pFVar6;
    }
    while (iVar14 = (int)puVar10, iVar14 != iVar1) {
      pTVar7 = TAttributeArrayContainer<int>::Get
                         (*(TAttributeArrayContainer<int> **)param_1->_padding_,&local_c8,
                          *(int *)((undefined8 *)param_1->_padding_ + 1));
      plVar2 = *(longlong **)this;
      uVar16 = (uint)pTVar7->DataPtr[iVar14] >> 0x10;
      if ((int)plVar2[1] == *(int *)((longlong)plVar2 + 0x34)) {
LAB_14439604a:
        puVar10 = (uint *)(ulonglong)(iVar14 + 1);
      }
      else {
        plVar13 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar2[8];
        }
        uVar5 = *(uint *)((longlong)plVar13 + (ulonglong)((int)plVar2[9] - 1U & uVar16) * 4);
        if (uVar5 == 0xffffffff) goto LAB_14439604a;
        do {
          puVar10 = (uint *)((longlong)(int)uVar5 * 0x10 + *plVar2);
          if (*puVar10 == uVar16) {
            puVar8 = puVar10 + 1;
            if (puVar10 == (uint *)0x0) {
              puVar8 = puVar15;
            }
            if (puVar8 != (uint *)0x0) {
              uVar17 = (undefined2)pTVar7->DataPtr[iVar14];
              local_148._2_1_ = (char)uVar17;
              local_148._3_1_ = (char)((ushort)uVar17 >> 8);
              local_148._0_1_ = (char)(short)*puVar8;
              local_148._1_1_ = (char)((ushort)(short)*puVar8 >> 8);
              FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
              if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar9 = local_78.SecondaryData;
              }
              if ((ulonglong)FVar9 <= &local_148) {
                FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
                if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FVar9 = local_78.SecondaryData;
                }
                if (&local_148 < (undefined4 *)((longlong)FVar9 + (longlong)local_3c * 4)) {
                  local_160 = (longlong)local_40;
                  local_158 = 4;
                  local_178 = (uchar *)&local_148;
                  local_170 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
                  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0)
                  {
                    local_170 = local_78.SecondaryData;
                  }
                  local_168 = (longlong)local_3c;
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar4) {
                    pcVar3 = (code *)swi(3);
                    pFVar6 = (FBoneWeights *)(*pcVar3)();
                    return pFVar6;
                  }
                }
              }
              if (local_40 == local_3c) {
                local_40 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                                     (0x204,&local_78,&local_3c);
              }
              lVar11 = (longlong)local_40;
              FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
              if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar9 = local_78.SecondaryData;
              }
              local_40 = local_40 + 1;
              *(undefined4 *)((longlong)FVar9 + lVar11 * 4) = local_148;
            }
            goto LAB_14439604a;
          }
          uVar5 = puVar10[2];
        } while (uVar5 != 0xffffffff);
        puVar10 = (uint *)(ulonglong)(iVar14 + 1);
      }
    }
    if (local_40 == 0) {
      local_144[0] = '\0';
      local_144[1] = '\0';
      local_144[2] = 0xff;
      local_144[3] = 0xff;
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar9 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar9 <= local_144) {
        FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
        if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar9 = local_78.SecondaryData;
        }
        if (local_144 < (uchar *)((longlong)FVar9 + (longlong)local_3c * 4)) {
          local_158 = 4;
          local_160 = 0;
          local_170 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            local_170 = local_78.SecondaryData;
          }
          local_178 = local_144;
          local_168 = (longlong)local_3c;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FBoneWeights *)(*pcVar3)();
            return pFVar6;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                             (0x204,&local_78,&local_3c);
      }
      lVar11 = (longlong)local_40;
      FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FVar9 = local_78.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(uchar (*) [4])((longlong)FVar9 + lVar11 * 4) = local_144;
    }
  }
  iVar1 = local_40;
  local_118 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    local_118 = local_78.SecondaryData;
  }
  local_13c.bHasDefaultBoneIndex = false;
  local_13c.bBlendZeroInfluence = true;
  local_13c._14_2_ = 0;
  local_13c.NormalizeType = Always;
  local_13c.MaxWeightCount = 0xc;
  local_13c.WeightThreshold = 1;
  local_13c.DefaultBoneIndex = 0;
  if ((local_40 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FBoneWeights *)(*pcVar3)();
    return pFVar6;
  }
  (__return_storage_ptr__->BoneWeights).AllocatorInstance.SecondaryData =
       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  iStack_110 = iVar1;
  local_108._12_4_ = uStack_10c;
  local_108.ArrayNum = iVar1;
  local_108.DataPtr = (FBoneWeight *)local_118;
  (__return_storage_ptr__->BoneWeights).ArrayNum = 0;
  (__return_storage_ptr__->BoneWeights).ArrayMax = 0xc;
  local_128[0].Container = &__return_storage_ptr__->BoneWeights;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            (local_128,&local_108,&local_13c);
  if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator() @ 144397190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBoneWeights * __thiscall
`FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh'::__l2::<lambda_2>::operator()
          (void *this,FBoneWeights *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FMeshDescriptionTriangleMeshAdapter *this_00;
  void *pvVar6;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FMeshElementContainer *pFVar15;
  FBoneWeights *pFVar16;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar17;
  TVector<float> *pTVar18;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  longlong lVar19;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_3f8 [32];
  FBoneWeightsSettings local_3b8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_3a8;
  FIndex3i_u_0 local_3a0;
  FBoneWeightsSettings local_390;
  FBoneWeightsSettings local_380;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_370;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_368;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_360;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_358;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_350;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_348;
  TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> local_340;
  TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> local_328;
  TVertexBoneWeightsBase<Internal::FAttributesRefAdapterConst,int_const_> local_310;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 TStack_2e0;
  TVector<double>_u_0 local_2c8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_2a8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_268;
  TVector<double>_u_0 local_228;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_198;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_158;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  this_00 = *(FMeshDescriptionTriangleMeshAdapter **)this;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  if (-1 < param_1) {
    pFVar15 = FMeshElementChannels::Get(this_00->Mesh->TriangleElements,0);
    if (param_1 < (pFVar15->BitArray).NumBits - pFVar15->NumHoles) goto LAB_144397254;
  }
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("Mesh.IsTriangle(TriIdx)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                      ,0x1e,L"");
  if (bVar14) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FBoneWeights *)(*pcVar8)();
    return pFVar16;
  }
LAB_144397254:
  FMeshDescriptionTriangleMeshAdapter::GetTriVertices
            (this_00,param_1,(TVector<double> *)&local_2f8._s_0,(TVector<double> *)&TStack_2e0._s_0,
             (TVector<double> *)&local_2c8._s_0);
  local_210 = local_2f8._s_0.X;
  dStack_208 = local_2f8._s_0.Y;
  local_1f0 = TStack_2e0._s_0.Y;
  dStack_1e8 = TStack_2e0._s_0.Z;
  local_200 = local_2f8._s_0.Z;
  dStack_1f8 = TStack_2e0._s_0.X;
  local_1d0 = local_2c8._s_0.Z;
  local_1e0 = local_2c8._s_0.X;
  dStack_1d8 = local_2c8._s_0.Y;
  local_228._s_0.X = dVar4;
  local_228._s_0.Y = dVar5;
  local_228._s_0.Z = dVar3;
  UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
            ((TDistPoint3Triangle3<double> *)&local_228._s_0);
  FMeshDescriptionTriangleMeshAdapter::GetTriangle
            (*(FMeshDescriptionTriangleMeshAdapter **)this,(FIndex3i *)&local_3a0._s_0,param_1);
  lVar19 = *(longlong *)this;
  pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar19 + 8),0);
  pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                      (pTVar17,local_3a0._s_0.C);
  dVar20 = (double)(pTVar18->field0_0x0)._s_0.X * *(double *)(lVar19 + 0x30);
  dVar22 = (double)(pTVar18->field0_0x0)._s_0.Y * *(double *)(lVar19 + 0x38);
  dVar9 = (double)(pTVar18->field0_0x0)._s_0.Z * *(double *)(lVar19 + 0x40);
  lVar19 = *(longlong *)this;
  pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar19 + 8),0);
  pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                      (pTVar17,local_3a0._s_0.B);
  fVar24 = (pTVar18->field0_0x0)._s_0.X;
  fVar23 = (pTVar18->field0_0x0)._s_0.Y;
  fVar2 = (pTVar18->field0_0x0)._s_0.Z;
  dVar3 = *(double *)(lVar19 + 0x30);
  dVar4 = *(double *)(lVar19 + 0x38);
  dVar5 = *(double *)(lVar19 + 0x40);
  lVar19 = *(longlong *)this;
  pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)(lVar19 + 8),0);
  pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                      (pTVar17,local_3a0._s_0.A);
  dVar12 = (double)fVar24 * dVar3 - dVar20;
  dVar10 = (double)fVar23 * dVar4 - dVar22;
  dVar11 = (double)fVar2 * dVar5 - dVar9;
  dVar5 = (double)(pTVar18->field0_0x0)._s_0.X * *(double *)(lVar19 + 0x30) - dVar20;
  dVar13 = (double)(pTVar18->field0_0x0)._s_0.Y * *(double *)(lVar19 + 0x38) - dVar22;
  dVar21 = (double)(pTVar18->field0_0x0)._s_0.Z * *(double *)(lVar19 + 0x40) - dVar9;
  pvVar6 = *(void **)((longlong)this + 0x10);
  lVar19 = **(longlong **)((longlong)this + 8);
  dVar4 = dVar13 * dVar13 + dVar5 * dVar5 + dVar21 * dVar21;
  dVar3 = dVar13 * dVar10 + dVar5 * dVar12 + dVar21 * dVar11;
  dVar13 = dVar13 * (local_1a8 - dVar22) + dVar5 * (local_1b0 - dVar20) +
           dVar21 * (local_1a0 - dVar9);
  dVar5 = (local_1a8 - dVar22) * dVar10 + (local_1b0 - dVar20) * dVar12 +
          (local_1a0 - dVar9) * dVar11;
  dVar22 = dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
  dVar20 = __real_3ff0000000000000 / (dVar22 * dVar4 - dVar3 * dVar3);
  dVar4 = (dVar5 * dVar4 - dVar13 * dVar3) * dVar20;
  dVar20 = (dVar13 * dVar22 - dVar5 * dVar3) * dVar20;
  fVar24 = (float)((__real_3ff0000000000000 - dVar20) - dVar4);
  if (*(int *)(lVar19 + 0x38) < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FBoneWeights *)(*pcVar8)();
      return pFVar16;
    }
  }
  local_340.Container.Index = local_3a0._s_0.A;
  local_340.Container.Array = (TAttributeArrayContainer<int> *)(lVar19 + 0x18);
  if (*(TAttributeArrayContainer<int> **)(lVar19 + 0x30) != (TAttributeArrayContainer<int> *)0x0) {
    local_340.Container.Array = *(TAttributeArrayContainer<int> **)(lVar19 + 0x30);
  }
  local_340._padding_ = (longlong)&local_340.Container;
  local_340.Container._12_1_ = local_3b8.bHasDefaultBoneIndex;
  local_340.Container._13_1_ = local_3b8.bBlendZeroInfluence;
  local_340.Container._14_2_ = local_3b8._14_2_;
  __l2::<lambda_1>::operator()(pvVar6,(FBoneWeights *)&local_118,&local_340);
  pvVar6 = *(void **)((longlong)this + 0x10);
  lVar19 = **(longlong **)((longlong)this + 8);
  if (*(int *)(lVar19 + 0x38) < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FBoneWeights *)(*pcVar8)();
      return pFVar16;
    }
  }
  local_328.Container.Index = local_3a0._s_0.B;
  local_328.Container.Array = (TAttributeArrayContainer<int> *)(lVar19 + 0x18);
  if (*(TAttributeArrayContainer<int> **)(lVar19 + 0x30) != (TAttributeArrayContainer<int> *)0x0) {
    local_328.Container.Array = *(TAttributeArrayContainer<int> **)(lVar19 + 0x30);
  }
  local_328._padding_ = (longlong)&local_328.Container;
  local_328.Container._12_1_ = local_3b8.bHasDefaultBoneIndex;
  local_328.Container._13_1_ = local_3b8.bBlendZeroInfluence;
  local_328.Container._14_2_ = local_3b8._14_2_;
  __l2::<lambda_1>::operator()(pvVar6,(FBoneWeights *)&local_158,&local_328);
  pvVar6 = *(void **)((longlong)this + 0x10);
  lVar19 = **(longlong **)((longlong)this + 8);
  if (*(int *)(lVar19 + 0x38) < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FBoneWeights *)(*pcVar8)();
      return pFVar16;
    }
  }
  local_310.Container.Index = local_3a0._s_0.C;
  local_310.Container.Array = (TAttributeArrayContainer<int> *)(lVar19 + 0x18);
  if (*(TAttributeArrayContainer<int> **)(lVar19 + 0x30) != (TAttributeArrayContainer<int> *)0x0) {
    local_310.Container.Array = *(TAttributeArrayContainer<int> **)(lVar19 + 0x30);
  }
  local_310._padding_ = (longlong)&local_310.Container;
  local_310.Container._12_1_ = local_3b8.bHasDefaultBoneIndex;
  local_310.Container._13_1_ = local_3b8.bBlendZeroInfluence;
  local_310.Container._14_2_ = local_3b8._14_2_;
  __l2::<lambda_1>::operator()(pvVar6,(FBoneWeights *)&local_198,&local_310);
  fVar23 = (float)dVar4 + fVar24;
  local_390.bHasDefaultBoneIndex = false;
  local_390.bBlendZeroInfluence = true;
  local_390._14_2_ = 0;
  local_390.NormalizeType = Always;
  local_390.MaxWeightCount = 0xc;
  local_390.WeightThreshold = 1;
  local_390.DefaultBoneIndex = 0;
  if ((float)((uint)fVar23 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    UE::AnimationCore::FBoneWeights::FBoneWeights(__return_storage_ptr__,(FBoneWeights *)&local_118)
    ;
  }
  else {
    local_360.Container = &local_268;
    local_3b8.MaxWeightCount = local_198.ArrayNum + local_158.ArrayNum;
    local_3b8.WeightThreshold = 1;
    local_3b8.DefaultBoneIndex = 0;
    if (local_3b8.MaxWeightCount < 1) {
      local_3b8.MaxWeightCount = 1;
    }
    local_3b8.bHasDefaultBoneIndex = false;
    local_3b8.bBlendZeroInfluence = true;
    local_368.Container = &local_158;
    local_370.Container = &local_198;
    local_3b8.NormalizeType = None;
    local_268.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0xc;
    UE::AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::
    Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_360,&local_368,&local_370,fVar24 / fVar23,&local_3b8);
    local_348.Container = &local_2a8;
    local_2a8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_350.Container = &local_268;
    local_2a8.ArrayNum = 0;
    local_358.Container = &local_118;
    local_2a8.ArrayMax = 0xc;
    UE::AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::
    Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_348,&local_350,&local_358,(float)dVar20,&local_390);
    lVar19 = (longlong)local_2a8.ArrayNum;
    piVar1 = &(__return_storage_ptr__->BoneWeights).ArrayMax;
    (__return_storage_ptr__->BoneWeights).AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    (__return_storage_ptr__->BoneWeights).ArrayNum = local_2a8.ArrayNum;
    _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_2a8;
    if (local_2a8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Src = local_2a8.AllocatorInstance.SecondaryData;
    }
    if (local_2a8.ArrayNum == 0) {
      *piVar1 = 0xc;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,local_2a8.ArrayNum,0,
                 (ForElementType<UE::AnimationCore::FBoneWeight> *)__return_storage_ptr__,
                 local_2a8.ArrayNum,piVar1);
      FVar7 = (__return_storage_ptr__->BoneWeights).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)__return_storage_ptr__;
      if (FVar7 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        _Dst = FVar7;
      }
      memcpy((void *)_Dst,(void *)_Src,lVar19 << 2);
    }
    if (local_2a8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_2a8.AllocatorInstance.SecondaryData);
    }
    if (local_268.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_268.AllocatorInstance.SecondaryData);
    }
  }
  local_380.bHasDefaultBoneIndex = false;
  local_380.bBlendZeroInfluence = true;
  local_380._14_2_ = 0;
  local_380.NormalizeType = Always;
  local_380.MaxWeightCount = 0xc;
  local_380.WeightThreshold = 1;
  local_380.DefaultBoneIndex = 0;
  local_3a8.Container = &__return_storage_ptr__->BoneWeights;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::NormalizeWeights(&local_3a8,Always);
  bVar14 = UE::AnimationCore::
           TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
           ::CullWeights(&local_3a8,&local_380);
  if (bVar14) {
    UE::AnimationCore::
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::NormalizeWeights(&local_3a8,Always);
  }
  if (local_198.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
  }
  if (local_158.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  if (local_118.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator() @ 144398000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh'::__l2::<lambda_3>::operator()
          (void *this,int param_1)

{
  ForElementType<UE::AnimationCore::FBoneWeight> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar6;
  FBoneWeights *_Src;
  uint uVar7;
  longlong *plVar8;
  FBoneWeights *_Dst;
  undefined1 auStackY_118 [32];
  TVector<double>_u_0 local_e8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_b8 [2];
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78;
  FBoneWeights local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get
                    (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x50),0);
  if ((-1 < param_1) && (param_1 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1)
        != 0) {
      this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           **(undefined8 **)((longlong)this + 0x10),0);
      pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,param_1);
      local_c8 = *(undefined8 *)&pTVar6->field0_0x0;
      local_e8._s_0.X = (double)(float)local_c8;
      local_a8 = 0;
      local_80 = (longlong *)0x0;
      local_78 = 0;
      local_e8._s_0.Y = (double)(float)((ulonglong)local_c8 >> 0x20);
      local_e8._s_0.Z = (double)(pTVar6->field0_0x0)._s_0.Z;
      local_b8[0] = __real_7fefffffffffffff;
      iVar4 = (**(code **)(**(longlong **)this + 0x20))
                        (*(longlong **)this,&local_e8,local_d0,local_b8);
      if (iVar4 == -1) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2849005812079132883>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
                           ,0xd3,"NearestTriangleIndex != IndexConstants::InvalidID");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        _Src = __l2::<lambda_2>::operator()
                         (*(void **)((longlong)this + 0x20),&local_68,iVar4,
                          (TVector<double> *)&local_e8._s_0);
        plVar8 = *(longlong **)((longlong)this + 0x18);
        uVar7 = 0;
        if (param_1 < (int)plVar8[1]) {
          uVar7 = (uint)~param_1 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        _Dst = (FBoneWeights *)((longlong)param_1 * 0x40 + *plVar8);
        if (_Dst != _Src) {
          if ((_Src->BoneWeights).AllocatorInstance.SecondaryData ==
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            memmove(_Dst,_Src,0x30);
          }
          FVar1 = (_Dst->BoneWeights).AllocatorInstance.SecondaryData;
          if (FVar1 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)FVar1);
          }
          (_Dst->BoneWeights).AllocatorInstance.SecondaryData =
               (_Src->BoneWeights).AllocatorInstance.SecondaryData;
          (_Src->BoneWeights).AllocatorInstance.SecondaryData =
               (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          (_Dst->BoneWeights).ArrayNum = (_Src->BoneWeights).ArrayNum;
          (_Dst->BoneWeights).ArrayMax = (_Src->BoneWeights).ArrayMax;
          (_Src->BoneWeights).ArrayNum = 0;
          (_Src->BoneWeights).ArrayMax = 0xc;
        }
        if (local_68.BoneWeights.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FMemory::Free((void *)local_68.BoneWeights.AllocatorInstance.SecondaryData);
        }
      }
      if (local_a8 != 0) {
        plVar8 = local_98;
        if (local_80 != (longlong *)0x0) {
          plVar8 = local_80;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  return;
}

// AppendSkinWeight @ 14439c750

void __cdecl
FSkeletalMeshOperations::AppendSkinWeight
          (FMeshDescription *param_1,FMeshDescription *param_2,FSkeletalMeshAppendSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  TMeshUnboundedAttributeArraySet<int> *this;
  bool bVar6;
  int iVar7;
  FMeshElementContainer *pFVar8;
  FName FVar9;
  FAttributesSetEntry *pFVar10;
  TArrayView<int_const_,int> *pTVar11;
  FMeshAttributeArraySetBase *pFVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  TMeshUnboundedAttributeArraySet<int> *local_2c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_2c0;
  FBoneWeightsSettings local_2b0;
  TElementIDs local_2a0;
  FMeshAttributeArraySetBase *local_298;
  FBoneWeight *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  TBoneWeights<Internal::FAttributesRefAdapter> local_278;
  TArrayAttribute<int> local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  FMeshAttributeArraySetBase **local_240;
  FMeshAttributeArraySetBase *local_238;
  undefined8 uStack_230;
  FMeshAttributeArraySetBase *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FMeshDescription *local_218;
  FMeshDescription *pFStack_210;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FMeshDescription *local_1f8;
  FMeshDescription *pFStack_1f0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FMeshDescription *local_1d8;
  FMeshDescription *pFStack_1d0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FMeshDescription *local_1b8;
  FMeshDescription *pFStack_1b0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_188;
  FMeshDescription *local_178;
  FSkeletalMeshAttributesShared local_170;
  FCreateAndCopyAttributeValues<float> local_158;
  FCreateAndCopyAttributeValues<UE::Math::TVector2<float>_> local_138;
  FCreateAndCopyAttributeValues<UE::Math::TVector<float>_> local_118;
  FCreateAndCopyAttributeValues<UE::Math::TVector4<float>_> local_f8;
  TConstIterator local_d8;
  TArrayView<int_const_,int> local_b8;
  TArrayView<int_const_,int> local_a8;
  TArrayView<int_const_,int> local_98;
  FSkeletalMeshAttributes local_88;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId71,"FSkeletalMeshOperations::AppendSkinWeight",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
  }
  local_178 = param_1;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_170,param_1);
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_88,param_2);
  FSkeletalMeshAttributes::Register(&local_88,true);
  pFVar8 = FMeshElementChannels::Get((local_170.MeshDescriptionShared)->VertexElements,0);
  FVar9 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_198);
  pFVar10 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar8->Attributes,*(FName *)FVar9);
  if (((pFVar10 == (FAttributesSetEntry *)0x0) ||
      (local_298 = (pFVar10->Ptr).Ptr, local_298->Type != 4)) || (local_298->Extent != 0)) {
    local_298 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar12 = local_298;
  pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_88._padding_ + 0x50),0);
  FVar9 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_190);
  pFVar10 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar8->Attributes,*(FName *)FVar9);
  if (((pFVar10 == (FAttributesSetEntry *)0x0) ||
      (local_2c8 = (TMeshUnboundedAttributeArraySet<int> *)(pFVar10->Ptr).Ptr,
      *(uint *)&local_2c8->_padding_ != 4)) || (*(uint *)((longlong)&local_2c8->_padding_ + 4) != 0)
     ) {
    local_2c8 = (TMeshUnboundedAttributeArraySet<int> *)0x0;
  }
  (param_2->VertexToVertexInstances).bSuspended = true;
  (param_2->VertexToEdges).bSuspended = true;
  if (param_3->bAppendVertexAttributes != false) {
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    pFVar8 = FMeshElementChannels::Get(param_2->VertexElements,0);
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)&pFVar8->Attributes,&local_2c0);
    FMeshElementChannels::Get(param_1->VertexElements,0);
    FMeshElementChannels::Get(param_2->VertexElements,0);
    pFVar8 = FMeshElementChannels::Get(param_1->VertexElements,0);
    local_208 = &local_2c0;
    iStack_200 = param_3->SourceVertexIDOffset;
    local_158._28_4_ = uStack_1fc;
    local_158.TargetVertexIndexOffset = iStack_200;
    local_218 = param_1;
    pFStack_210 = param_2;
    local_158.SourceMesh = param_1;
    local_158.TargetMesh = param_2;
    local_158.TargetCustomAttributeNames = local_208;
    TAttributesSet<FVertexID>::
    ForEachByType<float,UE::Private::FCreateAndCopyAttributeValues<float>_>
              ((TAttributesSet<FVertexID> *)&pFVar8->Attributes,&local_158);
    pFVar8 = FMeshElementChannels::Get(param_1->VertexElements,0);
    local_1e8 = &local_2c0;
    iStack_1e0 = param_3->SourceVertexIDOffset;
    local_138._28_4_ = uStack_1dc;
    local_138.TargetVertexIndexOffset = iStack_1e0;
    local_1f8 = param_1;
    pFStack_1f0 = param_2;
    local_138.SourceMesh = param_1;
    local_138.TargetMesh = param_2;
    local_138.TargetCustomAttributeNames = local_1e8;
    TAttributesSet<FVertexID>::
    ForEachByType<UE::Math::TVector2<float>,UE::Private::FCreateAndCopyAttributeValues<UE::Math::TVector2<float>_>_>
              ((TAttributesSet<FVertexID> *)&pFVar8->Attributes,&local_138);
    pFVar8 = FMeshElementChannels::Get(param_1->VertexElements,0);
    local_1c8 = &local_2c0;
    iStack_1c0 = param_3->SourceVertexIDOffset;
    local_118._28_4_ = uStack_1bc;
    local_118.TargetVertexIndexOffset = iStack_1c0;
    local_1d8 = param_1;
    pFStack_1d0 = param_2;
    local_118.SourceMesh = param_1;
    local_118.TargetMesh = param_2;
    local_118.TargetCustomAttributeNames = local_1c8;
    TAttributesSet<FVertexID>::
    ForEachByType<UE::Math::TVector<float>,UE::Private::FCreateAndCopyAttributeValues<UE::Math::TVector<float>_>_>
              ((TAttributesSet<FVertexID> *)&pFVar8->Attributes,&local_118);
    pFVar8 = FMeshElementChannels::Get(param_1->VertexElements,0);
    local_1a8 = &local_2c0;
    iStack_1a0 = param_3->SourceVertexIDOffset;
    local_f8._28_4_ = uStack_19c;
    local_f8.TargetVertexIndexOffset = iStack_1a0;
    local_1b8 = param_1;
    pFStack_1b0 = param_2;
    local_f8.SourceMesh = param_1;
    local_f8.TargetMesh = param_2;
    local_f8.TargetCustomAttributeNames = local_1a8;
    TAttributesSet<FVertexID>::
    ForEachByType<UE::Math::TVector4<float>,UE::Private::FCreateAndCopyAttributeValues<UE::Math::TVector4<float>_>_>
              ((TAttributesSet<FVertexID> *)&pFVar8->Attributes,&local_f8);
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
  }
  local_2a0.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_2a0,(TConstIterator *)&local_260);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_2a0,&local_d8);
  this = local_2c8;
  while( true ) {
    if ((local_260.CurrentBitIndex == local_d8.Iterator.CurrentBitIndex) &&
       (local_260.Array == local_d8.Iterator.Array)) {
      (param_2->VertexToVertexInstances).bSuspended = false;
      (param_2->VertexToVertexInstances).bEverythingStale = true;
      (param_2->VertexToEdges).bSuspended = false;
      (param_2->VertexToEdges).bEverythingStale = true;
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    iVar3 = param_3->SourceVertexIDOffset;
    iVar14 = -1;
    if (local_260.CurrentBitIndex < (local_260.Array)->NumBits) {
      iVar14 = local_260.CurrentBitIndex;
    }
    if (((int)pFVar12[2].Type < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    local_238 = pFVar12 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar12[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      local_238 = (FMeshAttributeArraySetBase *)pFVar12[2]._padding_;
    }
    local_240 = &local_238;
    uStack_230 = CONCAT44(uStack_21c,iVar14);
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 0;
    local_228 = local_238;
    iStack_220 = iVar14;
    pTVar11 = TAttributeArrayContainer<int>::Get
                        ((TAttributeArrayContainer<int> *)local_238,&local_b8,iVar14);
    lVar13 = 0;
    iVar4 = pTVar11->ArrayNum;
    if (0 < (longlong)iVar4) {
      do {
        pTVar11 = TAttributeArrayContainer<int>::Get
                            ((TAttributeArrayContainer<int> *)*local_240,&local_a8,
                             *(int *)(local_240 + 1));
        uVar2 = *(ushort *)((longlong)pTVar11->DataPtr + lVar13 * 4 + 2);
        if ((int)(uint)uVar2 < (param_3->SourceRemapBoneIndex).ArrayNum) {
          iVar7 = (int)local_2d0;
          if ((int)local_2d0 == local_2d0._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&local_2d8,(int *)((longlong)&local_2d0 + 4));
          }
          local_2d0 = CONCAT44(local_2d0._4_4_,iVar7 + 1);
          pFVar1 = local_2d8.Data + (longlong)iVar7 * 4;
          if (((param_3->SourceRemapBoneIndex).ArrayNum <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined2 *)&pFVar1->field_0x0 =
               *(undefined2 *)
                ((param_3->SourceRemapBoneIndex).AllocatorInstance.Data + (ulonglong)uVar2 * 2);
          pTVar11 = TAttributeArrayContainer<int>::Get
                              ((TAttributeArrayContainer<int> *)*local_240,&local_98,
                               *(int *)(local_240 + 1));
          *(short *)(pFVar1 + 2) = (short)pTVar11->DataPtr[lVar13];
        }
        lVar13 = lVar13 + 1;
        pFVar12 = local_298;
      } while (lVar13 < iVar4);
    }
    iVar4 = (int)local_2d0;
    local_288 = (FBoneWeight *)local_2d8.Data;
    local_2b0.bHasDefaultBoneIndex = false;
    local_2b0.bBlendZeroInfluence = true;
    local_2b0._14_2_ = 0;
    local_2b0.NormalizeType = Always;
    local_2b0.MaxWeightCount = 0xc;
    local_2b0.WeightThreshold = 1;
    local_2b0.DefaultBoneIndex = 0;
    if (((int)local_2d0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_280 = iVar4;
    local_270.Array = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(this,0);
    local_188._12_4_ = uStack_27c;
    local_188.ArrayNum = iStack_280;
    local_278.Container = &local_270;
    local_188.DataPtr = local_288;
    local_270.Index = iVar3 + iVar14;
    UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::
    SetBoneWeights<TArrayAttribute<int>_>(&local_278,&local_188,&local_2b0);
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
    local_260.UnvisitedBitMask = local_260.UnvisitedBitMask & ~local_260._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ApplyRigToGeo @ 14439cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FSkeletalMeshOperations::ApplyRigToGeo(FMeshDescription *param_1,FMeshDescription *param_2)

{
  FVertexID *pFVar1;
  FMeshAttributeArraySetBase *pFVar2;
  FTriangleID *pFVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> TVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  FMeshElementContainer *pFVar13;
  FAttributesSetEntry *pFVar14;
  TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *pTVar15;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar16;
  TVector<float> *pTVar17;
  ulonglong uVar18;
  FMeshDescription *pFVar19;
  FName FVar20;
  TArrayView<int,int> *pTVar21;
  ulonglong uVar22;
  uint *puVar23;
  ForElementType<FSetElementId> FVar24;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> this;
  char cVar25;
  FMeshAttributeArraySetBase *pFVar26;
  FVertexID *pFVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ForElementType<unsigned_int> FVar34;
  longlong lVar35;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> TVar36;
  TMeshUnboundedAttributeArraySet<int> *pTVar37;
  FScriptContainerElement *pFVar38;
  FScriptContainerElement *pFVar39;
  int iVar40;
  float fVar41;
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStackY_9a8 [32];
  undefined1 local_958;
  undefined1 local_957;
  FIdentityFunctor local_956 [2];
  undefined4 local_954;
  undefined8 local_950;
  float fStack_948;
  float fStack_944;
  float fStack_940;
  float local_93c;
  char local_938;
  undefined2 local_937;
  undefined1 local_935;
  FTriangleID local_930;
  FTriangleID local_92c;
  uint local_928;
  uint local_924;
  TArray<RigApplicationHelpers::FIndexAndZ,TSizedDefaultAllocator<32>_> local_920;
  ForAnyElementType local_910;
  undefined8 local_908;
  TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> local_900;
  TElementIDs local_8f8;
  FBoneWeight local_8f0;
  FIndexAndZ local_8ec;
  FMeshDescription *local_8e0;
  TArray<RigApplicationHelpers::FVertexInfo,TSizedDefaultAllocator<32>_> local_8d8;
  undefined4 local_8c8;
  undefined4 local_8c4;
  TArray<int,TSizedDefaultAllocator<32>_> local_8c0;
  FMeshDescription *local_8b0;
  FBoneWeightsSettings local_8a8;
  FBoneWeightsSettings local_898;
  uint local_888;
  uint uStack_884;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_880;
  undefined4 local_878;
  uint uStack_874;
  uint uStack_870;
  undefined4 uStack_86c;
  TElementIDs local_868;
  undefined8 local_860;
  TElementIDs local_858;
  undefined8 local_850;
  TElementIDs local_848;
  TElementIDs local_840;
  TElementIDs local_838;
  TElementIDs local_830;
  TAttributeArrayContainer<int> **local_828;
  TAttributeArrayContainer<int> *local_820;
  uint local_818;
  undefined4 local_814;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_808;
  TVector4<double>_u_0 local_7f8;
  undefined1 local_7d8 [16];
  double local_7c8;
  undefined8 local_7c0;
  double local_7b8;
  double local_7b0;
  undefined8 local_7a8;
  ForAnyElementType local_798;
  undefined8 local_790;
  void *local_788;
  undefined8 local_780;
  ForAnyElementType local_778;
  undefined8 local_770;
  void *local_768;
  undefined8 local_760;
  double local_758;
  TPairInitializer<int_&&,int_const_&> local_748;
  <lambda_1> local_738;
  TVector<float>_u_0 local_730;
  int local_724;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> local_718;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> local_708;
  TBoneWeights<Internal::FAttributesRefAdapter> local_6f8;
  TArrayAttribute<int> local_6f0;
  TPairInitializer<int_&&,int_const_&> local_6e0;
  TArrayAttribute<int> local_6d0;
  longlong *local_6c0;
  undefined1 local_6b8 [20];
  uint uStack_6a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_698;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_678;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_658;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5d8;
  TArrayView<FVertexID_const_,int> local_5b8;
  undefined4 *local_5a8;
  uint *local_5a0;
  undefined4 *local_598;
  uint *local_590;
  FBoneWeight *local_588;
  int iStack_580;
  undefined4 uStack_57c;
  FBoneWeight *local_578;
  int iStack_570;
  undefined4 uStack_56c;
  TArrayView<FVertexID_const_,int> local_568;
  TVector4<double>_u_0 local_558;
  double local_538;
  double dStack_530;
  double local_528;
  undefined8 local_520;
  TVector4<double>_u_0 local_518;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  undefined8 local_4e0;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> local_4d8;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> local_4c8;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_4b8;
  undefined1 local_4a8 [8];
  undefined1 local_4a0 [8];
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> local_498;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> local_488;
  TConstIterator local_478;
  TConstIterator local_458;
  TConstIterator local_438;
  TConstIterator local_418;
  TConstIterator local_3f8;
  TConstIterator local_3d8;
  TConstIterator local_3b8;
  TArrayView<int,int> local_398;
  TArrayView<int,int> local_388;
  TArrayView<int,int> local_378;
  TArrayView<int,int> local_368;
  FSkeletalMeshAttributes local_358;
  FSkeletalMeshAttributes local_320;
  undefined1 local_2e8 [32];
  ForElementType<unsigned_int> local_2c8;
  uint local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  FScriptContainerElement local_2b0 [8];
  ForAnyElementType local_2a8;
  uint local_2a0;
  TMapBase<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>_>
  local_298;
  TMapBase<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>_>
  local_248;
  TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_1f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  local_8e0 = param_2;
  local_8b0 = param_1;
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_358,param_1);
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_320,param_2);
  lVar4 = local_358._padding_;
  pFVar26 = (FMeshAttributeArraySetBase *)0x0;
  local_298.Pairs.Elements._0_8_ = 0;
  local_298.Pairs.Elements._8_8_ = 0;
  local_298.Pairs.Elements._32_8_ = 0;
  local_298.Pairs.Elements._40_4_ = 0;
  local_298.Pairs.Elements._44_4_ = 0x80;
  local_298.Pairs.Elements._48_4_ = 0xffffffff;
  local_298.Pairs.Elements._52_4_ = 0;
  local_298.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_298.Pairs.HashSize = 0;
  local_248.Pairs.Elements._0_8_ = 0;
  local_248.Pairs.Elements._8_8_ = 0;
  local_248.Pairs.Elements._32_8_ = 0;
  local_248.Pairs.Elements._40_4_ = 0;
  local_248.Pairs.Elements._44_4_ = 0x80;
  local_248.Pairs.Elements._48_4_ = 0xffffffff;
  local_248.Pairs.Elements._52_4_ = 0;
  local_248.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_248.Pairs.HashSize = 0;
  pFVar13 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x70),0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::Triangle::VertexIndex);
  lVar35 = local_320._padding_;
  local_708.Extent = 1;
  local_718.ArrayPtr = pFVar26;
  local_718.Extent = local_708.Extent;
  if ((pFVar14 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar14->Ptr).Ptr, pFVar2->Type == 4)) {
    local_718.ArrayPtr = pFVar2;
    local_718.Extent = pFVar2->Extent;
  }
  pFVar13 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_320._padding_ + 0x70),0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::Triangle::VertexIndex);
  local_708.ArrayPtr = pFVar26;
  if ((pFVar14 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar14->Ptr).Ptr, pFVar2->Type == 4)) {
    local_708.Extent = pFVar2->Extent;
    local_708.ArrayPtr = pFVar2;
  }
  pFVar13 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar4 + 0x50),0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (local_900.ArrayPtr = (pFVar14->Ptr).Ptr,
      *(uint *)&((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_900.ArrayPtr)->_padding_
      != 1)) ||
     (*(uint *)((longlong)
                &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_900.ArrayPtr)->
                 _padding_ + 4) != 1)) {
    local_900.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  }
  TVar36.ArrayPtr = local_900.ArrayPtr;
  pFVar13 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar35 + 0x50),0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (this.ArrayPtr = (pFVar14->Ptr).Ptr, (this.ArrayPtr)->Type != 1)) ||
     ((this.ArrayPtr)->Extent != 1)) {
    this.ArrayPtr = pFVar26;
  }
  local_848.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_848,(TConstIterator *)&local_698);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_848,&local_478);
  while ((local_698.CurrentBitIndex != local_478.Iterator.CurrentBitIndex ||
         (local_698.Array != local_478.Iterator.Array))) {
    local_930 = (FTriangleID)0xffffffff;
    if (local_698.CurrentBitIndex < (local_698.Array)->NumBits) {
      local_930 = (FTriangleID)local_698.CurrentBitIndex;
    }
    TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_>::operator[]<FTriangleID,0>
              (&local_718,&local_568,local_930);
    pFVar1 = local_568.DataPtr + local_568.ArrayNum;
    for (pFVar27 = local_568.DataPtr; pFVar27 != pFVar1; pFVar27 = pFVar27 + 1) {
      pTVar15 = TMapBase<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FVertexID_const_&>(&local_298,(uint)*pFVar27,pFVar27);
      pFVar3 = (FTriangleID *)(pTVar15->AllocatorInstance).Data;
      if (((pFVar3 <= &local_930) && (&local_930 < pFVar3 + pTVar15->ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = pTVar15->ArrayNum;
      if (iVar12 == pTVar15->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      pTVar15->ArrayNum = iVar12 + 1;
      *(FTriangleID *)((pTVar15->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_930;
    }
    local_698.UnvisitedBitMask = local_698.UnvisitedBitMask & ~local_698._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_698);
  }
  local_858.Array = &FMeshElementChannels::Get(local_8e0->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_858,(TConstIterator *)&local_678);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_858,&local_458);
  while ((local_678.CurrentBitIndex != local_458.Iterator.CurrentBitIndex ||
         (local_678.Array != local_458.Iterator.Array))) {
    local_92c = (FTriangleID)0xffffffff;
    if (local_678.CurrentBitIndex < (local_678.Array)->NumBits) {
      local_92c = (FTriangleID)local_678.CurrentBitIndex;
    }
    TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_>::operator[]<FTriangleID,0>
              (&local_708,&local_5b8,local_92c);
    pFVar1 = local_5b8.DataPtr + local_5b8.ArrayNum;
    for (pFVar27 = local_5b8.DataPtr; pFVar27 != pFVar1; pFVar27 = pFVar27 + 1) {
      pTVar15 = TMapBase<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FVertexID_const_&>(&local_248,(uint)*pFVar27,pFVar27);
      pFVar3 = (FTriangleID *)(pTVar15->AllocatorInstance).Data;
      if (((pFVar3 <= &local_92c) && (&local_92c < pFVar3 + pTVar15->ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = pTVar15->ArrayNum;
      if (iVar12 == pTVar15->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      pTVar15->ArrayNum = iVar12 + 1;
      *(FTriangleID *)((pTVar15->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_92c;
    }
    local_678.UnvisitedBitMask = local_678.UnvisitedBitMask & ~local_678._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_678);
  }
  local_937 = 0;
  fVar48 = 0.0;
  local_935 = 0;
  fStack_940 = 0.0;
  cVar25 = '\0';
  local_93c = 0.0;
  local_938 = 0;
  local_950 = 0;
  fStack_948 = 0.0;
  fStack_944 = 0.0;
  local_840.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_840,(TConstIterator *)&local_5d8);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_840,&local_438);
  fVar49 = fStack_944;
  fVar44 = local_950._4_4_;
  fVar50 = (float)local_950;
  fVar6 = fStack_948;
  fVar46 = 0.0;
  while ((local_5d8.CurrentBitIndex != local_438.Iterator.CurrentBitIndex ||
         (local_5d8.Array != local_438.Iterator.Array))) {
    iVar12 = -1;
    if (local_5d8.CurrentBitIndex < (local_5d8.Array)->NumBits) {
      iVar12 = local_5d8.CurrentBitIndex;
    }
    pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)TVar36.ArrayPtr,0);
    pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar16,iVar12);
    if (cVar25 == '\0') {
      local_950 = *(undefined8 *)&pTVar17->field0_0x0;
      cVar25 = '\x01';
      fVar41 = (pTVar17->field0_0x0)._s_0.Z;
      fVar44 = (float)((ulonglong)local_950 >> 0x20);
      fStack_944 = (float)local_950;
      fVar50 = fStack_944;
      fVar47 = fVar41;
      fStack_940 = fVar44;
    }
    else {
      fStack_944 = (pTVar17->field0_0x0)._s_0.X;
      fStack_940 = (pTVar17->field0_0x0)._s_0.Y;
      fVar47 = (pTVar17->field0_0x0)._s_0.Z;
      fVar41 = fStack_944;
      if (fVar50 <= fStack_944) {
        fVar41 = fVar50;
      }
      fVar50 = fVar41;
      if (fStack_944 <= fVar49) {
        fStack_944 = fVar49;
      }
      fVar49 = fStack_940;
      if (fVar44 <= fStack_940) {
        fVar49 = fVar44;
      }
      fVar44 = fVar49;
      if (fStack_940 <= fVar48) {
        fStack_940 = fVar48;
      }
      local_950 = CONCAT44(fVar44,fVar50);
      fVar41 = fVar47;
      if (fVar6 <= fVar47) {
        fVar41 = fVar6;
      }
      if (fVar47 <= fVar46) {
        fVar47 = fVar46;
      }
    }
    fVar48 = fStack_940;
    fVar49 = fStack_944;
    local_5d8.UnvisitedBitMask = local_5d8.UnvisitedBitMask & ~local_5d8._padding_._4_4_;
    fStack_948 = fVar41;
    local_93c = fVar47;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5d8);
    fVar6 = fVar41;
    fVar46 = fVar47;
  }
  local_938 = cVar25;
  local_838.Array = &FMeshElementChannels::Get(local_8e0->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_838,(TConstIterator *)&local_658);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_838,&local_418);
  while ((local_658.CurrentBitIndex != local_418.Iterator.CurrentBitIndex ||
         (local_658.Array != local_418.Iterator.Array))) {
    iVar12 = -1;
    if (local_658.CurrentBitIndex < (local_658.Array)->NumBits) {
      iVar12 = local_658.CurrentBitIndex;
    }
    pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.ArrayPtr,0);
    pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar16,iVar12);
    if (cVar25 == '\0') {
      local_950 = *(undefined8 *)&pTVar17->field0_0x0;
      cVar25 = '\x01';
      fVar41 = (pTVar17->field0_0x0)._s_0.Z;
      fVar44 = (float)((ulonglong)local_950 >> 0x20);
      fStack_944 = (float)local_950;
      fVar50 = fStack_944;
      fVar47 = fVar41;
      fStack_940 = fVar44;
    }
    else {
      fStack_944 = (pTVar17->field0_0x0)._s_0.X;
      fStack_940 = (pTVar17->field0_0x0)._s_0.Y;
      fVar47 = (pTVar17->field0_0x0)._s_0.Z;
      fVar41 = fStack_944;
      if (fVar50 <= fStack_944) {
        fVar41 = fVar50;
      }
      fVar50 = fVar41;
      if (fStack_944 <= fVar49) {
        fStack_944 = fVar49;
      }
      fVar49 = fStack_940;
      if (fVar44 <= fStack_940) {
        fVar49 = fVar44;
      }
      fVar44 = fVar49;
      if (fStack_940 <= fVar48) {
        fStack_940 = fVar48;
      }
      local_950 = CONCAT44(fVar44,fVar50);
      fVar41 = fVar47;
      if (fVar6 <= fVar47) {
        fVar41 = fVar6;
      }
      if (fVar47 <= fVar46) {
        fVar47 = fVar46;
      }
    }
    fVar48 = fStack_940;
    fVar49 = fStack_944;
    local_658.UnvisitedBitMask = local_658.UnvisitedBitMask & ~local_658._padding_._4_4_;
    fStack_948 = fVar41;
    local_93c = fVar47;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_658);
    fVar6 = fVar41;
    fVar46 = fVar47;
  }
  local_7f8._s_0.W = 0.0;
  local_7c0 = 0;
  local_7a8 = 0;
  local_798.Data = (FScriptContainerElement *)0x0;
  fVar41 = (fVar49 - fVar50) * __real_3f000000;
  local_790 = 0;
  local_788 = (void *)0x0;
  fVar47 = (fVar48 - fVar44) * __real_3f000000;
  local_780 = 0;
  fVar45 = (fVar46 - fVar6) * __real_3f000000;
  local_778.Data = (FScriptContainerElement *)0x0;
  if (fVar47 <= fVar41) {
    fVar47 = fVar41;
  }
  local_770 = 0;
  local_768 = (void *)0x0;
  local_7f8._s_0.X = (double)((fVar49 + fVar50) * __real_3f000000);
  local_760 = 0;
  if (fVar47 <= fVar45) {
    fVar47 = fVar45;
  }
  local_7f8._s_0.Y = (double)((fVar48 + fVar44) * __real_3f000000);
  local_7c8 = (double)fVar47;
  local_7f8._s_0.Z = (double)((fVar46 + fVar6) * __real_3f000000);
  local_7b8 = local_7c8 * __real_3fe1000000000000;
  local_7d8._8_4_ = SUB84(local_7c8,0);
  local_7d8._0_8_ = local_7c8;
  local_7d8._12_4_ = (int)((ulonglong)local_7c8 >> 0x20);
  local_758 = local_7c8 * ___real_3f408f227be81608;
  local_7b0 = local_7c8 - local_7b8;
  local_938 = cVar25;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_798,(int *)((longlong)&local_790 + 4));
  local_790 = CONCAT44(local_790._4_4_,iVar12 + 1);
  DefaultConstructItems<TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::FNode,int>
            (local_798.Data + (longlong)iVar12 * 8,1);
  iVar12 = (int)local_770;
  if ((int)local_770 == local_770._4_4_) {
    iVar12 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                       (0x110,8,&local_778,(int *)((longlong)&local_770 + 4));
  }
  local_770 = CONCAT44(local_770._4_4_,iVar12 + 1);
  DefaultConstructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            (local_778.Data + (longlong)iVar12 * 0x110,1);
  local_920.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_920.ArrayNum = 0;
  local_920.ArrayMax = 0;
  local_830.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_830,(TConstIterator *)&local_638);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_830,&local_3f8);
  fVar6 = __real_3ebd70a4;
  fVar50 = __real_3ea8f5c3;
  fVar44 = __real_3e99999a;
  while ((local_638.CurrentBitIndex != local_3f8.Iterator.CurrentBitIndex ||
         (local_638.Array != local_3f8.Iterator.Array))) {
    iVar12 = -1;
    if (local_638.CurrentBitIndex < (local_638.Array)->NumBits) {
      iVar12 = local_638.CurrentBitIndex;
    }
    pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)TVar36.ArrayPtr,0);
    pTVar17 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar16,iVar12);
    local_558._s_0.W = 0.0;
    local_520 = 0;
    local_730._0_8_ = *(undefined8 *)&pTVar17->field0_0x0;
    local_730._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
    local_558._s_0.X = (double)(float)local_730._0_8_;
    local_1f8.AllocatorInstance.SecondaryData =
         (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0;
    local_1f8.ArrayNum = 0;
    local_558._s_0.Y = (double)(float)((ulonglong)local_730._0_8_ >> 0x20);
    local_1f8.ArrayMax = 0x10;
    local_558._s_0.Z = (double)local_730._s_0.Z;
    local_538 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_530 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_528 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_724 = iVar12;
    TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::
    AddElementInternal((TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
                        *)&local_7f8._s_0,0,(FOctreeNodeContext *)&local_7f8._s_0,
                       (FBoxCenterAndExtent *)&local_558._s_0,(FVertexInfo *)&local_730._s_0,
                       &local_1f8);
    if (local_1f8.AllocatorInstance.SecondaryData !=
        (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
      FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
    }
    local_8ec.Z = (pTVar17->field0_0x0)._s_0.Y * fVar50 + (pTVar17->field0_0x0)._s_0.X * fVar44 +
                  (pTVar17->field0_0x0)._s_0.Z * fVar6;
    local_8ec.Index = iVar12;
    if (((local_920.AllocatorInstance.Data <= &local_8ec) &&
        (&local_8ec <
         (FIndexAndZ *)(local_920.AllocatorInstance.Data + (longlong)local_920.ArrayMax * 8))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = local_920.ArrayNum;
    if (local_920.ArrayNum == local_920.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_920.AllocatorInstance,&local_920.ArrayMax);
    }
    local_920.ArrayNum = iVar12 + 1;
    *(ulonglong *)(local_920.AllocatorInstance.Data + (longlong)iVar12 * 8) =
         CONCAT44(local_8ec.Index,local_8ec.Z);
    local_638.UnvisitedBitMask = local_638.UnvisitedBitMask & ~local_638._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_638);
  }
  AlgoImpl::
  IntroSortInternal<RigApplicationHelpers::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>_>
            ((FIndexAndZ *)local_920.AllocatorInstance.Data,local_920.ArrayNum,local_956[0],
             (FCompareIndexAndZ *)local_956);
  uVar22 = 0;
  local_2e8._0_8_ = (FScriptContainerElement *)0x0;
  local_2e8._8_8_ = 0;
  local_2c8 = (ForElementType<unsigned_int>)0x0;
  local_2c0 = 0;
  local_2bc = 0x80;
  local_2b8 = -1;
  local_2b4 = 0;
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  pFVar13 = FMeshElementChannels::Get(local_8b0->VertexElements,0);
  uVar29 = (pFVar13->BitArray).NumBits - pFVar13->NumHoles;
  if (uVar29 <= (uint)(local_2e8._8_4_ - local_2b4)) goto LAB_14439dc07;
  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_2e8,uVar29);
  if (uVar29 < 4) {
    uVar29 = 1;
  }
  else {
    uVar32 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_748.Value._0_4_ = (undefined4)lVar4;
    uVar29 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_2a0 != 0) && ((int)uVar29 <= (int)local_2a0)) goto LAB_14439dc07;
  local_2a0 = uVar29;
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2a8,0,0,4);
  }
  if (uVar29 != 0) {
    uVar31 = uVar29;
    if (uVar29 < 2) {
      if (local_2a8.Data != (FScriptContainerElement *)0x0) {
        uVar31 = 0;
        goto LAB_14439da1e;
      }
    }
    else {
LAB_14439da1e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2a8,0,uVar31,4);
    }
    if (0 < (int)uVar29) {
      uVar33 = (ulonglong)uVar29;
      uVar32 = uVar22;
      do {
        FVar28.Data = local_2b0;
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_2a8.Data;
        }
        uVar18 = uVar32 & (longlong)(int)uVar29 - 1U;
        uVar32 = uVar32 + 1;
        *(undefined4 *)(FVar28.Data + uVar18 * 4) = 0xffffffff;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
    }
  }
  if (local_2a0 != 0) {
    pTStack_880 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2e8 + 0x10);
    local_888 = 0;
    uStack_884 = 1;
    uStack_874 = 0;
    uStack_870 = 0;
    if (local_2c0 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_2e8 + 0x10);
      if (local_2c8 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_2c8;
      }
      uVar29 = *(uint *)FVar34;
      uVar32 = uVar22;
      while (uVar29 == 0) {
        uStack_870 = (int)uVar32 + 0x20;
        uVar32 = (ulonglong)uStack_870;
        iVar12 = (int)uVar22;
        local_888 = iVar12 + 1;
        uVar22 = (ulonglong)local_888;
        if ((int)((local_2c0 - 1) + ((int)(local_2c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_888)
        goto LAB_14439db40;
        uVar29 = ((uint *)((longlong)FVar34 + 4))[iVar12];
      }
      uStack_884 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_884 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_748.Key._4_4_ = (int)lVar4;
      uStack_874 = (uStack_870 - 1) + local_748.Key._4_4_;
      uVar22 = (ulonglong)uStack_874;
      if ((int)local_2c0 < (int)uStack_874) {
LAB_14439db40:
        uVar22 = (ulonglong)local_2c0;
        uStack_874 = local_2c0;
      }
    }
    local_878 = 0xffffffff;
    local_6c0 = (longlong *)local_2e8;
    local_6b8._0_8_ = CONCAT44(uStack_884,local_888);
    uStack_6a4 = uStack_874;
    local_6b8._16_4_ = 0xffffffff;
    unique0x100015da = uStack_870;
    unique0x100015de = uStack_86c;
    local_6b8._8_8_ = pTStack_880;
    if ((int)uVar22 < (int)local_2c0) {
      do {
        lVar4 = *local_6c0;
        lVar35 = (longlong)(int)uVar22 * 0x10;
        uVar29 = local_2a0 - 1 & *(uint *)(lVar35 + lVar4);
        *(uint *)(lVar35 + 0xc + lVar4) = uVar29;
        FVar28.Data = local_2b0;
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_2a8.Data;
        }
        uVar32 = (longlong)(int)local_2a0 - 1U & (longlong)(int)uVar29;
        *(undefined4 *)(lVar35 + 8 + lVar4) = *(undefined4 *)(FVar28.Data + uVar32 * 4);
        *(int *)(FVar28.Data + uVar32 * 4) = (int)uVar22;
        local_6b8._16_4_ = local_6b8._16_4_ & ~local_6b8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_6b8);
        uVar22 = (ulonglong)uStack_6a4;
      } while ((int)uStack_6a4 < *(int *)(local_6b8._8_8_ + 0x18));
    }
  }
LAB_14439dc07:
  local_868.Array = &FMeshElementChannels::Get(local_8e0->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_868,(TConstIterator *)&local_618);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_868,&local_3d8);
  pFVar2 = local_708.ArrayPtr;
  pFVar26 = local_718.ArrayPtr;
  fVar48 = __real_3ba3d70a;
  fVar49 = __real_37a7c5ac;
  fVar6 = __real_3f800000;
  fVar50 = __real_3d4ccccd;
  fVar44 = __real_38d1b717;
  uVar7._4_4_ = local_718._12_4_;
  uVar7._0_4_ = local_718.Extent;
  uVar8._4_4_ = local_708._12_4_;
  uVar8._0_4_ = local_708.Extent;
LAB_14439dca0:
  if ((local_618.CurrentBitIndex == local_3d8.Iterator.CurrentBitIndex) &&
     (local_618.Array == local_3d8.Iterator.Array)) {
    local_860 = 0;
    pFVar13 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_358._padding_ + 0x50),0);
    FVar20 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_4a0);
    pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar13->Attributes,*(FName *)FVar20);
    if ((pFVar14 == (FAttributesSetEntry *)0x0) ||
       ((local_900.ArrayPtr = (pFVar14->Ptr).Ptr,
        *(uint *)&((TMeshUnboundedAttributeArraySet<int> *)local_900.ArrayPtr)->_padding_ != 4 ||
        (*(uint *)((longlong)
                   &((TMeshUnboundedAttributeArraySet<int> *)local_900.ArrayPtr)->_padding_ + 4) !=
         0)))) {
      local_900.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    }
    TVar36.ArrayPtr = local_900.ArrayPtr;
    local_850 = 0;
    pFVar13 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_320._padding_ + 0x50),0);
    FVar20 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_4a8);
    pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar13->Attributes,*(FName *)FVar20);
    if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
        (pTVar37 = (TMeshUnboundedAttributeArraySet<int> *)(pFVar14->Ptr).Ptr,
        *(uint *)&pTVar37->_padding_ != 4)) || (*(uint *)((longlong)&pTVar37->_padding_ + 4) != 0))
    {
      pTVar37 = (TMeshUnboundedAttributeArraySet<int> *)0x0;
    }
    local_8f8.Array = &FMeshElementChannels::Get(local_8e0->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_8f8,(TConstIterator *)&local_5f8);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_8f8,&local_3b8);
    uVar10 = local_808._12_4_;
    do {
      if ((local_5f8.CurrentBitIndex == local_3b8.Iterator.CurrentBitIndex) &&
         (local_5f8.Array == local_3b8.Iterator.Array)) {
        local_2a0 = 0;
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_2e8);
        if ((FIndexAndZ *)local_920.AllocatorInstance.Data != (FIndexAndZ *)0x0) {
          FMemory::Free(local_920.AllocatorInstance.Data);
        }
        if (local_768 != (void *)0x0) {
          FMemory::Free(local_768);
        }
        DestructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
                  ((TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                    *)local_778.Data,(int)local_770);
        if ((TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             *)local_778.Data !=
            (TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          FMemory::Free(local_778.Data);
        }
        if (local_788 != (void *)0x0) {
          FMemory::Free(local_788);
        }
        if (local_798.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_798.Data);
        }
        local_248.Pairs.HashSize = 0;
        if (local_248.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_248.Pairs.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_248);
        local_298.Pairs.HashSize = 0;
        if (local_298.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_298.Pairs.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&local_298);
        return;
      }
      uVar29 = 0xffffffff;
      if (local_5f8.CurrentBitIndex < (local_5f8.Array)->NumBits) {
        uVar29 = local_5f8.CurrentBitIndex;
      }
      if (local_2e8._8_4_ != local_2b4) {
        FVar28.Data = local_2b0;
        if (local_2a8.Data != (FScriptContainerElement *)0x0) {
          FVar28.Data = local_2a8.Data;
        }
        uVar31 = *(uint *)(FVar28.Data + (ulonglong)(local_2a0 - 1 & uVar29) * 4);
        while (uVar31 != 0xffffffff) {
          pFVar38 = (FScriptContainerElement *)(local_2e8._0_8_ + (longlong)(int)uVar31 * 0x10);
          if (*(uint *)pFVar38 == uVar29) goto LAB_14439e33f;
          uVar31 = *(uint *)(pFVar38 + 8);
        }
      }
      pFVar38 = (FScriptContainerElement *)0x0;
LAB_14439e33f:
      pFVar39 = pFVar38 + 4;
      if (pFVar38 == (FScriptContainerElement *)0x0) {
        pFVar39 = (FScriptContainerElement *)0x0;
      }
      if (pFVar39 == (FScriptContainerElement *)0x0) {
        local_898.bHasDefaultBoneIndex = false;
        local_898.bBlendZeroInfluence = true;
        local_898._14_2_ = 0;
        local_578 = &local_8f0;
        local_898.WeightThreshold = 1;
        local_898.DefaultBoneIndex = 0;
        iStack_570 = 1;
        local_898.NormalizeType = Always;
        local_898.MaxWeightCount = 0xc;
        local_8f0.BoneIndex = 0;
        local_8f0.RawWeight = 0xffff;
        local_6f0.Array = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(pTVar37,0);
        local_808._12_4_ = uStack_56c;
        local_808.ArrayNum = iStack_570;
        local_6f8.Container = &local_6f0;
        local_6f0._12_4_ = uVar10;
        local_808.DataPtr = local_578;
        local_6f0.Index = uVar29;
        UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::
        SetBoneWeights<TArrayAttribute<int>_>(&local_6f8,&local_808,&local_898);
      }
      else {
        uVar31 = *(uint *)pFVar39;
        local_820 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel
                              ((TMeshUnboundedAttributeArraySet<int> *)TVar36.ArrayPtr,0);
        local_828 = &local_820;
        local_910.Data = (FScriptContainerElement *)0x0;
        local_908 = 0;
        local_814 = uVar10;
        local_818 = uVar31;
        pTVar21 = TAttributeArrayContainer<int>::Get(local_820,&local_398,uVar31);
        if ((pTVar21->ArrayNum < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                                ,0x89,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar21 = TAttributeArrayContainer<int>::Get(*local_828,&local_388,*(int *)(local_828 + 1));
        iVar12 = pTVar21->ArrayNum;
        if (((iVar12 < 0) ||
            (pTVar21 = TAttributeArrayContainer<int>::Get
                                 (*local_828,&local_378,*(int *)(local_828 + 1)), iVar40 = 0,
            pTVar21->ArrayNum < iVar12)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                                ,0x89,L""), iVar40 = 0, bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        for (; iVar40 != iVar12; iVar40 = iVar40 + 1) {
          pTVar21 = TAttributeArrayContainer<int>::Get
                              (*local_828,&local_368,*(int *)(local_828 + 1));
          local_954 = CONCAT22((short)pTVar21->DataPtr[iVar40],
                               (short)((uint)pTVar21->DataPtr[iVar40] >> 0x10));
          if (((local_910.Data <= (FScriptContainerElement *)&local_954) &&
              ((FScriptContainerElement *)&local_954 <
               local_910.Data + (longlong)local_908._4_4_ * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar30 = (int)local_908;
          if ((int)local_908 == local_908._4_4_) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x204,&local_910,(int *)((longlong)&local_908 + 4));
          }
          local_908 = CONCAT44(local_908._4_4_,iVar30 + 1);
          *(undefined4 *)(local_910.Data + (longlong)iVar30 * 4) = local_954;
        }
        iVar12 = (int)local_908;
        local_588 = (FBoneWeight *)local_910.Data;
        local_8a8.bHasDefaultBoneIndex = false;
        local_8a8.bBlendZeroInfluence = true;
        local_8a8._14_2_ = 0;
        local_8a8.NormalizeType = Always;
        local_8a8.MaxWeightCount = 0xc;
        local_8a8.WeightThreshold = 1;
        local_8a8.DefaultBoneIndex = 0;
        if (((int)local_908 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iStack_580 = iVar12;
        local_6d0.Array = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(pTVar37,0);
        local_4b8._12_4_ = uStack_57c;
        local_4b8.ArrayNum = iStack_580;
        local_6e0.Value = (int *)&local_6d0;
        local_6d0._12_4_ = uVar10;
        local_4b8.DataPtr = local_588;
        local_6d0.Index = uVar29;
        UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::
        SetBoneWeights<TArrayAttribute<int>_>
                  ((TBoneWeights<Internal::FAttributesRefAdapter> *)&local_6e0.Value,&local_4b8,
                   &local_8a8);
        if (local_910.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_910.Data);
        }
      }
      local_5f8.UnvisitedBitMask = local_5f8.UnvisitedBitMask & ~local_5f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5f8);
      TVar36.ArrayPtr = local_900.ArrayPtr;
    } while( true );
  }
  uVar29 = 0xffffffff;
  if (local_618.CurrentBitIndex < (local_618.Array)->NumBits) {
    uVar29 = local_618.CurrentBitIndex;
  }
  local_8f8.Array._0_4_ = uVar29;
  if (local_248.Pairs.Elements._8_4_ != local_248.Pairs.Elements._52_4_) {
    FVar24 = (ForElementType<FSetElementId>)&local_248.Pairs.Hash;
    if (local_248.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar24 = local_248.Pairs.Hash.SecondaryData;
    }
    uVar31 = *(uint *)((longlong)FVar24 + (ulonglong)(local_248.Pairs.HashSize - 1U & uVar29) * 4);
    while (uVar31 != 0xffffffff) {
      puVar23 = (uint *)((longlong)(int)uVar31 * 0x20 + local_248.Pairs.Elements._0_8_);
      if (*puVar23 == uVar29) {
        pTVar37 = (TMeshUnboundedAttributeArraySet<int> *)(puVar23 + 2);
        if (puVar23 == (uint *)0x0) {
          pTVar37 = (TMeshUnboundedAttributeArraySet<int> *)0x0;
        }
        if (pTVar37 != (TMeshUnboundedAttributeArraySet<int> *)0x0) {
          pTVar16 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this.ArrayPtr,0)
          ;
          pFVar19 = (FMeshDescription *)
                    TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar16,uVar29);
          local_8c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8c0.ArrayNum = 0;
          local_8c0.ArrayMax = 0;
          local_8b0 = pFVar19;
          RigApplicationHelpers::FindMatchingPositionVertexIndexes
                    ((TVector<float> *)pFVar19,&local_920,TVar36,fVar49,&local_8c0);
          TVar9.ArrayPtr = local_900.ArrayPtr;
          iVar12 = local_8c0.ArrayNum;
          fVar46 = 0.0;
          if (local_8c0.ArrayNum < 1) goto LAB_14439def2;
          local_928 = 0xffffffff;
          pFVar38 = local_8c0.AllocatorInstance.Data + (longlong)local_8c0.ArrayNum * 4;
          FVar28.Data = local_8c0.AllocatorInstance.Data;
          goto LAB_14439ddb5;
        }
        break;
      }
      uVar31 = puVar23[6];
    }
  }
  goto LAB_14439e171;
LAB_14439ddb5:
  if (local_8c0.ArrayNum != iVar12) {
    local_958 = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_958);
  }
  if (FVar28.Data != pFVar38) {
    uVar29 = *(uint *)FVar28.Data;
    if (local_298.Pairs.Elements._8_4_ == local_298.Pairs.Elements._52_4_) {
LAB_14439de9b:
      FVar28.Data = FVar28.Data + 4;
    }
    else {
      FVar24 = (ForElementType<FSetElementId>)&local_298.Pairs.Hash;
      if (local_298.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar24 = local_298.Pairs.Hash.SecondaryData;
      }
      uVar31 = *(uint *)((longlong)FVar24 + (ulonglong)(local_298.Pairs.HashSize - 1U & uVar29) * 4)
      ;
      if (uVar31 == 0xffffffff) goto LAB_14439de9b;
      do {
        puVar23 = (uint *)((longlong)(int)uVar31 * 0x20 + local_298.Pairs.Elements._0_8_);
        if (*puVar23 == uVar29) {
          pTVar15 = (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)(puVar23 + 2);
          if (puVar23 == (uint *)0x0) {
            pTVar15 = (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar15 != (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)0x0) {
            local_498.ArrayPtr = pFVar2;
            local_488.ArrayPtr = pFVar26;
            local_498._8_8_ = uVar8;
            local_488._8_8_ = uVar7;
            fVar47 = RigApplicationHelpers::GetSmallestDeltaBetweenTriangleLists
                               (pTVar15,(TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)
                                        pTVar37,&local_488,&local_498,TVar9,this);
            if ((local_928 == 0xffffffff) || (fVar47 < fVar46)) {
              fVar46 = fVar47;
              local_928 = uVar29;
            }
          }
          goto LAB_14439de9b;
        }
        uVar31 = puVar23[6];
      } while (uVar31 != 0xffffffff);
      FVar28.Data = FVar28.Data + 4;
    }
    goto LAB_14439ddb5;
  }
  TVar36.ArrayPtr = local_900.ArrayPtr;
  pFVar19 = local_8b0;
  if (local_928 == 0xffffffff) {
LAB_14439def2:
    iVar12 = 0;
    fVar47 = 0.0;
    local_924 = 0xffffffff;
    local_8d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    auVar42._0_8_ = (double)local_7d8._8_8_ * (double)local_7d8._8_8_;
    auVar42._8_8_ = 0;
    local_8d8.ArrayNum = 0;
    local_8d8.ArrayMax = 0;
    auVar43._8_8_ = 0;
    auVar43._0_8_ =
         (double)local_7d8._0_8_ * (double)local_7d8._0_8_ + auVar42._0_8_ + local_7c8 * local_7c8;
    auVar43 = sqrtpd(auVar42,auVar43);
    fVar46 = (float)auVar43._0_8_ * fVar48;
    if (fVar46 <= fVar44) {
      fVar46 = fVar44;
    }
    do {
      local_4f8 = (double)fVar46;
      local_738.OutNearestVertices = &local_8d8;
      local_518._s_0.X = (double)(((TVector<float>_u_0 *)&pFVar19->Elements)->_s_0).X;
      local_518._s_0.Y = (double)(((TVector<float>_u_0 *)&pFVar19->Elements)->_s_0).Y;
      local_518._s_0.Z = (double)(((TVector<float>_u_0 *)&pFVar19->Elements)->_s_0).Z;
      local_518._s_0.W = 0.0;
      local_4e0 = 0;
      local_4f0 = local_4f8;
      local_4e8 = local_4f8;
      TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
      ::
      FindElementsWithBoundsTestInternal<_RigApplicationHelpers::FindNearestVertexIndices_::__l4::<lambda_1>_>
                ((TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
                  *)&local_7f8._s_0,0,(FOctreeNodeContext *)&local_7f8._s_0,
                 (FBoxCenterAndExtent *)&local_518._s_0,&local_738);
      iVar40 = local_8d8.ArrayNum;
      if (local_8d8.ArrayNum != 0) break;
      iVar30 = iVar12 + 1;
      fVar46 = ((float)iVar12 + fVar6) * fVar50 * (float)auVar43._0_8_;
      if (fVar46 <= fVar44) {
        fVar46 = fVar44;
      }
      iVar12 = iVar30;
    } while (iVar30 < 5);
    pFVar38 = local_8d8.AllocatorInstance.Data + (longlong)local_8d8.ArrayNum * 0x10;
    FVar28.Data = local_8d8.AllocatorInstance.Data;
    while( true ) {
      if (local_8d8.ArrayNum != iVar40) {
        local_957 = 0;
        `TCheckedPointerIterator<RigApplicationHelpers::FVertexInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_957);
      }
      if (FVar28.Data == pFVar38) break;
      uVar29 = *(uint *)(FVar28.Data + 0xc);
      if (local_298.Pairs.Elements._8_4_ == local_298.Pairs.Elements._52_4_) {
LAB_14439e108:
        FVar28.Data = FVar28.Data + 0x10;
      }
      else {
        FVar24 = (ForElementType<FSetElementId>)&local_298.Pairs.Hash;
        if (local_298.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar24 = local_298.Pairs.Hash.SecondaryData;
        }
        uVar31 = *(uint *)((longlong)FVar24 +
                          (ulonglong)(local_298.Pairs.HashSize - 1U & uVar29) * 4);
        if (uVar31 == 0xffffffff) goto LAB_14439e108;
        do {
          puVar23 = (uint *)((longlong)(int)uVar31 * 0x20 + local_298.Pairs.Elements._0_8_);
          if (*puVar23 == uVar29) {
            pTVar15 = (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)(puVar23 + 2);
            if (puVar23 == (uint *)0x0) {
              pTVar15 = (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)0x0;
            }
            if (pTVar15 != (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)0x0) {
              local_4d8.ArrayPtr = pFVar2;
              local_4c8.ArrayPtr = pFVar26;
              local_4d8._8_8_ = uVar8;
              local_4c8._8_8_ = uVar7;
              fVar46 = RigApplicationHelpers::GetSmallestDeltaBetweenTriangleLists
                                 (pTVar15,(TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)
                                          pTVar37,&local_4c8,&local_4d8,TVar36,this);
              if ((local_924 == 0xffffffff) || (fVar46 < fVar47)) {
                fVar47 = fVar46;
                local_924 = uVar29;
              }
            }
            goto LAB_14439e108;
          }
          uVar31 = puVar23[6];
        } while (uVar31 != 0xffffffff);
        FVar28.Data = FVar28.Data + 0x10;
      }
    }
    if (local_924 != 0xffffffff) {
      local_8c4 = (uint)local_8f8.Array;
      local_598 = &local_8c4;
      local_590 = &local_924;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)local_2e8,&local_748,(bool *)&local_598);
    }
    if (local_8d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.AllocatorInstance.Data);
    }
  }
  else {
    local_8c8 = (uint)local_8f8.Array;
    local_5a8 = &local_8c8;
    local_5a0 = &local_928;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_2e8,&local_6e0,(bool *)&local_5a8);
  }
  if (local_8c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.AllocatorInstance.Data);
  }
LAB_14439e171:
  local_618.UnvisitedBitMask = local_618.UnvisitedBitMask & ~local_618._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_618);
  TVar36.ArrayPtr = local_900.ArrayPtr;
  goto LAB_14439dca0;
}

// ConvertHardEdgesToSmoothMasks @ 14439f5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FSkeletalMeshOperations::ConvertHardEdgesToSmoothMasks
          (FMeshDescription *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  FEdgeID *pFVar1;
  FTriangleID *pFVar2;
  FEdgeID FVar3;
  code *pcVar4;
  undefined8 uVar5;
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *this;
  FMeshDescription *pFVar6;
  FTriangleID *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FMeshElementContainer *pFVar13;
  FAttributesSetEntry *pFVar14;
  ForElementType<FSetElementId> FVar15;
  FTriangleID *pFVar16;
  uint uVar17;
  longlong lVar18;
  FMeshAttributeArraySetBase *pFVar19;
  FMeshAttributeArraySetBase *pFVar20;
  int iVar21;
  ForElementType<FSetElementId> FVar22;
  longlong lVar23;
  FEdgeID *pFVar24;
  undefined1 auStack_198 [32];
  FTriangleID *local_178;
  FTriangleID *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  ForAnyElementType local_148;
  undefined8 local_140;
  FTriangleID local_138;
  FTriangleID local_134;
  int local_130;
  uint local_12c;
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *local_128;
  TElementIDs local_120;
  FMeshAttributeArraySetBase *local_118;
  FMeshDescription *local_110;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_108;
  FTriangleID local_100 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  TArrayView<FEdgeID,int> local_d8;
  TArrayView<FTriangleID_const_,int> local_c8;
  TConstIterator local_b8;
  TSet<FTriangleID,DefaultKeyFuncs<FTriangleID,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_110 = param_1;
  local_108 = param_2;
  pFVar13 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (param_2,(pFVar13->BitArray).NumBits - pFVar13->NumHoles,Default);
  iVar12 = 1;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_130 = 1;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  pFVar13 = FMeshElementChannels::Get(param_1->EdgeElements,0);
  pFVar14 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar13->Attributes,MeshAttribute::Edge::IsHard);
  if (((pFVar14 == (FAttributesSetEntry *)0x0) ||
      (local_118 = (pFVar14->Ptr).Ptr, local_118->Type != 5)) || (local_118->Extent != 1)) {
    local_118 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar20 = local_118;
  local_120.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_120,(TConstIterator *)&local_f8);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_120,&local_b8);
  do {
    if ((local_f8.CurrentBitIndex == local_b8.Iterator.CurrentBitIndex) &&
       (local_f8.Array == local_b8.Iterator.Array)) goto LAB_14439fb7d;
    local_134 = (FTriangleID)0xffffffff;
    if (local_f8.CurrentBitIndex < (local_f8.Array)->NumBits) {
      local_134 = (FTriangleID)local_f8.CurrentBitIndex;
    }
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_98.Hash.SecondaryData;
      }
      for (iVar9 = *(int *)((longlong)FVar15 +
                           (ulonglong)(local_98.HashSize - 1U & (uint)local_134) * 4); iVar9 != -1;
          iVar9 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar9 * 0xc)) {
        if (*(FTriangleID *)(local_98.Elements._0_8_ + (longlong)iVar9 * 0xc) == local_134)
        goto LAB_14439fb40;
      }
    }
    if (local_148.Data <= &local_134) {
      if (&local_134 < (FTriangleID *)(local_148.Data + (longlong)local_140._4_4_ * 4)) {
        local_160 = (longlong)(int)local_140;
        local_158 = 4;
        local_178 = &local_134;
        local_170 = (FTriangleID *)local_148.Data;
        local_168 = (longlong)local_140._4_4_;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    iVar9 = (int)local_140;
    if ((int)local_140 == local_140._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_148,(int *)((longlong)&local_140 + 4));
    }
    iVar21 = iVar9 + 1;
    local_140 = CONCAT44(local_140._4_4_,iVar21);
    *(FTriangleID *)(local_148.Data + (longlong)iVar9 * 4) = local_134;
    bVar8 = iVar21 == 0;
    if (!bVar8) {
      local_128 = &param_1->TriangleEdges;
      pFVar19 = pFVar20;
      do {
        this = local_128;
        if (bVar8 || iVar21 < 0) {
          local_170 = (FTriangleID *)(longlong)iVar21;
          local_178 = (FTriangleID *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar21 = (int)local_140;
        }
        iVar9 = iVar21 + -1;
        uVar11 = *(uint *)(local_148.Data + (longlong)iVar9 * 4);
        iVar10 = (iVar21 - iVar9) + -1;
        local_12c = uVar11;
        if (iVar10 != 0) {
          memmove(local_148.Data + (longlong)iVar9 * 4,local_148.Data + (longlong)iVar9 * 4 + 4,
                  (longlong)iVar10 << 2);
          iVar21 = (int)local_140;
        }
        local_140 = CONCAT44(local_140._4_4_,iVar21 + -1);
        TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[](this,&local_d8,uVar11);
        pFVar24 = local_d8.DataPtr;
        lVar18 = (longlong)local_d8.ArrayNum;
        uVar17 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar17 = ~uVar11 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_178 = (FTriangleID *)(longlong)(int)uVar11,
           local_170 = (FTriangleID *)(longlong)param_2->ArrayNum,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) = iVar12;
        TSet<FTriangleID,DefaultKeyFuncs<FTriangleID,0>,FDefaultSetAllocator>::
        Emplace<FTriangleID_const_&>(&local_98,local_100,(bool *)&local_12c);
        pFVar6 = local_110;
        pFVar1 = pFVar24 + lVar18;
        pFVar20 = pFVar19;
        if (pFVar24 != pFVar1) {
          do {
            FVar3 = *pFVar24;
            if ((int)pFVar19[2].Type < 1) {
              local_178 = (FTriangleID *)0x0;
              local_170 = (FTriangleID *)(longlong)(int)pFVar19[2].Type;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar20 = pFVar19 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar19[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar20 = (FMeshAttributeArraySetBase *)pFVar19[2]._padding_;
            }
            uVar17 = (int)FVar3 * pFVar20->NumElements;
            uVar11 = 0;
            if ((int)uVar17 < (int)pFVar20->Type) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if (uVar11 == 0) {
              local_178 = (FTriangleID *)(longlong)(int)uVar17;
              local_170 = (FTriangleID *)(longlong)(int)pFVar20->Type;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar7 = local_170;
            if (*(char *)((longlong)(int)uVar17 + pFVar20->_padding_) == '\0') {
              FMeshElementIndexer::Find<FTriangleID>
                        (&pFVar6->EdgeToTriangles,&local_c8,(int)FVar3,0);
              pFVar2 = local_c8.DataPtr + local_c8.ArrayNum;
              pFVar7 = local_170;
              lVar18 = local_168;
              local_170 = (FTriangleID *)local_148.Data;
              uVar5 = local_140;
              lVar23 = local_98.Elements._0_8_;
              FVar15 = local_98.Hash.SecondaryData;
              for (pFVar16 = local_c8.DataPtr; local_168 = lVar18,
                  local_148.Data = (FScriptContainerElement *)local_170, local_140 = uVar5,
                  pFVar16 != pFVar2; pFVar16 = pFVar16 + 1) {
                local_138 = *pFVar16;
                if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
                  FVar22 = (ForElementType<FSetElementId>)&local_98.Hash;
                  if (FVar15 != (ForElementType<FSetElementId>)0x0) {
                    FVar22 = FVar15;
                  }
                  for (iVar12 = *(int *)((longlong)FVar22 +
                                        (ulonglong)(local_98.HashSize - 1U & (uint)local_138) * 4);
                      iVar12 != -1; iVar12 = *(int *)(lVar23 + 4 + (longlong)iVar12 * 0xc)) {
                    if (*(FTriangleID *)(lVar23 + (longlong)iVar12 * 0xc) == local_138)
                    goto LAB_14439faf5;
                  }
                }
                if (local_170 <= &local_138) {
                  local_140._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
                  local_168 = (longlong)local_140._4_4_;
                  if (&local_138 < local_170 + local_168) {
                    local_140._0_4_ = (int)uVar5;
                    local_160 = (longlong)(int)local_140;
                    local_158 = 4;
                    local_178 = &local_138;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    pFVar7 = local_170;
                    lVar18 = local_168;
                    if (bVar8) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                }
                local_168 = lVar18;
                local_170 = pFVar7;
                iVar12 = (int)local_140;
                if ((int)local_140 == local_140._4_4_) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_148,(int *)((longlong)&local_140 + 4));
                }
                local_140 = CONCAT44(local_140._4_4_,iVar12 + 1);
                *(FTriangleID *)(local_148.Data + (longlong)iVar12 * 4) = local_138;
                lVar23 = local_98.Elements._0_8_;
                FVar15 = local_98.Hash.SecondaryData;
                pFVar7 = local_170;
LAB_14439faf5:
                local_170 = pFVar7;
                pFVar7 = local_170;
                lVar18 = local_168;
                local_170 = (FTriangleID *)local_148.Data;
                uVar5 = local_140;
              }
            }
            local_170 = pFVar7;
            pFVar24 = pFVar24 + 1;
            pFVar20 = local_118;
            iVar12 = local_130;
          } while (pFVar24 != pFVar1);
        }
        bVar8 = (int)local_140 == 0;
        param_1 = local_110;
        pFVar19 = pFVar20;
        param_2 = local_108;
        iVar21 = (int)local_140;
      } while (!bVar8);
    }
    iVar12 = iVar12 * 2;
    local_130 = iVar12;
    if (iVar12 == 0) {
      pFVar13 = FMeshElementChannels::Get(param_1->TriangleElements,0);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (param_2,(pFVar13->BitArray).NumBits - pFVar13->NumHoles,Default);
      FStaticMeshOperations::ConvertHardEdgesToSmoothGroup(param_1,param_2);
LAB_14439fb7d:
      if ((FTriangleID *)local_148.Data != (FTriangleID *)0x0) {
        FMemory::Free(local_148.Data);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FTriangleID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTriangleID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
LAB_14439fb40:
    local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
  } while( true );
}

// CopySkinWeightAttributeFromMesh @ 14439fbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh
          (FMeshDescription *param_1,FMeshDescription *param_2,FName param_3,FName param_4,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  FMeshElementContainer *pFVar8;
  FName FVar9;
  FAttributesSetEntry *pFVar10;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar11;
  TAttributeArrayContainer<int> *this;
  TArrayView<int,int> *this_00;
  int *piVar12;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar13;
  int iVar14;
  FScriptContainerElement *_Dst;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar15;
  longlong lVar16;
  TMeshUnboundedAttributeArraySet<int> *this_01;
  uint uVar17;
  uint uVar18;
  undefined1 auStackY_348 [32];
  FIdentityFunctor local_2f8;
  undefined4 local_2f0 [2];
  ForAnyElementType local_2e8;
  int local_2e0 [2];
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_2d8;
  FBoneWeightsSettings local_2d0;
  FMeshAttributeArraySetBase *local_2c0;
  TElementIDs local_2b8;
  TMeshUnboundedAttributeArraySet<int> *local_2b0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_2a0;
  FMeshAttributeArraySetBase *local_298;
  code *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  TArrayView<std::nullptr_t,int> local_268;
  code *local_258;
  undefined8 **local_250;
  FMeshDescriptionTriangleMeshAdapter *local_248;
  FMeshAttributeArraySetBase **local_240;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> **local_238;
  undefined8 *local_230;
  FMeshDescription *local_228;
  FMeshAttributeArraySetBase **local_220;
  ForAnyElementType *local_218;
  FMeshDescriptionTriangleMeshAdapter **local_210;
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  FMeshDescription *local_1f8;
  FSkeletalMeshAttributesShared local_1f0;
  TConstIterator local_1d8;
  TArrayView<int,int> local_1b8;
  TArrayView<int,int> local_1a8;
  FMeshDescriptionTriangleMeshAdapter local_198;
  FSkeletalMeshAttributes local_148;
  undefined1 local_108 [48];
  undefined **local_d8;
  code *local_d0;
  undefined8 local_c0;
  double local_b8;
  TDynamicVector<int,512> local_b0;
  TDynamicVector<UE::Math::TVector<double>,512> local_98;
  TDynamicVector<UE::Math::TVector<double>,512> local_80;
  TDynamicVector<int,512> local_68;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_1f8 = param_1;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_1f0,param_1);
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_148,param_2);
  pFVar8 = FMeshElementChannels::Get((local_1f0.MeshDescriptionShared)->VertexElements,0);
  FVar9 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_208);
  pFVar10 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar8->Attributes,*(FName *)FVar9);
  if (((pFVar10 == (FAttributesSetEntry *)0x0) ||
      (local_2c0 = (pFVar10->Ptr).Ptr, local_2c0->Type != 4)) || (local_2c0->Extent != 0)) {
    local_2c0 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_148._padding_ + 0x50),0);
  FVar9 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_200);
  pFVar10 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar8->Attributes,*(FName *)FVar9);
  if (((pFVar10 == (FAttributesSetEntry *)0x0) ||
      (local_2b0 = (TMeshUnboundedAttributeArraySet<int> *)(pFVar10->Ptr).Ptr,
      *(uint *)&local_2b0->_padding_ != 4)) || (*(uint *)((longlong)&local_2b0->_padding_ + 4) != 0)
     ) {
    local_2b0 = (TMeshUnboundedAttributeArraySet<int> *)0x0;
  }
  this_01 = local_2b0;
  pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_148._padding_ + 0x50),0);
  pFVar10 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar8->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar10 == (FAttributesSetEntry *)0x0) ||
      (local_298 = (pFVar10->Ptr).Ptr, local_298->Type != 1)) || (local_298->Extent != 1)) {
    local_298 = (FMeshAttributeArraySetBase *)0x0;
  }
  if ((local_2c0 == (FMeshAttributeArraySetBase *)0x0) ||
     (this_01 == (TMeshUnboundedAttributeArraySet<int> *)0x0)) {
    bVar4 = false;
  }
  else {
    FMeshDescriptionTriangleMeshAdapter::FMeshDescriptionTriangleMeshAdapter(&local_198,param_1);
    local_108._0_8_ = &___7__TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__6B_;
    local_b8 = __real_3e45798ee2308c3a;
    local_d8 = &
               ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_d0 = `UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
               MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_108._32_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_108._16_8_ = 0;
    local_108._24_4_ = 3;
    local_c0 = 0;
    local_b0.CurBlock = 0;
    local_b0.CurBlockUsed = 0;
    local_b0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Blocks.ArrayNum = 0;
    local_b0.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_b0);
    local_98.CurBlock = 0;
    local_98.CurBlockUsed = 0;
    local_98.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Blocks.ArrayNum = 0;
    local_98.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_98);
    local_80.CurBlock = 0;
    local_80.CurBlockUsed = 0;
    local_80.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Blocks.ArrayNum = 0;
    local_80.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_80);
    local_68.CurBlock = 0;
    local_68.CurBlockUsed = 0;
    local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Blocks.ArrayNum = 0;
    local_68.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
    local_108._8_8_ = &local_198;
    local_50._0_4_ = -1;
    local_50._4_4_ = -1;
    local_108._16_8_ = 0;
    UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::BuildTopDown
              ((TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *)local_108,false);
    local_2a0 = param_5;
    local_248 = &local_198;
    local_240 = &local_2c0;
    local_238 = &local_2a0;
    local_108._16_8_ = 1;
    local_2e8.Data = (FScriptContainerElement *)0x0;
    local_2e0[0] = 0;
    local_2e0[1] = 0;
    pFVar8 = FMeshElementChannels::Get(param_2->VertexElements,0);
    uVar18 = (pFVar8->BitArray).NumBits;
    if (local_2e0[0] < (int)uVar18) {
      iVar14 = uVar18 - local_2e0[0];
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,iVar14,&local_2e8,local_2e0,local_2e0 + 1);
      DefaultConstructItems<UE::AnimationCore::FBoneWeights,int>
                (local_2e8.Data + (longlong)iVar6 * 0x40,iVar14);
    }
    else {
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((int)uVar18 < local_2e0[0]) {
        uVar17 = local_2e0[0] - uVar18;
        if (((int)(uVar17 | uVar18) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (uVar17 != 0) {
          _Dst = local_2e8.Data + (longlong)(int)uVar18 * 0x40;
          DestructItems<UE::AnimationCore::FBoneWeights,int>((FBoneWeights *)_Dst,uVar17);
          iVar6 = (local_2e0[0] - uVar18) - uVar17;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar17 * 0x40,(longlong)iVar6 << 6);
          }
          iVar6 = local_2e0[0] - uVar17;
          local_2e0[0] = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,&local_2e8,iVar6,local_2e0 + 1);
        }
      }
    }
    local_230 = (undefined8 *)local_108;
    local_220 = &local_298;
    local_218 = &local_2e8;
    local_258 = UE::Core::Private::Function::
                TFunctionRefCaller<`FSkeletalMeshOperations::CopySkinWeightAttributeFromMesh'::__l2::<lambda_3>,void,int>
                ::Call;
    local_250 = &local_230;
    local_268.DataPtr = (void **)0x0;
    local_268.ArrayNum = 0;
    local_228 = param_2;
    local_210 = &local_248;
    pFVar8 = FMeshElementChannels::Get(param_2->VertexElements,0);
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(pFVar8->BitArray).NumBits,1,
               (TFunctionRef<void___cdecl(int)> *)&local_258,(<lambda_1>)local_2f8,None,&local_268);
    local_2b8.Array = &FMeshElementChannels::Get(param_2->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_2b8,(TConstIterator *)&local_288);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_2b8,&local_1d8);
    while ((local_288.CurrentBitIndex != local_1d8.Iterator.CurrentBitIndex ||
           (local_288.Array != local_1d8.Iterator.Array))) {
      if (local_288.CurrentBitIndex < (local_288.Array)->NumBits) {
        uVar17 = 0;
        if (local_288.CurrentBitIndex < local_2e0[0]) {
          uVar17 = (uint)~local_288.CurrentBitIndex >> 0x1f;
        }
        uVar18 = local_288.CurrentBitIndex;
        if (uVar17 == 0) goto LAB_1443a0093;
      }
      else {
        uVar18 = 0xffffffff;
LAB_1443a0093:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FVar15 = (ForElementType<UE::AnimationCore::FBoneWeight>)
               ((longlong)(int)uVar18 * 0x40 + (longlong)local_2e8.Data);
      if (*(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x38))->
                  InlineData == 0) {
        FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30);
        local_2d0.bHasDefaultBoneIndex = false;
        local_2d0.bBlendZeroInfluence = true;
        local_2d0._14_2_ = 0;
        local_2d0.MaxWeightCount = 0xc;
        FVar11 = FVar15;
        if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar11 = FVar13;
        }
        local_2d0.WeightThreshold = 1;
        local_2d0.DefaultBoneIndex = 0;
        local_2d0.NormalizeType = Always;
        local_2f0[0] = 0xffff0000;
        local_2d8.Container =
             (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
              *)FVar15;
        if ((ulonglong)FVar11 <= local_2f0) {
          FVar11 = FVar15;
          if (FVar13 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar11 = FVar13;
          }
          if ((local_2f0 <
               (undefined4 *)((longlong)FVar11 + (longlong)*(int *)((longlong)FVar15 + 0x3c) * 4))
             && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar6 = *(int *)((longlong)FVar15 + 0x38);
        if (iVar6 == *(int *)((longlong)FVar15 + 0x3c)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                            (0x204,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar15,
                             (int *)((longlong)FVar15 + 0x3c));
        }
        *(int *)((longlong)FVar15 + 0x38) = iVar6 + 1;
        FVar13 = FVar15;
        if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30) !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30);
        }
        *(undefined4 *)((longlong)FVar13 + (longlong)iVar6 * 4) = local_2f0[0];
        local_290 = UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate;
        FVar13 = FVar15;
        if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30) !=
            (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
          FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30);
        }
        AlgoImpl::
        IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_>
                  ((FBoneWeight *)FVar13,*(int *)((longlong)FVar15 + 0x38),local_2f8,
                   (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>
                    )&local_290);
        UE::AnimationCore::
        TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
        ::NormalizeWeights(&local_2d8,Always);
        bVar4 = UE::AnimationCore::
                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                ::CullWeights(&local_2d8,&local_2d0);
        if (bVar4) {
          UE::AnimationCore::
          TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
          ::NormalizeWeights(&local_2d8,Always);
        }
      }
      this = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(this_01,0);
      TAttributeArrayContainer<int>::SetElementSize
                (this,&local_1b8,uVar18,*(int *)((longlong)FVar15 + 0x38),true,false);
      iVar6 = *(int *)((longlong)FVar15 + 0x38);
      uVar17 = 0;
      if (0 < iVar6) {
        lVar16 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar17 < iVar6) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FVar13 = FVar15;
          if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30) !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar13 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar15 + 0x30);
          }
          uVar1 = *(undefined2 *)(lVar16 + (longlong)FVar13);
          uVar2 = *(undefined2 *)(lVar16 + 2 + (longlong)FVar13);
          this_00 = TAttributeArrayContainer<int>::Get(this,&local_1a8,uVar18);
          piVar12 = TArrayView<int,int>::operator[](this_00,uVar17);
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 4;
          *piVar12 = CONCAT22(uVar1,uVar2);
          iVar6 = *(int *)((longlong)FVar15 + 0x38);
          this_01 = local_2b0;
        } while ((int)uVar17 < iVar6);
      }
      local_288.UnvisitedBitMask = local_288.UnvisitedBitMask & ~local_288._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
    }
    bVar4 = true;
    DestructItems<UE::AnimationCore::FBoneWeights,int>((FBoneWeights *)local_2e8.Data,local_2e0[0]);
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
    UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::
    ~TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>
              ((TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *)local_108);
  }
  return bVar4;
}

// FixVertexInstanceStructure @ 1443a1a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FSkeletalMeshOperations::FixVertexInstanceStructure
          (FMeshDescription *param_1,FMeshDescription *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  float fVar2;
  FVertexID FVar3;
  undefined4 uVar4;
  FName FVar5;
  FMeshAttributeArraySetBase *pFVar6;
  TVector2<float>_u_0_s_0 TVar7;
  ForElementType<TAttributeArrayContainer<int>_> FVar8;
  code *pcVar9;
  undefined8 uVar10;
  FMeshDescription *pFVar11;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong *plVar13;
  TMeshUnboundedAttributeArraySet<int> *pTVar14;
  bool bVar15;
  int iVar16;
  FVertexInstanceID FVar17;
  FPolygonID FVar18;
  uint uVar19;
  FSourceGeometryPartID FVar20;
  FMeshElementContainer *pFVar21;
  FMeshElementContainer *pFVar22;
  TMeshAttributeArrayBase<FName> *pTVar23;
  FName *pFVar24;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar25;
  TVector<float> *pTVar26;
  TArrayView<int,int> *pTVar27;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar28;
  TMeshAttributeArrayBase<FVertexID> *this;
  FVertexID *pFVar29;
  TMeshAttributeArrayBase<float> *pTVar30;
  float *pfVar31;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar32;
  TVector4<float> *pTVar33;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar34;
  TVector2<float>_u_0_s_0 *pTVar35;
  TVector2<float>_u_0 *pTVar36;
  TAttributeArrayContainer<int> *pTVar37;
  byte bVar38;
  longlong lVar39;
  int iVar40;
  uint uVar41;
  ulonglong uVar42;
  FVertexID *pFVar43;
  ForElementType<TAttributeArrayContainer<int>_> this_00;
  int iVar44;
  FPolygonID FVar45;
  ulonglong uVar46;
  int *piVar47;
  uint uVar48;
  uint uVar49;
  FMeshDescription *pFVar50;
  ForAnyElementType FVar51;
  ForElementType<FSetElementId> FVar52;
  uint *puVar53;
  ForElementType<unsigned_int> FVar54;
  TMeshElementContainer<FSourceGeometryPartID> *pTVar55;
  int iVar56;
  FPolygonGroupID FVar57;
  FMeshAttributeArraySetBase *pFVar58;
  bool bVar59;
  undefined1 auStackY_638 [32];
  undefined1 local_5e7;
  undefined1 local_5e6 [2];
  FBoneWeight local_5e4;
  FPolygonID local_5e0;
  ForAnyElementType local_5d8;
  undefined8 local_5d0;
  ForAnyElementType local_5c8;
  undefined8 local_5c0;
  FMeshDescription *local_5b8;
  int local_5b0;
  int local_5ac;
  ForAnyElementType local_5a8;
  int local_5a0 [2];
  undefined1 local_598 [8];
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_590;
  uint local_580;
  FPolygonGroupID local_57c;
  FMeshDescription *local_578;
  int local_570 [2];
  FBoneWeightsSettings local_568;
  TArrayView<FTriangleID_const_,int> local_558;
  TAttributeArrayContainer<int> *local_548;
  int iStack_540;
  undefined4 uStack_53c;
  int local_538;
  uint uStack_534;
  ForElementType<unsigned_int> FStack_530;
  undefined4 local_528;
  uint uStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  int local_518;
  uint uStack_514;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_510;
  undefined4 local_508;
  uint uStack_504;
  int iStack_500;
  undefined4 uStack_4fc;
  longlong local_4f8;
  TArrayView<FTriangleID_const_,int> local_4f0;
  TElementIDs local_4e0;
  TArrayView<int,int> local_4d8;
  TAttributeArrayContainer<int> **local_4c8;
  TAttributeArrayContainer<int> *local_4c0;
  undefined8 uStack_4b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b0;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  TArrayView<int,int> local_480;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_470;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_448;
  TPairInitializer<FVertexID_const_&,FVertexID_const_&> local_428;
  TArrayAttribute<int> local_418;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_408;
  longlong *local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f8;
  undefined8 uStack_3d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d0;
  FBoneWeight *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  int *local_398;
  int *local_390;
  FVertexInstanceID *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  TArrayView<FVertexInstanceID_const_,int> local_378 [2];
  uint local_358;
  uint uStack_354;
  undefined1 local_348 [24];
  longlong local_330;
  FMeshElementChannels *local_318;
  TMeshAttributeArraySet<FName> *local_310;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_308;
  TMeshUnboundedAttributeArraySet<int> *local_300;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_2f8;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_2f0;
  TMeshAttributeArraySet<float> *local_2e8;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *local_2e0;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_2d8;
  TMeshAttributeArraySet<FName> *local_2d0;
  TMeshAttributeArraySet<FName> *local_2c8;
  TMeshUnboundedAttributeArraySet<int> *local_2c0;
  int local_2b8;
  int local_2b0;
  int local_2ac;
  void *local_2a8;
  void *local_298;
  int local_290;
  void *local_288;
  int local_280;
  longlong *local_278;
  longlong lStack_270;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  uint uStack_260;
  int iStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  int local_250;
  undefined4 uStack_24c;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_248;
  FSkeletalMeshAttributes local_238;
  TMeshAttributeArraySet<FName> *local_200;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_1f8;
  TMeshUnboundedAttributeArraySet<int> *local_1f0;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_1e8;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_1e0;
  TMeshAttributeArraySet<float> *local_1d8;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *local_1d0;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_1c8;
  TMeshAttributeArraySet<FName> *local_1c0;
  TMeshAttributeArraySet<FName> *local_1b8;
  TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_> local_1b0;
  void *local_198;
  void *local_188;
  int local_180;
  void *local_178;
  int local_170;
  longlong local_168;
  FMeshElementContainer *pFStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  TConstIterator local_148;
  TArrayView<int,int> local_128;
  TArrayView<int,int> local_118;
  TArrayView<int,int> local_108;
  TArrayView<int,int> local_f8;
  TArrayView<int,int> local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_638;
  bVar59 = -1 < CpuChannel->Enabled;
  local_5b8 = param_2;
  local_578 = param_1;
  local_470 = param_4;
  local_408 = param_3;
  if (bVar59) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1150,"FixVertexInstanceStructure",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
               ,0x47e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1150);
  }
  bVar15 = FMeshDescription::IsEmpty(param_2);
  if (bVar15) {
    `FSkeletalMeshOperations::FixVertexInstanceStructure'::__l2::FMeshAttributesHelper::
    FMeshAttributesHelper(local_348,param_1,(FMeshDescription *)0x0);
    `FSkeletalMeshOperations::FixVertexInstanceStructure'::__l2::FMeshAttributesHelper::
    FMeshAttributesHelper(&local_238,param_2,param_1);
    pFVar21 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    iVar44 = (pFVar21->BitArray).NumBits - pFVar21->NumHoles;
    pFVar21 = FMeshElementChannels::Get(param_1->VertexElements,0);
    iVar56 = (pFVar21->BitArray).NumBits - pFVar21->NumHoles;
    lVar39 = local_310->_padding_;
    pFVar21 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
    pFVar22 = FMeshElementChannels::Get(local_5b8->PolygonGroupElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar21->BitArray,((pFVar22->BitArray).NumBits - pFVar22->NumHoles) + (int)lVar39);
    pFVar21 = FMeshElementChannels::Get(param_1->PolygonElements,0);
    iVar16 = (pFVar21->BitArray).NumBits;
    iVar40 = pFVar21->NumHoles;
    pFVar21 = FMeshElementChannels::Get(local_5b8->PolygonElements,0);
    pFVar22 = FMeshElementChannels::Get(local_5b8->PolygonElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar21->BitArray,
               ((pFVar22->BitArray).NumBits - pFVar22->NumHoles) + (iVar16 - iVar40));
    pFVar50 = local_5b8;
    pFVar21 = FMeshElementChannels::Get(local_5b8->TriangleElements,0);
    pFVar22 = FMeshElementChannels::Get(pFVar50->TriangleElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar21->BitArray,((pFVar22->BitArray).NumBits - pFVar22->NumHoles) + iVar44);
    pFVar21 = FMeshElementChannels::Get(pFVar50->VertexInstanceElements,0);
    pFVar22 = FMeshElementChannels::Get(pFVar50->VertexInstanceElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar21->BitArray,((pFVar22->BitArray).NumBits - pFVar22->NumHoles) + iVar44 * 3);
    pFVar21 = FMeshElementChannels::Get(pFVar50->VertexElements,0);
    pFVar22 = FMeshElementChannels::Get(pFVar50->VertexElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar21->BitArray,((pFVar22->BitArray).NumBits - pFVar22->NumHoles) + iVar56);
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(local_1c8,local_2b0);
    local_8c = 0x80;
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_88 = 0xffffffff;
    TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
               *)local_b8,iVar56);
    uVar46 = 0;
    if ((int)local_310->_padding_ != 0) {
      do {
        pFVar21 = FMeshElementChannels::Get(pFVar50->PolygonGroupElements,0);
        iVar16 = FMeshElementContainer::Add(pFVar21);
        pTVar23 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_310,0);
        pFVar24 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar23,(int)uVar46);
        FVar5 = *pFVar24;
        pTVar23 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_200,0);
        pFVar24 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar23,iVar16);
        uVar46 = uVar46 + 1;
        *pFVar24 = FVar5;
      } while (uVar46 < (ulonglong)(longlong)(int)local_310->_padding_);
    }
    local_4e0.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_4e0,(TConstIterator *)&local_3d0);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_4e0,&local_148);
    uVar4 = local_378[0]._12_4_;
    while ((local_3d0.CurrentBitIndex != local_148.Iterator.CurrentBitIndex ||
           (local_3d0.Array != local_148.Iterator.Array))) {
      local_5b0 = -1;
      if (local_3d0.CurrentBitIndex < (local_3d0.Array)->NumBits) {
        local_5b0 = local_3d0.CurrentBitIndex;
      }
      pFVar21 = FMeshElementChannels::Get(local_5b8->VertexElements,0);
      local_5ac = FMeshElementContainer::Add(pFVar21);
      iVar16 = local_5b0;
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_308,0);
      pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,iVar16);
      iVar16 = local_5ac;
      uVar1 = *(undefined8 *)&pTVar26->field0_0x0;
      fVar2 = (pTVar26->field0_0x0)._s_0.Z;
      pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_1f8,0);
      pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar25,iVar16);
      iVar16 = local_5b0;
      *(undefined8 *)&pTVar26->field0_0x0 = uVar1;
      (pTVar26->field0_0x0)._s_0.Z = fVar2;
      local_548 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(local_300,0);
      local_4c8 = &local_4c0;
      iStack_540 = iVar16;
      uStack_4b8 = CONCAT44(uStack_53c,iVar16);
      local_5c8.Data = (FScriptContainerElement *)0x0;
      local_5c0 = 0;
      local_4c0 = local_548;
      pTVar27 = TAttributeArrayContainer<int>::Get(local_548,&local_128,iVar16);
      uVar49 = pTVar27->ArrayNum;
      if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar49);
      }
      if (local_5c0._4_4_ < (int)uVar49) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,uVar49,&local_5c8,(int)local_5c0,(int *)((longlong)&local_5c0 + 4));
      }
      pTVar27 = TAttributeArrayContainer<int>::Get(*local_4c8,&local_118,*(int *)(local_4c8 + 1));
      if ((pTVar27->ArrayNum < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x89,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar27 = TAttributeArrayContainer<int>::Get(*local_4c8,&local_108,*(int *)(local_4c8 + 1));
      iVar16 = pTVar27->ArrayNum;
      iVar40 = 0;
      if (((iVar16 < 0) ||
          (pTVar27 = TAttributeArrayContainer<int>::Get
                               (*local_4c8,&local_f8,*(int *)(local_4c8 + 1)),
          pTVar27->ArrayNum < iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                              ,0x89,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      for (; iVar40 != iVar16; iVar40 = iVar40 + 1) {
        pTVar27 = TAttributeArrayContainer<int>::Get(*local_4c8,&local_e8,*(int *)(local_4c8 + 1));
        local_5e4.RawWeight = (ushort)pTVar27->DataPtr[iVar40];
        local_5e4.BoneIndex = (ushort)((uint)pTVar27->DataPtr[iVar40] >> 0x10);
        if (((local_5c8.Data <= &local_5e4) &&
            (&local_5e4 < (FBoneWeight *)(local_5c8.Data + (longlong)local_5c0._4_4_ * 4))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar44 = (int)local_5c0;
        if ((int)local_5c0 == local_5c0._4_4_) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x204,&local_5c8,(int *)((longlong)&local_5c0 + 4));
        }
        local_5c0 = CONCAT44(local_5c0._4_4_,iVar44 + 1);
        *(FBoneWeight *)(local_5c8.Data + (longlong)iVar44 * 4) = local_5e4;
      }
      iVar16 = (int)local_5c0;
      local_568.WeightThreshold = 1;
      local_568.DefaultBoneIndex = 0;
      local_3a8 = (FBoneWeight *)local_5c8.Data;
      local_568.bHasDefaultBoneIndex = false;
      local_568.bBlendZeroInfluence = true;
      local_568._14_2_ = 0;
      local_568.NormalizeType = Always;
      local_568.MaxWeightCount = 0xc;
      if (((int)local_5c0 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar40 = local_5ac;
      iStack_3a0 = iVar16;
      local_418.Array = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(local_1f0,0);
      local_248._12_4_ = uStack_39c;
      local_248.ArrayNum = iStack_3a0;
      local_428.Value = (FVertexID *)&local_418;
      local_418.Index = iVar40;
      local_418._12_4_ = uVar4;
      local_248.DataPtr = local_3a8;
      UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::
      SetBoneWeights<TArrayAttribute<int>_>
                ((TBoneWeights<Internal::FAttributesRefAdapter> *)&local_428.Value,&local_248,
                 &local_568);
      local_398 = &local_5b0;
      local_390 = &local_5ac;
      TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FVertexID_const_&,FVertexID_const_&>_>
                ((TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
                  *)local_b8,&local_428,(bool *)&local_398);
      if ((FBoneWeight *)local_5c8.Data != (FBoneWeight *)0x0) {
        FMemory::Free(local_5c8.Data);
      }
      local_3d0.UnvisitedBitMask = local_3d0.UnvisitedBitMask & ~local_3d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d0);
    }
    pFVar21 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_4,(pFVar21->BitArray).NumBits - pFVar21->NumHoles,Default);
    local_5d8.Data = (FScriptContainerElement *)0x0;
    local_5d0 = 0;
    pFVar21 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    uVar49 = ((pFVar21->BitArray).NumBits - pFVar21->NumHoles) * 3;
    if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar49);
    }
    if (local_5d0._4_4_ < (int)uVar49) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar49,&local_5d8,(int)local_5d0,(int *)((longlong)&local_5d0 + 4));
    }
    pFVar21 = FMeshElementChannels::Get(param_1->PolygonElements,0);
    local_4b0._padding_._0_4_ = 0;
    local_4b0._padding_._4_4_ = 1;
    local_4b0.UnvisitedBitMask = 0xffffffff;
    local_4b0.CurrentBitIndex = 0;
    local_4b0.BaseBitIndex = 0;
    local_4b0.Array = &pFVar21->BitArray;
    if ((pFVar21->BitArray).NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b0);
    }
    local_468._padding_ = CONCAT44(local_4b0._padding_._4_4_,(undefined4)local_4b0._padding_);
    local_468.CurrentBitIndex = local_4b0.CurrentBitIndex;
    local_468.UnvisitedBitMask = local_4b0.UnvisitedBitMask;
    local_468._28_4_ = local_4b0._28_4_;
    local_468.BaseBitIndex = local_4b0.BaseBitIndex;
    local_468.Array = local_4b0.Array;
    pTVar28 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_d8,&pFVar21->BitArray,(pFVar21->BitArray).NumBits);
    local_158._0_4_ = pTVar28->UnvisitedBitMask;
    local_158._4_4_ = pTVar28->CurrentBitIndex;
    local_548 = (TAttributeArrayContainer<int> *)(local_158 >> 0x20);
    local_168 = pTVar28->_padding_;
    pFStack_160 = (FMeshElementContainer *)pTVar28->Array;
    uStack_150 = *(undefined8 *)&pTVar28->BaseBitIndex;
    while( true ) {
      uVar46 = 0;
      if (((FPolygonID)local_468.CurrentBitIndex == SUB84(local_548,0)) &&
         ((FMeshElementContainer *)local_468.Array == pFStack_160)) break;
      pFVar6 = (param_1->PolygonPolygonGroups).ArrayPtr;
      FVar45 = (FPolygonID)0xffffffff;
      if (local_468.CurrentBitIndex <
          ((TBitArray<FDefaultBitArrayAllocator> *)&(local_468.Array)->AllocatorInstance)->NumBits)
      {
        FVar45 = (FPolygonID)local_468.CurrentBitIndex;
      }
      local_5e0 = FVar45;
      if (((int)pFVar6[2].Type < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar58 = pFVar6 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar6[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar58 = (FMeshAttributeArraySetBase *)pFVar6[2]._padding_;
      }
      uVar41 = (int)FVar45 * pFVar58->NumElements;
      uVar49 = 0;
      if ((int)uVar41 < (int)pFVar58->Type) {
        uVar49 = ~uVar41 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar57 = *(FPolygonGroupID *)(pFVar58->_padding_ + (longlong)(int)uVar41 * 4);
      local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_590.ArrayNum = 0;
      local_590.ArrayMax = 0;
      local_57c = FVar57;
      FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
                (param_1,FVar45,&local_590);
      iVar16 = local_590.ArrayNum;
      uVar42 = local_590._8_8_ & 0xffffffff;
      local_5a8.Data = (FScriptContainerElement *)0x0;
      local_5a0[0] = 0;
      local_5a0[1] = 0;
      if (local_590.ArrayNum < 1) {
        if (local_590.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar42);
        }
      }
      else {
        iVar40 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,local_590.ArrayNum,&local_5a8,local_5a0,local_5a0 + 1);
        DefaultConstructItems<FVertexInstanceID,int>(local_5a8.Data + (longlong)iVar40 * 4,iVar16);
        uVar42 = local_590._8_8_ & 0xffffffff;
      }
      pFVar11 = local_578;
      pFVar50 = local_5b8;
      if (0 < (int)uVar42) {
        local_4f8 = 0;
        do {
          lVar39 = local_4f8;
          uVar41 = (uint)uVar46;
          local_580 = ~uVar41 >> 0x1f;
          uVar49 = 0;
          if ((int)uVar41 < (int)uVar42) {
            uVar49 = local_580;
          }
          if ((uVar49 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = *(int *)(local_590.AllocatorInstance.Data + lVar39);
          this = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                           ((TMeshAttributeArraySet<FVertexID> *)
                            (pFVar11->VertexInstanceVertices).ArrayPtr,0);
          pFVar29 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this,iVar16);
          pFVar43 = (FVertexID *)0x0;
          if (local_b8._8_4_ != local_84) {
            FVar52 = (ForElementType<FSetElementId>)local_80;
            if (local_78 != (ForElementType<FSetElementId>)0x0) {
              FVar52 = local_78;
            }
            FVar3 = *(FVertexID *)
                     ((longlong)FVar52 + (ulonglong)(local_70 - 1U & (uint)*pFVar29) * 4);
            while (pFVar43 = (FVertexID *)0x0, FVar3 != (FVertexID)0xffffffff) {
              pFVar43 = (FVertexID *)((longlong)(int)FVar3 * 0x10 + local_b8._0_8_);
              if (*pFVar43 == *pFVar29) {
                if (pFVar43 != (FVertexID *)0x0) goto LAB_1443a2486;
                break;
              }
              FVar3 = pFVar43[2];
            }
          }
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
LAB_1443a2486:
          FVar3 = pFVar43[1];
          pFVar21 = FMeshElementChannels::Get(pFVar50->VertexInstanceElements,0);
          FVar17 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar21);
          FMeshDescription::CreateVertexInstance_Internal(pFVar50,FVar17,FVar3);
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              (local_2f8,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,iVar16);
          uVar1 = *(undefined8 *)&pTVar26->field0_0x0;
          fVar2 = (pTVar26->field0_0x0)._s_0.Z;
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              (local_1e8,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,(int)FVar17);
          *(undefined8 *)&pTVar26->field0_0x0 = uVar1;
          (pTVar26->field0_0x0)._s_0.Z = fVar2;
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              (local_2f0,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,iVar16);
          uVar1 = *(undefined8 *)&pTVar26->field0_0x0;
          fVar2 = (pTVar26->field0_0x0)._s_0.Z;
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              (local_1e0,0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,(int)FVar17);
          *(undefined8 *)&pTVar26->field0_0x0 = uVar1;
          (pTVar26->field0_0x0)._s_0.Z = fVar2;
          pTVar30 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_2e8,0);
          pfVar31 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar30,iVar16);
          fVar2 = *pfVar31;
          pTVar30 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_1d8,0);
          pfVar31 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar30,(int)FVar17);
          *pfVar31 = fVar2;
          pTVar32 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                              (local_2e0,0);
          pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                              (pTVar32,iVar16);
          uVar1 = *(undefined8 *)&pTVar33->field0_0x0;
          uVar10 = *(undefined8 *)((longlong)&pTVar33->field0_0x0 + 8);
          pTVar32 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                              (local_1d0,0);
          pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                              (pTVar32,(int)FVar17);
          iVar40 = 0;
          *(undefined8 *)&pTVar33->field0_0x0 = uVar1;
          *(undefined8 *)((longlong)&pTVar33->field0_0x0 + 8) = uVar10;
          if (0 < local_2b0) {
            do {
              pTVar34 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (local_2d8,iVar40);
              pTVar35 = (TVector2<float>_u_0_s_0 *)
                        TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                  (pTVar34,iVar16);
              TVar7 = *pTVar35;
              pTVar34 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (local_1c8,iVar40);
              pTVar36 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (pTVar34,(int)FVar17)->field0_0x0;
              iVar40 = iVar40 + 1;
              pTVar36->_s_0 = TVar7;
            } while (iVar40 < local_2b0);
          }
          uVar49 = 0;
          if ((int)uVar41 < local_5a0[0]) {
            uVar49 = local_580;
          }
          if ((uVar49 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar39 = local_4f8;
          *(FVertexInstanceID *)(local_5a8.Data + local_4f8) = FVar17;
          local_598._0_4_ = iVar16;
          local_598._4_4_ = FVar17;
          if (((local_5d8.Data <= (TAttributeArrayContainer<int> *)local_598) &&
              ((FScriptContainerElement *)local_598 < local_5d8.Data + (longlong)local_5d0._4_4_ * 8
              )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = (int)local_5d0;
          if ((int)local_5d0 == local_5d0._4_4_) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_5d8,(int *)((longlong)&local_5d0 + 4));
          }
          local_4f8 = lVar39 + 4;
          local_5d0 = CONCAT44(local_5d0._4_4_,iVar16 + 1);
          uVar46 = (ulonglong)(uVar41 + 1);
          *(ulonglong *)(local_5d8.Data + (longlong)iVar16 * 8) =
               CONCAT44(local_598._4_4_,local_598._0_4_);
          uVar42 = local_590._8_8_ & 0xffffffff;
          param_4 = local_470;
          FVar45 = local_5e0;
          FVar57 = local_57c;
        } while ((int)(uVar41 + 1) < local_590.ArrayNum);
      }
      iVar16 = local_5a0[0];
      local_388 = (FVertexInstanceID *)local_5a8.Data;
      if ((local_5a0[0] < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar50 = local_5b8;
      iStack_380 = iVar16;
      pFVar21 = FMeshElementChannels::Get(local_5b8->PolygonElements,0);
      FVar18 = (FPolygonID)FMeshElementContainer::Add(pFVar21);
      local_378[0]._12_4_ = uStack_37c;
      local_378[0].ArrayNum = iStack_380;
      local_378[0].DataPtr = local_388;
      FMeshDescription::CreatePolygon_Internal
                (pFVar50,FVar18,FVar57,local_378,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0)
      ;
      if (local_1c0 != (TMeshAttributeArraySet<FName> *)0x0) {
        pTVar23 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_2d0,0);
        pFVar24 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar23,(int)FVar45);
        FVar5 = *pFVar24;
        pTVar23 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_1c0,0);
        pFVar24 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar23,(int)FVar18);
        *pFVar24 = FVar5;
        pFVar50 = local_5b8;
      }
      param_1 = local_578;
      FMeshElementIndexer::Find<FTriangleID>
                (&local_578->PolygonToTriangles,&local_558,(int)FVar45,0);
      FMeshElementIndexer::Find<FTriangleID>(&pFVar50->PolygonToTriangles,&local_4f0,(int)FVar18,0);
      pTVar12 = local_408;
      if (local_558.ArrayNum == local_4f0.ArrayNum) {
        uVar42 = 0;
        uVar46 = uVar42;
        if (0 < local_558.ArrayNum) {
          do {
            uVar41 = (uint)uVar42;
            uVar48 = ~uVar41 >> 0x1f;
            uVar49 = 0;
            if ((int)uVar41 < local_558.ArrayNum) {
              uVar49 = uVar48;
            }
            if ((uVar49 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((-1 < *(int *)(&(local_558.DataPtr)->field_0x0 + uVar46)) &&
               (*(int *)(&(local_558.DataPtr)->field_0x0 + uVar46) < pTVar12->ArrayNum)) {
              uVar49 = 0;
              if ((int)uVar41 < local_4f0.ArrayNum) {
                uVar49 = uVar48;
              }
              if ((uVar49 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((*(int *)(&(local_4f0.DataPtr)->field_0x0 + uVar46) < 0) ||
                 (param_4->ArrayNum <= *(int *)(&(local_4f0.DataPtr)->field_0x0 + uVar46))) {
                bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<2849005812079134020>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
                                    ,0x544,
                                    "TargetFaceSmoothingMasks.IsValidIndex(TargetTriangleIDs[TriangleIndex].GetValue())"
                                   );
                if (bVar15) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              else {
                uVar49 = 0;
                if ((int)uVar41 < local_558.ArrayNum) {
                  uVar49 = uVar48;
                }
                if ((uVar49 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar49 = *(uint *)(&(local_558.DataPtr)->field_0x0 + uVar46);
                uVar19 = 0;
                if ((int)uVar49 < pTVar12->ArrayNum) {
                  uVar19 = ~uVar49 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar4 = *(undefined4 *)
                         ((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar49 * 4);
                uVar49 = 0;
                if ((int)uVar41 < local_4f0.ArrayNum) {
                  uVar49 = uVar48;
                }
                if ((uVar49 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar49 = *(uint *)(&(local_4f0.DataPtr)->field_0x0 + uVar46);
                uVar48 = 0;
                if ((int)uVar49 < param_4->ArrayNum) {
                  uVar48 = ~uVar49 >> 0x1f;
                }
                if ((uVar48 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                *(undefined4 *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar49 * 4) =
                     uVar4;
              }
            }
            uVar42 = (ulonglong)(uVar41 + 1);
            uVar46 = uVar46 + 4;
            param_1 = local_578;
          } while ((int)(uVar41 + 1) < local_558.ArrayNum);
        }
      }
      else {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2849005812079134014>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
                            ,0x53e,"SourceTriangleIDs.Num() == TargetTriangleIDs.Num()");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (local_5a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data);
      }
      if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_590.AllocatorInstance.Data);
      }
      local_468.UnvisitedBitMask = local_468.UnvisitedBitMask & ~local_468._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_468);
    }
    if (local_2ac != 0) {
      do {
        uVar49 = local_90;
        pTStack_510 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
        local_518 = 0;
        uStack_514 = 1;
        local_508 = 0xffffffff;
        uStack_504 = 0;
        iStack_500 = 0;
        if (local_90 != 0) {
          puVar53 = (uint *)(local_b8 + 0x10);
          if (local_98 != (uint *)0x0) {
            puVar53 = local_98;
          }
          uVar41 = *puVar53;
          iStack_500 = 0;
          local_518 = 0;
          while (uVar41 == 0) {
            iStack_500 = iStack_500 + 0x20;
            lVar39 = (longlong)local_518;
            local_518 = local_518 + 1;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < local_518) {
              uStack_504 = local_90;
              goto LAB_1443a2bc7;
            }
            uVar41 = puVar53[lVar39 + 1];
            local_508 = 0xffffffff;
          }
          uStack_514 = ~(uVar41 - 1) & uVar41;
          uVar42 = (ulonglong)uStack_514 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar42 != 0) {
            for (; uVar42 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uStack_504 = iStack_500 + -1 + (int)lVar39;
          local_490 = (int)lVar39;
          if ((int)local_90 < (int)uStack_504) {
            uStack_504 = local_90;
          }
        }
LAB_1443a2bc7:
        local_508 = 0xffffffff;
        local_278 = (longlong *)local_b8;
        lStack_270 = CONCAT44(uStack_514,local_518);
        pTStack_268 = pTStack_510;
        local_250 = local_b8._8_4_ - local_84;
        uVar41 = local_90 & 0xffffffe0;
        iVar16 = (int)local_90 >> 5;
        uStack_260 = 0xffffffff;
        iStack_25c = uStack_504;
        iStack_258 = iStack_500;
        uStack_254 = uStack_4fc;
        bVar38 = (byte)local_90;
        local_400 = (longlong *)local_b8;
        TStack_3f8._padding_ = CONCAT44(uStack_514,local_518);
        TStack_3f8.Array = pTStack_510;
        TStack_3f8.UnvisitedBitMask = 0xffffffff;
        TStack_3f8.CurrentBitIndex = uStack_504;
        TStack_3f8.BaseBitIndex = iStack_500;
        TStack_3f8._28_4_ = uStack_4fc;
        uStack_3d8 = CONCAT44(uStack_24c,local_b8._8_4_ - local_84);
        if (((int)local_90 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar49 != local_90) {
          puVar53 = (uint *)(local_b8 + 0x10);
          if (local_98 != (uint *)0x0) {
            puVar53 = local_98;
          }
          uVar49 = -1 << (bVar38 & 0x1f) & puVar53[iVar16];
          while (uVar49 == 0) {
            lVar39 = (longlong)iVar16;
            uVar41 = uVar41 + 0x20;
            iVar16 = iVar16 + 1;
            uVar49 = local_90;
            if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_1443a2d00;
            uVar49 = puVar53[lVar39 + 1];
          }
          uVar42 = (ulonglong)(~(uVar49 - 1) & uVar49) * 2 + 1;
          lVar39 = 0x3f;
          if (uVar42 != 0) {
            for (; uVar42 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uVar49 = (uVar41 - 1) + (int)lVar39;
          local_48c = (int)lVar39;
          if ((int)local_90 < (int)uVar49) {
            uVar49 = local_90;
          }
        }
LAB_1443a2d00:
        while( true ) {
          plVar13 = local_400;
          if ((int)local_400[1] - *(int *)((longlong)local_400 + 0x34) != (int)uStack_3d8) {
            local_5e7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5e7);
          }
          if (((TStack_3f8.CurrentBitIndex == uVar49) &&
              (TStack_3f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
             (plVar13 == (longlong *)local_b8)) break;
          piVar47 = (int *)((longlong)TStack_3f8.CurrentBitIndex * 0x10 + *plVar13);
          uVar48 = (uint)uVar46;
          uVar41 = 0;
          if ((int)uVar48 < local_290) {
            uVar41 = ~uVar48 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = *piVar47;
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                                ((longlong)local_298 + (longlong)(int)uVar48 * 8),0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,iVar16);
          uVar1 = *(undefined8 *)&pTVar26->field0_0x0;
          local_5e0 = (FPolygonID)(pTVar26->field0_0x0)._s_0.Z;
          uVar41 = 0;
          if ((int)uVar48 < local_180) {
            uVar41 = ~uVar48 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = piVar47[1];
          pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                                ((longlong)local_188 + (longlong)(int)uVar48 * 8),0);
          pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar25,iVar16);
          *(undefined8 *)&pTVar26->field0_0x0 = uVar1;
          (pTVar26->field0_0x0)._s_0.Z = (float)local_5e0;
          TStack_3f8.UnvisitedBitMask = TStack_3f8.UnvisitedBitMask & ~TStack_3f8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f8);
        }
        uVar46 = uVar46 + 1;
      } while (uVar46 < (ulonglong)(longlong)local_2ac);
    }
    uVar46 = 0;
    if (local_2ac != 0) {
      do {
        uVar41 = (uint)uVar46;
        uVar48 = ~uVar41 >> 0x1f;
        uVar49 = 0;
        if ((int)uVar41 < local_280) {
          uVar49 = uVar48;
        }
        if ((uVar49 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar39 = (longlong)(int)uVar41 * 8;
        if (*(longlong *)((longlong)local_288 + lVar39) != 0) {
          iVar16 = (int)local_5d0;
          local_548 = (TAttributeArrayContainer<int> *)
                      (local_5d8.Data + (longlong)(int)local_5d0 * 8);
          FVar51.Data = local_5d8.Data;
          while( true ) {
            pTVar37 = local_548;
            if ((int)local_5d0 != iVar16) {
              local_5e6[0] = 0;
              `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_5e6);
            }
            if ((TAttributeArrayContainer<int> *)FVar51.Data == pTVar37) break;
            uVar49 = 0;
            if ((int)uVar41 < local_280) {
              uVar49 = uVar48;
            }
            if ((uVar49 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar40 = *(int *)&(((TAttributeArrayContainer<int> *)FVar51.Data)->Chunks).
                              AllocatorInstance.Data;
            pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                                  ((longlong)local_288 + lVar39),0);
            pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                (pTVar25,iVar40);
            uVar1 = *(undefined8 *)&pTVar26->field0_0x0;
            local_5e0 = (FPolygonID)(pTVar26->field0_0x0)._s_0.Z;
            uVar49 = 0;
            if ((int)uVar41 < local_170) {
              uVar49 = uVar48;
            }
            if ((uVar49 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar40 = *(int *)((longlong)
                              &(((TAttributeArrayContainer<int> *)FVar51.Data)->Chunks).
                               AllocatorInstance.Data + 4);
            pTVar25 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                                  ((longlong)local_178 + lVar39),0);
            pTVar26 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                (pTVar25,iVar40);
            FVar51.Data = (FScriptContainerElement *)
                          &(((TAttributeArrayContainer<int> *)FVar51.Data)->Chunks).ArrayNum;
            *(undefined8 *)&pTVar26->field0_0x0 = uVar1;
            (pTVar26->field0_0x0)._s_0.Z = (float)local_5e0;
          }
        }
        uVar46 = uVar46 + 1;
      } while (uVar46 < (ulonglong)(longlong)local_2ac);
    }
    if (local_330 == 0) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8382464667758362952>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                          ,0x148,"HasSourceGeometryParts()");
      if (bVar15) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Empty._16_8_ = 0;
        ::Empty._24_4_ = 0;
        ::Empty._28_4_ = 0x80;
        ::Empty._32_8_ = 0;
        ::Empty._40_8_ = 0;
        ::Empty._64_8_ = 0;
        ::Empty._72_4_ = 0;
        ::Empty._76_4_ = 0x80;
        ::Empty._80_4_ = 0xffffffff;
        ::Empty._84_4_ = 0;
        ::Empty._96_8_ = 0;
        ::Empty._104_4_ = 0;
        ::Empty._112_4_ = 0;
        ::Empty._120_4_ = 0;
        atexit(`FSkeletalMeshAttributes::SourceGeometryParts'::__l5::
               _dynamic_atexit_destructor_for__Empty__);
        _Init_thread_footer(&::_TSS0);
        pTVar55 = &::Empty;
      }
      else {
        pTVar55 = &::Empty;
      }
    }
    else {
      pTVar55 = (TMeshElementContainer<FSourceGeometryPartID> *)
                FMeshElementChannels::Get(local_318,0);
    }
    uVar49 = *(int *)((longlong)pTVar55 + 0x18);
    local_538 = 0;
    uStack_534 = 1;
    uStack_524 = 0;
    iStack_520 = 0;
    if (uVar49 != 0) {
      FVar54 = *(ForElementType<unsigned_int> *)((longlong)pTVar55 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)pTVar55 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar54 = (ForElementType<unsigned_int>)pTVar55;
      }
      uVar41 = *(uint *)FVar54;
      while (uVar41 == 0) {
        iStack_520 = iStack_520 + 0x20;
        lVar39 = (longlong)local_538;
        local_538 = local_538 + 1;
        if ((int)((uVar49 - 1) + ((int)(uVar49 - 1) >> 0x1f & 0x1fU)) >> 5 < local_538)
        goto LAB_1443a314e;
        uVar41 = ((uint *)((longlong)FVar54 + 4))[lVar39];
      }
      uStack_534 = -uVar41 & uVar41;
      uVar46 = (ulonglong)uStack_534 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_488 = (int)lVar39;
      uStack_524 = iStack_520 + -1 + local_488;
      if ((int)uVar49 < (int)uStack_524) {
LAB_1443a314e:
        uStack_524 = uVar49;
      }
    }
    local_528 = 0xffffffff;
    local_448._padding_ = CONCAT44(uStack_534,local_538);
    local_448.CurrentBitIndex = uStack_524;
    local_448.UnvisitedBitMask = 0xffffffff;
    local_448._28_4_ = uStack_51c;
    local_448.BaseBitIndex = iStack_520;
    iVar16 = (int)uVar49 >> 5;
    uVar41 = -1 << ((byte)uVar49 & 0x1f);
    uVar48 = uVar49 & 0xffffffe0;
    FStack_530 = (ForElementType<unsigned_int>)pTVar55;
    local_448.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar55;
    local_358 = uVar41;
    uStack_354 = uVar49;
    if (((int)uVar49 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar19 = *(uint *)((longlong)pTVar55 + 0x18);
    if (uVar49 != uVar19) {
      FVar54 = (ForElementType<unsigned_int>)pTVar55;
      if (*(ForElementType<unsigned_int> *)((longlong)pTVar55 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar54 = *(ForElementType<unsigned_int> *)((longlong)pTVar55 + 0x10);
      }
      uVar41 = uVar41 & *(uint *)((longlong)FVar54 + (longlong)iVar16 * 4);
      while (uVar41 == 0) {
        lVar39 = (longlong)iVar16;
        uVar48 = uVar48 + 0x20;
        iVar16 = iVar16 + 1;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1443a323b;
        uVar41 = ((uint *)((longlong)FVar54 + 4))[lVar39];
        local_358 = 0xffffffff;
      }
      uVar46 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
      lVar39 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_484 = (int)lVar39;
      uStack_354 = (uVar48 - 1) + local_484;
      if ((int)uVar19 < (int)uStack_354) {
LAB_1443a323b:
        uStack_354 = uVar19;
      }
    }
    uVar49 = uStack_354;
    while ((local_448.CurrentBitIndex != uVar49 ||
           ((TMeshElementContainer<FSourceGeometryPartID> *)local_448.Array != pTVar55))) {
      uVar41 = 0xffffffff;
      if (local_448.CurrentBitIndex < (int)*(uint *)((longlong)local_448.Array + 0x18)) {
        uVar41 = local_448.CurrentBitIndex;
      }
      pTVar23 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_2c8,0);
      pFVar24 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar23,uVar41);
      pTVar14 = local_2c0;
      FVar5 = *pFVar24;
      if (local_2b8 == 0) {
        pTVar37 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(local_2c0,0);
        TAttributeArrayContainer<int>::Get(pTVar37,&local_4d8,uVar41);
      }
      else {
        this_00 = (ForElementType<TAttributeArrayContainer<int>_>)&local_2c0->ArrayForChannels;
        if (((local_2c0->ArrayForChannels).ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (pTVar14->ArrayForChannels).AllocatorInstance.SecondaryData;
        if (FVar8 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
          this_00 = FVar8;
        }
        local_4d8.DataPtr =
             TMeshAttributeArrayBase<int>::GetElementBase
                       ((TMeshAttributeArrayBase<int> *)this_00,uVar41);
        local_4d8.ArrayNum = local_2b8;
        if ((local_2b8 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar16 = local_4d8.ArrayNum;
      piVar47 = local_4d8.DataPtr;
      if (local_238._padding_ == 0) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8382464667758362972>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                            ,0x15c,"HasSourceGeometryParts()");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar20 = (FSourceGeometryPartID)0xffffffff;
      }
      else {
        pFVar21 = (FMeshElementContainer *)FSkeletalMeshAttributes::SourceGeometryParts(&local_238);
        FVar20 = (FSourceGeometryPartID)FMeshElementContainer::Add(pFVar21);
      }
      pTVar23 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_1b8,0);
      pFVar24 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar23,(int)FVar20);
      *pFVar24 = FVar5;
      if ((iVar16 < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_570[0] = *piVar47;
      if ((iVar16 < 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_570[1] = piVar47[1];
      TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_>::Get<FSourceGeometryPartID,0>
                (&local_1b0,&local_480,FVar20,0);
      if ((local_480.ArrayNum != 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Value.Num() == Elements.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                              ,0x4b2,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar41 = 0;
      if (local_1b0.Extent != 0) {
        do {
          uVar48 = 0;
          if ((int)uVar41 < 2) {
            uVar48 = ~uVar41 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar48 = 0;
          if ((int)uVar41 < local_480.ArrayNum) {
            uVar48 = ~uVar41 >> 0x1f;
          }
          iVar16 = local_570[(int)uVar41];
          if ((uVar48 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar48 = uVar41 + 1;
          local_480.DataPtr[(int)uVar41] = iVar16;
          uVar41 = uVar48;
        } while (uVar48 < local_1b0.Extent);
      }
      local_448.UnvisitedBitMask = local_448.UnvisitedBitMask & ~local_448._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_448);
    }
    if ((TAttributeArrayContainer<int> *)local_5d8.Data != (TAttributeArrayContainer<int> *)0x0) {
      FMemory::Free(local_5d8.Data);
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    if (local_188 != (void *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    if (local_288 != (void *)0x0) {
      FMemory::Free(local_288);
    }
    if (local_298 != (void *)0x0) {
      FMemory::Free(local_298);
    }
    if (local_2a8 != (void *)0x0) {
      FMemory::Free(local_2a8);
    }
  }
  else {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2849005812079133824>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
                        ,0x480,"TargetMeshDescription.IsEmpty()");
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (bVar59) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetPosedMesh @ 1443a4640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSkeletalMeshOperations::GetPosedMesh
          (FMeshDescription *param_1,FMeshDescription *param_2,
          TMap<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
          *param_3,FName param_4,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  TMap<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
  *pTVar35;
  TMeshAttributesRef<FBoneID,FName_const_> TVar36;
  FMeshDescription *pFVar37;
  FName FVar38;
  bool bVar39;
  undefined1 uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  FMeshElementContainer *pFVar44;
  FSkinWeightsVertexAttributesConstRef FVar45;
  FAttributesSetEntry *pFVar46;
  TTransform<double> *pTVar47;
  TMatrix<float> *pTVar48;
  FMeshAttributeArraySetBase *pFVar49;
  uint uVar50;
  FMeshElementChannels *this;
  uint uVar51;
  uint uVar52;
  FMeshAttributeArraySetBase *pFVar53;
  FScriptContainerElement *pFVar54;
  FMeshAttributeArraySetBase *pFVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auStack_388 [32];
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_358;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_348;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_338;
  TMap<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
  *local_328;
  TMeshAttributesRef<FBoneID,FName_const_> local_320;
  FMeshDescription *local_318;
  FSkeletalMeshAttributesShared local_310;
  TMeshAttributesRef<FBoneID,int_const_> local_2f8;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_> local_2f0;
  FName local_2e8;
  FScriptContainerElement *local_2e0;
  longlong local_2d8;
  FMeshDescription *local_2d0;
  FMeshDescription *local_2c8;
  FName local_2c0;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_2b8;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> local_2b0;
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [16];
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  FSkeletalMeshAttributes local_258;
  TTransform<double> local_218;
  TMatrix<float> local_1b8;
  TMatrix<float> local_178;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_2b8 = param_5;
  local_328 = param_3;
  local_318 = param_1;
  local_2d0 = param_1;
  local_2c8 = param_2;
  local_2c0 = param_4;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_310,param_1);
  this = local_310.BoneElementsShared;
  pFVar44 = FMeshElementChannels::Get(local_310.BoneElementsShared,0);
  bVar39 = FAttributesSetBase::HasAttribute(&pFVar44->Attributes,MeshAttribute::Bone::Name);
  if (bVar39) {
    pFVar44 = FMeshElementChannels::Get(this,0);
    bVar39 = FAttributesSetBase::HasAttribute(&pFVar44->Attributes,MeshAttribute::Bone::Pose);
    if (bVar39) {
      pFVar44 = FMeshElementChannels::Get(this,0);
      bVar39 = FAttributesSetBase::HasAttribute
                         (&pFVar44->Attributes,MeshAttribute::Bone::ParentIndex);
      if ((bVar39) &&
         (FVar45 = FSkeletalMeshAttributesShared::GetVertexSkinWeights(&local_310,(FName)local_298),
         *(longlong *)FVar45.AttributesConstRef.ArrayPtr != 0)) {
        pFVar49 = (FMeshAttributeArraySetBase *)0x0;
        local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_338.ArrayNum = 0;
        local_338.ArrayMax = 0;
        local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_348.ArrayNum = 0;
        local_348.ArrayMax = 0;
        local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_358.ArrayNum = 0;
        local_358.ArrayMax = 0;
        pFVar44 = FMeshElementChannels::Get(this,0);
        pFVar46 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          *)&pFVar44->Attributes,MeshAttribute::Bone::Name);
        if ((pFVar46 == (FAttributesSetEntry *)0x0) ||
           ((local_320.ArrayPtr = (pFVar46->Ptr).Ptr, (local_320.ArrayPtr)->Type != 6 ||
            ((local_320.ArrayPtr)->Extent != 1)))) {
          local_320.ArrayPtr = pFVar49;
        }
        pFVar44 = FMeshElementChannels::Get(this,0);
        pFVar46 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          *)&pFVar44->Attributes,MeshAttribute::Bone::Pose);
        if (((pFVar46 == (FAttributesSetEntry *)0x0) ||
            (local_2f0.ArrayPtr = (pFVar46->Ptr).Ptr, (local_2f0.ArrayPtr)->Type != 7)) ||
           ((local_2f0.ArrayPtr)->Extent != 1)) {
          local_2f0.ArrayPtr = pFVar49;
        }
        pFVar44 = FMeshElementChannels::Get(this,0);
        pFVar46 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          *)&pFVar44->Attributes,MeshAttribute::Bone::ParentIndex);
        if (((pFVar46 == (FAttributesSetEntry *)0x0) ||
            (local_2f8.ArrayPtr = (pFVar46->Ptr).Ptr, (local_2f8.ArrayPtr)->Type != 4)) ||
           ((local_2f8.ArrayPtr)->Extent != 1)) {
          local_2f8.ArrayPtr = pFVar49;
        }
        iVar41 = FSkeletalMeshAttributesShared::GetNumBones(&local_310);
        TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_338,iVar41,Default);
        iVar41 = FSkeletalMeshAttributesShared::GetNumBones(&local_310);
        TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_348,iVar41,Default);
        iVar41 = FSkeletalMeshAttributesShared::GetNumBones(&local_310);
        TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&local_358,iVar41,Default);
        pTVar35 = local_328;
        pFVar55 = pFVar49;
        do {
          pFVar53 = (FMeshAttributeArraySetBase *)0x0;
          uVar52 = 0;
          uVar42 = uVar52;
          if (this != (FMeshElementChannels *)0x0) {
            pFVar44 = FMeshElementChannels::Get(this,0);
            uVar42 = (pFVar44->BitArray).NumBits - pFVar44->NumHoles;
          }
          pFVar37 = local_2c8;
          uVar51 = (uint)pFVar49;
          uVar43 = 0;
          if ((int)uVar42 <= (int)uVar51) {
            FMeshDescription::operator=(local_2c8,local_2d0);
            FVar38 = local_2c0;
            iStack_2a0 = local_338.ArrayNum;
            local_2a8 = local_338.AllocatorInstance.Data;
            if ((local_338.ArrayNum < 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            local_288._12_4_ = uStack_29c;
            local_288.ArrayNum = iStack_2a0;
            local_288.DataPtr = (TMatrix<float> *)local_2a8;
            UE::Impl::PoseMesh(pFVar37,&local_288,FVar38,local_2b8,false);
            FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_258,pFVar37);
            pFVar44 = FMeshElementChannels::Get(local_258.BoneElements,0);
            pFVar46 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                              *)&pFVar44->Attributes,MeshAttribute::Bone::Pose);
            pTVar35 = local_328;
            if (((pFVar46 == (FAttributesSetEntry *)0x0) ||
                (local_2b0.ArrayPtr = (pFVar46->Ptr).Ptr, (local_2b0.ArrayPtr)->Type != 7)) ||
               ((local_2b0.ArrayPtr)->Extent != 1)) {
              local_2b0.ArrayPtr = pFVar53;
            }
            while( true ) {
              uVar42 = uVar52;
              if (this != (FMeshElementChannels *)0x0) {
                pFVar44 = FMeshElementChannels::Get(this,0);
                uVar42 = (pFVar44->BitArray).NumBits - pFVar44->NumHoles;
              }
              TVar36.ArrayPtr = local_320.ArrayPtr;
              iVar41 = (int)pFVar53;
              if ((int)uVar42 <= iVar41) {
                if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_358.AllocatorInstance.Data);
                }
                if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_348.AllocatorInstance.Data);
                }
                if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_338.AllocatorInstance.Data);
                }
                return true;
              }
              pFVar49 = local_320.ArrayPtr + 1;
              if (((int)local_320.ArrayPtr[2].Type < 1) &&
                 (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar39)) {
                pcVar3 = (code *)swi(3);
                uVar40 = (*pcVar3)();
                return (bool)uVar40;
              }
              if ((FMeshAttributeArraySetBase *)TVar36.ArrayPtr[2]._padding_ !=
                  (FMeshAttributeArraySetBase *)0x0) {
                pFVar49 = (FMeshAttributeArraySetBase *)TVar36.ArrayPtr[2]._padding_;
              }
              uVar51 = iVar41 * pFVar49->NumElements;
              uVar42 = uVar43;
              if ((int)uVar51 < (int)pFVar49->Type) {
                uVar42 = ~uVar51 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar39)) break;
              pTVar47 = TMapBase<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
                        ::Find((TMapBase<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
                                *)pTVar35,*(FName *)(pFVar49->_padding_ + (longlong)(int)uVar51 * 8)
                              );
              if (pTVar47 != (TTransform<double> *)0x0) {
                TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_>::Set
                          (&local_2b0,iVar41,pTVar47);
              }
              pFVar53 = (FMeshAttributeArraySetBase *)(ulonglong)(iVar41 + 1);
            }
            pcVar3 = (code *)swi(3);
            uVar40 = (*pcVar3)();
            return (bool)uVar40;
          }
          TMeshAttributesRef<FBoneID,FName_const_>::Get(&local_320,(int)&local_2e8,uVar51);
          uVar42 = TMeshAttributesRef<FBoneID,int_const_>::Get(&local_2f8,uVar51,0);
          pTVar47 = TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_>::Get
                              (&local_2f0,&local_218,uVar51,0);
          local_268 = (pTVar47->Rotation).ZW.m128d_f64[0];
          dStack_260 = (pTVar47->Rotation).ZW.m128d_f64[1];
          dVar4 = (pTVar47->Rotation).XY.m128d_f64[0];
          dVar18 = (pTVar47->Rotation).XY.m128d_f64[1];
          dVar13 = (pTVar47->Rotation).XY.m128d_f64[0];
          dVar17 = dVar18 + dVar18;
          dVar58 = local_268 + local_268;
          dVar12 = dVar4 * (dVar4 + dVar4);
          dVar6 = local_268 * dVar58;
          auVar2 = *(undefined1 (*) [16])(pTVar47->Scale3D).XY.m128d_f64;
          auVar60 = blendpd(auVar2,*(undefined1 (*) [16])(pTVar47->Scale3D).ZW.m128d_f64,2);
          dVar1 = (pTVar47->Scale3D).ZW.m128d_f64[0];
          dVar14 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
          dVar16 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
          local_278 = (pTVar47->Rotation).XY.m128d_f64[0];
          dStack_270 = (pTVar47->Rotation).XY.m128d_f64[1];
          dVar19 = (pTVar47->Scale3D).XY.m128d_f64[0];
          dVar20 = (pTVar47->Scale3D).XY.m128d_f64[1];
          dVar7 = dStack_260 * dVar58;
          dVar8 = dStack_260 * (dVar4 + dVar4);
          dVar56 = dVar17 * dVar13;
          dVar57 = dVar58 * (pTVar47->Rotation).XY.m128d_f64[1];
          dVar21 = (pTVar47->Scale3D).XY.m128d_f64[0];
          dVar22 = (pTVar47->Scale3D).XY.m128d_f64[1];
          dVar4 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          dVar23 = (pTVar47->Scale3D).ZW.m128d_f64[0];
          dVar24 = (pTVar47->Translation).ZW.m128d_f64[0];
          dVar13 = dVar13 * dVar58;
          dVar58 = dVar17 * dStack_260;
          uVar50 = ~uVar51 >> 0x1f;
          dVar59 = (pTVar47->Scale3D).ZW.m128d_f64[0];
          dVar25 = (pTVar47->Translation).XY.m128d_f64[0];
          dVar26 = (pTVar47->Translation).XY.m128d_f64[1];
          if ((int)uVar51 < local_348.ArrayNum) {
            uVar52 = uVar50;
          }
          dVar5 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
          if ((uVar52 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar3 = (code *)swi(3);
            uVar40 = (*pcVar3)();
            return (bool)uVar40;
          }
          auVar10._4_4_ = (float)((dVar7 + dVar56) * dVar21);
          auVar10._0_4_ = (float)((dVar14 - (dVar6 + dVar18 * dVar17)) * dVar19);
          auVar10._8_4_ = (float)(auVar60._0_8_ * (dVar13 - dVar58));
          auVar10._12_4_ = 0;
          *(undefined1 (*) [16])(local_348.AllocatorInstance.Data + (longlong)pFVar55) = auVar10;
          auVar60._4_4_ = (float)((dVar16 - (dVar6 + dVar12)) * dVar20);
          auVar60._0_4_ = (float)(auVar2._8_8_ * (dVar56 - dVar7));
          auVar60._8_4_ = (float)((dVar8 + dVar57) * dVar22);
          auVar60._12_4_ = 0;
          *(undefined1 (*) [16])(local_348.AllocatorInstance.Data + 0x10 + (longlong)pFVar55) =
               auVar60;
          auVar2._4_4_ = (float)(dVar1 * (dVar57 - dVar8));
          auVar2._0_4_ = (float)((dVar58 + dVar13) * dVar59);
          auVar2._8_4_ = (float)((dVar4 - (dVar12 + dVar18 * dVar17)) * dVar23);
          auVar2._12_4_ = 0;
          *(undefined1 (*) [16])(local_348.AllocatorInstance.Data + 0x20 + (longlong)pFVar55) =
               auVar2;
          pFVar54 = local_348.AllocatorInstance.Data + 0x30 + (longlong)pFVar55;
          *(float *)pFVar54 = (float)dVar25;
          *(float *)(pFVar54 + 4) = (float)dVar26;
          *(float *)(pFVar54 + 8) = (float)dVar24;
          *(float *)(pFVar54 + 0xc) = (float)dVar5;
          pTVar47 = TMapBase<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
                    ::Find((TMapBase<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
                            *)pTVar35,local_2e8);
          if (pTVar47 == (TTransform<double> *)0x0) {
            uVar52 = uVar43;
            if ((int)uVar51 < local_348.ArrayNum) {
              uVar52 = uVar50;
            }
            if ((uVar52 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            uVar27 = *(undefined8 *)(local_348.AllocatorInstance.Data + (longlong)pFVar55);
            uVar28 = *(undefined8 *)(local_348.AllocatorInstance.Data + (longlong)pFVar55 + 8);
            uVar29 = *(undefined8 *)(local_348.AllocatorInstance.Data + 0x10 + (longlong)pFVar55);
            uVar30 = *(undefined8 *)
                      (local_348.AllocatorInstance.Data + 0x10 + (longlong)pFVar55 + 8);
            uVar31 = *(undefined8 *)(local_348.AllocatorInstance.Data + 0x20 + (longlong)pFVar55);
            uVar32 = *(undefined8 *)
                      (local_348.AllocatorInstance.Data + 0x20 + (longlong)pFVar55 + 8);
            uVar33 = *(undefined8 *)(local_348.AllocatorInstance.Data + 0x30 + (longlong)pFVar55);
            uVar34 = *(undefined8 *)
                      (local_348.AllocatorInstance.Data + 0x30 + (longlong)pFVar55 + 8);
            uVar52 = uVar43;
            if ((int)uVar51 < local_358.ArrayNum) {
              uVar52 = uVar50;
            }
            if ((uVar52 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)pFVar55) = uVar27;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)pFVar55 + 8) = uVar28;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x10 + (longlong)pFVar55) = uVar29;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x10 + (longlong)pFVar55 + 8) =
                 uVar30;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x20 + (longlong)pFVar55) = uVar31;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x20 + (longlong)pFVar55 + 8) =
                 uVar32;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x30 + (longlong)pFVar55) = uVar33;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x30 + (longlong)pFVar55 + 8) =
                 uVar34;
          }
          else {
            local_268 = (pTVar47->Rotation).ZW.m128d_f64[0];
            dStack_260 = (pTVar47->Rotation).ZW.m128d_f64[1];
            dVar4 = (pTVar47->Rotation).XY.m128d_f64[0];
            dVar18 = (pTVar47->Rotation).XY.m128d_f64[1];
            dVar13 = (pTVar47->Rotation).XY.m128d_f64[0];
            dVar17 = dVar18 + dVar18;
            dVar12 = dVar4 * (dVar4 + dVar4);
            dVar59 = local_268 + local_268;
            dVar6 = local_268 * dVar59;
            auVar2 = *(undefined1 (*) [16])(pTVar47->Scale3D).XY.m128d_f64;
            dVar1 = (pTVar47->Scale3D).ZW.m128d_f64[0];
            auVar60 = blendpd(auVar2,*(undefined1 (*) [16])(pTVar47->Scale3D).ZW.m128d_f64,2);
            dVar14 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
            dVar16 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
            local_278 = (pTVar47->Rotation).XY.m128d_f64[0];
            dStack_270 = (pTVar47->Rotation).XY.m128d_f64[1];
            dVar19 = (pTVar47->Scale3D).XY.m128d_f64[0];
            dVar20 = (pTVar47->Scale3D).XY.m128d_f64[1];
            dVar7 = dStack_260 * dVar59;
            dVar8 = dStack_260 * (dVar4 + dVar4);
            dVar56 = dVar17 * dVar13;
            dVar57 = dVar59 * (pTVar47->Rotation).XY.m128d_f64[1];
            dVar58 = dVar17 * dStack_260;
            dVar21 = (pTVar47->Scale3D).XY.m128d_f64[0];
            dVar22 = (pTVar47->Scale3D).XY.m128d_f64[1];
            dVar4 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
            dVar23 = (pTVar47->Scale3D).ZW.m128d_f64[0];
            dVar24 = (pTVar47->Translation).ZW.m128d_f64[0];
            dVar13 = dVar13 * dVar59;
            dVar59 = (pTVar47->Scale3D).ZW.m128d_f64[0];
            dVar25 = (pTVar47->Translation).XY.m128d_f64[0];
            dVar26 = (pTVar47->Translation).XY.m128d_f64[1];
            uVar52 = uVar43;
            if ((int)uVar51 < local_358.ArrayNum) {
              uVar52 = uVar50;
            }
            dVar5 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            if ((uVar52 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            auVar11._4_4_ = (float)((dVar7 + dVar56) * dVar21);
            auVar11._0_4_ = (float)((dVar14 - (dVar6 + dVar18 * dVar17)) * dVar19);
            auVar11._8_4_ = (float)(auVar60._0_8_ * (dVar13 - dVar58));
            auVar11._12_4_ = 0;
            *(undefined1 (*) [16])(local_358.AllocatorInstance.Data + (longlong)pFVar55) = auVar11;
            auVar15._4_4_ = (float)((dVar16 - (dVar6 + dVar12)) * dVar20);
            auVar15._0_4_ = (float)(auVar2._8_8_ * (dVar56 - dVar7));
            auVar15._8_4_ = (float)((dVar8 + dVar57) * dVar22);
            auVar15._12_4_ = 0;
            *(undefined1 (*) [16])(local_358.AllocatorInstance.Data + 0x10 + (longlong)pFVar55) =
                 auVar15;
            auVar9._4_4_ = (float)(dVar1 * (dVar57 - dVar8));
            auVar9._0_4_ = (float)((dVar58 + dVar13) * dVar59);
            auVar9._8_4_ = (float)((dVar4 - (dVar12 + dVar18 * dVar17)) * dVar23);
            auVar9._12_4_ = 0;
            *(undefined1 (*) [16])(local_358.AllocatorInstance.Data + 0x20 + (longlong)pFVar55) =
                 auVar9;
            pFVar54 = local_358.AllocatorInstance.Data + 0x30 + (longlong)pFVar55;
            *(float *)pFVar54 = (float)dVar25;
            *(float *)(pFVar54 + 4) = (float)dVar26;
            *(float *)(pFVar54 + 8) = (float)dVar24;
            *(float *)(pFVar54 + 0xc) = (float)dVar5;
          }
          if (uVar42 != 0xffffffff) {
            if ((int)uVar51 < local_348.ArrayNum) {
              uVar43 = uVar50;
            }
            if (uVar43 == 0) {
              bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar39) {
                pcVar3 = (code *)swi(3);
                uVar40 = (*pcVar3)();
                return (bool)uVar40;
              }
            }
            local_2e0 = local_348.AllocatorInstance.Data + (longlong)(int)uVar51 * 0x40;
            uVar52 = 0;
            if ((int)uVar42 < local_348.ArrayNum) {
              uVar52 = ~uVar42 >> 0x1f;
            }
            if ((uVar52 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            local_2d8 = (longlong)(int)uVar42 * 0x40;
            VectorMatrixMultiply
                      (&local_1b8,(TMatrix<float> *)local_2e0,
                       (TMatrix<float> *)(local_348.AllocatorInstance.Data + local_2d8));
            uVar34 = local_1b8.M[3]._8_8_;
            uVar33 = local_1b8.M[3]._0_8_;
            uVar32 = local_1b8.M[2]._8_8_;
            uVar31 = local_1b8.M[2]._0_8_;
            uVar30 = local_1b8.M[1]._8_8_;
            uVar29 = local_1b8.M[1]._0_8_;
            uVar28 = local_1b8.M[0]._8_8_;
            uVar27 = local_1b8.M[0]._0_8_;
            uVar52 = 0;
            if ((int)uVar51 < local_348.ArrayNum) {
              uVar52 = uVar50;
            }
            if ((uVar52 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            *(undefined8 *)(local_348.AllocatorInstance.Data + (longlong)pFVar55) = uVar27;
            *(undefined8 *)(local_348.AllocatorInstance.Data + (longlong)pFVar55 + 8) = uVar28;
            *(undefined8 *)(local_348.AllocatorInstance.Data + 0x10 + (longlong)pFVar55) = uVar29;
            *(undefined8 *)(local_348.AllocatorInstance.Data + 0x10 + (longlong)pFVar55 + 8) =
                 uVar30;
            *(undefined8 *)(local_348.AllocatorInstance.Data + 0x20 + (longlong)pFVar55) = uVar31;
            *(undefined8 *)(local_348.AllocatorInstance.Data + 0x20 + (longlong)pFVar55 + 8) =
                 uVar32;
            *(undefined8 *)(local_348.AllocatorInstance.Data + 0x30 + (longlong)pFVar55) = uVar33;
            *(undefined8 *)(local_348.AllocatorInstance.Data + 0x30 + (longlong)pFVar55 + 8) =
                 uVar34;
            uVar52 = 0;
            if ((int)uVar51 < local_358.ArrayNum) {
              uVar52 = uVar50;
            }
            if (uVar52 == 0) {
              bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar39) {
                pcVar3 = (code *)swi(3);
                uVar40 = (*pcVar3)();
                return (bool)uVar40;
              }
            }
            pFVar54 = local_358.AllocatorInstance.Data + (longlong)(int)uVar51 * 0x40;
            uVar52 = 0;
            if ((int)uVar42 < local_358.ArrayNum) {
              uVar52 = ~uVar42 >> 0x1f;
            }
            if ((uVar52 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            VectorMatrixMultiply
                      (&local_178,(TMatrix<float> *)pFVar54,
                       (TMatrix<float> *)(local_358.AllocatorInstance.Data + local_2d8));
            uVar34 = local_178.M[3]._8_8_;
            uVar33 = local_178.M[3]._0_8_;
            uVar32 = local_178.M[2]._8_8_;
            uVar31 = local_178.M[2]._0_8_;
            uVar30 = local_178.M[1]._8_8_;
            uVar29 = local_178.M[1]._0_8_;
            uVar28 = local_178.M[0]._8_8_;
            uVar27 = local_178.M[0]._0_8_;
            uVar42 = 0;
            if ((int)uVar51 < local_358.ArrayNum) {
              uVar42 = uVar50;
            }
            if ((uVar42 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar3 = (code *)swi(3);
              uVar40 = (*pcVar3)();
              return (bool)uVar40;
            }
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)pFVar55) = uVar27;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)pFVar55 + 8) = uVar28;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x10 + (longlong)pFVar55) = uVar29;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x10 + (longlong)pFVar55 + 8) =
                 uVar30;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x20 + (longlong)pFVar55) = uVar31;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x20 + (longlong)pFVar55 + 8) =
                 uVar32;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x30 + (longlong)pFVar55) = uVar33;
            *(undefined8 *)(local_358.AllocatorInstance.Data + 0x30 + (longlong)pFVar55 + 8) =
                 uVar34;
          }
          uVar42 = 0;
          if ((int)uVar51 < local_348.ArrayNum) {
            uVar42 = uVar50;
          }
          if ((uVar42 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar3 = (code *)swi(3);
            uVar40 = (*pcVar3)();
            return (bool)uVar40;
          }
          pTVar48 = UE::Math::TMatrix<float>::Inverse
                              ((TMatrix<float> *)
                               (local_348.AllocatorInstance.Data + (longlong)(int)uVar51 * 0x40),
                               &local_f8);
          uVar42 = 0;
          if ((int)uVar51 < local_358.ArrayNum) {
            uVar42 = ~uVar51 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar3 = (code *)swi(3);
            uVar40 = (*pcVar3)();
            return (bool)uVar40;
          }
          VectorMatrixMultiply
                    (&local_138,pTVar48,
                     (TMatrix<float> *)
                     (local_358.AllocatorInstance.Data + (longlong)(int)uVar51 * 0x40));
          uVar34 = local_138.M[3]._8_8_;
          uVar33 = local_138.M[3]._0_8_;
          uVar32 = local_138.M[2]._8_8_;
          uVar31 = local_138.M[2]._0_8_;
          uVar30 = local_138.M[1]._8_8_;
          uVar29 = local_138.M[1]._0_8_;
          uVar28 = local_138.M[0]._8_8_;
          uVar27 = local_138.M[0]._0_8_;
          uVar42 = 0;
          if ((int)uVar51 < local_338.ArrayNum) {
            uVar42 = ~uVar51 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar39)) {
            pcVar3 = (code *)swi(3);
            uVar40 = (*pcVar3)();
            return (bool)uVar40;
          }
          pFVar49 = (FMeshAttributeArraySetBase *)(ulonglong)(uVar51 + 1);
          *(undefined8 *)(local_338.AllocatorInstance.Data + (longlong)pFVar55) = uVar27;
          *(undefined8 *)(local_338.AllocatorInstance.Data + (longlong)pFVar55 + 8) = uVar28;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 0x10 + (longlong)pFVar55) = uVar29;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 0x10 + (longlong)pFVar55 + 8) = uVar30;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 0x20 + (longlong)pFVar55) = uVar31;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 0x20 + (longlong)pFVar55 + 8) = uVar32;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 0x30 + (longlong)pFVar55) = uVar33;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 0x30 + (longlong)pFVar55 + 8) = uVar34;
          pFVar55 = (FMeshAttributeArraySetBase *)&pFVar55[2].NumElements;
          this = local_310.BoneElementsShared;
        } while( true );
      }
    }
  }
  return false;
}

// GetPosedMesh @ 1443a5400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSkeletalMeshOperations::GetPosedMesh
          (FMeshDescription *param_1,FMeshDescription *param_2,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_3,FName param_4,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_5)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TMeshAttributesRef<FBoneID,int_const_> TVar16;
  FMeshDescription *pFVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  undefined1 uVar27;
  uint uVar28;
  uint uVar29;
  FMeshElementContainer *pFVar30;
  FName FVar31;
  FAttributesSetEntry *pFVar32;
  TTransform<double> *pTVar33;
  TMatrix<float> *pTVar34;
  int iVar35;
  FMeshAttributeArraySetBase *pFVar36;
  FMeshElementChannels *this;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  FMeshElementChannels *this_00;
  uint uVar39;
  FMeshAttributeArraySetBase *pFVar40;
  longlong lVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
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
  undefined1 auStack_428 [32];
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_3e8;
  TMeshAttributesRef<FBoneID,int_const_> local_3d8;
  FMeshDescription *local_3d0;
  FSkeletalMeshAttributesShared local_3c8;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_> local_3b0;
  TArrayView<UE::Math::TTransform<double>_const_,int> *local_3a8;
  FMeshDescription *local_3a0;
  FMeshDescription *local_398;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_390;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  undefined1 local_378 [16];
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_368;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  FSkeletalMeshAttributes local_338;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TMatrix<float> local_238;
  TMatrix<float> local_1f8;
  TMatrix<float> local_1b8;
  TMatrix<float> local_178;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_428;
  local_390 = param_5;
  local_3d0 = param_1;
  local_3a8 = param_3;
  local_3a0 = param_1;
  local_398 = param_2;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_3c8,param_1);
  this = local_3c8.BoneElementsShared;
  pFVar30 = FMeshElementChannels::Get(local_3c8.BoneElementsShared,0);
  bVar26 = FAttributesSetBase::HasAttribute(&pFVar30->Attributes,MeshAttribute::Bone::Pose);
  if (bVar26) {
    pFVar30 = FMeshElementChannels::Get(this,0);
    bVar26 = FAttributesSetBase::HasAttribute(&pFVar30->Attributes,MeshAttribute::Bone::ParentIndex)
    ;
    if (bVar26) {
      pFVar30 = FMeshElementChannels::Get((local_3c8.MeshDescriptionShared)->VertexElements,0);
      FVar31 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_378);
      pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar30->Attributes,*(FName *)FVar31);
      if ((((pFVar32 != (FAttributesSetEntry *)0x0) &&
           (pFVar36 = (pFVar32->Ptr).Ptr, pFVar36->Type == 4)) && (pFVar36->Extent == 0)) &&
         (pFVar36 != (FMeshAttributeArraySetBase *)0x0)) {
        if (this == (FMeshElementChannels *)0x0) {
          iVar35 = 0;
          this_00 = (FMeshElementChannels *)0x0;
        }
        else {
          pFVar30 = FMeshElementChannels::Get(this,0);
          iVar35 = (pFVar30->BitArray).NumBits - pFVar30->NumHoles;
          this_00 = this;
        }
        if (iVar35 == param_3->ArrayNum) {
          local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e8.ArrayNum = 0;
          local_3e8.ArrayMax = 0;
          local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f8.ArrayNum = 0;
          local_3f8.ArrayMax = 0;
          pFVar30 = FMeshElementChannels::Get(this_00,0);
          pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar30->Attributes,MeshAttribute::Bone::Pose);
          if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
              (local_3b0.ArrayPtr = (pFVar32->Ptr).Ptr, (local_3b0.ArrayPtr)->Type != 7)) ||
             ((local_3b0.ArrayPtr)->Extent != 1)) {
            local_3b0.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
          }
          pFVar30 = FMeshElementChannels::Get(this_00,0);
          pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar30->Attributes,MeshAttribute::Bone::ParentIndex);
          if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
              (local_3d8.ArrayPtr = (pFVar32->Ptr).Ptr, (local_3d8.ArrayPtr)->Type != 4)) ||
             ((local_3d8.ArrayPtr)->Extent != 1)) {
            local_3d8.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
          }
          iVar35 = FSkeletalMeshAttributesShared::GetNumBones(&local_3c8);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_3e8,iVar35,Default);
          iVar35 = FSkeletalMeshAttributesShared::GetNumBones(&local_3c8);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_3f8,iVar35,Default);
          uVar38 = 0;
          lVar41 = 0;
          while( true ) {
            if (this == (FMeshElementChannels *)0x0) {
              iVar35 = 0;
            }
            else {
              pFVar30 = FMeshElementChannels::Get(this,0);
              iVar35 = (pFVar30->BitArray).NumBits - pFVar30->NumHoles;
            }
            pFVar17 = local_398;
            if (iVar35 <= (int)uVar38) {
              FMeshDescription::operator=(local_398,local_3a0);
              iStack_380 = local_3e8.ArrayNum;
              local_388 = local_3e8.AllocatorInstance.Data;
              if ((local_3e8.ArrayNum < 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar26)) {
                pcVar4 = (code *)swi(3);
                uVar27 = (*pcVar4)();
                return (bool)uVar27;
              }
              local_368._12_4_ = uStack_37c;
              local_368.ArrayNum = iStack_380;
              local_368.DataPtr = (TMatrix<float> *)local_388;
              UE::Impl::PoseMesh(pFVar17,&local_368,param_4,local_390,false);
              FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_338,pFVar17);
              pFVar30 = FMeshElementChannels::Get(local_338.BoneElements,0);
              pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                                *)&pFVar30->Attributes,MeshAttribute::Bone::Pose);
              if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
                  (pFVar36 = (pFVar32->Ptr).Ptr, pFVar36->Type != 7)) || (pFVar36->Extent != 1)) {
                pFVar36 = (FMeshAttributeArraySetBase *)0x0;
              }
              uVar38 = 0;
              lVar41 = 0;
              while( true ) {
                if (this == (FMeshElementChannels *)0x0) {
                  iVar35 = 0;
                }
                else {
                  pFVar30 = FMeshElementChannels::Get(this,0);
                  iVar35 = (pFVar30->BitArray).NumBits - pFVar30->NumHoles;
                }
                TVar16.ArrayPtr = local_3d8.ArrayPtr;
                if (iVar35 <= (int)uVar38) {
                  if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3f8.AllocatorInstance.Data);
                  }
                  if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3e8.AllocatorInstance.Data);
                  }
                  return true;
                }
                pFVar40 = local_3d8.ArrayPtr + 1;
                if (((int)local_3d8.ArrayPtr[2].Type < 1) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar4 = (code *)swi(3);
                  uVar27 = (*pcVar4)();
                  return (bool)uVar27;
                }
                if ((FMeshAttributeArraySetBase *)TVar16.ArrayPtr[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar40 = (FMeshAttributeArraySetBase *)TVar16.ArrayPtr[2]._padding_;
                }
                uVar28 = uVar38 * pFVar40->NumElements;
                uVar29 = 0;
                if ((int)uVar28 < (int)pFVar40->Type) {
                  uVar29 = ~uVar28 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar4 = (code *)swi(3);
                  uVar27 = (*pcVar4)();
                  return (bool)uVar27;
                }
                iVar35 = *(int *)(pFVar40->_padding_ + (longlong)(int)uVar28 * 4);
                uVar29 = 0;
                if ((int)uVar38 < param_3->ArrayNum) {
                  uVar29 = ~uVar38 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar26)) {
                  pcVar4 = (code *)swi(3);
                  uVar27 = (*pcVar4)();
                  return (bool)uVar27;
                }
                pTVar33 = param_3->DataPtr;
                pdVar1 = (double *)((longlong)(pTVar33->Rotation).XY.m128d_f64 + lVar41);
                dVar49 = *pdVar1;
                dVar52 = pdVar1[1];
                puVar2 = (undefined4 *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + lVar41);
                uVar53 = *puVar2;
                uVar54 = puVar2[1];
                uVar55 = puVar2[2];
                uVar56 = puVar2[3];
                puVar2 = (undefined4 *)((longlong)(pTVar33->Translation).XY.m128d_f64 + lVar41);
                uVar57 = *puVar2;
                uVar58 = puVar2[1];
                uVar59 = puVar2[2];
                uVar60 = puVar2[3];
                puVar2 = (undefined4 *)((longlong)(pTVar33->Translation).ZW.m128d_f64 + lVar41);
                uVar61 = *puVar2;
                uVar62 = puVar2[1];
                uVar63 = puVar2[2];
                uVar64 = puVar2[3];
                puVar2 = (undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + lVar41);
                uVar65 = *puVar2;
                uVar66 = puVar2[1];
                uVar67 = puVar2[2];
                uVar68 = puVar2[3];
                puVar2 = (undefined4 *)((longlong)(pTVar33->Scale3D).ZW.m128d_f64 + lVar41);
                uVar69 = *puVar2;
                uVar70 = puVar2[1];
                uVar71 = puVar2[2];
                uVar72 = puVar2[3];
                if (iVar35 != -1) {
                  local_298.Rotation.XY.m128d_f64[0] = dVar49;
                  local_298.Rotation.XY.m128d_f64[1] = dVar52;
                  local_298.Rotation.ZW.m128d_f64[0]._0_4_ = uVar53;
                  local_298.Rotation.ZW.m128d_f64[0]._4_4_ = uVar54;
                  local_298.Rotation.ZW.m128d_f64[1]._0_4_ = uVar55;
                  local_298.Rotation.ZW.m128d_f64[1]._4_4_ = uVar56;
                  local_298.Translation.XY.m128d_f64[0]._0_4_ = uVar57;
                  local_298.Translation.XY.m128d_f64[0]._4_4_ = uVar58;
                  local_298.Translation.XY.m128d_f64[1]._0_4_ = uVar59;
                  local_298.Translation.XY.m128d_f64[1]._4_4_ = uVar60;
                  local_298.Translation.ZW.m128d_f64[0]._0_4_ = uVar61;
                  local_298.Translation.ZW.m128d_f64[0]._4_4_ = uVar62;
                  local_298.Translation.ZW.m128d_f64[1]._0_4_ = uVar63;
                  local_298.Translation.ZW.m128d_f64[1]._4_4_ = uVar64;
                  local_298.Scale3D.XY.m128d_f64[0]._0_4_ = uVar65;
                  local_298.Scale3D.XY.m128d_f64[0]._4_4_ = uVar66;
                  local_298.Scale3D.XY.m128d_f64[1]._0_4_ = uVar67;
                  local_298.Scale3D.XY.m128d_f64[1]._4_4_ = uVar68;
                  local_298.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar69;
                  local_298.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar70;
                  local_298.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar71;
                  local_298.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar72;
                  pTVar33 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                      (param_3,iVar35);
                  pTVar33 = UE::Math::TTransform<double>::GetRelativeTransform
                                      (&local_298,&local_138,pTVar33);
                  dVar49 = (pTVar33->Rotation).XY.m128d_f64[0];
                  dVar52 = (pTVar33->Rotation).XY.m128d_f64[1];
                  uVar53 = *(undefined4 *)(pTVar33->Rotation).ZW.m128d_f64;
                  uVar54 = *(undefined4 *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + 4);
                  uVar55 = *(undefined4 *)((pTVar33->Rotation).ZW.m128d_f64 + 1);
                  uVar56 = *(undefined4 *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + 0xc);
                  uVar57 = *(undefined4 *)(pTVar33->Translation).XY.m128d_f64;
                  uVar58 = *(undefined4 *)((longlong)(pTVar33->Translation).XY.m128d_f64 + 4);
                  uVar59 = *(undefined4 *)((pTVar33->Translation).XY.m128d_f64 + 1);
                  uVar60 = *(undefined4 *)((longlong)(pTVar33->Translation).XY.m128d_f64 + 0xc);
                  uVar61 = *(undefined4 *)(pTVar33->Translation).ZW.m128d_f64;
                  uVar62 = *(undefined4 *)((longlong)(pTVar33->Translation).ZW.m128d_f64 + 4);
                  uVar63 = *(undefined4 *)((pTVar33->Translation).ZW.m128d_f64 + 1);
                  uVar64 = *(undefined4 *)((longlong)(pTVar33->Translation).ZW.m128d_f64 + 0xc);
                  uVar65 = *(undefined4 *)(pTVar33->Scale3D).XY.m128d_f64;
                  uVar66 = *(undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + 4);
                  uVar67 = *(undefined4 *)((pTVar33->Scale3D).XY.m128d_f64 + 1);
                  uVar68 = *(undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + 0xc);
                  uVar69 = *(undefined4 *)(pTVar33->Scale3D).ZW.m128d_f64;
                  uVar70 = *(undefined4 *)((longlong)(pTVar33->Scale3D).ZW.m128d_f64 + 4);
                  uVar71 = *(undefined4 *)((pTVar33->Scale3D).ZW.m128d_f64 + 1);
                  uVar72 = *(undefined4 *)((longlong)(pTVar33->Scale3D).ZW.m128d_f64 + 0xc);
                }
                local_298.Rotation.XY.m128d_f64[0] = dVar49;
                local_298.Rotation.XY.m128d_f64[1] = dVar52;
                local_298.Rotation.ZW.m128d_f64[0]._0_4_ = uVar53;
                local_298.Rotation.ZW.m128d_f64[0]._4_4_ = uVar54;
                local_298.Rotation.ZW.m128d_f64[1]._0_4_ = uVar55;
                local_298.Rotation.ZW.m128d_f64[1]._4_4_ = uVar56;
                local_298.Translation.XY.m128d_f64[0]._0_4_ = uVar57;
                local_298.Translation.XY.m128d_f64[0]._4_4_ = uVar58;
                local_298.Translation.XY.m128d_f64[1]._0_4_ = uVar59;
                local_298.Translation.XY.m128d_f64[1]._4_4_ = uVar60;
                local_298.Translation.ZW.m128d_f64[0]._0_4_ = uVar61;
                local_298.Translation.ZW.m128d_f64[0]._4_4_ = uVar62;
                local_298.Translation.ZW.m128d_f64[1]._0_4_ = uVar63;
                local_298.Translation.ZW.m128d_f64[1]._4_4_ = uVar64;
                local_298.Scale3D.XY.m128d_f64[0]._0_4_ = uVar65;
                local_298.Scale3D.XY.m128d_f64[0]._4_4_ = uVar66;
                local_298.Scale3D.XY.m128d_f64[1]._0_4_ = uVar67;
                local_298.Scale3D.XY.m128d_f64[1]._4_4_ = uVar68;
                local_298.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar69;
                local_298.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar70;
                local_298.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar71;
                local_298.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar72;
                if (((int)pFVar36[2].Type < 1) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) break;
                pFVar40 = pFVar36 + 1;
                if ((FMeshAttributeArraySetBase *)pFVar36[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar40 = (FMeshAttributeArraySetBase *)pFVar36[2]._padding_;
                }
                pTVar33 = TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::GetElementBase
                                    ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                                     pFVar40,uVar38);
                uVar38 = uVar38 + 1;
                lVar41 = lVar41 + 0x60;
                (pTVar33->Rotation).XY.m128d_f64[0] = dVar49;
                (pTVar33->Rotation).XY.m128d_f64[1] = dVar52;
                *(undefined4 *)(pTVar33->Rotation).ZW.m128d_f64 = uVar53;
                *(undefined4 *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + 4) = uVar54;
                *(undefined4 *)((pTVar33->Rotation).ZW.m128d_f64 + 1) = uVar55;
                *(undefined4 *)((longlong)(pTVar33->Rotation).ZW.m128d_f64 + 0xc) = uVar56;
                *(undefined4 *)(pTVar33->Translation).XY.m128d_f64 = uVar57;
                *(undefined4 *)((longlong)(pTVar33->Translation).XY.m128d_f64 + 4) = uVar58;
                *(undefined4 *)((pTVar33->Translation).XY.m128d_f64 + 1) = uVar59;
                *(undefined4 *)((longlong)(pTVar33->Translation).XY.m128d_f64 + 0xc) = uVar60;
                *(undefined4 *)(pTVar33->Translation).ZW.m128d_f64 = uVar61;
                *(undefined4 *)((longlong)(pTVar33->Translation).ZW.m128d_f64 + 4) = uVar62;
                *(undefined4 *)((pTVar33->Translation).ZW.m128d_f64 + 1) = uVar63;
                *(undefined4 *)((longlong)(pTVar33->Translation).ZW.m128d_f64 + 0xc) = uVar64;
                *(undefined4 *)(pTVar33->Scale3D).XY.m128d_f64 = uVar65;
                *(undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + 4) = uVar66;
                *(undefined4 *)((pTVar33->Scale3D).XY.m128d_f64 + 1) = uVar67;
                *(undefined4 *)((longlong)(pTVar33->Scale3D).XY.m128d_f64 + 0xc) = uVar68;
                *(undefined4 *)(pTVar33->Scale3D).ZW.m128d_f64 = uVar69;
                *(undefined4 *)((longlong)(pTVar33->Scale3D).ZW.m128d_f64 + 4) = uVar70;
                *(undefined4 *)((pTVar33->Scale3D).ZW.m128d_f64 + 1) = uVar71;
                *(undefined4 *)((longlong)(pTVar33->Scale3D).ZW.m128d_f64 + 0xc) = uVar72;
              }
              pcVar4 = (code *)swi(3);
              uVar27 = (*pcVar4)();
              return (bool)uVar27;
            }
            uVar28 = TMeshAttributesRef<FBoneID,int_const_>::Get(&local_3d8,uVar38,0);
            pTVar33 = TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_>::Get
                                (&local_3b0,&local_2f8,uVar38,0);
            local_348 = (pTVar33->Rotation).ZW.m128d_f64[0];
            dStack_340 = (pTVar33->Rotation).ZW.m128d_f64[1];
            dVar52 = (pTVar33->Rotation).XY.m128d_f64[0];
            dVar49 = (pTVar33->Rotation).XY.m128d_f64[1];
            dVar43 = (pTVar33->Rotation).XY.m128d_f64[0];
            dVar47 = dVar49 + dVar49;
            dVar46 = local_348 + local_348;
            dVar9 = (dVar52 + dVar52) * dVar52;
            dVar6 = dVar46 * local_348;
            auVar3 = *(undefined1 (*) [16])(pTVar33->Scale3D).XY.m128d_f64;
            auVar51._8_4_ = SUB84(dVar47 * dVar49,0);
            auVar51._0_8_ = dVar9;
            auVar51._12_4_ = (int)((ulonglong)(dVar47 * dVar49) >> 0x20);
            auVar48 = blendpd(auVar3,*(undefined1 (*) [16])(pTVar33->Scale3D).ZW.m128d_f64,2);
            dVar49 = (pTVar33->Scale3D).ZW.m128d_f64[0];
            dVar45 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
            local_358 = (pTVar33->Rotation).XY.m128d_f64[0];
            dStack_350 = (pTVar33->Rotation).XY.m128d_f64[1];
            dVar10 = (pTVar33->Scale3D).XY.m128d_f64[1];
            dVar7 = dStack_340 * dVar46;
            dVar8 = dStack_340 * (dVar52 + dVar52);
            dVar42 = dVar47 * dVar43;
            dVar44 = dVar46 * (pTVar33->Rotation).XY.m128d_f64[1];
            dVar11 = (pTVar33->Scale3D).XY.m128d_f64[1];
            dVar52 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
            dVar12 = (pTVar33->Scale3D).ZW.m128d_f64[0];
            dVar13 = (pTVar33->Translation).ZW.m128d_f64[0];
            dVar43 = dVar43 * dVar46;
            dVar47 = dVar47 * dStack_340;
            auVar50._0_4_ =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar6 + auVar51._8_8_)
                         ) * (pTVar33->Scale3D).XY.m128d_f64[0]);
            auVar50._4_4_ = (float)((dVar7 + dVar42) * (pTVar33->Scale3D).XY.m128d_f64[0]);
            auVar50._8_4_ = (float)(auVar48._0_8_ * (dVar43 - dVar47));
            auVar50._12_4_ = 0;
            uVar39 = ~uVar38 >> 0x1f;
            dVar46 = (pTVar33->Scale3D).ZW.m128d_f64[0];
            dVar14 = (pTVar33->Translation).XY.m128d_f64[0];
            dVar15 = (pTVar33->Translation).XY.m128d_f64[1];
            uVar29 = 0;
            if ((int)uVar38 < local_3f8.ArrayNum) {
              uVar29 = uVar39;
            }
            dVar5 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar4 = (code *)swi(3);
              uVar27 = (*pcVar4)();
              return (bool)uVar27;
            }
            *(undefined1 (*) [16])(local_3f8.AllocatorInstance.Data + lVar41) = auVar50;
            auVar48._4_4_ = (float)((dVar45 - (dVar6 + dVar9)) * dVar10);
            auVar48._0_4_ = (float)(auVar3._8_8_ * (dVar42 - dVar7));
            auVar48._8_4_ = (float)((dVar8 + dVar44) * dVar11);
            auVar48._12_4_ = 0;
            *(undefined1 (*) [16])(local_3f8.AllocatorInstance.Data + lVar41 + 0x10) = auVar48;
            auVar3._4_4_ = (float)(dVar49 * (dVar44 - dVar8));
            auVar3._0_4_ = (float)((dVar47 + dVar43) * dVar46);
            auVar3._8_4_ = (float)((dVar52 - (dVar9 + auVar51._8_8_)) * dVar12);
            auVar3._12_4_ = 0;
            *(undefined1 (*) [16])(local_3f8.AllocatorInstance.Data + lVar41 + 0x20) = auVar3;
            pFVar37 = local_3f8.AllocatorInstance.Data + lVar41 + 0x30;
            *(float *)pFVar37 = (float)dVar14;
            *(float *)(pFVar37 + 4) = (float)dVar15;
            *(float *)(pFVar37 + 8) = (float)dVar13;
            *(float *)(pFVar37 + 0xc) = (float)dVar5;
            if (uVar28 != 0xffffffff) {
              uVar29 = 0;
              if ((int)uVar38 < local_3f8.ArrayNum) {
                uVar29 = uVar39;
              }
              if (uVar29 == 0) {
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar26) {
                  pcVar4 = (code *)swi(3);
                  uVar27 = (*pcVar4)();
                  return (bool)uVar27;
                }
              }
              pFVar37 = local_3f8.AllocatorInstance.Data + (longlong)(int)uVar38 * 0x40;
              uVar29 = 0;
              if ((int)uVar28 < local_3f8.ArrayNum) {
                uVar29 = ~uVar28 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar4 = (code *)swi(3);
                uVar27 = (*pcVar4)();
                return (bool)uVar27;
              }
              VectorMatrixMultiply
                        (&local_238,(TMatrix<float> *)pFVar37,
                         (TMatrix<float> *)
                         (local_3f8.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x40));
              uVar25 = local_238.M[3]._8_8_;
              uVar24 = local_238.M[3]._0_8_;
              uVar23 = local_238.M[2]._8_8_;
              uVar22 = local_238.M[2]._0_8_;
              uVar21 = local_238.M[1]._8_8_;
              uVar20 = local_238.M[1]._0_8_;
              uVar19 = local_238.M[0]._8_8_;
              uVar18 = local_238.M[0]._0_8_;
              uVar29 = 0;
              if ((int)uVar38 < local_3f8.ArrayNum) {
                uVar29 = uVar39;
              }
              if ((uVar29 == 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar26)) {
                pcVar4 = (code *)swi(3);
                uVar27 = (*pcVar4)();
                return (bool)uVar27;
              }
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41) = uVar18;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 8) = uVar19;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 0x10) = uVar20;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 0x10 + 8) = uVar21;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 0x20) = uVar22;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 0x20 + 8) = uVar23;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 0x30) = uVar24;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + lVar41 + 0x30 + 8) = uVar25;
              param_3 = local_3a8;
            }
            uVar29 = 0;
            if ((int)uVar38 < local_3f8.ArrayNum) {
              uVar29 = uVar39;
            }
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar4 = (code *)swi(3);
              uVar27 = (*pcVar4)();
              return (bool)uVar27;
            }
            pTVar34 = UE::Math::TMatrix<float>::Inverse
                                ((TMatrix<float> *)
                                 (local_3f8.AllocatorInstance.Data + (longlong)(int)uVar38 * 0x40),
                                 &local_178);
            pTVar33 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                (param_3,uVar38);
            local_348 = (pTVar33->Rotation).ZW.m128d_f64[0];
            dStack_340 = (pTVar33->Rotation).ZW.m128d_f64[1];
            dVar49 = (pTVar33->Rotation).XY.m128d_f64[0];
            dVar9 = (pTVar33->Rotation).XY.m128d_f64[1];
            auVar3 = *(undefined1 (*) [16])(pTVar33->Scale3D).ZW.m128d_f64;
            dVar7 = (pTVar33->Rotation).XY.m128d_f64[0];
            auVar48 = *(undefined1 (*) [16])(pTVar33->Scale3D).XY.m128d_f64;
            dVar8 = dVar9 + dVar9;
            dVar47 = local_348 + local_348;
            dVar52 = (dVar49 + dVar49) * dVar49;
            dVar43 = dVar8 * dVar7;
            dVar45 = dVar47 * (pTVar33->Rotation).XY.m128d_f64[1];
            local_358 = (pTVar33->Rotation).XY.m128d_f64[0];
            dStack_350 = (pTVar33->Rotation).XY.m128d_f64[1];
            dVar49 = dStack_340 * (dVar49 + dVar49);
            auVar51 = blendpd(auVar48,auVar3,2);
            dVar6 = auVar3._0_8_;
            dVar7 = dVar7 * dVar47;
            local_1f8.M[0][1] =
                 (float)((dStack_340 * dVar47 + dVar43) * (pTVar33->Scale3D).XY.m128d_f64[0]);
            local_1f8.M[0][0] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                         (dVar47 * local_348 + dVar8 * dVar9)) * (pTVar33->Scale3D).XY.m128d_f64[0])
            ;
            local_1f8.M[0][2] = (float)(auVar51._0_8_ * (dVar7 - dVar8 * dStack_340));
            local_1f8.M[0][3] = 0.0;
            local_1f8.M[3][0] = (float)(pTVar33->Translation).XY.m128d_f64[0];
            local_1f8.M[3][1] = (float)(pTVar33->Translation).XY.m128d_f64[1];
            local_1f8.M[1][1] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                         (dVar47 * local_348 + dVar52)) * (pTVar33->Scale3D).XY.m128d_f64[1]);
            local_1f8.M[1][0] = (float)(auVar48._8_8_ * (dVar43 - dStack_340 * dVar47));
            local_1f8.M[1][2] = (float)((dVar49 + dVar45) * (pTVar33->Scale3D).XY.m128d_f64[1]);
            local_1f8.M[1][3] = 0.0;
            local_1f8.M[2][1] = (float)(dVar6 * (dVar45 - dVar49));
            local_1f8.M[2][0] = (float)((dVar8 * dStack_340 + dVar7) * dVar6);
            local_1f8.M[2][2] =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                         (dVar52 + dVar8 * dVar9)) * dVar6);
            local_1f8.M[2][3] = 0.0;
            local_1f8.M[3][2] = (float)(pTVar33->Translation).ZW.m128d_f64[0];
            local_1f8.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            VectorMatrixMultiply(&local_1b8,pTVar34,&local_1f8);
            uVar25 = local_1b8.M[3]._8_8_;
            uVar24 = local_1b8.M[3]._0_8_;
            uVar23 = local_1b8.M[2]._8_8_;
            uVar22 = local_1b8.M[2]._0_8_;
            uVar21 = local_1b8.M[1]._8_8_;
            uVar20 = local_1b8.M[1]._0_8_;
            uVar19 = local_1b8.M[0]._8_8_;
            uVar18 = local_1b8.M[0]._0_8_;
            uVar29 = 0;
            if ((int)uVar38 < local_3e8.ArrayNum) {
              uVar29 = ~uVar38 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) break;
            uVar38 = uVar38 + 1;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41) = uVar18;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 8) = uVar19;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 0x10) = uVar20;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 0x10 + 8) = uVar21;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 0x20) = uVar22;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 0x20 + 8) = uVar23;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 0x30) = uVar24;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + lVar41 + 0x30 + 8) = uVar25;
            lVar41 = lVar41 + 0x40;
            this = local_3c8.BoneElementsShared;
          }
          pcVar4 = (code *)swi(3);
          uVar27 = (*pcVar4)();
          return (bool)uVar27;
        }
      }
    }
  }
  return false;
}

// GetPosedMeshInPlace @ 1443a6070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSkeletalMeshOperations::GetPosedMeshInPlace
          (FMeshDescription *param_1,TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          FName param_3,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_4,bool param_5,bool param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FMeshDescription *pFVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  FMeshElementContainer *pFVar29;
  FName FVar30;
  FAttributesSetEntry *pFVar31;
  TTransform<double> *pTVar32;
  TMatrix<float> *pTVar33;
  int iVar34;
  int iVar35;
  FMeshAttributeArraySetBase *pFVar36;
  FMeshAttributeArraySetBase *this;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  FMeshAttributeArraySetBase *pFVar39;
  FMeshAttributeArraySetBase *pFVar40;
  uint uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_428 [32];
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_3e8;
  TMeshAttributesRef<FBoneID,int_const_> local_3d8;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_> local_3d0;
  TArrayView<UE::Math::TTransform<double>_const_,int> *local_3c8;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_3c0;
  FMeshDescription *local_3b8;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> local_3b0;
  FMeshDescription *local_3a8;
  FSkeletalMeshAttributesShared local_3a0;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  undefined1 local_378 [16];
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_368;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  FSkeletalMeshAttributes local_338;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TMatrix<float> local_238;
  TMatrix<float> local_1f8;
  TMatrix<float> local_1b8;
  TMatrix<float> local_178;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_428;
  local_3c8 = param_2;
  local_3c0 = param_4;
  local_3b8 = param_1;
  local_3a8 = param_1;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_3a0,param_1);
  this = (FMeshAttributeArraySetBase *)local_3a0.BoneElementsShared;
  pFVar29 = FMeshElementChannels::Get(local_3a0.BoneElementsShared,0);
  bVar25 = FAttributesSetBase::HasAttribute(&pFVar29->Attributes,MeshAttribute::Bone::Pose);
  if (bVar25) {
    pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
    bVar25 = FAttributesSetBase::HasAttribute(&pFVar29->Attributes,MeshAttribute::Bone::ParentIndex)
    ;
    if (bVar25) {
      pFVar29 = FMeshElementChannels::Get((local_3a0.MeshDescriptionShared)->VertexElements,0);
      FVar30 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_378);
      pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar29->Attributes,*(FName *)FVar30);
      if ((((pFVar31 != (FAttributesSetEntry *)0x0) &&
           (pFVar39 = (pFVar31->Ptr).Ptr, pFVar39->Type == 4)) && (pFVar39->Extent == 0)) &&
         (pFVar39 != (FMeshAttributeArraySetBase *)0x0)) {
        pFVar40 = (FMeshAttributeArraySetBase *)0x0;
        iVar34 = 0;
        pFVar39 = pFVar40;
        if (this != (FMeshAttributeArraySetBase *)0x0) {
          pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
          iVar34 = (pFVar29->BitArray).NumBits - pFVar29->NumHoles;
          pFVar39 = this;
        }
        if (iVar34 == param_2->ArrayNum) {
          local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e8.ArrayNum = 0;
          local_3e8.ArrayMax = 0;
          local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f8.ArrayNum = 0;
          local_3f8.ArrayMax = 0;
          pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)pFVar39,0);
          pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar29->Attributes,MeshAttribute::Bone::Pose);
          if (((pFVar31 == (FAttributesSetEntry *)0x0) ||
              (local_3d0.ArrayPtr = (pFVar31->Ptr).Ptr, (local_3d0.ArrayPtr)->Type != 7)) ||
             ((local_3d0.ArrayPtr)->Extent != 1)) {
            local_3d0.ArrayPtr = pFVar40;
          }
          pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)pFVar39,0);
          pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar29->Attributes,MeshAttribute::Bone::ParentIndex);
          if (((pFVar31 == (FAttributesSetEntry *)0x0) ||
              (local_3d8.ArrayPtr = (pFVar31->Ptr).Ptr, (local_3d8.ArrayPtr)->Type != 4)) ||
             ((local_3d8.ArrayPtr)->Extent != 1)) {
            local_3d8.ArrayPtr = pFVar40;
          }
          iVar34 = FSkeletalMeshAttributesShared::GetNumBones(&local_3a0);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_3e8,iVar34,Default);
          iVar34 = FSkeletalMeshAttributesShared::GetNumBones(&local_3a0);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_3f8,iVar34,Default);
          pFVar39 = pFVar40;
          do {
            pFVar36 = (FMeshAttributeArraySetBase *)0x0;
            iVar34 = 0;
            if (this != (FMeshAttributeArraySetBase *)0x0) {
              pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
              iVar34 = (pFVar29->BitArray).NumBits - pFVar29->NumHoles;
            }
            uVar38 = (uint)pFVar40;
            if (iVar34 <= (int)uVar38) {
              iVar34 = local_3e8.ArrayNum;
              local_388 = local_3e8.AllocatorInstance.Data;
              if ((local_3e8.ArrayNum < 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar25)) {
                pcVar3 = (code *)swi(3);
                uVar26 = (*pcVar3)();
                return (bool)uVar26;
              }
              pFVar16 = local_3b8;
              iStack_380 = iVar34;
              local_368._12_4_ = uStack_37c;
              local_368.ArrayNum = iVar34;
              local_368.DataPtr = (TMatrix<float> *)local_388;
              UE::Impl::PoseMesh(local_3b8,&local_368,param_3,local_3c0,param_5);
              if (param_6) {
                FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_338,pFVar16);
                pFVar29 = FMeshElementChannels::Get(local_338.BoneElements,0);
                pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                                  *)&pFVar29->Attributes,MeshAttribute::Bone::Pose);
                if (((pFVar31 == (FAttributesSetEntry *)0x0) ||
                    (local_3b0.ArrayPtr = (pFVar31->Ptr).Ptr, (local_3b0.ArrayPtr)->Type != 7)) ||
                   ((local_3b0.ArrayPtr)->Extent != 1)) {
                  local_3b0.ArrayPtr = pFVar36;
                }
                while( true ) {
                  iVar34 = 0;
                  if (this != (FMeshAttributeArraySetBase *)0x0) {
                    pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
                    iVar34 = (pFVar29->BitArray).NumBits - pFVar29->NumHoles;
                  }
                  iVar35 = (int)pFVar36;
                  if (iVar34 <= iVar35) break;
                  iVar34 = TMeshAttributesRef<FBoneID,int_const_>::Get(&local_3d8,iVar35,0);
                  pTVar32 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                      (param_2,iVar35);
                  local_298.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
                  local_298.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
                  local_298.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
                  local_298.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
                  local_298.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
                  local_298.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
                  local_298.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
                  local_298.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
                  local_298.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
                  local_298.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
                  local_298.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
                  local_298.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
                  if (iVar34 != -1) {
                    pTVar32 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                        (param_2,iVar34);
                    pTVar32 = UE::Math::TTransform<double>::GetRelativeTransform
                                        (&local_298,&local_138,pTVar32);
                    local_298.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
                    local_298.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
                    local_298.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
                    local_298.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
                    local_298.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
                    local_298.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
                    local_298.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
                    local_298.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
                    local_298.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
                    local_298.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
                    local_298.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
                    local_298.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
                  }
                  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_>::Set
                            (&local_3b0,iVar35,&local_298);
                  pFVar36 = (FMeshAttributeArraySetBase *)(ulonglong)(iVar35 + 1);
                }
              }
              if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3f8.AllocatorInstance.Data);
              }
              if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e8.AllocatorInstance.Data);
              }
              return true;
            }
            uVar27 = TMeshAttributesRef<FBoneID,int_const_>::Get(&local_3d8,uVar38,0);
            pTVar32 = TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_>::Get
                                (&local_3d0,&local_2f8,uVar38,0);
            local_348 = (pTVar32->Rotation).ZW.m128d_f64[0];
            dStack_340 = (pTVar32->Rotation).ZW.m128d_f64[1];
            dVar9 = (pTVar32->Rotation).XY.m128d_f64[0];
            dVar1 = (pTVar32->Rotation).XY.m128d_f64[1];
            dVar43 = (pTVar32->Rotation).XY.m128d_f64[0];
            dVar47 = dVar1 + dVar1;
            dVar46 = local_348 + local_348;
            dVar8 = (dVar9 + dVar9) * dVar9;
            dVar5 = dVar46 * local_348;
            auVar2 = *(undefined1 (*) [16])(pTVar32->Scale3D).XY.m128d_f64;
            auVar50._8_4_ = SUB84(dVar47 * dVar1,0);
            auVar50._0_8_ = dVar8;
            auVar50._12_4_ = (int)((ulonglong)(dVar47 * dVar1) >> 0x20);
            auVar48 = blendpd(auVar2,*(undefined1 (*) [16])(pTVar32->Scale3D).ZW.m128d_f64,2);
            dVar1 = (pTVar32->Scale3D).ZW.m128d_f64[0];
            dVar45 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
            local_358 = (pTVar32->Rotation).XY.m128d_f64[0];
            dStack_350 = (pTVar32->Rotation).XY.m128d_f64[1];
            dVar10 = (pTVar32->Scale3D).XY.m128d_f64[1];
            dVar6 = dStack_340 * dVar46;
            dVar7 = dStack_340 * (dVar9 + dVar9);
            dVar42 = dVar47 * dVar43;
            dVar44 = dVar46 * (pTVar32->Rotation).XY.m128d_f64[1];
            dVar11 = (pTVar32->Scale3D).XY.m128d_f64[1];
            dVar9 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
            dVar12 = (pTVar32->Scale3D).ZW.m128d_f64[0];
            dVar13 = (pTVar32->Translation).ZW.m128d_f64[0];
            dVar43 = dVar43 * dVar46;
            dVar47 = dVar47 * dStack_340;
            auVar49._0_4_ =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar5 + auVar50._8_8_)
                         ) * (pTVar32->Scale3D).XY.m128d_f64[0]);
            auVar49._4_4_ = (float)((dVar6 + dVar42) * (pTVar32->Scale3D).XY.m128d_f64[0]);
            auVar49._8_4_ = (float)(auVar48._0_8_ * (dVar43 - dVar47));
            auVar49._12_4_ = 0;
            uVar41 = ~uVar38 >> 0x1f;
            dVar46 = (pTVar32->Scale3D).ZW.m128d_f64[0];
            dVar14 = (pTVar32->Translation).XY.m128d_f64[0];
            dVar15 = (pTVar32->Translation).XY.m128d_f64[1];
            uVar28 = 0;
            if ((int)uVar38 < local_3f8.ArrayNum) {
              uVar28 = uVar41;
            }
            dVar4 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar3 = (code *)swi(3);
              uVar26 = (*pcVar3)();
              return (bool)uVar26;
            }
            *(undefined1 (*) [16])(local_3f8.AllocatorInstance.Data + (longlong)&pFVar39->_padding_)
                 = auVar49;
            auVar48._4_4_ = (float)((dVar45 - (dVar5 + dVar8)) * dVar10);
            auVar48._0_4_ = (float)(auVar2._8_8_ * (dVar42 - dVar6));
            auVar48._8_4_ = (float)((dVar7 + dVar44) * dVar11);
            auVar48._12_4_ = 0;
            *(undefined1 (*) [16])
             ((longlong)&pFVar39->NumElements + local_3f8.AllocatorInstance.Data) = auVar48;
            auVar2._4_4_ = (float)(dVar1 * (dVar44 - dVar7));
            auVar2._0_4_ = (float)((dVar47 + dVar43) * dVar46);
            auVar2._8_4_ = (float)((dVar9 - (dVar8 + auVar50._8_8_)) * dVar12);
            auVar2._12_4_ = 0;
            *(undefined1 (*) [16])((longlong)&pFVar39[1].Type + local_3f8.AllocatorInstance.Data) =
                 auVar2;
            pFVar37 = local_3f8.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_;
            *(float *)pFVar37 = (float)dVar14;
            *(float *)(pFVar37 + 4) = (float)dVar15;
            *(float *)(pFVar37 + 8) = (float)dVar13;
            *(float *)(pFVar37 + 0xc) = (float)dVar4;
            if (uVar27 != 0xffffffff) {
              uVar28 = 0;
              if ((int)uVar38 < local_3f8.ArrayNum) {
                uVar28 = uVar41;
              }
              if (uVar28 == 0) {
                bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar25) {
                  pcVar3 = (code *)swi(3);
                  uVar26 = (*pcVar3)();
                  return (bool)uVar26;
                }
              }
              pFVar37 = local_3f8.AllocatorInstance.Data + (longlong)(int)uVar38 * 0x40;
              uVar28 = 0;
              if ((int)uVar27 < local_3f8.ArrayNum) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar3 = (code *)swi(3);
                uVar26 = (*pcVar3)();
                return (bool)uVar26;
              }
              VectorMatrixMultiply
                        (&local_238,(TMatrix<float> *)pFVar37,
                         (TMatrix<float> *)
                         (local_3f8.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x40));
              uVar24 = local_238.M[3]._8_8_;
              uVar23 = local_238.M[3]._0_8_;
              uVar22 = local_238.M[2]._8_8_;
              uVar21 = local_238.M[2]._0_8_;
              uVar20 = local_238.M[1]._8_8_;
              uVar19 = local_238.M[1]._0_8_;
              uVar18 = local_238.M[0]._8_8_;
              uVar17 = local_238.M[0]._0_8_;
              uVar28 = 0;
              if ((int)uVar38 < local_3f8.ArrayNum) {
                uVar28 = uVar41;
              }
              if ((uVar28 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar3 = (code *)swi(3);
                uVar26 = (*pcVar3)();
                return (bool)uVar26;
              }
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + (longlong)&pFVar39->_padding_) =
                   uVar17;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + (longlong)&pFVar39->_padding_ + 8)
                   = uVar18;
              pFVar37 = (longlong)&pFVar39->NumElements + local_3f8.AllocatorInstance.Data;
              *(undefined8 *)pFVar37 = uVar19;
              *(undefined8 *)(pFVar37 + 8) = uVar20;
              pFVar37 = (longlong)&pFVar39[1].Type + local_3f8.AllocatorInstance.Data;
              *(undefined8 *)pFVar37 = uVar21;
              *(undefined8 *)(pFVar37 + 8) = uVar22;
              *(undefined8 *)(local_3f8.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_) =
                   uVar23;
              *(undefined8 *)
               (local_3f8.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_ + 8) = uVar24;
              param_2 = local_3c8;
            }
            uVar28 = 0;
            if ((int)uVar38 < local_3f8.ArrayNum) {
              uVar28 = uVar41;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar3 = (code *)swi(3);
              uVar26 = (*pcVar3)();
              return (bool)uVar26;
            }
            pTVar33 = UE::Math::TMatrix<float>::Inverse
                                ((TMatrix<float> *)
                                 (local_3f8.AllocatorInstance.Data + (longlong)(int)uVar38 * 0x40),
                                 &local_178);
            pTVar32 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                (param_2,uVar38);
            local_348 = (pTVar32->Rotation).ZW.m128d_f64[0];
            dStack_340 = (pTVar32->Rotation).ZW.m128d_f64[1];
            dVar1 = (pTVar32->Rotation).XY.m128d_f64[0];
            dVar8 = (pTVar32->Rotation).XY.m128d_f64[1];
            auVar2 = *(undefined1 (*) [16])(pTVar32->Scale3D).ZW.m128d_f64;
            dVar6 = (pTVar32->Rotation).XY.m128d_f64[0];
            auVar48 = *(undefined1 (*) [16])(pTVar32->Scale3D).XY.m128d_f64;
            dVar7 = dVar8 + dVar8;
            dVar47 = local_348 + local_348;
            dVar9 = (dVar1 + dVar1) * dVar1;
            dVar43 = dVar7 * dVar6;
            dVar45 = dVar47 * (pTVar32->Rotation).XY.m128d_f64[1];
            local_358 = (pTVar32->Rotation).XY.m128d_f64[0];
            dStack_350 = (pTVar32->Rotation).XY.m128d_f64[1];
            dVar1 = dStack_340 * (dVar1 + dVar1);
            auVar50 = blendpd(auVar48,auVar2,2);
            dVar5 = auVar2._0_8_;
            dVar6 = dVar6 * dVar47;
            local_1f8.M[0][1] =
                 (float)((dStack_340 * dVar47 + dVar43) * (pTVar32->Scale3D).XY.m128d_f64[0]);
            local_1f8.M[0][0] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                         (dVar47 * local_348 + dVar7 * dVar8)) * (pTVar32->Scale3D).XY.m128d_f64[0])
            ;
            local_1f8.M[0][2] = (float)(auVar50._0_8_ * (dVar6 - dVar7 * dStack_340));
            local_1f8.M[0][3] = 0.0;
            local_1f8.M[3][0] = (float)(pTVar32->Translation).XY.m128d_f64[0];
            local_1f8.M[3][1] = (float)(pTVar32->Translation).XY.m128d_f64[1];
            local_1f8.M[1][1] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                         (dVar47 * local_348 + dVar9)) * (pTVar32->Scale3D).XY.m128d_f64[1]);
            local_1f8.M[1][0] = (float)(auVar48._8_8_ * (dVar43 - dStack_340 * dVar47));
            local_1f8.M[1][2] = (float)((dVar1 + dVar45) * (pTVar32->Scale3D).XY.m128d_f64[1]);
            local_1f8.M[1][3] = 0.0;
            local_1f8.M[2][1] = (float)(dVar5 * (dVar45 - dVar1));
            local_1f8.M[2][0] = (float)((dVar7 * dStack_340 + dVar6) * dVar5);
            local_1f8.M[2][2] =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar9 + dVar7 * dVar8)
                         ) * dVar5);
            local_1f8.M[2][3] = 0.0;
            local_1f8.M[3][2] = (float)(pTVar32->Translation).ZW.m128d_f64[0];
            local_1f8.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            VectorMatrixMultiply(&local_1b8,pTVar33,&local_1f8);
            uVar24 = local_1b8.M[3]._8_8_;
            uVar23 = local_1b8.M[3]._0_8_;
            uVar22 = local_1b8.M[2]._8_8_;
            uVar21 = local_1b8.M[2]._0_8_;
            uVar20 = local_1b8.M[1]._8_8_;
            uVar19 = local_1b8.M[1]._0_8_;
            uVar18 = local_1b8.M[0]._8_8_;
            uVar17 = local_1b8.M[0]._0_8_;
            uVar28 = 0;
            if ((int)uVar38 < local_3e8.ArrayNum) {
              uVar28 = ~uVar38 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar3 = (code *)swi(3);
              uVar26 = (*pcVar3)();
              return (bool)uVar26;
            }
            pFVar40 = (FMeshAttributeArraySetBase *)(ulonglong)(uVar38 + 1);
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + (longlong)&pFVar39->_padding_) =
                 uVar17;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + (longlong)&pFVar39->_padding_ + 8) =
                 uVar18;
            pFVar37 = (longlong)&pFVar39->NumElements + local_3e8.AllocatorInstance.Data;
            *(undefined8 *)pFVar37 = uVar19;
            *(undefined8 *)(pFVar37 + 8) = uVar20;
            pFVar37 = (longlong)&pFVar39[1].Type + local_3e8.AllocatorInstance.Data;
            *(undefined8 *)pFVar37 = uVar21;
            *(undefined8 *)(pFVar37 + 8) = uVar22;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_) =
                 uVar23;
            *(undefined8 *)(local_3e8.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_ + 8)
                 = uVar24;
            pFVar39 = (FMeshAttributeArraySetBase *)&pFVar39[2].NumElements;
            this = (FMeshAttributeArraySetBase *)local_3a0.BoneElementsShared;
          } while( true );
        }
      }
    }
  }
  return false;
}

// GetUnposedMesh @ 1443a86a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSkeletalMeshOperations::GetUnposedMesh
          (FMeshDescription *param_1,FMeshDescription *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          FMeshDescription *param_4,TArrayView<UE::Math::TTransform<double>_const_,int> *param_5,
          FName param_6,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_7)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TMeshAttributesRef<FBoneID,int_const_> TVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  FMeshDescription *pFVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined1 uVar25;
  uint uVar26;
  FMeshElementContainer *pFVar27;
  FName FVar28;
  FAttributesSetEntry *pFVar29;
  TMatrix<float> *pTVar30;
  TTransform<double> *pTVar31;
  int iVar32;
  FMeshAttributeArraySetBase *pFVar33;
  FMeshAttributeArraySetBase *this;
  uint uVar34;
  FMeshAttributeArraySetBase *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint uVar38;
  FMeshAttributeArraySetBase *pFVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  double dVar56;
  double dVar57;
  double dVar59;
  undefined1 auVar58 [16];
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined1 auStackY_398 [32];
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_368;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_358;
  TMeshAttributesRef<FBoneID,int_const_> local_348;
  FMeshDescription *local_340;
  FSkeletalMeshAttributesShared local_338;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FMeshDescription *local_308;
  FMeshDescription *local_300;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_2f8;
  FMeshDescription *local_2f0;
  undefined1 local_2e8 [16];
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  FSkeletalMeshAttributes local_2a8;
  TTransform<double> local_268;
  TMatrix<float> local_208;
  TMatrix<float> local_1c8;
  TMatrix<float> local_188;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_2f8 = param_7;
  local_340 = param_1;
  local_318 = param_3;
  local_308 = param_1;
  local_300 = param_4;
  local_2f0 = param_2;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_338,param_1);
  this = (FMeshAttributeArraySetBase *)local_338.BoneElementsShared;
  pFVar27 = FMeshElementChannels::Get(local_338.BoneElementsShared,0);
  bVar24 = FAttributesSetBase::HasAttribute(&pFVar27->Attributes,MeshAttribute::Bone::Pose);
  if (bVar24) {
    pFVar27 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
    bVar24 = FAttributesSetBase::HasAttribute(&pFVar27->Attributes,MeshAttribute::Bone::ParentIndex)
    ;
    if (bVar24) {
      pFVar27 = FMeshElementChannels::Get((local_338.MeshDescriptionShared)->VertexElements,0);
      FVar28 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_2e8);
      pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar27->Attributes,*(FName *)FVar28);
      if ((((pFVar29 != (FAttributesSetEntry *)0x0) &&
           (pFVar33 = (pFVar29->Ptr).Ptr, pFVar33->Type == 4)) && (pFVar33->Extent == 0)) &&
         (pFVar33 != (FMeshAttributeArraySetBase *)0x0)) {
        pFVar35 = (FMeshAttributeArraySetBase *)0x0;
        iVar32 = 0;
        pFVar33 = pFVar35;
        if (this != (FMeshAttributeArraySetBase *)0x0) {
          pFVar27 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
          iVar32 = (pFVar27->BitArray).NumBits - pFVar27->NumHoles;
          pFVar33 = this;
        }
        if (iVar32 == param_5->ArrayNum) {
          local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.ArrayNum = 0;
          local_358.ArrayMax = 0;
          local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_368.ArrayNum = 0;
          local_368.ArrayMax = 0;
          pFVar27 = FMeshElementChannels::Get((FMeshElementChannels *)pFVar33,0);
          TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)&pFVar27->Attributes,MeshAttribute::Bone::Pose);
          pFVar27 = FMeshElementChannels::Get((FMeshElementChannels *)pFVar33,0);
          pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar27->Attributes,MeshAttribute::Bone::ParentIndex);
          if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
              (local_348.ArrayPtr = (pFVar29->Ptr).Ptr, (local_348.ArrayPtr)->Type != 4)) ||
             ((local_348.ArrayPtr)->Extent != 1)) {
            local_348.ArrayPtr = pFVar35;
          }
          iVar32 = FSkeletalMeshAttributesShared::GetNumBones(&local_338);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_358,iVar32,Default);
          iVar32 = FSkeletalMeshAttributesShared::GetNumBones(&local_338);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_368,iVar32,Default);
          pTVar14 = local_318;
          pFVar33 = pFVar35;
          pFVar39 = pFVar35;
          while( true ) {
            if (this == (FMeshAttributeArraySetBase *)0x0) {
              iVar32 = 0;
            }
            else {
              pFVar27 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
              iVar32 = (pFVar27->BitArray).NumBits - pFVar27->NumHoles;
            }
            pFVar15 = local_300;
            uVar34 = (uint)pFVar35;
            if (iVar32 <= (int)uVar34) {
              FMeshDescription::operator=(local_300,local_308);
              iStack_310 = local_358.ArrayNum;
              local_318 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                          local_358.AllocatorInstance.Data;
              if ((local_358.ArrayNum < 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar24)) {
                pcVar6 = (code *)swi(3);
                uVar25 = (*pcVar6)();
                return (bool)uVar25;
              }
              local_2d8._12_4_ = uStack_30c;
              local_2d8.ArrayNum = iStack_310;
              local_2d8.DataPtr = (TMatrix<float> *)local_318;
              UE::Impl::UnposeMesh(pFVar15,local_2f0,&local_2d8,param_6,local_2f8);
              FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_2a8,pFVar15);
              pFVar27 = FMeshElementChannels::Get(local_2a8.BoneElements,0);
              pFVar29 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                                *)&pFVar27->Attributes,MeshAttribute::Bone::Pose);
              if (((pFVar29 == (FAttributesSetEntry *)0x0) ||
                  (pFVar33 = (pFVar29->Ptr).Ptr, pFVar33->Type != 7)) || (pFVar33->Extent != 1)) {
                pFVar33 = (FMeshAttributeArraySetBase *)0x0;
              }
              uVar36 = 0;
              uVar37 = uVar36;
              while( true ) {
                if (this == (FMeshAttributeArraySetBase *)0x0) {
                  iVar32 = 0;
                }
                else {
                  pFVar27 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
                  iVar32 = (pFVar27->BitArray).NumBits - pFVar27->NumHoles;
                }
                TVar13.ArrayPtr = local_348.ArrayPtr;
                uVar34 = (uint)uVar36;
                if (iVar32 <= (int)uVar34) {
                  if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_368.AllocatorInstance.Data);
                  }
                  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.AllocatorInstance.Data);
                  }
                  return true;
                }
                pFVar35 = local_348.ArrayPtr + 1;
                if (((int)local_348.ArrayPtr[2].Type < 1) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar6 = (code *)swi(3);
                  uVar25 = (*pcVar6)();
                  return (bool)uVar25;
                }
                if ((FMeshAttributeArraySetBase *)TVar13.ArrayPtr[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar35 = (FMeshAttributeArraySetBase *)TVar13.ArrayPtr[2]._padding_;
                }
                uVar38 = uVar34 * pFVar35->NumElements;
                uVar26 = 0;
                if ((int)uVar38 < (int)pFVar35->Type) {
                  uVar26 = ~uVar38 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) break;
                iVar32 = *(int *)(pFVar35->_padding_ + (longlong)(int)uVar38 * 4);
                uVar26 = 0;
                if ((int)uVar34 < param_5->ArrayNum) {
                  uVar26 = ~uVar34 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar24)) {
                  pcVar6 = (code *)swi(3);
                  uVar25 = (*pcVar6)();
                  return (bool)uVar25;
                }
                pTVar31 = param_5->DataPtr;
                pdVar1 = (double *)((longlong)(pTVar31->Rotation).XY.m128d_f64 + uVar37);
                dVar44 = *pdVar1;
                dVar47 = pdVar1[1];
                puVar3 = (undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + uVar37);
                uVar48 = *puVar3;
                uVar49 = puVar3[1];
                uVar50 = puVar3[2];
                uVar51 = puVar3[3];
                puVar3 = (undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + uVar37);
                uVar52 = *puVar3;
                uVar53 = puVar3[1];
                uVar54 = puVar3[2];
                uVar55 = puVar3[3];
                pdVar1 = (double *)((longlong)(pTVar31->Translation).ZW.m128d_f64 + uVar37);
                dVar57 = *pdVar1;
                dVar60 = pdVar1[1];
                puVar3 = (undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + uVar37);
                uVar61 = *puVar3;
                uVar62 = puVar3[1];
                uVar63 = puVar3[2];
                uVar64 = puVar3[3];
                puVar3 = (undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + uVar37);
                uVar65 = *puVar3;
                uVar66 = puVar3[1];
                uVar67 = puVar3[2];
                uVar68 = puVar3[3];
                if (iVar32 != -1) {
                  local_268.Rotation.XY.m128d_f64[0] = dVar44;
                  local_268.Rotation.XY.m128d_f64[1] = dVar47;
                  local_268.Rotation.ZW.m128d_f64[0]._0_4_ = uVar48;
                  local_268.Rotation.ZW.m128d_f64[0]._4_4_ = uVar49;
                  local_268.Rotation.ZW.m128d_f64[1]._0_4_ = uVar50;
                  local_268.Rotation.ZW.m128d_f64[1]._4_4_ = uVar51;
                  local_268.Translation.XY.m128d_f64[0]._0_4_ = uVar52;
                  local_268.Translation.XY.m128d_f64[0]._4_4_ = uVar53;
                  local_268.Translation.XY.m128d_f64[1]._0_4_ = uVar54;
                  local_268.Translation.XY.m128d_f64[1]._4_4_ = uVar55;
                  local_268.Translation.ZW.m128d_f64[0] = dVar57;
                  local_268.Translation.ZW.m128d_f64[1] = dVar60;
                  local_268.Scale3D.XY.m128d_f64[0]._0_4_ = uVar61;
                  local_268.Scale3D.XY.m128d_f64[0]._4_4_ = uVar62;
                  local_268.Scale3D.XY.m128d_f64[1]._0_4_ = uVar63;
                  local_268.Scale3D.XY.m128d_f64[1]._4_4_ = uVar64;
                  local_268.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar65;
                  local_268.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar66;
                  local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar67;
                  local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar68;
                  pTVar31 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                      (param_5,iVar32);
                  pTVar31 = UE::Math::TTransform<double>::GetRelativeTransform
                                      (&local_268,&local_148,pTVar31);
                  dVar44 = (pTVar31->Rotation).XY.m128d_f64[0];
                  dVar47 = (pTVar31->Rotation).XY.m128d_f64[1];
                  uVar48 = *(undefined4 *)(pTVar31->Rotation).ZW.m128d_f64;
                  uVar49 = *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 4);
                  uVar50 = *(undefined4 *)((pTVar31->Rotation).ZW.m128d_f64 + 1);
                  uVar51 = *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 0xc);
                  uVar52 = *(undefined4 *)(pTVar31->Translation).XY.m128d_f64;
                  uVar53 = *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 4);
                  uVar54 = *(undefined4 *)((pTVar31->Translation).XY.m128d_f64 + 1);
                  uVar55 = *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 0xc);
                  dVar57 = (pTVar31->Translation).ZW.m128d_f64[0];
                  dVar60 = (pTVar31->Translation).ZW.m128d_f64[1];
                  uVar61 = *(undefined4 *)(pTVar31->Scale3D).XY.m128d_f64;
                  uVar62 = *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 4);
                  uVar63 = *(undefined4 *)((pTVar31->Scale3D).XY.m128d_f64 + 1);
                  uVar64 = *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 0xc);
                  uVar65 = *(undefined4 *)(pTVar31->Scale3D).ZW.m128d_f64;
                  uVar66 = *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 4);
                  uVar67 = *(undefined4 *)((pTVar31->Scale3D).ZW.m128d_f64 + 1);
                  uVar68 = *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 0xc);
                }
                local_268.Rotation.XY.m128d_f64[0] = dVar44;
                local_268.Rotation.XY.m128d_f64[1] = dVar47;
                local_268.Rotation.ZW.m128d_f64[0]._0_4_ = uVar48;
                local_268.Rotation.ZW.m128d_f64[0]._4_4_ = uVar49;
                local_268.Rotation.ZW.m128d_f64[1]._0_4_ = uVar50;
                local_268.Rotation.ZW.m128d_f64[1]._4_4_ = uVar51;
                local_268.Translation.XY.m128d_f64[0]._0_4_ = uVar52;
                local_268.Translation.XY.m128d_f64[0]._4_4_ = uVar53;
                local_268.Translation.XY.m128d_f64[1]._0_4_ = uVar54;
                local_268.Translation.XY.m128d_f64[1]._4_4_ = uVar55;
                local_268.Translation.ZW.m128d_f64[0] = dVar57;
                local_268.Translation.ZW.m128d_f64[1] = dVar60;
                local_268.Scale3D.XY.m128d_f64[0]._0_4_ = uVar61;
                local_268.Scale3D.XY.m128d_f64[0]._4_4_ = uVar62;
                local_268.Scale3D.XY.m128d_f64[1]._0_4_ = uVar63;
                local_268.Scale3D.XY.m128d_f64[1]._4_4_ = uVar64;
                local_268.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar65;
                local_268.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar66;
                local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar67;
                local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar68;
                if (((int)pFVar33[2].Type < 1) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar6 = (code *)swi(3);
                  uVar25 = (*pcVar6)();
                  return (bool)uVar25;
                }
                pFVar35 = pFVar33 + 1;
                if ((FMeshAttributeArraySetBase *)pFVar33[2]._padding_ !=
                    (FMeshAttributeArraySetBase *)0x0) {
                  pFVar35 = (FMeshAttributeArraySetBase *)pFVar33[2]._padding_;
                }
                pTVar31 = TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::GetElementBase
                                    ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                                     pFVar35,uVar34);
                uVar36 = (ulonglong)(uVar34 + 1);
                uVar37 = uVar37 + 0x60;
                (pTVar31->Rotation).XY.m128d_f64[0] = dVar44;
                (pTVar31->Rotation).XY.m128d_f64[1] = dVar47;
                *(undefined4 *)(pTVar31->Rotation).ZW.m128d_f64 = uVar48;
                *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 4) = uVar49;
                *(undefined4 *)((pTVar31->Rotation).ZW.m128d_f64 + 1) = uVar50;
                *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 0xc) = uVar51;
                *(undefined4 *)(pTVar31->Translation).XY.m128d_f64 = uVar52;
                *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 4) = uVar53;
                *(undefined4 *)((pTVar31->Translation).XY.m128d_f64 + 1) = uVar54;
                *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 0xc) = uVar55;
                (pTVar31->Translation).ZW.m128d_f64[0] = dVar57;
                (pTVar31->Translation).ZW.m128d_f64[1] = dVar60;
                *(undefined4 *)(pTVar31->Scale3D).XY.m128d_f64 = uVar61;
                *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 4) = uVar62;
                *(undefined4 *)((pTVar31->Scale3D).XY.m128d_f64 + 1) = uVar63;
                *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 0xc) = uVar64;
                *(undefined4 *)(pTVar31->Scale3D).ZW.m128d_f64 = uVar65;
                *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 4) = uVar66;
                *(undefined4 *)((pTVar31->Scale3D).ZW.m128d_f64 + 1) = uVar67;
                *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 0xc) = uVar68;
              }
              pcVar6 = (code *)swi(3);
              uVar25 = (*pcVar6)();
              return (bool)uVar25;
            }
            TMeshAttributesRef<FBoneID,int_const_>::Get(&local_348,uVar34,0);
            uVar38 = ~uVar34 >> 0x1f;
            uVar26 = 0;
            if ((int)uVar34 < pTVar14->ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar6 = (code *)swi(3);
              uVar25 = (*pcVar6)();
              return (bool)uVar25;
            }
            pFVar5 = (pTVar14->AllocatorInstance).Data;
            pFVar2 = (FScriptContainerElement *)((longlong)&pFVar33->_padding_ + (longlong)pFVar5);
            dVar43 = *(double *)pFVar2;
            dVar56 = *(double *)(pFVar2 + 8);
            pFVar2 = (FScriptContainerElement *)((longlong)&pFVar33->NumElements + (longlong)pFVar5)
            ;
            dVar9 = *(double *)pFVar2;
            dVar10 = *(double *)(pFVar2 + 8);
            auVar46 = *(undefined1 (*) [16])((longlong)&pFVar33[3].Type + (longlong)pFVar5);
            auVar4 = *(undefined1 (*) [16])((longlong)&pFVar33[2].NumElements + (longlong)pFVar5);
            dVar11 = *(double *)((longlong)&pFVar33[2]._padding_ + (longlong)pFVar5);
            dVar44 = dVar9 + dVar9;
            dVar40 = dVar56 + dVar56;
            dVar42 = dVar43 * (dVar43 + dVar43);
            dVar60 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
            dVar7 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
            dVar47 = dVar10 * dVar44;
            dVar57 = dVar10 * (dVar43 + dVar43);
            auVar45._8_4_ = SUB84(dVar57,0);
            auVar45._0_8_ = dVar47;
            auVar45._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
            dVar59 = auVar4._8_8_;
            auVar58 = blendpd(auVar4,auVar46,2);
            dVar41 = auVar46._0_8_;
            auVar46._0_4_ = (float)((dVar40 * dVar10 + dVar43 * dVar44) * dVar41);
            auVar46._4_4_ = (float)(dVar41 * (dVar44 * dVar56 - dVar57));
            pFVar5 = (FScriptContainerElement *)((longlong)&pFVar33[1].Type + (longlong)pFVar5);
            dVar57 = *(double *)pFVar5;
            dVar12 = *(double *)(pFVar5 + 8);
            uVar26 = 0;
            if ((int)uVar34 < local_368.ArrayNum) {
              uVar26 = uVar38;
            }
            auVar46._8_4_ =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                         (dVar42 + dVar56 * dVar40)) * dVar41);
            auVar46._12_4_ = 0;
            dVar41 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar6 = (code *)swi(3);
              uVar25 = (*pcVar6)();
              return (bool)uVar25;
            }
            auVar8._4_4_ = (float)((dVar47 + dVar40 * dVar43) * auVar4._0_8_);
            auVar8._0_4_ = (float)((dVar60 - (dVar9 * dVar44 + dVar56 * dVar40)) * auVar4._0_8_);
            auVar8._8_4_ = (float)(auVar58._0_8_ * (dVar43 * dVar44 - dVar40 * dVar10));
            auVar8._12_4_ = 0;
            *(undefined1 (*) [16])(local_368.AllocatorInstance.Data + (longlong)&pFVar39->_padding_)
                 = auVar8;
            auVar4._4_4_ = (float)((dVar7 - (dVar9 * dVar44 + dVar42)) * dVar59);
            auVar4._0_4_ = (float)(dVar59 * (dVar40 * dVar43 - dVar47));
            auVar4._8_4_ = (float)((auVar45._8_8_ + dVar44 * dVar56) * dVar59);
            auVar4._12_4_ = 0;
            *(undefined1 (*) [16])
             ((longlong)&pFVar39->NumElements + local_368.AllocatorInstance.Data) = auVar4;
            *(undefined1 (*) [16])((longlong)&pFVar39[1].Type + local_368.AllocatorInstance.Data) =
                 auVar46;
            pFVar2 = local_368.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_;
            *(float *)pFVar2 = (float)dVar57;
            *(float *)(pFVar2 + 4) = (float)dVar12;
            *(float *)(pFVar2 + 8) = (float)dVar11;
            *(float *)(pFVar2 + 0xc) = (float)dVar41;
            uVar26 = 0;
            if ((int)uVar34 < local_368.ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) break;
            pTVar30 = UE::Math::TMatrix<float>::Inverse
                                ((TMatrix<float> *)
                                 (local_368.AllocatorInstance.Data + (longlong)(int)uVar34 * 0x40),
                                 &local_188);
            pTVar31 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                (param_5,uVar34);
            local_2b8 = (pTVar31->Rotation).ZW.m128d_f64[0];
            dStack_2b0 = (pTVar31->Rotation).ZW.m128d_f64[1];
            dVar44 = (pTVar31->Rotation).XY.m128d_f64[0];
            dVar7 = (pTVar31->Rotation).XY.m128d_f64[1];
            auVar46 = *(undefined1 (*) [16])(pTVar31->Scale3D).ZW.m128d_f64;
            dVar56 = auVar46._0_8_;
            dVar57 = (pTVar31->Rotation).XY.m128d_f64[0];
            auVar4 = *(undefined1 (*) [16])(pTVar31->Scale3D).XY.m128d_f64;
            dVar60 = dVar7 + dVar7;
            dVar43 = local_2b8 + local_2b8;
            dVar47 = (dVar44 + dVar44) * dVar44;
            dVar40 = dVar60 * dVar57;
            dVar41 = dVar43 * (pTVar31->Rotation).XY.m128d_f64[1];
            local_2c8 = (pTVar31->Rotation).XY.m128d_f64[0];
            dStack_2c0 = (pTVar31->Rotation).XY.m128d_f64[1];
            dVar44 = dStack_2b0 * (dVar44 + dVar44);
            auVar46 = blendpd(auVar4,auVar46,2);
            dVar57 = dVar57 * dVar43;
            local_208.M[0][1] =
                 (float)((dStack_2b0 * dVar43 + dVar40) * (pTVar31->Scale3D).XY.m128d_f64[0]);
            local_208.M[0][0] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                         (dVar43 * local_2b8 + dVar60 * dVar7)) * (pTVar31->Scale3D).XY.m128d_f64[0]
                        );
            local_208.M[0][2] = (float)(auVar46._0_8_ * (dVar57 - dVar60 * dStack_2b0));
            local_208.M[0][3] = 0.0;
            local_208.M[3][0] = (float)(pTVar31->Translation).XY.m128d_f64[0];
            local_208.M[3][1] = (float)(pTVar31->Translation).XY.m128d_f64[1];
            local_208.M[1][1] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                         (dVar43 * local_2b8 + dVar47)) * (pTVar31->Scale3D).XY.m128d_f64[1]);
            local_208.M[1][0] = (float)(auVar4._8_8_ * (dVar40 - dStack_2b0 * dVar43));
            local_208.M[1][2] = (float)((dVar44 + dVar41) * (pTVar31->Scale3D).XY.m128d_f64[1]);
            local_208.M[1][3] = 0.0;
            local_208.M[2][1] = (float)(dVar56 * (dVar41 - dVar44));
            local_208.M[2][0] = (float)((dVar60 * dStack_2b0 + dVar57) * dVar56);
            local_208.M[2][2] =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                         (dVar47 + dVar60 * dVar7)) * dVar56);
            local_208.M[2][3] = 0.0;
            local_208.M[3][2] = (float)(pTVar31->Translation).ZW.m128d_f64[0];
            local_208.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            VectorMatrixMultiply(&local_1c8,pTVar30,&local_208);
            uVar23 = local_1c8.M[3]._8_8_;
            uVar22 = local_1c8.M[3]._0_8_;
            uVar21 = local_1c8.M[2]._8_8_;
            uVar20 = local_1c8.M[2]._0_8_;
            uVar19 = local_1c8.M[1]._8_8_;
            uVar18 = local_1c8.M[1]._0_8_;
            uVar17 = local_1c8.M[0]._8_8_;
            uVar16 = local_1c8.M[0]._0_8_;
            uVar26 = 0;
            if ((int)uVar34 < local_358.ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar6 = (code *)swi(3);
              uVar25 = (*pcVar6)();
              return (bool)uVar25;
            }
            pFVar35 = (FMeshAttributeArraySetBase *)(ulonglong)(uVar34 + 1);
            pFVar33 = pFVar33 + 4;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar39->_padding_) =
                 uVar16;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar39->_padding_ + 8) =
                 uVar17;
            pFVar2 = (longlong)&pFVar39->NumElements + local_358.AllocatorInstance.Data;
            *(undefined8 *)pFVar2 = uVar18;
            *(undefined8 *)(pFVar2 + 8) = uVar19;
            pFVar2 = (longlong)&pFVar39[1].Type + local_358.AllocatorInstance.Data;
            *(undefined8 *)pFVar2 = uVar20;
            *(undefined8 *)(pFVar2 + 8) = uVar21;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_) =
                 uVar22;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar39[2]._padding_ + 8)
                 = uVar23;
            pFVar39 = (FMeshAttributeArraySetBase *)&pFVar39[2].NumElements;
            this = (FMeshAttributeArraySetBase *)local_338.BoneElementsShared;
          }
          pcVar6 = (code *)swi(3);
          uVar25 = (*pcVar6)();
          return (bool)uVar25;
        }
      }
    }
  }
  return false;
}

// GetUnposedMeshInPlace @ 1443a91e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSkeletalMeshOperations::GetUnposedMeshInPlace
          (FMeshDescription *param_1,FMeshDescription *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_4,FName param_5,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_6,bool param_7)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> TVar16;
  FMeshDescription *pFVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  undefined1 uVar27;
  uint uVar28;
  FMeshElementContainer *pFVar29;
  FName FVar30;
  FAttributesSetEntry *pFVar31;
  TMatrix<float> *pTVar32;
  TTransform<double> *pTVar33;
  int iVar34;
  int iVar35;
  FMeshAttributeArraySetBase *this;
  uint uVar36;
  FMeshAttributeArraySetBase *pFVar37;
  FMeshAttributeArraySetBase *pFVar38;
  uint uVar39;
  FMeshAttributeArraySetBase *pFVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar49;
  undefined1 auVar48 [16];
  undefined1 auStackY_398 [32];
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_368;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_358;
  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> local_348;
  TMeshAttributesRef<FBoneID,int_const_> local_340;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_338;
  FMeshDescription *local_330;
  FMeshDescription *local_328;
  FMeshDescription *local_320;
  FSkeletalMeshAttributesShared local_318;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8 [16];
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  FSkeletalMeshAttributes local_2a8;
  TTransform<double> local_268;
  TMatrix<float> local_208;
  TMatrix<float> local_1c8;
  TMatrix<float> local_188;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_338 = param_6;
  local_348.ArrayPtr = (FMeshAttributeArraySetBase *)param_3;
  local_330 = param_2;
  local_328 = param_1;
  local_320 = param_1;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_318,param_1);
  this = (FMeshAttributeArraySetBase *)local_318.BoneElementsShared;
  pFVar29 = FMeshElementChannels::Get(local_318.BoneElementsShared,0);
  bVar26 = FAttributesSetBase::HasAttribute(&pFVar29->Attributes,MeshAttribute::Bone::Pose);
  if (bVar26) {
    pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
    bVar26 = FAttributesSetBase::HasAttribute(&pFVar29->Attributes,MeshAttribute::Bone::ParentIndex)
    ;
    if (bVar26) {
      pFVar29 = FMeshElementChannels::Get((local_318.MeshDescriptionShared)->VertexElements,0);
      FVar30 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_2e8);
      pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar29->Attributes,*(FName *)FVar30);
      if ((((pFVar31 != (FAttributesSetEntry *)0x0) &&
           (pFVar37 = (pFVar31->Ptr).Ptr, pFVar37->Type == 4)) && (pFVar37->Extent == 0)) &&
         (pFVar37 != (FMeshAttributeArraySetBase *)0x0)) {
        pFVar38 = (FMeshAttributeArraySetBase *)0x0;
        iVar34 = 0;
        pFVar37 = pFVar38;
        if (this != (FMeshAttributeArraySetBase *)0x0) {
          pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
          iVar34 = (pFVar29->BitArray).NumBits - pFVar29->NumHoles;
          pFVar37 = this;
        }
        if (iVar34 == param_4->ArrayNum) {
          local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.ArrayNum = 0;
          local_358.ArrayMax = 0;
          local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_368.ArrayNum = 0;
          local_368.ArrayMax = 0;
          pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)pFVar37,0);
          TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                  *)&pFVar29->Attributes,MeshAttribute::Bone::Pose);
          pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)pFVar37,0);
          pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar29->Attributes,MeshAttribute::Bone::ParentIndex);
          if (((pFVar31 == (FAttributesSetEntry *)0x0) ||
              (local_340.ArrayPtr = (pFVar31->Ptr).Ptr, (local_340.ArrayPtr)->Type != 4)) ||
             ((local_340.ArrayPtr)->Extent != 1)) {
            local_340.ArrayPtr = pFVar38;
          }
          iVar34 = FSkeletalMeshAttributesShared::GetNumBones(&local_318);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_358,iVar34,Default);
          iVar34 = FSkeletalMeshAttributesShared::GetNumBones(&local_318);
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_368,iVar34,Default);
          TVar16.ArrayPtr = local_348.ArrayPtr;
          pFVar37 = pFVar38;
          pFVar40 = pFVar38;
          while( true ) {
            if (this == (FMeshAttributeArraySetBase *)0x0) {
              iVar34 = 0;
            }
            else {
              pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
              iVar34 = (pFVar29->BitArray).NumBits - pFVar29->NumHoles;
            }
            uVar36 = (uint)pFVar38;
            if (iVar34 <= (int)uVar36) {
              iVar34 = local_358.ArrayNum;
              local_2f8 = local_358.AllocatorInstance.Data;
              if ((local_358.ArrayNum < 0) &&
                 (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar26)) {
                pcVar5 = (code *)swi(3);
                uVar27 = (*pcVar5)();
                return (bool)uVar27;
              }
              pFVar17 = local_328;
              iStack_2f0 = iVar34;
              local_2d8._12_4_ = uStack_2ec;
              local_2d8.ArrayNum = iVar34;
              local_2d8.DataPtr = (TMatrix<float> *)local_2f8;
              UE::Impl::UnposeMesh(local_328,local_330,&local_2d8,param_5,local_338);
              if (param_7) {
                FSkeletalMeshAttributes::FSkeletalMeshAttributes(&local_2a8,pFVar17);
                pFVar29 = FMeshElementChannels::Get(local_2a8.BoneElements,0);
                pFVar31 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                                  *)&pFVar29->Attributes,MeshAttribute::Bone::Pose);
                if (((pFVar31 == (FAttributesSetEntry *)0x0) ||
                    (local_348.ArrayPtr = (pFVar31->Ptr).Ptr, (local_348.ArrayPtr)->Type != 7)) ||
                   ((local_348.ArrayPtr)->Extent != 1)) {
                  local_348.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
                }
                iVar34 = 0;
                while( true ) {
                  if (this == (FMeshAttributeArraySetBase *)0x0) {
                    iVar35 = 0;
                  }
                  else {
                    pFVar29 = FMeshElementChannels::Get((FMeshElementChannels *)this,0);
                    iVar35 = (pFVar29->BitArray).NumBits - pFVar29->NumHoles;
                  }
                  if (iVar35 <= iVar34) break;
                  iVar35 = TMeshAttributesRef<FBoneID,int_const_>::Get(&local_340,iVar34,0);
                  pTVar33 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                      (param_4,iVar34);
                  local_268.Rotation.XY.m128d_f64[0] = (pTVar33->Rotation).XY.m128d_f64[0];
                  local_268.Rotation.XY.m128d_f64[1] = (pTVar33->Rotation).XY.m128d_f64[1];
                  local_268.Rotation.ZW.m128d_f64[0] = (pTVar33->Rotation).ZW.m128d_f64[0];
                  local_268.Rotation.ZW.m128d_f64[1] = (pTVar33->Rotation).ZW.m128d_f64[1];
                  local_268.Translation.XY.m128d_f64[0] = (pTVar33->Translation).XY.m128d_f64[0];
                  local_268.Translation.XY.m128d_f64[1] = (pTVar33->Translation).XY.m128d_f64[1];
                  local_268.Translation.ZW.m128d_f64[0] = (pTVar33->Translation).ZW.m128d_f64[0];
                  local_268.Translation.ZW.m128d_f64[1] = (pTVar33->Translation).ZW.m128d_f64[1];
                  local_268.Scale3D.XY.m128d_f64[0] = (pTVar33->Scale3D).XY.m128d_f64[0];
                  local_268.Scale3D.XY.m128d_f64[1] = (pTVar33->Scale3D).XY.m128d_f64[1];
                  local_268.Scale3D.ZW.m128d_f64[0] = (pTVar33->Scale3D).ZW.m128d_f64[0];
                  local_268.Scale3D.ZW.m128d_f64[1] = (pTVar33->Scale3D).ZW.m128d_f64[1];
                  if (iVar35 != -1) {
                    pTVar33 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                        (param_4,iVar35);
                    pTVar33 = UE::Math::TTransform<double>::GetRelativeTransform
                                        (&local_268,&local_148,pTVar33);
                    local_268.Rotation.XY.m128d_f64[0] = (pTVar33->Rotation).XY.m128d_f64[0];
                    local_268.Rotation.XY.m128d_f64[1] = (pTVar33->Rotation).XY.m128d_f64[1];
                    local_268.Rotation.ZW.m128d_f64[0] = (pTVar33->Rotation).ZW.m128d_f64[0];
                    local_268.Rotation.ZW.m128d_f64[1] = (pTVar33->Rotation).ZW.m128d_f64[1];
                    local_268.Translation.XY.m128d_f64[0] = (pTVar33->Translation).XY.m128d_f64[0];
                    local_268.Translation.XY.m128d_f64[1] = (pTVar33->Translation).XY.m128d_f64[1];
                    local_268.Translation.ZW.m128d_f64[0] = (pTVar33->Translation).ZW.m128d_f64[0];
                    local_268.Translation.ZW.m128d_f64[1] = (pTVar33->Translation).ZW.m128d_f64[1];
                    local_268.Scale3D.XY.m128d_f64[0] = (pTVar33->Scale3D).XY.m128d_f64[0];
                    local_268.Scale3D.XY.m128d_f64[1] = (pTVar33->Scale3D).XY.m128d_f64[1];
                    local_268.Scale3D.ZW.m128d_f64[0] = (pTVar33->Scale3D).ZW.m128d_f64[0];
                    local_268.Scale3D.ZW.m128d_f64[1] = (pTVar33->Scale3D).ZW.m128d_f64[1];
                  }
                  TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_>::Set
                            (&local_348,iVar34,&local_268);
                  iVar34 = iVar34 + 1;
                }
              }
              if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_368.AllocatorInstance.Data);
              }
              if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_358.AllocatorInstance.Data);
              }
              return true;
            }
            TMeshAttributesRef<FBoneID,int_const_>::Get(&local_340,uVar36,0);
            uVar39 = ~uVar36 >> 0x1f;
            uVar28 = 0;
            if ((int)uVar36 < (int)(TVar16.ArrayPtr)->Type) {
              uVar28 = uVar39;
            }
            if ((uVar28 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) break;
            lVar4 = (TVar16.ArrayPtr)->_padding_;
            pdVar1 = (double *)((longlong)&pFVar37->_padding_ + lVar4);
            dVar44 = *pdVar1;
            dVar47 = pdVar1[1];
            pdVar1 = (double *)((longlong)&pFVar37->NumElements + lVar4);
            dVar12 = *pdVar1;
            dVar13 = pdVar1[1];
            auVar46 = *(undefined1 (*) [16])((longlong)&pFVar37[3].Type + lVar4);
            auVar3 = *(undefined1 (*) [16])((longlong)&pFVar37[2].NumElements + lVar4);
            dVar14 = *(double *)((longlong)&pFVar37[2]._padding_ + lVar4);
            dVar6 = dVar12 + dVar12;
            dVar41 = dVar47 + dVar47;
            dVar43 = dVar44 * (dVar44 + dVar44);
            dVar11 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
            dVar9 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
            dVar7 = dVar13 * dVar6;
            dVar8 = dVar13 * (dVar44 + dVar44);
            auVar45._8_4_ = SUB84(dVar8,0);
            auVar45._0_8_ = dVar7;
            auVar45._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            dVar49 = auVar3._8_8_;
            auVar48 = blendpd(auVar3,auVar46,2);
            dVar42 = auVar46._0_8_;
            auVar46._0_4_ = (float)((dVar41 * dVar13 + dVar44 * dVar6) * dVar42);
            auVar46._4_4_ = (float)(dVar42 * (dVar6 * dVar47 - dVar8));
            pdVar1 = (double *)((longlong)&pFVar37[1].Type + lVar4);
            dVar8 = *pdVar1;
            dVar15 = pdVar1[1];
            uVar28 = 0;
            if ((int)uVar36 < local_368.ArrayNum) {
              uVar28 = uVar39;
            }
            auVar46._8_4_ =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                         (dVar43 + dVar47 * dVar41)) * dVar42);
            auVar46._12_4_ = 0;
            dVar42 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            if ((uVar28 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar5 = (code *)swi(3);
              uVar27 = (*pcVar5)();
              return (bool)uVar27;
            }
            auVar10._4_4_ = (float)((dVar7 + dVar41 * dVar44) * auVar3._0_8_);
            auVar10._0_4_ = (float)((dVar11 - (dVar12 * dVar6 + dVar47 * dVar41)) * auVar3._0_8_);
            auVar10._8_4_ = (float)(auVar48._0_8_ * (dVar44 * dVar6 - dVar41 * dVar13));
            auVar10._12_4_ = 0;
            *(undefined1 (*) [16])(local_368.AllocatorInstance.Data + (longlong)&pFVar40->_padding_)
                 = auVar10;
            auVar3._4_4_ = (float)((dVar9 - (dVar12 * dVar6 + dVar43)) * dVar49);
            auVar3._0_4_ = (float)(dVar49 * (dVar41 * dVar44 - dVar7));
            auVar3._8_4_ = (float)((auVar45._8_8_ + dVar6 * dVar47) * dVar49);
            auVar3._12_4_ = 0;
            *(undefined1 (*) [16])
             ((longlong)&pFVar40->NumElements + local_368.AllocatorInstance.Data) = auVar3;
            *(undefined1 (*) [16])((longlong)&pFVar40[1].Type + local_368.AllocatorInstance.Data) =
                 auVar46;
            pFVar2 = local_368.AllocatorInstance.Data + (longlong)&pFVar40[2]._padding_;
            *(float *)pFVar2 = (float)dVar8;
            *(float *)(pFVar2 + 4) = (float)dVar15;
            *(float *)(pFVar2 + 8) = (float)dVar14;
            *(float *)(pFVar2 + 0xc) = (float)dVar42;
            uVar28 = 0;
            if ((int)uVar36 < local_368.ArrayNum) {
              uVar28 = uVar39;
            }
            if ((uVar28 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar5 = (code *)swi(3);
              uVar27 = (*pcVar5)();
              return (bool)uVar27;
            }
            pTVar32 = UE::Math::TMatrix<float>::Inverse
                                ((TMatrix<float> *)
                                 (local_368.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x40),
                                 &local_188);
            pTVar33 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[]
                                (param_4,uVar36);
            local_2b8 = (pTVar33->Rotation).ZW.m128d_f64[0];
            dStack_2b0 = (pTVar33->Rotation).ZW.m128d_f64[1];
            dVar6 = (pTVar33->Rotation).XY.m128d_f64[0];
            dVar9 = (pTVar33->Rotation).XY.m128d_f64[1];
            auVar46 = *(undefined1 (*) [16])(pTVar33->Scale3D).ZW.m128d_f64;
            dVar47 = auVar46._0_8_;
            dVar8 = (pTVar33->Rotation).XY.m128d_f64[0];
            auVar3 = *(undefined1 (*) [16])(pTVar33->Scale3D).XY.m128d_f64;
            dVar11 = dVar9 + dVar9;
            dVar44 = local_2b8 + local_2b8;
            dVar7 = (dVar6 + dVar6) * dVar6;
            dVar41 = dVar11 * dVar8;
            dVar42 = dVar44 * (pTVar33->Rotation).XY.m128d_f64[1];
            local_2c8 = (pTVar33->Rotation).XY.m128d_f64[0];
            dStack_2c0 = (pTVar33->Rotation).XY.m128d_f64[1];
            dVar6 = dStack_2b0 * (dVar6 + dVar6);
            auVar46 = blendpd(auVar3,auVar46,2);
            dVar8 = dVar8 * dVar44;
            local_208.M[0][1] =
                 (float)((dStack_2b0 * dVar44 + dVar41) * (pTVar33->Scale3D).XY.m128d_f64[0]);
            local_208.M[0][0] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                         (dVar44 * local_2b8 + dVar11 * dVar9)) * (pTVar33->Scale3D).XY.m128d_f64[0]
                        );
            local_208.M[0][2] = (float)(auVar46._0_8_ * (dVar8 - dVar11 * dStack_2b0));
            local_208.M[0][3] = 0.0;
            local_208.M[3][0] = (float)(pTVar33->Translation).XY.m128d_f64[0];
            local_208.M[3][1] = (float)(pTVar33->Translation).XY.m128d_f64[1];
            local_208.M[1][1] =
                 (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                         (dVar44 * local_2b8 + dVar7)) * (pTVar33->Scale3D).XY.m128d_f64[1]);
            local_208.M[1][0] = (float)(auVar3._8_8_ * (dVar41 - dStack_2b0 * dVar44));
            local_208.M[1][2] = (float)((dVar6 + dVar42) * (pTVar33->Scale3D).XY.m128d_f64[1]);
            local_208.M[1][3] = 0.0;
            local_208.M[2][1] = (float)(dVar47 * (dVar42 - dVar6));
            local_208.M[2][0] = (float)((dVar11 * dStack_2b0 + dVar8) * dVar47);
            local_208.M[2][2] =
                 (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                         (dVar7 + dVar11 * dVar9)) * dVar47);
            local_208.M[2][3] = 0.0;
            local_208.M[3][2] = (float)(pTVar33->Translation).ZW.m128d_f64[0];
            local_208.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
            VectorMatrixMultiply(&local_1c8,pTVar32,&local_208);
            uVar25 = local_1c8.M[3]._8_8_;
            uVar24 = local_1c8.M[3]._0_8_;
            uVar23 = local_1c8.M[2]._8_8_;
            uVar22 = local_1c8.M[2]._0_8_;
            uVar21 = local_1c8.M[1]._8_8_;
            uVar20 = local_1c8.M[1]._0_8_;
            uVar19 = local_1c8.M[0]._8_8_;
            uVar18 = local_1c8.M[0]._0_8_;
            uVar28 = 0;
            if ((int)uVar36 < local_358.ArrayNum) {
              uVar28 = uVar39;
            }
            if ((uVar28 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar5 = (code *)swi(3);
              uVar27 = (*pcVar5)();
              return (bool)uVar27;
            }
            pFVar38 = (FMeshAttributeArraySetBase *)(ulonglong)(uVar36 + 1);
            pFVar37 = pFVar37 + 4;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar40->_padding_) =
                 uVar18;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar40->_padding_ + 8) =
                 uVar19;
            pFVar2 = (longlong)&pFVar40->NumElements + local_358.AllocatorInstance.Data;
            *(undefined8 *)pFVar2 = uVar20;
            *(undefined8 *)(pFVar2 + 8) = uVar21;
            pFVar2 = (longlong)&pFVar40[1].Type + local_358.AllocatorInstance.Data;
            *(undefined8 *)pFVar2 = uVar22;
            *(undefined8 *)(pFVar2 + 8) = uVar23;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar40[2]._padding_) =
                 uVar24;
            *(undefined8 *)(local_358.AllocatorInstance.Data + (longlong)&pFVar40[2]._padding_ + 8)
                 = uVar25;
            pFVar40 = (FMeshAttributeArraySetBase *)&pFVar40[2].NumElements;
            this = (FMeshAttributeArraySetBase *)local_318.BoneElementsShared;
          }
          pcVar5 = (code *)swi(3);
          uVar27 = (*pcVar5)();
          return (bool)uVar27;
        }
      }
    }
  }
  return false;
}

// RemapBoneIndicesOnSkinWeightAttribute @ 1443ac630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FSkeletalMeshOperations::RemapBoneIndicesOnSkinWeightAttribute
          (FMeshDescription *param_1,TArrayView<int_const_,int> *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  TMeshUnboundedAttributeArraySet<int> *this;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  FMeshElementContainer *pFVar10;
  FName FVar11;
  FAttributesSetEntry *pFVar12;
  ForElementType<unsigned_int> FVar13;
  TArrayView<int,int> *pTVar14;
  TAttributeArrayContainer<int> *this_00;
  int *piVar15;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278 [4];
  FBoneWeight local_274;
  ForAnyElementType local_270;
  int local_268;
  int iStack_264;
  uint local_260;
  FBoneWeightsSettings local_258;
  int local_248;
  uint uStack_244;
  ForElementType<unsigned_int> FStack_240;
  undefined4 local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TMeshUnboundedAttributeArraySet<int> *local_228;
  FScriptContainerElement *local_220;
  TArray<FName,TSizedDefaultAllocator<32>_> local_218;
  TAttributeArrayContainer<int> **local_208;
  TAttributeArrayContainer<int> *local_200;
  undefined8 uStack_1f8;
  int local_1f0;
  int local_1ec;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_1e8;
  TArrayView<int_const_,int> *local_1e0;
  ulonglong local_1d8;
  FScriptContainerElement *local_1d0;
  FMeshDescription *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  TAttributeArrayContainer<int> *local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  FBoneWeight *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  uint local_168;
  uint uStack_164;
  undefined1 local_158 [16];
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_148;
  TArrayView<int,int> local_138;
  TArrayView<int,int> local_128;
  TArrayView<int,int> local_118;
  TArrayView<int,int> local_108;
  TArrayView<int,int> local_f8;
  TArrayView<int,int> local_e8;
  TArrayView<int,int> local_d8;
  undefined1 local_c8 [64];
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_1e0 = param_2;
  local_1c8 = param_1;
  FSkeletalMeshAttributes::FSkeletalMeshAttributes((FSkeletalMeshAttributes *)local_c8,param_1);
  local_258.MaxWeightCount = 0xc;
  local_258.NormalizeType = None;
  local_258.WeightThreshold = 1;
  local_258.DefaultBoneIndex = 0;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268 = 0;
  iStack_264 = 0;
  local_258.bHasDefaultBoneIndex = false;
  local_258.bBlendZeroInfluence = true;
  FSkeletalMeshAttributesShared::GetSkinWeightProfileNames
            ((FSkeletalMeshAttributesShared *)(local_c8 + 0x10),&local_218,false);
  local_260 = local_218.ArrayNum;
  uVar17 = (ulonglong)(int)local_260;
  local_1d0 = local_218.AllocatorInstance.Data + uVar17 * 8;
  FVar24.Data = local_218.AllocatorInstance.Data;
  do {
    pFVar7 = local_1d0;
    local_220 = FVar24.Data;
    if (local_218.ArrayNum != (int)uVar17) {
      local_278[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    if (FVar24.Data == pFVar7) {
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
      }
      bVar8 = true;
LAB_1443acd24:
      if ((FBoneWeight *)local_270.Data != (FBoneWeight *)0x0) {
        FMemory::Free(local_270.Data);
      }
      return bVar8;
    }
    pFVar10 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_c8._8_8_ + 0x50),0);
    FVar11 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_158);
    pFVar12 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar10->Attributes,*(FName *)FVar11);
    if (((pFVar12 == (FAttributesSetEntry *)0x0) ||
        (local_228 = (TMeshUnboundedAttributeArraySet<int> *)(pFVar12->Ptr).Ptr,
        *(uint *)&local_228->_padding_ != 4)) ||
       (*(uint *)((longlong)&local_228->_padding_ + 4) != 0)) {
      local_228 = (TMeshUnboundedAttributeArraySet<int> *)0x0;
    }
    FVar13 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(param_1->VertexElements,0);
    uStack_244 = 1;
    local_248 = 0;
    uVar22 = *(int *)((longlong)FVar13 + 0x18);
    uStack_234 = 0;
    iStack_230 = 0;
    if (uVar22 != 0) {
      FVar23 = FVar13;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10);
      }
      uVar20 = *(uint *)FVar23;
      while (uVar20 == 0) {
        iStack_230 = iStack_230 + 0x20;
        lVar18 = (longlong)local_248;
        local_248 = local_248 + 1;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < local_248)
        goto LAB_1443ac7eb;
        uVar20 = ((uint *)((longlong)FVar23 + 4))[lVar18];
      }
      uStack_244 = -uVar20 & uVar20;
      uVar17 = (ulonglong)uStack_244 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1f0 = (int)lVar18;
      uStack_234 = local_1f0 + -1 + iStack_230;
      if ((int)uVar22 < (int)uStack_234) {
LAB_1443ac7eb:
        uStack_234 = uVar22;
      }
    }
    local_238 = 0xffffffff;
    local_1c0._padding_ = CONCAT44(uStack_244,local_248);
    local_1c0.CurrentBitIndex = uStack_234;
    local_1c0.UnvisitedBitMask = 0xffffffff;
    local_1c0._28_4_ = uStack_22c;
    local_1c0.BaseBitIndex = iStack_230;
    iVar19 = (int)uVar22 >> 5;
    uVar20 = -1 << ((byte)uVar22 & 0x1f);
    uVar25 = uVar22 & 0xffffffe0;
    FStack_240 = FVar13;
    local_1c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar13;
    local_168 = uVar20;
    uStack_164 = uVar22;
    if (((int)uVar22 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar3 = *(uint *)((longlong)FVar13 + 0x18);
    if (uVar22 != uVar3) {
      FVar23 = FVar13;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10);
      }
      uVar20 = uVar20 & *(uint *)((longlong)FVar23 + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar18 = (longlong)iVar19;
        uVar25 = uVar25 + 0x20;
        iVar19 = iVar19 + 1;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_1443ac8c4;
        uVar20 = *(uint *)((longlong)FVar23 + 4 + lVar18 * 4);
        local_168 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1ec = (int)lVar18;
      uStack_164 = local_1ec + -1 + uVar25;
      if ((int)uVar3 < (int)uStack_164) {
LAB_1443ac8c4:
        uStack_164 = uVar3;
      }
    }
    local_1d8 = (ulonglong)uStack_164;
    while ((this = local_228, local_1c0.CurrentBitIndex != (int)local_1d8 ||
           ((ForElementType<unsigned_int>)local_1c0.Array != FVar13))) {
      iVar19 = -1;
      if (local_1c0.CurrentBitIndex < *(int *)((longlong)local_1c0.Array + 0x18)) {
        iVar19 = local_1c0.CurrentBitIndex;
      }
      local_200 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(local_228,0);
      local_208 = &local_200;
      uStack_1f8 = CONCAT44(uStack_194,iVar19);
      local_1a0 = local_200;
      iStack_198 = iVar19;
      pTVar14 = TAttributeArrayContainer<int>::Get(local_200,&local_138,iVar19);
      uVar22 = pTVar14->ArrayNum;
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
      }
      local_268 = 0;
      if (iStack_264 < (int)uVar22) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,uVar22,&local_270,0,&iStack_264);
      }
      pTVar14 = TAttributeArrayContainer<int>::Get(*local_208,&local_128,*(int *)(local_208 + 1));
      if ((pTVar14->ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                             ,0x89,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pTVar14 = TAttributeArrayContainer<int>::Get(*local_208,&local_118,*(int *)(local_208 + 1));
      iVar4 = pTVar14->ArrayNum;
      if (((iVar4 < 0) ||
          (pTVar14 = TAttributeArrayContainer<int>::Get
                               (*local_208,&local_108,*(int *)(local_208 + 1)), iVar21 = 0,
          pTVar14->ArrayNum < iVar4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex > INDEX_NONE && InIndex <= InWeights->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Public\\SkinWeightsAttributesRef.h"
                             ,0x89,L""), iVar21 = 0, bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      for (; iVar6 = local_268, iVar21 != iVar4; iVar21 = iVar21 + 1) {
        pTVar14 = TAttributeArrayContainer<int>::Get(*local_208,&local_f8,*(int *)(local_208 + 1));
        uVar22 = pTVar14->DataPtr[iVar21];
        local_274.RawWeight = (ushort)uVar22;
        local_274.BoneIndex = (ushort)(uVar22 >> 0x10);
        if (param_2->ArrayNum <= (int)(uVar22 >> 0x10)) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2849005812079132929>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshOperations.cpp"
                             ,0x101,"InBoneIndexMapping.IsValidIndex(BoneWeight.GetBoneIndex())");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.AllocatorInstance.Data);
          }
          bVar8 = false;
          goto LAB_1443acd24;
        }
        local_274.BoneIndex = *(ushort *)(param_2->DataPtr + (uVar22 >> 0x10));
        if (((local_270.Data <= &local_274) &&
            (&local_274 < (FBoneWeight *)(local_270.Data + (longlong)iStack_264 * 4))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        if (local_268 == iStack_264) {
          local_268 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x204,&local_270,&iStack_264);
        }
        *(FBoneWeight *)(local_270.Data + (longlong)local_268 * 4) = local_274;
        local_268 = local_268 + 1;
      }
      local_188 = (FBoneWeight *)local_270.Data;
      if ((local_268 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iStack_180 = iVar6;
      local_1e8.Container = &local_88;
      local_148._12_4_ = uStack_17c;
      local_148.ArrayNum = iVar6;
      uVar22 = 0;
      local_148.DataPtr = local_188;
      local_88.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0
      ;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0xc;
      UE::AnimationCore::
      TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
      ::
      SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                (&local_1e8,&local_148,&local_258);
      this_00 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(this,0);
      TAttributeArrayContainer<int>::SetElementSize
                (this_00,&local_e8,iVar19,local_88.ArrayNum,true,false);
      if (0 < local_88.ArrayNum) {
        lVar18 = 0;
        do {
          uVar20 = 0;
          if ((int)uVar22 < local_88.ArrayNum) {
            uVar20 = ~uVar22 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          FVar16 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FVar16 = local_88.AllocatorInstance.SecondaryData;
          }
          uVar1 = *(undefined2 *)((longlong)FVar16 + lVar18);
          uVar2 = *(undefined2 *)((longlong)FVar16 + lVar18 + 2);
          pTVar14 = TAttributeArrayContainer<int>::Get(this_00,&local_d8,iVar19);
          piVar15 = TArrayView<int,int>::operator[](pTVar14,uVar22);
          uVar22 = uVar22 + 1;
          lVar18 = lVar18 + 4;
          *piVar15 = CONCAT22(uVar1,uVar2);
          param_2 = local_1e0;
        } while ((int)uVar22 < local_88.ArrayNum);
      }
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
    }
    FVar24.Data = local_220 + 8;
    uVar17 = (ulonglong)local_260;
    param_1 = local_1c8;
  } while( true );
}

// ValidateAndFixInfluences @ 1443b0fc0

void __cdecl
FSkeletalMeshOperations::ValidateAndFixInfluences(FMeshDescription *param_1,bool *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FMeshElementContainer *pFVar11;
  FName FVar12;
  FAttributesSetEntry *pFVar13;
  TArrayView<int,int> *pTVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  longlong lVar18;
  uint uVar19;
  TMeshUnboundedAttributeArraySet<int> *this;
  float fVar20;
  float fVar21;
  FIdentityFunctor local_res10;
  undefined1 local_res18 [8];
  FBoneWeight local_res20 [2];
  FBoneWeight local_238 [2];
  ForAnyElementType local_230;
  undefined8 local_228;
  FBoneWeightsSettings local_220;
  undefined8 local_210;
  TElementIDs local_208;
  TMeshUnboundedAttributeArraySet<int> *local_200;
  TAttributeArrayContainer<int> **local_1f8;
  TAttributeArrayContainer<int> *local_1f0;
  undefined8 uStack_1e8;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_1d8;
  TBoneWeights<Internal::FAttributesRefAdapter> local_1c8;
  TArrayAttribute<int> local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  TAttributeArrayContainer<int> *local_190;
  int iStack_188;
  undefined4 uStack_184;
  FBoneWeight *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [8];
  TConstIterator local_160;
  TArrayView<int,int> local_140;
  TArrayView<int,int> local_130;
  TArrayView<int,int> local_120;
  TArrayView<int,int> local_110;
  TArrayView<int,int> local_100;
  TArrayView<int,int> local_f0;
  FSkeletalMeshAttributes local_e0 [3];
  
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(local_e0,param_1);
  local_210 = 0;
  pFVar11 = FMeshElementChannels::Get(*(FMeshElementChannels **)(local_e0[0]._padding_ + 0x50),0);
  FVar12 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_168);
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar11->Attributes,*(FName *)FVar12);
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (this = (TMeshUnboundedAttributeArraySet<int> *)(pFVar13->Ptr).Ptr,
      *(uint *)&this->_padding_ != 4)) || (*(uint *)((longlong)&this->_padding_ + 4) != 0)) {
    *param_2 = false;
    return;
  }
  *param_2 = false;
  if (this != (TMeshUnboundedAttributeArraySet<int> *)0x0) {
    local_200 = this;
    local_208.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_208,(TConstIterator *)&local_1b0);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_208,&local_160);
    fVar6 = __real_477fff00;
    fVar5 = __real_37800080;
    fVar4 = __real_3f000000;
    fVar3 = __real_3f800000;
    local_res10 = SUB81(param_2,0);
    uVar17 = local_1d8._12_4_;
    while ((lVar16 = 0, local_1b0.CurrentBitIndex != local_160.Iterator.CurrentBitIndex ||
           (local_1b0.Array != local_160.Iterator.Array))) {
      iVar9 = -1;
      if (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits) {
        iVar9 = local_1b0.CurrentBitIndex;
      }
      local_1f0 = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(this,0);
      local_1f8 = &local_1f0;
      uStack_1e8 = CONCAT44(uStack_184,iVar9);
      local_190 = local_1f0;
      iStack_188 = iVar9;
      pTVar14 = TAttributeArrayContainer<int>::Get(local_1f0,&local_140,iVar9);
      uVar15 = pTVar14->ArrayNum;
      if (uVar15 == 0) {
        local_220.bHasDefaultBoneIndex = false;
        local_220.bBlendZeroInfluence = true;
        local_220._14_2_ = 0;
        local_220.WeightThreshold = 1;
        local_220.DefaultBoneIndex = 0;
        local_178 = local_res20;
        iStack_170 = 1;
        local_220.NormalizeType = Always;
        local_220.MaxWeightCount = 0xc;
        local_res20[0].BoneIndex = 0;
        local_res20[0].RawWeight = 0xffff;
        local_1c0.Array = TMeshUnboundedAttributeArraySet<int>::GetArrayForChannel(this,0);
        local_1d8._12_4_ = uStack_16c;
        local_1d8.ArrayNum = iStack_170;
        local_1c8.Container = &local_1c0;
        local_1d8.DataPtr = local_178;
        local_1c0.Index = iVar9;
        local_1c0._12_4_ = uVar17;
        UE::AnimationCore::TBoneWeights<Internal::FAttributesRefAdapter>::
        SetBoneWeights<TArrayAttribute<int>_>(&local_1c8,&local_1d8,&local_220);
      }
      else {
        local_230.Data = (FScriptContainerElement *)0x0;
        local_228 = 0;
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if (0 < (int)uVar15) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,uVar15,&local_230,0,(int *)((longlong)&local_228 + 4));
        }
        lVar18 = (longlong)(int)uVar15;
        fVar21 = 0.0;
        if ((int)uVar15 < 1) {
LAB_1443b1331:
          uVar19 = 0;
          lVar16 = 0;
          if (0 < (int)uVar15) {
            do {
              uVar10 = 0;
              if ((int)uVar19 < (int)local_228) {
                uVar10 = ~uVar19 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar7.Data = local_230.Data;
              pTVar14 = TAttributeArrayContainer<int>::Get
                                  (*local_1f8,&local_110,*(int *)(local_1f8 + 1));
              uVar19 = uVar19 + 1;
              fVar20 = (float)*(ushort *)(pTVar14->DataPtr + lVar16) * fVar5 * (fVar3 / fVar21);
              if (fVar3 <= fVar20) {
                fVar20 = fVar3;
              }
              if (fVar20 <= 0.0) {
                fVar20 = 0.0;
              }
              *(short *)(FVar7.Data + lVar16 * 4 + 2) = (short)(int)(fVar20 * fVar6 + fVar4);
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar18);
            uVar17 = local_1d8._12_4_;
          }
        }
        else {
          do {
            pTVar14 = TAttributeArrayContainer<int>::Get
                                (*local_1f8,&local_130,*(int *)(local_1f8 + 1));
            local_238[0].RawWeight = (ushort)pTVar14->DataPtr[lVar16];
            local_238[0].BoneIndex = (ushort)((uint)pTVar14->DataPtr[lVar16] >> 0x10);
            if (((local_230.Data <= local_238) &&
                (local_238 < (FBoneWeight *)(local_230.Data + (longlong)local_228._4_4_ * 4))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar9 = (int)local_228;
            if ((int)local_228 == local_228._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x204,&local_230,(int *)((longlong)&local_228 + 4));
            }
            local_228 = CONCAT44(local_228._4_4_,iVar9 + 1);
            *(FBoneWeight *)(local_230.Data + (longlong)iVar9 * 4) = local_238[0];
            pTVar14 = TAttributeArrayContainer<int>::Get
                                (*local_1f8,&local_120,*(int *)(local_1f8 + 1));
            puVar1 = (ushort *)(pTVar14->DataPtr + lVar16);
            lVar16 = lVar16 + 1;
            fVar21 = fVar21 + (float)*puVar1 * fVar5;
          } while (lVar16 < lVar18);
          if (fVar21 != fVar3) goto LAB_1443b1331;
        }
        if (0xc < (int)uVar15) {
          *param_2 = true;
        }
        AlgoImpl::
        IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_FSkeletalMeshOperations::ValidateAndFixInfluences_::__l9::<lambda_1>_>_>
                  ((FBoneWeight *)local_230.Data,(int)local_228,local_res10,
                   (<lambda_1> *)local_res18);
        uVar15 = 0;
        if (0 < lVar18) {
          do {
            TAttributeArrayContainer<int>::Get(*local_1f8,&local_100,*(int *)(local_1f8 + 1));
            uVar19 = 0;
            if ((int)uVar15 < (int)local_228) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            TAttributeArrayContainer<int>::Get(*local_1f8,&local_f0,*(int *)(local_1f8 + 1));
            uVar19 = 0;
            if ((int)uVar15 < (int)local_228) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar15 = uVar15 + 1;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        this = local_200;
        if ((FBoneWeight *)local_230.Data != (FBoneWeight *)0x0) {
          FMemory::Free(local_230.Data);
          this = local_200;
        }
      }
      local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
    }
  }
  return;
}

// ValidateFixComputeMeshDescriptionData @ 1443b15d0

void __cdecl
FSkeletalMeshOperations::ValidateFixComputeMeshDescriptionData
          (FMeshDescription *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          int param_3,bool param_4,FString *param_5)

{
  FName FVar1;
  uint uVar2;
  FMeshElementContainer *pFVar3;
  FScriptContainerElement *pFVar4;
  bool local_18;
  bool local_17 [7];
  FName local_10;
  
  FStaticMeshOperations::ConvertSmoothGroupToHardEdges(param_2,param_1);
  FStaticMeshOperations::ValidateAndFixData(param_1,param_5);
  FStaticMeshOperations::HasInvalidVertexInstanceNormalsOrTangents(param_1,&local_18,local_17);
  if ((local_18 != false) || (local_17[0] != false)) {
    if ((param_5->Data).ArrayNum < 2) {
      pFVar4 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar4 = (param_5->Data).AllocatorInstance.Data;
    }
    FStaticMeshOperations::ComputeTriangleTangentsAndNormals
              (param_1,__real_322bcc77,(wchar_t *)pFVar4);
    FStaticMeshOperations::ComputeTangentsAndNormals(param_1,(uint)param_4 << 3);
    pFVar3 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    FVar1 = MeshAttribute::Triangle::Normal;
    local_10 = MeshAttribute::Triangle::Normal;
    if (*(int *)&(pFVar3->Attributes).Map.field_0x8 != *(int *)&(pFVar3->Attributes).Map.field_0x34)
    {
      uVar2 = ::GetTypeHash(MeshAttribute::Triangle::Normal.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)&pFVar3->Attributes,FVar1.Number + uVar2,&local_10);
    }
    pFVar3 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    FVar1 = MeshAttribute::Triangle::Tangent;
    local_10 = MeshAttribute::Triangle::Tangent;
    if (*(int *)&(pFVar3->Attributes).Map.field_0x8 != *(int *)&(pFVar3->Attributes).Map.field_0x34)
    {
      uVar2 = ::GetTypeHash(MeshAttribute::Triangle::Tangent.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)&pFVar3->Attributes,FVar1.Number + uVar2,&local_10);
    }
    pFVar3 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    FVar1 = MeshAttribute::Triangle::Binormal;
    local_10 = MeshAttribute::Triangle::Binormal;
    if (*(int *)&(pFVar3->Attributes).Map.field_0x8 != *(int *)&(pFVar3->Attributes).Map.field_0x34)
    {
      uVar2 = ::GetTypeHash(MeshAttribute::Triangle::Binormal.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)&pFVar3->Attributes,FVar1.Number + uVar2,&local_10);
    }
  }
  FMeshDescription::RebuildIndexers(param_1);
  return;
}

