// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 4

// ForEachComponent_Internal<USkeletalMeshComponent,1,1,void_(__cdecl*)(USkeletalMeshComponent_*)> @ 146495090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
          (AActor *this,TSubclassOf<UActorComponent> param_1,
          _func___cdecl_void_USkeletalMeshComponent_ptr *param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  ForElementType<AActor_*> FVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TObjectPtr<UClass>_u_0 local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_190 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1464951af;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1464951af:
  local_34 = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar19 = *puVar21;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar19 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_14649524d;
      uVar19 = puVar21[iStack_178];
    }
    uStack_174 = ~(uVar19 - 1) & uVar19;
    uVar4 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_14649524d:
  uVar19 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_15c = local_104;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = pTVar2;
  local_170 = puVar1;
  local_150 = pTVar2;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar5 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar19 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      iVar16 = iVar16 + 1;
      uVar18 = uVar18 + 0x20;
      uVar19 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_146495350;
      uVar19 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar19 = local_194 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar19) {
      uVar19 = uVar6;
    }
  }
LAB_146495350:
  do {
    pTVar11 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_38;
    TVar10 = local_190;
    if (((TStack_148.CurrentBitIndex == uVar19) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar17 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar17 = local_100.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar17 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar17 == FVar3) break;
        local_188 = (UObject *)(TVar10.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,1,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,param_2);
        FVar17 = (ForElementType<AActor_*>)((longlong)FVar17 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      (*param_2)(pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_1a0) {
          FVar17 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar17 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar17 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar17 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar17 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar17 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,1,void_(__cdecl*)(USkeletalMeshComponent_*)> @ 1464955b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
          (AActor *this,TSubclassOf<UActorComponent> param_1,
          _func___cdecl_void_USkeletalMeshComponent_ptr *param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  ForElementType<AActor_*> FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  ForElementType<AActor_*> local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  longlong local_1b0;
  int local_1a8;
  int local_1a4;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_1a0;
  TObjectPtr<UClass>_u_0 local_198;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  undefined1 local_108 [192];
  ForElementType<AActor_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_198 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14649569f;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14649569f:
  local_3c = 0x18;
  local_1a0 = &this->OwnedComponents;
  local_48 = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar17 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_180) goto LAB_146495743;
      uVar17 = puVar20[iStack_180];
    }
    uStack_17c = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1a8 = (int)lVar15;
    iStack_16c = local_1a8 + -1 + local_168;
    if (iVar4 < iStack_16c) {
      iStack_16c = iVar4;
    }
  }
LAB_146495743:
  uStack_164 = local_10c;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar17 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  uVar21 = uVar17 & 0xffffffe0;
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1a0;
  local_178 = puVar1;
  local_158 = local_1a0;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_1a0;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar17 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar17 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar18) goto LAB_146495850;
      uVar17 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
    }
    uVar3 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1a4 = (int)lVar15;
    uVar17 = local_1a4 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_146495850:
  do {
    pTVar12 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1b8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
    }
    iVar4 = local_40;
    TVar11 = local_198;
    if (((TStack_150.CurrentBitIndex == uVar17) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar10)) {
      FVar16 = (ForElementType<AActor_*>)local_108;
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FVar16 = local_48;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b7);
        }
        if (FVar16 == FVar2) break;
        local_190 = (UObject *)(TVar11.DebugPtr)->_padding_;
        this_00 = *(AActor **)FVar16;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,0,1,void_(__cdecl*)(USkeletalMeshComponent_*)>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,param_2);
        FVar16 = (ForElementType<AActor_*>)((longlong)FVar16 + 8);
      }
      if (local_48 != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_48);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        (*param_2)(pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1b0 = pUVar8->_padding_, local_1b0 != 0)) {
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        if ((ulonglong)FVar16 <= &local_1b0) {
          FVar16 = (ForElementType<AActor_*>)local_108;
          if (local_48 != (ForElementType<AActor_*>)0x0) {
            FVar16 = local_48;
          }
          if (&local_1b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
            local_1d0 = (longlong)local_40;
            local_1c8 = 8;
            local_1e8 = &local_1b0;
            local_1e0 = (ForElementType<AActor_*>)local_108;
            if (local_48 != (ForElementType<AActor_*>)0x0) {
              local_1e0 = local_48;
            }
            local_1d8 = (longlong)local_3c;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,(ForElementType<AActor_*> *)local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar16 = (ForElementType<AActor_*>)local_108;
        if (local_48 != (ForElementType<AActor_*>)0x0) {
          FVar16 = local_48;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar16 + lVar15 * 8) = local_1b0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> @ 146495b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
          (AActor *this,
          TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
          *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *local_res10;
  
  pUVar5 = (UClass *)0x0;
  pUVar6 = (UClass *)0x0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 == (UClass *)0x0) goto LAB_146495bf2;
  }
  else {
    pUVar6 = pUVar5;
    if (pUVar3 == (UClass *)0x0) goto LAB_146495bf2;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar6 = pUVar5;
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar6 = pUVar3;
    }
  }
LAB_146495bf2:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar3;
  if (pUVar6 == pUVar5) {
    if (param_2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<USceneComponent,1,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ForEachComponent_Internal<USceneComponent,1,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
    }
  }
  else if (param_2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<USceneComponent,0,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    ForEachComponent_Internal<USceneComponent,0,0,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)param_1);
  }
  return;
}

// operator() @ 14649ffe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,USceneComponent *param_1)

{
  ForElementType<USceneComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<USceneComponent_*> FVar5;
  USceneComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<USceneComponent_*> *)this;
  FVar5 = *(ForElementType<USceneComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<USceneComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<USceneComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (USceneComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0xcc) * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 200);
  if (iVar4 == *(int *)((longlong)FVar1 + 0xcc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                      (0x808,(ForElementType<USceneComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<USceneComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<USceneComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<USceneComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(USceneComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

