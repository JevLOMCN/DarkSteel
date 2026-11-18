// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 19

// FindOrAddImpl<FHashedName_const_&> @ 145d05d40

FGlobalShaderMapSection ** __thiscall
TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
::FindOrAddImpl<FHashedName_const_&>
          (TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
           *this,uint param_1,FHashedName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FHashedName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) == param_2->Hash) {
          if (lVar3 != 0) goto LAB_145d05dd2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FHashedName,FGlobalShaderMapSection_*>,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FHashedName_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FHashedName_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_145d05dd2:
  return (FGlobalShaderMapSection **)(lVar3 + 8);
}

// Find @ 145d28c40

FGlobalShaderMapSection ** __thiscall
TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
::Find(TMapBase<FHashedName,FGlobalShaderMapSection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FGlobalShaderMapSection_*,0>_>
       *this,FHashedName *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  FGlobalShaderMapSection **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar2 = param_1->Hash;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x18;
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x18) == uVar2) {
          ppFVar5 = (FGlobalShaderMapSection **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FGlobalShaderMapSection **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FGlobalShaderMapSection **)0x0;
}

// FindChecked @ 145d28cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGPass ** __thiscall
TMapBase<FRDGResource_const_*,FRDGPass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>_>
::FindChecked(TMapBase<FRDGResource_const_*,FRDGPass_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGResource_const_*,FRDGPass_const_*,0>_>
              *this,FRDGResource *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGPass **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(FRDGResource **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FRDGPass **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FRDGPass **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FRDGPass **)(*pcVar3)();
  return ppFVar6;
}

// FindOrAddImpl<FRDGTexture_*> @ 145d82210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FRDGTexture_*>
          (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FRDGTexture **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FRDGTexture **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FRDGTexture *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRDGTexture_*_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FRDGTexture_*_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 145d844f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall
TMapBase<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
           *this,TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FRDGBuffer_*,FRDGTransitionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGBuffer_*,FRDGTransitionInfo,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
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
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar16 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
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
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_145d847d0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_145d847d0;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_145d84601;
      }
    }
    else {
LAB_145d84601:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar16;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar16;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar11 = *(uint *)FVar17;
      uVar13 = uVar16;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_145d84712;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_145d84712:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (ulonglong *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar11 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar13 * 4);
        *(int *)(FVar9.Data + uVar13 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_145d847d0:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar16;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar18;
    uVar13 = uVar16;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar16;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar16 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_145d8487e;
      uVar12 = puVar18[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_145d8487e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(ulonglong *)((longlong)(int)uVar10 * 0x20 + lVar4);
      uVar14 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4
                             ); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == uVar16) goto LAB_145d84a0b;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)((longlong)(int)uVar10 * 0x20 + lVar4);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FRDGBuffer_*,DefaultKeyFuncs<FRDGBuffer_*,0>,FDefaultSetAllocator>::
      Emplace<FRDGBuffer_*_const_&>
                ((TSet<FRDGBuffer_*,DefaultKeyFuncs<FRDGBuffer_*,0>,FDefaultSetAllocator> *)local_98
                 ,(FRDGBuffer **)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_145d84a0b:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FRDGBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRDGBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FRDGBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 145d84aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall
TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,TArray<FRDGTexture_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
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
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar16 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
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
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_145d84d80;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_145d84d80;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_145d84bb1;
      }
    }
    else {
LAB_145d84bb1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar16;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = uVar10 & (longlong)(int)uVar12 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar16;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar11 = *(uint *)FVar17;
      uVar13 = uVar16;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_145d84cc2;
        uVar11 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_145d84cc2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (ulonglong *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar11 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar13 * 4);
        *(int *)(FVar9.Data + uVar13 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_145d84d80:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar16;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar18;
    uVar13 = uVar16;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar16;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar16 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_145d84e2e;
      uVar12 = puVar18[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_145d84e2e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(ulonglong *)((longlong)(int)uVar10 * 0x20 + lVar4);
      uVar14 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4
                             ); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == uVar16) goto LAB_145d84fbb;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)((longlong)(int)uVar10 * 0x20 + lVar4);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FRDGTexture_*,DefaultKeyFuncs<FRDGTexture_*,0>,FDefaultSetAllocator>::
      Emplace<FRDGTexture_*_const_&>
                ((TSet<FRDGTexture_*,DefaultKeyFuncs<FRDGTexture_*,0>,FDefaultSetAllocator> *)
                 local_98,(FRDGTexture **)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_145d84fbb:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FRDGTexture_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRDGTexture_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FRDGTexture_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// FindOrAddImpl<int_const_&> @ 145de4440

FShaderGroupPreloadEntry ** __thiscall
TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_145de44d2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*>,TDefaultMapHashableKeyFuncs<int,FIoStoreShaderCodeArchive::FShaderGroupPreloadEntry_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_145de44d2:
  return (FShaderGroupPreloadEntry **)(lVar3 + 8);
}

// Find @ 145e09570

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType ** __thiscall
TMapBase<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
::Find(TMapBase<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
       *this,FHashedName *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  FShaderType **ppFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar2 = param_1->Hash;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    ((uVar2 >> 0x20) * 0x17 + uVar2 & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x18;
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x18) == uVar2) {
          ppFVar5 = (FShaderType **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FShaderType **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FShaderType **)0x0;
}

// Emplace<unsigned_int_const_&,unsigned_char_const_&> @ 145e3b2a0

uchar * __thiscall
TMapBase<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
::Emplace<unsigned_int_const_&,unsigned_char_const_&>
          (TMapBase<unsigned_int,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>_>
           *this,uint *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned_int,unsigned_char>_> *)0x0) {
    *(uint *)local_28.Pointer = *param_1;
    *(uchar *)((longlong)local_28.Pointer + 4) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(uint *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  bVar4 = TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar3,local_28.Pointer,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar3,local_28.Pointer,local_res8[0]);
  }
  return (uchar *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar6 * 0x10);
}

// FindByHash<FString> @ 145e3c6a0

FShaderFileCacheEntry * __thiscall
TMapBase<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>
::FindByHash<FString>
          (TMapBase<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  FShaderFileCacheEntry *pFVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      iVar1 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x48);
      lVar5 = (longlong)iVar3 * 0x48;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar1 == iVar3) {
        if (iVar1 < 2) goto LAB_145e3c73c;
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar2 + lVar5),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar7 = iVar3 == 0;
      }
      else {
        bVar7 = iVar1 + iVar3 == 1;
      }
      if (bVar7) {
LAB_145e3c73c:
        lVar5 = *(longlong *)&(this->Pairs).Elements + lVar5;
        pFVar4 = (FShaderFileCacheEntry *)0x0;
        if (lVar5 != 0) {
          pFVar4 = (FShaderFileCacheEntry *)(lVar5 + 0x10);
        }
        return pFVar4;
      }
      iVar3 = *(int *)(lVar5 + 0x40 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  return (FShaderFileCacheEntry *)0x0;
}

// FindOrAddImpl<int_const_&,FShaderLibraryInstance::FCachedRHIShader> @ 145e3cb60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FCachedRHIShader * __thiscall
TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
::FindOrAddImpl<int_const_&,FShaderLibraryInstance::FCachedRHIShader>
          (TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
           *this,uint param_1,int *param_2,FCachedRHIShader *param_3)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [8];
  int *local_18;
  FCachedRHIShader *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FCachedRHIShader *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<int_const_&,FShaderLibraryInstance::FCachedRHIShader_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<int_const_&,FShaderLibraryInstance::FCachedRHIShader_&&> *)
             (ulonglong)param_1,(bool *)&local_18);
  return (FCachedRHIShader *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 145e54090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
* __thiscall
TMapBase<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
::Find(TMapBase<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
          *)0x0;
}

// Emplace<FString_const_&,FShaderParameterParser::FParsedShaderParameter_const_&> @ 145e77700

FParsedShaderParameter * __thiscall
TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
::Emplace<FString_const_&,FShaderParameterParser::FParsedShaderParameter_const_&>
          (TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
           *this,FString *param_1,FParsedShaderParameter *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x78 + 4 + lVar9);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar8 = (TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_> *)0x0
  ;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    uVar2 = *(undefined8 *)&param_2->NumColumns;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = uVar2;
    uVar2 = *(undefined8 *)&(param_2->ParsedName).Size;
    *(wchar_t **)((longlong)local_28.Pointer + 0x20) = (param_2->ParsedName).DataPtr;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = uVar2;
    uVar2 = *(undefined8 *)&(param_2->ParsedType).Size;
    *(wchar_t **)((longlong)local_28.Pointer + 0x30) = (param_2->ParsedType).DataPtr;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = uVar2;
    uVar2 = *(undefined8 *)&(param_2->ParsedArraySize).Size;
    *(wchar_t **)((longlong)local_28.Pointer + 0x40) = (param_2->ParsedArraySize).DataPtr;
    *(undefined8 *)((longlong)local_28.Pointer + 0x48) = uVar2;
    uVar2 = *(undefined8 *)&param_2->ParsedLineOffset;
    *(undefined8 *)((longlong)local_28.Pointer + 0x50) =
         *(undefined8 *)&param_2->ConstantBufferOffset;
    *(undefined8 *)((longlong)local_28.Pointer + 0x58) = uVar2;
    uVar2 = *(undefined8 *)&param_2->ParsedTypeDecl;
    *(undefined8 *)((longlong)local_28.Pointer + 0x60) =
         *(undefined8 *)&param_2->ParsedCharOffsetEnd;
    *(undefined8 *)((longlong)local_28.Pointer + 0x68) = uVar2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x70) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar8,local_res8[0]);
  }
  return (FParsedShaderParameter *)(*(longlong *)&(this->Pairs).Elements + lVar9 * 0x78 + 0x10);
}

// Emplace<FString,FShaderParameterParser::FParsedShaderParameter_const_&> @ 145e78f70

FParsedShaderParameter * __thiscall
TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
::Emplace<FString,FShaderParameterParser::FParsedShaderParameter_const_&>
          (TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
           *this,FString *param_1,FParsedShaderParameter *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x78 + 4 + lVar9);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar8 = (TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_> *)0x0
  ;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    uVar2 = *(undefined8 *)&param_2->NumColumns;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = uVar2;
    uVar2 = *(undefined8 *)&(param_2->ParsedName).Size;
    *(wchar_t **)((longlong)local_28.Pointer + 0x20) = (param_2->ParsedName).DataPtr;
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) = uVar2;
    uVar2 = *(undefined8 *)&(param_2->ParsedType).Size;
    *(wchar_t **)((longlong)local_28.Pointer + 0x30) = (param_2->ParsedType).DataPtr;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) = uVar2;
    uVar2 = *(undefined8 *)&(param_2->ParsedArraySize).Size;
    *(wchar_t **)((longlong)local_28.Pointer + 0x40) = (param_2->ParsedArraySize).DataPtr;
    *(undefined8 *)((longlong)local_28.Pointer + 0x48) = uVar2;
    uVar2 = *(undefined8 *)&param_2->ParsedLineOffset;
    *(undefined8 *)((longlong)local_28.Pointer + 0x50) =
         *(undefined8 *)&param_2->ConstantBufferOffset;
    *(undefined8 *)((longlong)local_28.Pointer + 0x58) = uVar2;
    uVar2 = *(undefined8 *)&param_2->ParsedTypeDecl;
    *(undefined8 *)((longlong)local_28.Pointer + 0x60) =
         *(undefined8 *)&param_2->ParsedCharOffsetEnd;
    *(undefined8 *)((longlong)local_28.Pointer + 0x68) = uVar2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x70) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar8,local_res8[0]);
  }
  return (FParsedShaderParameter *)(*(longlong *)&(this->Pairs).Elements + lVar9 * 0x78 + 0x10);
}

// FindOrAddImpl<FSHAHash_const_&> @ 145e7a630

TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator> *
__thiscall
TMapBase<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FSHAHash_const_&>
          (TMapBase<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FSHAHash *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FSHAHash *local_res20;
  
  iVar1 = TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x70 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
            *)(lVar2 + 0x18);
  }
  local_res20 = param_2;
  TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSHAHash_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FSHAHash_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x70 + 0x18);
}

// FindOrAddImpl<enum_EShaderPlatform_const_&> @ 145e7a6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibrary * __thiscall
TMapBase<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,0>_>
::FindOrAddImpl<enum_EShaderPlatform_const_&>(void *this,uint param_1,EShaderPlatform *param_2)

{
  undefined4 uVar1;
  EShaderPlatform *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EShaderPlatform *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EShaderPlatform *)((longlong)(int)uVar1 * 0x410 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EShaderPlatform *)0x0) {
            return (FShaderLibrary *)(pEVar2 + 4);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x204);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EShaderPlatform_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EShaderPlatform_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FShaderLibrary *)(*(longlong *)this + (longlong)local_res8[0] * 0x410 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 145e7a780

void __thiscall
TMapBase<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145e7a860;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_145e7a860:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                         (FString *)pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 145e9ab70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> * __thiscall
TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
::Find(TMapBase<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *)
               (lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TUniquePtr<FShaderPipelineCacheTask,TDefaultDelete<FShaderPipelineCacheTask>_> *)0x0;
}

// Find @ 145e9ac00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibrary * __thiscall
TMapBase<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,0>_>
::Find(void *this,EShaderPlatform param_1)

{
  undefined4 uVar1;
  FShaderLibrary *pFVar2;
  EShaderPlatform *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EShaderPlatform *)((longlong)(int)uVar1 * 0x410 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FShaderLibrary *)0x0;
          if (pEVar3 != (EShaderPlatform *)0x0) {
            pFVar2 = (FShaderLibrary *)(pEVar3 + 4);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x204);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FShaderLibrary *)0x0;
}

