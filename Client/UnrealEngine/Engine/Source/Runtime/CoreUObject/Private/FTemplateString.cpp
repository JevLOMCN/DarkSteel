// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// StaticStruct @ 1421f2970

UScriptStruct * __cdecl FTemplateString::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTemplateString.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FTemplateString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTemplateString,(UObject *)pUVar1,
                         L"TemplateString");
  }
  return Z_Registration_Info_UScriptStruct_FTemplateString.OuterSingleton;
}

// IsValid @ 142212a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTemplateString::IsValid(FTemplateString *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  FText *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  ulong64 uVar23;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b0;
  uint local_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_198;
  undefined4 local_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  uint local_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined4 local_170;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  int local_15c;
  undefined1 local_158 [8];
  FTextFormat local_150;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  FText local_f0;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar15 = param_1->ArrayNum;
  if (uVar15 == 0) {
    iVar8 = (this->Template).Data.ArrayNum;
    pFVar17 = (this->Template).Data.AllocatorInstance.Data;
    iVar13 = 0;
    pFVar16 = pFVar17 + (longlong)iVar8 * 2 + -2;
    iVar12 = 0;
    if (iVar8 == 0) {
      pFVar16 = pFVar17 + (longlong)iVar8 * 2;
      iVar12 = 0;
    }
    while( true ) {
      if ((this->Template).Data.ArrayNum != iVar8) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b8);
      }
      if (pFVar17 == pFVar16) break;
      if (*(short *)pFVar17 == 0x7b) {
        iVar12 = iVar12 + 1;
        pFVar17 = pFVar17 + 2;
      }
      else {
        if (*(short *)pFVar17 == 0x7d) {
          iVar13 = iVar13 + 1;
        }
        pFVar17 = pFVar17 + 2;
      }
    }
    return iVar12 == iVar13;
  }
  pFVar17 = (param_1->AllocatorInstance).Data;
  if (((int)uVar15 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar10 = 0;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar15);
  uVar14 = 1;
  if (3 < uVar15) {
    uVar20 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_160 = (undefined4)lVar2;
    uVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((local_40 == 0) || ((int)local_40 < (int)uVar14)) {
    local_40 = uVar14;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
    }
    if (uVar14 != 0) {
      uVar19 = uVar14;
      if (uVar14 < 2) {
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          uVar19 = 0;
          goto LAB_142212bb4;
        }
      }
      else {
LAB_142212bb4:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar19,4);
      }
      if (0 < (int)uVar14) {
        uVar21 = (ulonglong)uVar14;
        uVar20 = uVar10;
        do {
          FVar18.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar18.Data = local_48.Data;
          }
          uVar6 = uVar20 & (longlong)(int)uVar14 - 1U;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(FVar18.Data + uVar6 * 4) = 0xffffffff;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
    }
    if (local_40 != 0) {
      pTStack_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      local_1a0 = 0;
      uStack_19c = 1;
      uStack_18c = 0;
      uStack_188 = 0;
      uVar20 = uVar10;
      if (local_60 != 0) {
        FVar22 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar22 = local_68;
        }
        uVar14 = *(uint *)FVar22;
        uVar21 = uVar10;
        while (uVar14 == 0) {
          uStack_188 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uStack_188;
          iVar8 = (int)uVar20;
          local_1a0 = iVar8 + 1;
          uVar20 = (ulonglong)local_1a0;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a0)
          goto LAB_142212cd2;
          uVar14 = ((uint *)((longlong)FVar22 + 4))[iVar8];
        }
        uStack_19c = -uVar14 & uVar14;
        uVar20 = (ulonglong)uStack_19c * 2 + 1;
        lVar2 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_15c = (int)lVar2;
        uStack_18c = local_15c + -1 + uStack_188;
        uVar20 = (ulonglong)uStack_18c;
        if ((int)local_60 < (int)uStack_18c) {
LAB_142212cd2:
          uVar20 = (ulonglong)local_60;
          uStack_18c = local_60;
        }
      }
      local_190 = 0xffffffff;
      local_140 = (longlong *)local_88;
      local_138._padding_ = CONCAT44(uStack_19c,local_1a0);
      local_138.CurrentBitIndex = uStack_18c;
      local_138.UnvisitedBitMask = 0xffffffff;
      local_138._28_4_ = uStack_184;
      local_138.BaseBitIndex = uStack_188;
      local_138.Array = pTStack_198;
      if ((int)uVar20 < (int)local_60) {
        do {
          iVar12 = (int)uVar20;
          puVar1 = (undefined8 *)(*local_140 + (longlong)iVar12 * 0x18);
          iVar8 = *(int *)(*local_140 + 8 + (longlong)iVar12 * 0x18);
          if (iVar8 == 0) {
            pwVar11 = L"";
            iVar8 = 0;
          }
          else {
            pwVar11 = (wchar_t *)*puVar1;
            iVar8 = iVar8 + -1;
          }
          uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
          uVar14 = local_40 - 1 & uVar14;
          *(uint *)((longlong)puVar1 + 0x14) = uVar14;
          FVar18.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar18.Data = local_48.Data;
          }
          uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar18.Data + uVar20 * 4);
          *(int *)(FVar18.Data + uVar20 * 4) = iVar12;
          local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
          uVar20 = (ulonglong)(uint)local_138.CurrentBitIndex;
        } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
      }
    }
  }
  pFVar16 = pFVar17 + (longlong)(int)uVar15 * 0x10;
  for (; pFVar17 != pFVar16; pFVar17 = pFVar17 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88,
               (FString *)local_158,(bool *)pFVar17);
  }
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  pFVar7 = FText::FromString(&local_f0,&this->Template);
  FTextFormat::FTextFormat(&local_150,pFVar7,Default);
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  bVar4 = FTextFormat::IsValid(&local_150);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_14221319b;
  }
  FTextFormat::GetFormatArgumentNames(&local_150,&local_1b0);
  FVar18.Data = local_1b0.AllocatorInstance.Data;
  iVar8 = local_1b0.ArrayNum;
  uVar23 = (ulong64)local_1b0.ArrayNum;
  if ((local_1b0.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (iVar8 != 0) {
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar23);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,iVar8);
    uVar15 = 1;
    if (3 < (uint)iVar8) {
      uVar20 = (ulonglong)(((uint)iVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar15 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar15)) {
      local_90 = uVar15;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar15 != 0) {
        uVar14 = uVar15;
        if (uVar15 < 2) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_142212f04;
          }
        }
        else {
LAB_142212f04:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar14,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar21 = (ulonglong)uVar15;
          uVar20 = uVar10;
          do {
            FVar9.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar9.Data = local_98.Data;
            }
            uVar6 = (longlong)(int)uVar15 - 1U & uVar20;
            uVar20 = uVar20 + 1;
            *(undefined4 *)(FVar9.Data + uVar6 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (local_90 != 0) {
        pTStack_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        local_180 = 0;
        uStack_17c = 1;
        uStack_16c = 0;
        uStack_168 = 0;
        if (local_b0 != 0) {
          FVar22 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_b8;
          }
          uVar15 = *(uint *)FVar22;
          uVar20 = uVar10;
          while (uVar15 == 0) {
            uStack_168 = (int)uVar20 + 0x20;
            uVar20 = (ulonglong)uStack_168;
            iVar8 = (int)uVar10;
            local_180 = iVar8 + 1;
            uVar10 = (ulonglong)local_180;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_180)
            goto LAB_14221300d;
            uVar15 = ((uint *)((longlong)FVar22 + 4))[iVar8];
          }
          uStack_17c = -uVar15 & uVar15;
          uVar10 = (ulonglong)uStack_17c * 2 + 1;
          lVar2 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_16c = (int)lVar2 + -1 + uStack_168;
          uVar10 = (ulonglong)uStack_16c;
          if ((int)local_b0 < (int)uStack_16c) {
LAB_14221300d:
            uVar10 = (ulonglong)local_b0;
            uStack_16c = local_b0;
          }
        }
        local_170 = 0xffffffff;
        local_118 = (longlong *)local_d8;
        local_110._padding_ = CONCAT44(uStack_17c,local_180);
        local_110.CurrentBitIndex = uStack_16c;
        local_110.UnvisitedBitMask = 0xffffffff;
        local_110._28_4_ = uStack_164;
        local_110.BaseBitIndex = uStack_168;
        local_110.Array = pTStack_178;
        if ((int)uVar10 < (int)local_b0) {
          do {
            iVar12 = (int)uVar10;
            puVar1 = (undefined8 *)(*local_118 + (longlong)iVar12 * 0x18);
            iVar8 = *(int *)(*local_118 + 8 + (longlong)iVar12 * 0x18);
            if (iVar8 == 0) {
              pwVar11 = L"";
              iVar8 = 0;
            }
            else {
              pwVar11 = (wchar_t *)*puVar1;
              iVar8 = iVar8 + -1;
            }
            uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
            uVar15 = local_90 - 1 & uVar15;
            *(uint *)((longlong)puVar1 + 0x14) = uVar15;
            FVar9.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar9.Data = local_98.Data;
            }
            uVar10 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
            *(int *)(FVar9.Data + uVar10 * 4) = iVar12;
            local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
            uVar10 = (ulonglong)(uint)local_110.CurrentBitIndex;
          } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
        }
      }
    }
  }
  pFVar17 = FVar18.Data + uVar23 * 0x10;
  for (; FVar18.Data != pFVar17; FVar18.Data = FVar18.Data + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8,
               (FString *)(local_158 + 4),(bool *)FVar18.Data);
  }
  bVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_d8);
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar8 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = -1;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
LAB_14221319b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.TextFormatData.SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>((FString *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return bVar4;
}

