// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// operator= @ 1478acc10

FSceneComponentInstanceData * __thiscall
FSceneComponentInstanceData::operator=
          (FSceneComponentInstanceData *this,FSceneComponentInstanceData *param_1)

{
  FInstanceCacheDataBase::operator=
            ((FInstanceCacheDataBase *)this,(FInstanceCacheDataBase *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  if (&this->AttachedInstanceComponents != &param_1->AttachedInstanceComponents) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->AttachedInstanceComponents).field_0x38,
               (int *)&(this->AttachedInstanceComponents).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->AttachedInstanceComponents).field_0x38,
               *(int *)&(param_1->AttachedInstanceComponents).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->AttachedInstanceComponents,
                (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->AttachedInstanceComponents);
  }
  return this;
}

// StaticStruct @ 147918900

UScriptStruct * __cdecl FSceneComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSceneComponentInstanceData,(UObject *)pUVar1,
                         L"SceneComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FSceneComponentInstanceData.OuterSingleton;
}

// FindAndReplaceInstances @ 147918940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FSceneComponentInstanceData::FindAndReplaceInstances
          (FSceneComponentInstanceData *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  TMap<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  *this_00;
  TTransform<double> *pTVar1;
  longlong lVar2;
  UObject *pUVar3;
  undefined1 *puVar4;
  TTransform<double> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject **ppUVar9;
  UClass *pUVar10;
  FString *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  uint local_124;
  FScriptContainerElement *local_120;
  TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> local_118;
  TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&> local_108;
  UObject *local_f8;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_f0;
  UObject **local_e8;
  undefined8 *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  this_00 = &this->AttachedInstanceComponents;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_f0 = param_1;
  TMapBase<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>_>
              *)this_00,&local_118);
  uVar13 = (ulonglong)local_118.ArrayNum;
  pwVar20 = L"";
  local_124 = local_118.ArrayNum;
  local_120 = local_118.AllocatorInstance.Data + uVar13 * 8;
  pFVar16 = local_120;
  FVar19.Data = local_118.AllocatorInstance.Data;
LAB_1479189b0:
  do {
    if (local_118.ArrayNum != (int)uVar13) {
      local_128[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<USceneComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_128);
    }
    if (FVar19.Data == pFVar16) {
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return;
    }
    pTVar1 = *(TTransform<double> **)FVar19.Data;
    ppUVar9 = TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              ::Find((TMapBase<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                      *)param_1,(UObject *)pTVar1);
    if (ppUVar9 != (UObject **)0x0) {
      if (*ppUVar9 != (UObject *)0x0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pTVar1 != (TTransform<double> *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pTVar1);
        }
        local_108.Value = pTVar1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pTVar1 != (TTransform<double> *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pTVar1);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pTVar1 != (TTransform<double> *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pTVar1);
          }
        }
        uVar12 = ((uint)((ulonglong)pTVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar1 >> 4)) *
                 -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        iVar8 = TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TObjectPtr<USceneComponent_const_>_>
                          ((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                            *)this_00,uVar12 >> 0x10 ^ uVar12,
                           (TObjectPtr<USceneComponent_const_> *)&local_108.Value);
        if (iVar8 == -1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PairId.IsValidId()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x556,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar2 = *(longlong *)&this_00->field_0x0;
        lVar14 = (longlong)iVar8 * 0x80;
        puVar17 = (undefined8 *)(lVar14 + 0x10 + lVar2);
        local_a8 = *puVar17;
        uStack_a0 = puVar17[1];
        puVar17 = (undefined8 *)(lVar14 + 0x20 + lVar2);
        local_98 = *puVar17;
        uStack_90 = puVar17[1];
        puVar17 = (undefined8 *)(lVar14 + 0x30 + lVar2);
        local_88 = *puVar17;
        uStack_80 = puVar17[1];
        puVar17 = (undefined8 *)(lVar14 + 0x40 + lVar2);
        local_78 = *puVar17;
        uStack_70 = puVar17[1];
        puVar17 = (undefined8 *)(lVar14 + 0x50 + lVar2);
        local_68 = *puVar17;
        uStack_60 = puVar17[1];
        puVar17 = (undefined8 *)(lVar14 + 0x60 + lVar2);
        local_58 = *puVar17;
        uStack_50 = puVar17[1];
        TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                         *)this_00,iVar8);
        pUVar3 = *ppUVar9;
        if (pUVar3 == (UObject *)0x0) {
          pFVar11 = GetTypeName<USceneComponent>(&local_b8);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar20 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar20);
        }
        pUVar10 = USceneComponent::StaticClass();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          pFVar11 = GetTypeName<USceneComponent>(&local_d8);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          pFVar11 = GetFullNameForCastLogError<UObject>(&local_c8,pUVar3);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar20 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar20,pwVar18);
        }
        local_f8 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        local_e8 = &local_f8;
        local_e0 = &local_a8;
        TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TObjectPtr<USceneComponent>_&&,UE::Math::TTransform<double>_&&>_>
                  ((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                    *)this_00,&local_108,(bool *)&local_e8);
        uVar13 = (ulonglong)local_124;
        FVar19.Data = FVar19.Data + 8;
        pFVar16 = local_120;
        param_1 = local_f0;
        goto LAB_1479189b0;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pTVar1 != (TTransform<double> *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pTVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pTVar1 != (TTransform<double> *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pTVar1);
        }
      }
      if (*(int *)&(this->AttachedInstanceComponents).field_0x8 !=
          *(int *)&(this->AttachedInstanceComponents).field_0x34) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pTVar1 != (TTransform<double> *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pTVar1);
        }
        uVar12 = ((uint)((ulonglong)pTVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar1 >> 4)) *
                 -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        puVar4 = *(undefined1 **)&(this->AttachedInstanceComponents).field_0x40;
        puVar15 = &(this->AttachedInstanceComponents).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar15 = puVar4;
        }
        iVar8 = *(int *)(puVar15 +
                        ((longlong)*(int *)&(this->AttachedInstanceComponents).field_0x48 - 1U &
                        (longlong)(int)(uVar12 >> 0x10 ^ uVar12)) * 4);
        if (iVar8 != -1) {
          do {
            puVar17 = (undefined8 *)((longlong)iVar8 * 0x80 + *(longlong *)&this_00->field_0x0);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pTVar1 != (TTransform<double> *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pTVar1);
            }
            pTVar5 = (TTransform<double> *)*puVar17;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pTVar5 != (TTransform<double> *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pTVar5);
            }
            if (pTVar5 == pTVar1) {
              TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                               *)this_00,iVar8);
              pFVar16 = local_120;
              goto LAB_147918c7f;
            }
            iVar8 = *(int *)(puVar17 + 0xe);
          } while (iVar8 != -1);
          FVar19.Data = FVar19.Data + 8;
          uVar13 = (ulonglong)local_124;
          pFVar16 = local_120;
          param_1 = local_f0;
          goto LAB_1479189b0;
        }
      }
    }
LAB_147918c7f:
    uVar13 = (ulonglong)local_124;
    FVar19.Data = FVar19.Data + 8;
    param_1 = local_f0;
  } while( true );
}

// AddReferencedObjects @ 147918d30

void __thiscall
FSceneComponentInstanceData::AddReferencedObjects
          (FSceneComponentInstanceData *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FActorComponentInstanceData::AddReferencedObjects((FActorComponentInstanceData *)this,param_1);
  iVar11 = 0;
  puVar1 = &(this->AttachedInstanceComponents).field_0x10;
  iVar3 = *(int *)&(this->AttachedInstanceComponents).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AttachedInstanceComponents).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147918ddd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147918ddd:
  uVar10 = *(uint *)&(this->AttachedInstanceComponents).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AttachedInstanceComponents).field_0x8 -
                       *(int *)&(this->AttachedInstanceComponents).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AttachedInstanceComponents).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AttachedInstanceComponents).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147918ee0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_147918ee0:
  while( true ) {
    if (*(int *)&(this->AttachedInstanceComponents).field_0x8 -
        *(int *)&(this->AttachedInstanceComponents).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,(longlong)TStack_60.CurrentBitIndex * 0x80 +
                       *(longlong *)&this->AttachedInstanceComponents,0,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// FSceneComponentInstanceData @ 1479295f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneComponentInstanceData * __thiscall
FSceneComponentInstanceData::FSceneComponentInstanceData
          (FSceneComponentInstanceData *this,USceneComponent *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  AActor *pAVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  FSceneComponentInstanceData *pFVar12;
  TQuat<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [16];
  UActorComponent *local_198;
  double *local_190;
  TRotator<double> local_188;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong lStack_150;
  longlong local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  TQuat<double> local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FActorComponentInstanceData::FActorComponentInstanceData
            ((FActorComponentInstanceData *)this,(UActorComponent *)param_1);
  this->_padding_ = (longlong)&___7FSceneComponentInstanceData__6B_;
  *(undefined8 *)&this->AttachedInstanceComponents = 0;
  *(undefined8 *)&(this->AttachedInstanceComponents).field_0x8 = 0;
  *(undefined8 *)&(this->AttachedInstanceComponents).field_0x20 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x28 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x34 = 0;
  *(undefined8 *)&(this->AttachedInstanceComponents).field_0x40 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x48 = 0;
  uVar14 = (param_1->AttachChildren).ArrayNum - 1;
  pAVar4 = (AActor *)param_1->_padding_;
  if (-1 < (int)uVar14) {
    lVar16 = (longlong)(int)uVar14;
    lVar15 = lVar16 * 8;
    do {
      iVar3 = (param_1->AttachChildren).ArrayNum;
      uVar11 = 0;
      if ((int)uVar14 < iVar3) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_1b8 = lVar16, local_1b0 = (longlong)iVar3,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FSceneComponentInstanceData *)(*pcVar5)();
        return pFVar12;
      }
      local_1a8._0_8_ = *(undefined8 *)((param_1->AttachChildren).AllocatorInstance.Data + lVar15);
      if (((((UActorComponent *)local_1a8._0_8_ != (UActorComponent *)0x0) &&
           (((UActorComponent *)local_1a8._0_8_)->OwnerPrivate == pAVar4)) &&
          (bVar10 = UActorComponent::IsCreatedByConstructionScript
                              ((UActorComponent *)local_1a8._0_8_), !bVar10)) &&
         (((uint)*(longlong *)(local_1a8._0_8_ + 8) >> 0x12 & 1) == 0)) {
        uVar6 = *(undefined8 *)&((UActorComponent *)(local_1a8._0_8_ + 0xc0))->field_0xb8;
        lVar7 = ((UActorComponent *)(local_1a8._0_8_ + 0x180))->_padding_;
        uVar8 = *(undefined8 *)&((UActorComponent *)(local_1a8._0_8_ + 0xc0))->field_0x88;
        uVar9._0_4_ = ((UActorComponent *)(local_1a8._0_8_ + 0xc0))->UCSSerializationIndex;
        uVar9._4_4_ = ((UActorComponent *)(local_1a8._0_8_ + 0xc0))->RegistrationState;
        local_188.Pitch =
             (double)((UActorComponent *)(local_1a8._0_8_ + 0xc0))->PhysicsStateAsyncCreationScene;
        local_188.Yaw = (double)((UActorComponent *)(local_1a8._0_8_ + 0xc0))->OwnerPrivate;
        lVar1 = ((UActorComponent *)(local_1a8._0_8_ + 0x180))->_padding_;
        uVar2 = *(undefined8 *)&((UActorComponent *)(local_1a8._0_8_ + 0xc0))->field_0x98;
        local_188.Roll = (double)((UActorComponent *)(local_1a8._0_8_ + 0xc0))->WorldPrivate;
        local_170 = uVar8;
        uStack_168 = uVar9;
        local_158 = uVar6;
        lStack_150 = lVar7;
        pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_188,&local_118);
        local_128 = pTVar13->Z;
        dStack_120 = pTVar13->W;
        local_138 = pTVar13->X;
        dStack_130 = pTVar13->Y;
        local_198 = (UActorComponent *)local_1a8;
        local_190 = &local_f8;
        uStack_c0 = 0;
        uStack_a0 = 0;
        local_160 = uVar2;
        local_148 = lVar1;
        local_f8 = local_138;
        dStack_f0 = dStack_130;
        local_e8 = local_128;
        dStack_e0 = dStack_120;
        local_d8 = uVar8;
        uStack_d0 = uVar9;
        local_c8 = uVar2;
        local_b8 = uVar6;
        lStack_b0 = lVar7;
        local_a8 = lVar1;
        TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<USceneComponent_*_&,UE::Math::TTransform<double>_&&>_>
                  ((TSet<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                    *)&this->AttachedInstanceComponents,
                   (TPairInitializer<USceneComponent_*_&,UE::Math::TTransform<double>_&&> *)
                   (local_1a8 + 8),(bool *)&local_198);
      }
      lVar16 = lVar16 + -1;
      lVar15 = lVar15 + -8;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  return this;
}

// FSceneComponentInstanceData @ 1479298e0

FSceneComponentInstanceData * __thiscall
FSceneComponentInstanceData::FSceneComponentInstanceData(FSceneComponentInstanceData *this)

{
  FActorComponentInstanceData::FActorComponentInstanceData((FActorComponentInstanceData *)this);
  this->_padding_ = (longlong)&___7FSceneComponentInstanceData__6B_;
  *(undefined8 *)&this->AttachedInstanceComponents = 0;
  *(undefined8 *)&(this->AttachedInstanceComponents).field_0x8 = 0;
  *(undefined8 *)&(this->AttachedInstanceComponents).field_0x20 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x28 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x34 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttachedInstanceComponents).field_0x40 = 0;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x48 = 0;
  return this;
}

// ~FSceneComponentInstanceData @ 14792c9d0

void __thiscall
FSceneComponentInstanceData::~FSceneComponentInstanceData(FSceneComponentInstanceData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSceneComponentInstanceData__6B_;
  *(undefined4 *)&(this->AttachedInstanceComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttachedInstanceComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttachedInstanceComponents);
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)this);
  return;
}

// ApplyToComponent @ 147932d70

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
FSceneComponentInstanceData::ApplyToComponent
          (FSceneComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FString *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  wchar_t *pwVar23;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_11c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  TRotator<double> local_e8 [2];
  double local_b8;
  TQuat<double> local_a8;
  longlong local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  FActorComponentInstanceData::ApplyToComponent((FActorComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar14 = GetTypeName<USceneComponent>(&local_70);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar23);
  }
  pUVar13 = USceneComponent::StaticClass();
  iVar3 = (int)pUVar13->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar13->_padding_)) {
    pFVar14 = GetTypeName<USceneComponent>(&local_60);
    pwVar23 = L"";
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UActorComponent>(&local_50,param_1);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar23 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar23,pwVar18);
  }
  if (0 < (int)this->_padding_) {
    USceneComponent::UpdateComponentToWorld((USceneComponent *)param_1,None,None);
  }
  iVar3 = *(int *)&(this->AttachedInstanceComponents).field_0x28;
  puVar2 = &(this->AttachedInstanceComponents).field_0x10;
  iVar19 = 0;
  iVar21 = 0;
  uVar11 = 1;
  iVar12 = 0;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&(this->AttachedInstanceComponents).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar16 = *puVar22;
    while (uVar16 == 0) {
      iVar19 = iVar19 + 1;
      iVar21 = iVar21 + 0x20;
      iVar12 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar19) goto LAB_147932e91;
      uVar16 = puVar22[iVar19];
    }
    uVar11 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar12 = local_res20 + -1 + iVar21;
    if (iVar3 < iVar12) {
      iVar12 = iVar3;
    }
  }
LAB_147932e91:
  uVar16 = *(uint *)&(this->AttachedInstanceComponents).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_110._padding_ = CONCAT44(uVar11,iVar19);
  TStack_110.CurrentBitIndex = iVar12;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar16 >> 5;
  TStack_110._28_4_ = iVar12;
  TStack_110.BaseBitIndex = iVar21;
  uStack_f0 = CONCAT44(uStack_11c,
                       *(int *)&(this->AttachedInstanceComponents).field_0x8 -
                       *(int *)&(this->AttachedInstanceComponents).field_0x34);
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)&(this->AttachedInstanceComponents).field_0x28;
  if (uVar16 != uVar11) {
    puVar4 = *(undefined1 **)&(this->AttachedInstanceComponents).field_0x20;
    puVar20 = puVar2;
    if (puVar4 != (undefined1 *)0x0) {
      puVar20 = puVar4;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar16 == 0) {
      iVar19 = iVar19 + 1;
      uVar15 = uVar15 + 0x20;
      uVar16 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar19)
      goto LAB_147932fa0;
      uVar16 = *(uint *)(puVar20 + (longlong)iVar19 * 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar16 = (uVar15 - 1) + (int)lVar6;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_147932fa0:
  while( true ) {
    if (*(int *)&(this->AttachedInstanceComponents).field_0x8 -
        *(int *)&(this->AttachedInstanceComponents).field_0x34 != (int)uStack_f0) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_110.CurrentBitIndex == uVar16) &&
       (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar17 = (longlong *)
              ((longlong)TStack_110.CurrentBitIndex * 0x80 +
              *(longlong *)&this->AttachedInstanceComponents);
    plVar5 = (longlong *)*plVar17;
    if (((plVar5 != (longlong *)0x0) && ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0)) &&
       ((plVar5[0x1a] == 0 || ((*(uint *)(plVar5[0x1a] + 8) >> 0x1e & 1) != 0)))) {
      local_e8[0].Roll = (double)plVar17[8];
      lVar6 = plVar17[7];
      plVar5[0x29] = plVar17[6];
      plVar5[0x2a] = lVar6;
      plVar5[0x2b] = (longlong)local_e8[0].Roll;
      local_a8.X = (double)plVar17[2];
      local_a8.Y = (double)plVar17[3];
      local_a8.Z = (double)plVar17[4];
      local_a8.W = (double)plVar17[5];
      local_b8 = local_e8[0].Roll;
      UE::Math::TQuat<double>::Rotator(&local_a8,local_e8);
      plVar5[0x2c] = (longlong)local_e8[0].Pitch;
      plVar5[0x2d] = (longlong)local_e8[0].Yaw;
      plVar5[0x2e] = (longlong)local_e8[0].Roll;
      local_b8 = (double)plVar17[0xc];
      uVar8 = *(undefined4 *)((longlong)plVar17 + 0x54);
      lVar6 = plVar17[0xb];
      uVar9 = *(undefined4 *)((longlong)plVar17 + 0x5c);
      *(int *)(plVar5 + 0x2f) = (int)plVar17[10];
      *(undefined4 *)((longlong)plVar5 + 0x17c) = uVar8;
      *(int *)(plVar5 + 0x30) = (int)lVar6;
      *(undefined4 *)((longlong)plVar5 + 0x184) = uVar9;
      plVar5[0x31] = (longlong)local_b8;
      local_78 = (longlong)local_b8;
      (**(code **)(*plVar5 + 0x508))
                (plVar5,param_1,&FAttachmentTransformRules::KeepRelativeTransform,0);
    }
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  return;
}

// ContainsData @ 14793c090

bool __thiscall FSceneComponentInstanceData::ContainsData(FSceneComponentInstanceData *this)

{
  if ((*(int *)&(this->AttachedInstanceComponents).field_0x8 -
       *(int *)&(this->AttachedInstanceComponents).field_0x34 < 1) && ((int)this->_padding_ < 1)) {
    return false;
  }
  return true;
}

