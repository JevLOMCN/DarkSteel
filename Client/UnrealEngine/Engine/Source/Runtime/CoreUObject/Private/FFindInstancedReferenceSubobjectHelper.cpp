// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// ForEachInstancedSubObject<void_*> @ 141e74720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFindInstancedReferenceSubobjectHelper::ForEachInstancedSubObject<void_*>
          (FInstancedPropertyPath *param_1,void *param_2,
          TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> *param_3)

{
  int *piVar1;
  int iVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> *pTVar8;
  FProperty *pFVar9;
  FScriptSetHelper *pFVar10;
  FScriptMapHelper *pFVar11;
  bool bVar12;
  int iVar13;
  FMapProperty *pFVar14;
  uchar *puVar15;
  uchar *puVar16;
  FProperty *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  void *pvVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  int *piVar25;
  FMapProperty *pFVar26;
  FMapProperty *pFVar27;
  undefined1 auStackY_208 [32];
  undefined4 local_1b4 [3];
  TScriptContainerIterator<FScriptSetHelper> local_1a8;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> *local_198;
  FScriptMapHelper *local_188;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  int local_174;
  int local_170;
  int local_16c;
  FProperty *local_168;
  int iStack_160;
  uint uStack_15c;
  void *local_158;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> local_150;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> local_140;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> local_130;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> local_120;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> local_110;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_*)> local_100;
  longlong local_f0;
  FInstancedPropertyPath local_e8;
  TScriptContainerIterator<FScriptMapHelper> local_d8;
  TScriptContainerIterator<FScriptMapHelper> local_c8;
  FScriptMapHelper local_b8;
  undefined1 local_80 [24];
  undefined8 uStack_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = param_3;
  if ((param_2 == (void *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerAddress",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\InstancedReferenceSubobjectHelper.cpp"
                          ,0x88,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = (FMapProperty *)FInstancedPropertyPath::Head(param_1);
  if ((pFVar14 == (FMapProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    pFVar26 = (FMapProperty *)0x0;
    if ((pFVar14 == (FMapProperty *)0x0) ||
       (pFVar27 = pFVar14, (*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x400000000000) == 0)) {
      pFVar27 = pFVar26;
    }
    if (pFVar27 == (FMapProperty *)0x0) {
      if ((pFVar14 == (FMapProperty *)0x0) ||
         (pFVar27 = pFVar14, (*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x800000000000) == 0)) {
        pFVar27 = pFVar26;
      }
      if (pFVar27 == (FMapProperty *)0x0) {
        if (pFVar14 != (FMapProperty *)0x0) {
          if ((*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x100000000000000) != 0) {
            if ((pFVar14->_padding_ & CPF_ContainsInstancedReference) == CPF_None) {
              return;
            }
            bVar12 = FOptionalPropertyLayout::IsSet
                               ((FOptionalPropertyLayout *)&pFVar14->KeyProp,param_2);
            if (bVar12) {
              pFVar26 = param_2;
            }
            if (pFVar26 == (FMapProperty *)0x0) {
              return;
            }
            pFVar17 = FOptionalPropertyLayout::GetValueProperty
                                ((FOptionalPropertyLayout *)&pFVar14->KeyProp);
            FInstancedPropertyPath::Push(param_1,pFVar17,-1,false);
            local_100._0_8_ = *(undefined8 *)param_3;
            local_100._8_8_ = *(undefined8 *)&param_3->field_0x8;
            ForEachInstancedSubObject<void_*>(param_1,pFVar26,&local_100);
            FInstancedPropertyPath::Pop(param_1);
            return;
          }
          if ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x14 & 1) != 0) {
            if ((pFVar14->_padding_ & CPF_ContainsInstancedReference) == CPF_None) {
              return;
            }
            if (pFVar14->KeyProp == (FProperty *)0x0) {
              return;
            }
            pFVar17 = (FProperty *)pFVar14->KeyProp[1]._padding_;
            pTVar8 = local_198;
            do {
              if (pFVar17 == (FProperty *)0x0) {
                return;
              }
              iVar24 = 0;
              iVar13 = pFVar17->ArrayDim;
              local_198 = pTVar8;
              if (0 < iVar13) {
                do {
                  if (((iVar24 < 0) || (iVar13 <= iVar24)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2dd,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((param_2 == (void *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ContainerPtr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2de,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = pFVar17->ElementSize;
                  iVar2 = pFVar17->Offset_Internal;
                  FInstancedPropertyPath::Push(param_1,pFVar17,iVar24,false);
                  local_110._0_8_ = *(undefined8 *)pTVar8;
                  local_110._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
                  ForEachInstancedSubObject<void_*>
                            (param_1,(void *)((longlong)param_2 +
                                             (longlong)iVar2 + (longlong)iVar24 * (longlong)iVar13),
                             &local_110);
                  FInstancedPropertyPath::Pop(param_1);
                  iVar13 = pFVar17->ArrayDim;
                  iVar24 = iVar24 + 1;
                } while (iVar24 < iVar13);
              }
              pFVar17 = pFVar17->NextRef;
              pTVar8 = local_198;
            } while( true );
          }
        }
        if (((ulonglong)pFVar14->_padding_ >> 0x31 & 1) != 0) {
          if ((((ulonglong)pFVar14->_padding_ >> 0x13 & 1) == 0) &&
             (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5871739413444165869>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\InstancedReferenceSubobjectHelper.cpp"
                                  ,0xed,"TargetProp->HasAllPropertyFlags(CPF_InstancedReference)"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x10 & 1) != 0) &&
             (local_f0 = (**(code **)(pFVar14->_padding_ + 0x1f8))(pFVar14,param_2), local_f0 != 0))
          {
            FInstancedPropertyPath::FInstancedPropertyPath(&local_e8,param_1);
            local_158 = param_2;
            (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_f0,&local_158);
            if (local_e8.PropertyChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.PropertyChain.AllocatorInstance.Data);
            }
          }
        }
      }
      else if ((pFVar27->_padding_ & CPF_ContainsInstancedReference) != CPF_None) {
        local_80._0_8_ = pFVar27->KeyProp;
        local_60 = (pFVar27->MapLayout).SetLayout.HashIndexOffset;
        local_80._16_8_ = pFVar27->ValueProp;
        uStack_68._0_4_ = (pFVar27->MapLayout).ValueOffset;
        uStack_68._4_4_ = (pFVar27->MapLayout).SetLayout.HashNextIdOffset;
        local_80._8_8_ = param_2;
        if (((FProperty *)local_80._0_8_ == (FProperty *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1653,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_1a8.Container = (FScriptSetHelper *)local_80;
        local_1a8.InternalIndex = -1;
        local_1a8.LogicalIndex = -1;
        while( true ) {
          TScriptContainerIterator<FScriptSetHelper>::Advance(&local_1a8);
          pFVar10 = local_1a8.Container;
          uVar20 = local_1a8.InternalIndex;
          pTVar3 = (local_1a8.Container)->Set;
          if ((local_1a8.InternalIndex < 0) ||
             ((pTVar3->Elements).AllocationFlags.NumBits <= local_1a8.InternalIndex)) break;
          if (((pTVar3->Elements).AllocationFlags.NumBits <= local_1a8.InternalIndex) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar4;
          }
          uVar21 = uVar20;
          if ((int)uVar20 < 0) {
            uVar21 = uVar20 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar20 & 0x1f) & 1
              ) == 0) {
            return;
          }
          iVar13 = local_1a8.InternalIndex;
          pTVar3 = pFVar10->Set;
          if (((int)uVar20 < 0) || ((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar20)) {
LAB_141e74d5b:
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Iterator",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x16bb,
                                L"Invalid Iterator. Test Iterator before calling this method.");
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar20) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x8c4,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar23 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
            if (FVar4 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = FVar4;
            }
            uVar21 = uVar20 & 0x1f;
            if ((int)uVar20 < 0) {
              uVar20 = uVar20 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar20 >> 5) * 4) >> uVar21 & 1) == 0)
            goto LAB_141e74d5b;
          }
          iVar13 = local_60 * iVar13;
          lVar5 = *(longlong *)local_80._8_8_;
          FInstancedPropertyPath::Push(param_1,pFVar27->KeyProp,local_1a8.LogicalIndex,false);
          local_120._0_8_ = *(undefined8 *)local_198;
          local_120._8_8_ = *(undefined8 *)&local_198->field_0x8;
          ForEachInstancedSubObject<void_*>(param_1,(void *)(iVar13 + lVar5),&local_120);
          FInstancedPropertyPath::Pop(param_1);
        }
      }
    }
    else if ((pFVar27->_padding_ & 0x8000000000U) != 0) {
      FScriptMapHelper::FScriptMapHelper(&local_b8,pFVar27,param_2);
      local_188 = &local_b8;
      uStack_17c = 0xffffffff;
      uStack_180 = 0;
      iVar13 = ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      pFVar14 = pFVar26;
      if (0 < iVar13) {
        do {
          local_170 = (int)pFVar14;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_b8,(<lambda_1> *)&local_170);
          if (bVar12) break;
          uVar20 = (int)pFVar14 + 1;
          pFVar14 = (FMapProperty *)(ulonglong)uVar20;
        } while ((int)uVar20 < iVar13);
        uStack_180 = (uint)pFVar14;
      }
      uStack_17c = 0;
      local_1b4[0] = SUB84(pFVar14,0);
      bVar12 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (&local_b8,(<lambda_1> *)local_1b4);
      pTVar8 = local_198;
      if (bVar12) {
        do {
          pFVar11 = local_188;
          uVar7._4_4_ = uStack_17c;
          uVar7._0_4_ = uStack_180;
          local_d8.Container = local_188;
          local_d8._8_8_ = uVar7;
          puVar15 = FScriptMapHelper::GetKeyPtr(&local_b8,&local_d8);
          local_c8.Container = pFVar11;
          local_c8._8_8_ = uVar7;
          puVar16 = FScriptMapHelper::GetValuePtr(&local_b8,&local_c8);
          iVar24 = (int)pFVar26;
          FInstancedPropertyPath::Push(param_1,pFVar27->KeyProp,iVar24,false);
          local_140._0_8_ = *(undefined8 *)pTVar8;
          local_140._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
          ForEachInstancedSubObject<void_*>(param_1,puVar15,&local_140);
          FInstancedPropertyPath::Pop(param_1);
          FInstancedPropertyPath::Push(param_1,pFVar27->ValueProp,iVar24,true);
          local_130._0_8_ = *(undefined8 *)pTVar8;
          local_130._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
          ForEachInstancedSubObject<void_*>(param_1,puVar16,&local_130);
          FInstancedPropertyPath::Pop(param_1);
          uStack_180 = (int)pFVar14 + 1;
          pFVar14 = (FMapProperty *)(ulonglong)uStack_180;
          iVar13 = ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          if ((int)uStack_180 < iVar13) {
            do {
              local_16c = (int)pFVar14;
              bVar12 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_b8,(<lambda_1> *)&local_16c);
              if (bVar12) break;
              uVar20 = (int)pFVar14 + 1;
              pFVar14 = (FMapProperty *)(ulonglong)uVar20;
            } while ((int)uVar20 < iVar13);
            uStack_180 = (uint)pFVar14;
          }
          uStack_17c = iVar24 + 1;
          pFVar26 = (FMapProperty *)(ulonglong)uStack_17c;
          local_1b4[0] = SUB84(pFVar14,0);
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_b8,(<lambda_1> *)local_1b4);
        } while (bVar12);
      }
    }
  }
  else if ((pFVar14->_padding_ & CPF_ContainsInstancedReference) != CPF_None) {
    pFVar9 = pFVar14->KeyProp;
    (**(code **)(pFVar14->ValueProp->_padding_ + 0x168))();
    pFVar17 = pFVar14->ValueProp;
    iVar13 = pFVar17->ElementSize;
    local_174 = iVar13;
    if ((iVar13 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar17 == (FProperty *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar22 = (void *)0x0;
    while( true ) {
      iVar24 = (int)pvVar22;
      if (*(int *)((longlong)param_2 + 8) <= iVar24) break;
      pvVar22 = (void *)0x0;
      if (*(int *)((longlong)param_2 + 8) != 0) {
        uVar18 = *(ulonglong *)param_2;
        if ((((ulonglong)pFVar9 & 1) != 0) && ((uVar18 & 1) != 0)) {
          uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)param_2;
        }
        pvVar22 = (void *)((longlong)iVar13 * (longlong)iVar24 + uVar18);
      }
      piVar25 = &(param_1->PropertyChain).ArrayMax;
      local_168 = pFVar14->ValueProp;
      pFVar19 = (param_1->PropertyChain).AllocatorInstance.Data;
      uStack_15c = uStack_15c & 0xffffff00;
      iStack_160 = iVar24;
      if (((pFVar19 <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < pFVar19 + (longlong)*piVar25 * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = (param_1->PropertyChain).ArrayNum;
      if (iVar13 == *piVar25) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)param_1,piVar25);
      }
      (param_1->PropertyChain).ArrayNum = iVar13 + 1;
      pFVar19 = (param_1->PropertyChain).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
      *(FProperty **)pFVar19 = local_168;
      *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_15c,iStack_160);
      local_150._0_8_ = *(undefined8 *)local_198;
      local_150._8_8_ = *(undefined8 *)&local_198->field_0x8;
      ForEachInstancedSubObject<void_*>(param_1,pvVar22,&local_150);
      iVar13 = (param_1->PropertyChain).ArrayNum;
      uVar21 = iVar13 - 1;
      local_178 = ~uVar21;
      uVar20 = 0;
      if ((int)uVar21 < iVar13) {
        uVar20 = local_178 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = (param_1->PropertyChain).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10;
      iVar13 = local_178 + (param_1->PropertyChain).ArrayNum;
      if (iVar13 != 0) {
        memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar13 << 4);
      }
      piVar1 = &(param_1->PropertyChain).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)param_1,(param_1->PropertyChain).ArrayNum,piVar25);
      pvVar22 = (void *)(ulonglong)(iVar24 + 1);
      iVar13 = local_174;
    }
  }
  return;
}

// ForEachInstancedSubObject<void_const_*> @ 141e75080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFindInstancedReferenceSubobjectHelper::ForEachInstancedSubObject<void_const_*>
          (FInstancedPropertyPath *param_1,void *param_2,
          TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> *param_3)

{
  int *piVar1;
  int iVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> *pTVar8;
  FProperty *pFVar9;
  FScriptSetHelper *pFVar10;
  FScriptMapHelper *pFVar11;
  bool bVar12;
  int iVar13;
  FMapProperty *pFVar14;
  uchar *puVar15;
  uchar *puVar16;
  FProperty *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  void *pvVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  int *piVar25;
  FMapProperty *pFVar26;
  FMapProperty *pFVar27;
  undefined1 auStackY_208 [32];
  undefined4 local_1b4 [3];
  TScriptContainerIterator<FScriptSetHelper> local_1a8;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> *local_198;
  FScriptMapHelper *local_188;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  int local_174;
  int local_170;
  int local_16c;
  FProperty *local_168;
  int iStack_160;
  uint uStack_15c;
  void *local_158;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> local_150;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> local_140;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> local_130;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> local_120;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> local_110;
  TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> local_100;
  longlong local_f0;
  FInstancedPropertyPath local_e8;
  TScriptContainerIterator<FScriptMapHelper> local_d8;
  TScriptContainerIterator<FScriptMapHelper> local_c8;
  FScriptMapHelper local_b8;
  undefined1 local_80 [24];
  undefined8 uStack_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = param_3;
  if ((param_2 == (void *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerAddress",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\InstancedReferenceSubobjectHelper.cpp"
                          ,0x88,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = (FMapProperty *)FInstancedPropertyPath::Head(param_1);
  if ((pFVar14 == (FMapProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x15 & 1) == 0))
  {
    pFVar26 = (FMapProperty *)0x0;
    if ((pFVar14 == (FMapProperty *)0x0) ||
       (pFVar27 = pFVar14, (*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x400000000000) == 0)) {
      pFVar27 = pFVar26;
    }
    if (pFVar27 == (FMapProperty *)0x0) {
      if ((pFVar14 == (FMapProperty *)0x0) ||
         (pFVar27 = pFVar14, (*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x800000000000) == 0)) {
        pFVar27 = pFVar26;
      }
      if (pFVar27 == (FMapProperty *)0x0) {
        if (pFVar14 != (FMapProperty *)0x0) {
          if ((*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x100000000000000) != 0) {
            if ((pFVar14->_padding_ & CPF_ContainsInstancedReference) == CPF_None) {
              return;
            }
            bVar12 = FOptionalPropertyLayout::IsSet
                               ((FOptionalPropertyLayout *)&pFVar14->KeyProp,param_2);
            if (bVar12) {
              pFVar26 = param_2;
            }
            if (pFVar26 == (FMapProperty *)0x0) {
              return;
            }
            pFVar17 = FOptionalPropertyLayout::GetValueProperty
                                ((FOptionalPropertyLayout *)&pFVar14->KeyProp);
            FInstancedPropertyPath::Push(param_1,pFVar17,-1,false);
            local_100._0_8_ = *(undefined8 *)param_3;
            local_100._8_8_ = *(undefined8 *)&param_3->field_0x8;
            ForEachInstancedSubObject<void_const_*>(param_1,pFVar26,&local_100);
            FInstancedPropertyPath::Pop(param_1);
            return;
          }
          if ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x14 & 1) != 0) {
            if ((pFVar14->_padding_ & CPF_ContainsInstancedReference) == CPF_None) {
              return;
            }
            if (pFVar14->KeyProp == (FProperty *)0x0) {
              return;
            }
            pFVar17 = (FProperty *)pFVar14->KeyProp[1]._padding_;
            pTVar8 = local_198;
            do {
              if (pFVar17 == (FProperty *)0x0) {
                return;
              }
              iVar24 = 0;
              iVar13 = pFVar17->ArrayDim;
              local_198 = pTVar8;
              if (0 < iVar13) {
                do {
                  if (((iVar24 < 0) || (iVar13 <= iVar24)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2dd,
                                          L"Array index out of bounds: %i from an array of size %i")
                     , bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((param_2 == (void *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ContainerPtr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                          ,0x2de,L""), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = pFVar17->ElementSize;
                  iVar2 = pFVar17->Offset_Internal;
                  FInstancedPropertyPath::Push(param_1,pFVar17,iVar24,false);
                  local_110._0_8_ = *(undefined8 *)pTVar8;
                  local_110._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
                  ForEachInstancedSubObject<void_const_*>
                            (param_1,(void *)((longlong)param_2 +
                                             (longlong)iVar2 + (longlong)iVar24 * (longlong)iVar13),
                             &local_110);
                  FInstancedPropertyPath::Pop(param_1);
                  iVar13 = pFVar17->ArrayDim;
                  iVar24 = iVar24 + 1;
                } while (iVar24 < iVar13);
              }
              pFVar17 = pFVar17->NextRef;
              pTVar8 = local_198;
            } while( true );
          }
        }
        if (((ulonglong)pFVar14->_padding_ >> 0x31 & 1) != 0) {
          if ((((ulonglong)pFVar14->_padding_ >> 0x13 & 1) == 0) &&
             (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5871739413444165869>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\InstancedReferenceSubobjectHelper.cpp"
                                  ,0xed,"TargetProp->HasAllPropertyFlags(CPF_InstancedReference)"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x10 & 1) != 0) &&
             (local_f0 = (**(code **)(pFVar14->_padding_ + 0x1f8))(pFVar14,param_2), local_f0 != 0))
          {
            FInstancedPropertyPath::FInstancedPropertyPath(&local_e8,param_1);
            local_158 = param_2;
            (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_f0,&local_158);
            if (local_e8.PropertyChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.PropertyChain.AllocatorInstance.Data);
            }
          }
        }
      }
      else if ((pFVar27->_padding_ & CPF_ContainsInstancedReference) != CPF_None) {
        local_80._0_8_ = pFVar27->KeyProp;
        local_60 = (pFVar27->MapLayout).SetLayout.HashIndexOffset;
        local_80._16_8_ = pFVar27->ValueProp;
        uStack_68._0_4_ = (pFVar27->MapLayout).ValueOffset;
        uStack_68._4_4_ = (pFVar27->MapLayout).SetLayout.HashNextIdOffset;
        local_80._8_8_ = param_2;
        if (((FProperty *)local_80._0_8_ == (FProperty *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1653,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_1a8.Container = (FScriptSetHelper *)local_80;
        local_1a8.InternalIndex = -1;
        local_1a8.LogicalIndex = -1;
        while( true ) {
          TScriptContainerIterator<FScriptSetHelper>::Advance(&local_1a8);
          pFVar10 = local_1a8.Container;
          uVar20 = local_1a8.InternalIndex;
          pTVar3 = (local_1a8.Container)->Set;
          if ((local_1a8.InternalIndex < 0) ||
             ((pTVar3->Elements).AllocationFlags.NumBits <= local_1a8.InternalIndex)) break;
          if (((pTVar3->Elements).AllocationFlags.NumBits <= local_1a8.InternalIndex) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar4;
          }
          uVar21 = uVar20;
          if ((int)uVar20 < 0) {
            uVar21 = uVar20 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar20 & 0x1f) & 1
              ) == 0) {
            return;
          }
          iVar13 = local_1a8.InternalIndex;
          pTVar3 = pFVar10->Set;
          if (((int)uVar20 < 0) || ((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar20)) {
LAB_141e756bb:
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Iterator",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x16bb,
                                L"Invalid Iterator. Test Iterator before calling this method.");
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar20) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x8c4,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar23 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
            if (FVar4 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = FVar4;
            }
            uVar21 = uVar20 & 0x1f;
            if ((int)uVar20 < 0) {
              uVar20 = uVar20 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar20 >> 5) * 4) >> uVar21 & 1) == 0)
            goto LAB_141e756bb;
          }
          iVar13 = local_60 * iVar13;
          lVar5 = *(longlong *)local_80._8_8_;
          FInstancedPropertyPath::Push(param_1,pFVar27->KeyProp,local_1a8.LogicalIndex,false);
          local_120._0_8_ = *(undefined8 *)local_198;
          local_120._8_8_ = *(undefined8 *)&local_198->field_0x8;
          ForEachInstancedSubObject<void_const_*>(param_1,(void *)(iVar13 + lVar5),&local_120);
          FInstancedPropertyPath::Pop(param_1);
        }
      }
    }
    else if ((pFVar27->_padding_ & 0x8000000000U) != 0) {
      FScriptMapHelper::FScriptMapHelper(&local_b8,pFVar27,param_2);
      local_188 = &local_b8;
      uStack_17c = 0xffffffff;
      uStack_180 = 0;
      iVar13 = ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      pFVar14 = pFVar26;
      if (0 < iVar13) {
        do {
          local_170 = (int)pFVar14;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_b8,(<lambda_1> *)&local_170);
          if (bVar12) break;
          uVar20 = (int)pFVar14 + 1;
          pFVar14 = (FMapProperty *)(ulonglong)uVar20;
        } while ((int)uVar20 < iVar13);
        uStack_180 = (uint)pFVar14;
      }
      uStack_17c = 0;
      local_1b4[0] = SUB84(pFVar14,0);
      bVar12 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (&local_b8,(<lambda_1> *)local_1b4);
      pTVar8 = local_198;
      if (bVar12) {
        do {
          pFVar11 = local_188;
          uVar7._4_4_ = uStack_17c;
          uVar7._0_4_ = uStack_180;
          local_d8.Container = local_188;
          local_d8._8_8_ = uVar7;
          puVar15 = FScriptMapHelper::GetKeyPtr(&local_b8,&local_d8);
          local_c8.Container = pFVar11;
          local_c8._8_8_ = uVar7;
          puVar16 = FScriptMapHelper::GetValuePtr(&local_b8,&local_c8);
          iVar24 = (int)pFVar26;
          FInstancedPropertyPath::Push(param_1,pFVar27->KeyProp,iVar24,false);
          local_140._0_8_ = *(undefined8 *)pTVar8;
          local_140._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
          ForEachInstancedSubObject<void_const_*>(param_1,puVar15,&local_140);
          FInstancedPropertyPath::Pop(param_1);
          FInstancedPropertyPath::Push(param_1,pFVar27->ValueProp,iVar24,true);
          local_130._0_8_ = *(undefined8 *)pTVar8;
          local_130._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
          ForEachInstancedSubObject<void_const_*>(param_1,puVar16,&local_130);
          FInstancedPropertyPath::Pop(param_1);
          uStack_180 = (int)pFVar14 + 1;
          pFVar14 = (FMapProperty *)(ulonglong)uStack_180;
          iVar13 = ((local_b8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          if ((int)uStack_180 < iVar13) {
            do {
              local_16c = (int)pFVar14;
              bVar12 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_b8,(<lambda_1> *)&local_16c);
              if (bVar12) break;
              uVar20 = (int)pFVar14 + 1;
              pFVar14 = (FMapProperty *)(ulonglong)uVar20;
            } while ((int)uVar20 < iVar13);
            uStack_180 = (uint)pFVar14;
          }
          uStack_17c = iVar24 + 1;
          pFVar26 = (FMapProperty *)(ulonglong)uStack_17c;
          local_1b4[0] = SUB84(pFVar14,0);
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_b8,(<lambda_1> *)local_1b4);
        } while (bVar12);
      }
    }
  }
  else if ((pFVar14->_padding_ & CPF_ContainsInstancedReference) != CPF_None) {
    pFVar9 = pFVar14->KeyProp;
    (**(code **)(pFVar14->ValueProp->_padding_ + 0x168))();
    pFVar17 = pFVar14->ValueProp;
    iVar13 = pFVar17->ElementSize;
    local_174 = iVar13;
    if ((iVar13 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar17 == (FProperty *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar22 = (void *)0x0;
    while( true ) {
      iVar24 = (int)pvVar22;
      if (*(int *)((longlong)param_2 + 8) <= iVar24) break;
      pvVar22 = (void *)0x0;
      if (*(int *)((longlong)param_2 + 8) != 0) {
        uVar18 = *(ulonglong *)param_2;
        if ((((ulonglong)pFVar9 & 1) != 0) && ((uVar18 & 1) != 0)) {
          uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)param_2;
        }
        pvVar22 = (void *)((longlong)iVar13 * (longlong)iVar24 + uVar18);
      }
      piVar25 = &(param_1->PropertyChain).ArrayMax;
      local_168 = pFVar14->ValueProp;
      pFVar19 = (param_1->PropertyChain).AllocatorInstance.Data;
      uStack_15c = uStack_15c & 0xffffff00;
      iStack_160 = iVar24;
      if (((pFVar19 <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < pFVar19 + (longlong)*piVar25 * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = (param_1->PropertyChain).ArrayNum;
      if (iVar13 == *piVar25) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)param_1,piVar25);
      }
      (param_1->PropertyChain).ArrayNum = iVar13 + 1;
      pFVar19 = (param_1->PropertyChain).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
      *(FProperty **)pFVar19 = local_168;
      *(ulonglong *)(pFVar19 + 8) = CONCAT44(uStack_15c,iStack_160);
      local_150._0_8_ = *(undefined8 *)local_198;
      local_150._8_8_ = *(undefined8 *)&local_198->field_0x8;
      ForEachInstancedSubObject<void_const_*>(param_1,pvVar22,&local_150);
      iVar13 = (param_1->PropertyChain).ArrayNum;
      uVar21 = iVar13 - 1;
      local_178 = ~uVar21;
      uVar20 = 0;
      if ((int)uVar21 < iVar13) {
        uVar20 = local_178 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = (param_1->PropertyChain).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10;
      iVar13 = local_178 + (param_1->PropertyChain).ArrayNum;
      if (iVar13 != 0) {
        memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar13 << 4);
      }
      piVar1 = &(param_1->PropertyChain).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)param_1,(param_1->PropertyChain).ArrayNum,piVar25);
      pvVar22 = (void *)(ulonglong)(iVar24 + 1);
      iVar13 = local_174;
    }
  }
  return;
}

// GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_> @ 141e761b0

void __cdecl
FFindInstancedReferenceSubobjectHelper::
GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>
          (UObject *param_1,TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  FProperty *this;
  TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_> *local_res8;
  FInstancedPropertyPath local_48;
  FProperty *local_38;
  int iStack_30;
  uint uStack_2c;
  code *local_28;
  TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_> **local_20;
  
  this = *(FProperty **)(*(longlong *)&param_1->field_0x10 + 0x78);
  if (this != (FProperty *)0x0) {
    do {
      iVar3 = 0;
      if (0 < this->ArrayDim) {
        do {
          local_48.PropertyChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.PropertyChain.ArrayNum = 0;
          local_48.PropertyChain.ArrayMax = 0;
          uStack_2c = uStack_2c & 0xffffff00;
          local_38 = this;
          iStack_30 = iVar3;
          iVar1 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)&local_48,&local_48.PropertyChain.ArrayMax);
          local_48.PropertyChain.ArrayNum = iVar1 + 1;
          *(FProperty **)(local_48.PropertyChain.AllocatorInstance.Data + (longlong)iVar1 * 0x10) =
               local_38;
          *(ulonglong *)(local_48.PropertyChain.AllocatorInstance.Data + (longlong)iVar1 * 0x10 + 8)
               = CONCAT44(uStack_2c,iStack_30);
          pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,iVar3);
          local_20 = &local_res8;
          local_28 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FFindInstancedReferenceSubobjectHelper::GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>'::__l6::<lambda_1>,void,FInstancedSubObjRef_const_&,void_const_*>
                     ::Call;
          local_res8 = param_2;
          ForEachInstancedSubObject<void_const_*>
                    (&local_48,pvVar2,
                     (TFunctionRef<void___cdecl(FInstancedSubObjRef_const_&,void_const_*)> *)
                     &local_28);
          if (local_48.PropertyChain.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.PropertyChain.AllocatorInstance.Data);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < this->ArrayDim);
      }
      this = this->NextRef;
    } while (this != (FProperty *)0x0);
  }
  return;
}

// operator() @ 141e8c760

void __thiscall
`FFindInstancedReferenceSubobjectHelper::
GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>'::__l6::<lambda_1>
::operator()(void *this,FInstancedSubObjRef *param_1,void *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FInstancedSubObjRef *)pFVar2->Data <= param_1) &&
     (param_1 < (FInstancedSubObjRef *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(UObject **)(pFVar3 + (longlong)iVar6 * 0x18) = param_1->SubObjInstance;
  FInstancedPropertyPath::FInstancedPropertyPath
            ((FInstancedPropertyPath *)(pFVar3 + (longlong)iVar6 * 0x18 + 8),&param_1->PropertyPath)
  ;
  return;
}

// Duplicate @ 141e96c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FFindInstancedReferenceSubobjectHelper::Duplicate
          (UObject *param_1,UObject *param_2,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_3,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_5)

{
  code *pcVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  bool bVar5;
  FInstancedSubObjRef *pFVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UPackage *pUVar11;
  TTuple<UObject_*,UObject_*> *pTVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  undefined1 local_e8 [8];
  UObject *local_e0;
  longlong *local_d8;
  TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_> local_c0;
  uint local_b0;
  UObject *local_a8;
  undefined1 local_a0 [8];
  TPairInitializer<UObject_*_const_&,UObject_*_const_&> local_98;
  UObject *local_88;
  FName local_80;
  FInstancedSubObjRef *local_78;
  FString local_70;
  UObject ***local_60;
  UObject **local_58;
  UObject **local_50;
  UObject **local_48;
  UObject **local_40;
  longlong **local_38;
  
  if (((*(uint *)(*(longlong *)&param_1->field_0x10 + 0xd4) & 0x800000) != 0) &&
     ((*(uint *)(*(longlong *)&param_2->field_0x10 + 0xd4) & 0x800000) != 0)) {
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_c0);
    if (0 < local_c0.ArrayNum) {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>
                (param_2,&local_d0);
      uVar15 = (ulonglong)local_d0.ArrayNum;
      local_b0 = local_d0.ArrayNum;
      local_78 = (FInstancedSubObjRef *)(local_d0.AllocatorInstance.Data + uVar15 * 0x18);
      FVar18.Data = local_d0.AllocatorInstance.Data;
LAB_141e96d47:
      pFVar6 = local_78;
      if (local_d0.ArrayNum != (int)uVar15) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<FInstancedSubObjRef,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if ((FInstancedSubObjRef *)FVar18.Data != pFVar6) {
        pUVar10 = ((FInstancedSubObjRef *)FVar18.Data)->SubObjInstance;
        if (*(UObject **)&pUVar10->field_0x20 == param_1) {
          for (FVar17.Data = local_c0.AllocatorInstance.Data;
              (FInstancedSubObjRef *)FVar17.Data !=
              (FInstancedSubObjRef *)
              (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x18);
              FVar17.Data = FVar17.Data + 0x18) {
            if (((FInstancedSubObjRef *)FVar17.Data)->SubObjInstance == pUVar10) {
              bVar7 = true;
              goto LAB_141e96da5;
            }
          }
          bVar7 = false;
LAB_141e96da5:
          uVar13 = ((uint)((ulonglong)pUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar10 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          uVar13 = uVar13 >> 0x10 ^ uVar13;
          if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
            puVar16 = &param_3->field_0x38;
            if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
              puVar16 = *(undefined1 **)&param_3->field_0x40;
            }
            iVar8 = *(int *)(puVar16 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & uVar13) * 4);
            if (iVar8 != -1) {
              do {
                if (*(UObject **)(*(longlong *)param_3 + (longlong)iVar8 * 0x18) == pUVar10)
                goto LAB_141e97016;
                iVar8 = *(int *)(*(longlong *)param_3 + 0x10 + (longlong)iVar8 * 0x18);
              } while (iVar8 != -1);
            }
          }
          if ((param_5 !=
               (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                *)0x0) && (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34)) {
            puVar16 = &param_5->field_0x38;
            if (*(undefined1 **)&param_5->field_0x40 != (undefined1 *)0x0) {
              puVar16 = *(undefined1 **)&param_5->field_0x40;
            }
            iVar8 = *(int *)(puVar16 + (ulonglong)(*(int *)&param_5->field_0x48 - 1U & uVar13) * 4);
            if (iVar8 != -1) {
              do {
                if (*(UObject **)(*(longlong *)param_5 + (longlong)iVar8 * 0x18) == pUVar10)
                goto LAB_141e97016;
                iVar8 = *(int *)(*(longlong *)param_5 + 0x10 + (longlong)iVar8 * 0x18);
              } while (iVar8 != -1);
            }
          }
          bVar5 = true;
          goto LAB_141e96e7b;
        }
        goto LAB_141e9716b;
      }
      DestructItems<FInstancedSubObjRef,int>
                ((FInstancedSubObjRef *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if ((FInstancedSubObjRef *)local_d0.AllocatorInstance.Data != (FInstancedSubObjRef *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
    }
    DestructItems<FInstancedSubObjRef,int>
              ((FInstancedSubObjRef *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
    if ((FInstancedSubObjRef *)local_c0.AllocatorInstance.Data != (FInstancedSubObjRef *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  return;
LAB_141e97016:
  bVar5 = false;
LAB_141e96e7b:
  if (!bVar7) goto LAB_141e9716b;
  if (bVar5) {
    FVar4.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
    FVar4.Number = *(uint *)&pUVar10->field_0x1c;
    pUVar9 = Z_Construct_UClass_UObject_NoRegister();
    pUVar10 = StaticFindObjectFast(pUVar9,param_2,FVar4,None,RF_NoFlags,Borrowed);
    if (pUVar10 != (UObject *)0x0) {
      pcVar1 = *(code **)(*(longlong *)pUVar10 + 0x170);
      pUVar11 = GetTransientPackage();
      (*pcVar1)(pUVar10,0,pUVar11,0x34);
    }
    pUVar10 = ((FInstancedSubObjRef *)FVar18.Data)->SubObjInstance;
    FVar2.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
    FVar2.Number = *(uint *)&pUVar10->field_0x1c;
    local_e0 = StaticDuplicateObject
                         (pUVar10,param_2,FVar2,
                          RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                          RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                          RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                          RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                          RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                          RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                          RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                          RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                          RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                          RF_Public,(UClass *)0x0,Normal,
                          PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                          ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                          AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                          ReachabilityFlag0);
    local_98.Value = (UObject **)((FInstancedSubObjRef *)FVar18.Data)->SubObjInstance;
    local_60 = &local_98.Value;
    local_58 = &local_e0;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_&&,UObject_*_const_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<UObject_*_&&,UObject_*_const_&> *)local_a0,
               (bool *)&local_60);
    if (param_5 !=
        (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
         *)0x0) {
      local_88 = ((FInstancedSubObjRef *)FVar18.Data)->SubObjInstance;
      local_50 = &local_88;
      local_48 = &local_e0;
      TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_&&,UObject_*_const_&>_>
                ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                  *)param_5,(TPairInitializer<UObject_*_&&,UObject_*_const_&> *)(local_a0 + 4),
                 (bool *)&local_50);
    }
    pFVar3 = (param_4->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_e0) &&
        ((FScriptContainerElement *)&local_e0 < pFVar3 + (longlong)param_4->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar8 = param_4->ArrayNum;
    if (iVar8 == param_4->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    FVar18.Data = FVar18.Data + 0x18;
    param_4->ArrayNum = iVar8 + 1;
    *(UObject **)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_e0;
    uVar15 = (ulonglong)local_b0;
    goto LAB_141e96d47;
  }
  local_d8 = (longlong *)0x0;
  if (param_5 ==
      (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
       *)0x0) {
LAB_141e97059:
    pTVar12 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                      *)param_3,pUVar10);
    if ((pTVar12 == (TTuple<UObject_*,UObject_*> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_d8 = *(longlong **)&pTVar12->field_0x8;
  }
  else {
    pTVar12 = TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                      *)param_5,pUVar10);
    plVar14 = (longlong *)&pTVar12->field_0x8;
    if (pTVar12 == (TTuple<UObject_*,UObject_*> *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    if ((plVar14 == (longlong *)0x0) ||
       (local_d8 = (longlong *)*plVar14, local_d8 == (longlong *)0x0)) goto LAB_141e97059;
  }
  if ((UObject *)local_d8[4] != param_2) {
    FVar4 = *(FName *)(local_d8 + 3);
    pUVar9 = Z_Construct_UClass_UObject_NoRegister();
    local_a8 = StaticFindObjectFast(pUVar9,param_2,FVar4,None,RF_NoFlags,Borrowed);
    if (local_a8 != (UObject *)0x0) {
      pcVar1 = *(code **)(*(longlong *)local_a8 + 0x170);
      pUVar11 = GetTransientPackage();
      (*pcVar1)(local_a8,0,pUVar11,0x34);
      local_40 = &local_a8;
      local_38 = &local_d8;
      TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_const_&,UObject_*_const_&>_>
                ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                  *)param_3,&local_98,(bool *)&local_40);
    }
    pcVar1 = *(code **)(*local_d8 + 0x170);
    local_80 = *(FName *)(local_d8 + 3);
    ::FName::ToString(&local_80,&local_70);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar17.Data = local_70.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(local_d8,FVar17.Data,param_2);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
LAB_141e9716b:
  uVar15 = (ulonglong)local_b0;
  FVar18.Data = FVar18.Data + 0x18;
  goto LAB_141e96d47;
}

