// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// CopyFrom<FCompactPoseBoneIndex,TMemStackAllocator<0>_> @ 14a20dc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a20e399) */

void __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
CopyFrom<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *param_1,
          FBoneContainer *param_2)

{
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  code *pcVar4;
  longlong lVar5;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar6;
  FMeshPoseBoneIndex *pFVar7;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  UScriptStruct *pUVar15;
  ForElementType<FSetElementId> FVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int *piVar21;
  uint *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [4];
  uint local_174;
  TWrappedAttribute<TSizedDefaultAllocator<32>_> local_170;
  uint local_160 [2];
  longlong local_158;
  int local_150;
  uint local_14c;
  FScriptContainerElement *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  FScriptContainerElement *local_120;
  FWeakObjectPtr local_118;
  longlong local_110;
  longlong local_108;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_100;
  TPairInitializer<int_const_&,FMeshPoseBoneIndex_const_&> local_f8;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_e0;
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_d8;
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_d0;
  undefined8 *local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c0;
  longlong local_b8;
  longlong local_b0;
  int *local_a8;
  uint *local_a0;
  TSet<TTuple<int,FMeshPoseBoneIndex>,TDefaultMapHashableKeyFuncs<int,FMeshPoseBoneIndex,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_e8 = &this->UniqueTypes;
  local_100 = param_1;
  local_f8.Value = (FMeshPoseBoneIndex *)param_2;
  local_d0 = this;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
            (local_e8,&param_1->UniqueTypes);
  uVar11 = (param_1->AttributeIdentifiers).ArrayNum;
  pTVar1 = &this->AttributeIdentifiers;
  local_e0 = pTVar1;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (pTVar1->AllocatorInstance).Data,(this->AttributeIdentifiers).ArrayNum);
  piVar3 = &(this->AttributeIdentifiers).ArrayMax;
  (this->AttributeIdentifiers).ArrayNum = 0;
  if (*piVar3 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&pTVar1->AllocatorInstance,0,piVar3);
  }
  uVar11 = (param_1->UniqueTypedBoneIndices).ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
             (this->UniqueTypedBoneIndices).ArrayNum);
  piVar3 = &(this->UniqueTypedBoneIndices).ArrayMax;
  (this->UniqueTypedBoneIndices).ArrayNum = 0;
  if (*piVar3 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,(ForAnyElementType *)this,0,piVar3);
  }
  uVar11 = (param_1->Values).ArrayNum;
  pTVar2 = &this->Values;
  local_d8 = pTVar2;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(pTVar2->AllocatorInstance).Data,(this->Values).ArrayNum);
  piVar3 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar3 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&pTVar2->AllocatorInstance,0,piVar3);
  }
  local_b0 = (longlong)(param_1->UniqueTypedBoneIndices).ArrayNum;
  local_174 = 0;
  if (0 < local_b0) {
    local_158 = 0;
    local_140 = 0;
    do {
      lVar17 = local_140;
      local_98.Elements._0_8_ = 0;
      uVar25 = ~local_174 >> 0x1f;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      uVar11 = 0;
      if ((int)local_174 < (param_1->UniqueTypedBoneIndices).ArrayNum) {
        uVar11 = uVar25;
      }
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = local_f8.Value;
      pFVar18 = (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar17;
      piVar21 = *(int **)pFVar18;
      iVar13 = *(int *)(pFVar18 + 8);
      piVar3 = piVar21 + iVar13;
      while( true ) {
        if (*(int *)(pFVar18 + 8) != iVar13) {
          local_178[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_178);
        }
        pTVar8 = local_e8;
        pTVar6 = local_100;
        uVar11 = local_174;
        if (piVar21 == piVar3) break;
        local_150 = *piVar21;
        lVar17 = (longlong)local_150;
        if ((local_150 < 0) ||
           (((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->ArrayNum <=
            local_150)) {
          local_160[0] = 0xffffffff;
          piVar21 = piVar21 + 1;
        }
        else {
          if ((local_150 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_a8 = &local_150;
          local_a0 = local_160;
          local_160[0] = (uint)*(ushort *)
                                ((((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                  &pFVar7->field_0x0)->AllocatorInstance).Data + lVar17 * 2);
          TSet<TTuple<int,FMeshPoseBoneIndex>,TDefaultMapHashableKeyFuncs<int,FMeshPoseBoneIndex,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FMeshPoseBoneIndex_const_&>_>
                    (&local_98,&local_f8,(bool *)&local_a8);
          piVar21 = piVar21 + 1;
        }
      }
      uVar27 = 0;
      uVar12 = uVar27;
      if ((int)local_174 < local_e8->ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_118 = *(FWeakObjectPtr *)((pTVar8->AllocatorInstance).Data + local_158 * 8);
      uVar12 = uVar27;
      if ((int)uVar11 < (pTVar6->AttributeIdentifiers).ArrayNum) {
        uVar12 = uVar25;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar17 = local_140;
      local_148 = (pTVar6->AttributeIdentifiers).AllocatorInstance.Data + local_140;
      if ((int)uVar11 < (pTVar6->Values).ArrayNum) {
        uVar27 = uVar25;
      }
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = local_e0;
      local_120 = (pTVar6->Values).AllocatorInstance.Data + lVar17;
      iVar13 = local_e0->ArrayNum;
      if (iVar13 == local_e0->ArrayMax) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_e0->AllocatorInstance,&local_e0->ArrayMax);
      }
      pTVar2 = local_d8;
      pTVar1->ArrayNum = iVar13 + 1;
      pFVar18 = (pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)&pFVar18->field_0x0 = 0;
      *(undefined8 *)&pFVar18[8].field_0x0 = 0;
      iVar13 = local_d8->ArrayNum;
      if (iVar13 == local_d8->ArrayMax) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_d8->AllocatorInstance,&local_d8->ArrayMax);
      }
      pTVar9 = local_d0;
      pTVar2->ArrayNum = iVar13 + 1;
      pFVar26 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(undefined8 *)&pFVar26->field_0x0 = 0;
      *(undefined8 *)&pFVar26[8].field_0x0 = 0;
      iVar13 = (local_d0->UniqueTypedBoneIndices).ArrayNum;
      if (iVar13 == (local_d0->UniqueTypedBoneIndices).ArrayMax) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)local_d0,
                            &(local_d0->UniqueTypedBoneIndices).ArrayMax);
      }
      uVar19 = 0;
      local_c0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((pTVar9->UniqueTypedBoneIndices).AllocatorInstance.Data + (longlong)iVar13 * 0x10)
      ;
      (pTVar9->UniqueTypedBoneIndices).ArrayNum = iVar13 + 1;
      (local_c0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_c0->ArrayNum = 0;
      local_c0->ArrayMax = 0;
      local_b8 = (longlong)*(int *)(local_148 + 8);
      if (0 < local_b8) {
        local_108 = 0;
        local_110 = 0;
        uVar24 = uVar19;
        do {
          lVar5 = local_108;
          lVar17 = local_110;
          uVar25 = (uint)uVar19;
          uVar11 = 0;
          if ((int)uVar25 < *(int *)(local_148 + 8)) {
            uVar11 = ~uVar25 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar20 = (undefined8 *)(lVar17 + *(longlong *)local_148);
          uVar11 = 0;
          if ((int)uVar25 < *(int *)(local_120 + 8)) {
            uVar11 = ~uVar25 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar23 = (uint *)0x0;
          local_c8 = (undefined8 *)(*(longlong *)local_120 + lVar5);
          puVar14 = puVar23;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            uVar11 = *(uint *)((longlong)FVar16 +
                              (ulonglong)(local_98.HashSize - 1U & *(uint *)(puVar20 + 2)) * 4);
            while ((puVar14 = puVar23, uVar11 != 0xffffffff &&
                   (puVar14 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar11 * 0x10),
                   *puVar14 != *(uint *)(puVar20 + 2)))) {
              uVar11 = puVar14[2];
            }
          }
          puVar22 = puVar14 + 1;
          if (puVar14 == (uint *)0x0) {
            puVar22 = puVar23;
          }
          if (puVar22 != (uint *)0x0) {
            local_138 = *puVar20;
            uStack_130 = puVar20[1];
            local_128 = *puVar22;
            if (((*(undefined8 **)&pFVar18->field_0x0 <= &local_138) &&
                (&local_138 <
                 (undefined8 *)
                 ((longlong)*(undefined8 **)&pFVar18->field_0x0 +
                 (longlong)*(int *)(pFVar18 + 0xc) * 0x14))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = *(int *)&pFVar18[8].field_0x0;
            if (iVar13 == *(int *)(pFVar18 + 0xc)) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x414,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
            }
            *(int *)&pFVar18[8].field_0x0 = iVar13 + 1;
            lVar17 = *(longlong *)&pFVar18->field_0x0;
            puVar20 = (undefined8 *)(lVar17 + (longlong)iVar13 * 0x14);
            *puVar20 = local_138;
            puVar20[1] = uStack_130;
            *(uint *)(lVar17 + (longlong)iVar13 * 0x14 + 0x10) = local_128;
            pUVar15 = (UScriptStruct *)FWeakObjectPtr::Get(&local_118);
            local_170.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_170.StructMemory.ArrayNum = 0;
            local_170.StructMemory.ArrayMax = 0;
            TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate(&local_170,pUVar15);
            if (((*(TWrappedAttribute<TSizedDefaultAllocator<32>_> **)&pFVar26->field_0x0 <=
                  &local_170) &&
                (&local_170 <
                 *(TWrappedAttribute<TSizedDefaultAllocator<32>_> **)&pFVar26->field_0x0 +
                 *(int *)(pFVar26 + 0xc))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = *(int *)&pFVar26[8].field_0x0;
            if (iVar13 == *(int *)(pFVar26 + 0xc)) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)pFVar26,(int *)(pFVar26 + 0xc));
            }
            *(int *)&pFVar26[8].field_0x0 = iVar13 + 1;
            puVar20 = (undefined8 *)(*(longlong *)&pFVar26->field_0x0 + (longlong)iVar13 * 0x10);
            *puVar20 = 0;
            *puVar20 = local_170.StructMemory.AllocatorInstance.Data;
            *(int *)(puVar20 + 1) = local_170.StructMemory.ArrayNum;
            *(int *)((longlong)puVar20 + 0xc) = local_170.StructMemory.ArrayMax;
            local_170.StructMemory.ArrayNum = 0;
            local_170.StructMemory.ArrayMax = 0;
            local_170.StructMemory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pUVar15 = (UScriptStruct *)FWeakObjectPtr::Get(&local_118);
            UScriptStruct::CopyScriptStruct(pUVar15,(void *)*puVar20,(void *)*local_c8,1);
            local_14c = *puVar22;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(local_c0,(int *)&local_14c);
          }
          uVar19 = (ulonglong)(uVar25 + 1);
          local_110 = local_110 + 0x14;
          local_108 = local_108 + 0x10;
          uVar24 = uVar24 + 1;
          uVar11 = local_174;
        } while ((longlong)uVar24 < local_b8);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FMeshPoseBoneIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FMeshPoseBoneIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_174 = uVar11 + 1;
      local_158 = local_158 + 1;
      local_140 = local_140 + 0x10;
      param_1 = local_100;
    } while (local_158 < local_b0);
  }
  return;
}

// CopyFrom<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> @ 14a20e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
CopyFrom<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
          (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1,
          FBoneContainer *param_2)

{
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  FCompactPoseBoneIndex *pFVar6;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  UScriptStruct *pUVar13;
  ForElementType<FSetElementId> FVar14;
  uint *puVar15;
  uint *puVar16;
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [4];
  uint local_174;
  longlong local_170;
  TWrappedAttribute<TMemStackAllocator<0>_> local_168;
  int local_158;
  uint local_154;
  uint local_150 [2];
  FScriptContainerElement *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  FScriptContainerElement *local_120;
  FWeakObjectPtr local_118;
  longlong local_110;
  longlong local_108;
  TPairInitializer<int_const_&,FCompactPoseBoneIndex_const_&> local_100;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_f0;
  TArray<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_e8;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_e0;
  undefined8 *local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d0;
  longlong local_c8;
  longlong local_c0;
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *local_b8;
  FBoneContainer *local_b0;
  uint *local_a8;
  int *local_a0;
  TSet<TTuple<int,FCompactPoseBoneIndex>,TDefaultMapHashableKeyFuncs<int,FCompactPoseBoneIndex,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_100.Value = (FCompactPoseBoneIndex *)&this->UniqueTypes;
  local_e0 = this;
  local_b8 = param_1;
  local_b0 = param_2;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             local_100.Value,&param_1->UniqueTypes);
  uVar11 = (param_1->AttributeIdentifiers).ArrayNum;
  pTVar1 = &this->AttributeIdentifiers;
  local_f0 = pTVar1;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (pTVar1->AllocatorInstance).Data,(this->AttributeIdentifiers).ArrayNum);
  piVar2 = &(this->AttributeIdentifiers).ArrayMax;
  (this->AttributeIdentifiers).ArrayNum = 0;
  if (*piVar2 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar11 = (param_1->UniqueTypedBoneIndices).ArrayNum;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->UniqueTypedBoneIndices).AllocatorInstance.Data,
             (this->UniqueTypedBoneIndices).ArrayNum);
  piVar2 = &(this->UniqueTypedBoneIndices).ArrayMax;
  (this->UniqueTypedBoneIndices).ArrayNum = 0;
  if (*piVar2 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,(ForAnyElementType *)this,0,piVar2);
  }
  uVar11 = (param_1->Values).ArrayNum;
  pTVar17 = &this->Values;
  local_e8 = pTVar17;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)(pTVar17->AllocatorInstance).Data,(this->Values).ArrayNum);
  piVar2 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if (*piVar2 != uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&pTVar17->AllocatorInstance,0,piVar2);
  }
  local_c0 = (longlong)(param_1->UniqueTypedBoneIndices).ArrayNum;
  local_174 = 0;
  if (0 < local_c0) {
    local_170 = 0;
    local_140 = 0;
    do {
      lVar3 = local_140;
      local_98.Elements._0_8_ = 0;
      uVar20 = ~local_174 >> 0x1f;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      uVar11 = 0;
      if ((int)local_174 < (param_1->UniqueTypedBoneIndices).ArrayNum) {
        uVar11 = uVar20;
      }
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar18 = (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar3;
      puVar16 = *(uint **)pFVar18;
      iVar10 = *(int *)(pFVar18 + 8);
      puVar15 = puVar16 + iVar10;
LAB_14a20e6a0:
      if (*(int *)(pFVar18 + 8) != iVar10) {
        local_178[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_178);
      }
      pFVar6 = local_100.Value;
      uVar11 = local_174;
      if (puVar16 != puVar15) {
        pFVar24 = (param_2->BoneIndicesArray).AllocatorInstance.Data;
        local_154 = *puVar16;
        for (pFVar12 = pFVar24;
            pFVar12 != pFVar24 + (longlong)(param_2->BoneIndicesArray).ArrayNum * 2;
            pFVar12 = pFVar12 + 2) {
          if (*(ushort *)pFVar12 == local_154) {
            local_158 = (int)((longlong)pFVar12 - (longlong)pFVar24 >> 1);
            if (local_158 == -1) goto LAB_14a20e6ef;
            local_a8 = &local_154;
            local_a0 = &local_158;
            TSet<TTuple<int,FCompactPoseBoneIndex>,TDefaultMapHashableKeyFuncs<int,FCompactPoseBoneIndex,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FCompactPoseBoneIndex_const_&>_>
                      (&local_98,&local_100,(bool *)&local_a8);
            puVar16 = puVar16 + 1;
            goto LAB_14a20e6a0;
          }
        }
        local_158 = -1;
LAB_14a20e6ef:
        puVar16 = puVar16 + 1;
        goto LAB_14a20e6a0;
      }
      uVar9 = 0;
      if ((int)local_174 < (int)local_100.Value[2]) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_118 = *(FWeakObjectPtr *)
                   (((ForAnyElementType *)&pFVar6->field_0x0)->Data + local_170 * 8);
      uVar9 = 0;
      if ((int)uVar11 < (param_1->AttributeIdentifiers).ArrayNum) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = local_140;
      local_148 = (param_1->AttributeIdentifiers).AllocatorInstance.Data + local_140;
      uVar9 = 0;
      if ((int)uVar11 < (param_1->Values).ArrayNum) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar1 = local_f0;
      local_120 = (param_1->Values).AllocatorInstance.Data + lVar3;
      iVar10 = local_f0->ArrayNum;
      if (iVar10 == local_f0->ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_f0->AllocatorInstance,&local_f0->ArrayMax);
      }
      pTVar17 = local_e8;
      pTVar1->ArrayNum = iVar10 + 1;
      pFVar18 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)&pFVar18->field_0x0 = 0;
      *(undefined8 *)&pFVar18[8].field_0x0 = 0;
      iVar10 = local_e8->ArrayNum;
      if (iVar10 == local_e8->ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_e8->AllocatorInstance,&local_e8->ArrayMax);
      }
      pTVar7 = local_e0;
      pTVar17->ArrayNum = iVar10 + 1;
      pFVar24 = (pTVar17->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)&pFVar24->field_0x0 = 0;
      *(undefined8 *)&pFVar24[8].field_0x0 = 0;
      iVar10 = (local_e0->UniqueTypedBoneIndices).ArrayNum;
      if (iVar10 == (local_e0->UniqueTypedBoneIndices).ArrayMax) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)local_e0,
                            &(local_e0->UniqueTypedBoneIndices).ArrayMax);
      }
      uVar22 = 0;
      local_d0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((pTVar7->UniqueTypedBoneIndices).AllocatorInstance.Data + (longlong)iVar10 * 0x10)
      ;
      (pTVar7->UniqueTypedBoneIndices).ArrayNum = iVar10 + 1;
      (local_d0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_d0->ArrayNum = 0;
      local_d0->ArrayMax = 0;
      local_c8 = (longlong)*(int *)(local_148 + 8);
      if (0 < local_c8) {
        local_108 = 0;
        local_110 = 0;
        uVar23 = uVar22;
        do {
          lVar5 = local_108;
          lVar3 = local_110;
          uVar20 = (uint)uVar22;
          uVar11 = 0;
          if ((int)uVar20 < *(int *)(local_148 + 8)) {
            uVar11 = ~uVar20 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar19 = (undefined8 *)(lVar3 + *(longlong *)local_148);
          uVar11 = 0;
          if ((int)uVar20 < *(int *)(local_120 + 8)) {
            uVar11 = ~uVar20 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar16 = (uint *)0x0;
          local_d8 = (undefined8 *)(*(longlong *)local_120 + lVar5);
          puVar15 = puVar16;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar14 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar14 = local_98.Hash.SecondaryData;
            }
            uVar11 = *(uint *)((longlong)FVar14 +
                              (ulonglong)(local_98.HashSize - 1U & *(uint *)(puVar19 + 2)) * 4);
            while ((puVar15 = puVar16, uVar11 != 0xffffffff &&
                   (puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 + local_98.Elements._0_8_),
                   *puVar15 != *(uint *)(puVar19 + 2)))) {
              uVar11 = puVar15[2];
            }
          }
          puVar21 = puVar15 + 1;
          if (puVar15 == (uint *)0x0) {
            puVar21 = puVar16;
          }
          if (puVar21 != (uint *)0x0) {
            local_138 = *puVar19;
            uStack_130 = puVar19[1];
            local_128 = *puVar21;
            if (((*(undefined8 **)&pFVar18->field_0x0 <= &local_138) &&
                (&local_138 <
                 (undefined8 *)
                 ((longlong)*(undefined8 **)&pFVar18->field_0x0 +
                 (longlong)*(int *)(pFVar18 + 0xc) * 0x14))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = *(int *)&pFVar18[8].field_0x0;
            if (iVar10 == *(int *)(pFVar18 + 0xc)) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x414,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
            }
            *(int *)&pFVar18[8].field_0x0 = iVar10 + 1;
            lVar3 = *(longlong *)&pFVar18->field_0x0;
            puVar19 = (undefined8 *)(lVar3 + (longlong)iVar10 * 0x14);
            *puVar19 = local_138;
            puVar19[1] = uStack_130;
            *(uint *)(lVar3 + (longlong)iVar10 * 0x14 + 0x10) = local_128;
            pUVar13 = (UScriptStruct *)FWeakObjectPtr::Get(&local_118);
            local_168.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
            local_168.StructMemory.ArrayNum = 0;
            local_168.StructMemory.ArrayMax = 0;
            TWrappedAttribute<TMemStackAllocator<0>_>::Allocate(&local_168,pUVar13);
            if (((*(TWrappedAttribute<TMemStackAllocator<0>_> **)&pFVar24->field_0x0 <= &local_168)
                && (&local_168 <
                    *(TWrappedAttribute<TMemStackAllocator<0>_> **)&pFVar24->field_0x0 +
                    *(int *)(pFVar24 + 0xc))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = *(int *)&pFVar24[8].field_0x0;
            if (iVar10 == *(int *)(pFVar24 + 0xc)) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
            }
            *(int *)&pFVar24[8].field_0x0 = iVar10 + 1;
            puVar19 = (undefined8 *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar10 * 0x10);
            *puVar19 = 0;
            *puVar19 = local_168.StructMemory.AllocatorInstance.Data;
            local_168.StructMemory.AllocatorInstance.Data = (uchar *)0x0;
            *(int *)(puVar19 + 1) = local_168.StructMemory.ArrayNum;
            *(int *)((longlong)puVar19 + 0xc) = local_168.StructMemory.ArrayMax;
            local_168.StructMemory.ArrayNum = 0;
            local_168.StructMemory.ArrayMax = 0;
            pUVar13 = (UScriptStruct *)FWeakObjectPtr::Get(&local_118);
            UScriptStruct::CopyScriptStruct(pUVar13,(void *)*puVar19,(void *)*local_d8,1);
            local_150[0] = *puVar21;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(local_d0,(int *)local_150);
          }
          uVar22 = (ulonglong)(uVar20 + 1);
          local_110 = local_110 + 0x14;
          local_108 = local_108 + 0x10;
          uVar23 = uVar23 + 1;
          uVar11 = local_174;
        } while ((longlong)uVar23 < local_c8);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FCompactPoseBoneIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FCompactPoseBoneIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      local_174 = uVar11 + 1;
      local_170 = local_170 + 1;
      local_140 = local_140 + 0x10;
      param_1 = local_b8;
      param_2 = local_b0;
    } while (local_170 < local_c0);
  }
  return;
}

// Find @ 14a409630

uchar * __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Find
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar8;
  
  pFVar8 = (this->UniqueTypes).AllocatorInstance.Data;
  iVar1 = (this->UniqueTypes).ArrayNum;
  this_00 = pFVar8;
  while( true ) {
    if (this_00 == pFVar8 + (longlong)iVar1 * 8) {
      return (uchar *)0x0;
    }
    bVar3 = TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>::UEOpEquals<UScriptStruct,bool>
                      ((TWeakObjectPtr<UScriptStruct,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  uVar7 = (uint)((longlong)this_00 - (longlong)pFVar8 >> 3);
  if (uVar7 == 0xffffffff) {
    return (uchar *)0x0;
  }
  uVar4 = 0;
  if ((int)uVar7 < (this->AttributeIdentifiers).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
  uVar4 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
          IndexOfByKey<UE::Anim::FAttributeId>
                    ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                     ((this->AttributeIdentifiers).AllocatorInstance.Data +
                     (longlong)(int)uVar7 * 0x10),param_2);
  if ((((int)uVar7 < 0) || ((this->Values).ArrayNum <= (int)uVar7)) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1265464598543204794>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                         ,0x1ba,"Values.IsValidIndex(TypeIndex)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
  uVar5 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
  pFVar8 = (this->Values).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
  if (uVar4 == 0xffffffff) {
    return (uchar *)0x0;
  }
  if ((((int)uVar4 < 0) || (*(int *)(pFVar8 + 8) <= (int)uVar4)) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1265464598543204799>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                         ,0x1bf,"TypedArray.IsValidIndex(AttributeIndex)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
  uVar7 = 0;
  if ((int)uVar4 < *(int *)(pFVar8 + 8)) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
  return *(uchar **)(*(longlong *)pFVar8 + (longlong)(int)uVar4 * 0x10);
}

// FindOrAdd @ 14a40b750

/* WARNING: Removing unreachable block (ram,0x00014a40bb49) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uchar * __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::FindOrAdd
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          UScriptStruct *param_1,FAttributeId *param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uchar *puVar11;
  longlong lVar12;
  FName *pFVar13;
  undefined8 *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  int local_res20 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_50;
  
  uVar7 = FindOrAddTypeIndex(this,param_1);
  uVar15 = ~uVar7 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar7 < (this->AttributeIdentifiers).ArrayNum) {
    uVar10 = uVar15;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar11 = (uchar *)(*pcVar4)();
    return puVar11;
  }
  lVar12 = (longlong)(int)uVar7 * 0x10;
  pFVar17 = (this->AttributeIdentifiers).AllocatorInstance.Data + lVar12;
  pFVar2 = *(FName **)&pFVar17->field_0x0;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)*(int *)&pFVar17[8].field_0x0 * 0x14);
  if (pFVar2 != pFVar1) {
    pFVar13 = pFVar2;
    do {
      if (((pFVar13[2].ComparisonIndex.Value == param_2->Index) && (pFVar13[1] == param_2->Name)) &&
         (*pFVar13 == param_2->Namespace)) {
        uVar10 = (uint)(((longlong)pFVar13 - (longlong)pFVar2) / 0x14);
        goto LAB_14a40b820;
      }
      pFVar13 = (FName *)&pFVar13[2].Number;
    } while (pFVar13 != pFVar1);
  }
  uVar10 = 0xffffffff;
LAB_14a40b820:
  if ((((int)uVar7 < 0) || ((this->Values).ArrayNum <= (int)uVar7)) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1265464598543204739>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                         ,0x183,"Values.IsValidIndex(TypeIndex)"), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar11 = (uchar *)(*pcVar4)();
    return puVar11;
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->Values).ArrayNum) {
    uVar8 = uVar15;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar11 = (uchar *)(*pcVar4)();
    return puVar11;
  }
  pFVar16 = (this->Values).AllocatorInstance.Data + lVar12;
  uVar8 = 0;
  if (uVar10 == 0xffffffff) {
    if (((*(FAttributeId **)&pFVar17->field_0x0 <= param_2) &&
        (param_2 < *(FAttributeId **)&pFVar17->field_0x0 + *(int *)(pFVar17 + 0xc))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    iVar9 = *(int *)&pFVar17[8].field_0x0;
    if (iVar9 == *(int *)(pFVar17 + 0xc)) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
    }
    *(int *)&pFVar17[8].field_0x0 = iVar9 + 1;
    FVar5 = param_2->Name;
    lVar3 = *(longlong *)&pFVar17->field_0x0;
    pFVar1 = (FName *)(lVar3 + (longlong)iVar9 * 0x14);
    *pFVar1 = param_2->Namespace;
    pFVar1[1] = FVar5;
    *(int *)(lVar3 + (longlong)iVar9 * 0x14 + 0x10) = param_2->Index;
    uVar10 = uVar8;
    if ((int)uVar7 < (this->UniqueTypedBoneIndices).ArrayNum) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    local_res20[0] = param_2->Index;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               ((this->UniqueTypedBoneIndices).AllocatorInstance.Data + lVar12),local_res20);
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    if (param_1 == (UScriptStruct *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                         ,0x48,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        puVar11 = (uchar *)(*pcVar4)();
        return puVar11;
      }
    }
    else {
      iVar9 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
      uVar10 = iVar9 + -1 + (int)param_1->_padding_ & -iVar9;
      if (((int)uVar10 < 1) &&
         (bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2142383606264233908>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                             ,0x4c,"StructureSize > 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        puVar11 = (uchar *)(*pcVar4)();
        return puVar11;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_50,uVar10,Default);
      (**(code **)(param_1->_padding_ + 0x2f8))(param_1,local_50.AllocatorInstance.Data,1);
    }
    if (((*(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&pFVar16->field_0x0 <= &local_50)
        && (&local_50 <
            *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&pFVar16->field_0x0 +
            *(int *)(pFVar16 + 0xc))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    uVar10 = *(uint *)&pFVar16[8].field_0x0;
    if (uVar10 == *(uint *)(pFVar16 + 0xc)) {
      uVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
    }
    *(uint *)&pFVar16[8].field_0x0 = uVar10 + 1;
    lVar12 = (longlong)(int)uVar10 * 0x10;
    puVar14 = (undefined8 *)(*(longlong *)&pFVar16->field_0x0 + lVar12);
    *puVar14 = 0;
    *puVar14 = local_50.AllocatorInstance.Data;
    *(int *)(puVar14 + 1) = local_50.ArrayNum;
    *(int *)((longlong)puVar14 + 0xc) = local_50.ArrayMax;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar10 < *(int *)&pFVar16[8].field_0x0) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    lVar3 = *(longlong *)&pFVar16->field_0x0;
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1,*(undefined8 *)(lVar3 + lVar12),1);
    if ((*(int *)&pFVar17[8].field_0x0 != *(int *)&pFVar16[8].field_0x0) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204754>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x192,"AttributeIds.Num() == TypedArray.Num()"), bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    puVar11 = *(uchar **)(lVar3 + lVar12);
  }
  else {
    if ((((int)uVar10 < 0) || (*(int *)&pFVar16[8].field_0x0 <= (int)uVar10)) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1265464598543204759>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributesContainer.h"
                           ,0x197,"TypedArray.IsValidIndex(AttributeIndex)"), bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    if ((int)uVar10 < *(int *)&pFVar16[8].field_0x0) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar11 = (uchar *)(*pcVar4)();
      return puVar11;
    }
    puVar11 = *(uchar **)(*(longlong *)&pFVar16->field_0x0 + (longlong)(int)uVar10 * 0x10);
  }
  return puVar11;
}

