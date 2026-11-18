// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// StaticStruct @ 14a381ea0

UScriptStruct * __cdecl FRigInfluenceMapPerEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigInfluenceMapPerEvent.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigInfluenceMapPerEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent,(UObject *)pUVar1,
                         L"RigInfluenceMapPerEvent");
  }
  return Z_Registration_Info_UScriptStruct_FRigInfluenceMapPerEvent.OuterSingleton;
}

// Find @ 14a40a280

FRigInfluenceMap * __thiscall
FRigInfluenceMapPerEvent::Find(FRigInfluenceMapPerEvent *this,FName *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,int> *pTVar4;
  FRigInfluenceMap *pFVar5;
  uint uVar6;
  uint *puVar7;
  
  pTVar4 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->EventToIndex,*param_1);
  puVar7 = (uint *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,int> *)0x0) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    uVar1 = *puVar7;
    if (uVar1 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar1 < (this->Maps).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FRigInfluenceMap *)(*pcVar2)();
          return pFVar5;
        }
      }
      return (FRigInfluenceMap *)((this->Maps).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x68)
      ;
    }
  }
  return (FRigInfluenceMap *)0x0;
}

// FindOrAdd @ 14a40bf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceMap * __thiscall
FRigInfluenceMapPerEvent::FindOrAdd(FRigInfluenceMapPerEvent *this,FName *param_1)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FName,int> *pTVar8;
  FRigInfluenceMap *pFVar9;
  uint *puVar10;
  longlong lVar11;
  FName *pFVar12;
  undefined1 auStackY_128 [32];
  uint local_d8;
  undefined1 local_d4 [12];
  FName *local_c8;
  uint *local_c0;
  FName local_b8;
  FRigInfluenceEntry *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->EventToIndex,*param_1);
  puVar10 = (uint *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,int> *)0x0) {
    puVar10 = (uint *)0x0;
  }
  if (puVar10 == (uint *)0x0) {
    local_d8 = 0xffffffff;
  }
  else {
    local_d8 = *puVar10;
  }
  if (local_d8 == 0xffffffff) {
    local_b8 = *param_1;
    pFVar2 = (FName *)(this->Maps).AllocatorInstance.Data;
    local_b0 = (FRigInfluenceEntry *)0x0;
    local_a8 = 0;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_8_ = 0;
    local_80 = (void *)0x0;
    local_78 = ___xmm_00000000ffffffff0000008000000000;
    uStack_70 = _UNK_150631d98;
    local_60 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    if ((pFVar2 <= &local_b8) && (&local_b8 < pFVar2 + (longlong)(this->Maps).ArrayMax * 0xd)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRigInfluenceMap *)(*pcVar3)();
        return pFVar9;
      }
    }
    uVar7 = (this->Maps).ArrayNum;
    piVar1 = &(this->Maps).ArrayMax;
    if (uVar7 == *piVar1) {
      uVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,(ForAnyElementType *)this,piVar1);
    }
    (this->Maps).ArrayNum = uVar7 + 1;
    pFVar12 = (FName *)((this->Maps).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x68);
    *pFVar12 = local_b8;
    pFVar2 = pFVar12 + 1;
    pFVar2->ComparisonIndex = 0;
    pFVar2->Number = 0;
    uVar5 = (uint)local_a8;
    local_d4._4_8_ = local_b0;
    pFVar12[2].ComparisonIndex.Value = (uint)local_a8;
    if ((uint)local_a8 == 0) {
      pFVar12[2].Number = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(uint)local_a8,0,(ForAnyElementType *)pFVar2,(uint)local_a8,
                 (int *)&pFVar12[2].Number);
      ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int>
                ((void *)*pFVar2,(FRigInfluenceEntry *)local_d4._4_8_,uVar5);
    }
    *(undefined8 *)
     &((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
        *)(pFVar12 + 3))->Elements = 0;
    pFVar12[4].ComparisonIndex = 0;
    pFVar12[4].Number = 0;
    pFVar12[7].ComparisonIndex = 0;
    pFVar12[7].Number = 0;
    pFVar12[8].ComparisonIndex.Value = 0;
    pFVar12[8].Number = 0x80;
    pFVar12[9].ComparisonIndex.Value = 0xffffffff;
    pFVar12[9].Number = 0;
    pFVar12[0xb].ComparisonIndex = 0;
    pFVar12[0xb].Number = 0;
    pFVar12[0xc].ComparisonIndex.Value = 0;
    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                 *)(pFVar12 + 3),
                (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                 *)local_a0);
    local_c0 = &local_d8;
    local_d8 = uVar7;
    local_c8 = param_1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->EventToIndex,(TPairInitializer<FName_const_&,int_const_&> *)local_d4,
               (bool *)&local_c8);
    local_58 = 0;
    if (local_60 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_60);
    }
    iVar4 = SUB84(local_a0._8_8_,4);
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uVar7 = local_78._4_4_;
    uStack_70 = 0xffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    if (0x80 < uVar7) {
      local_78 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a0._0_8_);
    }
    DestructItems<FRigInfluenceEntry,int>(local_b0,(uint)local_a8);
    if (local_b0 != (FRigInfluenceEntry *)0x0) {
      FMemory::Free(local_b0);
    }
  }
  lVar11 = (longlong)(int)local_d8;
  uVar7 = 0;
  if ((int)local_d8 < (this->Maps).ArrayNum) {
    uVar7 = ~local_d8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRigInfluenceMap *)(*pcVar3)();
      return pFVar9;
    }
  }
  return (FRigInfluenceMap *)((this->Maps).AllocatorInstance.Data + lVar11 * 0x68);
}

// GetEntryModifier @ 14a413bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceEntryModifier * __thiscall
FRigInfluenceMapPerEvent::GetEntryModifier
          (FRigInfluenceMapPerEvent *this,FRigInfluenceEntryModifier *__return_storage_ptr__,
          FName *param_1,FRigElementKey *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,int> *pTVar5;
  FRigInfluenceEntryModifier *pFVar6;
  FRigInfluenceMap *this_00;
  uint *puVar7;
  
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->EventToIndex,*param_1);
  puVar7 = (uint *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    uVar1 = *puVar7;
    if (uVar1 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Maps).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRigInfluenceEntryModifier *)(*pcVar2)();
        return pFVar6;
      }
      this_00 = (FRigInfluenceMap *)
                ((this->Maps).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x68);
      if (this_00 != (FRigInfluenceMap *)0x0) {
        FRigInfluenceMap::GetEntryModifier(this_00,__return_storage_ptr__,param_2);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->AffectedList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AffectedList).ArrayNum = 0;
  (__return_storage_ptr__->AffectedList).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Inverse @ 14a424cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceMapPerEvent * __thiscall
FRigInfluenceMapPerEvent::Inverse
          (FRigInfluenceMapPerEvent *this,FRigInfluenceMapPerEvent *__return_storage_ptr__)

{
  TArray<FRigInfluenceEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FRigInfluenceMapPerEvent *pFVar8;
  FRigInfluenceMap *pFVar9;
  FRigInfluenceEntry *pFVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FRigElementKey *pFVar14;
  uint uVar15;
  FName *pFVar16;
  longlong lVar17;
  undefined1 auStackY_118 [32];
  longlong local_e8;
  undefined1 local_c8 [24];
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ForElementType<FSetElementId> local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar15 = 0;
  (__return_storage_ptr__->Maps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Maps).ArrayNum = 0;
  (__return_storage_ptr__->Maps).ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->EventToIndex = 0;
  *(undefined8 *)&(__return_storage_ptr__->EventToIndex).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EventToIndex).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EventToIndex).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EventToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->EventToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->EventToIndex).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->EventToIndex).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->EventToIndex).field_0x48 = 0;
  uVar5 = _UNK_150631d98;
  uVar4 = ___xmm_00000000ffffffff0000008000000000;
  iVar11 = (this->Maps).ArrayNum;
  if (0 < iVar11) {
    local_e8 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar11) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FRigInfluenceMapPerEvent *)(*pcVar3)();
        return pFVar8;
      }
      pFVar16 = (FName *)((this->Maps).AllocatorInstance.Data + local_e8);
      pFVar9 = FindOrAdd(__return_storage_ptr__,pFVar16);
      local_c8._0_8_ = *pFVar16;
      uVar13 = 0;
      local_c8._8_8_ = (FRigInfluenceEntry *)0x0;
      local_c8._16_4_ = 0;
      local_c8._20_4_ = 0;
      local_b0._0_8_ = (FScriptContainerElement *)0x0;
      local_b0._8_8_ = 0;
      local_90 = (void *)0x0;
      local_88 = uVar4;
      uStack_80 = uVar5;
      local_70 = (ForElementType<FSetElementId>)0x0;
      local_68 = 0;
      if (0 < (int)pFVar16[2].ComparisonIndex.Value) {
        lVar17 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar13 < (int)pFVar16[2].ComparisonIndex.Value) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRigInfluenceMapPerEvent *)(*pcVar3)();
            return pFVar8;
          }
          uVar12 = 0;
          pFVar14 = (FRigElementKey *)((longlong)pFVar16[1] + lVar17);
          if (0 < *(int *)(pFVar14 + 2)) {
            do {
              uVar7 = 0;
              if ((int)uVar12 < *(int *)(pFVar14 + 2)) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                pFVar8 = (FRigInfluenceMapPerEvent *)(*pcVar3)();
                return pFVar8;
              }
              pFVar10 = FRigInfluenceMap::FindOrAdd
                                  ((FRigInfluenceMap *)local_c8,
                                   (FRigElementKey *)
                                   ((longlong)pFVar14[1].Name + (longlong)(int)uVar12 * 0xc));
              TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FRigElementKey_const_&>(&pFVar10->AffectedList,pFVar14);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < *(int *)(pFVar14 + 2));
          }
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 0x20;
        } while ((int)uVar13 < (int)pFVar16[2].ComparisonIndex.Value);
      }
      (pFVar9->EventName).ComparisonIndex = (FNameEntryId)local_c8._0_4_;
      (pFVar9->EventName).Number = local_c8._4_4_;
      pTVar1 = &pFVar9->Entries;
      if (pTVar1 != (TArray<FRigInfluenceEntry,TSizedDefaultAllocator<32>_> *)(local_c8 + 8)) {
        DestructItems<FRigInfluenceEntry,int>
                  ((FRigInfluenceEntry *)(pTVar1->AllocatorInstance).Data,(pFVar9->Entries).ArrayNum
                  );
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)local_c8._8_8_;
        (pFVar9->Entries).ArrayNum = local_c8._16_4_;
        (pFVar9->Entries).ArrayMax = local_c8._20_4_;
        local_c8._16_4_ = 0;
        local_c8._20_4_ = 0;
        local_c8._8_8_ = (FRigInfluenceEntry *)0x0;
      }
      if (&pFVar9->KeyToIndex !=
          (TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
           *)local_b0) {
        TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                    *)&pFVar9->KeyToIndex,
                   (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                    *)local_b0);
      }
      local_68 = 0;
      if (local_70 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_70);
      }
      bVar6 = local_b0._12_4_ != 0;
      local_b0._8_8_ = (ulonglong)(uint)local_b0._12_4_ << 0x20;
      if (bVar6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
      }
      uVar13 = local_88._4_4_;
      uStack_80 = 0xffffffff;
      local_88 = (ulonglong)local_88._4_4_ << 0x20;
      if (0x80 < uVar13) {
        local_88 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b0._0_8_);
      }
      DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_c8._8_8_,local_c8._16_4_);
      if ((FRigInfluenceEntry *)local_c8._8_8_ != (FRigInfluenceEntry *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      local_e8 = local_e8 + 0x68;
      uVar15 = uVar15 + 1;
      iVar11 = (this->Maps).ArrayNum;
    } while ((int)uVar15 < iVar11);
  }
  return __return_storage_ptr__;
}

// Merge @ 14a42d2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigInfluenceMapPerEvent::Merge(FRigInfluenceMapPerEvent *this,FRigInfluenceMapPerEvent *param_1)

{
  FRigElementKey *pFVar1;
  int iVar2;
  FRigInfluenceMap *pFVar3;
  FName FVar4;
  FName *pFVar5;
  FRigInfluenceMapPerEvent *pFVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  FRigInfluenceEntry *pFVar9;
  ulonglong uVar10;
  bool bVar11;
  FRigElementKey *pFVar12;
  FName *pFVar13;
  int *piVar14;
  FName *pFVar15;
  FName FVar16;
  bool bVar17;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [4];
  uint local_154;
  uint local_150;
  FName *local_148;
  FName local_140;
  FRigInfluenceMap *local_138;
  FRigInfluenceMapPerEvent *local_130;
  FName *local_128;
  FRigInfluenceMapPerEvent *local_120;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  undefined1 local_a8 [88];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar2 = (this->Maps).ArrayNum;
  pFVar3 = (FRigInfluenceMap *)(this->Maps).AllocatorInstance.Data;
  local_108._0_8_ = (FRigInfluenceMap *)0x0;
  local_130 = param_1;
  local_120 = this;
  local_108._8_4_ = iVar2;
  if (iVar2 == 0) {
    local_108._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar2,0,(ForAnyElementType *)local_108,iVar2,(int *)(local_108 + 0xc));
    ConstructItems<FRigInfluenceMap,FRigInfluenceMap,int>((void *)local_108._0_8_,pFVar3,iVar2);
  }
  local_118 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               *)&this->EventToIndex;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)local_f8,local_118);
  local_150 = (param_1->Maps).ArrayNum;
  uVar10 = (ulonglong)(int)local_150;
  pFVar13 = (FName *)(param_1->Maps).AllocatorInstance.Data;
  pFVar15 = pFVar13 + 2;
  local_128 = pFVar13 + uVar10 * 0xd;
  while( true ) {
    pFVar5 = local_128;
    local_148 = pFVar13;
    if ((param_1->Maps).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FRigInfluenceMap_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_158);
    }
    pFVar6 = local_120;
    if (pFVar13 == pFVar5) break;
    local_138 = FindOrAdd((FRigInfluenceMapPerEvent *)local_108,pFVar13);
    if (*pFVar13 != local_138->EventName) {
LAB_14a42d525:
      bVar11 = false;
LAB_14a42d5a3:
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      bVar17 = local_f8._12_4_ != 0;
      local_f8._8_8_ = (ulonglong)(uint)local_f8._12_4_ << 0x20;
      if (bVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_d0 = 0;
      if (0x80 < local_cc) {
        local_cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
      DestructItems<FRigInfluenceMap,int>((FRigInfluenceMap *)local_108._0_8_,local_108._8_4_);
      if ((FRigInfluenceMap *)local_108._0_8_ != (FRigInfluenceMap *)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
      return bVar11;
    }
    FRigInfluenceMap::FRigInfluenceMap((FRigInfluenceMap *)local_a8,local_138);
    local_154 = (pFVar15->ComparisonIndex).Value;
    uVar10 = (ulonglong)(int)local_154;
    FVar16 = pFVar15[-1];
    local_140 = (FName)(uVar10 * 0x20 + (longlong)FVar16);
    piVar14 = (int *)((longlong)FVar16 + 0x18);
    while( true ) {
      FVar4 = local_140;
      if ((pFVar15->ComparisonIndex).Value != (uint)uVar10) {
        `TCheckedPointerIterator<FRigInfluenceEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (FVar16 == FVar4) break;
      pFVar9 = FRigInfluenceMap::FindOrAdd((FRigInfluenceMap *)local_a8,(FRigElementKey *)FVar16);
      FVar4.ComparisonIndex.Value = piVar14[-5];
      FVar4.Number = piVar14[-4];
      if ((FVar4 != (pFVar9->Source).Name) || (*(ERigElementType *)FVar16 != (pFVar9->Source).Type))
      {
        local_48 = 0;
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
        TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_a8 + 0x18));
        DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_a8._8_8_,local_a8._16_4_);
        if ((FRigInfluenceEntry *)local_a8._8_8_ != (FRigInfluenceEntry *)0x0) {
          FMemory::Free((void *)local_a8._8_8_);
        }
        goto LAB_14a42d525;
      }
      iVar2 = *piVar14;
      pFVar12 = *(FRigElementKey **)(piVar14 + -2);
      pFVar1 = pFVar12 + iVar2;
      while( true ) {
        if (*piVar14 != iVar2) {
          `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_158);
        }
        if (pFVar12 == pFVar1) break;
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                  (&pFVar9->AffectedList,pFVar12);
        pFVar12 = pFVar12 + 1;
      }
      FVar16 = (FName)((longlong)FVar16 + 0x20);
      uVar10 = (ulonglong)local_154;
      piVar14 = piVar14 + 8;
    }
    FRigInfluenceMap::operator=(local_138,(FRigInfluenceMap *)local_a8);
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_a8 + 0x18));
    DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_a8._8_8_,local_a8._16_4_);
    if ((FRigInfluenceEntry *)local_a8._8_8_ != (FRigInfluenceEntry *)0x0) {
      FMemory::Free((void *)local_a8._8_8_);
    }
    pFVar13 = local_148 + 0xd;
    pFVar15 = pFVar15 + 0xd;
    uVar10 = (ulonglong)local_150;
    param_1 = local_130;
  }
  if (local_120 != (FRigInfluenceMapPerEvent *)local_108) {
    DestructItems<FRigInfluenceMap,int>
              ((FRigInfluenceMap *)(local_120->Maps).AllocatorInstance.Data,
               (local_120->Maps).ArrayNum);
    uVar8 = local_108._8_4_;
    uVar7 = local_108._0_8_;
    piVar14 = &(pFVar6->Maps).ArrayMax;
    (pFVar6->Maps).ArrayNum = local_108._8_4_;
    if ((local_108._8_4_ == 0) && (*piVar14 == 0)) {
      *piVar14 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,local_108._8_4_,*piVar14,(ForAnyElementType *)pFVar6,local_108._8_4_,piVar14
                );
      ConstructItems<FRigInfluenceMap,FRigInfluenceMap,int>
                ((pFVar6->Maps).AllocatorInstance.Data,(FRigInfluenceMap *)uVar7,uVar8);
    }
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            (local_118,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)local_f8);
  bVar11 = true;
  goto LAB_14a42d5a3;
}

// OnKeyRemoved @ 14a430550

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigInfluenceMapPerEvent::OnKeyRemoved(FRigInfluenceMapPerEvent *this,FRigElementKey *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FRigInfluenceMap *pFVar7;
  longlong lVar8;
  FRigInfluenceMap *this_00;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Maps).ArrayNum;
  this_00 = (FRigInfluenceMap *)(this->Maps).AllocatorInstance.Data;
  pFVar7 = this_00 + iVar1;
  while( true ) {
    if ((this->Maps).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigInfluenceMap,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar7) break;
    uVar6 = 0;
    if (0 < (this_00->Entries).ArrayNum) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this_00->Entries).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
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
        pFVar5 = (this_00->Entries).AllocatorInstance.Data + lVar8;
        if ((*(FName *)(pFVar5 + 4) != param_1->Name) ||
           (*pFVar5 != (FScriptContainerElement)param_1->Type)) {
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Remove
                    ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(pFVar5 + 0x10),param_1);
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x20;
      } while ((int)uVar6 < (this_00->Entries).ArrayNum);
    }
    FRigInfluenceMap::Remove(this_00,param_1);
    this_00 = this_00 + 1;
  }
  return;
}

// OnKeyRenamed @ 14a430930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigInfluenceMapPerEvent::OnKeyRenamed
          (FRigInfluenceMapPerEvent *this,FRigElementKey *param_1,FRigElementKey *param_2)

{
  int iVar1;
  FRigInfluenceMap *this_00;
  FRigInfluenceMap *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Maps).ArrayNum;
  this_00 = (FRigInfluenceMap *)(this->Maps).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->Maps).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigInfluenceMap,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FRigInfluenceMap::OnKeyRenamed(this_00,param_1,param_2);
    this_00 = this_00 + 1;
  }
  return;
}

// Remove @ 14a43bd00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigInfluenceMapPerEvent::Remove(FRigInfluenceMapPerEvent *this,FName *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  TTuple<FName,int> *pTVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  FScriptContainerElement *_Dst;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 *puVar20;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  uint *puVar19;
  
  pTVar10 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->EventToIndex,*param_1);
  puVar14 = (uint *)0x0;
  uVar13 = 0;
  puVar17 = (uint *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,int> *)0x0) {
    puVar17 = puVar14;
  }
  if (puVar17 != (uint *)0x0) {
    uVar4 = *puVar17;
    if (uVar4 != 0xffffffff) {
      uVar16 = uVar13;
      if ((int)uVar4 < (this->Maps).ArrayNum) {
        uVar16 = ~uVar4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Dst = (this->Maps).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x68;
      *(undefined4 *)(_Dst + 0x60) = 0;
      if (*(void **)(_Dst + 0x58) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 0x58));
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(_Dst + 0x18));
      DestructItems<FRigInfluenceEntry,int>
                (*(FRigInfluenceEntry **)(_Dst + 8),*(int *)(_Dst + 0x10));
      if (*(void **)(_Dst + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(_Dst + 8));
      }
      iVar11 = (this->Maps).ArrayNum + ~uVar4;
      if (iVar11 != 0) {
        memmove(_Dst,_Dst + 0x68,(longlong)iVar11 * 0x68);
      }
      piVar1 = &(this->Maps).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,(ForAnyElementType *)this,(this->Maps).ArrayNum,&(this->Maps).ArrayMax);
      uVar16 = *(uint *)&(this->EventToIndex).field_0x28;
      puVar2 = &(this->EventToIndex).field_0x10;
      uVar7 = 1;
      uVar18 = 0;
      uVar8 = uVar18;
      if (uVar16 != 0) {
        puVar17 = *(uint **)&(this->EventToIndex).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar2;
        }
        uVar8 = *puVar17;
        puVar19 = puVar14;
        uVar18 = 0;
        uVar13 = 0;
        while (uVar8 == 0) {
          iVar11 = (int)puVar14;
          uVar18 = (int)puVar19 + 0x20;
          puVar19 = (uint *)(ulonglong)uVar18;
          uVar13 = iVar11 + 1;
          puVar14 = (uint *)(ulonglong)uVar13;
          uVar8 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_14a43be9f;
          uVar8 = puVar17[(longlong)iVar11 + 1];
        }
        uVar7 = -uVar8 & uVar8;
        uVar3 = (ulonglong)uVar7 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res10 = (int)lVar12;
        uVar8 = (uVar18 - 1) + local_res10;
        if ((int)uVar16 < (int)uVar8) {
          uVar8 = uVar16;
        }
      }
LAB_14a43be9f:
      uVar9 = *(uint *)&(this->EventToIndex).field_0x28;
      uVar15 = uVar9 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar7,uVar13);
      TStack_60.CurrentBitIndex = uVar8;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar9 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = uVar18;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(this->EventToIndex).field_0x8 -
                           *(int *)&(this->EventToIndex).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar9 < 0) || ((int)uVar16 < (int)uVar9)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = *(uint *)&(this->EventToIndex).field_0x28;
      if (uVar9 != uVar13) {
        puVar20 = *(undefined1 **)&(this->EventToIndex).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar2;
        }
        uVar16 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar11 * 4);
        while (uVar16 == 0) {
          lVar12 = (longlong)iVar11;
          uVar15 = uVar15 + 0x20;
          iVar11 = iVar11 + 1;
          uVar9 = uVar13;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14a43bfa1;
          uVar16 = *(uint *)(puVar20 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar9 = (int)lVar12 + -1 + uVar15;
        if ((int)uVar13 < (int)uVar9) {
          uVar9 = uVar13;
        }
      }
LAB_14a43bfa1:
      while( true ) {
        if (*(int *)&(this->EventToIndex).field_0x8 - *(int *)&(this->EventToIndex).field_0x34 !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar9) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
        lVar12 = *(longlong *)&(this->EventToIndex).field_0x0;
        iVar11 = *(int *)(lVar12 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
        if ((int)uVar4 < iVar11) {
          *(int *)(lVar12 + (longlong)TStack_60.CurrentBitIndex * 0x14 + 8) = iVar11 + -1;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return;
}

// SetEntryModifier @ 14a459810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigInfluenceMapPerEvent::SetEntryModifier
          (FRigInfluenceMapPerEvent *this,FName *param_1,FRigElementKey *param_2,
          FRigInfluenceEntryModifier *param_3)

{
  FRigElementKey *pFVar1;
  int iVar2;
  FRigInfluenceMap *this_00;
  FRigInfluenceEntry *pFVar3;
  FRigElementKey *pFVar4;
  undefined1 local_res20 [8];
  
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FRigInfluenceMap::FindOrAdd(this_00,param_2);
  (pFVar3->AffectedList).ArrayNum = 0;
  if ((pFVar3->AffectedList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(pFVar3->AffectedList).AllocatorInstance,0,&(pFVar3->AffectedList).ArrayMax)
    ;
  }
  iVar2 = (param_3->AffectedList).ArrayNum;
  pFVar4 = (FRigElementKey *)(param_3->AffectedList).AllocatorInstance.Data;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((param_3->AffectedList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar4 == pFVar1) break;
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (&pFVar3->AffectedList,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

