// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// IsAType @ 143fef990

bool __thiscall FTransformCollection::IsAType(FTransformCollection *this,FName param_1)

{
  FName local_res10;
  FName local_res18 [2];
  
  ::FName::FName(&local_res10,"FTransformCollection");
  if ((param_1.ComparisonIndex.Value.Value != local_res10.ComparisonIndex.Value) ||
     (param_1.Number != local_res10.Number)) {
    ::FName::FName(local_res18,"FManagedArrayCollection");
    if ((param_1.ComparisonIndex.Value.Value != local_res18[0].ComparisonIndex.Value) ||
       (param_1.Number != local_res18[0].Number)) {
      return false;
    }
  }
  return true;
}

// FTransformCollection @ 1440690f0

FTransformCollection * __thiscall
FTransformCollection::FTransformCollection(FTransformCollection *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTransformCollection__6B_;
  *(undefined ***)&this->Transform = &___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
  *(undefined ***)&this->BoneName = &___7__TManagedArray_VFString____6B_;
  *(undefined ***)&this->BoneColor = &___7__TManagedArray_UFLinearColor____6B_;
  *(undefined ***)&this->Parent = &___7__TManagedArray_H__6B_;
  (this->Transform).field_0x8 = 0;
  *(undefined8 *)&(this->Transform).field_0x10 = 0;
  *(undefined8 *)&(this->Transform).field_0x18 = 0;
  (this->BoneName).field_0x8 = 0;
  *(undefined8 *)&(this->BoneName).field_0x10 = 0;
  *(undefined8 *)&(this->BoneName).field_0x18 = 0;
  (this->BoneColor).field_0x8 = 0;
  *(undefined8 *)&(this->BoneColor).field_0x10 = 0;
  *(undefined8 *)&(this->BoneColor).field_0x18 = 0;
  (this->Parent).field_0x8 = 0;
  *(undefined8 *)&(this->Parent).field_0x10 = 0;
  *(undefined8 *)&(this->Parent).field_0x18 = 0;
  (this->Children).field_0x8 = 0;
  *(undefined8 *)&(this->Children).field_0x10 = 0;
  *(undefined8 *)&(this->Children).field_0x18 = 0;
  *(undefined ***)&this->Children =
       &___7__TManagedArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator______6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 9;
  Construct(this);
  return this;
}

// ~FTransformCollection @ 14406bdd0

void __thiscall FTransformCollection::~FTransformCollection(FTransformCollection *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FTransformCollection__6B_;
  *(undefined ***)&this->Children =
       &___7__TManagedArrayBase_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator______6B_;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)&(this->Children).field_0x10
             ,*(int *)&(this->Children).field_0x18);
  pvVar1 = *(void **)&(this->Children).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Children = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Parent = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->Parent).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Parent = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->BoneColor = &___7__TManagedArrayBase_UFLinearColor____6B_;
  pvVar1 = *(void **)&(this->BoneColor).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->BoneColor = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->BoneName = &___7__TManagedArrayBase_VFString____6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->BoneName).field_0x10,*(int *)&(this->BoneName).field_0x18);
  pvVar1 = *(void **)&(this->BoneName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->BoneName = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Transform = &___7__TManagedArrayBase_U__TTransform_M_Math_UE____6B_;
  pvVar1 = *(void **)&(this->Transform).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Transform = &___7FManagedArrayBase__6B_;
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)this);
  return;
}

// Append @ 144079500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformCollection::Append(FTransformCollection *this,FManagedArrayCollection *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar8;
  ulonglong uVar9;
  FManagedArrayCollection *pFVar10;
  ForElementType<unsigned_int> FVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  int iVar18;
  longlong lVar19;
  ulong64 uVar20;
  uint *puVar21;
  ulonglong uVar22;
  FManagedArrayCollection *pFVar23;
  int iVar24;
  FManagedArrayCollection *pFVar25;
  ForAnyElementType FVar26;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [4];
  uint local_194;
  uint local_190;
  uint local_18c;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  undefined4 local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  longlong local_138;
  undefined4 local_130;
  int local_12c;
  undefined4 local_124;
  int local_120;
  FName local_11c;
  FTransformCollection *local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FSparseArrayAllocationInfo local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pcVar3 = *(code **)(param_1->_padding_ + 8);
  local_110 = this;
  ::FName::FName(&local_11c,"FTransformCollection");
  cVar4 = (*pcVar3)(param_1,local_11c);
  pFVar25 = (FManagedArrayCollection *)0x0;
  iVar24 = 0;
  pFVar10 = pFVar25;
  if (cVar4 != '\0') {
    pFVar10 = param_1;
  }
  if (pFVar10 == (FManagedArrayCollection *)0x0) {
    FManagedArrayCollection::Append((FManagedArrayCollection *)this,param_1);
  }
  else {
    local_190 = 0;
    pTVar8 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                     *)&param_1->GroupInfo,TransformGroup);
    pFVar10 = (FManagedArrayCollection *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
      pFVar10 = pFVar25;
    }
    pFVar23 = pFVar25;
    if (pFVar10 != (FManagedArrayCollection *)0x0) {
      local_190 = (uint)pFVar10->_padding_;
      pFVar23 = (FManagedArrayCollection *)(ulonglong)local_190;
    }
    FManagedArrayCollection::Append((FManagedArrayCollection *)this,param_1);
    pTVar8 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                     *)&this->_padding_,TransformGroup);
    pFVar10 = (FManagedArrayCollection *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
      pFVar10 = pFVar25;
    }
    if (pFVar10 != (FManagedArrayCollection *)0x0) {
      iVar24 = (int)pFVar10->_padding_;
    }
    local_18c = (uint)pFVar23;
    if ((int)local_18c < iVar24) {
      local_100 = (longlong)iVar24;
      lVar19 = (longlong)(int)local_18c;
      pFVar10 = pFVar23;
      do {
        uVar16 = (uint)pFVar23;
        local_194 = ~uVar16 >> 0x1f;
        uVar13 = 0;
        uVar15 = uVar13;
        if ((int)uVar16 < *(int *)&(this->Parent).field_0x18) {
          uVar15 = local_194;
        }
        local_138 = lVar19;
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(longlong *)&(this->Parent).field_0x10 + lVar19 * 4) != -1) {
          uVar15 = uVar13;
          if ((int)uVar16 < *(int *)&(this->Parent).field_0x18) {
            uVar15 = local_194;
          }
          if ((uVar15 == 0) &&
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
          piVar1 = (int *)(*(longlong *)&(this->Parent).field_0x10 + lVar19 * 4);
          *piVar1 = *piVar1 + (int)pFVar10;
        }
        if ((int)uVar16 < *(int *)&(this->Children).field_0x18) {
          uVar13 = local_194;
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
        local_108 = (longlong)(int)uVar16 * 0x50;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (local_108 + *(longlong *)&(this->Children).field_0x10),&local_148);
        iVar24 = local_148.ArrayNum;
        pFVar2 = local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 4;
        FVar17.Data = local_148.AllocatorInstance.Data;
        while( true ) {
          if (local_148.ArrayNum != iVar24) {
            local_198[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_198);
          }
          iVar6 = local_148.ArrayNum;
          FVar26.Data = local_148.AllocatorInstance.Data;
          if (FVar17.Data == pFVar2) break;
          *(uint *)FVar17.Data = *(uint *)FVar17.Data + (int)pFVar10;
          FVar17.Data = FVar17.Data + 4;
        }
        uVar20 = (ulong64)local_148.ArrayNum;
        if ((local_148.ArrayNum < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_6c = 0x80;
        local_98._0_8_ = (FScriptContainerElement *)0x0;
        local_98._8_8_ = 0;
        local_78 = (ForElementType<unsigned_int>)0x0;
        local_70 = 0;
        local_68 = -1;
        local_64 = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = 0;
        if (iVar6 != 0) {
          if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum(uVar20);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,iVar6);
          uVar15 = 1;
          if (3 < (uint)iVar6) {
            uVar14 = (ulonglong)(((uint)iVar6 >> 1) + 7) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_130 = (undefined4)lVar19;
            uVar15 = 1 << ((byte)lVar19 & 0x1f);
          }
          if ((local_50 == 0) || ((int)local_50 < (int)uVar15)) {
            local_50 = uVar15;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
            }
            if (uVar15 != 0) {
              uVar13 = uVar15;
              if (uVar15 < 2) {
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  uVar13 = 0;
                  goto LAB_14407982f;
                }
              }
              else {
LAB_14407982f:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,uVar13,4);
              }
              if (0 < (int)uVar15) {
                uVar22 = (ulonglong)uVar15;
                uVar14 = 0;
                do {
                  FVar17.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar17.Data = local_58.Data;
                  }
                  uVar9 = uVar14 & (longlong)(int)uVar15 - 1U;
                  uVar14 = uVar14 + 1;
                  *(undefined4 *)(FVar17.Data + uVar9 * 4) = 0xffffffff;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
              }
            }
            if (local_50 != 0) {
              pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
              local_188 = 0;
              uStack_184 = 1;
              iStack_174 = 0;
              iStack_170 = 0;
              if (local_70 != 0) {
                FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                if (local_78 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = local_78;
                }
                uVar15 = *(uint *)FVar11;
                local_188 = 0;
                while (uVar15 == 0) {
                  iStack_170 = iStack_170 + 0x20;
                  lVar19 = (longlong)local_188;
                  local_188 = local_188 + 1;
                  if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_188)
                  goto LAB_144079932;
                  uVar15 = ((uint *)((longlong)FVar11 + 4))[lVar19];
                }
                uStack_184 = -uVar15 & uVar15;
                uVar14 = (ulonglong)uStack_184 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                local_12c = (int)lVar19;
                iStack_174 = iStack_170 + -1 + local_12c;
                if (local_70 < iStack_174) {
LAB_144079932:
                  iStack_174 = local_70;
                }
              }
              local_178 = 0xffffffff;
              local_f8 = (longlong *)local_98;
              local_f0._padding_ = CONCAT44(uStack_184,local_188);
              local_f0.CurrentBitIndex = iStack_174;
              local_f0.UnvisitedBitMask = 0xffffffff;
              local_f0._28_4_ = uStack_16c;
              local_f0.BaseBitIndex = iStack_170;
              iVar24 = iStack_174;
              local_f0.Array = pTStack_180;
              if (iStack_174 < local_70) {
                do {
                  uVar15 = local_50 - 1 & *(uint *)(*local_f8 + (longlong)iVar24 * 0xc);
                  lVar19 = *local_f8 + (longlong)iVar24 * 0xc;
                  *(uint *)(lVar19 + 8) = uVar15;
                  FVar17.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar17.Data = local_58.Data;
                  }
                  uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
                  *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(FVar17.Data + uVar14 * 4);
                  *(int *)(FVar17.Data + uVar14 * 4) = iVar24;
                  local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
                  iVar24 = local_f0.CurrentBitIndex;
                } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
              }
            }
          }
        }
        pFVar2 = FVar26.Data + uVar20 * 4;
        if (FVar26.Data != pFVar2) {
          do {
            if (local_64 == 0) {
              iVar6 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                 (int *)(local_98 + 0xc));
              iVar24 = local_70;
              if (local_70 == 0) {
                iVar18 = 0;
LAB_144079a5f:
                if (local_6c < local_70 + 1) {
                  uVar15 = local_6c + 0x1fU >> 5;
                  uVar13 = local_70 + 0x20U >> 5;
                  if (uVar13 < 5) {
                    local_6c = 4;
                  }
                  else {
                    uVar14 = (ulonglong)uVar13;
                    if (uVar15 < 5) {
                      uVar15 = 0;
                    }
                    if (uVar15 == 0) {
                      uVar22 = 4;
                      if (4 < uVar14) {
                        uVar22 = uVar14;
                      }
                    }
                    else {
                      uVar22 = ((ulonglong)uVar13 * 3 >> 3) + 0x10 + uVar14;
                    }
                    uVar20 = FMemory::QuantizeSize(uVar22 * 4,0);
                    local_6c = (int)(uVar20 >> 2);
                    if (local_6c < (int)uVar13) {
                      local_6c = 0x7fffffff;
                    }
                  }
                  local_6c = local_6c << 5;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
                }
                local_70 = local_70 + 1;
                uVar13 = local_70 >> 0x1f & 0x1f;
                uVar15 = local_70 + uVar13;
                iVar7 = (uVar15 & 0x1f) - uVar13;
                if (iVar7 != 0) {
                  FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                  if (local_78 != (ForElementType<unsigned_int>)0x0) {
                    FVar11 = local_78;
                  }
                  puVar21 = (uint *)((longlong)FVar11 + (longlong)((int)uVar15 >> 5) * 4);
                  *puVar21 = *puVar21 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
                }
              }
              else {
                iVar18 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
                if (iVar18 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
                goto LAB_144079a5f;
                local_70 = local_70 + 1;
              }
              FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FVar11 = local_78;
              }
              puVar21 = (uint *)((longlong)FVar11 + (longlong)iVar18 * 4);
              *puVar21 = *puVar21 & ~(1 << ((byte)iVar24 & 0x1f));
              iVar24 = local_68;
            }
            else {
              iVar24 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
              local_64 = local_64 + -1;
              iVar6 = local_68;
              if (local_64 != 0) {
                *(undefined4 *)(local_98._0_8_ + (longlong)iVar24 * 0xc) = 0xffffffff;
              }
            }
            local_68 = iVar24;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,&local_a8,iVar6);
            if (local_a8.Pointer == (uint *)0x0) {
              puVar21 = (uint *)0x0;
            }
            else {
              *(uint *)local_a8.Pointer = *(uint *)FVar26.Data;
              *(uint *)((longlong)local_a8.Pointer + 4) = 0xffffffff;
              puVar21 = local_a8.Pointer;
            }
            uVar15 = *puVar21;
            if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
              FVar17.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar17.Data = local_58.Data;
              }
              for (iVar24 = *(int *)(FVar17.Data + (ulonglong)(local_50 - 1 & uVar15) * 4);
                  iVar24 != -1; iVar24 = *(int *)(local_98._0_8_ + (longlong)iVar24 * 0xc + 4)) {
                if (*(uint *)(local_98._0_8_ + (longlong)iVar24 * 0xc) == uVar15) {
                  if (iVar24 != -1) {
                    *(uint *)(local_98._0_8_ + (longlong)iVar24 * 0xc) = uVar15;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_98,local_a8.Index,1);
                    goto LAB_144079e7f;
                  }
                  break;
                }
              }
            }
            uVar13 = local_98._8_4_ - local_64;
            uVar16 = 1;
            if (3 < uVar13) {
              uVar14 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
              lVar19 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_124 = (undefined4)lVar19;
              uVar16 = 1 << ((byte)lVar19 & 0x1f);
            }
            if (((int)uVar13 < 1) || ((int)uVar16 <= (int)local_50)) {
              uVar15 = local_50 - 1 & uVar15;
              puVar21[2] = uVar15;
              FVar17.Data = local_60;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FVar17.Data = local_58.Data;
              }
              uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
              puVar21[1] = *(uint *)(FVar17.Data + uVar14 * 4);
              *(int *)(FVar17.Data + uVar14 * 4) = local_a8.Index;
            }
            else {
              local_50 = uVar16;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_58,0,0,4);
              }
              if (uVar16 != 0) {
                uVar15 = uVar16;
                if (uVar16 < 2) {
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    uVar15 = 0;
                    goto LAB_144079caf;
                  }
                }
                else {
LAB_144079caf:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_58,0,uVar15,4);
                }
                if (0 < (int)uVar16) {
                  uVar22 = (ulonglong)uVar16;
                  uVar14 = 0;
                  do {
                    FVar17.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar17.Data = local_58.Data;
                    }
                    uVar9 = uVar14 & (longlong)(int)uVar16 - 1U;
                    uVar14 = uVar14 + 1;
                    *(undefined4 *)(FVar17.Data + uVar9 * 4) = 0xffffffff;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
              }
              if (local_50 != 0) {
                pTStack_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                local_168 = 0;
                uStack_164 = 1;
                iStack_154 = 0;
                iStack_150 = 0;
                if (local_70 != 0) {
                  FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                  if (local_78 != (ForElementType<unsigned_int>)0x0) {
                    FVar11 = local_78;
                  }
                  uVar15 = *(uint *)FVar11;
                  local_168 = 0;
                  while (uVar15 == 0) {
                    iStack_150 = iStack_150 + 0x20;
                    lVar19 = (longlong)local_168;
                    local_168 = local_168 + 1;
                    if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_168)
                    goto LAB_144079db2;
                    uVar15 = ((uint *)((longlong)FVar11 + 4))[lVar19];
                  }
                  uStack_164 = -uVar15 & uVar15;
                  uVar14 = (ulonglong)uStack_164 * 2 + 1;
                  lVar19 = 0x3f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                    }
                  }
                  local_120 = (int)lVar19;
                  iStack_154 = iStack_150 + -1 + local_120;
                  if (local_70 < iStack_154) {
LAB_144079db2:
                    iStack_154 = local_70;
                  }
                }
                local_158 = 0xffffffff;
                local_d0 = (longlong *)local_98;
                local_c8._padding_ = CONCAT44(uStack_164,local_168);
                local_c8.CurrentBitIndex = iStack_154;
                local_c8.UnvisitedBitMask = 0xffffffff;
                local_c8._28_4_ = uStack_14c;
                local_c8.BaseBitIndex = iStack_150;
                iVar24 = iStack_154;
                local_c8.Array = pTStack_160;
                if (iStack_154 < local_70) {
                  do {
                    uVar15 = local_50 - 1 & *(uint *)(*local_d0 + (longlong)iVar24 * 0xc);
                    lVar19 = *local_d0 + (longlong)iVar24 * 0xc;
                    *(uint *)(lVar19 + 8) = uVar15;
                    FVar17.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar17.Data = local_58.Data;
                    }
                    uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar15;
                    *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(FVar17.Data + uVar14 * 4);
                    *(int *)(FVar17.Data + uVar14 * 4) = iVar24;
                    local_c8.UnvisitedBitMask =
                         local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
                    iVar24 = local_c8.CurrentBitIndex;
                  } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
                }
              }
            }
LAB_144079e7f:
            FVar26.Data = FVar26.Data + 4;
          } while (FVar26.Data != pFVar2);
          pFVar10 = (FManagedArrayCollection *)(ulonglong)local_190;
          uVar16 = local_18c;
        }
        this = local_110;
        uVar15 = 0;
        if ((int)uVar16 < *(int *)&(local_110->Children).field_0x18) {
          uVar15 = local_194;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar12 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  (local_108 + *(longlong *)&(this->Children).field_0x10);
        if (pTVar12 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
          Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                    (pTVar12,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
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
        if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        local_18c = uVar16 + 1;
        pFVar23 = (FManagedArrayCollection *)(ulonglong)local_18c;
        lVar19 = local_138 + 1;
      } while (lVar19 < local_100);
    }
  }
  return;
}

// AppendTransform @ 144079fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FTransformCollection::AppendTransform
          (FTransformCollection *this,FTransformCollection *param_1,TTransform<double> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  float *pfVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FTransformCollection *pFVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  ForAnyElementType *pFVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  ForAnyElementType *pFVar20;
  longlong *plVar21;
  int iVar22;
  FTransformCollection *pFVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8 [4];
  uint local_1b4;
  int local_1b0;
  uint local_1ac;
  ulonglong local_1a8;
  FTransformCollection *local_1a0;
  longlong local_198;
  int local_190;
  uint local_18c;
  FTransformCollection *local_188;
  int local_180;
  int local_17c;
  int local_178 [2];
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  int iStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  undefined4 local_e4;
  __m128 local_d8;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  __m128 local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a0 = this;
  local_188 = param_1;
  pTVar12 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,TransformGroup);
  piVar17 = (int *)0x0;
  iVar22 = 0;
  iVar11 = 0;
  piVar13 = (int *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar13 = piVar17;
  }
  if (((piVar13 == (int *)0x0) || (*piVar13 < 1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Element.NumElements(FTransformCollection::TransformGroup) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                          ,0x7a,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  local_1b0 = 0;
  pTVar12 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)&this->_padding_,TransformGroup);
  piVar13 = (int *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar13 = piVar17;
  }
  if (piVar13 != (int *)0x0) {
    iVar11 = *piVar13;
    local_1b0 = iVar11;
  }
  pTVar12 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)&param_1->_padding_,TransformGroup);
  piVar13 = (int *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar13 = piVar17;
  }
  if (piVar13 != (int *)0x0) {
    iVar22 = *piVar13;
  }
  local_18c = FManagedArrayCollection::AddElements
                        ((FManagedArrayCollection *)this,iVar22,TransformGroup);
  uVar14 = (ulonglong)(int)local_18c;
  local_168 = (longlong)iVar22;
  local_a8.m128_f32[0] = (float)(param_2->Rotation).XY.m128d_f64[0];
  local_a8.m128_f32[1] = (float)(param_2->Rotation).XY.m128d_f64[1];
  local_a8.m128_f32[2] = (float)(param_2->Rotation).ZW.m128d_f64[0];
  local_a8.m128_f32[3] = (float)(param_2->Rotation).ZW.m128d_f64[1];
  local_98 = (float)(param_2->Translation).XY.m128d_f64[0];
  fStack_94 = (float)(param_2->Translation).XY.m128d_f64[1];
  fStack_90 = (float)(param_2->Translation).ZW.m128d_f64[0];
  fStack_8c = (float)(param_2->Translation).ZW.m128d_f64[1];
  local_88 = (float)(param_2->Scale3D).XY.m128d_f64[0];
  fStack_84 = (float)(param_2->Scale3D).XY.m128d_f64[1];
  fStack_80 = (float)(param_2->Scale3D).ZW.m128d_f64[0];
  fStack_7c = (float)(param_2->Scale3D).ZW.m128d_f64[1];
  local_1b4 = 0;
  if (0 < iVar22) {
    local_198 = 0;
    uVar26 = uVar14;
    do {
      lVar27 = local_198;
      uVar15 = (uint)piVar17;
      uVar25 = uVar15 + (int)uVar14;
      uVar28 = ~uVar15 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar15 < *(int *)&(param_1->Parent).field_0x18) {
        uVar19 = uVar28;
      }
      local_1a8 = uVar26;
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      iVar11 = *(int *)&(param_1->Transform).field_0x18;
      if (*(int *)(*(longlong *)&(param_1->Parent).field_0x10 + lVar27 * 4) ==
          (int)FManagedArrayCollection::Invalid) {
        uVar19 = 0;
        if ((int)uVar15 < iVar11) {
          uVar19 = uVar28;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        local_d8 = GlobalVectorConstants::Float0001;
        _local_c8 = GlobalVectorConstants::FloatZero;
        _local_b8 = GlobalVectorConstants::Float1110;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_d8,
                   (TTransform<float> *)
                   ((longlong)(int)uVar15 * 0x30 + *(longlong *)&(param_1->Transform).field_0x10),
                   (TTransform<float> *)&local_a8);
        pFVar23 = local_1a0;
        uVar29 = local_d8.m128_i32[0];
        uVar30 = local_d8.m128_i32[1];
        uVar31 = local_d8.m128_i32[2];
        uVar32 = local_d8.m128_i32[3];
        fVar33 = (float)local_c8._0_4_;
        fVar34 = (float)local_c8._4_4_;
        fVar35 = fStack_c0;
        fVar36 = fStack_bc;
        fVar37 = (float)local_b8._0_4_;
        fVar38 = (float)local_b8._4_4_;
        fVar39 = fStack_b0;
        fVar40 = fStack_ac;
        uVar18 = ~uVar25 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar25 < *(int *)&(local_1a0->Transform).field_0x18) {
          uVar19 = uVar18;
        }
        uVar26 = local_1a8;
        local_1ac = uVar18;
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar26 = local_1a8, bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
      }
      else {
        uVar19 = 0;
        if ((int)uVar15 < iVar11) {
          uVar19 = uVar28;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        pFVar23 = local_1a0;
        lVar4 = *(longlong *)&(param_1->Transform).field_0x10;
        uVar18 = ~uVar25 >> 0x1f;
        pfVar2 = (float *)(lVar4 + lVar27 * 0x30);
        uVar29 = *pfVar2;
        uVar30 = pfVar2[1];
        uVar31 = pfVar2[2];
        uVar32 = pfVar2[3];
        pfVar2 = (float *)(lVar4 + 0x10 + lVar27 * 0x30);
        fVar33 = *pfVar2;
        fVar34 = pfVar2[1];
        fVar35 = pfVar2[2];
        fVar36 = pfVar2[3];
        pfVar2 = (float *)(lVar4 + 0x20 + lVar27 * 0x30);
        fVar37 = *pfVar2;
        fVar38 = pfVar2[1];
        fVar39 = pfVar2[2];
        fVar40 = pfVar2[3];
        uVar19 = 0;
        if ((int)uVar25 < *(int *)&(local_1a0->Transform).field_0x18) {
          uVar19 = uVar18;
        }
        local_1ac = uVar18;
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
      }
      lVar27 = *(longlong *)&(pFVar23->Transform).field_0x10;
      pfVar2 = (float *)(lVar27 + uVar26 * 0x30);
      *pfVar2 = (float)uVar29;
      pfVar2[1] = (float)uVar30;
      pfVar2[2] = (float)uVar31;
      pfVar2[3] = (float)uVar32;
      pfVar2 = (float *)(lVar27 + 0x10 + uVar26 * 0x30);
      *pfVar2 = fVar33;
      pfVar2[1] = fVar34;
      pfVar2[2] = fVar35;
      pfVar2[3] = fVar36;
      pfVar2 = (float *)(lVar27 + 0x20 + uVar26 * 0x30);
      *pfVar2 = fVar37;
      pfVar2[1] = fVar38;
      pfVar2[2] = fVar39;
      pfVar2[3] = fVar40;
      uVar19 = 0;
      if ((int)uVar15 < *(int *)&(param_1->BoneName).field_0x18) {
        uVar19 = uVar28;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      pFVar16 = (ForAnyElementType *)
                ((longlong)(int)uVar15 * 0x10 + *(longlong *)&(param_1->BoneName).field_0x10);
      if (((uVar18 & (int)uVar25 < *(int *)&(pFVar23->BoneName).field_0x18) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      lVar27 = local_1a8 * 0x10;
      pFVar20 = (ForAnyElementType *)(*(longlong *)&(pFVar23->BoneName).field_0x10 + lVar27);
      if (pFVar20 != pFVar16) {
        iVar11 = *(int *)&pFVar16[1].Data;
        piVar13 = (int *)((longlong)&pFVar20[1].Data + 4);
        _Src = pFVar16->Data;
        iVar22 = *piVar13;
        *(int *)&pFVar20[1].Data = iVar11;
        if ((iVar11 == 0) && (iVar22 == 0)) {
          *piVar13 = 0;
          pFVar23 = local_1a0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,iVar22,pFVar20,iVar11,piVar13);
          pFVar23 = local_1a0;
          if (iVar11 != 0) {
            memcpy(pFVar20->Data,_Src,(longlong)iVar11 * 2);
            pFVar23 = local_1a0;
          }
        }
      }
      pFVar8 = local_188;
      uVar15 = local_1b4;
      uVar19 = 0;
      if ((int)local_1b4 < *(int *)&(local_188->BoneColor).field_0x18) {
        uVar19 = uVar28;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      uVar19 = local_1ac;
      puVar3 = (undefined8 *)(*(longlong *)&(pFVar8->BoneColor).field_0x10 + local_198 * 0x10);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      if (((local_1ac & (int)uVar25 < *(int *)&(pFVar23->BoneColor).field_0x18) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      pFVar8 = local_188;
      puVar3 = (undefined8 *)(*(longlong *)&(pFVar23->BoneColor).field_0x10 + lVar27);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      uVar18 = 0;
      if ((int)uVar15 < *(int *)&(local_188->Parent).field_0x18) {
        uVar18 = uVar28;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      uVar29 = *(undefined4 *)(*(longlong *)&(pFVar8->Parent).field_0x10 + local_198 * 4);
      if (((uVar19 & (int)uVar25 < *(int *)&(pFVar23->Parent).field_0x18) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      *(undefined4 *)(*(longlong *)&(pFVar23->Parent).field_0x10 + local_1a8 * 4) = uVar29;
      if (((uVar19 & (int)uVar25 < *(int *)&(pFVar23->Parent).field_0x18) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      uVar14 = local_1a8;
      if (*(int *)(*(longlong *)&(pFVar23->Parent).field_0x10 + local_1a8 * 4) != -1) {
        if (((uVar19 & (int)uVar25 < *(int *)&(pFVar23->Parent).field_0x18) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        piVar13 = (int *)(*(longlong *)&(pFVar23->Parent).field_0x10 + uVar14 * 4);
        *piVar13 = *piVar13 + local_1b0;
      }
      if (((uVar19 & (int)uVar25 < *(int *)&(pFVar23->Children).field_0x18) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (uVar14 * 0x50 + *(longlong *)&(pFVar23->Children).field_0x10);
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
        *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
        if (*(int *)&(this_00->Elements).field_0xc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)&(this_00->Elements).field_0xc);
        }
        *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
        *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
      }
      uVar15 = 0;
      if ((int)local_1b4 < *(int *)&(pFVar8->Children).field_0x18) {
        uVar15 = uVar28;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      local_140 = 0;
      iStack_158 = 0;
      uStack_154 = 1;
      plVar21 = (longlong *)(local_198 * 0x50 + *(longlong *)&(pFVar8->Children).field_0x10);
      iVar11 = (int)plVar21[5];
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
      iStack_144 = 0;
      if (iVar11 != 0) {
        pTVar24 = pTVar1;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
        }
        uVar15 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
        while (uVar15 == 0) {
          lVar27 = (longlong)iStack_158;
          local_140 = local_140 + 0x20;
          iStack_158 = iStack_158 + 1;
          iStack_144 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158)
          goto LAB_14407a81e;
          uVar15 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar27 * 4 + 4);
        }
        uStack_154 = -uVar15 & uVar15;
        uVar14 = (ulonglong)uStack_154 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_180 = (int)lVar27;
        iStack_144 = local_180 + -1 + local_140;
        if (iVar11 < iStack_144) {
          iStack_144 = iVar11;
        }
      }
LAB_14407a81e:
      uVar15 = *(uint *)(plVar21 + 5);
      uStack_13c = local_e4;
      iStack_138 = (int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34);
      uVar19 = uVar15 & 0xffffffe0;
      TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
      uStack_148 = 0xffffffff;
      TStack_128.CurrentBitIndex = iStack_144;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar15 >> 5;
      TStack_128._28_4_ = local_e4;
      TStack_128.BaseBitIndex = local_140;
      uStack_108 = CONCAT44(uStack_134,iStack_138);
      local_170 = plVar21;
      local_160 = plVar21;
      local_150 = pTVar1;
      local_130 = plVar21;
      TStack_128.Array = pTVar1;
      if (((int)uVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        iVar11 = (*pcVar5)();
        return iVar11;
      }
      plVar9 = local_170;
      pFVar23 = local_1a0;
      uVar18 = local_1ac;
      uVar28 = *(uint *)(plVar21 + 5);
      if (uVar15 != uVar28) {
        pTVar24 = pTVar1;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
        while (uVar15 == 0) {
          lVar27 = (longlong)iVar11;
          uVar19 = uVar19 + 0x20;
          iVar11 = iVar11 + 1;
          uVar15 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14407a930;
          uVar15 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar27 * 4 + 4);
        }
        uVar14 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_17c = (int)lVar27;
        uVar15 = local_17c + -1 + uVar19;
        if ((int)uVar28 < (int)uVar15) {
          uVar15 = uVar28;
        }
      }
LAB_14407a930:
      while( true ) {
        plVar21 = local_130;
        if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
          local_1b8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
        }
        if (((TStack_128.CurrentBitIndex == uVar15) && (TStack_128.Array == pTVar1)) &&
           (plVar21 == plVar9)) break;
        iVar11 = *(int *)(*plVar21 + (longlong)TStack_128.CurrentBitIndex * 0xc);
        if (((uVar18 & (int)uVar25 < *(int *)&(pFVar23->Children).field_0x18) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        local_190 = local_1b0 + iVar11;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((longlong)(int)uVar25 * 0x50 + *(longlong *)&(pFVar23->Children).field_0x10),
                   local_178,(bool *)&local_190);
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
      local_1b4 = local_1b4 + 1;
      piVar17 = (int *)(ulonglong)local_1b4;
      local_198 = local_198 + 1;
      uVar26 = local_1a8 + 1;
      uVar14 = (ulonglong)local_18c;
      param_1 = local_188;
      iVar11 = local_1b0;
    } while (local_198 < local_168);
  }
  return iVar11;
}

// Construct @ 144081d50

void __thiscall FTransformCollection::Construct(FTransformCollection *this)

{
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<UE::Math::TTransform<float>_>
            ((FManagedArrayCollection *)this,TransformAttribute,TransformGroup,&this->Transform,
             &local_18);
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<FString>
            ((FManagedArrayCollection *)this,BoneNameAttribute,TransformGroup,&this->BoneName,
             &local_18);
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<FLinearColor>
            ((FManagedArrayCollection *)this,BoneColorAttribute,TransformGroup,&this->BoneColor,
             &local_18);
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<int>
            ((FManagedArrayCollection *)this,ParentAttribute,TransformGroup,&this->Parent,&local_18)
  ;
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::
  AddExternalAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((FManagedArrayCollection *)this,ChildrenAttribute,TransformGroup,&this->Children,
             &local_18);
  return;
}

// DefineTransformSchema @ 144085b70

void __cdecl FTransformCollection::DefineTransformSchema(FManagedArrayCollection *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar6;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined2 local_e4;
  undefined2 uStack_e2;
  undefined2 local_d8;
  undefined2 uStack_d6;
  undefined2 local_cc;
  undefined2 uStack_ca;
  undefined2 local_c0;
  undefined2 uStack_be;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  FVar4 = TransformAttribute;
  FVar3 = TransformGroup;
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_ee;
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,TransformAttribute,TransformGroup);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<float>_>
              (param_1,FVar4,FVar3,&local_a8);
  }
  FManagedArrayCollection::ModifyAttribute<UE::Math::TTransform<float>_>(param_1,FVar4,FVar3);
  FVar4 = BoneNameAttribute;
  FVar3 = TransformGroup;
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_e2;
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,BoneNameAttribute,TransformGroup);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<FString>(param_1,FVar4,FVar3,&local_98);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar4,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58 = FVar4;
  local_50 = FVar3;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar6->field_0x10 != '\b') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar6->field_0x10);
  lVar1 = *(longlong *)&pTVar6->field_0x30;
  if (lVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)(lVar1 + 8) = 1;
  FVar4 = BoneColorAttribute;
  FVar3 = TransformGroup;
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_d6;
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,BoneColorAttribute,TransformGroup);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(param_1,FVar4,FVar3,&local_88);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,FVar4,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48 = FVar4;
  local_40 = FVar3;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar6->field_0x10 != '\x04') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameType<T>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x315,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar6->field_0x10);
  lVar1 = *(longlong *)&pTVar6->field_0x30;
  if (lVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x319,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)(lVar1 + 8) = 1;
  FVar4 = ParentAttribute;
  FVar3 = TransformGroup;
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_ca;
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,ParentAttribute,TransformGroup);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(param_1,FVar4,FVar3,&local_78);
  }
  FManagedArrayCollection::ModifyAttribute<int>(param_1,FVar4,FVar3);
  FVar4 = ChildrenAttribute;
  FVar3 = TransformGroup;
  local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_68.GroupIndexDependency.Number = 0;
  local_68.Saved = true;
  local_68.bAllowCircularDependency = false;
  local_68._10_2_ = uStack_be;
  bVar5 = FManagedArrayCollection::HasAttribute(param_1,ChildrenAttribute,TransformGroup);
  if (!bVar5) {
    FManagedArrayCollection::
    AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (param_1,FVar4,FVar3,&local_68);
  }
  FManagedArrayCollection::ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (param_1,FVar4,FVar3);
  return;
}

// MergeElements @ 144095610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformCollection::MergeElements
          (FTransformCollection *this,FName *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,FProcessingParameters param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  FTransformCollection *pFVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar11;
  byte bVar12;
  int *piVar13;
  longlong lVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint *puVar20;
  longlong *plVar21;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar22;
  uint uVar23;
  uint uVar24;
  TManagedArray<int> *pTVar25;
  longlong lVar26;
  undefined1 auStackY_258 [32];
  uint local_228;
  undefined1 local_224;
  undefined1 local_223 [3];
  uint local_220 [2];
  longlong local_218;
  uint local_210;
  longlong local_208;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_200;
  TManagedArray<int> *local_1f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1f0;
  longlong local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e0;
  int local_1d0;
  uint local_1cc;
  uint local_1c8 [2];
  int local_1c0;
  int local_1bc;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1b8;
  FTransformCollection *local_1b0;
  longlong *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168 [2];
  longlong local_160;
  FName *local_158;
  int local_150;
  int local_14c;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  undefined4 local_cc;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (param_2->ArrayNum != 0) {
    local_1f0 = param_3;
    local_1b8 = param_2;
    local_1b0 = this;
    local_158 = param_1;
    if (param_2->ArrayNum == param_3->ArrayNum) {
      if (*param_1 == TransformGroup) {
        iVar8 = 0;
        pTVar11 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                          *)&this->_padding_,*param_1);
        piVar13 = (int *)&pTVar11->field_0x8;
        if (pTVar11 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
          piVar13 = (int *)0x0;
        }
        if (piVar13 != (int *)0x0) {
          iVar8 = *piVar13;
        }
        local_1d0 = iVar8;
        GeometryCollectionAlgo::ValidateSortedList(param_2,&local_1d0);
        iVar8 = param_2->ArrayNum;
        pTVar25 = &this->Parent;
        local_228 = 0;
        pTVar22 = &this->Children;
        local_200 = pTVar22;
        local_1f8 = pTVar25;
        if (0 < iVar8) {
          local_218 = 0;
          do {
            lVar14 = local_218;
            uVar17 = 0;
            if ((int)local_228 < iVar8) {
              uVar17 = ~local_228 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            uVar17 = *(uint *)((param_2->AllocatorInstance).Data + lVar14);
            lVar26 = (longlong)(int)uVar17;
            if (((int)uVar17 < 0) ||
               (iVar8 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25), iVar8 <= (int)uVar17))
            {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4913942344723594965>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                 ,299,"0 <= Index && Index < ParentArray.Num()");
              if (bVar7) {
code_r0x000144096509:
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              uVar23 = 0;
              if ((int)local_228 < local_1f0->ArrayNum) {
                uVar23 = ~local_228 >> 0x1f;
              }
              if ((uVar23 == 0) &&
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
              uVar18 = ~uVar17 >> 0x1f;
              local_220[0] = *(uint *)((local_1f0->AllocatorInstance).Data + lVar14);
              uVar23 = 0;
              if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
                uVar23 = uVar18;
              }
              local_210 = uVar18;
              if ((uVar23 == 0) &&
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
              uVar23 = local_220[0];
              local_208 = CONCAT44(local_208._4_4_,
                                   *(undefined4 *)(*(longlong *)&pTVar25->field_0x10 + lVar26 * 4));
              if (((int)local_220[0] < 0) ||
                 (iVar8 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25), iVar8 <= (int)uVar23)
                 ) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4913942344723594961>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                   ,0x12f,"0 <= RemapId && RemapId < ParentArray.Num()");
                lVar14 = local_218;
                if (bVar7) goto code_r0x000144096509;
              }
              else {
                uVar23 = 0;
                if ((int)uVar17 < *(int *)&pTVar22->field_0x18) {
                  uVar23 = uVar18;
                }
                if ((uVar23 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_1e8 = lVar26 * 0x50;
                iStack_1a0 = 0;
                plVar21 = (longlong *)(*(longlong *)&pTVar22->field_0x10 + local_1e8);
                uVar23 = *(uint *)(plVar21 + 5);
                pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
                uStack_19c = 1;
                local_188 = 0;
                uStack_18c = 0;
                if (uVar23 != 0) {
                  pTVar19 = pTVar3;
                  if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
                  }
                  uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
                  while (uVar18 == 0) {
                    lVar14 = (longlong)iStack_1a0;
                    local_188 = local_188 + 0x20;
                    iStack_1a0 = iStack_1a0 + 1;
                    uStack_18c = uVar23;
                    if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
                    goto LAB_14409594d;
                    uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
                  }
                  uStack_19c = -uVar18 & uVar18;
                  uVar2 = (ulonglong)uStack_19c * 2 + 1;
                  lVar14 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                    }
                  }
                  local_150 = (int)lVar14;
                  uStack_18c = local_150 + -1 + local_188;
                  if ((int)uVar23 < (int)uStack_18c) {
                    uStack_18c = uVar23;
                  }
                }
LAB_14409594d:
                uVar18 = *(uint *)(plVar21 + 5);
                uStack_184 = local_ac;
                uVar16 = uVar18 & 0xffffffe0;
                iStack_180 = (int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34);
                TStack_140._padding_ = CONCAT44(uStack_19c,iStack_1a0);
                uStack_190 = 0xffffffff;
                TStack_140.CurrentBitIndex = uStack_18c;
                TStack_140.UnvisitedBitMask = 0xffffffff;
                iVar8 = (int)uVar18 >> 5;
                TStack_140._28_4_ = local_ac;
                TStack_140.BaseBitIndex = local_188;
                uStack_120 = CONCAT44(uStack_17c,iStack_180);
                local_1a8 = plVar21;
                local_198 = pTVar3;
                local_148 = plVar21;
                TStack_140.Array = pTVar3;
                if ((((int)uVar18 < 0) || ((int)uVar23 < (int)uVar18)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x7af,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar5 = local_1b0;
                uVar23 = *(uint *)(plVar21 + 5);
                if (uVar18 != uVar23) {
                  pTVar19 = pTVar3;
                  if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
                  }
                  uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                           *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
                  while (uVar18 == 0) {
                    lVar14 = (longlong)iVar8;
                    uVar16 = uVar16 + 0x20;
                    iVar8 = iVar8 + 1;
                    uVar18 = uVar23;
                    if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
                    goto LAB_144095a60;
                    uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
                  }
                  uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
                  lVar14 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                    }
                  }
                  local_14c = (int)lVar14;
                  uVar18 = local_14c + -1 + uVar16;
                  if ((int)uVar23 < (int)uVar18) {
                    uVar18 = uVar23;
                  }
                }
LAB_144095a60:
                while( true ) {
                  plVar6 = local_148;
                  if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
                    local_224 = 0;
                    `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_224);
                  }
                  pTVar22 = local_200;
                  uVar23 = local_220[0];
                  if (((TStack_140.CurrentBitIndex == uVar18) && (TStack_140.Array == pTVar3)) &&
                     (plVar6 == plVar21)) break;
                  local_1cc = *(uint *)(*plVar6 + (longlong)TStack_140.CurrentBitIndex * 0xc);
                  lVar14 = (longlong)(int)local_1cc;
                  uVar16 = 0;
                  if ((int)local_1cc < *(int *)&(pFVar5->Parent).field_0x18) {
                    uVar16 = ~local_1cc >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(uint *)(*(longlong *)&(pFVar5->Parent).field_0x10 + lVar14 * 4) = uVar23;
                  lVar14 = (longlong)(int)local_220[0];
                  uVar23 = 0;
                  if ((int)local_220[0] < *(int *)&(pFVar5->Children).field_0x18) {
                    uVar23 = ~local_220[0] >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                             (lVar14 * 0x50 + *(longlong *)&(pFVar5->Children).field_0x10),
                             &local_178,(bool *)&local_1cc);
                  TStack_140.UnvisitedBitMask =
                       TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
                }
                uVar23 = (uint)local_208;
                lVar14 = (longlong)(int)(uint)local_208;
                if ((-1 < (int)(uint)local_208) &&
                   (iVar8 = (**(code **)(*(longlong *)local_200 + 0x60))(local_200),
                   (int)uVar23 < iVar8)) {
                  uVar18 = 0;
                  if ((int)uVar23 < *(int *)&pTVar22->field_0x18) {
                    uVar18 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pTVar15 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                            (*(longlong *)&pTVar22->field_0x10 + lVar14 * 0x50);
                  local_1c8[0] = uVar17;
                  if (*(int *)&(pTVar15->Elements).field_0x8 !=
                      *(int *)&(pTVar15->Elements).field_0x34) {
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                              (pTVar15,uVar17,(int *)local_1c8);
                  }
                  uVar18 = 0;
                  if ((int)uVar23 < *(int *)&pTVar22->field_0x18) {
                    uVar18 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                             (*(longlong *)&pTVar22->field_0x10 + lVar14 * 0x50),&local_174,
                             (bool *)local_220);
                }
                pTVar25 = local_1f8;
                uVar23 = local_210;
                uVar18 = 0;
                if ((int)uVar17 < *(int *)&local_1f8->field_0x18) {
                  uVar18 = local_210;
                }
                if ((uVar18 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined4 *)(*(longlong *)&pTVar25->field_0x10 + lVar26 * 4) = 0xffffffff;
                uVar18 = 0;
                if ((int)uVar17 < *(int *)&pTVar22->field_0x18) {
                  uVar18 = uVar23;
                }
                if ((uVar18 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pTVar15 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                          (local_1e8 + *(longlong *)&pTVar22->field_0x10);
                bVar7 = 1 < pTVar15->HashSize;
                if (!bVar7) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar15);
                }
                puVar1 = &(pTVar15->Elements).field_0xc;
                *(undefined4 *)&(pTVar15->Elements).field_0x8 = 0;
                if (*(int *)puVar1 != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,0,(ForAnyElementType *)pTVar15,0,(int *)puVar1);
                }
                *(undefined4 *)&(pTVar15->Elements).field_0x30 = 0xffffffff;
                *(undefined4 *)&(pTVar15->Elements).field_0x34 = 0;
                iVar8 = *(int *)&(pTVar15->Elements).field_0x2c;
                *(undefined4 *)&(pTVar15->Elements).field_0x28 = 0;
                if ((iVar8 < 0) || (0x80 < iVar8)) {
                  *(undefined4 *)&(pTVar15->Elements).field_0x2c = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)&(pTVar15->Elements).field_0x10
                             ,0);
                }
                lVar14 = local_218;
                param_2 = local_1b8;
                if (bVar7) {
                  pTVar15->HashSize = 1;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar15);
                  lVar14 = local_218;
                  param_2 = local_1b8;
                }
              }
            }
            iVar8 = param_2->ArrayNum;
            local_228 = local_228 + 1;
            local_218 = lVar14 + 4;
          } while ((int)local_228 < iVar8);
        }
        pTVar25 = local_1f8;
        local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e0.ArrayNum = 0;
        local_1e0.ArrayMax = 0;
        local_1c0 = (**(code **)(*(longlong *)local_1f8 + 0x60))(local_1f8);
        GeometryCollectionAlgo::BuildIncrementMask(param_2,&local_1c0,&local_1e0);
        iVar9 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
        iVar8 = param_2->ArrayNum;
        local_210 = local_1e0.ArrayNum;
        iVar10 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
        uVar17 = 0;
        iVar10 = iVar10 - iVar8;
        local_160 = (longlong)iVar9;
        if (0 < iVar9) {
          local_1e8 = 0;
          local_218 = 0;
          local_208 = 0;
          do {
            lVar26 = local_1e8;
            lVar14 = local_218;
            uVar18 = ~uVar17 >> 0x1f;
            uVar23 = 0;
            if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
              uVar23 = uVar18;
            }
            if ((uVar23 == 0) &&
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
            if (*(int *)(local_208 + *(longlong *)&pTVar25->field_0x10) != -1) {
              uVar23 = 0;
              if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
                uVar23 = uVar18;
              }
              if ((uVar23 == 0) &&
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
              uVar23 = *(uint *)(*(longlong *)&pTVar25->field_0x10 + lVar26 * 4);
              uVar16 = 0;
              if ((int)uVar23 < local_1e0.ArrayNum) {
                uVar16 = ~uVar23 >> 0x1f;
              }
              if ((uVar16 == 0) &&
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
              iVar8 = *(int *)(local_1e0.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
              uVar23 = 0;
              if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
                uVar23 = uVar18;
              }
              if ((uVar23 == 0) &&
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
              piVar13 = (int *)(*(longlong *)&pTVar25->field_0x10 + lVar26 * 4);
              *piVar13 = *piVar13 - iVar8;
              lVar14 = local_218;
            }
            uVar23 = 0;
            if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
              uVar23 = uVar18;
            }
            if ((uVar23 == 0) &&
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
            if (*(int *)(*(longlong *)&pTVar25->field_0x10 + lVar26 * 4) < -1) {
LAB_144096047:
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4913942344723594929>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                 ,0x14f,
                                 "-1 <= ParentArray[Index] && ParentArray[Index] <= FinalSize");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              uVar23 = 0;
              if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
                uVar23 = uVar18;
              }
              if ((uVar23 == 0) &&
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
              if (iVar10 < *(int *)(*(longlong *)&pTVar25->field_0x10 + lVar26 * 4))
              goto LAB_144096047;
            }
            uVar23 = 0;
            uVar16 = uVar23;
            if ((int)uVar17 < *(int *)&pTVar22->field_0x18) {
              uVar16 = uVar18;
            }
            if ((uVar16 == 0) &&
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
            local_a8._0_8_ = 0;
            local_a8._8_8_ = 0;
            local_88 = (uint *)0x0;
            local_80 = 0;
            local_7c = 0x80;
            local_78 = 0xffffffff;
            local_74 = 0;
            local_68 = (ForElementType<FSetElementId>)0x0;
            local_60 = 0;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_a8,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       (*(longlong *)&pTVar22->field_0x10 + lVar14));
            uVar16 = uVar23;
            if ((int)uVar17 < *(int *)&pTVar22->field_0x18) {
              uVar16 = uVar18;
            }
            if ((uVar16 == 0) &&
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
            pTVar15 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      (lVar14 + *(longlong *)&pTVar22->field_0x10);
            if (*(int *)&(pTVar15->Elements).field_0x8 != *(int *)&(pTVar15->Elements).field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar15);
              *(undefined4 *)&(pTVar15->Elements).field_0x8 = 0;
              if (*(int *)&(pTVar15->Elements).field_0xc < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,0,(ForAnyElementType *)pTVar15,0,
                           (int *)&(pTVar15->Elements).field_0xc);
              }
              *(undefined4 *)&(pTVar15->Elements).field_0x30 = 0xffffffff;
              *(undefined4 *)&(pTVar15->Elements).field_0x34 = 0;
              *(undefined4 *)&(pTVar15->Elements).field_0x28 = 0;
            }
            uVar16 = local_80;
            iStack_1a0 = 0;
            uStack_19c = 1;
            uStack_18c = uVar23;
            if (local_80 != 0) {
              puVar20 = (uint *)(local_a8 + 0x10);
              if (local_88 != (uint *)0x0) {
                puVar20 = local_88;
              }
              uVar24 = *puVar20;
              while (uVar24 == 0) {
                lVar14 = (longlong)iStack_1a0;
                uVar23 = uVar23 + 0x20;
                iStack_1a0 = iStack_1a0 + 1;
                uStack_18c = local_80;
                if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
                goto LAB_144096230;
                uVar24 = (puVar20 + 1)[lVar14];
              }
              uStack_19c = -uVar24 & uVar24;
              uVar2 = (ulonglong)uStack_19c * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              local_170 = (int)lVar14;
              uStack_18c = (uVar23 - 1) + local_170;
              if ((int)local_80 < (int)uStack_18c) {
                uStack_18c = local_80;
              }
            }
LAB_144096230:
            local_1a8 = (longlong *)local_a8;
            uStack_184 = local_cc;
            local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
            uVar24 = local_80 & 0xffffffe0;
            iStack_180 = local_a8._8_4_ - local_74;
            TStack_110._padding_ = CONCAT44(uStack_19c,iStack_1a0);
            uStack_190 = 0xffffffff;
            TStack_110.CurrentBitIndex = uStack_18c;
            TStack_110.UnvisitedBitMask = 0xffffffff;
            iVar8 = (int)local_80 >> 5;
            TStack_110._28_4_ = local_cc;
            TStack_110.BaseBitIndex = uVar23;
            uStack_f0 = CONCAT44(uStack_17c,iStack_180);
            bVar12 = (byte)local_80;
            local_188 = uVar23;
            local_118 = local_1a8;
            TStack_110.Array = local_198;
            if (((int)local_80 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar16 != local_80) {
              puVar20 = (uint *)(local_a8 + 0x10);
              if (local_88 != (uint *)0x0) {
                puVar20 = local_88;
              }
              uVar23 = -1 << (bVar12 & 0x1f) & puVar20[iVar8];
              while (uVar23 == 0) {
                lVar14 = (longlong)iVar8;
                uVar24 = uVar24 + 0x20;
                iVar8 = iVar8 + 1;
                uVar16 = local_80;
                if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
                goto LAB_144096360;
                uVar23 = (puVar20 + 1)[lVar14];
              }
              uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              local_16c = (int)lVar14;
              uVar16 = (uVar24 - 1) + local_16c;
              if ((int)local_80 < (int)uVar16) {
                uVar16 = local_80;
              }
            }
LAB_144096360:
            while( true ) {
              plVar21 = local_118;
              if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
                local_223[0] = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_223);
              }
              if (((TStack_110.CurrentBitIndex == uVar16) &&
                  (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10)))
                 && (plVar21 == (longlong *)local_a8)) break;
              uVar23 = *(uint *)(*plVar21 + (longlong)TStack_110.CurrentBitIndex * 0xc);
              if ((-1 < (int)uVar23) && ((int)uVar23 < (int)local_210)) {
                uVar24 = 0;
                if ((int)uVar23 < local_1e0.ArrayNum) {
                  uVar24 = ~uVar23 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pTVar22 = local_200;
                local_1bc = uVar23 - *(int *)(local_1e0.AllocatorInstance.Data +
                                             (longlong)(int)uVar23 * 4);
                if ((-1 < local_1bc) && (local_1bc < iVar10)) {
                  uVar23 = 0;
                  if ((int)uVar17 < *(int *)&local_200->field_0x18) {
                    uVar23 = uVar18;
                  }
                  if ((uVar23 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                             ((longlong)(int)uVar17 * 0x50 + *(longlong *)&pTVar22->field_0x10),
                             local_168,(bool *)&local_1bc);
                }
              }
              TStack_110.UnvisitedBitMask =
                   TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
            }
            local_60 = 0;
            if (local_68 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_68);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_a8);
            uVar17 = uVar17 + 1;
            local_1e8 = local_1e8 + 1;
            local_208 = local_208 + 4;
            local_218 = local_218 + 0x50;
            pTVar22 = local_200;
            param_2 = local_1b8;
            pTVar25 = local_1f8;
          } while (local_1e8 < local_160);
        }
        if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.AllocatorInstance.Data);
        }
      }
      FManagedArrayCollection::MergeElements
                ((FManagedArrayCollection *)local_1b0,local_158,param_2,local_1f0,param_4);
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4913942344723594977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                         ,0x11f,"SortedMergeList.Num() == MergeRemapIndex.Num()");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// ParentTransforms @ 144098a20

void __thiscall
FTransformCollection::ParentTransforms
          (FTransformCollection *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FCollectionTransformFacade FStack_f8;
  
  if (this != (FTransformCollection *)0x0) {
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&FStack_f8,(FManagedArrayCollection *)this);
    GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
              (&FStack_f8,param_1,param_2);
  }
  return;
}

// ParentTransforms @ 144098a30

void __thiscall
FTransformCollection::ParentTransforms(FTransformCollection *this,int param_1,int param_2)

{
  FCollectionTransformFacade FStack_f8;
  
  if (this != (FTransformCollection *)0x0) {
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&FStack_f8,(FManagedArrayCollection *)this);
    GeometryCollection::Facades::FCollectionTransformFacade::ParentTransform
              (&FStack_f8,param_1,param_2);
  }
  return;
}

// RelativeTransformation @ 14409fee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FTransformCollection::RelativeTransformation
          (FTransformCollection *this,int *param_1,TTransform<double> *param_2)

{
  ulonglong uVar1;
  ulong64 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar14;
  uint *puVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  int local_1e4;
  int local_1e0;
  longlong *local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  uint *local_1c8;
  longlong *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  undefined4 local_144;
  __m128 local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  __m128 local_f8;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98;
  __m128 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_218;
  puVar19 = (uint *)0x0;
  local_1c8 = (uint *)param_1;
  pTVar14 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)&this->_padding_,TransformGroup);
  puVar15 = (uint *)&pTVar14->field_0x8;
  if (pTVar14 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    puVar15 = puVar19;
  }
  uVar17 = 0;
  if (puVar15 != (uint *)0x0) {
    uVar17 = *puVar15;
  }
  if ((int)uVar17 <= *param_1) {
    local_1e8 = 0;
    bVar11 = `FTransformCollection::RelativeTransformation'::__l3::<lambda_1>::operator()
                       (&local_1e8);
    if (!bVar11) {
      return;
    }
  }
  local_138.m128_f32[2] = (float)(param_2->Rotation).ZW.m128d_f64[0];
  local_138.m128_f32[3] = (float)(param_2->Rotation).ZW.m128d_f64[1];
  iVar12 = *(int *)&(this->Children).field_0x18;
  local_138.m128_f32[0] = (float)(param_2->Rotation).XY.m128d_f64[0];
  local_138.m128_f32[1] = (float)(param_2->Rotation).XY.m128d_f64[1];
  local_128 = (float)(param_2->Translation).XY.m128d_f64[0];
  fStack_124 = (float)(param_2->Translation).XY.m128d_f64[1];
  local_118._0_4_ = (float)(param_2->Scale3D).XY.m128d_f64[0];
  local_118._4_4_ = (float)(param_2->Scale3D).XY.m128d_f64[1];
  fStack_120 = (float)(param_2->Translation).ZW.m128d_f64[0];
  fStack_11c = (float)(param_2->Translation).ZW.m128d_f64[1];
  local_118._12_4_ = (float)(param_2->Scale3D).ZW.m128d_f64[1];
  local_118._8_4_ = (float)(param_2->Scale3D).ZW.m128d_f64[0];
  uVar17 = *param_1;
  uVar18 = 0;
  if ((int)uVar17 < iVar12) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (local_1f8 = (longlong)(int)uVar17, local_1f0 = (longlong)iVar12,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar16 = (longlong)(int)uVar17 * 0x50 + *(longlong *)&(this->Children).field_0x10;
  iVar12 = *(int *)(lVar16 + 8);
  uVar17 = 0;
  if (iVar12 != *(int *)(lVar16 + 0x34)) {
    auVar25._4_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (float)(local_118._4_4_ & _UNK_15061cc74));
    auVar25._0_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (float)(local_118._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar25._8_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (float)(local_118._8_4_ & _UNK_15061cc78));
    auVar25._12_4_ =
         -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (float)(local_118._12_4_ & _UNK_15061cc7c));
    iVar12 = movmskps(iVar12,auVar25);
    if (iVar12 == 0) {
      _local_108 = UE::Math::TTransform<float>::Identity.Rotation;
      local_e8 = UE::Math::TTransform<float>::Identity.Scale3D;
      local_f8 = UE::Math::TTransform<float>::Identity.Translation;
    }
    else {
      local_108._0_4_ = local_138.m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
      local_108._4_4_ = local_138.m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
      fStack_100 = local_138.m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
      fStack_fc = local_138.m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
      auVar27 = blendps(local_118,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
      auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar27);
      auVar35._0_4_ =
           ~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & auVar27._0_4_) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar25._0_4_;
      auVar35._4_4_ =
           ~-(uint)((float)(_UNK_15061cc74 & auVar27._4_4_) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar25._4_4_;
      auVar35._8_4_ =
           ~-(uint)((float)(_UNK_15061cc78 & auVar27._8_4_) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar25._8_4_;
      auVar35._12_4_ =
           ~-(uint)((float)(_UNK_15061cc7c & auVar27._12_4_) <=
                   GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar25._12_4_;
      local_e8 = (__m128)insertps(auVar35,auVar35,8);
      fVar31 = local_e8.m128_f32[0] * local_128;
      fVar32 = local_e8.m128_f32[1] * fStack_124;
      fVar33 = local_e8.m128_f32[2] * fStack_120;
      fVar34 = local_e8.m128_f32[3] * fStack_11c;
      fVar26 = fVar32 * (float)local_108._0_4_ - (float)local_108._4_4_ * fVar31;
      fVar28 = fVar33 * (float)local_108._4_4_ - fStack_100 * fVar32;
      fVar29 = fVar31 * fStack_100 - (float)local_108._0_4_ * fVar33;
      fVar30 = fVar34 * fStack_fc - fStack_fc * fVar34;
      fVar28 = fVar28 + fVar28;
      fVar29 = fVar29 + fVar29;
      fVar26 = fVar26 + fVar26;
      fVar30 = fVar30 + fVar30;
      auVar27._0_4_ =
           0.0 - (fStack_fc * fVar28 + fVar31 +
                 (fVar26 * (float)local_108._4_4_ - fVar29 * fStack_100));
      auVar27._4_4_ =
           0.0 - (fStack_fc * fVar29 + fVar32 +
                 (fVar28 * fStack_100 - fVar26 * (float)local_108._0_4_));
      auVar27._8_4_ =
           0.0 - (fStack_fc * fVar26 + fVar33 +
                 (fVar29 * (float)local_108._0_4_ - fVar28 * (float)local_108._4_4_));
      auVar27._12_4_ =
           0.0 - (fStack_fc * fVar30 + fVar34 + (fVar30 * fStack_fc - fVar30 * fStack_fc));
      local_f8 = (__m128)insertps(auVar27,auVar27,8);
    }
    uVar18 = *param_1;
    iVar12 = *(int *)&(this->Children).field_0x18;
    uVar23 = uVar17;
    if ((int)uVar18 < iVar12) {
      uVar23 = ~uVar18 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (local_1f8 = (longlong)(int)uVar18, local_1f0 = (longlong)iVar12,
       bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_1b4 = 1;
    plVar22 = (longlong *)((longlong)(int)uVar18 * 0x50 + *(longlong *)&(this->Children).field_0x10)
    ;
    uVar18 = *(uint *)(plVar22 + 5);
    local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar22 + 2);
    uStack_1a4 = uVar17;
    local_1a0 = uVar17;
    uStack_1b8 = uVar17;
    if (uVar18 != 0) {
      pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar22[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar22[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = local_1b0;
      }
      uVar23 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      puVar15 = puVar19;
      local_1a0 = 0;
      uStack_1b8 = 0;
      while (uVar23 == 0) {
        iVar12 = (int)puVar19;
        local_1a0 = (int)puVar15 + 0x20;
        puVar15 = (uint *)(ulonglong)local_1a0;
        uStack_1b8 = iVar12 + 1;
        puVar19 = (uint *)(ulonglong)uStack_1b8;
        uStack_1a4 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1b8)
        goto LAB_1440a01df;
        uVar23 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar12 * 4 + 4);
      }
      uStack_1b4 = -uVar23 & uVar23;
      uVar1 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_1e4 = (int)lVar16;
      uStack_1a4 = (local_1a0 - 1) + local_1e4;
      if ((int)uVar18 < (int)uStack_1a4) {
        uStack_1a4 = uVar18;
      }
    }
LAB_1440a01df:
    uVar18 = *(uint *)(plVar22 + 5);
    uStack_19c = local_144;
    iStack_198 = (int)plVar22[1] - *(int *)((longlong)plVar22 + 0x34);
    uVar23 = uVar18 & 0xffffffe0;
    uStack_1a8 = 0xffffffff;
    TStack_188.CurrentBitIndex = uStack_1a4;
    TStack_188.UnvisitedBitMask = 0xffffffff;
    local_1d0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar22 + 2);
    TStack_188._padding_ = CONCAT44(uStack_1b4,uStack_1b8);
    iVar12 = (int)uVar18 >> 5;
    TStack_188._28_4_ = local_144;
    TStack_188.BaseBitIndex = local_1a0;
    uStack_168 = CONCAT44(uStack_194,iStack_198);
    local_1d8 = plVar22;
    local_1c0 = plVar22;
    local_190 = plVar22;
    TStack_188.Array = local_1b0;
    if (((int)uVar18 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar22 + 2);
    uVar13 = *(uint *)(plVar22 + 5);
    if (uVar18 != uVar13) {
      pTVar20 = pTVar21;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar22[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar22[4];
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) &
               *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar12;
        uVar23 = uVar23 + 0x20;
        iVar12 = iVar12 + 1;
        uVar18 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1440a0300;
        uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar16 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_1e0 = (int)lVar16;
      uVar18 = local_1e0 + -1 + uVar23;
      if ((int)uVar13 < (int)uVar18) {
        uVar18 = uVar13;
      }
    }
LAB_1440a0300:
    while( true ) {
      plVar4 = local_190;
      if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
        local_1e7[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar22 + 2);
      }
      if (((TStack_188.CurrentBitIndex == uVar18) && (TStack_188.Array == pTVar21)) &&
         (param_1 = (int *)local_1c8, plVar4 == plVar22)) break;
      uVar23 = *(uint *)(*plVar4 + (longlong)TStack_188.CurrentBitIndex * 0xc);
      lVar16 = (longlong)(int)uVar23;
      iVar12 = *(int *)&(this->Transform).field_0x18;
      uVar13 = uVar17;
      if ((int)uVar23 < iVar12) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_1f8 = lVar16, local_1f0 = (longlong)iVar12,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_d8 = GlobalVectorConstants::Float0001;
      lVar24 = lVar16 * 0x30;
      local_b8 = GlobalVectorConstants::Float1110;
      local_c8 = GlobalVectorConstants::FloatZero;
      UE::Math::TTransform<float>::Multiply
                ((TTransform<float> *)&local_d8,
                 (TTransform<float> *)(*(longlong *)&(this->Transform).field_0x10 + lVar24),
                 (TTransform<float> *)local_108);
      iVar12 = *(int *)&(this->Transform).field_0x18;
      uVar5 = local_d8.m128_u64[0];
      uVar6 = local_d8.m128_u64[1];
      uVar7 = local_c8.m128_u64[0];
      uVar8 = local_c8.m128_u64[1];
      uVar9 = local_b8.m128_u64[0];
      uVar10 = local_b8.m128_u64[1];
      uVar13 = uVar17;
      if ((int)uVar23 < iVar12) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_1f8 = lVar16, local_1f0 = (longlong)iVar12,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar16 = *(longlong *)&(this->Transform).field_0x10;
      *(ulong64 *)(lVar16 + lVar24) = uVar5;
      ((ulong64 *)(lVar16 + lVar24))[1] = uVar6;
      puVar2 = (ulong64 *)(lVar16 + 0x10 + lVar24);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2 = (ulong64 *)(lVar16 + 0x20 + lVar24);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      pTVar21 = local_1d0;
      plVar22 = local_1d8;
    }
  }
  uVar18 = *param_1;
  iVar12 = *(int *)&(this->Transform).field_0x18;
  uVar23 = uVar17;
  if ((int)uVar18 < iVar12) {
    uVar23 = ~uVar18 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (local_1f8 = (longlong)(int)uVar18, local_1f0 = (longlong)iVar12,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8 = GlobalVectorConstants::Float0001;
  local_88 = GlobalVectorConstants::Float1110;
  local_98 = GlobalVectorConstants::FloatZero;
  UE::Math::TTransform<float>::Multiply
            ((TTransform<float> *)&local_a8,(TTransform<float> *)&local_138,
             (TTransform<float> *)
             ((longlong)(int)uVar18 * 0x30 + *(longlong *)&(this->Transform).field_0x10));
  uVar18 = *param_1;
  lVar16 = (longlong)(int)uVar18;
  iVar12 = *(int *)&(this->Transform).field_0x18;
  local_1f0 = (longlong)iVar12;
  uVar5 = local_a8.m128_u64[0];
  uVar6 = local_a8.m128_u64[1];
  uVar7 = local_98.m128_u64[0];
  uVar8 = local_98.m128_u64[1];
  uVar9 = local_88.m128_u64[0];
  uVar10 = local_88.m128_u64[1];
  if ((int)uVar18 < iVar12) {
    uVar17 = ~uVar18 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (local_1f8 = lVar16,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar24 = *(longlong *)&(this->Transform).field_0x10;
  puVar2 = (ulong64 *)(lVar24 + lVar16 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2 = (ulong64 *)(lVar24 + 0x10 + lVar16 * 0x30);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2 = (ulong64 *)(lVar24 + 0x20 + lVar16 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  return;
}

// RemoveElements @ 1440a8e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FTransformCollection::RemoveElements
          (FTransformCollection *this,FName *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FProcessingParameters param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FTransformCollection *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar16;
  undefined7 extraout_var;
  byte bVar17;
  int *piVar18;
  longlong lVar19;
  TTransform<double> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  ForElementType<unsigned_int> FVar25;
  longlong *plVar26;
  uint *puVar27;
  longlong lVar28;
  uint uVar29;
  TManagedArray<int> *pTVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_3b8 [32];
  undefined1 local_388;
  undefined1 local_387 [3];
  uint local_384;
  FProcessingParameters local_380;
  ForElementType<unsigned_int> local_378;
  uint local_370;
  longlong *local_368;
  uint local_360;
  longlong local_358;
  longlong local_350;
  TArray<int,TSizedDefaultAllocator<32>_> local_348;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_338;
  int local_328 [2];
  uint local_320 [2];
  int local_318;
  int local_314;
  FTransformCollection *local_310;
  longlong local_308;
  longlong *local_300;
  int iStack_2f8;
  uint uStack_2f4;
  ForElementType<unsigned_int> local_2f0;
  undefined4 uStack_2e8;
  uint uStack_2e4;
  uint local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  longlong *local_2b0;
  FName *local_2a8;
  longlong *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  longlong *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  TTransform<double> local_238;
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined1 local_198 [32];
  uint *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (param_2->ArrayNum != 0) {
    local_380 = param_3;
    local_310 = this;
    local_2d0 = param_2;
    local_2a8 = param_1;
    if (*param_1 == TransformGroup) {
      piVar24 = (int *)0x0;
      iVar12 = 0;
      pTVar16 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                        *)&this->_padding_,*param_1);
      piVar18 = (int *)&pTVar16->field_0x8;
      if (pTVar16 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
        piVar18 = piVar24;
      }
      if (piVar18 != (int *)0x0) {
        iVar12 = *piVar18;
      }
      local_328[0] = iVar12;
      GeometryCollectionAlgo::ValidateSortedList(param_2,local_328);
      uVar33 = _UNK_15061cc8c;
      uVar29 = _UNK_15061cc88;
      uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      local_368 = (longlong *)&(this->Parent).field_0x10;
      local_370 = 0;
      if (0 < param_2->ArrayNum) {
        local_350 = 0;
        do {
          lVar28 = local_350;
          plVar26 = local_368;
          pTVar30 = &this->Parent;
          local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.ArrayNum = 0;
          local_338.ArrayMax = 0;
          GeometryCollectionAlgo::
          GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
                    (&this->Transform,pTVar30,&local_338);
          uVar11 = 0;
          if ((int)(uint)piVar24 < param_2->ArrayNum) {
            uVar11 = ~(uint)piVar24 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = *(uint *)((param_2->AllocatorInstance).Data + lVar28);
          local_358 = CONCAT44(local_358._4_4_,uVar11);
          if ((((int)uVar11 < 0) ||
              (iVar12 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30), iVar12 <= (int)uVar11))
             && (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_4913942344723595043>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                     ,0xdd,"0 <= Index && Index < ParentArray.Num()"), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar22 = ~uVar11 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar11 < (int)plVar26[1]) {
            uVar13 = uVar22;
          }
          local_360 = uVar22;
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_308 = (longlong)(int)uVar11 * 4;
          uVar13 = *(uint *)(local_308 + *plVar26);
          lVar28 = (longlong)(int)uVar13;
          iVar12 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
          if ((iVar12 <= (int)uVar13) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4913942344723595040>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                  ,0xe0,"ParentID < ParentArray.Num()"), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar31 = 0;
          if ((int)uVar11 < *(int *)&(this->Children).field_0x18) {
            uVar31 = uVar22;
          }
          if ((uVar31 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iStack_2f8 = 0;
          local_300 = (longlong *)
                      ((longlong)(int)uVar11 * 0x50 + *(longlong *)&(this->Children).field_0x10);
          local_2e0 = 0;
          uVar11 = *(uint *)(local_300 + 5);
          local_378 = (ForElementType<unsigned_int>)(local_300 + 2);
          uStack_2f4 = 1;
          uStack_2e4 = 0;
          if (uVar11 != 0) {
            FVar25 = local_378;
            if ((TBitArray<FDefaultBitArrayAllocator> *)local_300[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              FVar25 = (ForElementType<unsigned_int>)local_300[4];
            }
            uVar22 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar25)->AllocatorInstance).
                              InlineData;
            while (uVar22 == 0) {
              lVar19 = (longlong)iStack_2f8;
              local_2e0 = local_2e0 + 0x20;
              iStack_2f8 = iStack_2f8 + 1;
              uStack_2e4 = uVar11;
              if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2f8)
              goto LAB_1440a91c3;
              uVar22 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar25)->
                                 AllocatorInstance).InlineData + lVar19 * 4 + 4);
            }
            uStack_2f4 = -uVar22 & uVar22;
            uVar3 = (ulonglong)uStack_2f4 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_2c8 = (int)lVar19;
            uStack_2e4 = local_2c8 + -1 + local_2e0;
            if ((int)uVar11 < (int)uStack_2e4) {
              uStack_2e4 = uVar11;
            }
          }
LAB_1440a91c3:
          uVar22 = *(uint *)(local_300 + 5);
          uStack_2dc = local_1bc;
          uVar31 = uVar22 & 0xffffffe0;
          iStack_2d8 = (int)local_300[1] - *(int *)((longlong)local_300 + 0x34);
          TStack_298._padding_ = CONCAT44(uStack_2f4,iStack_2f8);
          uStack_2e8 = 0xffffffff;
          TStack_298.CurrentBitIndex = uStack_2e4;
          TStack_298.UnvisitedBitMask = 0xffffffff;
          iVar12 = (int)uVar22 >> 5;
          TStack_298._28_4_ = local_1bc;
          TStack_298.BaseBitIndex = local_2e0;
          uStack_278 = CONCAT44(uStack_2d4,iStack_2d8);
          local_2f0 = local_378;
          local_2b0 = local_300;
          local_2a0 = local_300;
          TStack_298.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_378;
          if ((((int)uVar22 < 0) || ((int)uVar11 < (int)uVar22)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = *(int *)((longlong)local_378 + 0x18);
          if (uVar22 != uVar11) {
            FVar25 = local_378;
            if (*(ForElementType<unsigned_int> *)((longlong)local_378 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_378 + 0x10);
            }
            uVar22 = -1 << ((byte)uVar22 & 0x1f) &
                     *(uint *)((longlong)FVar25 + (longlong)iVar12 * 4);
            while (uVar22 == 0) {
              lVar19 = (longlong)iVar12;
              uVar31 = uVar31 + 0x20;
              iVar12 = iVar12 + 1;
              uVar22 = uVar11;
              if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
              goto LAB_1440a92cf;
              uVar22 = *(uint *)((longlong)FVar25 + 4 + lVar19 * 4);
            }
            uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_2c4 = (int)lVar19;
            uVar22 = local_2c4 + -1 + uVar31;
            if ((int)uVar11 < (int)uVar22) {
              uVar22 = uVar11;
            }
          }
LAB_1440a92cf:
          iVar12 = (uint)local_358;
          while( true ) {
            plVar26 = local_2a0;
            if ((int)local_2a0[1] - *(int *)((longlong)local_2a0 + 0x34) != (int)uStack_278) {
              local_388 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_388);
            }
            if (((TStack_298.CurrentBitIndex == uVar22) &&
                ((ForElementType<unsigned_int>)TStack_298.Array == local_378)) &&
               (plVar26 == local_2b0)) break;
            local_148.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_384 = *(uint *)(*plVar26 + (longlong)TStack_298.CurrentBitIndex * 0xc);
            local_148.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_148.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_148.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            uVar11 = 0;
            if (iVar12 < (int)local_368[1]) {
              uVar11 = local_360;
            }
            local_148.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_148.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar19 = (longlong)(int)local_384;
            uVar4 = *(undefined4 *)(local_308 + *local_368);
            uVar11 = 0;
            if ((int)local_384 < (int)local_368[1]) {
              uVar11 = ~local_384 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)(*local_368 + lVar19 * 4) = uVar4;
            if (-1 < (int)uVar13) {
              uVar31 = ~uVar13 >> 0x1f;
              uVar11 = 0;
              if ((int)uVar13 < *(int *)&(this->Children).field_0x18) {
                uVar11 = uVar31;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar26 = (longlong *)(*(longlong *)&(this->Children).field_0x10 + lVar28 * 0x50);
              if ((int)plVar26[1] != *(int *)((longlong)plVar26 + 0x34)) {
                plVar21 = plVar26 + 7;
                if ((longlong *)plVar26[8] != (longlong *)0x0) {
                  plVar21 = (longlong *)plVar26[8];
                }
                iVar14 = *(int *)((longlong)plVar21 +
                                 (ulonglong)((int)plVar26[9] - 1U & local_384) * 4);
                if (iVar14 != -1) {
                  do {
                    lVar19 = *plVar26 + (longlong)iVar14 * 0xc;
                    if (*(uint *)(*plVar26 + (longlong)iVar14 * 0xc) == local_384) {
                      if ((lVar19 != 0) &&
                         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_4913942344723595031>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                              ,0xe9,"!ChildrenArray[ParentID].Find(ChildID)"),
                         bVar10)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      break;
                    }
                    iVar14 = *(int *)(lVar19 + 4);
                  } while (iVar14 != -1);
                }
              }
              uVar11 = 0;
              if ((int)uVar13 < *(int *)&(this->Children).field_0x18) {
                uVar11 = uVar31;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                         (*(longlong *)&(this->Children).field_0x10 + lVar28 * 0x50),&local_2c0,
                         (bool *)&local_384);
              uVar11 = 0;
              if ((int)uVar13 < local_338.ArrayNum) {
                uVar11 = uVar31;
              }
              iVar14 = local_338.ArrayNum;
              if (uVar11 == 0) {
                iVar14 = 0x506109c0;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar11 = (uint)CONCAT71(extraout_var,bVar10);
                if (bVar10) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              this_00 = (TTransform<double> *)(local_338.AllocatorInstance.Data + lVar28 * 0x60);
              lVar19 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                        (double)CONCAT44(uVar33 & *(uint *)((longlong)
                                                            (this_00->Scale3D).ZW.m128d_f64 + 0xc),
                                         uVar29 & *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1)));
              auVar8._8_4_ = (int)lVar19;
              auVar8._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                              (double)CONCAT44(uVar23 & *(uint *)((longlong)
                                                                  (this_00->Scale3D).ZW.m128d_f64 +
                                                                 4),
                                               uVar32 & *(uint *)(this_00->Scale3D).ZW.m128d_f64));
              auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
              uVar31 = movmskpd(iVar14,auVar8);
              lVar19 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                        (double)CONCAT44(uVar33 & *(uint *)((longlong)
                                                            (this_00->Scale3D).XY.m128d_f64 + 0xc),
                                         uVar29 & *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1)));
              auVar7._8_4_ = (int)lVar19;
              auVar7._0_8_ = -(ulonglong)
                              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                              (double)CONCAT44(uVar23 & *(uint *)((longlong)
                                                                  (this_00->Scale3D).XY.m128d_f64 +
                                                                 4),
                                               uVar32 & *(uint *)(this_00->Scale3D).XY.m128d_f64));
              auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
              iVar14 = movmskpd(uVar11,auVar7);
              if ((uVar31 & 0x3fffffff) == 0 && iVar14 == 0) {
                local_148.Rotation.XY.m128d_f64[0]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                local_148.Rotation.XY.m128d_f64[0]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                local_148.Rotation.XY.m128d_f64[1]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                local_148.Rotation.XY.m128d_f64[1]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                local_148.Rotation.ZW.m128d_f64[0]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
                local_148.Rotation.ZW.m128d_f64[0]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
                local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
                local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
                local_148.Translation.XY.m128d_f64[0]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
                local_148.Translation.XY.m128d_f64[0]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
                local_148.Translation.XY.m128d_f64[1]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
                local_148.Translation.XY.m128d_f64[1]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
                local_148.Translation.ZW.m128d_f64[0]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
                local_148.Translation.ZW.m128d_f64[0]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
                local_148.Translation.ZW.m128d_f64[1]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
                local_148.Translation.ZW.m128d_f64[1]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
                local_148.Scale3D.XY.m128d_f64[0]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                local_148.Scale3D.XY.m128d_f64[0]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                local_148.Scale3D.ZW.m128d_f64[0]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                local_148.Scale3D.ZW.m128d_f64[0]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                local_238.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_238.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_238.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_238.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_238.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_238.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              else {
                UE::Math::TTransform<double>::InverseFast(this_00,&local_238);
                local_148.Rotation.XY.m128d_f64[0]._0_4_ = local_238.Rotation.XY.m128d_f64[0]._0_4_;
                local_148.Rotation.XY.m128d_f64[0]._4_4_ = local_238.Rotation.XY.m128d_f64[0]._4_4_;
                local_148.Rotation.XY.m128d_f64[1]._0_4_ = local_238.Rotation.XY.m128d_f64[1]._0_4_;
                local_148.Rotation.XY.m128d_f64[1]._4_4_ = local_238.Rotation.XY.m128d_f64[1]._4_4_;
                local_148.Rotation.ZW.m128d_f64[0]._0_4_ = local_238.Rotation.ZW.m128d_f64[0]._0_4_;
                local_148.Rotation.ZW.m128d_f64[0]._4_4_ = local_238.Rotation.ZW.m128d_f64[0]._4_4_;
                local_148.Rotation.ZW.m128d_f64[1]._0_4_ = local_238.Rotation.ZW.m128d_f64[1]._0_4_;
                local_148.Rotation.ZW.m128d_f64[1]._4_4_ = local_238.Rotation.ZW.m128d_f64[1]._4_4_;
                local_148.Translation.XY.m128d_f64[0]._0_4_ =
                     local_238.Translation.XY.m128d_f64[0]._0_4_;
                local_148.Translation.XY.m128d_f64[0]._4_4_ =
                     local_238.Translation.XY.m128d_f64[0]._4_4_;
                local_148.Translation.XY.m128d_f64[1]._0_4_ =
                     local_238.Translation.XY.m128d_f64[1]._0_4_;
                local_148.Translation.XY.m128d_f64[1]._4_4_ =
                     local_238.Translation.XY.m128d_f64[1]._4_4_;
                local_148.Translation.ZW.m128d_f64[0]._0_4_ =
                     local_238.Translation.ZW.m128d_f64[0]._0_4_;
                local_148.Translation.ZW.m128d_f64[0]._4_4_ =
                     local_238.Translation.ZW.m128d_f64[0]._4_4_;
                local_148.Translation.ZW.m128d_f64[1]._0_4_ =
                     local_238.Translation.ZW.m128d_f64[1]._0_4_;
                local_148.Translation.ZW.m128d_f64[1]._4_4_ =
                     local_238.Translation.ZW.m128d_f64[1]._4_4_;
                local_148.Scale3D.XY.m128d_f64[0]._0_4_ = local_238.Scale3D.XY.m128d_f64[0]._0_4_;
                local_148.Scale3D.XY.m128d_f64[0]._4_4_ = local_238.Scale3D.XY.m128d_f64[0]._4_4_;
                local_148.Scale3D.XY.m128d_f64[1]._0_4_ = local_238.Scale3D.XY.m128d_f64[1]._0_4_;
                local_148.Scale3D.XY.m128d_f64[1]._4_4_ = local_238.Scale3D.XY.m128d_f64[1]._4_4_;
                local_148.Scale3D.ZW.m128d_f64[0]._0_4_ = local_238.Scale3D.ZW.m128d_f64[0]._0_4_;
                local_148.Scale3D.ZW.m128d_f64[0]._4_4_ = local_238.Scale3D.ZW.m128d_f64[0]._4_4_;
                local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = local_238.Scale3D.ZW.m128d_f64[1]._0_4_;
                local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = local_238.Scale3D.ZW.m128d_f64[1]._4_4_;
              }
            }
            lVar19 = (longlong)(int)local_384;
            uVar11 = 0;
            if ((int)local_384 < local_338.ArrayNum) {
              uVar11 = ~local_384 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
            ;
            local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
            ;
            local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_e8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_e8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
            local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_e8,
                       (TTransform<double> *)(local_338.AllocatorInstance.Data + lVar19 * 0x60),
                       &local_148);
            fVar34 = (float)local_e8.Rotation.ZW.m128d_f64[0];
            fVar37 = (float)local_e8.Rotation.ZW.m128d_f64[1];
            lVar19 = (longlong)(int)local_384;
            fVar40 = (float)local_e8.Rotation.XY.m128d_f64[0];
            fVar41 = (float)local_e8.Rotation.XY.m128d_f64[1];
            uVar11 = 0;
            if ((int)local_384 < *(int *)&(this->Transform).field_0x18) {
              uVar11 = ~local_384 >> 0x1f;
            }
            fVar35 = (float)local_e8.Translation.ZW.m128d_f64[0];
            fVar38 = (float)local_e8.Translation.ZW.m128d_f64[1];
            fVar42 = (float)local_e8.Translation.XY.m128d_f64[0];
            fVar43 = (float)local_e8.Translation.XY.m128d_f64[1];
            fVar36 = (float)local_e8.Scale3D.ZW.m128d_f64[0];
            fVar39 = (float)local_e8.Scale3D.ZW.m128d_f64[1];
            fVar44 = (float)local_e8.Scale3D.XY.m128d_f64[0];
            fVar45 = (float)local_e8.Scale3D.XY.m128d_f64[1];
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar5 = *(longlong *)&(this->Transform).field_0x10;
            pfVar2 = (float *)(lVar5 + lVar19 * 0x30);
            *pfVar2 = fVar40;
            pfVar2[1] = fVar41;
            pfVar2[2] = fVar34;
            pfVar2[3] = fVar37;
            pfVar2 = (float *)(lVar5 + 0x10 + lVar19 * 0x30);
            *pfVar2 = fVar42;
            pfVar2[1] = fVar43;
            pfVar2[2] = fVar35;
            pfVar2[3] = fVar38;
            pfVar2 = (float *)(lVar5 + 0x20 + lVar19 * 0x30);
            *pfVar2 = fVar44;
            pfVar2[1] = fVar45;
            pfVar2[2] = fVar36;
            pfVar2[3] = fVar39;
            TStack_298.UnvisitedBitMask = TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
          }
          if (-1 < (int)uVar13) {
            uVar11 = 0;
            if ((int)uVar13 < *(int *)&(this->Children).field_0x18) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar20 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      (lVar28 * 0x50 + *(longlong *)&(this->Children).field_0x10);
            local_320[0] = (uint)local_358;
            if (*(int *)&(pTVar20->Elements).field_0x8 != *(int *)&(pTVar20->Elements).field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (pTVar20,(uint)local_358,(int *)local_320);
            }
          }
          if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.AllocatorInstance.Data);
          }
          local_370 = local_370 + 1;
          piVar24 = (int *)(ulonglong)local_370;
          local_350 = local_350 + 4;
          param_2 = local_2d0;
          param_3 = local_380;
        } while ((int)local_370 < local_2d0->ArrayNum);
      }
      pTVar30 = &this->Parent;
      local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.ArrayNum = 0;
      local_348.ArrayMax = 0;
      local_318 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
      GeometryCollectionAlgo::BuildIncrementMask(param_2,&local_318,&local_348);
      iVar14 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
      iVar12 = param_2->ArrayNum;
      local_370 = local_348.ArrayNum;
      iVar15 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
      iVar15 = iVar15 - iVar12;
      uVar32 = 0;
      local_308 = (longlong)iVar14;
      if (0 < iVar14) {
        local_350 = 0;
        local_358 = 0;
        local_378 = (ForElementType<unsigned_int>)0x0;
        do {
          lVar19 = local_350;
          lVar28 = local_358;
          FVar25 = local_378;
          uVar29 = ~uVar32 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar32 < *(int *)&(this->Parent).field_0x18) {
            uVar23 = uVar29;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          plVar26 = local_368;
          if (*(int *)(lVar28 + *local_368) != -1) {
            uVar23 = 0;
            if ((int)uVar32 < *(int *)&(this->Parent).field_0x18) {
              uVar23 = uVar29;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar26 = local_368;
            uVar23 = *(uint *)(*local_368 + lVar19 * 4);
            uVar33 = 0;
            if ((int)uVar23 < local_348.ArrayNum) {
              uVar33 = ~uVar23 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = *(int *)(local_348.AllocatorInstance.Data + (longlong)(int)uVar23 * 4);
            uVar23 = 0;
            if ((int)uVar32 < *(int *)&(this->Parent).field_0x18) {
              uVar23 = uVar29;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            piVar18 = (int *)(*plVar26 + lVar19 * 4);
            *piVar18 = *piVar18 - iVar12;
            FVar25 = local_378;
          }
          uVar23 = 0;
          if ((int)uVar32 < *(int *)&(this->Parent).field_0x18) {
            uVar23 = uVar29;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)(*plVar26 + lVar19 * 4) < -1) {
LAB_1440a9bc1:
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4913942344723595005>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\TransformCollection.cpp"
                                ,0x103,"-1 <= ParentArray[Index] && ParentArray[Index] <= FinalSize"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            uVar23 = 0;
            if ((int)uVar32 < *(int *)&(this->Parent).field_0x18) {
              uVar23 = uVar29;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (iVar15 < *(int *)(*plVar26 + lVar19 * 4)) goto LAB_1440a9bc1;
          }
          uVar23 = 0;
          if ((int)uVar32 < *(int *)&(this->Children).field_0x18) {
            uVar23 = uVar29;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_198._0_8_ = 0;
          local_198._8_8_ = 0;
          local_178 = (uint *)0x0;
          local_170 = 0;
          local_16c = 0x80;
          local_168 = 0xffffffff;
          local_164 = 0;
          local_158 = (ForElementType<FSetElementId>)0x0;
          local_150 = 0;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     ((longlong)FVar25 + *(longlong *)&(this->Children).field_0x10));
          uVar23 = 0;
          if ((int)uVar32 < *(int *)&(this->Children).field_0x18) {
            uVar23 = uVar29;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar20 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    ((longlong)FVar25 + *(longlong *)&(this->Children).field_0x10);
          bVar10 = 1 < pTVar20->HashSize;
          if (!bVar10) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(pTVar20);
          }
          puVar1 = &(pTVar20->Elements).field_0xc;
          *(undefined4 *)&(pTVar20->Elements).field_0x8 = 0;
          if (*(int *)puVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)pTVar20,0,(int *)puVar1);
          }
          *(undefined4 *)&(pTVar20->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pTVar20->Elements).field_0x34 = 0;
          iVar12 = *(int *)&(pTVar20->Elements).field_0x2c;
          *(undefined4 *)&(pTVar20->Elements).field_0x28 = 0;
          if ((iVar12 < 0) || (0x80 < iVar12)) {
            *(undefined4 *)&(pTVar20->Elements).field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(pTVar20->Elements).field_0x10,0);
          }
          if (bVar10) {
            pTVar20->HashSize = 1;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar20);
          }
          uVar23 = local_170;
          uStack_2f4 = 1;
          local_2e0 = 0;
          uStack_2e4 = local_2e0;
          iStack_2f8 = 0;
          if (local_170 != 0) {
            puVar27 = (uint *)(local_198 + 0x10);
            if (local_178 != (uint *)0x0) {
              puVar27 = local_178;
            }
            uVar33 = *puVar27;
            local_2e0 = 0;
            while (uVar33 == 0) {
              lVar28 = (longlong)iStack_2f8;
              local_2e0 = local_2e0 + 0x20;
              iStack_2f8 = iStack_2f8 + 1;
              uStack_2e4 = local_170;
              if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2f8)
              goto LAB_1440a9df0;
              uVar33 = puVar27[lVar28 + 1];
            }
            uStack_2f4 = -uVar33 & uVar33;
            uVar3 = (ulonglong)uStack_2f4 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            local_2bc = (int)lVar28;
            uStack_2e4 = local_2bc + -1 + local_2e0;
            if ((int)local_170 < (int)uStack_2e4) {
              uStack_2e4 = local_170;
            }
          }
LAB_1440a9df0:
          local_300 = (longlong *)local_198;
          uStack_2dc = local_19c;
          local_2f0 = (ForElementType<unsigned_int>)((longlong)local_198 + 0x10);
          uVar33 = local_170 & 0xffffffe0;
          iStack_2d8 = local_198._8_4_ - local_164;
          TStack_268._padding_ = CONCAT44(uStack_2f4,iStack_2f8);
          uStack_2e8 = 0xffffffff;
          TStack_268.CurrentBitIndex = uStack_2e4;
          TStack_268.UnvisitedBitMask = 0xffffffff;
          iVar12 = (int)local_170 >> 5;
          TStack_268._28_4_ = local_19c;
          TStack_268.BaseBitIndex = local_2e0;
          uStack_248 = CONCAT44(uStack_2d4,iStack_2d8);
          bVar17 = (byte)local_170;
          local_270 = local_300;
          TStack_268.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2f0;
          if (((int)local_170 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar9 = local_310;
          if (uVar23 != local_170) {
            puVar27 = (uint *)(local_198 + 0x10);
            if (local_178 != (uint *)0x0) {
              puVar27 = local_178;
            }
            uVar23 = -1 << (bVar17 & 0x1f) & puVar27[iVar12];
            while (uVar23 == 0) {
              lVar28 = (longlong)iVar12;
              uVar33 = uVar33 + 0x20;
              iVar12 = iVar12 + 1;
              uVar23 = local_170;
              if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
              goto LAB_1440a9f20;
              uVar23 = puVar27[lVar28 + 1];
            }
            uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
            lVar28 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            local_2b8 = (int)lVar28;
            uVar23 = local_2b8 + -1 + uVar33;
            if ((int)local_170 < (int)uVar23) {
              uVar23 = local_170;
            }
          }
LAB_1440a9f20:
          while( true ) {
            plVar26 = local_270;
            if ((int)local_270[1] - *(int *)((longlong)local_270 + 0x34) != (int)uStack_248) {
              local_387[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_387);
            }
            if (((TStack_268.CurrentBitIndex == uVar23) &&
                (TStack_268.Array ==
                 (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_198 + 0x10))) &&
               (plVar26 == (longlong *)local_198)) break;
            uVar33 = *(uint *)(*plVar26 + (longlong)TStack_268.CurrentBitIndex * 0xc);
            if ((-1 < (int)uVar33) && ((int)uVar33 < (int)local_370)) {
              uVar11 = 0;
              if ((int)uVar33 < local_348.ArrayNum) {
                uVar11 = ~uVar33 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_314 = uVar33 - *(int *)(local_348.AllocatorInstance.Data +
                                           (longlong)(int)uVar33 * 4);
              if ((-1 < local_314) && (local_314 < iVar15)) {
                uVar33 = 0;
                if ((int)uVar32 < *(int *)&(pFVar9->Children).field_0x18) {
                  uVar33 = uVar29;
                }
                if ((uVar33 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           ((longlong)(int)uVar32 * 0x50 +
                           *(longlong *)&(pFVar9->Children).field_0x10),&local_2b4,
                           (bool *)&local_314);
              }
            }
            TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
          }
          local_150 = 0;
          if (local_158 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_158);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_198);
          uVar32 = uVar32 + 1;
          local_350 = local_350 + 1;
          local_378 = (ForElementType<unsigned_int>)((longlong)local_378 + 0x50);
          local_358 = local_358 + 4;
          param_2 = local_2d0;
          this = local_310;
          param_3 = local_380;
        } while (local_350 < local_308);
      }
      if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.AllocatorInstance.Data);
      }
    }
    FManagedArrayCollection::RemoveElements
              ((FManagedArrayCollection *)this,local_2a8,param_2,param_3);
  }
  return;
}

// Reset @ 1440af110

void __thiscall FTransformCollection::Reset(FTransformCollection *this)

{
  TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  *(undefined1 *)&this->_padding_ = 1;
  Construct(this);
  return;
}

// Serialize @ 1440b1ea0

void __thiscall FTransformCollection::Serialize(FTransformCollection *this,FChaosArchive *param_1)

{
  undefined4 uVar1;
  FManagedArrayBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar7;
  uint uVar8;
  FValueType *pFVar9;
  FValueType *pFVar10;
  uint uVar11;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  FValueType *pFVar12;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar13;
  longlong local_res10;
  FName local_38;
  FName local_30;
  
  FManagedArrayCollection::Serialize((FManagedArrayCollection *)this,param_1);
  if ((param_1->_padding_ & 1) != 0) {
    local_38 = BoneHierarchyAttribute;
    local_30 = TransformGroup;
    pTVar7 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&this->_padding_,(TTuple<FName,FName> *)&local_38);
    pFVar9 = (FValueType *)0x0;
    pFVar10 = (FValueType *)&pTVar7->field_0x10;
    if (pTVar7 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar10 = pFVar9;
    }
    if (pFVar10 != (FValueType *)0x0) {
      if ((pFVar10->ArrayType != FBoneNodeType) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSameType<T>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x315,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
      pFVar2 = pFVar10->ManagedArray;
      if ((pFVar2 == (FManagedArrayBase *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2->bIsDirty = true;
      iVar5 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2);
      if (0 < iVar5) {
        local_res10 = 0;
        pFVar10 = pFVar9;
        pFVar12 = pFVar9;
        do {
          uVar8 = (uint)pFVar9;
          uVar11 = ~uVar8 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)&pFVar2[1].bIsDirty) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
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
          uVar1 = *(undefined4 *)
                   ((longlong)&(pFVar10->GroupIndexDependency).ComparisonIndex.Value +
                   pFVar2[1]._padding_);
          uVar6 = 0;
          if ((int)uVar8 < *(int *)&(this->Parent).field_0x18) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
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
          *(undefined4 *)(*(longlong *)&(this->Parent).field_0x10 + (longlong)pFVar12 * 4) = uVar1;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)&pFVar2[1].bIsDirty) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
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
          pTVar13 = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)&(pFVar10->GroupIndexDependency).Number + pFVar2[1]._padding_);
          uVar6 = 0;
          if ((int)uVar8 < *(int *)&(this->Children).field_0x18) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
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
          this_00 = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(*(longlong *)&(this->Children).field_0x10 + local_res10);
          if (this_00 != pTVar13) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      ((ForElementType<FSetElementId> *)(this_00 + 1),(int *)&this_00[1].field_0x10,
                       (ForElementType<FSetElementId> *)(pTVar13 + 1),*(int *)&pTVar13[1].field_0x10
                      );
            iVar5 = *(int *)&pTVar13->field_0x8;
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(this_00,iVar5);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar5,(ForAnyElementType *)this_00,(int *)&this_00->field_0x8,
                       (int *)&this_00->field_0xc);
            *(undefined4 *)&this_00->field_0x30 = *(undefined4 *)&pTVar13->field_0x30;
            *(undefined4 *)&this_00->field_0x34 = *(undefined4 *)&pTVar13->field_0x34;
            if (&this_00->field_0x10 != &pTVar13->field_0x10) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)&this_00->field_0x10,
                         (TBitArray<FDefaultBitArrayAllocator> *)&pTVar13->field_0x10);
            }
            if (iVar5 != 0) {
              memcpy(*(void **)this_00,*(void **)pTVar13,(longlong)iVar5 * 0xc);
            }
          }
          local_res10 = local_res10 + 0x50;
          pFVar9 = (FValueType *)(ulonglong)(uVar8 + 1);
          pFVar12 = (FValueType *)&pFVar12->field_0x1;
          pFVar10 = (FValueType *)&pFVar10[2].SharedManagedArray;
          iVar5 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2);
        } while ((int)(uVar8 + 1) < iVar5);
      }
    }
  }
  return;
}

// SingleTransform @ 1440b5cf0

FTransformCollection * __cdecl
FTransformCollection::SingleTransform
          (FTransformCollection *__return_storage_ptr__,TTransform<double> *param_1)

{
  float *pfVar1;
  code *pcVar2;
  double dVar3;
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
  bool bVar15;
  FTransformCollection *pFVar16;
  int iVar17;
  
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0x80;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0x80;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FTransformCollection__6B_;
  *(undefined ***)&__return_storage_ptr__->Transform =
       &___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
  *(undefined ***)&__return_storage_ptr__->BoneName = &___7__TManagedArray_VFString____6B_;
  *(undefined ***)&__return_storage_ptr__->BoneColor = &___7__TManagedArray_UFLinearColor____6B_;
  *(undefined ***)&__return_storage_ptr__->Parent = &___7__TManagedArray_H__6B_;
  *(undefined ***)&__return_storage_ptr__->Children =
       &___7__TManagedArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator______6B_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 9;
  (__return_storage_ptr__->Transform).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Transform).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Transform).field_0x18 = 0;
  (__return_storage_ptr__->BoneName).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BoneName).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BoneName).field_0x18 = 0;
  (__return_storage_ptr__->BoneColor).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BoneColor).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->BoneColor).field_0x18 = 0;
  (__return_storage_ptr__->Parent).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Parent).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Parent).field_0x18 = 0;
  (__return_storage_ptr__->Children).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Children).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Children).field_0x18 = 0;
  Construct(__return_storage_ptr__);
  FManagedArrayCollection::AddElements
            ((FManagedArrayCollection *)__return_storage_ptr__,1,TransformGroup);
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar5 = (param_1->Rotation).XY.m128d_f64[0];
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).ZW.m128d_f64[1];
  dVar9 = (param_1->Translation).XY.m128d_f64[0];
  dVar10 = (param_1->Translation).XY.m128d_f64[1];
  dVar11 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_1->Scale3D).ZW.m128d_f64[1];
  dVar13 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar14 = (param_1->Scale3D).XY.m128d_f64[1];
  if (*(int *)&(__return_storage_ptr__->Transform).field_0x18 < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pFVar16 = (FTransformCollection *)(*pcVar2)();
      return pFVar16;
    }
  }
  pfVar1 = *(float **)&(__return_storage_ptr__->Transform).field_0x10;
  *pfVar1 = (float)dVar5;
  pfVar1[1] = (float)dVar6;
  pfVar1[2] = (float)dVar3;
  pfVar1[3] = (float)dVar4;
  pfVar1[4] = (float)dVar9;
  pfVar1[5] = (float)dVar10;
  pfVar1[6] = (float)dVar7;
  pfVar1[7] = (float)dVar8;
  pfVar1[8] = (float)dVar13;
  pfVar1[9] = (float)dVar14;
  pfVar1[10] = (float)dVar11;
  pfVar1[0xb] = (float)dVar12;
  iVar17 = (int)FManagedArrayCollection::Invalid;
  if (*(int *)&(__return_storage_ptr__->Parent).field_0x18 < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar2 = (code *)swi(3);
      pFVar16 = (FTransformCollection *)(*pcVar2)();
      return pFVar16;
    }
  }
  **(int **)&(__return_storage_ptr__->Parent).field_0x10 = iVar17;
  return __return_storage_ptr__;
}

// UnparentTransform @ 1440b6e60

void __thiscall FTransformCollection::UnparentTransform(FTransformCollection *this,int param_1)

{
  FCollectionTransformFacade FStack_f8;
  
  if (this != (FTransformCollection *)0x0) {
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&FStack_f8,(FManagedArrayCollection *)this);
    GeometryCollection::Facades::FCollectionTransformFacade::UnparentTransform(&FStack_f8,param_1);
  }
  return;
}

// operator() @ 1504ad610

bool __thiscall
`FTransformCollection::RelativeTransformation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4913942344723595079>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4913942344723595079>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

