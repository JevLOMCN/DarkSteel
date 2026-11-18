// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 34

// ClusterAllBonesUnderNewRoot @ 1440237f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGeometryCollectionClusteringUtility::ClusterAllBonesUnderNewRoot
          (FGeometryCollection *param_1,FName param_2,bool param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  float *pfVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  __m128 _Var31;
  __m128 _Var32;
  __m128 _Var33;
  FName FVar34;
  FGeometryCollection *pFVar35;
  bool bVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  FName *pFVar43;
  TManagedArray<int> *pTVar44;
  ulonglong uVar45;
  longlong lVar46;
  FScriptContainerElement *pFVar47;
  TManagedArray<UE::Math::TVector<float>_> *pTVar48;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar49;
  ForElementType<unsigned_int> FVar50;
  ForAnyElementType FVar51;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar52;
  longlong lVar53;
  uint uVar54;
  uint *puVar55;
  uint *puVar56;
  uint uVar57;
  uint *puVar58;
  FString *pFVar59;
  ulong64 uVar60;
  longlong lVar61;
  uint uVar62;
  ulonglong uVar63;
  uint uVar64;
  ForAnyElementType FVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  FName local_res10;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a4;
  undefined1 local_2a3;
  char local_2a2;
  uint local_2a0 [2];
  ForAnyElementType local_298;
  undefined8 local_290;
  uint local_288;
  FGeometryCollection *local_280;
  longlong local_278;
  uint local_270;
  FString local_268;
  undefined4 local_258;
  uint local_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_248;
  undefined4 local_240;
  uint uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  uint local_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_228;
  undefined4 local_220;
  uint uStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  int local_20c;
  undefined4 local_208;
  int local_204;
  longlong local_200;
  FScriptContainerElement *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  FSparseArrayAllocationInfo local_190;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FString local_160;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138 [2];
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_res10 = param_2;
  local_2a2 = param_3;
  local_280 = param_1;
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("GeometryCollection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                          ,0x44,L""), bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar56 = (uint *)0x0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  iVar37 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  local_2a0[0] = 0;
  puVar55 = puVar56;
  if (0 < iVar37) {
    do {
      uVar39 = (uint)puVar55;
      uVar42 = 0;
      if ((int)uVar39 < (int)param_1->_padding_) {
        uVar42 = ~uVar39 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)(param_1->_padding_ + (longlong)(int)uVar39 * 4) ==
          (int)FManagedArrayCollection::Invalid) {
        if (((local_298.Data <= (FScriptContainerElement *)local_2a0) &&
            ((FScriptContainerElement *)local_2a0 < local_298.Data + (longlong)local_290._4_4_ * 4))
           && (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar38 = (uint)local_290;
        if ((uint)local_290 == local_290._4_4_) {
          iVar38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_298,(int *)((longlong)&local_290 + 4));
        }
        local_290 = CONCAT44(local_290._4_4_,iVar38 + 1);
        *(uint *)(local_298.Data + (longlong)iVar38 * 4) = local_2a0[0];
      }
      local_2a0[0] = local_2a0[0] + 1;
      puVar55 = (uint *)(ulonglong)local_2a0[0];
    } while ((int)local_2a0[0] < iVar37);
  }
  uVar39 = FManagedArrayCollection::AddElements
                     ((FManagedArrayCollection *)param_1,1,FTransformCollection::TransformGroup);
  FVar4 = FTransformCollection::TransformGroup;
  pFVar43 = ::FName::FName(&local_148,"Level");
  bVar36 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar43,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  uVar42 = 0;
  if (bVar36) {
    pFVar43 = ::FName::FName(&local_140,"Level");
    pTVar44 = FManagedArrayCollection::ModifyAttribute<int>
                        ((FManagedArrayCollection *)param_1,*pFVar43,FVar4);
    puVar55 = puVar56;
    puVar58 = puVar56;
    if (0 < (longlong)iVar37) {
      do {
        uVar64 = (uint)puVar58;
        uVar40 = uVar42;
        if ((int)uVar64 < *(int *)&pTVar44->field_0x18) {
          uVar40 = ~uVar64 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        piVar1 = (int *)(*(longlong *)&pTVar44->field_0x10 + (longlong)puVar55 * 4);
        *piVar1 = *piVar1 + 1;
        puVar55 = (uint *)((longlong)puVar55 + 1);
        puVar58 = (uint *)(ulonglong)(uVar64 + 1);
      } while ((longlong)puVar55 < (longlong)iVar37);
    }
    uVar40 = uVar42;
    if ((int)uVar39 < *(int *)&pTVar44->field_0x18) {
      uVar40 = ~uVar39 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(*(longlong *)&pTVar44->field_0x10 + (longlong)(int)uVar39 * 4) = 0;
  }
  lVar61 = (longlong)(int)uVar39;
  uVar64 = ~uVar39 >> 0x1f;
  uVar40 = 0;
  local_288 = uVar64;
  if (local_res10 == (FName)0x0) {
    ::FString::FString(&local_268,"ClusterBone");
    uVar54 = uVar40;
    if ((int)uVar39 < (int)param_1->_padding_) {
      uVar54 = uVar64;
    }
    if ((uVar54 == 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar59 = (FString *)(param_1->_padding_ + lVar61 * 0x10);
    local_160.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    if (pFVar59 != &local_268) {
      pFVar47 = (pFVar59->Data).AllocatorInstance.Data;
      if (pFVar47 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar47);
      }
      (pFVar59->Data).AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
      local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar59->Data).ArrayNum = local_268.Data.ArrayNum;
      (pFVar59->Data).ArrayMax = local_268.Data.ArrayMax;
      local_268.Data.ArrayNum = 0;
      local_268.Data.ArrayMax = 0;
      local_160.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar59 = ::FName::ToString(&local_res10,&local_160);
    uVar54 = uVar40;
    if ((int)uVar39 < (int)param_1->_padding_) {
      uVar54 = uVar64;
    }
    if ((uVar54 == 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ::FString::operator=((FString *)(lVar61 * 0x10 + param_1->_padding_),pFVar59);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  iVar37 = (int)FManagedArrayCollection::Invalid;
  uVar54 = 0;
  if ((int)uVar39 < (int)param_1->_padding_) {
    uVar54 = uVar64;
  }
  if ((uVar54 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar65.Data = local_298.Data;
  *(int *)(param_1->_padding_ + lVar61 * 4) = iVar37;
  uVar64 = (uint)local_290;
  uVar60 = (ulong64)(int)(uint)local_290;
  if (((int)(uint)local_290 < 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (ForElementType<unsigned_int>)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  if (uVar64 != 0) {
    if ((int)uVar64 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar60);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_128,uVar64);
    uVar54 = 1;
    if (3 < uVar64) {
      uVar63 = (ulonglong)((uVar64 >> 1) + 7) * 2 + 1;
      lVar61 = 0x3f;
      if (uVar63 != 0) {
        for (; uVar63 >> lVar61 == 0; lVar61 = lVar61 + -1) {
        }
      }
      local_210 = (undefined4)lVar61;
      uVar54 = 1 << ((byte)lVar61 & 0x1f);
    }
    if ((local_e0 == 0) || ((int)local_e0 < (int)uVar54)) {
      local_e0 = uVar54;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
      }
      if (uVar54 != 0) {
        uVar64 = uVar54;
        if (uVar54 < 2) {
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            uVar64 = 0;
            goto LAB_144023d90;
          }
        }
        else {
LAB_144023d90:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,uVar64,4)
          ;
        }
        if (0 < (int)uVar54) {
          uVar63 = (ulonglong)uVar54;
          puVar55 = puVar56;
          do {
            FVar51.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar51.Data = local_e8.Data;
            }
            uVar45 = (longlong)(int)uVar54 - 1U & (ulonglong)puVar55;
            puVar55 = (uint *)((longlong)puVar55 + 1);
            *(undefined4 *)(FVar51.Data + uVar45 * 4) = 0xffffffff;
            uVar63 = uVar63 - 1;
          } while (uVar63 != 0);
        }
      }
      if (local_e0 != 0) {
        pTStack_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        local_250 = 0;
        uStack_24c = 1;
        uStack_23c = 0;
        uStack_238 = 0;
        puVar55 = puVar56;
        if (local_100 != 0) {
          FVar50 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
          if (local_108 != (ForElementType<unsigned_int>)0x0) {
            FVar50 = local_108;
          }
          uVar64 = *(uint *)FVar50;
          puVar58 = puVar56;
          while (uVar64 == 0) {
            uStack_238 = (int)puVar58 + 0x20;
            puVar58 = (uint *)(ulonglong)uStack_238;
            iVar37 = (int)puVar55;
            local_250 = iVar37 + 1;
            puVar55 = (uint *)(ulonglong)local_250;
            if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_250) goto LAB_144023e9d;
            uVar64 = ((uint *)((longlong)FVar50 + 4))[iVar37];
          }
          uStack_24c = -uVar64 & uVar64;
          uVar63 = (ulonglong)uStack_24c * 2 + 1;
          lVar61 = 0x3f;
          if (uVar63 != 0) {
            for (; uVar63 >> lVar61 == 0; lVar61 = lVar61 + -1) {
            }
          }
          local_20c = (int)lVar61;
          uStack_23c = (uStack_238 - 1) + local_20c;
          puVar55 = (uint *)(ulonglong)uStack_23c;
          if ((int)local_100 < (int)uStack_23c) {
LAB_144023e9d:
            puVar55 = (uint *)(ulonglong)local_100;
            uStack_23c = local_100;
          }
        }
        local_240 = 0xffffffff;
        local_1e0 = (longlong *)local_128;
        local_1d8._padding_ = CONCAT44(uStack_24c,local_250);
        local_1d8.CurrentBitIndex = uStack_23c;
        local_1d8.UnvisitedBitMask = 0xffffffff;
        local_1d8._28_4_ = uStack_234;
        local_1d8.BaseBitIndex = uStack_238;
        local_1d8.Array = pTStack_248;
        if ((int)puVar55 < (int)local_100) {
          do {
            lVar61 = *local_1e0;
            lVar46 = (longlong)(int)puVar55;
            uVar64 = local_e0 - 1 & *(uint *)(lVar61 + lVar46 * 0xc);
            *(uint *)(lVar61 + 8 + lVar46 * 0xc) = uVar64;
            FVar51.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar51.Data = local_e8.Data;
            }
            uVar63 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar64;
            *(undefined4 *)(lVar61 + 4 + lVar46 * 0xc) = *(undefined4 *)(FVar51.Data + uVar63 * 4);
            *(int *)(FVar51.Data + uVar63 * 4) = (int)puVar55;
            local_1d8.UnvisitedBitMask = local_1d8.UnvisitedBitMask & ~local_1d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
            puVar55 = (uint *)(ulonglong)(uint)local_1d8.CurrentBitIndex;
          } while (local_1d8.CurrentBitIndex < (local_1d8.Array)->NumBits);
        }
      }
    }
  }
  pFVar47 = FVar65.Data + uVar60 * 4;
  uVar64 = local_288;
  iVar37 = local_f8;
  for (; local_288 = uVar64, local_f8 = iVar37, FVar65.Data != pFVar47;
      FVar65.Data = FVar65.Data + 4) {
    if (local_f4 == 0) {
      iVar37 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)local_128,(int *)(local_128 + 8),
                          (int *)(local_128 + 0xc));
      uVar64 = local_100;
      if (local_100 == 0) {
        iVar38 = 0;
LAB_144024015:
        if (local_fc < (int)(local_100 + 1)) {
          uVar54 = local_fc + 0x1fU >> 5;
          uVar62 = local_100 + 0x20 >> 5;
          if (uVar62 < 5) {
            local_fc = 4;
          }
          else {
            uVar63 = (ulonglong)uVar62;
            if (uVar54 < 5) {
              uVar54 = uVar40;
            }
            if (uVar54 == 0) {
              uVar45 = 4;
              if (4 < uVar63) {
                uVar45 = uVar63;
              }
            }
            else {
              uVar45 = ((ulonglong)uVar62 * 3 >> 3) + 0x10 + uVar63;
            }
            uVar60 = FMemory::QuantizeSize(uVar45 * 4,0);
            local_fc = (int)(uVar60 >> 2);
            if (local_fc < (int)uVar62) {
              local_fc = 0x7fffffff;
            }
          }
          local_fc = local_fc << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),local_100);
        }
        local_100 = local_100 + 1;
        uVar62 = (int)local_100 >> 0x1f & 0x1f;
        uVar54 = local_100 + uVar62;
        iVar41 = (uVar54 & 0x1f) - uVar62;
        if (iVar41 != 0) {
          FVar50 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
          if (local_108 != (ForElementType<unsigned_int>)0x0) {
            FVar50 = local_108;
          }
          puVar55 = (uint *)((longlong)FVar50 + (longlong)((int)uVar54 >> 5) * 4);
          *puVar55 = *puVar55 & 0xffffffffU >> (0x20U - (char)iVar41 & 0x1f);
        }
      }
      else {
        iVar38 = (int)(local_100 + ((int)local_100 >> 0x1f & 0x1fU)) >> 5;
        if (iVar38 != (int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5)
        goto LAB_144024015;
        local_100 = local_100 + 1;
      }
      FVar50 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
      if (local_108 != (ForElementType<unsigned_int>)0x0) {
        FVar50 = local_108;
      }
      puVar55 = (uint *)((longlong)FVar50 + (longlong)iVar38 * 4);
      *puVar55 = *puVar55 & ~(1 << ((byte)uVar64 & 0x1f));
    }
    else {
      local_f4 = local_f4 + -1;
      local_f8 = *(int *)(local_128._0_8_ + (longlong)iVar37 * 0xc + 4);
      if (local_f4 != 0) {
        *(undefined4 *)(local_128._0_8_ + (longlong)local_f8 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,&local_190,iVar37);
    puVar55 = puVar56;
    if (local_190.Pointer != (uint *)0x0) {
      *(uint *)local_190.Pointer = *(uint *)FVar65.Data;
      *(uint *)((longlong)local_190.Pointer + 4) = 0xffffffff;
      puVar55 = local_190.Pointer;
    }
    uVar64 = *puVar55;
    if ((local_128._8_4_ - local_f4 != 1) && (local_128._8_4_ != local_f4)) {
      FVar51.Data = local_f0;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FVar51.Data = local_e8.Data;
      }
      for (iVar37 = *(int *)(FVar51.Data + (ulonglong)(local_e0 - 1 & uVar64) * 4); iVar37 != -1;
          iVar37 = *(int *)(local_128._0_8_ + (longlong)iVar37 * 0xc + 4)) {
        if (*(uint *)(local_128._0_8_ + (longlong)iVar37 * 0xc) == uVar64) {
          if (iVar37 != -1) {
            *(uint *)(local_128._0_8_ + (longlong)iVar37 * 0xc) = uVar64;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_128,local_190.Index,1);
            goto LAB_1440244b0;
          }
          break;
        }
      }
    }
    uVar62 = local_128._8_4_ - local_f4;
    uVar54 = 1;
    if (3 < uVar62) {
      uVar63 = (ulonglong)((uVar62 >> 1) + 7) * 2 + 1;
      lVar61 = 0x3f;
      if (uVar63 != 0) {
        for (; uVar63 >> lVar61 == 0; lVar61 = lVar61 + -1) {
        }
      }
      local_208 = (undefined4)lVar61;
      uVar54 = 1 << ((byte)lVar61 & 0x1f);
    }
    if (((int)uVar62 < 1) || ((int)uVar54 <= (int)local_e0)) {
      uVar64 = local_e0 - 1 & uVar64;
      puVar55[2] = uVar64;
      FVar51.Data = local_f0;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FVar51.Data = local_e8.Data;
      }
      uVar63 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar64;
      puVar55[1] = *(uint *)(FVar51.Data + uVar63 * 4);
      *(int *)(FVar51.Data + uVar63 * 4) = local_190.Index;
    }
    else {
      local_e0 = uVar54;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
      }
      if (uVar54 != 0) {
        uVar64 = uVar54;
        if (uVar54 < 2) {
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            uVar64 = 0;
            goto LAB_1440242b2;
          }
        }
        else {
LAB_1440242b2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,uVar64,4)
          ;
        }
        if (0 < (int)uVar54) {
          uVar63 = (ulonglong)uVar54;
          puVar55 = puVar56;
          do {
            FVar51.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar51.Data = local_e8.Data;
            }
            uVar45 = (longlong)(int)uVar54 - 1U & (ulonglong)puVar55;
            puVar55 = (uint *)((longlong)puVar55 + 1);
            *(undefined4 *)(FVar51.Data + uVar45 * 4) = 0xffffffff;
            uVar63 = uVar63 - 1;
          } while (uVar63 != 0);
        }
      }
      if (local_e0 != 0) {
        pTStack_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        local_230 = 0;
        uStack_22c = 1;
        uStack_21c = 0;
        uStack_218 = 0;
        puVar55 = puVar56;
        if (local_100 != 0) {
          FVar50 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
          if (local_108 != (ForElementType<unsigned_int>)0x0) {
            FVar50 = local_108;
          }
          uVar64 = *(uint *)FVar50;
          puVar58 = puVar56;
          while (uVar64 == 0) {
            uStack_218 = (int)puVar58 + 0x20;
            puVar58 = (uint *)(ulonglong)uStack_218;
            iVar37 = (int)puVar55;
            local_230 = iVar37 + 1;
            puVar55 = (uint *)(ulonglong)local_230;
            if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_230) goto LAB_1440243cd;
            uVar64 = ((uint *)((longlong)FVar50 + 4))[iVar37];
          }
          uStack_22c = -uVar64 & uVar64;
          uVar63 = (ulonglong)uStack_22c * 2 + 1;
          lVar61 = 0x3f;
          if (uVar63 != 0) {
            for (; uVar63 >> lVar61 == 0; lVar61 = lVar61 + -1) {
            }
          }
          local_204 = (int)lVar61;
          uStack_21c = local_204 + -1 + uStack_218;
          puVar55 = (uint *)(ulonglong)uStack_21c;
          if ((int)local_100 < (int)uStack_21c) {
LAB_1440243cd:
            puVar55 = (uint *)(ulonglong)local_100;
            uStack_21c = local_100;
          }
        }
        local_220 = 0xffffffff;
        local_1b8 = (longlong *)local_128;
        local_1b0._padding_ = CONCAT44(uStack_22c,local_230);
        local_1b0.CurrentBitIndex = uStack_21c;
        local_1b0.UnvisitedBitMask = 0xffffffff;
        local_1b0._28_4_ = uStack_214;
        local_1b0.BaseBitIndex = uStack_218;
        local_1b0.Array = pTStack_228;
        if ((int)puVar55 < (int)local_100) {
          do {
            lVar61 = *local_1b8;
            lVar46 = (longlong)(int)puVar55;
            uVar64 = local_e0 - 1 & *(uint *)(lVar61 + lVar46 * 0xc);
            *(uint *)(lVar61 + 8 + lVar46 * 0xc) = uVar64;
            FVar51.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar51.Data = local_e8.Data;
            }
            uVar63 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar64;
            *(undefined4 *)(lVar61 + 4 + lVar46 * 0xc) = *(undefined4 *)(FVar51.Data + uVar63 * 4);
            *(int *)(FVar51.Data + uVar63 * 4) = (int)puVar55;
            local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
            puVar55 = (uint *)(ulonglong)(uint)local_1b0.CurrentBitIndex;
          } while (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits);
        }
      }
    }
LAB_1440244b0:
    param_1 = local_280;
    uVar64 = local_288;
    iVar37 = local_f8;
  }
  uVar54 = uVar42;
  if ((int)uVar39 < (int)param_1->_padding_) {
    uVar54 = uVar64;
  }
  if ((uVar54 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_278 = (longlong)(int)uVar39;
  pTVar52 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            (local_278 * 0x50 + param_1->_padding_);
  if (pTVar52 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (pTVar52,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128);
  }
  local_e0 = 0;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  uVar54 = uVar42;
  if ((int)uVar39 < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar54 = uVar64;
  }
  if ((uVar54 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined4 *)(*(longlong *)&(param_1->SimulationType).field_0x10 + (longlong)(int)uVar39 * 4) =
       2;
  uVar54 = uVar42;
  if ((int)uVar39 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
    uVar54 = uVar64;
  }
  if ((uVar54 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(int *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
               (longlong)(int)uVar39 * 4) != -1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("GeometryCollection->IsTransform(RootNoneIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                          ,0x71,L""), bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar4 = FTransformCollection::TransformGroup;
  pFVar43 = ::FName::FName(local_138,"ExplodedVector");
  bVar36 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar43,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  if (bVar36) {
    pFVar43 = ::FName::FName(&local_170,"ExplodedTransform");
    bVar36 = FManagedArrayCollection::HasAttribute
                       ((FManagedArrayCollection *)param_1,*pFVar43,FVar4);
    FVar4 = FTransformCollection::TransformGroup;
    if (bVar36) {
      pFVar43 = ::FName::FName(&local_168,"ExplodedVector");
      pTVar48 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                          ((FManagedArrayCollection *)param_1,*pFVar43,FVar4);
      FVar34 = FTransformCollection::TransformGroup;
      pFVar43 = ::FName::FName(&local_150,"ExplodedTransform");
      FVar4 = *pFVar43;
      bVar36 = FManagedArrayCollection::HasAttribute
                         ((FManagedArrayCollection *)param_1,FVar4,FVar34);
      if ((!bVar36) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("HasAttribute(Name, Group)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x164,L""), bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_178 = FVar34;
      local_180 = FVar4;
      pTVar49 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&param_1->_padding_,(TTuple<FName,FName> *)&local_180);
      if ((pTVar49 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pTVar49->field_0x10 != '\a') &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSameType<T>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x315,L""), bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar49->field_0x10);
      lVar61 = *(longlong *)&pTVar49->field_0x30;
      local_200 = lVar61;
      if ((lVar61 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypedManagedArray != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                              ,0x319,L""), bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined1 *)(lVar61 + 8) = 1;
      fVar67 = 0.0;
      uVar45 = (ulonglong)(int)(uint)local_290;
      fVar68 = 0.0;
      fVar69 = 0.0;
      local_270 = (uint)local_290;
      local_1f8 = local_298.Data + uVar45 * 4;
      uVar63 = uVar45;
      FVar65.Data = local_298.Data;
      while( true ) {
        pFVar47 = local_1f8;
        if ((int)uVar45 != (int)uVar63) {
          local_2a4 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2a4)
          ;
        }
        lVar46 = local_278;
        pFVar35 = local_280;
        uVar64 = local_288;
        uVar54 = 0;
        if (FVar65.Data == pFVar47) break;
        uVar64 = *(uint *)FVar65.Data;
        lVar46 = (longlong)(int)uVar64;
        uVar57 = ~uVar64 >> 0x1f;
        uVar62 = uVar40;
        if ((int)uVar64 < (int)local_280->_padding_) {
          uVar62 = uVar57;
        }
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar2 = (undefined8 *)(local_280->_padding_ + 0x10 + lVar46 * 0x30);
        local_1f0 = *(undefined4 *)puVar2;
        uStack_1ec = *(undefined4 *)((longlong)puVar2 + 4);
        uVar30 = *puVar2;
        local_258 = *(undefined4 *)(puVar2 + 1);
        uVar62 = uVar40;
        if ((int)uVar64 < *(int *)&pTVar48->field_0x18) {
          uVar62 = uVar57;
        }
        local_1e8 = local_258;
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar61 = *(longlong *)&pTVar48->field_0x10;
        *(undefined8 *)(lVar61 + lVar46 * 0xc) = uVar30;
        *(undefined4 *)(lVar61 + 8 + lVar46 * 0xc) = local_258;
        uVar62 = uVar54;
        if ((int)uVar64 < (int)local_280->_padding_) {
          uVar62 = uVar57;
        }
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar61 = local_200;
        lVar5 = local_280->_padding_;
        pfVar3 = (float *)(lVar5 + 0x20 + lVar46 * 0x30);
        fVar66 = *pfVar3;
        fVar19 = pfVar3[1];
        fVar20 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar3 = (float *)(lVar5 + 0x10 + lVar46 * 0x30);
        fVar22 = *pfVar3;
        fVar23 = pfVar3[1];
        fVar24 = pfVar3[2];
        fVar25 = pfVar3[3];
        pfVar3 = (float *)(lVar5 + lVar46 * 0x30);
        fVar26 = *pfVar3;
        fVar27 = pfVar3[1];
        fVar28 = pfVar3[2];
        fVar29 = pfVar3[3];
        if ((int)uVar64 < *(int *)(local_200 + 0x18)) {
          uVar54 = uVar57;
        }
        if ((uVar54 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)(lVar61 + 0x10);
        lVar53 = lVar46 * 0x60;
        auVar15._8_4_ = SUB84((double)fVar27,0);
        auVar15._0_8_ = (double)fVar26;
        auVar15._12_4_ = (int)((ulonglong)(double)fVar27 >> 0x20);
        *(undefined1 (*) [16])(lVar53 + lVar5) = auVar15;
        auVar17._8_4_ = SUB84((double)fVar29,0);
        auVar17._0_8_ = (double)fVar28;
        auVar17._12_4_ = (int)((ulonglong)(double)fVar29 >> 0x20);
        *(undefined1 (*) [16])(lVar53 + 0x10 + lVar5) = auVar17;
        auVar11._8_4_ = SUB84((double)fVar23,0);
        auVar11._0_8_ = (double)fVar22;
        auVar11._12_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
        *(undefined1 (*) [16])(lVar53 + 0x20 + lVar5) = auVar11;
        auVar13._8_4_ = SUB84((double)fVar25,0);
        auVar13._0_8_ = (double)fVar24;
        auVar13._12_4_ = (int)((ulonglong)(double)fVar25 >> 0x20);
        *(undefined1 (*) [16])(lVar53 + 0x30 + lVar5) = auVar13;
        auVar7._8_4_ = SUB84((double)fVar19,0);
        auVar7._0_8_ = (double)fVar66;
        auVar7._12_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
        *(undefined1 (*) [16])(lVar53 + 0x40 + lVar5) = auVar7;
        auVar9._8_4_ = SUB84((double)fVar21,0);
        auVar9._0_8_ = (double)fVar20;
        auVar9._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
        *(undefined1 (*) [16])(lVar53 + 0x50 + lVar5) = auVar9;
        uVar54 = uVar42;
        if ((int)uVar64 < *(int *)&pTVar48->field_0x18) {
          uVar54 = uVar57;
        }
        if ((uVar54 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)&pTVar48->field_0x10;
        uVar63 = (ulonglong)local_270;
        FVar65.Data = FVar65.Data + 4;
        fVar67 = fVar67 + *(float *)(lVar5 + lVar46 * 0xc);
        fVar68 = fVar68 + *(float *)(lVar5 + 4 + lVar46 * 0xc);
        fVar69 = fVar69 + *(float *)(lVar5 + 8 + lVar46 * 0xc);
        uVar45 = local_290 & 0xffffffff;
      }
      if ((int)uVar39 < (int)local_280->_padding_) {
        uVar42 = local_288;
      }
      if ((uVar42 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = pFVar35->_padding_;
      uVar63 = (ulonglong)(int)uVar39;
      pfVar3 = (float *)(lVar5 + 0x20 + lVar46 * 0x30);
      fVar66 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar20 = pfVar3[2];
      fVar21 = pfVar3[3];
      pfVar3 = (float *)(lVar5 + 0x10 + lVar46 * 0x30);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[1];
      fVar24 = pfVar3[2];
      fVar25 = pfVar3[3];
      pfVar3 = (float *)(lVar5 + lVar46 * 0x30);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      uVar42 = uVar54;
      if ((int)uVar39 < *(int *)(lVar61 + 0x18)) {
        uVar42 = uVar64;
      }
      if ((uVar42 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar61 = *(longlong *)(lVar61 + 0x10);
      lVar46 = uVar63 * 0x60;
      auVar16._8_4_ = SUB84((double)fVar27,0);
      auVar16._0_8_ = (double)fVar26;
      auVar16._12_4_ = (int)((ulonglong)(double)fVar27 >> 0x20);
      *(undefined1 (*) [16])(lVar46 + lVar61) = auVar16;
      auVar18._8_4_ = SUB84((double)fVar29,0);
      auVar18._0_8_ = (double)fVar28;
      auVar18._12_4_ = (int)((ulonglong)(double)fVar29 >> 0x20);
      *(undefined1 (*) [16])(lVar46 + 0x10 + lVar61) = auVar18;
      auVar12._8_4_ = SUB84((double)fVar23,0);
      auVar12._0_8_ = (double)fVar22;
      auVar12._12_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
      *(undefined1 (*) [16])(lVar46 + 0x20 + lVar61) = auVar12;
      auVar14._8_4_ = SUB84((double)fVar25,0);
      auVar14._0_8_ = (double)fVar24;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar25 >> 0x20);
      *(undefined1 (*) [16])(lVar46 + 0x30 + lVar61) = auVar14;
      auVar8._8_4_ = SUB84((double)fVar19,0);
      auVar8._0_8_ = (double)fVar66;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
      *(undefined1 (*) [16])(lVar46 + 0x40 + lVar61) = auVar8;
      auVar10._8_4_ = SUB84((double)fVar21,0);
      auVar10._0_8_ = (double)fVar20;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
      *(undefined1 (*) [16])(lVar46 + 0x50 + lVar61) = auVar10;
      if ((int)uVar39 < *(int *)&pTVar48->field_0x18) {
        uVar54 = uVar64;
      }
      fVar66 = __real_3f800000 / (float)(int)(uint)local_290;
      if ((uVar54 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar61 = *(longlong *)&pTVar48->field_0x10;
      *(float *)(lVar61 + uVar63 * 0xc) = fVar66 * fVar67;
      *(float *)(lVar61 + 4 + uVar63 * 0xc) = fVar66 * fVar68;
      *(float *)(lVar61 + 8 + uVar63 * 0xc) = fVar66 * fVar69;
      param_1 = local_280;
      goto LAB_144024c51;
    }
  }
  uVar63 = (ulonglong)uVar39;
LAB_144024c51:
  iVar37 = (uint)local_290;
  uVar45 = (ulonglong)(int)(uint)local_290;
  pFVar47 = local_298.Data + uVar45 * 4;
  FVar65.Data = local_298.Data;
  while( true ) {
    if ((int)uVar45 != iVar37) {
      local_2a3 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2a3);
    }
    _Var33 = UE::Math::TTransform<float>::Identity.Scale3D;
    _Var32 = UE::Math::TTransform<float>::Identity.Translation;
    _Var31 = UE::Math::TTransform<float>::Identity.Rotation;
    if (FVar65.Data == pFVar47) break;
    uVar42 = *(uint *)FVar65.Data;
    uVar54 = uVar40;
    if ((int)uVar42 < (int)param_1->_padding_) {
      uVar54 = ~uVar42 >> 0x1f;
    }
    if ((uVar54 == 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar63 = (ulonglong)uVar39;
    FVar65.Data = FVar65.Data + 4;
    *(uint *)(param_1->_padding_ + (longlong)(int)uVar42 * 4) = uVar39;
    uVar45 = local_290 & 0xffffffff;
  }
  iVar37 = (int)uVar63;
  uVar42 = uVar40;
  if (iVar37 < (int)param_1->_padding_) {
    uVar42 = uVar64;
  }
  if ((uVar42 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar46 = (longlong)iVar37;
  lVar61 = param_1->_padding_;
  *(__m128 *)(lVar61 + lVar46 * 0x30) = _Var31;
  *(__m128 *)(lVar61 + 0x10 + lVar46 * 0x30) = _Var32;
  *(__m128 *)(lVar61 + 0x20 + lVar46 * 0x30) = _Var33;
  if (local_2a2 != '\0') {
    RecursivelyUpdateChildBoneNames
              (iVar37,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                      &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
  }
  uVar42 = rand();
  uVar54 = rand();
  uVar62 = rand();
  fVar67 = FLinearColor::sRGBToLinearTable
           [(ulonglong)uVar62 + (ulonglong)(uint)((int)uVar62 / 100) * -100 + 5 & 0xff];
  fVar68 = FLinearColor::sRGBToLinearTable
           [(ulonglong)uVar54 + (ulonglong)(uint)((int)uVar54 / 100) * -100 + 5 & 0xff];
  lVar61 = (longlong)(int)uVar39;
  fVar69 = FLinearColor::sRGBToLinearTable
           [(ulonglong)uVar42 + (ulonglong)(uint)((int)uVar42 / 100) * -100 + 5 & 0xff];
  if ((int)uVar39 < (int)param_1->_padding_) {
    uVar40 = uVar64;
  }
  if ((uVar40 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar46 = param_1->_padding_;
  *(float *)(lVar46 + lVar61 * 0x10) = fVar67;
  *(float *)(lVar46 + 4 + lVar61 * 0x10) = fVar68;
  *(float *)(lVar46 + 8 + lVar61 * 0x10) = fVar69;
  *(undefined4 *)(lVar46 + 0xc + lVar61 * 0x10) = 0x3f800000;
  ValidateResults(param_1);
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  return;
}

// ClusterBonesByContext @ 144024ef0

void __cdecl
FGeometryCollectionClusteringUtility::ClusterBonesByContext
          (FGeometryCollection *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          )

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  uVar3 = 0;
  if (param_2 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  local_res10[0] = param_2;
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + (longlong)param_2 * 4)
      == -1) {
    ClusterBonesUnderExistingNode(param_1,local_res10[0],param_3);
    return;
  }
  local_28.ArrayNum = param_3->ArrayNum;
  lVar5 = (longlong)local_28.ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.ArrayNum == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
               &local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src,lVar5 << 2);
    if ((FScriptContainerElement *)local_res10 < local_28.AllocatorInstance.Data)
    goto LAB_144025047;
  }
  if (((FScriptContainerElement *)local_res10 <
       local_28.AllocatorInstance.Data + (longlong)local_28.ArrayMax * 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_144025047:
  if (local_28.ArrayNum == local_28.ArrayMax) {
    local_28.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  uVar3 = local_res10[0];
  iVar4 = local_28.ArrayNum + 1;
  *(uint *)(local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4) = local_res10[0];
  lVar5 = (longlong)(int)local_res10[0];
  local_28.ArrayNum = iVar4;
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0xf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_);
  if ((int)uVar3 < iVar4) {
    uVar6 = 0;
    if ((int)uVar3 < (int)param_1->_padding_) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = *(int *)(param_1->_padding_ + lVar5 * 4);
  }
  else {
    iVar4 = -1;
  }
  ClusterBonesUnderNewNodeWithParent(param_1,iVar4,&local_28,true,true);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ClusterBonesUnderExistingNode @ 144025150

void __cdecl
FGeometryCollectionClusteringUtility::ClusterBonesUnderExistingNode
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res18 [16];
  FCollectionHierarchyFacade local_e8;
  
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
            (&local_e8,(FManagedArrayCollection *)param_1);
  bVar4 = Chaos::Facades::FCollectionHierarchyFacade::IsValid(&local_e8);
  if ((bVar4) &&
     (bVar4 = Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(&local_e8), bVar4)) {
    iVar9 = -1;
    pFVar7 = (param_2->AllocatorInstance).Data;
    iVar8 = -1;
    iVar2 = param_2->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar7 == pFVar1) break;
      iVar3 = *(int *)pFVar7;
      pTVar6 = Chaos::Facades::FCollectionHierarchyFacade::FindChildren(&local_e8,iVar3);
      iVar5 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel(&local_e8,iVar3);
      if (((pTVar6 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
          (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34)) &&
         ((iVar5 < iVar8 || (iVar8 == -1)))) {
        iVar8 = iVar5;
        iVar9 = iVar3;
      }
      pFVar7 = pFVar7 + 4;
    }
  }
  else {
    iVar9 = -1;
  }
  ClusterBonesUnderExistingNode(param_1,iVar9,param_2);
  return;
}

// ClusterBonesUnderExistingNode @ 144025280

void __cdecl
FGeometryCollectionClusteringUtility::ClusterBonesUnderExistingNode
          (FGeometryCollection *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          )

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_178 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  int local_160 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  undefined8 local_148;
  FCollectionTransformFacade local_138;
  ulonglong uVar13;
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0xde,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = (param_3->AllocatorInstance).Data;
  iVar7 = 0;
  iVar6 = param_3->ArrayNum;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  pFVar2 = pFVar10 + (longlong)iVar6 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      iVar7 = local_170.ArrayNum;
    }
    if (pFVar10 == pFVar2) break;
    local_178[0] = *(int *)pFVar10;
    if (local_178[0] != param_2) {
      iVar5 = iVar7;
      if (((local_170.AllocatorInstance.Data <= (FScriptContainerElement *)local_178) &&
          ((FScriptContainerElement *)local_178 <
           local_170.AllocatorInstance.Data + (longlong)local_170.ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), iVar5 = local_170.ArrayNum, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar5 == local_170.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_170.AllocatorInstance,&local_170.ArrayMax);
      }
      iVar7 = iVar5 + 1;
      *(int *)(local_170.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_178[0];
      local_170.ArrayNum = iVar7;
    }
    pFVar10 = pFVar10 + 4;
  }
  if (param_2 != FManagedArrayCollection::Invalid) {
    pFVar2 = local_170.AllocatorInstance.Data + (longlong)iVar7 * 4;
    FVar9.Data = local_170.AllocatorInstance.Data;
    iVar6 = iVar7;
LAB_1440253f3:
    if (iVar6 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9.Data == pFVar2) {
      pFVar10 = (param_3->AllocatorInstance).Data;
      iVar6 = param_3->ArrayNum;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      pFVar2 = pFVar10 + (longlong)iVar6 * 4;
      while( true ) {
        if (param_3->ArrayNum != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar10 == pFVar2) break;
        uVar12 = *(uint *)pFVar10;
        uVar8 = 0;
        if ((int)uVar12 < (int)param_1->_padding_) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_160[0] = *(int *)(param_1->_padding_ + (longlong)(int)uVar12 * 4);
        if (local_160[0] != FManagedArrayCollection::Invalid) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_158,local_160);
        }
        pFVar10 = pFVar10 + 4;
      }
      if (param_1 != (FGeometryCollection *)0x0) {
        GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                  (&local_138,(FManagedArrayCollection *)param_1);
        GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
                  (&local_138,param_2,&local_170);
      }
      UpdateHierarchyLevelOfChildren(param_1,param_2);
      RecursivelyUpdateChildBoneNames
                (param_2,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                         &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
      iVar6 = local_158.ArrayNum;
      pFVar2 = local_158.AllocatorInstance.Data + (longlong)local_158.ArrayNum * 4;
      FVar9.Data = local_158.AllocatorInstance.Data;
      while( true ) {
        if (local_158.ArrayNum != iVar6) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar9.Data == pFVar2) break;
        if (*(int *)FVar9.Data != -1) {
          RecursivelyUpdateChildBoneNames
                    (*(int *)FVar9.Data,
                     (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                     &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
        }
        FVar9.Data = FVar9.Data + 4;
      }
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
    else {
      bVar4 = NodeExistsOnThisBranch(param_1,param_2,*(int *)FVar9.Data);
      if (!bVar4) goto code_r0x000144025425;
    }
  }
  uVar11 = 0;
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x1ae,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar1 = &param_1->_padding_;
  iVar6 = (**(code **)(*plVar1 + 0x60))(plVar1);
  uVar13 = uVar11;
  uVar14 = uVar11;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar11;
      uVar12 = 0;
      if ((int)uVar8 < (int)param_1->_padding_) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)(uVar14 + param_1->_padding_) == (int)FManagedArrayCollection::Invalid) &&
         (uVar12 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar12, 1 < (int)uVar12)) {
        local_148 = 0;
        ClusterAllBonesUnderNewRoot(param_1,(FName)0x0,true);
        break;
      }
      uVar11 = (ulonglong)(uVar8 + 1);
      uVar14 = uVar14 + 4;
      iVar6 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while ((int)(uVar8 + 1) < iVar6);
  }
  ValidateResults(param_1);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
code_r0x000144025425:
  FVar9.Data = FVar9.Data + 4;
  iVar6 = local_170.ArrayNum;
  goto LAB_1440253f3;
}

// ClusterBonesUnderExistingRoot @ 144025690

void __cdecl
FGeometryCollectionClusteringUtility::ClusterBonesUnderExistingRoot
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  TManagedArray<int> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_168 [2];
  ForAnyElementType local_160;
  undefined8 local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  FName local_140;
  FCollectionTransformFacade local_138;
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x9c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar3 = FTransformCollection::TransformGroup;
  pFVar9 = ::FName::FName(&local_140,"Level");
  pTVar10 = FManagedArrayCollection::ModifyAttribute<int>
                      ((FManagedArrayCollection *)param_1,*pFVar9,FVar3);
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  GetRootBones(param_1,&local_150);
  iVar7 = 1;
  if (local_150.ArrayNum != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootBonesOut.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = local_150.ArrayNum;
  }
  if ((iVar7 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = *(uint *)local_150.AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)uVar8 < *(int *)&pTVar10->field_0x18) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  local_res20 = uVar8;
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar8 * 4) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Levels[RootBoneElement] == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0xaa,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if ((int)uVar8 < (int)param_1->_padding_) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(param_1->_padding_ + (longlong)(int)uVar8 * 4) !=
       (int)FManagedArrayCollection::Invalid) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parents[RootBoneElement] == FGeometryCollection::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0xab,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 != (FGeometryCollection *)0x0) {
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_138,(FManagedArrayCollection *)param_1);
    GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
              (&local_138,uVar8,param_2);
  }
  uVar8 = local_res20;
  pFVar12 = (param_2->AllocatorInstance).Data;
  iVar7 = param_2->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar7 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar1) break;
    uVar5 = *(uint *)pFVar12;
    if (uVar5 != uVar8) {
      uVar6 = 0;
      if ((int)uVar5 < *(int *)&pTVar10->field_0x18) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)(*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar5 * 4) = 1;
    }
    pFVar12 = pFVar12 + 4;
  }
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  local_168[0] = 0;
  iVar7 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
  if ((int)local_168[0] < iVar7) {
    do {
      lVar11 = (longlong)(int)local_168[0];
      if (local_168[0] != local_res20) {
        uVar8 = 0;
        if ((int)local_168[0] < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
          uVar8 = ~local_168[0] >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar11 * 4) ==
            -1) {
          if (((local_160.Data <= (FScriptContainerElement *)local_168) &&
              ((FScriptContainerElement *)local_168 < local_160.Data + (longlong)local_158._4_4_ * 4
              )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = (int)local_158;
          if ((int)local_158 == local_158._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_160,(int *)((longlong)&local_158 + 4));
          }
          local_158 = CONCAT44(local_158._4_4_,iVar7 + 1);
          *(uint *)(local_160.Data + (longlong)iVar7 * 4) = local_168[0];
        }
      }
      local_168[0] = local_168[0] + 1;
      iVar7 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
    } while ((int)local_168[0] < iVar7);
  }
  if (0 < (int)local_158) {
    local_res8 = SUB81(param_1,0);
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_160.Data,(int)local_158,local_res8,(TLess<void> *)local_res18);
    (**(code **)(param_1->_padding_ + 0x28))(param_1,&FTransformCollection::TransformGroup);
  }
  iVar7 = local_150.ArrayMax;
  local_150._8_8_ = local_150._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
  }
  GetRootBones(param_1,&local_150);
  if ((local_150.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RecursivelyUpdateChildBoneNames
            (*(uint *)local_150.AllocatorInstance.Data,
             (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
             &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
  ValidateResults(param_1);
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  return;
}

// ClusterBonesUnderNewNode @ 144025bc0

int __cdecl
FGeometryCollectionClusteringUtility::ClusterBonesUnderNewNode
          (FGeometryCollection *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          ,bool param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_);
  if (param_2 < iVar3) {
    uVar4 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar3 = *(int *)(param_1->_padding_ + (longlong)param_2 * 4);
  }
  else {
    iVar3 = -1;
  }
  iVar3 = ClusterBonesUnderNewNodeWithParent(param_1,iVar3,param_3,param_4,param_5);
  return iVar3;
}

// ClusterBonesUnderNewNodeWithParent @ 144025cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FGeometryCollectionClusteringUtility::ClusterBonesUnderNewNodeWithParent
          (FGeometryCollection *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          ,bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  ulong64 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  ForElementType<unsigned_int> FVar11;
  ForAnyElementType FVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_2b8 [32];
  uint local_288;
  uint local_284;
  uint local_280;
  uint uStack_27c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_278;
  undefined4 local_270;
  uint uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  uint local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  undefined4 local_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  __m128 local_240;
  undefined1 local_230 [8];
  float fStack_228;
  float fStack_224;
  undefined4 local_220;
  int local_21c;
  undefined4 local_218;
  int local_214;
  int local_210 [2];
  __m128 local_208;
  longlong *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  FSparseArrayAllocationInfo local_1a8;
  FString local_198;
  FCollectionTransformFacade local_188;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_230 = (undefined1  [8])param_3;
  local_208.m128_u64[0] = (ulong64)param_1;
  local_284 = param_2;
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x18,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  local_288 = FManagedArrayCollection::AddElements
                        ((FManagedArrayCollection *)param_1,1,FTransformCollection::TransformGroup);
  puVar24 = (uint *)0x0;
  lVar16 = (longlong)(int)local_288;
  uVar19 = 0;
  if ((int)local_288 < (int)param_1->_padding_) {
    uVar19 = ~local_288 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  *(int *)(param_1->_padding_ + lVar16 * 4) = param_2;
  uVar19 = param_3->ArrayNum;
  pFVar22 = (param_3->AllocatorInstance).Data;
  if (((int)uVar19 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar23 = 0;
  if (uVar19 == 0) goto LAB_144026065;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar19);
  uVar15 = 1;
  if (3 < uVar19) {
    uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_220 = (undefined4)lVar16;
    uVar15 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar15 <= (int)local_50)) goto LAB_144026065;
  local_50 = uVar15;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar15 != 0) {
    uVar18 = uVar15;
    if (uVar15 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_144025ea7;
      }
    }
    else {
LAB_144025ea7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,4);
    }
    if (0 < (int)uVar15) {
      uVar20 = (ulonglong)uVar15;
      puVar14 = puVar24;
      do {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar9 = (ulonglong)puVar14 & (longlong)(int)uVar15 - 1U;
        puVar14 = (uint *)((longlong)puVar14 + 1);
        *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_278 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_280 = 0;
    uStack_27c = 1;
    uStack_26c = 0;
    uStack_268 = 0;
    puVar14 = puVar24;
    if (local_70 != 0) {
      FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78;
      }
      uVar15 = *(uint *)FVar11;
      puVar21 = puVar24;
      while (uVar15 == 0) {
        uStack_268 = (int)puVar21 + 0x20;
        puVar21 = (uint *)(ulonglong)uStack_268;
        iVar7 = (int)puVar14;
        local_280 = iVar7 + 1;
        puVar14 = (uint *)(ulonglong)local_280;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_280)
        goto LAB_144025fc2;
        uVar15 = ((uint *)((longlong)FVar11 + 4))[iVar7];
      }
      uStack_27c = -uVar15 & uVar15;
      uVar20 = (ulonglong)uStack_27c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_21c = (int)lVar16;
      uStack_26c = (uStack_268 - 1) + local_21c;
      puVar14 = (uint *)(ulonglong)uStack_26c;
      if ((int)local_70 < (int)uStack_26c) {
LAB_144025fc2:
        puVar14 = (uint *)(ulonglong)local_70;
        uStack_26c = local_70;
      }
    }
    local_270 = 0xffffffff;
    local_1f8 = (longlong *)local_98;
    local_1f0._padding_ = CONCAT44(uStack_27c,local_280);
    local_1f0.CurrentBitIndex = uStack_26c;
    local_1f0.UnvisitedBitMask = 0xffffffff;
    local_1f0._28_4_ = uStack_264;
    local_1f0.BaseBitIndex = uStack_268;
    local_1f0.Array = pTStack_278;
    if ((int)puVar14 < (int)local_70) {
      do {
        iVar7 = (int)puVar14;
        uVar15 = local_50 - 1 & *(uint *)(*local_1f8 + (longlong)iVar7 * 0xc);
        lVar16 = *local_1f8 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar16 + 8) = uVar15;
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(lVar16 + 4) = *(undefined4 *)(FVar12.Data + uVar20 * 4);
        *(int *)(FVar12.Data + uVar20 * 4) = iVar7;
        local_1f0.UnvisitedBitMask = local_1f0.UnvisitedBitMask & ~local_1f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
        puVar14 = (uint *)(ulonglong)(uint)local_1f0.CurrentBitIndex;
      } while (local_1f0.CurrentBitIndex < (local_1f0.Array)->NumBits);
    }
  }
LAB_144026065:
  pFVar1 = pFVar22 + (longlong)(int)uVar19 * 4;
  if (pFVar22 != pFVar1) {
    do {
      if (local_64 == 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                           (int *)(local_98 + 0xc));
        uVar19 = local_70;
        if (local_70 == 0) {
          iVar17 = 0;
LAB_144026117:
          if (local_6c < (int)(local_70 + 1)) {
            uVar15 = local_6c + 0x1fU >> 5;
            uVar18 = local_70 + 0x20 >> 5;
            if (uVar18 < 5) {
              local_6c = 4;
            }
            else {
              uVar20 = (ulonglong)uVar18;
              if (uVar15 < 5) {
                uVar15 = uVar23;
              }
              if (uVar15 == 0) {
                uVar9 = 4;
                if (4 < uVar20) {
                  uVar9 = uVar20;
                }
              }
              else {
                uVar9 = ((ulonglong)uVar18 * 3 >> 3) + 0x10 + uVar20;
              }
              uVar10 = FMemory::QuantizeSize(uVar9 * 4,0);
              local_6c = (int)(uVar10 >> 2);
              if (local_6c < (int)uVar18) {
                local_6c = 0x7fffffff;
              }
            }
            local_6c = local_6c << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
          }
          local_70 = local_70 + 1;
          uVar18 = (int)local_70 >> 0x1f & 0x1f;
          uVar15 = local_70 + uVar18;
          iVar8 = (uVar15 & 0x1f) - uVar18;
          if (iVar8 != 0) {
            FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_78;
            }
            puVar14 = (uint *)((longlong)FVar11 + (longlong)((int)uVar15 >> 5) * 4);
            *puVar14 = *puVar14 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
          }
        }
        else {
          iVar17 = (int)(local_70 + ((int)local_70 >> 0x1f & 0x1fU)) >> 5;
          if (iVar17 != (int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5)
          goto LAB_144026117;
          local_70 = local_70 + 1;
        }
        FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_78;
        }
        puVar14 = (uint *)((longlong)FVar11 + (longlong)iVar17 * 4);
        *puVar14 = *puVar14 & ~(1 << ((byte)uVar19 & 0x1f));
        iVar17 = local_68;
      }
      else {
        local_64 = local_64 + -1;
        iVar17 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
        iVar7 = local_68;
        if (local_64 != 0) {
          *(undefined4 *)(local_98._0_8_ + (longlong)iVar17 * 0xc) = 0xffffffff;
        }
      }
      local_68 = iVar17;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,&local_1a8,iVar7);
      puVar14 = puVar24;
      if (local_1a8.Pointer != (uint *)0x0) {
        *(uint *)local_1a8.Pointer = *(uint *)pFVar22;
        *(uint *)((longlong)local_1a8.Pointer + 4) = 0xffffffff;
        puVar14 = local_1a8.Pointer;
      }
      uVar19 = *puVar14;
      if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar12.Data + (ulonglong)(local_50 - 1 & uVar19) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar19) {
            if (iVar7 != -1) {
              *(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = uVar19;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_98,local_1a8.Index,1);
              goto LAB_1440265c5;
            }
            break;
          }
        }
      }
      uVar18 = local_98._8_4_ - local_64;
      uVar15 = 1;
      if (3 < uVar18) {
        uVar20 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_218 = (undefined4)lVar16;
        uVar15 = 1 << ((byte)lVar16 & 0x1f);
      }
      if (((int)uVar18 < 1) || ((int)uVar15 <= (int)local_50)) {
        uVar19 = local_50 - 1 & uVar19;
        puVar14[2] = uVar19;
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
        puVar14[1] = *(uint *)(FVar12.Data + uVar20 * 4);
        *(int *)(FVar12.Data + uVar20 * 4) = local_1a8.Index;
      }
      else {
        local_50 = uVar15;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
        }
        if (uVar15 != 0) {
          uVar19 = uVar15;
          if (uVar15 < 2) {
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              uVar19 = 0;
              goto LAB_1440263c0;
            }
          }
          else {
LAB_1440263c0:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_58,0,uVar19,4);
          }
          if (0 < (int)uVar15) {
            uVar20 = (ulonglong)uVar15;
            puVar14 = puVar24;
            do {
              FVar12.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar12.Data = local_58.Data;
              }
              uVar9 = (ulonglong)puVar14 & (longlong)(int)uVar15 - 1U;
              puVar14 = (uint *)((longlong)puVar14 + 1);
              *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_50 != 0) {
          pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
          local_260 = 0;
          uStack_25c = 1;
          uStack_24c = 0;
          uStack_248 = 0;
          puVar14 = puVar24;
          if (local_70 != 0) {
            FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
            if (local_78 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_78;
            }
            uVar19 = *(uint *)FVar11;
            puVar21 = puVar24;
            while (uVar19 == 0) {
              uStack_248 = (int)puVar21 + 0x20;
              puVar21 = (uint *)(ulonglong)uStack_248;
              iVar7 = (int)puVar14;
              local_260 = iVar7 + 1;
              puVar14 = (uint *)(ulonglong)local_260;
              if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_260) goto LAB_1440264e2;
              uVar19 = ((uint *)((longlong)FVar11 + 4))[iVar7];
            }
            uStack_25c = -uVar19 & uVar19;
            uVar20 = (ulonglong)uStack_25c * 2 + 1;
            lVar16 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_214 = (int)lVar16;
            uStack_24c = (uStack_248 - 1) + local_214;
            puVar14 = (uint *)(ulonglong)uStack_24c;
            if ((int)local_70 < (int)uStack_24c) {
LAB_1440264e2:
              puVar14 = (uint *)(ulonglong)local_70;
              uStack_24c = local_70;
            }
          }
          local_250 = 0xffffffff;
          local_1d0 = (longlong *)local_98;
          local_1c8._padding_ = CONCAT44(uStack_25c,local_260);
          local_1c8.CurrentBitIndex = uStack_24c;
          local_1c8.UnvisitedBitMask = 0xffffffff;
          local_1c8._28_4_ = uStack_244;
          local_1c8.BaseBitIndex = uStack_248;
          local_1c8.Array = pTStack_258;
          if ((int)puVar14 < (int)local_70) {
            do {
              iVar7 = (int)puVar14;
              uVar19 = local_50 - 1 & *(uint *)(*local_1d0 + (longlong)iVar7 * 0xc);
              lVar16 = *local_1d0 + (longlong)iVar7 * 0xc;
              *(uint *)(lVar16 + 8) = uVar19;
              FVar12.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar12.Data = local_58.Data;
              }
              uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
              *(undefined4 *)(lVar16 + 4) = *(undefined4 *)(FVar12.Data + uVar20 * 4);
              *(int *)(FVar12.Data + uVar20 * 4) = iVar7;
              local_1c8.UnvisitedBitMask = local_1c8.UnvisitedBitMask & ~local_1c8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
              puVar14 = (uint *)(ulonglong)(uint)local_1c8.CurrentBitIndex;
            } while (local_1c8.CurrentBitIndex < (local_1c8.Array)->NumBits);
          }
        }
      }
LAB_1440265c5:
      pFVar22 = pFVar22 + 4;
    } while (pFVar22 != pFVar1);
    param_1 = (FGeometryCollection *)local_208._0_8_;
    param_3 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_230;
    param_2 = local_284;
  }
  uVar19 = local_288;
  lVar16 = (longlong)(int)local_288;
  uVar15 = uVar23;
  if ((int)local_288 < (int)param_1->_padding_) {
    uVar15 = ~local_288 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  pTVar13 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
            (lVar16 * 0x50 + param_1->_padding_);
  if (pTVar13 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (pTVar13,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98,0);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  uVar15 = uVar23;
  if ((int)uVar19 < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar15 = ~uVar19 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  *(undefined4 *)(*(longlong *)&(param_1->SimulationType).field_0x10 + (longlong)(int)uVar19 * 4) =
       2;
  lVar16 = (longlong)(int)uVar19;
  _local_230 = UE::Math::TTransform<float>::Identity.Rotation;
  uVar15 = uVar23;
  if ((int)uVar19 < (int)param_1->_padding_) {
    uVar15 = ~uVar19 >> 0x1f;
  }
  local_208 = UE::Math::TTransform<float>::Identity.Translation;
  local_240 = UE::Math::TTransform<float>::Identity.Scale3D;
  fVar25 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
  fVar26 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
  fVar27 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
  fVar28 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
  if (uVar15 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    fVar25 = (float)local_230._0_4_;
    fVar26 = (float)local_230._4_4_;
    fVar27 = fStack_228;
    fVar28 = fStack_224;
  }
  lVar4 = param_1->_padding_;
  pfVar2 = (float *)(lVar4 + lVar16 * 0x30);
  *pfVar2 = fVar25;
  pfVar2[1] = fVar26;
  pfVar2[2] = fVar27;
  pfVar2[3] = fVar28;
  puVar3 = (ulong64 *)(lVar4 + 0x10 + lVar16 * 0x30);
  *puVar3 = local_208._0_8_;
  puVar3[1] = local_208._8_8_;
  puVar3 = (ulong64 *)(lVar4 + 0x20 + lVar16 * 0x30);
  *puVar3 = local_240._0_8_;
  puVar3[1] = local_240._8_8_;
  if (param_1 != (FGeometryCollection *)0x0) {
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_188,(FManagedArrayCollection *)param_1);
    GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
              (&local_188,uVar19,param_3);
  }
  UpdateHierarchyLevelOfChildren(param_1,uVar19);
  if (param_2 != FManagedArrayCollection::Invalid) {
    uVar15 = uVar23;
    if (param_2 < (int)param_1->_padding_) {
      uVar15 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               ((longlong)param_2 * 0x50 + param_1->_padding_),local_210,(bool *)&local_288);
  }
  ::FString::PrintfImpl(&local_198,L"ClusterBone_%d");
  if ((int)uVar19 < (int)param_1->_padding_) {
    uVar23 = ~uVar19 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  ::FString::operator=((FString *)((longlong)(int)uVar19 * 0x10 + param_1->_padding_),&local_198);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (param_5) {
    ValidateResults(param_1);
  }
  return uVar19;
}

// CollapseHierarchyOneLevel @ 144026920

void __cdecl
FGeometryCollectionClusteringUtility::CollapseHierarchyOneLevel
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  FScriptContainerElement *local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  TManagedArray<int> *local_110;
  FScriptContainerElement *local_108;
  int local_100;
  int local_fc;
  int local_f8 [2];
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78 [4];
  undefined4 local_54;
  
  local_res10 = param_2;
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x13f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = FTransformCollection::TransformGroup;
  pFVar9 = ::FName::FName(local_78,"Level");
  local_110 = FManagedArrayCollection::ModifyAttribute<int>
                        ((FManagedArrayCollection *)param_1,*pFVar9,FVar6);
  pFVar12 = (param_2->AllocatorInstance).Data;
  local_12c = param_2->ArrayNum;
  uVar10 = (ulonglong)(int)local_12c;
  pFVar19 = pFVar12 + uVar10 * 4;
  local_128 = pFVar19;
  do {
    uVar16 = 0;
    local_108 = pFVar12;
    if (param_2->ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar19) {
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res10._0_1_,
                 (TLess<void> *)local_res20);
      (**(code **)(param_1->_padding_ + 0x28))
                (param_1,&FTransformCollection::TransformGroup,param_2);
      local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.ArrayNum = 0;
      local_120.ArrayMax = 0;
      GetRootBones(param_1,&local_120);
      if (local_120.ArrayNum != 0) {
        if ((local_120.ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        RecursivelyUpdateChildBoneNames
                  (*(int *)local_120.AllocatorInstance.Data,
                   (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                   &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
      }
      ValidateResults(param_1);
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      return;
    }
    uVar4 = *(uint *)pFVar12;
    lVar13 = (longlong)(int)uVar4;
    local_130 = uVar4;
    if (uVar4 != (int)FManagedArrayCollection::Invalid) {
      local_134 = ~uVar4 >> 0x1f;
      uVar18 = 0;
      uVar8 = uVar18;
      if ((int)uVar4 < (int)param_1->_padding_) {
        uVar8 = local_134;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)(param_1->_padding_ + lVar13 * 4);
      param_2 = local_res10;
      pFVar19 = local_128;
      local_e8 = lVar13;
      if (uVar8 != (int)FManagedArrayCollection::Invalid) {
        uVar14 = uVar18;
        if ((int)uVar4 < (int)param_1->_padding_) {
          uVar14 = local_134;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_e0 = lVar13 * 0x50;
        plVar15 = (longlong *)(param_1->_padding_ + local_e0);
        uVar4 = *(uint *)(plVar15 + 5);
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
        uStack_cc = 1;
        uStack_bc = uVar18;
        uStack_d0 = uVar16;
        if (uVar4 != 0) {
          pTVar17 = pTVar1;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
          }
          uVar14 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
          uVar18 = uVar16;
          while (uVar14 == 0) {
            lVar13 = (longlong)(int)uStack_d0;
            uVar18 = uVar18 + 0x20;
            uStack_d0 = uStack_d0 + 1;
            uStack_bc = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_d0)
            goto LAB_144026b3e;
            uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
          }
          uStack_cc = -uVar14 & uVar14;
          uVar10 = (ulonglong)uStack_cc * 2 + 1;
          lVar13 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_100 = (int)lVar13;
          uStack_bc = (uVar18 - 1) + local_100;
          if ((int)uVar4 < (int)uStack_bc) {
            uStack_bc = uVar4;
          }
        }
LAB_144026b3e:
        uVar16 = *(uint *)(plVar15 + 5);
        uStack_b4 = local_54;
        iStack_b0 = (int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34);
        uVar14 = uVar16 & 0xffffffe0;
        TStack_a0._padding_ = CONCAT44(uStack_cc,uStack_d0);
        uStack_c0 = 0xffffffff;
        TStack_a0.CurrentBitIndex = uStack_bc;
        TStack_a0.UnvisitedBitMask = 0xffffffff;
        iVar11 = (int)uVar16 >> 5;
        TStack_a0._28_4_ = local_54;
        TStack_a0.BaseBitIndex = uVar18;
        uStack_80 = CONCAT44(uStack_ac,iStack_b0);
        local_f0 = plVar15;
        local_d8 = plVar15;
        local_c8 = pTVar1;
        local_b8 = uVar18;
        local_a8 = plVar15;
        TStack_a0.Array = pTVar1;
        if ((((int)uVar16 < 0) || ((int)uVar4 < (int)uVar16)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar4 = *(uint *)(plVar15 + 5);
        if (uVar16 != uVar4) {
          pTVar17 = pTVar1;
          if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) &
                   *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
          while (uVar16 == 0) {
            lVar13 = (longlong)iVar11;
            uVar14 = uVar14 + 0x20;
            iVar11 = iVar11 + 1;
            uVar16 = uVar4;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_144026c50;
            uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
          }
          uVar10 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_fc = (int)lVar13;
          uVar16 = local_fc + -1 + uVar14;
          if ((int)uVar4 < (int)uVar16) {
            uVar16 = uVar4;
          }
        }
LAB_144026c50:
        while( true ) {
          plVar15 = local_a8;
          if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_a0.CurrentBitIndex == uVar16) && (TStack_a0.Array == pTVar1)) &&
             (plVar15 == local_f0)) break;
          uVar4 = *(uint *)(*plVar15 + (longlong)TStack_a0.CurrentBitIndex * 0xc);
          uVar18 = 0;
          if ((int)uVar8 < (int)param_1->_padding_) {
            uVar18 = ~uVar8 >> 0x1f;
          }
          local_138 = uVar4;
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     ((longlong)(int)uVar8 * 0x50 + param_1->_padding_),local_f8,(bool *)&local_138)
          ;
          uVar18 = 0;
          if ((int)uVar4 < *(int *)&local_110->field_0x18) {
            uVar18 = ~uVar4 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          piVar3 = (int *)(*(longlong *)&local_110->field_0x10 + (longlong)(int)uVar4 * 4);
          *piVar3 = *piVar3 + -1;
          uVar18 = 0;
          if ((int)uVar4 < (int)param_1->_padding_) {
            uVar18 = ~uVar4 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(param_1->_padding_ + (longlong)(int)uVar4 * 4) = uVar8;
          TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
        }
        uVar16 = 0;
        if ((int)local_130 < (int)param_1->_padding_) {
          uVar16 = local_134;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (param_1->_padding_ + local_e0);
        bVar7 = 1 < this->HashSize;
        if (!bVar7) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this);
        }
        puVar2 = &(this->Elements).field_0xc;
        *(undefined4 *)&(this->Elements).field_0x8 = 0;
        if (*(int *)puVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this,0,(int *)puVar2);
        }
        *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->Elements).field_0x34 = 0;
        iVar11 = *(int *)&(this->Elements).field_0x2c;
        *(undefined4 *)&(this->Elements).field_0x28 = 0;
        if ((iVar11 < 0) || (0x80 < iVar11)) {
          *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,0);
        }
        param_2 = local_res10;
        pFVar19 = local_128;
        if (bVar7) {
          this->HashSize = 1;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this);
          param_2 = local_res10;
          pFVar19 = local_128;
        }
      }
    }
    uVar10 = (ulonglong)local_12c;
    pFVar12 = local_108 + 4;
  } while( true );
}

// CollapseLevelHierarchy @ 144026fa0

void __cdecl
FGeometryCollectionClusteringUtility::CollapseLevelHierarchy
          (schar param_1,FGeometryCollection *param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  TManagedArray<int> *pTVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18 [2];
  uint local_48;
  uint local_44;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  if ((param_2 == (FGeometryCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x2d4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar6 = ::FName::FName(&local_res10,"Level");
  bVar3 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_2,*pFVar6,FVar2);
  if (!bVar3) {
    UpdateHierarchyLevelOfChildren(param_2,-1);
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar6 = ::FName::FName(local_res18,"Level");
  pTVar7 = FManagedArrayCollection::GetAttribute<int>
                     ((FManagedArrayCollection *)param_2,*pFVar6,FVar2);
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  if (param_1 == -1) {
    local_48 = 0;
    iVar4 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)param_2,FTransformCollection::TransformAttribute);
    if ((int)local_48 < iVar4) {
      do {
        lVar8 = (longlong)(int)local_48;
        uVar5 = 0;
        if ((int)local_48 < *(int *)&(param_2->TransformToGeometryIndex).field_0x18) {
          uVar5 = ~local_48 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(*(longlong *)&(param_2->TransformToGeometryIndex).field_0x10 + lVar8 * 4) != -1
           ) {
          if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_40.ArrayNum;
          if (local_40.ArrayNum == local_40.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_40.AllocatorInstance,&local_40.ArrayMax);
          }
          local_40.ArrayNum = iVar4 + 1;
          *(uint *)(local_40.AllocatorInstance.Data + (longlong)iVar4 * 4) = local_48;
        }
        local_48 = local_48 + 1;
        iVar4 = FManagedArrayCollection::NumElements
                          ((FManagedArrayCollection *)param_2,
                           FTransformCollection::TransformAttribute);
      } while ((int)local_48 < iVar4);
    }
    if (0 < local_40.ArrayNum) {
      ClusterBonesUnderExistingRoot(param_2,&local_40);
    }
  }
  else {
    local_44 = 0;
    iVar4 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)param_2,FTransformCollection::TransformAttribute);
    if ((int)local_44 < iVar4) {
      do {
        lVar8 = (longlong)(int)local_44;
        uVar5 = 0;
        if ((int)local_44 < *(int *)&pTVar7->field_0x18) {
          uVar5 = ~local_44 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(*(longlong *)&pTVar7->field_0x10 + lVar8 * 4) == (int)param_1) {
          if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)&local_44) &&
              ((FScriptContainerElement *)&local_44 <
               local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_40.ArrayNum;
          if (local_40.ArrayNum == local_40.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_40.AllocatorInstance,&local_40.ArrayMax);
          }
          local_40.ArrayNum = iVar4 + 1;
          *(uint *)(local_40.AllocatorInstance.Data + (longlong)iVar4 * 4) = local_44;
        }
        local_44 = local_44 + 1;
        iVar4 = FManagedArrayCollection::NumElements
                          ((FManagedArrayCollection *)param_2,
                           FTransformCollection::TransformAttribute);
      } while ((int)local_44 < iVar4);
    }
    if (0 < local_40.ArrayNum) {
      CollapseHierarchyOneLevel(param_2,&local_40);
    }
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// CollapseSelectedHierarchy @ 144027310

void __cdecl
FGeometryCollectionClusteringUtility::CollapseSelectedHierarchy
          (schar param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryCollection *param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName *pFVar6;
  TManagedArray<int> *pTVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FName local_res20;
  FName local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  if (param_3 == (FGeometryCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x302,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar6 = ::FName::FName(&local_res20,"Level");
  bVar3 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_3,*pFVar6,FVar2);
  if (!bVar3) {
    UpdateHierarchyLevelOfChildren(param_3,-1);
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar6 = ::FName::FName(&local_58,"Level");
  pTVar7 = FManagedArrayCollection::GetAttribute<int>
                     ((FManagedArrayCollection *)param_3,*pFVar6,FVar2);
  if ('\0' < param_1) {
    iVar8 = param_2->ArrayNum;
    uVar10 = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    if (0 < iVar8) {
      lVar12 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar10 < iVar8) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        uVar4 = *(uint *)((param_2->AllocatorInstance).Data + lVar12);
        uVar5 = 0;
        if ((int)uVar4 < *(int *)&pTVar7->field_0x18) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (*(int *)(*(longlong *)&pTVar7->field_0x10 + (longlong)(int)uVar4 * 4) == (int)param_1) {
          uVar5 = 0;
          if ((int)uVar4 < (int)param_3->_padding_) {
            uVar5 = ~uVar4 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          lVar9 = (longlong)(int)uVar4 * 0x50;
          if (0 < *(int *)(lVar9 + 8 + param_3->_padding_) -
                  *(int *)(lVar9 + 0x34 + param_3->_padding_)) {
            uVar4 = 0;
            if ((int)uVar10 < param_2->ArrayNum) {
              uVar4 = ~uVar10 >> 0x1f;
            }
            if (uVar4 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            pFVar11 = (param_2->AllocatorInstance).Data + lVar12;
            if ((local_50.AllocatorInstance.Data <= pFVar11) &&
               (pFVar11 < local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (local_50.ArrayNum == local_50.ArrayMax) {
              local_50.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
            }
            lVar9 = (longlong)local_50.ArrayNum;
            local_50.ArrayNum = local_50.ArrayNum + 1;
            *(undefined4 *)(local_50.AllocatorInstance.Data + lVar9 * 4) = *(undefined4 *)pFVar11;
          }
        }
        iVar8 = param_2->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 4;
      } while ((int)uVar10 < iVar8);
      if (0 < local_50.ArrayNum) {
        CollapseHierarchyOneLevel(param_3,&local_50);
      }
    }
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  return;
}

// ContainsMultipleRootBones @ 14402ba40

bool __cdecl
FGeometryCollectionClusteringUtility::ContainsMultipleRootBones(FGeometryCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x1ae,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  plVar9 = &param_1->_padding_;
  iVar8 = 0;
  uVar6 = 0;
  iVar4 = (**(code **)(*plVar9 + 0x60))(plVar9);
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)param_1->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((*(int *)(param_1->_padding_ + lVar7) == (int)FManagedArrayCollection::Invalid) &&
         (iVar8 = iVar8 + 1, 1 < iVar8)) {
        return true;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
      iVar4 = (**(code **)(*plVar9 + 0x60))(plVar9);
    } while ((int)uVar6 < iVar4);
  }
  return false;
}

// FindLowestCommonAncestor @ 144035bb0

int __cdecl
FGeometryCollectionClusteringUtility::FindLowestCommonAncestor
          (FManagedArrayCollection *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  TManagedArray<int> *pTVar9;
  ForAnyElementType FVar10;
  FValueType *this;
  ulonglong uVar11;
  uint uVar12;
  FName local_res8;
  ForAnyElementType local_48;
  undefined8 local_40;
  FName local_38;
  FName local_30;
  
  FVar3 = FTransformCollection::TransformGroup;
  pFVar7 = ::FName::FName(&local_res8,"Parent");
  local_30 = FVar3;
  local_38 = *pFVar7;
  pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  this = (FValueType *)&pTVar8->field_0x10;
  if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this = (FValueType *)0x0;
  }
  if ((this == (FValueType *)0x0) ||
     (pTVar9 = FManagedArrayCollection::FValueType::GetTypedPtr<int>(this),
     pTVar9 == (TManagedArray<int> *)0x0)) {
    param_3 = 0xffffffff;
  }
  else {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_48,(int *)((longlong)&local_40 + 4));
    local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
    *(int *)(local_48.Data + (longlong)iVar5 * 4) = param_2;
    while( true ) {
      uVar11 = (ulonglong)(int)local_40;
      uVar12 = 0;
      if ((int)((int)local_40 - 1U) < (int)local_40) {
        uVar12 = ~((int)local_40 - 1U) >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        uVar11 = local_40 & 0xffffffff;
      }
      iVar5 = (int)uVar11;
      uVar12 = iVar5 - 1;
      if (*(int *)(local_48.Data + (longlong)(int)uVar12 * 4) == -1) break;
      uVar6 = 0;
      if ((int)uVar12 < iVar5) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = (int)local_40;
      }
      uVar12 = *(uint *)(local_48.Data + (longlong)(iVar5 + -1) * 4);
      uVar6 = 0;
      if ((int)uVar12 < *(int *)&pTVar9->field_0x18) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = (int)local_40;
      }
      pFVar1 = (FScriptContainerElement *)
               (*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar12 * 4);
      if ((local_48.Data <= pFVar1) && (pFVar1 < local_48.Data + (longlong)local_40._4_4_ * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = (int)local_40;
      }
      if (iVar5 == local_40._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
      *(uint *)(local_48.Data + (longlong)iVar5 * 4) = *(uint *)pFVar1;
    }
    for (; param_3 != 0xffffffff;
        param_3 = *(uint *)(*(longlong *)&pTVar9->field_0x10 + (longlong)param_3 * 4)) {
      for (FVar10.Data = local_48.Data; FVar10.Data != local_48.Data + (longlong)(int)uVar11 * 4;
          FVar10.Data = FVar10.Data + 4) {
        if (*(uint *)FVar10.Data == param_3) goto LAB_144035e93;
      }
      uVar12 = 0;
      if (param_3 < *(int *)&pTVar9->field_0x18) {
        uVar12 = (uint)~param_3 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        uVar11 = local_40 & 0xffffffff;
      }
    }
    param_3 = 0xffffffff;
LAB_144035e93:
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return param_3;
}

// FindLowestCommonAncestor @ 144035ed0

int __cdecl
FGeometryCollectionClusteringUtility::FindLowestCommonAncestor
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 == 0) {
LAB_144035fb3:
    iVar5 = -1;
  }
  else {
    if ((iVar3 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    uVar6 = 1;
    iVar5 = *(int *)(param_2->AllocatorInstance).Data;
    if (1 < (longlong)iVar3) {
      lVar7 = 1;
      do {
        if (iVar5 == -1) goto LAB_144035fb3;
        uVar4 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        iVar5 = FindLowestCommonAncestor
                          (param_1,iVar5,*(int *)((param_2->AllocatorInstance).Data + lVar7 * 4));
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar3);
    }
  }
  return iVar5;
}

// GetBonesToLevel @ 14403dde0

void __cdecl
FGeometryCollectionClusteringUtility::GetBonesToLevel
          (FGeometryCollection *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          ,bool param_4,bool param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<int> *pTVar11;
  longlong lVar12;
  FName local_res8;
  uint local_48 [2];
  FName local_40;
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x20b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar4 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName(&local_res8,"Level");
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar10,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  if (bVar5) {
    pFVar10 = ::FName::FName(&local_40,"Level");
    pTVar11 = FManagedArrayCollection::GetAttribute<int>
                        ((FManagedArrayCollection *)param_1,*pFVar10,FVar4);
    iVar6 = FManagedArrayCollection::NumElements
                      ((FManagedArrayCollection *)param_1,FTransformCollection::TransformGroup);
    local_48[0] = 0;
    if (0 < iVar6) {
      do {
        uVar8 = local_48[0];
        uVar7 = 0;
        if ((int)local_48[0] < *(int *)&(param_1->SimulationType).field_0x18) {
          uVar7 = ~local_48[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar12 = (longlong)(int)local_48[0];
        iVar9 = *(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 +
                        (longlong)(int)uVar8 * 4);
        uVar8 = 0;
        if ((int)local_48[0] < *(int *)&(param_1->SimulationType).field_0x18) {
          uVar8 = ~local_48[0] >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar12 * 4);
        if (((param_4) && (iVar1 != 2)) && (iVar9 != 1)) goto LAB_14403e1f8;
        if (param_2 == -1) {
LAB_14403e161:
          pFVar2 = (param_3->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == param_3->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar9 + 1;
          *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_48[0];
        }
        else if ((param_5) && (iVar1 != 2)) {
          lVar12 = (longlong)(int)local_48[0];
          uVar8 = 0;
          if ((int)local_48[0] < *(int *)&pTVar11->field_0x18) {
            uVar8 = ~local_48[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&pTVar11->field_0x10 + lVar12 * 4) == param_2)
          goto LAB_14403e108;
          lVar12 = (longlong)(int)local_48[0];
          uVar8 = 0;
          if ((int)local_48[0] < (int)param_1->_padding_) {
            uVar8 = ~local_48[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0 < *(int *)(lVar12 * 0x50 + 8 + param_1->_padding_) -
                  *(int *)(lVar12 * 0x50 + 0x34 + param_1->_padding_)) {
            lVar12 = (longlong)(int)local_48[0];
            uVar8 = 0;
            if ((int)local_48[0] < *(int *)&pTVar11->field_0x18) {
              uVar8 = ~local_48[0] >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(*(longlong *)&pTVar11->field_0x10 + lVar12 * 4) + 1 == param_2)
            goto LAB_14403e108;
          }
        }
        else {
LAB_14403e108:
          lVar12 = (longlong)(int)local_48[0];
          uVar8 = 0;
          if ((int)local_48[0] < *(int *)&pTVar11->field_0x18) {
            uVar8 = ~local_48[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&pTVar11->field_0x10 + lVar12 * 4) <= param_2)
          goto LAB_14403e161;
        }
LAB_14403e1f8:
        local_48[0] = local_48[0] + 1;
      } while ((int)local_48[0] < iVar6);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3230557289177940493>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x20d,
                       "GeometryCollection->HasAttribute(\"Level\", FGeometryCollection::TransformGroup)"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetChildBonesAtLevel @ 14403e240

void __cdecl
FGeometryCollectionClusteringUtility::GetChildBonesAtLevel
          (FGeometryCollection *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FName *pFVar11;
  TManagedArray<int> *pTVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FName local_68;
  FName local_60 [4];
  undefined4 local_3c;
  
  local_res10[0] = param_2;
  local_res18 = param_3;
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x22d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = FTransformCollection::TransformGroup;
  if (param_3 == -1) {
    GetLeafBones((FManagedArrayCollection *)param_1,local_res10[0],false,param_4);
    return;
  }
  pFVar11 = ::FName::FName(&local_68,"Level");
  bVar7 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar11,FVar6);
  FVar6 = FTransformCollection::TransformGroup;
  if (bVar7) {
    pFVar11 = ::FName::FName(local_60,"Level");
    pTVar12 = FManagedArrayCollection::GetAttribute<int>
                        ((FManagedArrayCollection *)param_1,*pFVar11,FVar6);
    lVar18 = (longlong)(int)local_res10[0];
    iVar8 = 0;
    uVar9 = 0;
    if ((int)local_res10[0] < *(int *)&pTVar12->field_0x18) {
      uVar9 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(*(longlong *)&pTVar12->field_0x10 + lVar18 * 4) == param_3) {
      pFVar4 = (param_4->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 < pFVar4 + (longlong)param_4->ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_4->ArrayNum;
      if (iVar8 == param_4->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar8 + 1;
      *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_res10[0];
    }
    else {
      lVar18 = (longlong)(int)local_res10[0];
      uVar9 = 0;
      if ((int)local_res10[0] < (int)param_1->_padding_) {
        uVar9 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = 1;
      plVar16 = (longlong *)(lVar18 * 0x50 + param_1->_padding_);
      iVar14 = 0;
      iVar3 = (int)plVar16[5];
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
      iVar10 = 0;
      if (iVar3 != 0) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar1;
        }
        uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        while (uVar13 == 0) {
          lVar18 = (longlong)iVar8;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar8 + 1;
          iVar10 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14403e52e;
          uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar18 * 4 + 4);
        }
        uVar9 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar9 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar10 = iVar14 + -1 + (int)lVar18;
        if (iVar3 < iVar10) {
          iVar10 = iVar3;
        }
      }
LAB_14403e52e:
      uVar13 = *(uint *)(plVar16 + 5);
      uVar17 = uVar13 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uVar9,iVar8);
      TStack_90.CurrentBitIndex = iVar10;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar8 = (int)uVar13 >> 5;
      TStack_90._28_4_ = local_3c;
      TStack_90.BaseBitIndex = iVar14;
      uStack_70 = CONCAT44(uStack_9c,(int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34));
      TStack_90.Array = pTVar1;
      if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = local_res18;
      uVar9 = *(uint *)(plVar16 + 5);
      if (uVar13 != uVar9) {
        pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = pTVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) &
                 *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
        while (uVar13 == 0) {
          lVar18 = (longlong)iVar8;
          uVar17 = uVar17 + 0x20;
          iVar8 = iVar8 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14403e640;
          uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar18 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar13 = (int)lVar18 + -1 + uVar17;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14403e640:
      while( true ) {
        if ((int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34) != (int)uStack_70) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_90.CurrentBitIndex == uVar13) && (TStack_90.Array == pTVar1)) break;
        GetChildBonesAtLevel
                  (param_1,*(int *)(*plVar16 + (longlong)TStack_90.CurrentBitIndex * 0xc),iVar3,
                   param_4);
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3230557289177940533>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x235,
                       "GeometryCollection->HasAttribute(\"Level\", FGeometryCollection::TransformGroup)"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// GetChildBonesFromLevel @ 14403e6d0

void __cdecl
FGeometryCollectionClusteringUtility::GetChildBonesFromLevel
          (FGeometryCollection *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  TManagedArray<int> *pTVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res8;
  FName local_38 [2];
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x1f0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar5 = ::FName::FName(&local_res8,"Level");
  bVar3 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar5,FVar2);
  FVar2 = FTransformCollection::TransformGroup;
  if (bVar3) {
    pFVar5 = ::FName::FName(local_38,"Level");
    pTVar6 = FManagedArrayCollection::GetAttribute<int>
                       ((FManagedArrayCollection *)param_1,*pFVar5,FVar2);
    if (-1 < param_2) {
      while( true ) {
        uVar7 = (uint)~param_2 >> 0x1f;
        uVar4 = 0;
        if (param_2 < *(int *)&pTVar6->field_0x18) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar8 = (longlong)param_2;
        if (*(int *)(*(longlong *)&pTVar6->field_0x10 + lVar8 * 4) <= param_3) break;
        uVar4 = 0;
        if (param_2 < (int)param_1->_padding_) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(param_1->_padding_ + lVar8 * 4) == -1) break;
        uVar4 = 0;
        if (param_2 < (int)param_1->_padding_) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        param_2 = *(uint *)(param_1->_padding_ + lVar8 * 4);
      }
      RecursiveAddAllChildren
                ((TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                 &param_1->_padding_,param_2,param_4);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3230557289177940465>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x1f1,
                       "GeometryCollection->HasAttribute(\"Level\", FGeometryCollection::TransformGroup)"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetClusteredBonesWithCommonParent @ 14403e900

void __cdecl
FGeometryCollectionClusteringUtility::GetClusteredBonesWithCommonParent
          (FGeometryCollection *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3
          )

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint local_res10 [2];
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x1dc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar1 = &param_1->_padding_;
  uVar5 = 0;
  if (param_2 < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)((longlong)param_2 * 4 + *(longlong *)&(param_1->SimulationType).field_0x10) == 2) {
    uVar5 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res10[0] = 0;
    iVar2 = *(int *)((longlong)param_2 * 4 + param_1->_padding_);
    iVar6 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if ((int)local_res10[0] < iVar6) {
      do {
        lVar7 = (longlong)(int)local_res10[0];
        uVar5 = 0;
        if ((int)local_res10[0] < (int)param_1->_padding_) {
          uVar5 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar2 == *(int *)(param_1->_padding_ + lVar7 * 4)) {
          lVar7 = (longlong)(int)local_res10[0];
          uVar5 = 0;
          if ((int)local_res10[0] < *(int *)&(param_1->SimulationType).field_0x18) {
            uVar5 = ~local_res10[0] >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar7 * 4) == 2) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (param_3,(int *)local_res10);
          }
        }
        local_res10[0] = local_res10[0] + 1;
        iVar6 = (**(code **)(*plVar1 + 0x60))(plVar1);
      } while ((int)local_res10[0] < iVar6);
    }
  }
  return;
}

// GetLeafBones @ 14403ffd0

void __cdecl
FGeometryCollectionClusteringUtility::GetLeafBones
          (FManagedArrayCollection *param_1,int param_2,bool param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  longlong lVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint local_res10 [2];
  bool local_res18;
  undefined1 local_e8 [4];
  int local_e4;
  longlong *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  undefined4 local_44;
  
  local_res10[0] = param_2;
  local_res18 = param_3;
  if ((param_2 < 0) || (param_1 == (FManagedArrayCollection *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3230557289177940795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x33b,"BoneIndex >= 0 && Collection != nullptr");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_80 = FTransformCollection::ChildrenAttribute;
    local_78 = FTransformCollection::TransformGroup;
    pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
    pcVar11 = (char *)0x0;
    uVar10 = 0;
    pcVar12 = &pTVar8->field_0x10;
    if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar12 = pcVar11;
    }
    if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\x0e')) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(pcVar12 + 0x20);
      if ((lVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x306,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_70 = FGeometryCollection::SimulationTypeAttribute;
    local_68 = FTransformCollection::TransformGroup;
    pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
    pcVar12 = &pTVar8->field_0x10;
    if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pcVar12 = pcVar11;
    }
    if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\x05')) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(longlong *)(pcVar12 + 0x20);
      if ((lVar17 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x306,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((lVar9 != 0) && (lVar17 != 0)) {
      if (param_3) {
        lVar18 = (longlong)(int)local_res10[0];
        uVar13 = 0;
        if ((int)local_res10[0] < *(int *)(lVar17 + 0x18)) {
          uVar13 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar5 = *(int *)(*(longlong *)(lVar17 + 0x10) + lVar18 * 4) == 1;
      }
      else {
        lVar17 = (longlong)(int)local_res10[0];
        uVar13 = uVar10;
        if ((int)local_res10[0] < *(int *)(lVar9 + 0x18)) {
          uVar13 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar5 = *(int *)(*(longlong *)(lVar9 + 0x10) + 8 + lVar17 * 0x50) ==
                *(int *)(*(longlong *)(lVar9 + 0x10) + 0x34 + lVar17 * 0x50);
      }
      if (bVar5) {
        pFVar2 = (param_4->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
            ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
      }
      else {
        lVar17 = (longlong)(int)local_res10[0];
        uVar13 = 0;
        if ((int)local_res10[0] < *(int *)(lVar9 + 0x18)) {
          uVar13 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar17 = lVar17 * 0x50 + *(longlong *)(lVar9 + 0x10);
        if (0 < *(int *)(lVar17 + 8) - *(int *)(lVar17 + 0x34)) {
          lVar17 = (longlong)(int)local_res10[0];
          uVar13 = 0;
          uVar7 = uVar13;
          if ((int)local_res10[0] < *(int *)(lVar9 + 0x18)) {
            uVar7 = ~local_res10[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_d4 = 1;
          plVar15 = (longlong *)(lVar17 * 0x50 + *(longlong *)(lVar9 + 0x10));
          uVar7 = *(uint *)(plVar15 + 5);
          local_d0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
          uStack_c4 = uVar13;
          if (uVar7 != 0) {
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar14 = local_d0;
            }
            uVar16 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
            pcVar12 = pcVar11;
            uVar13 = 0;
            uVar10 = 0;
            while (uVar16 == 0) {
              iVar6 = (int)pcVar11;
              uVar13 = (int)pcVar12 + 0x20;
              pcVar12 = (char *)(ulonglong)uVar13;
              uVar10 = iVar6 + 1;
              pcVar11 = (char *)(ulonglong)uVar10;
              uStack_c4 = uVar7;
              if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
              goto LAB_1440403a1;
              uVar16 = *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar6 * 4 + 4);
            }
            uStack_d4 = -uVar16 & uVar16;
            uVar1 = (ulonglong)uStack_d4 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_e4 = (int)lVar9;
            uStack_c4 = (uVar13 - 1) + local_e4;
            if ((int)uVar7 < (int)uStack_c4) {
              uStack_c4 = uVar7;
            }
          }
LAB_1440403a1:
          uVar7 = *(uint *)(plVar15 + 5);
          uStack_bc = local_44;
          iStack_b8 = (int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34);
          uVar16 = uVar7 & 0xffffffe0;
          TStack_a8._padding_ = CONCAT44(uStack_d4,uVar10);
          uStack_c8 = 0xffffffff;
          TStack_a8.CurrentBitIndex = uStack_c4;
          TStack_a8.UnvisitedBitMask = 0xffffffff;
          iVar6 = (int)uVar7 >> 5;
          TStack_a8._28_4_ = local_44;
          TStack_a8.BaseBitIndex = uVar13;
          uStack_88 = CONCAT44(uStack_b4,iStack_b8);
          local_e0 = plVar15;
          uStack_d8 = uVar10;
          local_c0 = uVar13;
          local_b0 = plVar15;
          TStack_a8.Array = local_d0;
          if (((int)uVar7 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar5 = local_res18;
          uVar10 = *(uint *)(plVar15 + 5);
          if (uVar7 != uVar10) {
            pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
            }
            uVar13 = -1 << ((byte)uVar7 & 0x1f) &
                     *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
            while (uVar13 == 0) {
              lVar9 = (longlong)iVar6;
              uVar16 = uVar16 + 0x20;
              iVar6 = iVar6 + 1;
              uVar7 = uVar10;
              if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
              goto LAB_1440404c0;
              uVar13 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            uVar7 = (int)lVar9 + -1 + uVar16;
            if ((int)uVar10 < (int)uVar7) {
              uVar7 = uVar10;
            }
          }
LAB_1440404c0:
          while( true ) {
            plVar4 = local_b0;
            if ((int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34) != (int)uStack_88) {
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
            }
            if (((TStack_a8.CurrentBitIndex == uVar7) &&
                (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2))) &&
               (plVar4 == plVar15)) break;
            GetLeafBones(param_1,*(int *)(*plVar4 + (longlong)TStack_a8.CurrentBitIndex * 0xc),bVar5
                         ,param_4);
            TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
          }
        }
      }
    }
  }
  return;
}

// GetParentOfBoneAtSpecifiedLevel @ 144040bf0

int __cdecl
FGeometryCollectionClusteringUtility::GetParentOfBoneAtSpecifiedLevel
          (FGeometryCollection *param_1,int param_2,int param_3,bool param_4)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  TManagedArray<int> *pTVar7;
  uint uVar8;
  longlong lVar9;
  FName local_res8;
  FName local_38 [2];
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x255,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  FVar2 = FTransformCollection::TransformGroup;
  pFVar6 = ::FName::FName(&local_res8,"Level");
  bVar3 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar6,FVar2);
  FVar2 = FTransformCollection::TransformGroup;
  if (bVar3) {
    pFVar6 = ::FName::FName(local_38,"Level");
    pTVar7 = FManagedArrayCollection::GetAttribute<int>
                       ((FManagedArrayCollection *)param_1,*pFVar6,FVar2);
    if ((-1 < param_2) &&
       (iVar4 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_), param_2 < iVar4)) {
      do {
        uVar8 = (uint)~param_2 >> 0x1f;
        uVar5 = 0;
        if (param_2 < *(int *)&pTVar7->field_0x18) {
          uVar5 = uVar8;
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
        lVar9 = (longlong)param_2;
        if (*(int *)(*(longlong *)&pTVar7->field_0x10 + lVar9 * 4) <= param_3) {
          if (!param_4) {
            return param_2;
          }
          uVar5 = 0;
          if (param_2 < *(int *)&pTVar7->field_0x18) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          if (*(int *)(*(longlong *)&pTVar7->field_0x10 + lVar9 * 4) == param_3) {
            return param_2;
          }
          uVar5 = 0;
          if (param_2 < *(int *)&(param_1->SimulationType).field_0x18) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar9 * 4) == 2) {
            return param_2;
          }
          uVar5 = 0;
          if (param_2 < (int)param_1->_padding_) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          if (*(int *)(param_1->_padding_ + 8 + lVar9 * 0x50) !=
              *(int *)(param_1->_padding_ + 0x34 + lVar9 * 0x50)) {
            uVar5 = 0;
            if (param_2 < *(int *)&pTVar7->field_0x18) {
              uVar5 = uVar8;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            if (*(int *)(*(longlong *)&pTVar7->field_0x10 + lVar9 * 4) + 1 == param_3) {
              return param_2;
            }
          }
        }
        uVar5 = 0;
        if (param_2 < (int)param_1->_padding_) {
          uVar5 = uVar8;
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
        if (*(int *)(param_1->_padding_ + lVar9 * 4) == -1) {
          return param_2;
        }
        uVar5 = 0;
        if (param_2 < (int)param_1->_padding_) {
          uVar5 = uVar8;
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
        param_2 = *(uint *)(param_1->_padding_ + lVar9 * 4);
      } while( true );
    }
    iVar4 = (int)FManagedArrayCollection::Invalid;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3230557289177940567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,599,
                       "GeometryCollection->HasAttribute(\"Level\", FGeometryCollection::TransformGroup)"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    iVar4 = -1;
  }
  return iVar4;
}

// GetRootBones @ 144041000

void __cdecl
FGeometryCollectionClusteringUtility::GetRootBones
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint local_18 [4];
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x1c4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar6 = &param_1->_padding_;
  local_18[0] = 0;
  iVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
  if ((int)local_18[0] < iVar4) {
    do {
      lVar7 = (longlong)(int)local_18[0];
      uVar5 = 0;
      if ((int)local_18[0] < (int)param_1->_padding_) {
        uVar5 = ~local_18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(param_1->_padding_ + lVar7 * 4) == (int)FManagedArrayCollection::Invalid) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18[0];
      }
      local_18[0] = local_18[0] + 1;
      iVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
    } while ((int)local_18[0] < iVar4);
  }
  return;
}

// IsARootBone @ 144046aa0

bool __cdecl
FGeometryCollectionClusteringUtility::IsARootBone(FGeometryCollection *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x1d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar5 = (int)FManagedArrayCollection::Invalid;
  uVar4 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)(param_1->_padding_ + (longlong)param_2 * 4) == iVar5;
}

// MoveUpOneHierarchyLevel @ 1440489c0

void __cdecl
FGeometryCollectionClusteringUtility::MoveUpOneHierarchyLevel
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  FCollectionTransformFacade local_128;
  
  if (param_1 == (FGeometryCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeometryCollection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x35c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  local_res10 = pFVar10 + (longlong)iVar1 * 4;
  while( true ) {
    pFVar5 = local_res10;
    if (param_2->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar5) break;
    uVar2 = *(uint *)pFVar10;
    uVar7 = 0;
    if ((int)uVar2 < (int)param_1->_padding_) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = *(uint *)(param_1->_padding_ + (longlong)(int)uVar2 * 4);
    uVar8 = 0;
    if ((int)uVar2 < (int)param_1->_padding_) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)(param_1->_padding_ + (longlong)(int)uVar2 * 4) !=
        (int)FManagedArrayCollection::Invalid) {
      uVar8 = 0;
      if ((int)uVar7 < (int)param_1->_padding_) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar3 = *(int *)(param_1->_padding_ + (longlong)(int)uVar7 * 4);
      if (iVar3 != FManagedArrayCollection::Invalid) {
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 0;
        local_138.ArrayMax = 0;
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_138.AllocatorInstance,&local_138.ArrayMax);
        local_138.ArrayNum = iVar9 + 1;
        *(uint *)(local_138.AllocatorInstance.Data + (longlong)iVar9 * 4) = uVar2;
        if (param_1 != (FGeometryCollection *)0x0) {
          GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                    (&local_128,(FManagedArrayCollection *)param_1);
          GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
                    (&local_128,iVar3,&local_138);
        }
        UpdateHierarchyLevelOfChildren(param_1,iVar3);
        RecursivelyUpdateChildBoneNames
                  (iVar3,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                         &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,false);
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
      }
    }
    pFVar10 = pFVar10 + 4;
  }
  ValidateResults(param_1);
  return;
}

// NodeExistsOnThisBranch @ 14404b720

bool __cdecl
FGeometryCollectionClusteringUtility::NodeExistsOnThisBranch
          (FGeometryCollection *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 local_res18 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_2 == param_3) {
LAB_14404b9dc:
    bVar5 = true;
  }
  else {
    iVar9 = 0;
    uVar7 = 0;
    if (param_3 < (int)param_1->_padding_) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar15 = (longlong)param_3 * 0x50;
    if (0 < *(int *)(param_1->_padding_ + 8 + lVar15) - *(int *)(param_1->_padding_ + 0x34 + lVar15)
       ) {
      uVar7 = 0;
      if (param_3 < (int)param_1->_padding_) {
        uVar7 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = 1;
      plVar14 = (longlong *)(param_1->_padding_ + lVar15);
      iVar3 = (int)plVar14[5];
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
      iVar12 = 0;
      iVar8 = 0;
      if (iVar3 != 0) {
        pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar13 = pTVar2;
        }
        uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
        while (uVar11 == 0) {
          lVar15 = (longlong)iVar9;
          iVar12 = iVar12 + 0x20;
          iVar9 = iVar9 + 1;
          iVar8 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14404b880;
          uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uVar7 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uVar7 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar8 = iVar12 + -1 + (int)lVar15;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_14404b880:
      uVar11 = *(uint *)(plVar14 + 5);
      uVar10 = uVar11 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar7,iVar9);
      TStack_60.CurrentBitIndex = iVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar11 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar12;
      uStack_40 = CONCAT44(uStack_6c,(int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34));
      TStack_60.Array = pTVar2;
      if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = *(uint *)(plVar14 + 5);
      if (uVar11 != uVar7) {
        pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar13 = pTVar2;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                 *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar11 == 0) {
          lVar15 = (longlong)iVar9;
          uVar10 = uVar10 + 0x20;
          iVar9 = iVar9 + 1;
          uVar11 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_14404b980;
          uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar11 = (int)lVar15 + -1 + uVar10;
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
      }
LAB_14404b980:
      do {
        if ((int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34) != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar2)) break;
        bVar5 = NodeExistsOnThisBranch
                          (param_1,param_2,
                           *(int *)(*plVar14 + (longlong)TStack_60.CurrentBitIndex * 0xc));
        if (bVar5) goto LAB_14404b9dc;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while( true );
    }
    bVar5 = false;
  }
  return bVar5;
}

// PickBestNodeToMergeTo @ 14404bab0

int __cdecl
FGeometryCollectionClusteringUtility::PickBestNodeToMergeTo
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res18 [8];
  FCollectionHierarchyFacade local_d8;
  
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_d8,param_1);
  bVar4 = Chaos::Facades::FCollectionHierarchyFacade::IsValid(&local_d8);
  if (bVar4) {
    bVar4 = Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(&local_d8);
    if (bVar4) {
      iVar9 = -1;
      pFVar7 = (param_2->AllocatorInstance).Data;
      iVar8 = -1;
      iVar2 = param_2->ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar7 == pFVar1) break;
        iVar3 = *(int *)pFVar7;
        pTVar6 = Chaos::Facades::FCollectionHierarchyFacade::FindChildren(&local_d8,iVar3);
        iVar5 = Chaos::Facades::FCollectionHierarchyFacade::GetInitialLevel(&local_d8,iVar3);
        if (((pTVar6 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) &&
            (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34)) &&
           ((iVar5 < iVar8 || (iVar8 == -1)))) {
          iVar8 = iVar5;
          iVar9 = iVar3;
        }
        pFVar7 = pFVar7 + 4;
      }
      return iVar9;
    }
  }
  return -1;
}

// RecursiveAddAllChildren @ 14404cca0

void __cdecl
FGeometryCollectionClusteringUtility::RecursiveAddAllChildren
          (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_1,
          int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_ac;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res10[0] = param_2;
  local_res18 = param_3;
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_3,(int *)local_res10);
  lVar12 = (longlong)(int)local_res10[0];
  iVar9 = 0;
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)&param_1->field_0x18) {
    uVar7 = ~local_res10[0] >> 0x1f;
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
  uVar7 = 1;
  plVar15 = (longlong *)(lVar12 * 0x50 + *(longlong *)&param_1->field_0x10);
  iVar13 = 0;
  iVar3 = (int)plVar15[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    iVar13 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)iVar9;
      iVar13 = iVar13 + 0x20;
      iVar9 = iVar9 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14404cdad;
      uVar11 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar8 = iVar13 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14404cdad:
  uVar11 = *(uint *)(plVar15 + 5);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar9);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_70._28_4_ = local_ac;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,(int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34));
  TStack_70.Array = pTVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_res18;
  uVar7 = *(uint *)(plVar15 + 5);
  if (uVar11 != uVar7) {
    pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)plVar15[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar15[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar12 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14404ceb0;
      uVar11 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar11 = (int)lVar12 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14404ceb0:
  while( true ) {
    if ((int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34) != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) && (TStack_70.Array == pTVar1)) break;
    RecursiveAddAllChildren
              (param_1,*(int *)(*plVar15 + (longlong)TStack_70.CurrentBitIndex * 0xc),pTVar5);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// RecursivelyUpdateChildBoneNames @ 14404cf20

void __cdecl
FGeometryCollectionClusteringUtility::RecursivelyUpdateChildBoneNames
          (int param_1,
          TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_2,
          TManagedArray<FString> *param_3,bool param_4)

{
  ulonglong uVar1;
  short *psVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  short *psVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  int iVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 local_res8 [8];
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_res10;
  uint local_1b8;
  FString local_1b0;
  FString *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  int local_168;
  int local_164;
  longlong *local_160;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  FString local_150;
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  local_res10 = param_2;
  if ((param_1 < 0) ||
     (iVar6 = (**(code **)(*(longlong *)param_2 + 0x60))(param_2), iVar6 <= param_1)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3230557289177940601>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x279,"BoneIndex > -1 && BoneIndex < Children.Num()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar18 = (uint)~param_1 >> 0x1f;
    uVar16 = 0;
    if (param_1 < *(int *)&param_2->field_0x18) {
      uVar16 = uVar18;
    }
    if ((uVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar24 = (longlong)param_1 * 0x50;
    if (0 < *(int *)(*(longlong *)&param_2->field_0x10 + 8 + lVar24) -
            *(int *)(*(longlong *)&param_2->field_0x10 + 0x34 + lVar24)) {
      uVar16 = 0;
      if (param_1 < *(int *)&param_3->field_0x18) {
        uVar16 = uVar18;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1a0 = (FString *)((longlong)param_1 * 0x10 + *(longlong *)&param_3->field_0x10);
      uVar16 = 0;
      if (param_1 < *(int *)&param_2->field_0x18) {
        uVar16 = uVar18;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar17 = (longlong *)(*(longlong *)&param_2->field_0x10 + lVar24);
      iStack_138 = 0;
      iVar6 = (int)plVar17[5];
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar17 + 2);
      iVar21 = 1;
      local_120 = 0;
      iStack_124 = 0;
      uStack_134 = 1;
      if (iVar6 != 0) {
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = pTVar22;
        }
        uStack_134 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
        while (uStack_134 == 0) {
          lVar24 = (longlong)iStack_138;
          local_120 = local_120 + 0x20;
          iStack_138 = iStack_138 + 1;
          iStack_124 = iVar6;
          uStack_134 = 1;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
          goto LAB_14404d10d;
          uStack_134 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar24 * 4 + 4);
        }
        uStack_134 = -uStack_134 & uStack_134;
        uVar1 = (ulonglong)uStack_134 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_168 = (int)lVar24;
        iStack_124 = local_168 + -1 + local_120;
        if (iVar6 < iStack_124) {
          iStack_124 = iVar6;
        }
      }
LAB_14404d10d:
      local_1b8 = *(uint *)(plVar17 + 5);
      uStack_11c = local_44;
      iStack_118 = (int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34);
      uVar16 = local_1b8 & 0xffffffe0;
      uStack_128 = 0xffffffff;
      TStack_108._padding_ = CONCAT44(uStack_134,iStack_138);
      TStack_108.CurrentBitIndex = iStack_124;
      TStack_108.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)local_1b8 >> 5;
      TStack_108._28_4_ = local_44;
      TStack_108.BaseBitIndex = local_120;
      uStack_e8 = CONCAT44(uStack_114,iStack_118);
      local_160 = plVar17;
      local_158 = pTVar22;
      local_140 = plVar17;
      local_130 = pTVar22;
      local_110 = plVar17;
      TStack_108.Array = pTVar22;
      if ((((int)local_1b8 < 0) || (iVar6 < (int)local_1b8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = *(uint *)(plVar17 + 5);
      if (local_1b8 != uVar18) {
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar17[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar17[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = pTVar22;
        }
        uVar19 = -1 << ((byte)local_1b8 & 0x1f) &
                 *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar19 == 0) {
          lVar24 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          local_1b8 = uVar18;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14404d220;
          uVar19 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar24 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_164 = (int)lVar24;
        local_1b8 = local_164 + -1 + uVar16;
        if ((int)uVar18 < (int)local_1b8) {
          local_1b8 = uVar18;
        }
      }
LAB_14404d220:
      while( true ) {
        plVar17 = local_110;
        if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_108.CurrentBitIndex == local_1b8) && (TStack_108.Array == pTVar22)) &&
           (plVar17 == local_160)) break;
        local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.Data.ArrayNum = 0;
        local_1b0.Data.ArrayMax = 0;
        uVar16 = *(uint *)(*plVar17 + (longlong)TStack_108.CurrentBitIndex * 0xc);
        ::FString::AppendInt(&local_1b0,iVar21);
        uVar23 = ~uVar16 >> 0x1f;
        uVar19 = 0;
        uVar18 = uVar19;
        if ((int)uVar16 < *(int *)&param_3->field_0x18) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar24 = (longlong)(int)uVar16 * 0x10;
        psVar2 = *(short **)(lVar24 + *(longlong *)&param_3->field_0x10);
        for (psVar14 = psVar2;
            psVar14 != psVar2 + *(int *)(lVar24 + 8 + *(longlong *)&param_3->field_0x10);
            psVar14 = psVar14 + 1) {
          if (*psVar14 == 0x5f) {
            uVar18 = (uint)((longlong)psVar14 - (longlong)psVar2 >> 1);
            goto LAB_14404d30b;
          }
        }
        uVar18 = 0xffffffff;
LAB_14404d30b:
        if ((param_4) || ((int)uVar18 < 1)) {
          ::FString::FString(local_70,"_");
          ::FString::ConcatFF(&local_80,local_1a0,local_70);
          ::FString::ConcatFF(&local_178,&local_80,&local_1b0);
          FVar15.Data = local_178.Data.AllocatorInstance.Data;
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = local_178.Data.ArrayNum;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          FVar10.Data = local_70[0].Data.AllocatorInstance.Data;
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
            FVar10.Data = local_70[0].Data.AllocatorInstance.Data;
          }
        }
        else {
          uVar7 = uVar19;
          if ((int)uVar16 < *(int *)&param_3->field_0x18) {
            uVar7 = uVar23;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = *(int *)(*(longlong *)&param_3->field_0x10 + 8 + lVar24);
          uVar7 = iVar6 - 1;
          if (iVar6 == 0) {
            uVar7 = uVar19;
          }
          if ((int)uVar18 < (int)uVar7) {
            uVar7 = uVar18;
          }
          uVar18 = uVar19;
          if (0 < (int)uVar7) {
            uVar18 = uVar7;
          }
          if (iVar6 == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)(*(longlong *)&param_3->field_0x10 + lVar24);
          }
          ::FString::ConstructFromPtrSize(&local_150,pwVar11,uVar18);
          pFVar3 = (local_1a0->Data).AllocatorInstance.Data;
          iVar6 = (local_1a0->Data).ArrayNum;
          for (pFVar12 = pFVar3; pFVar12 != pFVar3 + (longlong)iVar6 * 2; pFVar12 = pFVar12 + 2) {
            if (*(wchar_t *)pFVar12 == L'_') {
              iVar13 = (int)((longlong)pFVar12 - (longlong)pFVar3 >> 1);
              if (0 < iVar13) {
                uVar18 = iVar6 - 1;
                if (iVar6 == 0) {
                  uVar18 = 0;
                }
                uVar7 = uVar18 - iVar13;
                pFVar12 = (FScriptContainerElement *)L"";
                if (iVar6 != 0) {
                  pFVar12 = pFVar3;
                }
                uVar8 = uVar18;
                if ((int)uVar7 < (int)uVar18) {
                  uVar8 = uVar7;
                }
                if (0 < (int)uVar8) {
                  uVar19 = uVar8;
                }
                ::FString::FString(&local_b0,
                                   (wchar_t *)
                                   (pFVar12 + ((longlong)(int)uVar18 - (longlong)(int)uVar19) * 2));
                ::FString::FString(&local_c0,"_");
                ::FString::ConcatFF(&local_d0,&local_150,&local_b0);
                ::FString::ConcatFF(&local_e0,&local_d0,&local_c0);
                ::FString::ConcatFF(&local_198,&local_e0,&local_1b0);
                FVar15.Data = local_198.Data.AllocatorInstance.Data;
                local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar6 = local_198.Data.ArrayNum;
                local_198.Data.ArrayNum = 0;
                local_198.Data.ArrayMax = 0;
                if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                }
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
                FVar9.Data = local_b0.Data.AllocatorInstance.Data;
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                  FVar9.Data = local_b0.Data.AllocatorInstance.Data;
                }
                goto LAB_14404d42a;
              }
              break;
            }
          }
          ::FString::FString(&local_90,"_");
          ::FString::ConcatFF(&local_a0,&local_150,&local_90);
          ::FString::ConcatFF(&local_188,&local_a0,&local_1b0);
          FVar15.Data = local_188.Data.AllocatorInstance.Data;
          local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = local_188.Data.ArrayNum;
          local_188.Data.ArrayNum = 0;
          local_188.Data.ArrayMax = 0;
          FVar9.Data = local_90.Data.AllocatorInstance.Data;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            FVar9.Data = local_90.Data.AllocatorInstance.Data;
          }
LAB_14404d42a:
          FVar10.Data = local_150.Data.AllocatorInstance.Data;
          if (FVar9.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar9.Data);
            FVar10.Data = local_150.Data.AllocatorInstance.Data;
          }
        }
        if (FVar10.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar10.Data);
        }
        uVar18 = 0;
        if ((int)uVar16 < *(int *)&param_3->field_0x18) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar13 = 0;
        }
        ::FString::AssignRange
                  ((FString *)(*(longlong *)&param_3->field_0x10 + lVar24),(wchar_t *)FVar15.Data,
                   iVar13);
        RecursivelyUpdateChildBoneNames(uVar16,local_res10,param_3,param_4);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
        pTVar22 = local_158;
        iVar21 = iVar21 + 1;
      }
    }
  }
  return;
}

// RecursivelyUpdateHierarchyLevelOfChildren @ 14404d6b0

void __cdecl
FGeometryCollectionClusteringUtility::RecursivelyUpdateHierarchyLevelOfChildren
          (TManagedArray<int> *param_1,
          TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_2,int param_3
          )

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar5 = (**(code **)(*(longlong *)param_1 + 0x60))();
  if ((iVar5 <= param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentElement < Levels.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x2c8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (**(code **)(*(longlong *)param_2 + 0x60))(param_2);
  if ((iVar5 <= param_3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentElement < Children.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x2c9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  if (param_3 < *(int *)&param_2->field_0x18) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = 0;
  iVar12 = 0;
  plVar14 = (longlong *)((longlong)param_3 * 0x50 + *(longlong *)&param_2->field_0x10);
  uVar6 = 1;
  iVar5 = (int)plVar14[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
  iVar7 = 0;
  if (iVar5 != 0) {
    pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14404d81d;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar12;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14404d81d:
  uVar9 = *(uint *)(plVar14 + 5);
  uVar13 = uVar9 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar10);
  TStack_90.CurrentBitIndex = iVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar12;
  uStack_70 = CONCAT44(uStack_9c,(int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34));
  TStack_90.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)(plVar14 + 5);
  if (uVar9 != uVar6) {
    pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14404d930;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14404d930:
  while( true ) {
    if ((int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34) != (int)uStack_70) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_90.CurrentBitIndex == uVar9) && (TStack_90.Array == pTVar1)) {
      return;
    }
    uVar6 = *(uint *)(*plVar14 + (longlong)TStack_90.CurrentBitIndex * 0xc);
    uVar13 = 0;
    if (param_3 < *(int *)&param_1->field_0x18) {
      uVar13 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)(*(longlong *)&param_1->field_0x10 + (longlong)param_3 * 4);
    uVar13 = 0;
    if ((int)uVar6 < *(int *)&param_1->field_0x18) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    *(int *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar6 * 4) = iVar5 + 1;
    RecursivelyUpdateHierarchyLevelOfChildren(param_1,param_2,uVar6);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// RemoveClustersOfOnlyOneChild @ 14404e420

bool __cdecl
FGeometryCollectionClusteringUtility::RemoveClustersOfOnlyOneChild(FGeometryCollection *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  uint uVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  bool local_res8;
  uint local_1d8 [2];
  ForAnyElementType local_1d0;
  int local_1c8;
  int local_1c4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c0;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  longlong *local_188;
  uint uStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  undefined4 local_13c;
  FCollectionTransformFacade local_138;
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x3ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  bVar7 = false;
  local_res8 = false;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c4 = 0;
  do {
    local_1c8 = 0;
    if ((local_1c4 < 0) && (local_1c4 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_1d0,0,&local_1c4);
    }
    local_1d8[0] = 0;
    iVar9 = (**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_);
    bVar13 = bVar7;
    for (; (int)local_1d8[0] < iVar9; local_1d8[0] = local_1d8[0] + 1) {
      uVar16 = 0;
      lVar11 = (longlong)(int)local_1d8[0];
      uVar14 = 0;
      uVar10 = uVar14;
      if ((int)local_1d8[0] < (int)param_1->_padding_) {
        uVar10 = ~local_1d8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar4 = *(int *)(param_1->_padding_ + lVar11 * 4);
      if (iVar4 != -1) {
        lVar11 = (longlong)(int)local_1d8[0];
        uVar10 = uVar14;
        if ((int)local_1d8[0] < *(int *)&(param_1->SimulationType).field_0x18) {
          uVar10 = ~local_1d8[0] >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar11 * 4) == 2) {
          lVar11 = (longlong)(int)local_1d8[0];
          uVar10 = uVar14;
          if ((int)local_1d8[0] < (int)param_1->_padding_) {
            uVar10 = ~local_1d8[0] >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (*(int *)(lVar11 * 0x50 + 8 + param_1->_padding_) -
              *(int *)(lVar11 * 0x50 + 0x34 + param_1->_padding_) == 1) {
            if (((local_1d0.Data <= (FScriptContainerElement *)local_1d8) &&
                ((FScriptContainerElement *)local_1d8 < local_1d0.Data + (longlong)local_1c4 * 4))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            if (local_1c8 == local_1c4) {
              local_1c8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_1d0,&local_1c4);
            }
            iVar1 = local_1c8 + 1;
            *(uint *)(local_1d0.Data + (longlong)local_1c8 * 4) = local_1d8[0];
            lVar11 = (longlong)(int)local_1d8[0];
            uVar10 = uVar14;
            if ((int)local_1d8[0] < (int)param_1->_padding_) {
              uVar10 = ~local_1d8[0] >> 0x1f;
            }
            local_1c8 = iVar1;
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            plVar12 = (longlong *)(lVar11 * 0x50 + param_1->_padding_);
            local_1c0.ArrayNum = 0;
            local_1c0.ArrayMax = 0;
            uVar10 = (int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34);
            if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
            }
            if (0 < (int)uVar10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar10,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
            }
            TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar12 + 2);
            uVar10 = *(uint *)(plVar12 + 5);
            uStack_17c = 1;
            local_168 = uVar14;
            uStack_16c = uVar16;
            if (uVar10 != 0) {
              pTVar15 = TStack_1a8.Array;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar12[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)plVar12[4];
              }
              uVar5 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
              local_168 = uVar16;
              uVar14 = uVar16;
              while (uVar5 == 0) {
                lVar11 = (longlong)(int)uVar14;
                local_168 = local_168 + 0x20;
                uVar14 = uVar14 + 1;
                uStack_16c = uVar10;
                if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
                goto LAB_14404e7f3;
                uVar5 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
              }
              uStack_17c = -uVar5 & uVar5;
              uVar3 = (ulonglong)uStack_17c * 2 + 1;
              lVar11 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              uStack_16c = (local_168 - 1) + (int)lVar11;
              if ((int)uVar10 < (int)uStack_16c) {
                uStack_16c = uVar10;
              }
            }
LAB_14404e7f3:
            uStack_170 = 0xffffffff;
            uStack_164 = local_13c;
            TStack_1a8._padding_ = CONCAT44(uStack_17c,uVar14);
            TStack_1a8.CurrentBitIndex = uStack_16c;
            TStack_1a8.UnvisitedBitMask = 0xffffffff;
            TStack_1a8._28_4_ = local_13c;
            TStack_1a8.BaseBitIndex = local_168;
            local_1b0 = plVar12;
            local_188 = plVar12;
            uStack_180 = uVar14;
            local_178 = TStack_1a8.Array;
            uVar14 = uStack_16c;
            if ((int)uStack_16c < (int)uVar10) {
              do {
                pFVar2 = (FScriptContainerElement *)(*local_1b0 + (longlong)(int)uVar14 * 0xc);
                if (((local_1c0.AllocatorInstance.Data <= pFVar2) &&
                    (pFVar2 < local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayMax * 4))
                   && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                if (local_1c0.ArrayNum == local_1c0.ArrayMax) {
                  local_1c0.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_1c0.AllocatorInstance,&local_1c0.ArrayMax);
                }
                *(undefined4 *)(local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayNum * 4)
                     = *(undefined4 *)pFVar2;
                TStack_1a8.UnvisitedBitMask =
                     TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
                local_1c0.ArrayNum = local_1c0.ArrayNum + 1;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
                uVar14 = TStack_1a8.CurrentBitIndex;
              } while (TStack_1a8.CurrentBitIndex < (TStack_1a8.Array)->NumBits);
            }
            if (param_1 != (FGeometryCollection *)0x0) {
              GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                        (&local_138,(FManagedArrayCollection *)param_1);
              GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
                        (&local_138,iVar4,&local_1c0);
            }
            if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.AllocatorInstance.Data);
            }
            UpdateHierarchyLevelOfChildren(param_1,iVar4);
            RecursivelyUpdateChildBoneNames
                      (iVar4,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                              *)&param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,
                       false);
          }
        }
      }
      bVar13 = local_res8;
    }
    if (local_1c8 == 0) break;
    (**(code **)(param_1->_padding_ + 0x28))
              (param_1,&FTransformCollection::TransformGroup,&local_1d0,0x100);
    bVar7 = true;
    bVar13 = true;
    local_res8 = true;
  } while (local_1c8 != 0);
  if (local_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data);
  }
  return bVar13;
}

// RemoveDanglingClusters @ 14404f040

bool __cdecl
FGeometryCollectionClusteringUtility::RemoveDanglingClusters(FGeometryCollection *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_30;
  
  if ((param_1 == (FGeometryCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryCollection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x3d5,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = (**(code **)(param_1->_padding_ + 0x60))();
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_48[0] = 0;
  if (0 < iVar5) {
    do {
      uVar2 = local_48[0];
      uVar6 = 0;
      if ((int)local_48[0] < *(int *)&(param_1->SimulationType).field_0x18) {
        uVar6 = ~local_48[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + (longlong)(int)uVar2 * 4) ==
          2) {
        local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.ArrayNum = 0;
        local_30.ArrayMax = 0;
        GetLeafBones((FManagedArrayCollection *)param_1,local_48[0],true,&local_30);
        if (local_30.ArrayNum == 0) {
          if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)local_38._4_4_ * 4))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          iVar7 = (int)local_38;
          if ((int)local_38 == local_38._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_40,(int *)((longlong)&local_38 + 4));
          }
          local_38 = CONCAT44(local_38._4_4_,iVar7 + 1);
          *(uint *)(local_40.Data + (longlong)iVar7 * 4) = local_48[0];
        }
        if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.AllocatorInstance.Data);
        }
      }
      local_48[0] = local_48[0] + 1;
    } while ((int)local_48[0] < iVar5);
    if ((int)local_38 != 0) {
      (**(code **)(param_1->_padding_ + 0x28))
                (param_1,&FTransformCollection::TransformGroup,&local_40,0x100);
      bVar3 = true;
      goto LAB_14404f228;
    }
  }
  bVar3 = false;
LAB_14404f228:
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return bVar3;
}

// RenameBone @ 14404fd30

void __cdecl
FGeometryCollectionClusteringUtility::RenameBone
          (FGeometryCollection *param_1,int param_2,FString *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::operator=((FString *)((longlong)param_2 * 0x10 + param_1->_padding_),param_3);
  if (param_4) {
    RecursivelyUpdateChildBoneNames
              (param_2,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                       &param_1->_padding_,(TManagedArray<FString> *)&param_1->_padding_,true);
  }
  return;
}

// ResetSliderTransforms @ 144050140

void __cdecl
FGeometryCollectionClusteringUtility::ResetSliderTransforms
          (TManagedArray<UE::Math::TTransform<double>_> *param_1,
          TManagedArray<UE::Math::TTransform<double>_> *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar22 = 0;
  iVar20 = (**(code **)(*(longlong *)param_2 + 0x60))(param_2);
  if (0 < iVar20) {
    lVar23 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar22 < *(int *)&param_1->field_0x18) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&param_1->field_0x10;
      puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar23);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar23);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      puVar1 = (undefined4 *)(lVar3 + lVar23);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar23);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0x50 + lVar23);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar23);
      uVar17 = *puVar2;
      uVar18 = puVar2[1];
      uVar21 = 0;
      if ((int)uVar22 < *(int *)&param_2->field_0x18) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)&param_2->field_0x10;
      uVar22 = uVar22 + 1;
      puVar1 = (undefined4 *)(lVar3 + lVar23);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar23);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar23);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar23);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar23);
      *puVar2 = uVar17;
      puVar2[1] = uVar18;
      local_18 = (undefined4)uVar15;
      uStack_14 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uStack_10 = (undefined4)uVar16;
      uStack_c = (undefined4)((ulonglong)uVar16 >> 0x20);
      puVar1 = (undefined4 *)(lVar3 + 0x50 + lVar23);
      *puVar1 = local_18;
      puVar1[1] = uStack_14;
      puVar1[2] = uStack_10;
      puVar1[3] = uStack_c;
      lVar23 = lVar23 + 0x60;
      iVar20 = (**(code **)(*(longlong *)param_2 + 0x60))(param_2);
    } while ((int)uVar22 < iVar20);
  }
  return;
}

// UpdateHierarchyLevelOfChildren @ 144053940

void __cdecl
FGeometryCollectionClusteringUtility::UpdateHierarchyLevelOfChildren
          (FManagedArrayCollection *param_1,int param_2)

{
  FCollectionHierarchyFacade local_b8;
  
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_b8,param_1);
  Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_b8);
  return;
}

// UpdateHierarchyLevelOfChildren @ 144053970

void __cdecl
FGeometryCollectionClusteringUtility::UpdateHierarchyLevelOfChildren
          (FGeometryCollection *param_1,int param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TManagedArray<int> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FName local_78;
  FName local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  FConstructionParameters local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  FVar5 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_res18,"Level");
  bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar5);
  FVar5 = FTransformCollection::TransformGroup;
  if (!bVar6) {
    local_70.ComparisonIndex.Value = 0;
    local_70.Number = 0;
    local_68._0_1_ = true;
    local_68._1_1_ = false;
    pFVar8 = ::FName::FName(&local_res20,"Level");
    local_58.GroupIndexDependency = local_70;
    FVar3 = *pFVar8;
    local_58.Saved = local_68._0_1_;
    local_58.bAllowCircularDependency = local_68._1_1_;
    local_58._10_2_ = uStack_66;
    bVar6 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,FVar3,FVar5);
    if (!bVar6) {
      FManagedArrayCollection::AddNewAttributeImpl<int>
                ((FManagedArrayCollection *)param_1,FVar3,FVar5,&local_58);
    }
    FManagedArrayCollection::ModifyAttribute<int>((FManagedArrayCollection *)param_1,FVar3,FVar5);
  }
  FVar5 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_78,"Level");
  pTVar9 = FManagedArrayCollection::ModifyAttribute<int>
                     ((FManagedArrayCollection *)param_1,*pFVar8,FVar5);
  plVar1 = &param_1->_padding_;
  iVar7 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
  if (iVar7 <= param_2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentElement < Levels.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x2ad,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (**(code **)(*plVar1 + 0x60))(plVar1);
  if (iVar7 <= param_2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentElement < Children.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                       ,0x2ae,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 != -1) {
    RecursivelyUpdateHierarchyLevelOfChildren
              (pTVar9,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                      plVar1,param_2);
    return;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetRootBones(param_1,&local_48);
  iVar7 = local_48.ArrayNum;
  uVar10 = (ulonglong)local_48.ArrayNum;
  pFVar2 = local_48.AllocatorInstance.Data + uVar10 * 4;
  FVar11.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar7) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar11.Data == pFVar2) break;
    RecursivelyUpdateHierarchyLevelOfChildren
              (pTVar9,(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                      plVar1,*(int *)FVar11.Data);
    uVar10 = local_48._8_8_ & 0xffffffff;
    FVar11.Data = FVar11.Data + 4;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ValidateResults @ 144053fc0

void __cdecl FGeometryCollectionClusteringUtility::ValidateResults(FGeometryCollection *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (ChaosValidateResultsOfEditOperations == 0) {
    return;
  }
  uVar6 = 0;
  iVar7 = 0;
  plVar1 = &param_1->_padding_;
  iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)param_1->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = iVar7 + 1;
      if (*(int *)(lVar8 + param_1->_padding_) != (int)FManagedArrayCollection::Invalid) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
      iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while ((int)uVar6 < iVar4);
    if (iVar7 == 1) goto LAB_1440540b3;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("NumRootNodes == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                     ,0x332,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1440540b3:
  bVar3 = FGeometryCollection::HasContiguousFaces(param_1);
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3230557289177940788>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x334,"GeometryCollection->HasContiguousFaces()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FGeometryCollection::HasContiguousVertices(param_1);
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3230557289177940789>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionClusteringUtility.cpp"
                         ,0x335,"GeometryCollection->HasContiguousVertices()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

