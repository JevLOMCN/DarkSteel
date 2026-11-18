// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 11

// Init<unsigned_short,TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>_> @ 14e5c83e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGLTFMeshSection::Init<unsigned_short,TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>_>
          (FGLTFMeshSection *this,
          TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *param_1,ushort *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ushort *puVar3;
  void *_Src;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ForElementType<FSetElementId> FVar16;
  FScriptContainerElement *pFVar17;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  ulong64 uVar21;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar22;
  ushort *puVar23;
  FGLTFMeshSection *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_158 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106 [2];
  uint local_104;
  int local_100;
  uint local_fc;
  FGLTFMeshSection *local_f8;
  uint local_f0;
  uint *local_e8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_e0;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_d8;
  ushort *local_c8;
  int *local_c0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  if (param_2 != (ushort *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
    puVar15 = *(uint **)&this->SectionIndices;
    iVar8 = *(int *)&(this->SectionIndices).field_0x8;
    uVar21 = 0;
    puVar11 = puVar15 + iVar8;
    local_f8 = this;
    local_d8.Value = (uint *)param_1;
    local_c8 = param_2;
    while( true ) {
      if (*(int *)&(this->SectionIndices).field_0x8 != iVar8) {
        local_108 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      iVar19 = (int)uVar21;
      if (puVar15 == puVar11) break;
      uVar20 = *puVar15;
      uVar7 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar15 = puVar15 + 1;
      uVar21 = (ulong64)(uint)(iVar19 + *(int *)((param_1->AllocatorInstance).Data +
                                                (longlong)(int)uVar20 * 0x118 + 8) * 3);
    }
    pTVar22 = &this->IndexMap;
    local_e0 = pTVar22;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar21);
    }
    if ((this->IndexMap).ArrayMax < iVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar19,&pTVar22->AllocatorInstance,(this->IndexMap).ArrayNum,
                 &(this->IndexMap).ArrayMax);
    }
    local_b8 = &this->IndexBuffer;
    local_c0 = &(this->IndexBuffer).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar19,&local_b8->AllocatorInstance,local_c0,&(this->IndexBuffer).ArrayMax);
    pTVar1 = &this->BoneMapLookup;
    if ((this->BoneMapLookup).ArrayMax < iVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar19,&pTVar1->AllocatorInstance,(this->BoneMapLookup).ArrayNum,
                 &(this->BoneMapLookup).ArrayMax);
    }
    local_f0 = *(uint *)&(this->SectionIndices).field_0x8;
    uVar13 = (ulonglong)(int)local_f0;
    puVar11 = *(uint **)&this->SectionIndices;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_b0 = puVar11 + uVar13;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    pFVar24 = this;
    while( true ) {
      puVar15 = local_b0;
      local_e8 = puVar11;
      if (*(int *)&(pFVar24->SectionIndices).field_0x8 != (int)uVar13) {
        local_107 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_107);
      }
      puVar5 = local_d8.Value;
      if (puVar11 == puVar15) break;
      uVar20 = *puVar11;
      uVar7 = 0;
      if ((int)uVar20 < *(int *)((longlong)local_d8.Value + 8)) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = ((ForAnyElementType *)puVar5)->Data;
      lVar14 = (longlong)(int)uVar20 * 0x118;
      uVar20 = 0;
      pFVar25 = pFVar17 + lVar14 + 0x38;
      iVar8 = *(int *)(pFVar17 + lVar14 + 4);
      iVar19 = *(int *)(pFVar17 + lVar14 + 8);
      local_100 = (local_f8->BoneMaps).ArrayNum;
      if (iVar19 * 3 != 0) {
        do {
          local_104 = (uint)local_c8[uVar20 + iVar8];
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            uVar7 = *(uint *)((longlong)FVar16 +
                             ((ulonglong)(local_98.HashSize - 1) &
                             (ulonglong)local_c8[uVar20 + iVar8]) * 4);
            while (uVar7 != 0xffffffff) {
              puVar11 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar7 * 0x10);
              if (*puVar11 == local_104) {
                puVar15 = puVar11 + 1;
                if (puVar11 == (uint *)0x0) {
                  puVar15 = (uint *)0x0;
                }
                if (puVar15 != (uint *)0x0) {
                  local_fc = *puVar15;
                  goto LAB_14e5c88f3;
                }
                break;
              }
              uVar7 = puVar11[2];
            }
          }
          local_fc = (local_f8->IndexMap).ArrayNum;
          local_a8 = &local_104;
          local_a0 = &local_fc;
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                    (&local_98,&local_d8,(bool *)&local_a8);
          pFVar17 = (pTVar22->AllocatorInstance).Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_104) &&
              ((FScriptContainerElement *)&local_104 < pFVar17 + (longlong)pTVar22->ArrayMax * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = pTVar22->ArrayNum;
          if (iVar9 == pTVar22->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
          }
          pTVar22->ArrayNum = iVar9 + 1;
          *(uint *)((pTVar22->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_104;
          if (0 < *(int *)(pFVar25 + 8)) {
            pFVar17 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 <
                 pFVar17 + (longlong)(this->BoneMapLookup).ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = (this->BoneMapLookup).ArrayNum;
            if (iVar9 == (this->BoneMapLookup).ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar1->AllocatorInstance,&(this->BoneMapLookup).ArrayMax);
            }
            (this->BoneMapLookup).ArrayNum = iVar9 + 1;
            *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_100;
          }
LAB_14e5c88f3:
          uVar7 = local_fc;
          uVar10 = 0;
          if ((int)uVar20 < *local_c0) {
            uVar10 = ~uVar20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar14 = (longlong)(int)uVar20;
          uVar20 = uVar20 + 1;
          *(uint *)((local_b8->AllocatorInstance).Data + lVar14 * 4) = uVar7;
          pTVar22 = local_e0;
        } while (uVar20 < (uint)(iVar19 * 3));
      }
      pFVar24 = local_f8;
      if (0 < *(int *)(pFVar25 + 8)) {
        pFVar17 = (local_f8->BoneMaps).AllocatorInstance.Data;
        if (((pFVar17 <= pFVar25) &&
            (pFVar25 < pFVar17 + (longlong)(local_f8->BoneMaps).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (pFVar24->BoneMaps).ArrayNum;
        piVar2 = &(pFVar24->BoneMaps).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pFVar24->BoneMaps).AllocatorInstance,piVar2);
        }
        pFVar17 = (pFVar24->BoneMaps).AllocatorInstance.Data;
        (pFVar24->BoneMaps).ArrayNum = iVar8 + 1;
        puVar23 = (ushort *)0x0;
        pFVar17 = pFVar17 + (longlong)iVar8 * 0x10;
        *(undefined8 *)&pFVar17->field_0x0 = 0;
        iVar8 = *(int *)(pFVar25 + 8);
        _Src = *(void **)pFVar25;
        *(int *)&pFVar17[8].field_0x0 = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)pFVar17,iVar8,(int *)(pFVar17 + 0xc));
          memcpy(*(void **)&pFVar17->field_0x0,_Src,(longlong)iVar8 * 2);
        }
        puVar18 = *(ushort **)pFVar25;
        iVar8 = *(int *)(pFVar25 + 8);
        puVar3 = puVar18 + iVar8;
        while( true ) {
          if (*(int *)(pFVar25 + 8) != iVar8) {
            local_106[0] = 0;
            `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_106);
          }
          if (puVar18 == puVar3) break;
          if ((puVar23 == (ushort *)0x0) || (*puVar23 < *puVar18)) {
            puVar23 = puVar18;
          }
          puVar18 = puVar18 + 1;
        }
        if (puVar23 != (ushort *)0x0) {
          uVar12 = pFVar24->MaxBoneIndex;
          if (pFVar24->MaxBoneIndex < *puVar23) {
            uVar12 = *puVar23;
          }
          pFVar24->MaxBoneIndex = uVar12;
        }
      }
      puVar11 = local_e8 + 1;
      uVar13 = (ulonglong)local_f0;
      pTVar22 = local_e0;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// Init<unsigned_short,FStaticMeshSectionArray> @ 14e5c8aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGLTFMeshSection::Init<unsigned_short,FStaticMeshSectionArray>
          (FGLTFMeshSection *this,FStaticMeshSectionArray *param_1,ushort *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  FStaticMeshSectionArray *pFVar8;
  code *pcVar9;
  FGLTFMeshSection *pFVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ushort uVar16;
  ulonglong uVar17;
  FStaticMeshSectionArray *pFVar18;
  longlong lVar19;
  uint *puVar20;
  ForElementType<FSetElementId> FVar21;
  FGLTFMeshSection *pFVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  ulong64 uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_158 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106 [2];
  uint local_104;
  int local_100;
  uint local_fc;
  FGLTFMeshSection *local_f8;
  uint local_f0;
  uint *local_e8;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_e0;
  ushort *local_d0;
  int *local_c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  if (param_2 != (ushort *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
    puVar20 = *(uint **)&this->SectionIndices;
    iVar14 = *(int *)&(this->SectionIndices).field_0x8;
    uVar25 = 0;
    puVar15 = puVar20 + iVar14;
    local_f8 = this;
    local_e0.Value = (uint *)param_1;
    local_d0 = param_2;
    while( true ) {
      pFVar10 = local_f8;
      if (*(int *)&(local_f8->SectionIndices).field_0x8 != iVar14) {
        local_108 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      iVar12 = (int)uVar25;
      if (puVar20 == puVar15) break;
      uVar6 = *puVar20;
      uVar26 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x28) {
        uVar26 = ~uVar6 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar18 = param_1;
      if (*(FStaticMeshSectionArray **)&param_1->field_0x20 != (FStaticMeshSectionArray *)0x0) {
        pFVar18 = *(FStaticMeshSectionArray **)&param_1->field_0x20;
      }
      puVar20 = puVar20 + 1;
      uVar25 = (ulong64)(uint)(iVar12 + *(int *)(&pFVar18->field_0x8 + (longlong)(int)uVar6 * 0x1c)
                                        * 3);
    }
    pTVar1 = &pFVar10->IndexMap;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar25);
    }
    piVar5 = &(pFVar10->IndexMap).ArrayMax;
    if ((pFVar10->IndexMap).ArrayMax < iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,(pFVar10->IndexMap).ArrayNum,piVar5);
    }
    local_c0 = &pFVar10->IndexBuffer;
    local_c8 = &(pFVar10->IndexBuffer).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar12,&local_c0->AllocatorInstance,local_c8,&(pFVar10->IndexBuffer).ArrayMax);
    pTVar2 = &pFVar10->BoneMapLookup;
    if ((pFVar10->BoneMapLookup).ArrayMax < iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar2->AllocatorInstance,(pFVar10->BoneMapLookup).ArrayNum,
                 &(pFVar10->BoneMapLookup).ArrayMax);
    }
    local_f0 = *(uint *)&(pFVar10->SectionIndices).field_0x8;
    uVar17 = (ulonglong)(int)local_f0;
    puVar15 = *(uint **)&pFVar10->SectionIndices;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_b8 = puVar15 + uVar17;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    pFVar22 = pFVar10;
    while( true ) {
      puVar20 = local_b8;
      local_e8 = puVar15;
      if (*(int *)&(pFVar22->SectionIndices).field_0x8 != (int)uVar17) {
        local_107 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_107);
      }
      pFVar18 = (FStaticMeshSectionArray *)local_e0.Value;
      if (puVar15 == puVar20) break;
      uVar6 = *puVar15;
      uVar26 = 0;
      if ((int)uVar6 < *(int *)((longlong)local_e0.Value + 0x28)) {
        uVar26 = ~uVar6 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = *(FStaticMeshSectionArray **)((longlong)pFVar18 + 0x20);
      if (pFVar8 != (FStaticMeshSectionArray *)0x0) {
        pFVar18 = pFVar8;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FGLTFMeshSection::GetBoneMap'::__l2::_dynamic_atexit_destructor_for__BoneMap__);
        _Init_thread_footer(&::_TSS0);
      }
      iVar14 = *(int *)(&pFVar18->field_0x4 + (longlong)(int)uVar6 * 0x1c);
      uVar26 = 0;
      uVar6 = *(int *)(&pFVar18->field_0x8 + (longlong)(int)uVar6 * 0x1c) * 3;
      local_100 = (local_f8->BoneMaps).ArrayNum;
      if (uVar6 != 0) {
        do {
          local_104 = (uint)local_d0[uVar26 + iVar14];
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar21 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_98.Hash.SecondaryData;
            }
            uVar7 = *(uint *)((longlong)FVar21 +
                             ((ulonglong)(local_98.HashSize - 1) &
                             (ulonglong)local_d0[uVar26 + iVar14]) * 4);
            while (uVar7 != 0xffffffff) {
              puVar15 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar7 * 0x10);
              if (*puVar15 == local_104) {
                puVar20 = puVar15 + 1;
                if (puVar15 == (uint *)0x0) {
                  puVar20 = (uint *)0x0;
                }
                if (puVar20 != (uint *)0x0) {
                  local_fc = *puVar20;
                  goto LAB_14e5c8f23;
                }
                break;
              }
              uVar7 = puVar15[2];
            }
          }
          local_fc = (local_f8->IndexMap).ArrayNum;
          local_b0 = &local_104;
          local_a8 = &local_fc;
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                    (&local_98,&local_e0,(bool *)&local_b0);
          pFVar27 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar27 <= (FScriptContainerElement *)&local_104) &&
              ((FScriptContainerElement *)&local_104 < pFVar27 + (longlong)*piVar5 * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (pFVar10->IndexMap).ArrayNum;
          if (iVar12 == *piVar5) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar5);
          }
          (pFVar10->IndexMap).ArrayNum = iVar12 + 1;
          *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_104;
          if (0 < BoneMap.ArrayNum) {
            pFVar27 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar27 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 <
                 pFVar27 + (longlong)(pFVar10->BoneMapLookup).ArrayMax * 4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar12 = (pFVar10->BoneMapLookup).ArrayNum;
            if (iVar12 == (pFVar10->BoneMapLookup).ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,
                                  &(pFVar10->BoneMapLookup).ArrayMax);
            }
            (pFVar10->BoneMapLookup).ArrayNum = iVar12 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_100;
          }
LAB_14e5c8f23:
          uVar7 = local_fc;
          uVar13 = 0;
          if ((int)uVar26 < *local_c8) {
            uVar13 = ~uVar26 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar19 = (longlong)(int)uVar26;
          uVar26 = uVar26 + 1;
          *(uint *)((local_c0->AllocatorInstance).Data + lVar19 * 4) = uVar7;
        } while (uVar26 < uVar6);
      }
      pFVar22 = local_f8;
      if (0 < BoneMap.ArrayNum) {
        pFVar27 = (local_f8->BoneMaps).AllocatorInstance.Data;
        pTVar3 = &local_f8->BoneMaps;
        if (((pFVar27 < (FScriptContainerElement *)0x155396931) &&
            (&BoneMap <
             (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
             (pFVar27 + (longlong)(local_f8->BoneMaps).ArrayMax * 0x10))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (pFVar22->BoneMaps).ArrayNum;
        piVar4 = &(pFVar22->BoneMaps).ArrayMax;
        if (iVar14 == *piVar4) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar3->AllocatorInstance,piVar4);
        }
        pFVar27 = (FScriptContainerElement *)0x0;
        (pFVar22->BoneMaps).ArrayNum = iVar14 + 1;
        pFVar23 = (pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar23 = 0;
        iVar14 = BoneMap.ArrayNum;
        FVar24 = BoneMap.AllocatorInstance;
        *(int *)(pFVar23 + 8) = BoneMap.ArrayNum;
        if (iVar14 == 0) {
          *(int *)(pFVar23 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)pFVar23,iVar14,(int *)(pFVar23 + 0xc));
          memcpy(*(void **)pFVar23,FVar24.Data,(longlong)iVar14 * 2);
        }
        iVar14 = BoneMap.ArrayNum;
        pFVar23 = BoneMap.AllocatorInstance.Data + (longlong)BoneMap.ArrayNum * 2;
        FVar24.Data = BoneMap.AllocatorInstance.Data;
        while( true ) {
          if (BoneMap.ArrayNum != iVar14) {
            local_106[0] = 0;
            `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_106);
          }
          if (FVar24.Data == pFVar23) break;
          if ((pFVar27 == (FScriptContainerElement *)0x0) ||
             (*(ushort *)pFVar27 < *(ushort *)FVar24.Data)) {
            pFVar27 = FVar24.Data;
          }
          FVar24.Data = FVar24.Data + 2;
        }
        if (pFVar27 != (FScriptContainerElement *)0x0) {
          uVar16 = local_f8->MaxBoneIndex;
          if (local_f8->MaxBoneIndex < *(ushort *)pFVar27) {
            uVar16 = *(ushort *)pFVar27;
          }
          local_f8->MaxBoneIndex = uVar16;
        }
      }
      uVar17 = (ulonglong)local_f0;
      puVar15 = local_e8 + 1;
      pFVar22 = local_f8;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// Init<unsigned_int,TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>_> @ 14e5c91d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGLTFMeshSection::Init<unsigned_int,TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>_>
          (FGLTFMeshSection *this,
          TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *param_1,uint *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ushort *puVar3;
  void *_Src;
  code *pcVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ForElementType<FSetElementId> FVar16;
  FScriptContainerElement *pFVar17;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  ulong64 uVar21;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar22;
  ushort *puVar23;
  FGLTFMeshSection *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_158 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106 [2];
  uint local_104;
  int local_100;
  uint local_fc;
  FGLTFMeshSection *local_f8;
  uint local_f0;
  uint *local_e8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_e0;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_d8;
  uint *local_c8;
  int *local_c0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  if (param_2 != (uint *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
    puVar15 = *(uint **)&this->SectionIndices;
    iVar8 = *(int *)&(this->SectionIndices).field_0x8;
    uVar21 = 0;
    puVar11 = puVar15 + iVar8;
    local_f8 = this;
    local_d8.Value = (uint *)param_1;
    local_c8 = param_2;
    while( true ) {
      if (*(int *)&(this->SectionIndices).field_0x8 != iVar8) {
        local_108 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      iVar19 = (int)uVar21;
      if (puVar15 == puVar11) break;
      uVar20 = *puVar15;
      uVar7 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar15 = puVar15 + 1;
      uVar21 = (ulong64)(uint)(iVar19 + *(int *)((param_1->AllocatorInstance).Data +
                                                (longlong)(int)uVar20 * 0x118 + 8) * 3);
    }
    pTVar22 = &this->IndexMap;
    local_e0 = pTVar22;
    if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar21);
    }
    if ((this->IndexMap).ArrayMax < iVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar19,&pTVar22->AllocatorInstance,(this->IndexMap).ArrayNum,
                 &(this->IndexMap).ArrayMax);
    }
    local_b8 = &this->IndexBuffer;
    local_c0 = &(this->IndexBuffer).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar19,&local_b8->AllocatorInstance,local_c0,&(this->IndexBuffer).ArrayMax);
    pTVar1 = &this->BoneMapLookup;
    if ((this->BoneMapLookup).ArrayMax < iVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar19,&pTVar1->AllocatorInstance,(this->BoneMapLookup).ArrayNum,
                 &(this->BoneMapLookup).ArrayMax);
    }
    local_f0 = *(uint *)&(this->SectionIndices).field_0x8;
    uVar13 = (ulonglong)(int)local_f0;
    puVar11 = *(uint **)&this->SectionIndices;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_b0 = puVar11 + uVar13;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    pFVar24 = this;
    while( true ) {
      puVar15 = local_b0;
      local_e8 = puVar11;
      if (*(int *)&(pFVar24->SectionIndices).field_0x8 != (int)uVar13) {
        local_107 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_107);
      }
      puVar5 = local_d8.Value;
      if (puVar11 == puVar15) break;
      uVar20 = *puVar11;
      uVar7 = 0;
      if ((int)uVar20 < *(int *)((longlong)local_d8.Value + 8)) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = ((ForAnyElementType *)puVar5)->Data;
      lVar14 = (longlong)(int)uVar20 * 0x118;
      uVar20 = 0;
      pFVar25 = pFVar17 + lVar14 + 0x38;
      iVar8 = *(int *)(pFVar17 + lVar14 + 4);
      iVar19 = *(int *)(pFVar17 + lVar14 + 8);
      local_100 = (local_f8->BoneMaps).ArrayNum;
      if (iVar19 * 3 != 0) {
        do {
          local_104 = local_c8[uVar20 + iVar8];
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_98.Hash.SecondaryData;
            }
            uVar7 = *(uint *)((longlong)FVar16 + (ulonglong)(local_98.HashSize - 1U & local_104) * 4
                             );
            while (uVar7 != 0xffffffff) {
              puVar11 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar7 * 0x10);
              if (*puVar11 == local_104) {
                puVar15 = puVar11 + 1;
                if (puVar11 == (uint *)0x0) {
                  puVar15 = (uint *)0x0;
                }
                if (puVar15 != (uint *)0x0) {
                  local_fc = *puVar15;
                  goto LAB_14e5c96e3;
                }
                break;
              }
              uVar7 = puVar11[2];
            }
          }
          local_fc = (local_f8->IndexMap).ArrayNum;
          local_a8 = &local_104;
          local_a0 = &local_fc;
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                    (&local_98,&local_d8,(bool *)&local_a8);
          pFVar17 = (pTVar22->AllocatorInstance).Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_104) &&
              ((FScriptContainerElement *)&local_104 < pFVar17 + (longlong)pTVar22->ArrayMax * 4))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = pTVar22->ArrayNum;
          if (iVar9 == pTVar22->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar22->AllocatorInstance,&pTVar22->ArrayMax);
          }
          pTVar22->ArrayNum = iVar9 + 1;
          *(uint *)((pTVar22->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_104;
          if (0 < *(int *)(pFVar25 + 8)) {
            pFVar17 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 <
                 pFVar17 + (longlong)(this->BoneMapLookup).ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = (this->BoneMapLookup).ArrayNum;
            if (iVar9 == (this->BoneMapLookup).ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar1->AllocatorInstance,&(this->BoneMapLookup).ArrayMax);
            }
            (this->BoneMapLookup).ArrayNum = iVar9 + 1;
            *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_100;
          }
LAB_14e5c96e3:
          uVar7 = local_fc;
          uVar10 = 0;
          if ((int)uVar20 < *local_c0) {
            uVar10 = ~uVar20 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar14 = (longlong)(int)uVar20;
          uVar20 = uVar20 + 1;
          *(uint *)((local_b8->AllocatorInstance).Data + lVar14 * 4) = uVar7;
          pTVar22 = local_e0;
        } while (uVar20 < (uint)(iVar19 * 3));
      }
      pFVar24 = local_f8;
      if (0 < *(int *)(pFVar25 + 8)) {
        pFVar17 = (local_f8->BoneMaps).AllocatorInstance.Data;
        if (((pFVar17 <= pFVar25) &&
            (pFVar25 < pFVar17 + (longlong)(local_f8->BoneMaps).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (pFVar24->BoneMaps).ArrayNum;
        piVar2 = &(pFVar24->BoneMaps).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pFVar24->BoneMaps).AllocatorInstance,piVar2);
        }
        pFVar17 = (pFVar24->BoneMaps).AllocatorInstance.Data;
        (pFVar24->BoneMaps).ArrayNum = iVar8 + 1;
        puVar23 = (ushort *)0x0;
        pFVar17 = pFVar17 + (longlong)iVar8 * 0x10;
        *(undefined8 *)&pFVar17->field_0x0 = 0;
        iVar8 = *(int *)(pFVar25 + 8);
        _Src = *(void **)pFVar25;
        *(int *)&pFVar17[8].field_0x0 = iVar8;
        if (iVar8 == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,(ForAnyElementType *)pFVar17,iVar8,(int *)(pFVar17 + 0xc));
          memcpy(*(void **)&pFVar17->field_0x0,_Src,(longlong)iVar8 * 2);
        }
        puVar18 = *(ushort **)pFVar25;
        iVar8 = *(int *)(pFVar25 + 8);
        puVar3 = puVar18 + iVar8;
        while( true ) {
          if (*(int *)(pFVar25 + 8) != iVar8) {
            local_106[0] = 0;
            `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_106);
          }
          if (puVar18 == puVar3) break;
          if ((puVar23 == (ushort *)0x0) || (*puVar23 < *puVar18)) {
            puVar23 = puVar18;
          }
          puVar18 = puVar18 + 1;
        }
        if (puVar23 != (ushort *)0x0) {
          uVar12 = pFVar24->MaxBoneIndex;
          if (pFVar24->MaxBoneIndex < *puVar23) {
            uVar12 = *puVar23;
          }
          pFVar24->MaxBoneIndex = uVar12;
        }
      }
      puVar11 = local_e8 + 1;
      uVar13 = (ulonglong)local_f0;
      pTVar22 = local_e0;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// Init<unsigned_int,FStaticMeshSectionArray> @ 14e5c9890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGLTFMeshSection::Init<unsigned_int,FStaticMeshSectionArray>
          (FGLTFMeshSection *this,FStaticMeshSectionArray *param_1,uint *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  FStaticMeshSectionArray *pFVar8;
  code *pcVar9;
  FGLTFMeshSection *pFVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  ushort uVar16;
  ulonglong uVar17;
  FStaticMeshSectionArray *pFVar18;
  longlong lVar19;
  uint *puVar20;
  ForElementType<FSetElementId> FVar21;
  FGLTFMeshSection *pFVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  ulong64 uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_158 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106 [2];
  uint local_104;
  int local_100;
  uint local_fc;
  FGLTFMeshSection *local_f8;
  uint local_f0;
  uint *local_e8;
  TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> local_e0;
  uint *local_d0;
  int *local_c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  if (param_2 != (uint *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
    puVar20 = *(uint **)&this->SectionIndices;
    iVar14 = *(int *)&(this->SectionIndices).field_0x8;
    uVar25 = 0;
    puVar15 = puVar20 + iVar14;
    local_f8 = this;
    local_e0.Value = (uint *)param_1;
    local_d0 = param_2;
    while( true ) {
      pFVar10 = local_f8;
      if (*(int *)&(local_f8->SectionIndices).field_0x8 != iVar14) {
        local_108 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_108);
      }
      iVar12 = (int)uVar25;
      if (puVar20 == puVar15) break;
      uVar6 = *puVar20;
      uVar26 = 0;
      if ((int)uVar6 < *(int *)&param_1->field_0x28) {
        uVar26 = ~uVar6 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar18 = param_1;
      if (*(FStaticMeshSectionArray **)&param_1->field_0x20 != (FStaticMeshSectionArray *)0x0) {
        pFVar18 = *(FStaticMeshSectionArray **)&param_1->field_0x20;
      }
      puVar20 = puVar20 + 1;
      uVar25 = (ulong64)(uint)(iVar12 + *(int *)(&pFVar18->field_0x8 + (longlong)(int)uVar6 * 0x1c)
                                        * 3);
    }
    pTVar1 = &pFVar10->IndexMap;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar25);
    }
    piVar5 = &(pFVar10->IndexMap).ArrayMax;
    if ((pFVar10->IndexMap).ArrayMax < iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar1->AllocatorInstance,(pFVar10->IndexMap).ArrayNum,piVar5);
    }
    local_c0 = &pFVar10->IndexBuffer;
    local_c8 = &(pFVar10->IndexBuffer).ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar12,&local_c0->AllocatorInstance,local_c8,&(pFVar10->IndexBuffer).ArrayMax);
    pTVar2 = &pFVar10->BoneMapLookup;
    if ((pFVar10->BoneMapLookup).ArrayMax < iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar12,&pTVar2->AllocatorInstance,(pFVar10->BoneMapLookup).ArrayNum,
                 &(pFVar10->BoneMapLookup).ArrayMax);
    }
    local_f0 = *(uint *)&(pFVar10->SectionIndices).field_0x8;
    uVar17 = (ulonglong)(int)local_f0;
    puVar15 = *(uint **)&pFVar10->SectionIndices;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_b8 = puVar15 + uVar17;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    pFVar22 = pFVar10;
    while( true ) {
      puVar20 = local_b8;
      local_e8 = puVar15;
      if (*(int *)&(pFVar22->SectionIndices).field_0x8 != (int)uVar17) {
        local_107 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_107);
      }
      pFVar18 = (FStaticMeshSectionArray *)local_e0.Value;
      if (puVar15 == puVar20) break;
      uVar6 = *puVar15;
      uVar26 = 0;
      if ((int)uVar6 < *(int *)((longlong)local_e0.Value + 0x28)) {
        uVar26 = ~uVar6 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = *(FStaticMeshSectionArray **)((longlong)pFVar18 + 0x20);
      if (pFVar8 != (FStaticMeshSectionArray *)0x0) {
        pFVar18 = pFVar8;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FGLTFMeshSection::GetBoneMap'::__l2::_dynamic_atexit_destructor_for__BoneMap__);
        _Init_thread_footer(&::_TSS0);
      }
      iVar14 = *(int *)(&pFVar18->field_0x4 + (longlong)(int)uVar6 * 0x1c);
      uVar26 = 0;
      uVar6 = *(int *)(&pFVar18->field_0x8 + (longlong)(int)uVar6 * 0x1c) * 3;
      local_100 = (local_f8->BoneMaps).ArrayNum;
      if (uVar6 != 0) {
        do {
          local_104 = local_d0[uVar26 + iVar14];
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar21 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_98.Hash.SecondaryData;
            }
            uVar7 = *(uint *)((longlong)FVar21 + (ulonglong)(local_98.HashSize - 1U & local_104) * 4
                             );
            while (uVar7 != 0xffffffff) {
              puVar15 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar7 * 0x10);
              if (*puVar15 == local_104) {
                puVar20 = puVar15 + 1;
                if (puVar15 == (uint *)0x0) {
                  puVar20 = (uint *)0x0;
                }
                if (puVar20 != (uint *)0x0) {
                  local_fc = *puVar20;
                  goto LAB_14e5c9d13;
                }
                break;
              }
              uVar7 = puVar15[2];
            }
          }
          local_fc = (local_f8->IndexMap).ArrayNum;
          local_b0 = &local_104;
          local_a8 = &local_fc;
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                    (&local_98,&local_e0,(bool *)&local_b0);
          pFVar27 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar27 <= (FScriptContainerElement *)&local_104) &&
              ((FScriptContainerElement *)&local_104 < pFVar27 + (longlong)*piVar5 * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (pFVar10->IndexMap).ArrayNum;
          if (iVar12 == *piVar5) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar5);
          }
          (pFVar10->IndexMap).ArrayNum = iVar12 + 1;
          *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_104;
          if (0 < BoneMap.ArrayNum) {
            pFVar27 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar27 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 <
                 pFVar27 + (longlong)(pFVar10->BoneMapLookup).ArrayMax * 4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar12 = (pFVar10->BoneMapLookup).ArrayNum;
            if (iVar12 == (pFVar10->BoneMapLookup).ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,
                                  &(pFVar10->BoneMapLookup).ArrayMax);
            }
            (pFVar10->BoneMapLookup).ArrayNum = iVar12 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_100;
          }
LAB_14e5c9d13:
          uVar7 = local_fc;
          uVar13 = 0;
          if ((int)uVar26 < *local_c8) {
            uVar13 = ~uVar26 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar19 = (longlong)(int)uVar26;
          uVar26 = uVar26 + 1;
          *(uint *)((local_c0->AllocatorInstance).Data + lVar19 * 4) = uVar7;
        } while (uVar26 < uVar6);
      }
      pFVar22 = local_f8;
      if (0 < BoneMap.ArrayNum) {
        pFVar27 = (local_f8->BoneMaps).AllocatorInstance.Data;
        pTVar3 = &local_f8->BoneMaps;
        if (((pFVar27 < (FScriptContainerElement *)0x155396931) &&
            (&BoneMap <
             (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
             (pFVar27 + (longlong)(local_f8->BoneMaps).ArrayMax * 0x10))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = (pFVar22->BoneMaps).ArrayNum;
        piVar4 = &(pFVar22->BoneMaps).ArrayMax;
        if (iVar14 == *piVar4) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar3->AllocatorInstance,piVar4);
        }
        pFVar27 = (FScriptContainerElement *)0x0;
        (pFVar22->BoneMaps).ArrayNum = iVar14 + 1;
        pFVar23 = (pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)pFVar23 = 0;
        iVar14 = BoneMap.ArrayNum;
        FVar24 = BoneMap.AllocatorInstance;
        *(int *)(pFVar23 + 8) = BoneMap.ArrayNum;
        if (iVar14 == 0) {
          *(int *)(pFVar23 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)pFVar23,iVar14,(int *)(pFVar23 + 0xc));
          memcpy(*(void **)pFVar23,FVar24.Data,(longlong)iVar14 * 2);
        }
        iVar14 = BoneMap.ArrayNum;
        pFVar23 = BoneMap.AllocatorInstance.Data + (longlong)BoneMap.ArrayNum * 2;
        FVar24.Data = BoneMap.AllocatorInstance.Data;
        while( true ) {
          if (BoneMap.ArrayNum != iVar14) {
            local_106[0] = 0;
            `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_106);
          }
          if (FVar24.Data == pFVar23) break;
          if ((pFVar27 == (FScriptContainerElement *)0x0) ||
             (*(ushort *)pFVar27 < *(ushort *)FVar24.Data)) {
            pFVar27 = FVar24.Data;
          }
          FVar24.Data = FVar24.Data + 2;
        }
        if (pFVar27 != (FScriptContainerElement *)0x0) {
          uVar16 = local_f8->MaxBoneIndex;
          if (local_f8->MaxBoneIndex < *(ushort *)pFVar27) {
            uVar16 = *(ushort *)pFVar27;
          }
          local_f8->MaxBoneIndex = uVar16;
        }
      }
      uVar17 = (ulonglong)local_f0;
      puVar15 = local_e8 + 1;
      pFVar22 = local_f8;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// FGLTFMeshSection @ 14e5d2740

FGLTFMeshSection * __thiscall
FGLTFMeshSection::FGLTFMeshSection
          (FGLTFMeshSection *this,USkeletalMesh *param_1,int param_2,
          FMeshAttributesArray<int> *param_3)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FSkeletalMeshLODRenderData *pFVar7;
  FGLTFMeshSection *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  FName local_res8;
  
  plVar12 = (longlong *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  FMeshAttributesArray<int>::FMeshAttributesArray<int>(&this->SectionIndices,param_3);
  (this->IndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexMap).ArrayNum = 0;
  (this->IndexMap).ArrayMax = 0;
  (this->IndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBuffer).ArrayNum = 0;
  (this->IndexBuffer).ArrayMax = 0;
  (this->BoneMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneMaps).ArrayNum = 0;
  (this->BoneMaps).ArrayMax = 0;
  (this->BoneMapLookup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneMapLookup).ArrayNum = 0;
  (this->BoneMapLookup).ArrayMax = 0;
  this->MaxBoneIndex = 0;
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&this->Name);
  pFVar7 = FGLTFMeshUtilities::GetRenderData(param_1,param_2);
  if (((pFVar7->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0)
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("IndexBuffer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                            ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FGLTFMeshSection *)(*pcVar3)();
    return pFVar8;
  }
  pFVar1 = (pFVar7->MultiSizeIndexContainer).IndexBuffer;
  iVar6 = (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1);
  if (((iVar6 < 1) || (lVar9 = (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,0), lVar9 == 0)) ||
     (cVar5 = (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1), cVar5 == '\0')) {
    plVar10 = ::operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      pFVar2 = (FRHIBuffer *)pFVar1->_padding_;
      (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(plVar10 + 1))->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *plVar10 = (longlong)&___7FGLTFBufferAdapterGPU__6B_;
      plVar10[2] = 0;
      FGLTFBufferUtilities::ReadRHIBuffer
                (pFVar2,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(plVar10 + 1));
      plVar12 = plVar10;
    }
  }
  else {
    plVar10 = ::operator_new(0x10);
    if (plVar10 != (longlong *)0x0) {
      plVar10[1] = lVar9;
      *plVar10 = (longlong)&___7FGLTFBufferAdapterCPU__6B_;
      plVar12 = plVar10;
    }
  }
  puVar11 = (uint *)(**(code **)(*plVar12 + 8))(plVar12);
  if ((pFVar7->MultiSizeIndexContainer).DataTypeSize == '\x02') {
    Init<unsigned_short,TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>_>
              (this,&pFVar7->RenderSections,(ushort *)puVar11);
  }
  else {
    Init<unsigned_int,TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>_>
              (this,&pFVar7->RenderSections,puVar11);
  }
  (**(code **)*plVar12)(plVar12,1);
  return this;
}

// FGLTFMeshSection @ 14e5d28e0

FGLTFMeshSection * __thiscall
FGLTFMeshSection::FGLTFMeshSection
          (FGLTFMeshSection *this,UStaticMesh *param_1,int param_2,
          FMeshAttributesArray<int> *param_3)

{
  FRHIBuffer *pFVar1;
  char cVar2;
  FStaticMeshLODResources *pFVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  FName local_res8;
  
  plVar6 = (longlong *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  FMeshAttributesArray<int>::FMeshAttributesArray<int>(&this->SectionIndices,param_3);
  (this->IndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexMap).ArrayNum = 0;
  (this->IndexMap).ArrayMax = 0;
  (this->IndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBuffer).ArrayNum = 0;
  (this->IndexBuffer).ArrayMax = 0;
  (this->BoneMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneMaps).ArrayNum = 0;
  (this->BoneMaps).ArrayMax = 0;
  (this->BoneMapLookup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneMapLookup).ArrayNum = 0;
  (this->BoneMapLookup).ArrayMax = 0;
  this->MaxBoneIndex = 0;
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&this->Name);
  pFVar3 = UStaticMesh::GetLODForExport(param_1,param_2);
  if ((pFVar3->IndexBuffer).b32Bit == false) {
    puVar4 = (uint *)FRawStaticIndexBuffer::AccessStream16(&pFVar3->IndexBuffer);
  }
  else {
    puVar4 = FRawStaticIndexBuffer::AccessStream32(&pFVar3->IndexBuffer);
  }
  if ((puVar4 == (uint *)0x0) ||
     (cVar2 = (**(code **)((pFVar3->IndexBuffer).IndexStorage._padding_ + 0x30))(), cVar2 == '\0'))
  {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      pFVar1 = (FRHIBuffer *)(pFVar3->IndexBuffer)._padding_;
      (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(plVar5 + 1))->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *plVar5 = (longlong)&___7FGLTFBufferAdapterGPU__6B_;
      plVar5[2] = 0;
      FGLTFBufferUtilities::ReadRHIBuffer
                (pFVar1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(plVar5 + 1));
      plVar6 = plVar5;
    }
  }
  else {
    plVar5 = ::operator_new(0x10);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)puVar4;
      *plVar5 = (longlong)&___7FGLTFBufferAdapterCPU__6B_;
      plVar6 = plVar5;
    }
  }
  puVar4 = (uint *)(**(code **)(*plVar6 + 8))(plVar6);
  if ((pFVar3->IndexBuffer).b32Bit == false) {
    Init<unsigned_short,FStaticMeshSectionArray>(this,&pFVar3->Sections,(ushort *)puVar4);
  }
  else {
    Init<unsigned_int,FStaticMeshSectionArray>(this,&pFVar3->Sections,puVar4);
  }
  (**(code **)*plVar6)(plVar6,1);
  return this;
}

// GetBoneMap @ 14e5f52d0

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __cdecl
FGLTFMeshSection::GetBoneMap(FSkelMeshRenderSection *param_1)

{
  return &param_1->BoneMap;
}

// GetBoneMap @ 14e5f52e0

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __cdecl
FGLTFMeshSection::GetBoneMap(FStaticMeshSection *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGLTFMeshSection::GetBoneMap'::__l2::_dynamic_atexit_destructor_for__BoneMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &BoneMap;
}

// GetIndexOffset @ 14e5f6610

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

uint __cdecl FGLTFMeshSection::GetIndexOffset(FSkelMeshRenderSection *param_1)

{
  return param_1->BaseIndex;
}

// GetIndexOffset @ 14e5f6620

uint __cdecl FGLTFMeshSection::GetIndexOffset(FStaticMeshSection *param_1)

{
  return param_1->FirstIndex;
}

// ToString @ 14e614dd0

FString * __thiscall
FGLTFMeshSection::ToString(FGLTFMeshSection *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  piVar4 = *(int **)&this->SectionIndices;
  iVar2 = *(int *)&(this->SectionIndices).field_0x8;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar3 = true;
  piVar1 = piVar4 + iVar2;
  while( true ) {
    if (*(int *)&(this->SectionIndices).field_0x8 != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar4 == piVar1) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L", ",2);
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,*piVar4);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    piVar4 = piVar4 + 1;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s (section%s %s)");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

