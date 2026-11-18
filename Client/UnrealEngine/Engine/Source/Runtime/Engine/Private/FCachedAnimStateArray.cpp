// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14750dd20

UScriptStruct * __cdecl FCachedAnimStateArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateArray,(UObject *)pUVar1,
                         L"CachedAnimStateArray");
  }
  return Z_Registration_Info_UScriptStruct_FCachedAnimStateArray.OuterSingleton;
}

// GetTotalWeight @ 147563380

float __thiscall
FCachedAnimStateArray::GetTotalWeight(FCachedAnimStateArray *this,UAnimInstance *param_1)

{
  int iVar1;
  bool bVar2;
  FCachedAnimStateData *this_00;
  FCachedAnimStateData *pFVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res18 [16];
  
  bVar2 = IsValid(this,param_1);
  if (bVar2) {
    this_00 = (FCachedAnimStateData *)(this->States).AllocatorInstance.Data;
    iVar1 = (this->States).ArrayNum;
    fVar5 = 0.0;
    pFVar3 = this_00 + iVar1;
    while( true ) {
      if ((this->States).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FCachedAnimStateData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_00 == pFVar3) break;
      bVar2 = FCachedAnimStateData::IsValid(this_00,param_1);
      if (bVar2) {
        fVar4 = UAnimInstance::GetInstanceStateWeight
                          (param_1,this_00->MachineIndex,this_00->StateIndex);
        fVar5 = fVar5 + fVar4;
        this_00 = this_00 + 1;
      }
      else {
        this_00 = this_00 + 1;
        fVar5 = fVar5 + 0.0;
      }
    }
    if ((this->bHasMultipleStateMachineEntries == false) && (__real_3f800000 <= fVar5)) {
      fVar5 = __real_3f800000;
    }
    return fVar5;
  }
  return 0.0;
}

// IsFullWeight @ 14756a510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCachedAnimStateArray::IsFullWeight(FCachedAnimStateArray *this,UAnimInstance *param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  FName FVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  FCachedAnimStateData *this_00;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  FCachedAnimStateData *pFVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_128;
  undefined1 local_127 [3];
  int local_124;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  FCachedAnimStateData *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (this->bHasMultipleStateMachineEntries == false) {
    fVar18 = GetTotalWeight(this,param_1);
    bVar6 = __real_3f7fff58 <= fVar18;
  }
  else {
    bVar6 = IsValid(this,param_1);
    if (bVar6) {
      iVar13 = (this->States).ArrayNum;
      this_00 = (FCachedAnimStateData *)(this->States).AllocatorInstance.Data;
      local_a8._0_8_ = 0;
      pFVar17 = this_00 + iVar13;
      local_a8._8_8_ = 0;
      local_88 = (uint *)0x0;
      uVar14 = 0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      while( true ) {
        if ((this->States).ArrayNum != iVar13) {
          local_128 = 0;
          `TCheckedPointerIterator<FCachedAnimStateData_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_128);
        }
        uVar8 = local_80;
        if (this_00 == pFVar17) break;
        bVar6 = FCachedAnimStateData::IsValid(this_00,param_1);
        if (bVar6) {
          fVar18 = UAnimInstance::GetInstanceStateWeight
                             (param_1,this_00->MachineIndex,this_00->StateIndex);
        }
        else {
          fVar18 = 0.0;
        }
        FVar3 = this_00->StateMachineName;
        uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        uVar8 = uVar8 + FVar3.Number;
        if (local_a8._8_4_ != local_74) {
          FVar12 = (ForElementType<FSetElementId>)local_70;
          if (local_68 != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_68;
          }
          iVar9 = *(int *)((longlong)FVar12 + (ulonglong)(local_60 - 1U & uVar8) * 4);
          if (iVar9 != -1) {
            do {
              lVar11 = local_a8._0_8_ + (longlong)iVar9 * 0x14;
              if (*(FName *)(local_a8._0_8_ + (longlong)iVar9 * 0x14) == this_00->StateMachineName)
              {
                if (lVar11 != 0) goto LAB_14756a690;
                break;
              }
              iVar9 = *(int *)(lVar11 + 0xc);
            } while (iVar9 != -1);
          }
        }
        local_138 = 0;
        local_e8 = this_00;
        TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)local_a8,(uint)&local_124,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
                   (bool *)&local_e8);
        lVar11 = local_a8._0_8_ + (longlong)local_124 * 0x14;
LAB_14756a690:
        this_00 = this_00 + 1;
        *(float *)(lVar11 + 8) = fVar18 + *(float *)(lVar11 + 8);
      }
      uStack_114 = 1;
      local_100 = 0;
      uStack_104 = local_100;
      if (local_80 != 0) {
        puVar15 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar15 = local_88;
        }
        uVar16 = *puVar15;
        local_100 = 0;
        uVar14 = 0;
        while (uVar16 == 0) {
          lVar11 = (longlong)(int)uVar14;
          local_100 = local_100 + 0x20;
          uVar14 = uVar14 + 1;
          uStack_104 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
          goto LAB_14756a721;
          uVar16 = puVar15[lVar11 + 1];
        }
        uStack_114 = -uVar16 & uVar16;
        uVar1 = (ulonglong)uStack_114 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_f0 = (int)lVar11;
        uStack_104 = (local_100 - 1) + local_f0;
        if ((int)local_80 < (int)uStack_104) {
          uStack_104 = local_80;
        }
      }
LAB_14756a721:
      local_120 = (longlong *)local_a8;
      local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      iStack_f8 = local_a8._8_4_ - local_74;
      uVar16 = local_80 & 0xffffffe0;
      uStack_108 = 0xffffffff;
      TStack_d8.CurrentBitIndex = uStack_104;
      TStack_d8.UnvisitedBitMask = 0xffffffff;
      TStack_d8._padding_ = CONCAT44(uStack_114,uVar14);
      iVar13 = (int)local_80 >> 5;
      TStack_d8._28_4_ = uStack_104;
      TStack_d8.BaseBitIndex = local_100;
      uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
      bVar10 = (byte)local_80;
      uStack_118 = uVar14;
      uStack_fc = uStack_104;
      local_e0 = local_120;
      TStack_d8.Array = local_110;
      if (((int)local_80 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      fVar18 = __real_3f7fff58;
      if (uVar8 != local_80) {
        puVar15 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar15 = local_88;
        }
        uVar14 = -1 << (bVar10 & 0x1f) & puVar15[iVar13];
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar8 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14756a850;
          uVar14 = puVar15[lVar11 + 1];
        }
        uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar8 = (int)lVar11 + -1 + uVar16;
        if ((int)local_80 < (int)uVar8) {
          uVar8 = local_80;
        }
      }
LAB_14756a850:
      while( true ) {
        plVar5 = local_e0;
        if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
          `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_127);
        }
        if (((TStack_d8.CurrentBitIndex == uVar8) &&
            (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
           (plVar5 == (longlong *)local_a8)) break;
        pfVar2 = (float *)(*plVar5 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x14);
        if (fVar18 < *pfVar2 || fVar18 == *pfVar2) {
          local_60 = 0;
          if (local_68 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_68);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_a8);
          return true;
        }
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      }
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
    }
    bVar6 = false;
  }
  return bVar6;
}

// IsRelevant @ 14756ac80

bool __thiscall
FCachedAnimStateArray::IsRelevant(FCachedAnimStateArray *this,UAnimInstance *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  FCachedAnimStateData *this_00;
  FCachedAnimStateData *pFVar4;
  float fVar5;
  undefined1 local_res18 [16];
  
  bVar3 = IsValid(this,param_1);
  fVar2 = __real_3727c5ac;
  if (bVar3) {
    iVar1 = (this->States).ArrayNum;
    this_00 = (FCachedAnimStateData *)(this->States).AllocatorInstance.Data;
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if ((this->States).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FCachedAnimStateData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_00 == pFVar4) break;
      bVar3 = FCachedAnimStateData::IsValid(this_00,param_1);
      if ((bVar3) &&
         (fVar5 = UAnimInstance::GetInstanceStateWeight
                            (param_1,this_00->MachineIndex,this_00->StateIndex), fVar2 < fVar5)) {
        return true;
      }
      this_00 = this_00 + 1;
    }
  }
  return false;
}

// IsValid @ 14756af70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCachedAnimStateArray::IsValid(FCachedAnimStateArray *this,UAnimInstance *param_1)

{
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FName FVar9;
  FName FVar10;
  FName *pFVar11;
  FName *this_00;
  undefined1 local_res8 [8];
  FName local_90;
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  FName local_78;
  FName FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (this->bCheckedValidity != false) {
    return this->bCachedIsValid;
  }
  this->bCheckedValidity = true;
  this->bCachedIsValid = true;
  uVar1 = (this->States).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  if ((int)uVar1 < 2) {
LAB_14756b21e:
    return this->bCachedIsValid;
  }
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  this_00 = (FName *)(this->States).AllocatorInstance.Data;
  pFVar11 = (FName *)((longlong)this_00 + uVar6 * 0x1c);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
LAB_14756afe0:
  do {
    if ((this->States).ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCachedAnimStateData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar11) {
      if ((FName *)local_88.Data != (FName *)0x0) {
        FMemory::Free(local_88.Data);
      }
      goto LAB_14756b21e;
    }
    FVar2 = *this_00;
    FVar10 = FVar2;
    if (((FVar9 != (FName)0x0) && (FVar10 = FVar9, FVar2 != (FName)0x0)) && (FVar2 != FVar9)) {
      this->bHasMultipleStateMachineEntries = true;
    }
    local_78 = *this_00;
    FStack_70 = this_00[1];
    for (FVar7.Data = local_88.Data; FVar9 = FVar10,
        (FName *)FVar7.Data != (FName *)(local_88.Data + (longlong)local_80 * 0x10);
        FVar7.Data = FVar7.Data + 0x10) {
      if ((*(FName *)FVar7.Data == local_78) && (*(FName *)((longlong)FVar7.Data + 8) == FStack_70))
      {
        if (2 < (byte)LogAnimation._0_1_) {
          if (param_1 == (UAnimInstance *)0x0) {
            ::FString::FString(&local_68,L"None");
          }
          else {
            local_90.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
            local_90.Number = *(uint *)&param_1->field_0x1c;
            ::FName::ToString(&local_90,&local_68);
          }
          ::FName::ToString(this_00,&local_48);
          ::FName::ToString(this_00 + 1,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        uVar6 = (ulonglong)uVar1;
        this_00 = (FName *)&this_00[3].Number;
        this->bCachedIsValid = false;
        goto LAB_14756afe0;
      }
    }
    if (((local_88.Data <= &local_78) &&
        (&local_78 < (FName *)(local_88.Data + (longlong)iStack_7c * 0x10))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (local_80 == iStack_7c) {
      local_80 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_88,&iStack_7c);
    }
    lVar8 = (longlong)local_80;
    local_80 = local_80 + 1;
    this_00 = (FName *)&this_00[3].Number;
    uVar6 = (ulonglong)uVar1;
    *(FName *)(local_88.Data + lVar8 * 0x10) = local_78;
    ((FName *)(local_88.Data + lVar8 * 0x10))[1] = FStack_70;
  } while( true );
}

