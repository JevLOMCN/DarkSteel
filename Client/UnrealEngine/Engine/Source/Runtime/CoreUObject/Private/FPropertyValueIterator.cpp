// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// operator-> @ 141e89790

TTuple<FProperty_const_*,void_const_*> * __thiscall
FPropertyValueIterator::operator->(FPropertyValueIterator *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<FProperty_const_*,void_const_*> *pTVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  piVar1 = &(this->PropertyIteratorStack).ArrayNum;
  iVar2 = *piVar1;
  uVar9 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar2) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TTuple<FProperty_const_*,void_const_*> *)(*pcVar4)();
      return pTVar6;
    }
  }
  FVar3 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    this = (FPropertyValueIterator *)FVar3;
  }
  lVar8 = (longlong)*piVar1 * 0xe0;
  lVar10 = lVar8 + -0xd8 + (longlong)this;
  uVar7 = *(uint *)(lVar8 + -8 + (longlong)this);
  uVar9 = 0;
  if ((int)uVar7 < *(int *)(lVar10 + 200)) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TTuple<FProperty_const_*,void_const_*> *)(*pcVar4)();
      return pTVar6;
    }
  }
  lVar8 = *(longlong *)(lVar10 + 0xc0);
  if (*(longlong *)(lVar10 + 0xc0) == 0) {
    lVar8 = lVar10;
  }
  return (TTuple<FProperty_const_*,void_const_*> *)(lVar8 + (longlong)(int)uVar7 * 0x18);
}

// FPropertyValueIterator @ 142257620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142257e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPropertyValueIterator * __thiscall
FPropertyValueIterator::FPropertyValueIterator
          (FPropertyValueIterator *this,FFieldClass *param_1,UStruct *param_2,void *param_3,
          EPropertyValueIteratorFlags param_4,DeprecatedPropertyFlags param_5)

{
  int *piVar1;
  byte bVar2;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar3;
  ulonglong *puVar4;
  FProperty *pFVar5;
  FProperty *pFVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  FProperty *pFVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FScriptSetHelper *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  EPropertyValueFlags EVar20;
  EPropertyValueFlags EVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FFieldClass *pFVar25;
  FPropertyValueIterator *pFVar26;
  longlong lVar27;
  uchar *puVar28;
  ulonglong uVar29;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar30;
  uint uVar31;
  ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
  FVar32;
  int iVar33;
  uint uVar34;
  ulonglong *puVar35;
  longlong lVar36;
  ulonglong uVar37;
  ForElementType<unsigned_int> FVar38;
  undefined8 *puVar39;
  FMapProperty *pFVar40;
  void *_Src;
  longlong lVar41;
  undefined1 auStackY_418 [32];
  int local_3d8 [2];
  longlong local_3d0;
  TScriptContainerIterator<FScriptSetHelper> local_3c8;
  int local_3b8;
  int local_3b4 [3];
  undefined8 local_3a8;
  int iStack_3a0;
  int iStack_39c;
  FProperty *local_398;
  TScriptContainerIterator<FScriptMapHelper> local_388;
  TScriptContainerIterator<FScriptMapHelper> local_378;
  FPropertyValueStackEntry local_368;
  FScriptMapHelper local_288;
  undefined1 local_250 [24];
  undefined8 uStack_238;
  int local_230;
  FPropertyValueStackEntry local_228;
  FPropertyValueStackEntry local_148;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_418;
  piVar1 = &(this->PropertyIteratorStack).ArrayMax;
  (this->PropertyIteratorStack).AllocatorInstance.SecondaryData =
       (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0;
  *piVar1 = 8;
  (this->PropertyIteratorStack).ArrayNum = 0;
  this->RecursionFlags = param_4;
  this->DeprecatedPropertyFlags = param_5;
  this->PropertyClass = param_1;
  this->bSkipRecursionOnce = false;
  pFVar25 = FProperty::StaticClass();
  uVar13 = _UNK_150895368;
  uVar11 = ___xmm_00000000ffffffff0000000800000000;
  local_228.ValueArray.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0;
  this->bMatchAll = param_1 == pFVar25;
  uVar14 = _UNK_150895368;
  uVar12 = ___xmm_00000000ffffffff0000000800000000;
  ___xmm_00000000ffffffff0000000800000000 = (int)uVar11;
  _UNK_150895364 = SUB84(uVar11,4);
  local_228.ValueArray.ArrayNum = ___xmm_00000000ffffffff0000000800000000;
  local_228.ValueArray.ArrayMax = _UNK_150895364;
  _UNK_150895368 = (int)uVar13;
  _UNK_15089536c = SUB84(uVar13,4);
  local_228.ValueIndex = _UNK_150895368;
  local_228.NextValueIndex = _UNK_15089536c;
  ___xmm_00000000ffffffff0000000800000000 = uVar12;
  _UNK_150895368 = uVar14;
  local_228.Owner = param_3;
  FillStructProperties(this,param_2,&local_228);
  if (local_228.ValueArray.ArrayNum < 1) {
LAB_14225849e:
    if (local_228.ValueArray.AllocatorInstance.SecondaryData !=
        (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
         )0x0) {
      FMemory::Free((void *)local_228.ValueArray.AllocatorInstance.SecondaryData);
    }
    return this;
  }
  iVar22 = (this->PropertyIteratorStack).ArrayNum;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>_>
                       (0x8e0,(ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> *)
                              this,piVar1);
  }
  (this->PropertyIteratorStack).ArrayNum = iVar22 + 1;
  FVar3 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
  FVar30 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
  if (FVar3 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar30 = FVar3;
  }
  puVar39 = (undefined8 *)((longlong)iVar22 * 0xe0 + (longlong)FVar30);
  *puVar39 = local_228.Owner;
  puVar39[0x19] = 0;
  if (local_228.ValueArray.AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
       )0x0) {
    memmove(puVar39 + 1,&local_228.ValueArray,0xc0);
  }
  if ((void *)puVar39[0x19] != (void *)0x0) {
    FMemory::Free((void *)puVar39[0x19]);
  }
  *(ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
    *)(puVar39 + 0x19) = local_228.ValueArray.AllocatorInstance.SecondaryData;
  local_228.ValueArray.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0;
  *(int *)(puVar39 + 0x1a) = local_228.ValueArray.ArrayNum;
  *(int *)((longlong)puVar39 + 0xd4) = local_228.ValueArray.ArrayMax;
  local_228.ValueArray.ArrayNum = 0;
  local_228.ValueArray.ArrayMax = 8;
  *(int *)(puVar39 + 0x1b) = local_228.ValueIndex;
  *(int *)((longlong)puVar39 + 0xdc) = local_228.NextValueIndex;
LAB_1422577f0:
  if (((this->PropertyIteratorStack).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PropertyIteratorStack.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                          ,0x6f,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
    return pFVar26;
  }
  do {
    iVar22 = (this->PropertyIteratorStack).ArrayNum;
    uVar31 = iVar22 - 1;
    uVar34 = 0;
    if ((int)uVar31 < iVar22) {
      uVar34 = ~uVar31 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
      return pFVar26;
    }
    FVar3 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
    FVar30 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
    if (FVar3 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar30 = FVar3;
    }
    lVar41 = (longlong)(this->PropertyIteratorStack).ArrayNum * 0xe0 + (longlong)FVar30;
    iVar22 = *(int *)(lVar41 + -4);
    local_3d0 = lVar41;
    if (iVar22 < *(int *)(lVar41 + -0x10)) {
      iVar23 = *(int *)(lVar41 + -8);
      *(int *)(lVar41 + -4) = iVar22 + 1;
      lVar36 = lVar41 + -0xd8;
      *(int *)(lVar41 + -8) = iVar22;
      if ((iVar22 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
        return pFVar26;
      }
      uVar34 = *(uint *)(lVar41 + -8);
      lVar27 = lVar36;
      if (*(longlong *)(lVar41 + -0x18) != 0) {
        lVar27 = *(longlong *)(lVar41 + -0x18);
      }
      pFVar40 = *(FMapProperty **)(lVar27 + (longlong)iVar22 * 0x18);
      uVar31 = 0;
      if ((int)uVar34 < *(int *)(lVar41 + -0x10)) {
        uVar31 = ~uVar34 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
        return pFVar26;
      }
      lVar27 = lVar36;
      if (*(longlong *)(lVar41 + -0x18) != 0) {
        lVar27 = *(longlong *)(lVar41 + -0x18);
      }
      uVar31 = *(uint *)(local_3d0 + -8);
      puVar4 = *(ulonglong **)(lVar27 + 8 + (longlong)(int)uVar34 * 0x18);
      uVar34 = 0;
      if ((int)uVar31 < *(int *)(lVar41 + -0x10)) {
        uVar34 = ~uVar31 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
        return pFVar26;
      }
      if (*(longlong *)(lVar41 + -0x18) != 0) {
        lVar36 = *(longlong *)(lVar41 + -0x18);
      }
      bVar2 = *(byte *)(lVar36 + 0x10 + (longlong)(int)uVar31 * 0x18);
      if ((bVar2 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PropertyValueFlags != EPropertyValueFlags::None",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                              ,0x7c,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
        return pFVar26;
      }
      if ((iVar23 != iVar22) && ((bVar2 & 1) != 0)) {
        if ((bVar2 & 0xf8) != 0) {
          *(undefined4 *)(local_3d0 + -4) = *(undefined4 *)(local_3d0 + -8);
        }
        goto LAB_14225849e;
      }
      if (((bVar2 & 0xf8) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumHasAnyFlags(PropertyValueFlags, (EPropertyValueFlags::IsOptional | EPropertyValueFlags::IsArray | EPropertyValueFlags::IsMap | EPropertyValueFlags::IsSet | EPropertyValueFlags::IsStruct))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                              ,0x8a,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
        return pFVar26;
      }
      uVar14 = _UNK_150895368;
      uVar12 = ___xmm_00000000ffffffff0000000800000000;
      if (param_4 == FullRecursion) {
        local_368.ValueArray.AllocatorInstance.SecondaryData =
             (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
              )0x0;
        ___xmm_00000000ffffffff0000000800000000 = (int)uVar11;
        _UNK_150895364 = SUB84(uVar11,4);
        local_368.ValueArray.ArrayNum = ___xmm_00000000ffffffff0000000800000000;
        local_368.ValueArray.ArrayMax = _UNK_150895364;
        _UNK_150895368 = (int)uVar13;
        _UNK_15089536c = SUB84(uVar13,4);
        local_368.ValueIndex = _UNK_150895368;
        local_368.NextValueIndex = _UNK_15089536c;
        ___xmm_00000000ffffffff0000000800000000 = uVar12;
        _UNK_150895368 = uVar14;
        local_368.Owner = puVar4;
        if ((bVar2 & 8) == 0) {
          if ((bVar2 & 0x10) != 0) {
            if ((pFVar40 == (FMapProperty *)0x0) ||
               ((*(uint *)(pFVar40->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
              pFVar40 = (FMapProperty *)0x0;
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x480,L"CastFieldChecked failed with 0x%016llx");
              if (bVar19) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
            }
            pFVar5 = pFVar40->ValueProp;
            EVar20 = GetPropertyValueFlags(this,pFVar5);
            if (EVar20 != None) {
              pFVar10 = pFVar40->KeyProp;
              (**(code **)(pFVar40->ValueProp->_padding_ + 0x168))();
              pFVar6 = pFVar40->ValueProp;
              iVar22 = pFVar6->ElementSize;
              if ((iVar22 < 1) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ElementSize > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1177,L""), bVar19)) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
              if ((pFVar6 == (FProperty *)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InnerProperty",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1178,L""), bVar19)) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
              uVar34 = (uint)puVar4[1];
              uVar37 = (ulonglong)uVar34;
              if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar37);
              }
              if (local_368.ValueArray.ArrayMax < (int)uVar34) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                          (0x18,8,uVar34,&local_368.ValueArray.AllocatorInstance,
                           local_368.ValueArray.ArrayNum,&local_368.ValueArray.ArrayMax);
              }
              if (0 < (int)uVar34) {
                lVar41 = 0;
                do {
                  if ((int)puVar4[1] == 0) {
                    lVar36 = 0;
                  }
                  else {
                    uVar29 = *puVar4;
                    if ((((ulonglong)pFVar10 & 1) != 0) && ((uVar29 & 1) != 0)) {
                      uVar29 = ((longlong)uVar29 >> 0x18) + (longlong)puVar4;
                    }
                    lVar36 = iVar22 * lVar41 + uVar29;
                  }
                  iVar23 = local_368.ValueArray.ArrayNum;
                  if (local_368.ValueArray.ArrayNum == local_368.ValueArray.ArrayMax) {
                    iVar23 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                       (0x818,&local_368.ValueArray.AllocatorInstance,
                                        &local_368.ValueArray.ArrayMax);
                  }
                  lVar27 = (longlong)iVar23;
                  local_368.ValueArray.ArrayNum = iVar23 + 1;
                  FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                            )&local_368.ValueArray;
                  if (local_368.ValueArray.AllocatorInstance.SecondaryData !=
                      (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                       )0x0) {
                    FVar32 = local_368.ValueArray.AllocatorInstance.SecondaryData;
                  }
                  lVar41 = lVar41 + 1;
                  *(FProperty **)((longlong)FVar32 + lVar27 * 0x18) = pFVar5;
                  *(longlong *)((uchar *)((longlong)FVar32 + 8) + lVar27 * 0x18) = lVar36;
                  ((uchar *)((longlong)FVar32 + 0x10))[lVar27 * 0x18] = EVar20;
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
            }
            goto LAB_142257d40;
          }
          if ((bVar2 & 0x20) != 0) {
            if ((pFVar40 == (FMapProperty *)0x0) ||
               ((*(ulonglong *)(pFVar40->_padding_ + 0x18) & 0x400000000000) == 0)) {
              pFVar40 = (FMapProperty *)0x0;
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x480,L"CastFieldChecked failed with 0x%016llx");
              if (bVar19) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
            }
            local_398 = pFVar40->KeyProp;
            pFVar5 = pFVar40->ValueProp;
            EVar20 = GetPropertyValueFlags(this,local_398);
            EVar21 = GetPropertyValueFlags(this,pFVar5);
            if (EVar21 != None || EVar20 != None) {
              FScriptMapHelper::FScriptMapHelper(&local_288,pFVar40,puVar4);
              local_3a8 = &local_288;
              iVar33 = 0;
              iStack_3a0 = 0;
              iVar22 = ((local_288.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
              iVar23 = iStack_3a0;
              if (0 < iVar22) {
                do {
                  local_3b8 = iVar33;
                  bVar19 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_288,(<lambda_1> *)&local_3b8);
                  iVar23 = iVar33;
                  if (bVar19) break;
                  iVar33 = iVar33 + 1;
                  iVar23 = iVar33;
                } while (iVar33 < iVar22);
              }
              iStack_3a0 = iVar23;
              iVar22 = iStack_3a0;
              iVar23 = 0;
              iStack_39c = 0;
              local_3d8[0] = iStack_3a0;
              bVar19 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_288,(<lambda_1> *)local_3d8);
              pFVar6 = local_398;
              if (bVar19) {
                do {
                  iVar18 = iStack_39c;
                  iVar33 = iStack_3a0;
                  uVar16 = (undefined4)local_3a8;
                  uVar17 = local_3a8._4_4_;
                  if (EVar20 != None) {
                    local_388.Container._0_4_ = (undefined4)local_3a8;
                    local_388.Container._4_4_ = local_3a8._4_4_;
                    local_388.InternalIndex = iStack_3a0;
                    local_388.LogicalIndex = iStack_39c;
                    puVar28 = FScriptMapHelper::GetKeyPtr(&local_288,&local_388);
                    iVar24 = local_368.ValueArray.ArrayNum;
                    if (local_368.ValueArray.ArrayNum == local_368.ValueArray.ArrayMax) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                         (0x818,&local_368.ValueArray.AllocatorInstance,
                                          &local_368.ValueArray.ArrayMax);
                    }
                    lVar41 = (longlong)iVar24;
                    local_368.ValueArray.ArrayNum = iVar24 + 1;
                    FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                              )&local_368.ValueArray;
                    if (local_368.ValueArray.AllocatorInstance.SecondaryData !=
                        (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                         )0x0) {
                      FVar32 = local_368.ValueArray.AllocatorInstance.SecondaryData;
                    }
                    *(FProperty **)((longlong)FVar32 + lVar41 * 0x18) = pFVar6;
                    *(uchar **)((uchar *)((longlong)FVar32 + 8) + lVar41 * 0x18) = puVar28;
                    ((uchar *)((longlong)FVar32 + 0x10))[lVar41 * 0x18] = EVar20;
                  }
                  if (EVar21 != None) {
                    local_378.Container._0_4_ = uVar16;
                    local_378.Container._4_4_ = uVar17;
                    local_378.InternalIndex = iVar33;
                    local_378.LogicalIndex = iVar18;
                    puVar28 = FScriptMapHelper::GetValuePtr(&local_288,&local_378);
                    iVar33 = local_368.ValueArray.ArrayNum;
                    if (local_368.ValueArray.ArrayNum == local_368.ValueArray.ArrayMax) {
                      iVar33 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                         (0x818,&local_368.ValueArray.AllocatorInstance,
                                          &local_368.ValueArray.ArrayMax);
                    }
                    lVar41 = (longlong)iVar33;
                    local_368.ValueArray.ArrayNum = iVar33 + 1;
                    FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                              )&local_368.ValueArray;
                    if (local_368.ValueArray.AllocatorInstance.SecondaryData !=
                        (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                         )0x0) {
                      FVar32 = local_368.ValueArray.AllocatorInstance.SecondaryData;
                    }
                    *(FProperty **)((longlong)FVar32 + lVar41 * 0x18) = pFVar5;
                    *(uchar **)((uchar *)((longlong)FVar32 + 8) + lVar41 * 0x18) = puVar28;
                    ((uchar *)((longlong)FVar32 + 0x10))[lVar41 * 0x18] = EVar21;
                  }
                  iVar22 = iVar22 + 1;
                  iVar33 = ((local_288.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                  iStack_3a0 = iVar22;
                  while ((iVar22 < iVar33 &&
                         (local_3b4[0] = iVar22,
                         bVar19 = FScriptMapHelper::
                                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                            (&local_288,(<lambda_1> *)local_3b4), !bVar19))) {
                    iVar22 = iVar22 + 1;
                  }
                  iVar23 = iVar23 + 1;
                  local_3d8[0] = iVar22;
                  iStack_3a0 = iVar22;
                  iStack_39c = iVar23;
                  bVar19 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_288,(<lambda_1> *)local_3d8);
                } while (bVar19);
              }
            }
            goto LAB_142257d40;
          }
          if ((bVar2 & 0x40) != 0) {
            if ((pFVar40 == (FMapProperty *)0x0) ||
               ((*(ulonglong *)(pFVar40->_padding_ + 0x18) & 0x800000000000) == 0)) {
              pFVar40 = (FMapProperty *)0x0;
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x480,L"CastFieldChecked failed with 0x%016llx");
              if (bVar19) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
            }
            pFVar5 = pFVar40->KeyProp;
            EVar20 = GetPropertyValueFlags(this,pFVar5);
            if (EVar20 != None) {
              local_250._0_8_ = pFVar40->KeyProp;
              local_230 = (pFVar40->MapLayout).SetLayout.HashIndexOffset;
              local_250._16_8_ = pFVar40->ValueProp;
              uStack_238._0_4_ = (pFVar40->MapLayout).ValueOffset;
              uStack_238._4_4_ = (pFVar40->MapLayout).SetLayout.HashNextIdOffset;
              local_250._8_8_ = puVar4;
              if (((FProperty *)local_250._0_8_ == (FProperty *)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ElementProp",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x1653,L""), bVar19)) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
              local_3c8.Container = (FScriptSetHelper *)local_250;
              local_3c8.InternalIndex = -1;
              local_3c8.LogicalIndex = -1;
              while( true ) {
                TScriptContainerIterator<FScriptSetHelper>::Advance(&local_3c8);
                pFVar15 = local_3c8.Container;
                uVar34 = local_3c8.InternalIndex;
                pTVar7 = (local_3c8.Container)->Set;
                if ((local_3c8.InternalIndex < 0) ||
                   ((pTVar7->Elements).AllocationFlags.NumBits <= local_3c8.InternalIndex)) break;
                if (((pTVar7->Elements).AllocationFlags.NumBits <= local_3c8.InternalIndex) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValidIndex(Index)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x8c4,L""), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                  return pFVar26;
                }
                FVar8 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                FVar38 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                  FVar38 = FVar8;
                }
                uVar31 = uVar34;
                if ((int)uVar34 < 0) {
                  uVar31 = uVar34 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar38 + (longlong)((int)uVar31 >> 5) * 4) >>
                     (uVar34 & 0x1f) & 1) == 0) break;
                iVar22 = local_3c8.InternalIndex;
                pTVar7 = pFVar15->Set;
                if (((int)uVar34 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar34)
                   ) {
LAB_142258275:
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Iterator",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x16bb,
                                      L"Invalid Iterator. Test Iterator before calling this method."
                                     );
                  if (bVar19) {
                    pcVar9 = (code *)swi(3);
                    pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                    return pFVar26;
                  }
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar34) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x8c4,L""), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                    return pFVar26;
                  }
                  FVar8 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar38 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                    FVar38 = FVar8;
                  }
                  uVar31 = uVar34 & 0x1f;
                  if ((int)uVar34 < 0) {
                    uVar34 = uVar34 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar38 + (longlong)((int)uVar34 >> 5) * 4) >> uVar31 & 1)
                      == 0) goto LAB_142258275;
                }
                iVar22 = local_230 * iVar22;
                uVar37 = *(ulonglong *)local_250._8_8_;
                iVar23 = local_368.ValueArray.ArrayNum;
                if (local_368.ValueArray.ArrayNum == local_368.ValueArray.ArrayMax) {
                  iVar23 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                     (0x818,&local_368.ValueArray.AllocatorInstance,
                                      &local_368.ValueArray.ArrayMax);
                }
                lVar41 = (longlong)iVar23;
                local_368.ValueArray.ArrayNum = iVar23 + 1;
                FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                          )&local_368.ValueArray;
                if (local_368.ValueArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                     )0x0) {
                  FVar32 = local_368.ValueArray.AllocatorInstance.SecondaryData;
                }
                *(FProperty **)((longlong)FVar32 + lVar41 * 0x18) = pFVar5;
                *(ulonglong *)((uchar *)((longlong)FVar32 + 8) + lVar41 * 0x18) =
                     (longlong)iVar22 + uVar37;
                ((uchar *)((longlong)FVar32 + 0x10))[lVar41 * 0x18] = EVar20;
              }
            }
            goto LAB_142257d40;
          }
          if ((char)bVar2 < '\0') {
            if ((pFVar40 == (FMapProperty *)0x0) ||
               ((*(uint *)(pFVar40->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
              pFVar40 = (FMapProperty *)0x0;
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x480,L"CastFieldChecked failed with 0x%016llx");
              if (bVar19) {
                pcVar9 = (code *)swi(3);
                pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
                return pFVar26;
              }
            }
            FillStructProperties(this,(UStruct *)pFVar40->KeyProp,&local_368);
            goto LAB_142257d40;
          }
        }
        else {
          if ((pFVar40 == (FMapProperty *)0x0) ||
             ((*(ulonglong *)(pFVar40->_padding_ + 0x18) & 0x100000000000000) == 0)) {
            pFVar40 = (FMapProperty *)0x0;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("CastResult",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x480,L"CastFieldChecked failed with 0x%016llx");
            if (bVar19) {
              pcVar9 = (code *)swi(3);
              pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
              return pFVar26;
            }
          }
          if ((pFVar40->KeyProp == (FProperty *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValueProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                  ,0x18,L"Expected ValueProperty to be initialized"), bVar19)) {
            pcVar9 = (code *)swi(3);
            pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
            return pFVar26;
          }
          pFVar5 = pFVar40->KeyProp;
          EVar20 = GetPropertyValueFlags(this,pFVar5);
          if (EVar20 != None) {
            bVar19 = FOptionalPropertyLayout::IsSet
                               ((FOptionalPropertyLayout *)&pFVar40->KeyProp,puVar4);
            puVar35 = (ulonglong *)0x0;
            if (bVar19) {
              puVar35 = puVar4;
            }
            if (puVar35 != (ulonglong *)0x0) {
              iVar22 = local_368.ValueArray.ArrayNum;
              if (local_368.ValueArray.ArrayNum == local_368.ValueArray.ArrayMax) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                   (0x818,&local_368.ValueArray.AllocatorInstance,
                                    &local_368.ValueArray.ArrayMax);
              }
              lVar41 = (longlong)iVar22;
              local_368.ValueArray.ArrayNum = iVar22 + 1;
              FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                        )&local_368.ValueArray;
              if (local_368.ValueArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                   )0x0) {
                FVar32 = local_368.ValueArray.AllocatorInstance.SecondaryData;
              }
              *(FProperty **)((longlong)FVar32 + lVar41 * 0x18) = pFVar5;
              *(ulonglong **)((uchar *)((longlong)FVar32 + 8) + lVar41 * 0x18) = puVar35;
              ((uchar *)((longlong)FVar32 + 0x10))[lVar41 * 0x18] = EVar20;
            }
          }
LAB_142257d40:
          if (0 < local_368.ValueArray.ArrayNum) break;
        }
        if (local_368.ValueArray.AllocatorInstance.SecondaryData !=
            (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
             )0x0) {
          FMemory::Free((void *)local_368.ValueArray.AllocatorInstance.SecondaryData);
        }
      }
    }
    if (*(int *)(local_3d0 + -4) == *(int *)(local_3d0 + -0x10)) {
      if (((this->PropertyIteratorStack).ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        pFVar26 = (FPropertyValueIterator *)(*pcVar9)();
        return pFVar26;
      }
      FVar3 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
      FVar30 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
      if (FVar3 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar30 = FVar3;
      }
      FPropertyValueStackEntry::FPropertyValueStackEntry
                (&local_148,
                 (FPropertyValueStackEntry *)
                 ((longlong)((this->PropertyIteratorStack).ArrayNum + -1) * 0xe0 + (longlong)FVar30)
                );
      FVar3 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
      iVar22 = (this->PropertyIteratorStack).ArrayNum;
      FVar30 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
      if (FVar3 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar30 = FVar3;
      }
      _Src = (void *)((longlong)iVar22 * 0xe0 + (longlong)FVar30);
      if (*(void **)((longlong)_Src + -0x18) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Src + -0x18));
      }
      iVar22 = (this->PropertyIteratorStack).ArrayNum - iVar22;
      if (iVar22 != 0) {
        memmove((void *)((longlong)_Src + -0xe0),_Src,(longlong)iVar22 * 0xe0);
      }
      piVar1 = &(this->PropertyIteratorStack).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>_>
                (0xe0,8,(ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> *)this,
                 (this->PropertyIteratorStack).ArrayNum,&(this->PropertyIteratorStack).ArrayMax);
      if (local_148.ValueArray.AllocatorInstance.SecondaryData !=
          (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
           )0x0) {
        FMemory::Free((void *)local_148.ValueArray.AllocatorInstance.SecondaryData);
      }
    }
    if ((this->PropertyIteratorStack).ArrayNum < 1) goto LAB_14225849e;
  } while( true );
  iVar22 = (this->PropertyIteratorStack).ArrayNum;
  piVar1 = &(this->PropertyIteratorStack).ArrayMax;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>_>
                       (0x8e0,(ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> *)
                              this,piVar1);
  }
  (this->PropertyIteratorStack).ArrayNum = iVar22 + 1;
  FVar3 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
  FVar30 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
  if (FVar3 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar30 = FVar3;
  }
  puVar39 = (undefined8 *)((longlong)iVar22 * 0xe0 + (longlong)FVar30);
  *puVar39 = local_368.Owner;
  puVar39[0x19] = 0;
  if (local_368.ValueArray.AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
       )0x0) {
    memmove(puVar39 + 1,&local_368.ValueArray,0xc0);
  }
  if ((void *)puVar39[0x19] != (void *)0x0) {
    FMemory::Free((void *)puVar39[0x19]);
  }
  *(ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
    *)(puVar39 + 0x19) = local_368.ValueArray.AllocatorInstance.SecondaryData;
  local_368.ValueArray.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0;
  *(int *)(puVar39 + 0x1a) = local_368.ValueArray.ArrayNum;
  *(int *)((longlong)puVar39 + 0xd4) = local_368.ValueArray.ArrayMax;
  local_368.ValueArray.ArrayNum = 0;
  local_368.ValueArray.ArrayMax = 8;
  *(int *)(puVar39 + 0x1b) = local_368.ValueIndex;
  *(int *)((longlong)puVar39 + 0xdc) = local_368.NextValueIndex;
  goto LAB_1422577f0;
}

// FillStructProperties @ 14226c100

void __thiscall
FPropertyValueIterator::FillStructProperties
          (FPropertyValueIterator *this,UStruct *param_1,FPropertyValueStackEntry *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  FFieldClass *pFVar9;
  FProperty *pFVar10;
  ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
  FVar11;
  code *pcVar12;
  DeprecatedPropertyFlags DVar13;
  EPropertyValueFlags EVar14;
  int iVar15;
  UScriptStruct *pUVar16;
  FFieldClass *pFVar17;
  longlong lVar18;
  UClass *pUVar19;
  ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
  FVar20;
  FProperty *pFVar21;
  int iVar22;
  TArray<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar23;
  longlong lVar24;
  bool bVar25;
  TFieldIterator<FProperty> local_58;
  
  pUVar16 = FInstancedStruct::StaticStruct();
  if ((((UScriptStruct *)param_1 == pUVar16) && (plVar7 = param_2->Owner, *plVar7 != 0)) &&
     ((void *)plVar7[1] != (void *)0x0)) {
    param_2->Owner = (void *)plVar7[1];
    param_1 = (UStruct *)*plVar7;
  }
  pvVar8 = param_2->Owner;
  pTVar23 = &param_2->ValueArray;
  pFVar9 = this->PropertyClass;
  pFVar17 = FObjectPropertyBase::StaticClass();
  if (pFVar17->Id == CASTCLASS_None) {
    for (; pFVar9 != (FFieldClass *)0x0; pFVar9 = pFVar9->SuperClass) {
      if (pFVar9 == pFVar17) {
        bVar25 = true;
        goto LAB_14226c17b;
      }
    }
    bVar25 = false;
  }
  else {
    bVar25 = (pFVar9->CastFlags & pFVar17->Id) != CASTCLASS_None;
  }
LAB_14226c17b:
  if (bVar25) {
    pFVar10 = param_1->RefLink;
    DVar13 = this->DeprecatedPropertyFlags;
    do {
      if (pFVar10 == (FProperty *)0x0) {
        return;
      }
      if ((((DVar13 & IncludeDeprecated) != ExcludeDeprecated) ||
          (((uint)(int)pFVar10->PropertyFlags >> 0x1d & 1) == 0)) &&
         (EVar14 = GetPropertyValueFlags(this,pFVar10), EVar14 != None)) {
        iVar5 = pFVar10->ArrayDim;
        iVar22 = (param_2->ValueArray).ArrayNum;
        uVar2 = iVar22 + iVar5;
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        piVar1 = &(param_2->ValueArray).ArrayMax;
        if (*piVar1 < (int)uVar2) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                    (0x18,8,uVar2,&pTVar23->AllocatorInstance,iVar22,piVar1);
        }
        iVar22 = 0;
        if (0 < iVar5) {
          lVar24 = 0;
          do {
            if ((pFVar10->ArrayDim <= iVar22) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if ((pvVar8 == (void *)0x0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar6 = pFVar10->Offset_Internal;
            lVar18 = pFVar10->ElementSize * lVar24;
            iVar15 = (param_2->ValueArray).ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                 (0x818,&pTVar23->AllocatorInstance,piVar1);
            }
            (param_2->ValueArray).ArrayNum = iVar15 + 1;
            FVar11 = (param_2->ValueArray).AllocatorInstance.SecondaryData;
            FVar20 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                      )pTVar23;
            if (FVar11 != (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                           )0x0) {
              FVar20 = FVar11;
            }
            iVar22 = iVar22 + 1;
            lVar24 = lVar24 + 1;
            puVar3 = (undefined8 *)((longlong)FVar20 + (longlong)iVar15 * 0x18);
            *puVar3 = pFVar10;
            puVar3[1] = (longlong)pvVar8 + iVar6 + lVar18;
            ((uchar *)((longlong)FVar20 + 0x10))[(longlong)iVar15 * 0x18] = EVar14;
          } while (iVar22 < iVar5);
        }
      }
      pFVar10 = pFVar10->NextRef;
    } while( true );
  }
  uVar4 = (undefined1)this->DeprecatedPropertyFlags;
  if (param_1 == (UStruct *)0x0) {
    local_58.Field = (FField *)0x0;
  }
  else {
    local_58.Field = param_1->ChildProperties;
  }
  local_58.InterfaceIndex = -1;
  local_58.bIncludeDeprecated = (bool)((byte)uVar4 >> 1 & 1);
  local_58.bIncludeSuper = true;
  local_58.Struct = param_1;
  if (((uVar4 & 4) != ExcludeDeprecated) && (param_1 != (UStruct *)0x0)) {
    pUVar19 = Z_Construct_UClass_UClass_NoRegister();
    iVar5 = (int)pUVar19->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_58.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
       == &pUVar19->_padding_)) goto LAB_14226c39b;
  }
  local_58.bIncludeInterface = false;
LAB_14226c39b:
  TFieldIterator<FProperty>::IterateToNext(&local_58);
  pFVar10 = (FProperty *)local_58.Field;
  do {
    if (pFVar10 == (FProperty *)0x0) {
      return;
    }
    local_58.Field = (FField *)pFVar10;
    EVar14 = GetPropertyValueFlags(this,pFVar10);
    pFVar21 = pFVar10;
    if (EVar14 != None) {
      iVar5 = pFVar10->ArrayDim;
      iVar22 = (param_2->ValueArray).ArrayNum;
      uVar2 = iVar22 + iVar5;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      piVar1 = &(param_2->ValueArray).ArrayMax;
      if (*piVar1 < (int)uVar2) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                  (0x18,8,uVar2,&pTVar23->AllocatorInstance,iVar22,piVar1);
      }
      iVar22 = 0;
      if (0 < iVar5) {
        lVar24 = 0;
        do {
          if ((pFVar10->ArrayDim <= iVar22) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((pvVar8 == (void *)0x0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar6 = pFVar10->Offset_Internal;
          lVar18 = pFVar10->ElementSize * lVar24;
          iVar15 = (param_2->ValueArray).ArrayNum;
          if (iVar15 == *piVar1) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                               (0x818,&pTVar23->AllocatorInstance,piVar1);
          }
          (param_2->ValueArray).ArrayNum = iVar15 + 1;
          FVar11 = (param_2->ValueArray).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                    )pTVar23;
          if (FVar11 != (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                         )0x0) {
            FVar20 = FVar11;
          }
          iVar22 = iVar22 + 1;
          lVar24 = lVar24 + 1;
          puVar3 = (undefined8 *)((longlong)FVar20 + (longlong)iVar15 * 0x18);
          *puVar3 = pFVar10;
          puVar3[1] = (longlong)pvVar8 + iVar6 + lVar18;
          ((uchar *)((longlong)FVar20 + 0x10))[(longlong)iVar15 * 0x18] = EVar14;
          pFVar21 = (FProperty *)local_58.Field;
        } while (iVar22 < iVar5);
      }
    }
    local_58.Field = (FField *)pFVar21->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_58);
    pFVar10 = (FProperty *)local_58.Field;
  } while( true );
}

// GetPropertyChain @ 1422705f0

void __thiscall
FPropertyValueIterator::GetPropertyChain
          (FPropertyValueIterator *this,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar9;
  uint uVar10;
  longlong lVar11;
  uchar *puVar12;
  undefined8 local_38 [2];
  
  uVar10 = (this->PropertyIteratorStack).ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar10 = (this->PropertyIteratorStack).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 0xe0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->PropertyIteratorStack).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
      if (FVar2 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar9 = FVar2;
      }
      puVar12 = (uchar *)((longlong)FVar9 + 8) + lVar11;
      uVar6 = *(uint *)((uchar *)((longlong)FVar9 + 0xd8) + lVar11);
      uVar7 = 0;
      if ((int)uVar6 < *(int *)(puVar12 + 200)) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (*(uchar **)(puVar12 + 0xc0) != (uchar *)0x0) {
        puVar12 = *(uchar **)(puVar12 + 0xc0);
      }
      local_38[0] = *(undefined8 *)(puVar12 + (longlong)(int)uVar6 * 0x18);
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar8;
      }
      param_1->ArrayNum = iVar8 + 1;
      lVar11 = lVar11 + -0xe0;
      uVar10 = uVar10 - 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
    } while (-1 < (int)uVar10);
  }
  return;
}

// GetPropertyPathDebugString @ 142270860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FPropertyValueIterator::GetPropertyPathDebugString
          (FPropertyValueIterator *this,FString *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar2;
  FField *this_00;
  FScriptContainerElement *pFVar3;
  FFieldClass *pFVar4;
  FProperty *this_01;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  void *pvVar11;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar12;
  ulong64 uVar13;
  uchar *puVar14;
  uint uVar15;
  uchar *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStackY_8f8 [32];
  FString local_8b8;
  FString *local_8a8;
  FString local_8a0;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  iVar18 = (this->PropertyIteratorStack).ArrayNum;
  local_888.End = local_52;
  uVar15 = 0;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_8a8 = __return_storage_ptr__;
  if (0 < iVar18) {
    lVar17 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < iVar18) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar5)();
        return pFVar10;
      }
      FVar2 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
      if (FVar2 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar12 = FVar2;
      }
      uVar8 = *(uint *)(lVar17 + 0xd8 + (longlong)FVar12);
      puVar16 = (uchar *)((longlong)FVar12 + 8) + lVar17;
      uVar9 = 0;
      if ((int)uVar8 < *(int *)(puVar16 + 200)) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar5)();
        return pFVar10;
      }
      if (*(uchar **)(puVar16 + 0xc0) != (uchar *)0x0) {
        puVar16 = *(uchar **)(puVar16 + 0xc0);
      }
      this_00 = *(FField **)(puVar16 + (longlong)(int)uVar8 * 0x18);
      pFVar10 = FField::GetAuthoredName(this_00,&local_8a0);
      iVar1 = (pFVar10->Data).ArrayNum;
      pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
      iVar18 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar18 = 0;
      }
      uVar13 = (ulong64)iVar18;
      if (local_888.End < local_888.CurPos + uVar13) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,uVar13);
      }
      if (iVar18 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,pFVar3,uVar13 * 2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
      }
      if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
      }
      iVar18 = (this->PropertyIteratorStack).ArrayNum;
      if ((int)(uVar15 + 1) < iVar18) {
        if (this_00 != (FField *)0x0) {
          pFVar4 = this_00->ClassPrivate;
          if ((pFVar4->CastFlags & CASTCLASS_FOptionalProperty) == CASTCLASS_None) {
            if (((uint)(int)pFVar4->CastFlags >> 0x15 & 1) == 0) {
              if (((pFVar4->CastFlags & CASTCLASS_FSetProperty) == CASTCLASS_None) &&
                 ((pFVar4->CastFlags & CASTCLASS_FMapProperty) != CASTCLASS_None)) {
                uVar8 = 0;
                if ((int)(uVar15 + 1) < (this->PropertyIteratorStack).ArrayNum) {
                  uVar8 = ~(uVar15 + 1) >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  pFVar10 = (FString *)(*pcVar5)();
                  return pFVar10;
                }
                FVar2 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
                FVar12 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
                if (FVar2 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0)
                {
                  FVar12 = FVar2;
                }
                uVar8 = *(uint *)((uchar *)((longlong)FVar12 + 0x1b8) + lVar17);
                puVar16 = (uchar *)((longlong)FVar12 + 0xe8) + lVar17;
                uVar9 = 0;
                if ((int)uVar8 < *(int *)(puVar16 + 200)) {
                  uVar9 = ~uVar8 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  pFVar10 = (FString *)(*pcVar5)();
                  return pFVar10;
                }
                uVar9 = *(uint *)((uchar *)((longlong)FVar12 + 0x1b8) + lVar17);
                puVar14 = puVar16;
                if (*(uchar **)(puVar16 + 0xc0) != (uchar *)0x0) {
                  puVar14 = *(uchar **)(puVar16 + 0xc0);
                }
                this_01 = *(FProperty **)(puVar14 + (longlong)(int)uVar8 * 0x18);
                uVar8 = 0;
                if ((int)uVar9 < *(int *)(puVar16 + 200)) {
                  uVar8 = ~uVar9 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  pFVar10 = (FString *)(*pcVar5)();
                  return pFVar10;
                }
                if (*(uchar **)(puVar16 + 0xc0) != (uchar *)0x0) {
                  puVar16 = *(uchar **)(puVar16 + 0xc0);
                }
                local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_8b8.Data.ArrayNum = 0;
                local_8b8.Data.ArrayMax = 0;
                FProperty::ExportText_Direct
                          (this_01,&local_8b8,*(void **)(puVar16 + (longlong)(int)uVar9 * 0x18 + 8),
                           (void *)0x0,(UObject *)0x0,0,(UObject *)0x0);
                if (local_888.End < local_888.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_888,1);
                }
                pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,L"[",2);
                FVar6.Data = local_8b8.Data.AllocatorInstance.Data;
                local_888.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
                iVar18 = local_8b8.Data.ArrayNum + -1;
                if (local_8b8.Data.ArrayNum == 0) {
                  iVar18 = 0;
                }
                uVar13 = (ulong64)iVar18;
                if (local_888.End < local_888.CurPos + uVar13) {
                  TStringBuilderBase<wchar_t>::Extend(&local_888,uVar13);
                }
                if (iVar18 != 0) {
                  pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,FVar6.Data,uVar13 * 2);
                  local_888.CurPos = (wchar_t *)((longlong)pvVar11 + uVar13 * 2);
                }
                if (local_888.End < local_888.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_888,1);
                }
                pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,L"]",2);
                local_888.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
                if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              if (((int)(uVar15 + 1) < 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FString *)(*pcVar5)();
                return pFVar10;
              }
              if (local_888.End < local_888.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_888,1);
              }
              pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,L"[",2);
              local_888.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_888,L"%d");
              if (local_888.End < local_888.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_888,1);
              }
              pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,L"]",2);
              local_888.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
              uVar15 = uVar15 + 1;
              lVar17 = lVar17 + 0xe0;
            }
          }
          else {
            if (local_888.End < local_888.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_888,1);
            }
            pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,&u__,2);
            local_888.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
            lVar17 = lVar17 + 0xe0;
            uVar15 = uVar15 + 1;
          }
        }
        iVar18 = (this->PropertyIteratorStack).ArrayNum;
        if ((int)(uVar15 + 1) < iVar18) {
          if (local_888.End < local_888.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_888,1);
          }
          pvVar11 = FGenericPlatformString::Memcpy(local_888.CurPos,L".",2);
          iVar18 = (this->PropertyIteratorStack).ArrayNum;
          local_888.CurPos = (wchar_t *)((longlong)pvVar11 + 2);
        }
      }
      uVar15 = uVar15 + 1;
      lVar17 = lVar17 + 0xe0;
    } while ((int)uVar15 < iVar18);
  }
  pFVar10 = local_8a8;
  if (local_888.End < local_888.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_888,1);
  }
  *local_888.CurPos = L'\0';
  ::FString::FString(pFVar10,local_888.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  return pFVar10;
}

// GetPropertyValueFlags @ 142270ef0

EPropertyValueFlags __thiscall
FPropertyValueIterator::GetPropertyValueFlags(FPropertyValueIterator *this,FProperty *param_1)

{
  ulonglong uVar1;
  FFieldClass *pFVar2;
  FFieldClass *pFVar3;
  code *pcVar4;
  bool bVar5;
  EPropertyValueFlags EVar6;
  
  EVar6 = None;
  if (this->RecursionFlags == FullRecursion) {
    uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
    EVar6 = ((byte)(uVar1 >> 0x2f) & 1) << 6 | ((byte)(uVar1 >> 0x2e) & 1) << 5 |
            ((byte)(uVar1 >> 0x38) & 1) << 3 | ((byte)(uVar1 >> 0x15) & 1) << 4 |
            (char)(uVar1 >> 0x14) << 7;
  }
  if (this->bMatchAll == false) {
    pFVar2 = this->PropertyClass;
    if ((pFVar2 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pFVar3 = (FFieldClass *)param_1->_padding_;
    if (pFVar2->Id == CASTCLASS_None) {
      for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
        if (pFVar3 == pFVar2) {
          bVar5 = true;
          goto LAB_142270fc0;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (pFVar3->CastFlags & pFVar2->Id) != CASTCLASS_None;
    }
LAB_142270fc0:
    if (!bVar5) {
      return EVar6;
    }
  }
  return EVar6 | IsMatch;
}

// IterateToNext @ 1422757f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142275f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FPropertyValueIterator::IterateToNext(FPropertyValueIterator *this)

{
  int *piVar1;
  byte bVar2;
  EPropertyValueIteratorFlags EVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  void *pvVar5;
  FProperty *pFVar6;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FScriptSetHelper *pFVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  FProperty *pFVar18;
  bool bVar19;
  EPropertyValueFlags EVar20;
  EPropertyValueFlags EVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  FMapProperty *pFVar26;
  uchar *puVar27;
  FSetProperty *pFVar28;
  FStructProperty *pFVar29;
  uint uVar30;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar31;
  ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
  FVar32;
  int iVar33;
  longlong lVar34;
  void *pvVar35;
  FScriptArrayHelper_u_8 FVar36;
  undefined1 *puVar37;
  int iVar38;
  longlong lVar39;
  ulonglong uVar40;
  ForElementType<unsigned_int> FVar41;
  EArrayPropertyFlags EVar42;
  FField *pFVar43;
  undefined8 *puVar44;
  undefined1 auStackY_438 [32];
  int local_3ec;
  longlong local_3e8;
  TScriptContainerIterator<FScriptSetHelper> local_3d8;
  int local_3c8;
  int local_3c4 [3];
  undefined8 local_3b8;
  int iStack_3b0;
  int iStack_3ac;
  FProperty *local_3a8;
  FScriptArrayHelper local_3a0;
  TScriptContainerIterator<FScriptMapHelper> local_378;
  TScriptContainerIterator<FScriptMapHelper> local_368;
  FPropertyValueStackEntry local_358;
  FScriptMapHelper local_278;
  FScriptSetHelper local_240;
  FPropertyValueStackEntry local_218;
  FPropertyValueStackEntry local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_438;
  if (this->bSkipRecursionOnce != false) {
    iVar22 = (this->PropertyIteratorStack).ArrayNum;
    this->bSkipRecursionOnce = false;
    if ((iVar22 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("PropertyIteratorStack.Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                            ,0x6f,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar22 = (this->PropertyIteratorStack).ArrayNum;
    uVar30 = iVar22 - 1;
    uVar23 = 0;
    if ((int)uVar30 < iVar22) {
      uVar23 = ~uVar30 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar4 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
    FVar31 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
    if (FVar4 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar31 = FVar4;
    }
    lVar34 = (longlong)(this->PropertyIteratorStack).ArrayNum * 0xe0 + (longlong)FVar31;
    iVar22 = *(int *)(lVar34 + -4);
    if (iVar22 < *(int *)(lVar34 + -0x10)) {
      iVar38 = *(int *)(lVar34 + -8);
      *(int *)(lVar34 + -4) = iVar22 + 1;
      *(int *)(lVar34 + -8) = iVar22;
      if ((iVar22 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = 0;
      if ((int)*(uint *)(lVar34 + -8) < *(int *)(lVar34 + -0x10)) {
        uVar23 = ~*(uint *)(lVar34 + -8) >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = *(uint *)(lVar34 + -8);
      uVar30 = 0;
      if ((int)uVar23 < *(int *)(lVar34 + -0x10)) {
        uVar30 = ~uVar23 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar25 = lVar34 + -0xd8;
      if (*(longlong *)(lVar34 + -0x18) != 0) {
        lVar25 = *(longlong *)(lVar34 + -0x18);
      }
      bVar2 = *(byte *)(lVar25 + 0x10 + (longlong)(int)uVar23 * 0x18);
      if ((bVar2 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PropertyValueFlags != EPropertyValueFlags::None",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                              ,0x7c,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((iVar38 != iVar22) && ((bVar2 & 1) != 0)) {
        if ((bVar2 & 0xf8) == 0) {
          return;
        }
        *(undefined4 *)(lVar34 + -4) = *(undefined4 *)(lVar34 + -8);
        return;
      }
      if (((bVar2 & 0xf8) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumHasAnyFlags(PropertyValueFlags, (EPropertyValueFlags::IsOptional | EPropertyValueFlags::IsArray | EPropertyValueFlags::IsMap | EPropertyValueFlags::IsSet | EPropertyValueFlags::IsStruct))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                              ,0x8a,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if ((*(int *)(lVar34 + -4) == *(int *)(lVar34 + -0x10)) &&
       (TArray<FPropertyValueIterator::FPropertyValueStackEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
        ::Pop(&this->PropertyIteratorStack,&local_218,Default),
       local_218.ValueArray.AllocatorInstance.SecondaryData !=
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0)) {
      FMemory::Free((void *)local_218.ValueArray.AllocatorInstance.SecondaryData);
    }
    if ((this->PropertyIteratorStack).ArrayNum < 1) {
      return;
    }
  }
  uVar12 = _UNK_150895368;
  uVar10 = ___xmm_00000000ffffffff0000000800000000;
  EVar3 = this->RecursionFlags;
LAB_142275ad0:
  if (((this->PropertyIteratorStack).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PropertyIteratorStack.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                          ,0x6f,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  do {
    iVar22 = (this->PropertyIteratorStack).ArrayNum;
    uVar30 = iVar22 - 1;
    uVar23 = 0;
    if ((int)uVar30 < iVar22) {
      uVar23 = ~uVar30 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar4 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
    FVar31 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
    if (FVar4 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar31 = FVar4;
    }
    lVar34 = (longlong)(this->PropertyIteratorStack).ArrayNum * 0xe0 + (longlong)FVar31;
    iVar22 = *(int *)(lVar34 + -4);
    local_3e8 = lVar34;
    if (iVar22 < *(int *)(lVar34 + -0x10)) {
      iVar38 = *(int *)(lVar34 + -8);
      *(int *)(lVar34 + -4) = iVar22 + 1;
      *(int *)(lVar34 + -8) = iVar22;
      if ((iVar22 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = *(uint *)(lVar34 + -8);
      lVar25 = lVar34 + -0xd8;
      if (*(longlong *)(lVar34 + -0x18) != 0) {
        lVar25 = *(longlong *)(lVar34 + -0x18);
      }
      pFVar43 = *(FField **)(lVar25 + (longlong)iVar22 * 0x18);
      uVar30 = 0;
      if ((int)uVar23 < *(int *)(lVar34 + -0x10)) {
        uVar30 = ~uVar23 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar25 = local_3e8;
      lVar39 = lVar34 + -0xd8;
      if (*(longlong *)(lVar34 + -0x18) != 0) {
        lVar39 = *(longlong *)(lVar34 + -0x18);
      }
      pvVar5 = *(void **)(lVar39 + 8 + (longlong)(int)uVar23 * 0x18);
      lVar39 = local_3e8 + -0xd8;
      uVar23 = *(uint *)(local_3e8 + -8);
      uVar30 = 0;
      if ((int)uVar23 < *(int *)(lVar34 + -0x10)) {
        uVar30 = ~uVar23 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(longlong *)(lVar25 + -0x18) != 0) {
        lVar39 = *(longlong *)(lVar25 + -0x18);
      }
      bVar2 = *(byte *)(lVar39 + 0x10 + (longlong)(int)uVar23 * 0x18);
      if ((bVar2 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("PropertyValueFlags != EPropertyValueFlags::None",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                              ,0x7c,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((iVar38 != iVar22) && ((bVar2 & 1) != 0)) {
        if ((bVar2 & 0xf8) == 0) {
          return;
        }
        *(undefined4 *)(local_3e8 + -4) = *(undefined4 *)(local_3e8 + -8);
        return;
      }
      if (((bVar2 & 0xf8) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumHasAnyFlags(PropertyValueFlags, (EPropertyValueFlags::IsOptional | EPropertyValueFlags::IsArray | EPropertyValueFlags::IsMap | EPropertyValueFlags::IsSet | EPropertyValueFlags::IsStruct))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UnrealType.cpp"
                              ,0x8a,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar13 = _UNK_150895368;
      uVar11 = ___xmm_00000000ffffffff0000000800000000;
      if (EVar3 == FullRecursion) {
        local_358.ValueArray.AllocatorInstance.SecondaryData =
             (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
              )0x0;
        ___xmm_00000000ffffffff0000000800000000 = (int)uVar10;
        _UNK_150895364 = SUB84(uVar10,4);
        local_358.ValueArray.ArrayNum = ___xmm_00000000ffffffff0000000800000000;
        local_358.ValueArray.ArrayMax = _UNK_150895364;
        _UNK_150895368 = (int)uVar12;
        _UNK_15089536c = SUB84(uVar12,4);
        local_358.ValueIndex = _UNK_150895368;
        local_358.NextValueIndex = _UNK_15089536c;
        ___xmm_00000000ffffffff0000000800000000 = uVar11;
        _UNK_150895368 = uVar13;
        local_358.Owner = pvVar5;
        if ((bVar2 & 8) == 0) {
          if ((bVar2 & 0x10) != 0) {
            if ((pFVar43 == (FField *)0x0) ||
               (((uint)(int)pFVar43->ClassPrivate->CastFlags >> 0x15 & 1) == 0)) {
              pFVar43 = (FField *)0x0;
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CastResult",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x480,L"CastFieldChecked failed with 0x%016llx");
              if (bVar19) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pFVar6 = (FProperty *)pFVar43[2].Next;
            EVar20 = GetPropertyValueFlags(this,pFVar6);
            if (EVar20 != None) {
              EVar42 = *(EArrayPropertyFlags *)&pFVar43[2].Owner.Container;
              uVar23 = (**(code **)((pFVar43[2].Next)->_padding_ + 0x168))();
              FScriptArrayHelper::FScriptArrayHelper
                        (&local_3a0,Internal,(FProperty *)pFVar43[2].Next,pvVar5,
                         ((FProperty *)pFVar43[2].Next)->ElementSize,uVar23,EVar42);
              EVar42 = local_3a0.ArrayFlags;
              FVar36 = local_3a0.field1_0x8;
              uVar23 = (local_3a0.field1_0x8.FreezableArray)->ArrayNum;
              uVar40 = (ulonglong)uVar23;
              if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar40);
              }
              if (local_358.ValueArray.ArrayMax < (int)uVar23) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                          (0x18,8,uVar23,&local_358.ValueArray.AllocatorInstance,
                           local_358.ValueArray.ArrayNum,&local_358.ValueArray.ArrayMax);
              }
              if (0 < (int)uVar23) {
                lVar34 = 0;
                do {
                  if ((FVar36.FreezableArray)->ArrayNum == 0) {
                    puVar37 = (undefined1 *)0x0;
                  }
                  else {
                    puVar37 = (undefined1 *)(FVar36.FreezableArray)->_padding_;
                    if (((EVar42 & UsesMemoryImageAllocator) != None) &&
                       (((ulonglong)puVar37 & 1) != 0)) {
                      puVar37 = &(FVar36.HeapArray)->field_0x0 + ((longlong)puVar37 >> 0x18);
                    }
                    puVar37 = puVar37 + local_3a0.ElementSize * lVar34;
                  }
                  iVar22 = local_358.ValueArray.ArrayNum;
                  if (local_358.ValueArray.ArrayNum == local_358.ValueArray.ArrayMax) {
                    iVar22 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                       (0x818,&local_358.ValueArray.AllocatorInstance,
                                        &local_358.ValueArray.ArrayMax);
                  }
                  lVar25 = (longlong)iVar22;
                  local_358.ValueArray.ArrayNum = iVar22 + 1;
                  FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                            )&local_358.ValueArray;
                  if (local_358.ValueArray.AllocatorInstance.SecondaryData !=
                      (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                       )0x0) {
                    FVar32 = local_358.ValueArray.AllocatorInstance.SecondaryData;
                  }
                  lVar34 = lVar34 + 1;
                  *(FProperty **)((longlong)FVar32 + lVar25 * 0x18) = pFVar6;
                  *(undefined1 **)((uchar *)((longlong)FVar32 + 8) + lVar25 * 0x18) = puVar37;
                  ((uchar *)((longlong)FVar32 + 0x10))[lVar25 * 0x18] = EVar20;
                  uVar40 = uVar40 - 1;
                  FVar36 = local_3a0.field1_0x8;
                  EVar42 = local_3a0.ArrayFlags;
                } while (uVar40 != 0);
              }
            }
            goto LAB_142275e59;
          }
          if ((bVar2 & 0x20) != 0) {
            pFVar26 = CastFieldChecked<FMapProperty>(pFVar43);
            local_3a8 = pFVar26->KeyProp;
            pFVar6 = pFVar26->ValueProp;
            EVar20 = GetPropertyValueFlags(this,local_3a8);
            EVar21 = GetPropertyValueFlags(this,pFVar6);
            if (EVar21 != None || EVar20 != None) {
              FScriptMapHelper::FScriptMapHelper(&local_278,pFVar26,pvVar5);
              local_3b8 = &local_278;
              iVar33 = 0;
              iStack_3b0 = 0;
              iVar22 = ((local_278.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
              iVar38 = iStack_3b0;
              if (0 < iVar22) {
                do {
                  local_3c8 = iVar33;
                  bVar19 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_278,(<lambda_1> *)&local_3c8);
                  iVar38 = iVar33;
                  if (bVar19) break;
                  iVar33 = iVar33 + 1;
                  iVar38 = iVar33;
                } while (iVar33 < iVar22);
              }
              iStack_3b0 = iVar38;
              iVar22 = iStack_3b0;
              iVar38 = 0;
              iStack_3ac = 0;
              local_3ec = iStack_3b0;
              bVar19 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_278,(<lambda_1> *)&local_3ec);
              pFVar18 = local_3a8;
              if (bVar19) {
                do {
                  iVar17 = iStack_3ac;
                  iVar33 = iStack_3b0;
                  uVar15 = (undefined4)local_3b8;
                  uVar16 = local_3b8._4_4_;
                  if (EVar20 != None) {
                    local_378.Container._0_4_ = (undefined4)local_3b8;
                    local_378.Container._4_4_ = local_3b8._4_4_;
                    local_378.InternalIndex = iStack_3b0;
                    local_378.LogicalIndex = iStack_3ac;
                    puVar27 = FScriptMapHelper::GetKeyPtr(&local_278,&local_378);
                    iVar24 = local_358.ValueArray.ArrayNum;
                    if (local_358.ValueArray.ArrayNum == local_358.ValueArray.ArrayMax) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                         (0x818,&local_358.ValueArray.AllocatorInstance,
                                          &local_358.ValueArray.ArrayMax);
                    }
                    lVar34 = (longlong)iVar24;
                    local_358.ValueArray.ArrayNum = iVar24 + 1;
                    FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                              )&local_358.ValueArray;
                    if (local_358.ValueArray.AllocatorInstance.SecondaryData !=
                        (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                         )0x0) {
                      FVar32 = local_358.ValueArray.AllocatorInstance.SecondaryData;
                    }
                    *(FProperty **)((longlong)FVar32 + lVar34 * 0x18) = pFVar18;
                    *(uchar **)((uchar *)((longlong)FVar32 + 8) + lVar34 * 0x18) = puVar27;
                    ((uchar *)((longlong)FVar32 + 0x10))[lVar34 * 0x18] = EVar20;
                  }
                  if (EVar21 != None) {
                    local_368.Container._0_4_ = uVar15;
                    local_368.Container._4_4_ = uVar16;
                    local_368.InternalIndex = iVar33;
                    local_368.LogicalIndex = iVar17;
                    puVar27 = FScriptMapHelper::GetValuePtr(&local_278,&local_368);
                    iVar33 = local_358.ValueArray.ArrayNum;
                    if (local_358.ValueArray.ArrayNum == local_358.ValueArray.ArrayMax) {
                      iVar33 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                         (0x818,&local_358.ValueArray.AllocatorInstance,
                                          &local_358.ValueArray.ArrayMax);
                    }
                    lVar34 = (longlong)iVar33;
                    local_358.ValueArray.ArrayNum = iVar33 + 1;
                    FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                              )&local_358.ValueArray;
                    if (local_358.ValueArray.AllocatorInstance.SecondaryData !=
                        (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                         )0x0) {
                      FVar32 = local_358.ValueArray.AllocatorInstance.SecondaryData;
                    }
                    *(FProperty **)((longlong)FVar32 + lVar34 * 0x18) = pFVar6;
                    *(uchar **)((uchar *)((longlong)FVar32 + 8) + lVar34 * 0x18) = puVar27;
                    ((uchar *)((longlong)FVar32 + 0x10))[lVar34 * 0x18] = EVar21;
                  }
                  iVar22 = iVar22 + 1;
                  iVar33 = ((local_278.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
                  iStack_3b0 = iVar22;
                  while ((iVar22 < iVar33 &&
                         (local_3c4[0] = iVar22,
                         bVar19 = FScriptMapHelper::
                                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                            (&local_278,(<lambda_1> *)local_3c4), !bVar19))) {
                    iVar22 = iVar22 + 1;
                  }
                  iVar38 = iVar38 + 1;
                  local_3ec = iVar22;
                  iStack_3b0 = iVar22;
                  iStack_3ac = iVar38;
                  bVar19 = FScriptMapHelper::
                           WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                     (&local_278,(<lambda_1> *)&local_3ec);
                } while (bVar19);
              }
            }
            goto LAB_142275e59;
          }
          if ((bVar2 & 0x40) != 0) {
            pFVar28 = CastFieldChecked<FSetProperty>(pFVar43);
            pFVar6 = pFVar28->ElementProp;
            EVar20 = GetPropertyValueFlags(this,pFVar6);
            if (EVar20 != None) {
              FScriptSetHelper::FScriptSetHelper(&local_240,pFVar28,pvVar5);
              local_3d8.Container = &local_240;
              local_3d8.InternalIndex = -1;
              local_3d8.LogicalIndex = -1;
              while( true ) {
                TScriptContainerIterator<FScriptSetHelper>::Advance(&local_3d8);
                pFVar14 = local_3d8.Container;
                uVar23 = local_3d8.InternalIndex;
                pTVar7 = (local_3d8.Container)->Set;
                if ((local_3d8.InternalIndex < 0) ||
                   ((pTVar7->Elements).AllocationFlags.NumBits <= local_3d8.InternalIndex)) break;
                if (((pTVar7->Elements).AllocationFlags.NumBits <= local_3d8.InternalIndex) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValidIndex(Index)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x8c4,L""), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar8 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                FVar41 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                  FVar41 = FVar8;
                }
                uVar30 = uVar23;
                if ((int)uVar23 < 0) {
                  uVar30 = uVar23 + 0x1f;
                }
                if ((*(uint *)((longlong)FVar41 + (longlong)((int)uVar30 >> 5) * 4) >>
                     (uVar23 & 0x1f) & 1) == 0) break;
                iVar22 = local_3d8.InternalIndex;
                pTVar7 = pFVar14->Set;
                if (((int)uVar23 < 0) || ((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar23)
                   ) {
LAB_142276456:
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Iterator",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x16bb,
                                      L"Invalid Iterator. Test Iterator before calling this method."
                                     );
                  if (bVar19) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                else {
                  if (((pTVar7->Elements).AllocationFlags.NumBits <= (int)uVar23) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x8c4,L""), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar8 = (pTVar7->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
                  FVar41 = (ForElementType<unsigned_int>)&(pTVar7->Elements).AllocationFlags;
                  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
                    FVar41 = FVar8;
                  }
                  uVar30 = uVar23 & 0x1f;
                  if ((int)uVar23 < 0) {
                    uVar23 = uVar23 + 0x1f;
                  }
                  if ((*(uint *)((longlong)FVar41 + (longlong)((int)uVar23 >> 5) * 4) >> uVar30 & 1)
                      == 0) goto LAB_142276456;
                }
                iVar22 = local_240.SetLayout.SparseArrayLayout.Size * iVar22;
                lVar34 = ((local_240.Set)->Elements).Data._padding_;
                iVar38 = local_358.ValueArray.ArrayNum;
                if (local_358.ValueArray.ArrayNum == local_358.ValueArray.ArrayMax) {
                  iVar38 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                     (0x818,&local_358.ValueArray.AllocatorInstance,
                                      &local_358.ValueArray.ArrayMax);
                }
                lVar25 = (longlong)iVar38;
                local_358.ValueArray.ArrayNum = iVar38 + 1;
                FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                          )&local_358.ValueArray;
                if (local_358.ValueArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                     )0x0) {
                  FVar32 = local_358.ValueArray.AllocatorInstance.SecondaryData;
                }
                *(FProperty **)((longlong)FVar32 + lVar25 * 0x18) = pFVar6;
                *(longlong *)((uchar *)((longlong)FVar32 + 8) + lVar25 * 0x18) = iVar22 + lVar34;
                ((uchar *)((longlong)FVar32 + 0x10))[lVar25 * 0x18] = EVar20;
              }
            }
            goto LAB_142275e59;
          }
          if ((char)bVar2 < '\0') {
            pFVar29 = CastFieldChecked<FStructProperty>(pFVar43);
            FillStructProperties(this,(UStruct *)(pFVar29->Struct).field0_0x0.DebugPtr,&local_358);
            goto LAB_142275e59;
          }
        }
        else {
          if ((pFVar43 == (FField *)0x0) ||
             ((pFVar43->ClassPrivate->CastFlags & CASTCLASS_FOptionalProperty) == CASTCLASS_None)) {
            pFVar43 = (FField *)0x0;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("CastResult",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x480,L"CastFieldChecked failed with 0x%016llx");
            if (bVar19) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if ((pFVar43[2].Owner.Container.Field == (FField *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ValueProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                  ,0x18,L"Expected ValueProperty to be initialized"), bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar6 = (FProperty *)pFVar43[2].Owner.Container.Field;
          EVar20 = GetPropertyValueFlags(this,pFVar6);
          if (EVar20 != None) {
            bVar19 = FOptionalPropertyLayout::IsSet
                               ((FOptionalPropertyLayout *)&pFVar43[2].Owner,pvVar5);
            pvVar35 = (void *)0x0;
            if (bVar19) {
              pvVar35 = pvVar5;
            }
            if (pvVar35 != (void *)0x0) {
              iVar22 = local_358.ValueArray.ArrayNum;
              if (local_358.ValueArray.ArrayNum == local_358.ValueArray.ArrayMax) {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,enum_FPropertyValueIterator::EPropertyValueFlags>_>_>
                                   (0x818,&local_358.ValueArray.AllocatorInstance,
                                    &local_358.ValueArray.ArrayMax);
              }
              lVar34 = (longlong)iVar22;
              local_358.ValueArray.ArrayNum = iVar22 + 1;
              FVar32 = (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                        )&local_358.ValueArray;
              if (local_358.ValueArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
                   )0x0) {
                FVar32 = local_358.ValueArray.AllocatorInstance.SecondaryData;
              }
              *(FProperty **)((longlong)FVar32 + lVar34 * 0x18) = pFVar6;
              *(void **)((uchar *)((longlong)FVar32 + 8) + lVar34 * 0x18) = pvVar35;
              ((uchar *)((longlong)FVar32 + 0x10))[lVar34 * 0x18] = EVar20;
            }
          }
LAB_142275e59:
          if (0 < local_358.ValueArray.ArrayNum) break;
        }
        if (local_358.ValueArray.AllocatorInstance.SecondaryData !=
            (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
             )0x0) {
          FMemory::Free((void *)local_358.ValueArray.AllocatorInstance.SecondaryData);
        }
      }
    }
    if ((*(int *)(local_3e8 + -4) == *(int *)(local_3e8 + -0x10)) &&
       (TArray<FPropertyValueIterator::FPropertyValueStackEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
        ::Pop(&this->PropertyIteratorStack,&local_138,Default),
       local_138.ValueArray.AllocatorInstance.SecondaryData !=
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0)) {
      FMemory::Free((void *)local_138.ValueArray.AllocatorInstance.SecondaryData);
    }
    if ((this->PropertyIteratorStack).ArrayNum < 1) {
      return;
    }
  } while( true );
  iVar22 = (this->PropertyIteratorStack).ArrayNum;
  piVar1 = &(this->PropertyIteratorStack).ArrayMax;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>_>
                       (0x8e0,(ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> *)
                              this,piVar1);
  }
  (this->PropertyIteratorStack).ArrayNum = iVar22 + 1;
  FVar4 = (this->PropertyIteratorStack).AllocatorInstance.SecondaryData;
  FVar31 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)this;
  if (FVar4 != (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar31 = FVar4;
  }
  puVar44 = (undefined8 *)((longlong)iVar22 * 0xe0 + (longlong)FVar31);
  *puVar44 = local_358.Owner;
  puVar44[0x19] = 0;
  if (local_358.ValueArray.AllocatorInstance.SecondaryData ==
      (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
       )0x0) {
    memmove(puVar44 + 1,&local_358.ValueArray,0xc0);
  }
  if ((void *)puVar44[0x19] != (void *)0x0) {
    FMemory::Free((void *)puVar44[0x19]);
  }
  *(ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
    *)(puVar44 + 0x19) = local_358.ValueArray.AllocatorInstance.SecondaryData;
  local_358.ValueArray.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<TTuple<FProperty_const_*,void_const_*>,FPropertyValueIterator::EPropertyValueFlags>_>
        )0x0;
  *(int *)(puVar44 + 0x1a) = local_358.ValueArray.ArrayNum;
  *(int *)((longlong)puVar44 + 0xd4) = local_358.ValueArray.ArrayMax;
  local_358.ValueArray.ArrayNum = 0;
  local_358.ValueArray.ArrayMax = 8;
  *(int *)(puVar44 + 0x1b) = local_358.ValueIndex;
  *(int *)((longlong)puVar44 + 0xdc) = local_358.NextValueIndex;
  goto LAB_142275ad0;
}

