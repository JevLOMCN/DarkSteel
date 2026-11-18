// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 39

// StaticClass @ 14e2cfdb0

UClass * __cdecl UVariantSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariantSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"VariantSet",
               &Z_Registration_Info_UClass_UVariantSet.InnerSingleton,
               StaticRegisterNativesUVariantSet,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVariantSet>,InternalVTableHelperCtorCaller<UVariantSet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariantSet.InnerSingleton;
}

// UVariantSet @ 14e2d4d90

UVariantSet * __thiscall UVariantSet::UVariantSet(UVariantSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariantSet__6B_;
  FText::FText(&this->DisplayText_DEPRECATED);
  FText::FText(&this->DisplayText);
  (this->Variants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variants).ArrayNum = 0;
  (this->Variants).ArrayMax = 0;
  (this->Thumbnail).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  return this;
}

// UVariantSet @ 14e2d4de0

UVariantSet * __thiscall UVariantSet::UVariantSet(UVariantSet *this,FObjectInitializer *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVariantSet__6B_;
  FText::FText(&this->DisplayText_DEPRECATED);
  FText::FText(&this->DisplayText);
  (this->Variants).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variants).ArrayNum = 0;
  (this->Variants).ArrayMax = 0;
  (this->Thumbnail).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  pFVar1 = FText::FromString(&local_18,L"Variant Set");
  FText::operator=(&this->DisplayText,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  this->bExpanded = true;
  return this;
}

// ~UVariantSet @ 14e2d5670

void __thiscall UVariantSet::~UVariantSet(UVariantSet *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UVariantSet__6B_;
  pFVar1 = (this->Variants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DisplayText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayText_DEPRECATED).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e2d5970

bool __thiscall
`UVariantSet::GetVariantByName'::__l2::<lambda_1>::operator()(void *this,UVariant *param_1)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = (param_1->DisplayText).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (param_1->DisplayText).Flags;
  pFVar2 = FText::ToString(&local_18);
  iVar1 = (pFVar2->Data).ArrayNum;
  if (iVar1 == *(int *)((longlong)this + 8)) {
    if (iVar1 < 2) {
      bVar3 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,*(wchar_t **)this);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = *(int *)((longlong)this + 8) + iVar1 == 1;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// AddVariants @ 14e2d7ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UVariantSet::AddVariants
          (UVariantSet *this,TArray<UVariant_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  TArray<TObjectPtr<UVariant>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  UVariant *pUVar5;
  ITextData *pIVar6;
  ITextData *pIVar7;
  code *pcVar8;
  UVariantSet *pUVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FString *pFVar15;
  UClass *pUVar16;
  FText *pFVar17;
  ulonglong uVar18;
  byte bVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  ForElementType<unsigned_int> FVar23;
  ForElementType<FSetElementId> FVar24;
  FScriptContainerElement *pFVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  longlong lVar28;
  UVariant *pUVar29;
  UVariantSet *pUVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong *puVar35;
  UVariant *pUVar36;
  TArray<UVariant_*,TSizedDefaultAllocator<32>_> *pTVar37;
  bool bVar38;
  undefined1 auStackY_268 [32];
  undefined1 local_227;
  undefined1 local_226 [6];
  FString local_220;
  int local_210;
  undefined4 local_20c;
  TArray<UVariant_*,TSizedDefaultAllocator<32>_> *local_208;
  UVariant *local_200;
  uint local_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f0;
  undefined4 local_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  UVariantSet *local_1d8;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  undefined1 local_1a8 [4];
  FString local_1a4;
  TArray<TObjectPtr<UVariant>,TSizedDefaultAllocator<32>_> *local_190;
  FText local_188;
  FSparseArrayAllocationInfo local_178;
  FText local_168;
  FText local_158;
  FString local_148;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (param_2 == -1) {
    param_2 = (this->Variants).ArrayNum;
  }
  pFVar25 = (this->Variants).AllocatorInstance.Data;
  pTVar1 = &this->Variants;
  iVar14 = (this->Variants).ArrayNum;
  piVar2 = &(this->Variants).ArrayNum;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  pFVar22 = pFVar25 + (longlong)iVar14 * 8;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_210 = param_2;
  local_208 = param_1;
  local_1d8 = this;
  local_190 = pTVar1;
  while( true ) {
    if (*piVar2 != iVar14) {
      local_227 = 0;
      `TCheckedPointerIterator<TObjectPtr<UVariant>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_227);
    }
    pTVar37 = local_208;
    if (pFVar25 == pFVar22) break;
    lVar28 = *(longlong *)pFVar25;
    local_188.TextData.Reference = *(ITextData **)(lVar28 + 0x48);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 8))
                (local_188.TextData.Reference,local_1a8);
    }
    local_188.Flags = *(uint *)(lVar28 + 0x50);
    pFVar15 = FText::ToString(&local_188);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_98,&local_1a4,(bool *)pFVar15);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    pFVar25 = pFVar25 + 8;
  }
  iVar14 = local_208->ArrayNum;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,iVar14,&pTVar1->AllocatorInstance,piVar2,&(this->Variants).ArrayMax);
  pFVar22 = (pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8;
  memmove(pFVar22 + (longlong)iVar14 * 8,pFVar22,(longlong)(iVar11 - param_2) << 3);
  ConstructItems<TObjectPtr<UVariant>,UVariant_*,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)param_2 * 8,
             (UVariant **)(pTVar37->AllocatorInstance).Data,iVar14);
  pUVar9 = local_1d8;
  pUVar36 = (UVariant *)(pTVar37->AllocatorInstance).Data;
  iVar14 = pTVar37->ArrayNum;
  bVar10 = false;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  pUVar29 = (UVariant *)(&pUVar36->_padding_ + iVar14);
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_200 = pUVar29;
  while( true ) {
    if (pTVar37->ArrayNum != iVar14) {
      local_226[0] = 0;
      `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_226);
    }
    pTVar1 = local_190;
    if (pUVar36 == pUVar29) break;
    pUVar5 = (UVariant *)pUVar36->_padding_;
    if (pUVar5 != (UVariant *)0x0) {
      pUVar30 = (UVariantSet *)pUVar5->_padding_;
      if (pUVar30 == (UVariantSet *)0x0) {
LAB_14e2d8455:
        pUVar30 = (UVariantSet *)0x0;
      }
      else {
        pUVar16 = StaticClass();
        iVar11 = (int)pUVar16->_padding_;
        if ((*(int *)(pUVar30->_padding_ + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar30->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar16->_padding_)) goto LAB_14e2d8455;
        if (pUVar30 == pUVar9) {
          bVar10 = true;
        }
        else {
          uVar12 = ((uint)((ulonglong)pUVar30 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar30 >> 4)) *
                   -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          if (local_e8._8_4_ != local_b4) {
            FVar24 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_a8;
            }
            for (iVar11 = *(int *)((longlong)FVar24 +
                                  (ulonglong)(local_a0 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
                iVar11 != -1; iVar11 = *(int *)(local_e8._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
              if (*(UVariantSet **)(local_e8._0_8_ + (longlong)iVar11 * 0x10) == pUVar30)
              goto LAB_14e2d83d4;
            }
          }
          if (local_b4 == 0) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,1,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                                (int *)(local_e8 + 0xc));
            iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),1);
            FVar23 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
            if (local_c8 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = local_c8;
            }
            bVar19 = (byte)iVar13 & 0x1f;
            if (iVar13 < 0) {
              iVar13 = iVar13 + 0x1f;
              bVar19 = bVar19 - 0x20;
            }
            puVar3 = (uint *)((longlong)FVar23 + (longlong)(iVar13 >> 5) * 4);
            *puVar3 = *puVar3 & ~(1 << (bVar19 & 0x1f));
            iVar13 = local_b8;
          }
          else {
            local_b4 = local_b4 + -1;
            iVar13 = *(int *)(local_e8._0_8_ + (longlong)local_b8 * 0x10 + 4);
            iVar11 = local_b8;
            if (local_b4 != 0) {
              *(undefined4 *)(local_e8._0_8_ + (longlong)iVar13 * 0x10) = 0xffffffff;
            }
          }
          local_b8 = iVar13;
          TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_e8,&local_178,iVar11);
          if (local_178.Pointer != (ulonglong *)0x0) {
            *(UVariantSet **)local_178.Pointer = pUVar30;
            *(undefined4 *)((longlong)local_178.Pointer + 8) = 0xffffffff;
          }
          uVar21 = *(ulonglong *)local_178.Pointer;
          uVar34 = local_e8._8_4_ - local_b4;
          uVar12 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar12 = uVar12 >> 0x10 ^ uVar12;
          if (uVar34 == 1) {
LAB_14e2d8327:
            if (uVar34 < 4) goto LAB_14e2d8374;
            uVar21 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
            lVar28 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            local_1a4.Data.AllocatorInstance.Data._4_4_ = (undefined4)lVar28;
            iVar11 = 1 << ((byte)lVar28 & 0x1f);
          }
          else {
            if (uVar34 != 0) {
              FVar24 = (ForElementType<FSetElementId>)local_b0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FVar24 = local_a8;
              }
              for (iVar11 = *(int *)((longlong)FVar24 + (ulonglong)(local_a0 - 1U & uVar12) * 4);
                  iVar11 != -1; iVar11 = *(int *)(local_e8._0_8_ + (longlong)iVar11 * 0x10 + 8)) {
                if (*(ulonglong *)(local_e8._0_8_ + (longlong)iVar11 * 0x10) == uVar21) {
                  if (iVar11 != -1) {
                    *(ulonglong *)(local_e8._0_8_ + (longlong)iVar11 * 0x10) = uVar21;
                    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_e8,local_178.Index,1);
                    goto LAB_14e2d83d4;
                  }
                  break;
                }
              }
              goto LAB_14e2d8327;
            }
LAB_14e2d8374:
            iVar11 = 1;
          }
          if (((int)uVar34 < 1) || (iVar11 <= local_a0)) {
            uVar12 = local_a0 - 1U & uVar12;
            *(uint *)((longlong)local_178.Pointer + 0xc) = uVar12;
            FVar24 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_a8;
            }
            lVar28 = (longlong)(int)(local_a0 - 1U & uVar12);
            *(undefined4 *)((longlong)local_178.Pointer + 8) =
                 *(undefined4 *)((longlong)FVar24 + lVar28 * 4);
            *(int *)((longlong)FVar24 + lVar28 * 4) = local_178.Index;
          }
          else {
            local_a0 = iVar11;
            TSet<UVariantSet_*,DefaultKeyFuncs<UVariantSet_*,0>,FDefaultSetAllocator>::Rehash
                      ((TSet<UVariantSet_*,DefaultKeyFuncs<UVariantSet_*,0>,FDefaultSetAllocator> *)
                       local_e8);
          }
LAB_14e2d83d4:
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          pFVar22 = (pUVar30->Variants).AllocatorInstance.Data;
          iVar11 = (pUVar30->Variants).ArrayNum;
          pFVar25 = pFVar22;
          if (pFVar22 == pFVar22 + (longlong)iVar11 * 8) {
LAB_14e2d8444:
            VariantSetImpl::ResetVariantDependents(pUVar5);
          }
          else {
            do {
              if (*(UVariant **)pFVar25 == pUVar5) {
                iVar13 = (int)((longlong)pFVar25 - (longlong)pFVar22 >> 3);
                if (iVar13 != -1) {
                  memmove(pFVar22 + (longlong)iVar13 * 8,pFVar22 + (longlong)iVar13 * 8 + 8,
                          (longlong)((iVar11 - iVar13) + -1) << 3);
                  piVar2 = &(pUVar30->Variants).ArrayNum;
                  *piVar2 = *piVar2 + -1;
                }
                goto LAB_14e2d8444;
              }
              pFVar25 = pFVar25 + 8;
            } while (pFVar25 != pFVar22 + (longlong)iVar11 * 8);
            VariantSetImpl::ResetVariantDependents(pUVar5);
          }
        }
      }
      (**(code **)(pUVar5->_padding_ + 0x170))(pUVar5,0);
      local_168.TextData.Reference = (pUVar5->DisplayText).TextData.Reference;
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 8))();
      }
      local_168.Flags = (pUVar5->DisplayText).Flags;
      pFVar15 = FText::ToString(&local_168);
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.Data.ArrayNum = (pFVar15->Data).ArrayNum;
      lVar28 = (longlong)local_220.Data.ArrayNum;
      pFVar22 = (pFVar15->Data).AllocatorInstance.Data;
      if (local_220.Data.ArrayNum == 0) {
        local_220.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_220.Data.ArrayNum,0,(ForAnyElementType *)&local_220,
                   local_220.Data.ArrayNum,&local_220.Data.ArrayMax);
        memcpy(local_220.Data.AllocatorInstance.Data,pFVar22,lVar28 * 2);
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (pUVar30 != pUVar9) {
        pwVar26 = L"";
        if (local_220.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_220.Data.ArrayNum + -1;
          pwVar26 = (wchar_t *)local_220.Data.AllocatorInstance.Data;
        }
        uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar26);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar24 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_98.Hash.SecondaryData;
          }
          iVar11 = *(int *)((longlong)FVar24 + (ulonglong)(local_98.HashSize - 1U & uVar12) * 4);
          iVar13 = local_220.Data.ArrayNum;
          lVar28 = local_98.Elements._0_8_;
          while (iVar11 != -1) {
            lVar31 = (longlong)iVar11 * 0x18;
            iVar4 = *(int *)(lVar28 + 8 + lVar31);
            if (iVar4 == iVar13) {
              if (1 < iVar4) {
                iVar13 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar28 + lVar31),
                                    (wchar_t *)local_220.Data.AllocatorInstance.Data);
                bVar38 = iVar13 == 0;
                lVar28 = local_98.Elements._0_8_;
                iVar13 = local_220.Data.ArrayNum;
                goto LAB_14e2d85c4;
              }
LAB_14e2d85d6:
              if (iVar11 != -1) {
                pFVar15 = GetUniqueVariantName(pUVar9,&local_148,&local_220);
                pFVar17 = FText::FromString(&local_158,pFVar15);
                pIVar6 = (pUVar5->DisplayText).TextData.Reference;
                pIVar7 = (pFVar17->TextData).Reference;
                if (pIVar6 != pIVar7) {
                  (pUVar5->DisplayText).TextData.Reference = pIVar7;
                  if (pIVar7 != (ITextData *)0x0) {
                    (**(code **)((longlong)*pIVar7 + 8))();
                  }
                  if (pIVar6 != (ITextData *)0x0) {
                    (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
                  }
                }
                (pUVar5->DisplayText).Flags = pFVar17->Flags;
                if (local_158.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
                }
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
              }
              break;
            }
            bVar38 = iVar4 + iVar13 == 1;
LAB_14e2d85c4:
            if (bVar38) goto LAB_14e2d85d6;
            iVar11 = *(int *)(lVar28 + 0x10 + lVar31);
          }
        }
      }
      pUVar29 = local_200;
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
        pUVar29 = local_200;
      }
    }
    pUVar36 = (UVariant *)&pUVar36->_padding_;
    pTVar37 = local_208;
  }
  if (!bVar10) goto LAB_14e2d8ced;
  uVar12 = pTVar37->ArrayNum;
  pFVar22 = (pTVar37->AllocatorInstance).Data;
  if (((int)uVar12 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar21 = 0;
  local_10c = 0x80;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_108 = -1;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if (uVar12 != 0) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_138,uVar12);
    uVar34 = 1;
    if (3 < uVar12) {
      uVar27 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_20c = (undefined4)lVar28;
      uVar34 = 1 << ((byte)lVar28 & 0x1f);
    }
    if ((local_f0 == 0) || ((int)local_f0 < (int)uVar34)) {
      local_f0 = uVar34;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
      }
      if (uVar34 != 0) {
        uVar32 = uVar34;
        if (uVar34 < 2) {
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            uVar32 = 0;
            goto LAB_14e2d875d;
          }
        }
        else {
LAB_14e2d875d:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar32,4)
          ;
        }
        if (0 < (int)uVar34) {
          uVar33 = (ulonglong)uVar34;
          uVar27 = uVar21;
          do {
            FVar20.Data = local_100;
            if (local_f8.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_f8.Data;
            }
            uVar18 = (longlong)(int)uVar34 - 1U & uVar27;
            uVar27 = uVar27 + 1;
            *(undefined4 *)(FVar20.Data + uVar18 * 4) = 0xffffffff;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
      }
      if (local_f0 != 0) {
        pTStack_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
        local_1f8 = 0;
        uVar34 = 0;
        uStack_1f4 = 1;
        uStack_1e4 = 0;
        if (local_110 != 0) {
          FVar23 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
          if (local_118 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_118;
          }
          uVar32 = *(uint *)FVar23;
          uVar27 = uVar21;
          while (uVar32 == 0) {
            uVar34 = (int)uVar27 + 0x20;
            uVar27 = (ulonglong)uVar34;
            iVar14 = (int)uVar21;
            local_1f8 = iVar14 + 1;
            uVar21 = (ulonglong)local_1f8;
            uStack_1e4 = (ulonglong)uVar34 << 0x20;
            if ((int)(local_110 + -1 + (local_110 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_1f8) {
              uStack_1e4 = CONCAT44(uVar34,local_110);
              goto LAB_14e2d8855;
            }
            uVar32 = ((uint *)((longlong)FVar23 + 4))[iVar14];
          }
          uStack_1f4 = -uVar32 & uVar32;
          uVar21 = (ulonglong)uStack_1f4 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          iVar14 = (uVar34 - 1) + (int)lVar28;
          local_208 = (TArray<UVariant_*,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(local_208._4_4_,(int)lVar28);
          if (local_110 < iVar14) {
            iVar14 = local_110;
          }
          uStack_1e4._4_4_ = (int)((ulonglong)uStack_1e4 >> 0x20);
          uStack_1e4 = CONCAT44(uStack_1e4._4_4_,iVar14);
        }
LAB_14e2d8855:
        local_1e8 = 0xffffffff;
        local_1d0 = (longlong *)local_138;
        local_1c8._padding_ = CONCAT44(uStack_1f4,local_1f8);
        local_1c8.UnvisitedBitMask = 0xffffffff;
        local_1c8.CurrentBitIndex = (int)uStack_1e4;
        local_1c8.BaseBitIndex = uStack_1e4._4_4_;
        local_1c8._28_4_ = uStack_1dc;
        local_1c8.Array = pTStack_1f0;
        if ((int)uStack_1e4 < local_110) {
          do {
            puVar35 = (ulonglong *)((longlong)local_1c8.CurrentBitIndex * 0x10 + *local_1d0);
            uVar34 = ((uint)(*puVar35 >> 0x14) & 0xffff ^ (uint)(*puVar35 >> 4)) * -0x7a143595;
            uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
            uVar34 = (uVar34 >> 0x10 ^ uVar34) & local_f0 - 1;
            *(uint *)((longlong)puVar35 + 0xc) = uVar34;
            FVar20.Data = local_100;
            if (local_f8.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_f8.Data;
            }
            lVar28 = (longlong)(int)(local_f0 - 1 & uVar34);
            *(undefined4 *)(puVar35 + 1) = *(undefined4 *)(FVar20.Data + lVar28 * 4);
            *(int *)(FVar20.Data + lVar28 * 4) = local_1c8.CurrentBitIndex;
            local_1c8.UnvisitedBitMask = local_1c8.UnvisitedBitMask & ~local_1c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
          } while (local_1c8.CurrentBitIndex < (local_1c8.Array)->NumBits);
        }
      }
    }
  }
  pFVar25 = pFVar22 + (longlong)(int)uVar12 * 8;
  iVar14 = local_210;
  for (; local_210 = iVar14, pFVar22 != pFVar25; pFVar22 = pFVar22 + 8) {
    TSet<UVariant_*,DefaultKeyFuncs<UVariant_*,0>,FDefaultSetAllocator>::Emplace<UVariant_*_const_&>
              ((TSet<UVariant_*,DefaultKeyFuncs<UVariant_*,0>,FDefaultSetAllocator> *)local_138,
               &local_200,(bool *)pFVar22);
    iVar14 = local_210;
  }
  iVar11 = iVar14 + -1;
  if (-1 < iVar11) {
    lVar28 = (longlong)iVar11 * 8;
    do {
      if ((pTVar1->ArrayNum <= iVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar28);
      uVar12 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      if (local_138._8_4_ != local_104) {
        FVar20.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_f8.Data;
        }
        for (iVar13 = *(int *)(FVar20.Data +
                              (ulonglong)(local_f0 - 1 & (uVar12 >> 0x10 ^ uVar12)) * 4);
            iVar13 != -1; iVar13 = *(int *)(local_138._0_8_ + (longlong)iVar13 * 0x10 + 8)) {
          if (*(ulonglong *)(local_138._0_8_ + (longlong)iVar13 * 0x10) == uVar21) {
            if ((pTVar1->ArrayNum <= iVar11) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar28) = 0;
            break;
          }
        }
      }
      lVar28 = lVar28 + -8;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  pUVar9 = local_1d8;
  uVar12 = pTVar37->ArrayNum + iVar14;
  iVar14 = (local_1d8->Variants).ArrayNum;
  if ((int)uVar12 < iVar14) {
    lVar28 = (longlong)(int)uVar12 * 8;
    do {
      uVar34 = 0;
      if ((int)uVar12 < pTVar1->ArrayNum) {
        uVar34 = ~uVar12 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = *(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar28);
      uVar34 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
      uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
      if (local_138._8_4_ != local_104) {
        FVar20.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar20.Data = local_f8.Data;
        }
        for (iVar14 = *(int *)(FVar20.Data +
                              (ulonglong)(local_f0 - 1 & (uVar34 >> 0x10 ^ uVar34)) * 4);
            iVar14 != -1; iVar14 = *(int *)(local_138._0_8_ + (longlong)iVar14 * 0x10 + 8)) {
          if (*(ulonglong *)(local_138._0_8_ + (longlong)iVar14 * 0x10) == uVar21) {
            uVar34 = 0;
            if ((int)uVar12 < pTVar1->ArrayNum) {
              uVar34 = ~uVar12 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar28) = 0;
            break;
          }
        }
      }
      iVar14 = (pUVar9->Variants).ArrayNum;
      uVar12 = uVar12 + 1;
      lVar28 = lVar28 + 8;
    } while ((int)uVar12 < iVar14);
  }
  iVar14 = iVar14 + -1;
  if (-1 < iVar14) {
    lVar31 = (longlong)iVar14;
    lVar28 = lVar31 * 8;
    do {
      if ((pTVar1->ArrayNum <= iVar14) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar28) == 0) {
        if ((pTVar1->ArrayNum <= iVar14) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar22 = (pTVar1->AllocatorInstance).Data + lVar31 * 8;
        iVar11 = (pTVar1->ArrayNum - iVar14) + -1;
        if (iVar11 != 0) {
          memmove(pFVar22,pFVar22 + 8,(longlong)iVar11 << 3);
        }
        pTVar1->ArrayNum = pTVar1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,&pTVar1->ArrayMax);
      }
      lVar31 = lVar31 + -1;
      lVar28 = lVar28 + -8;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<UVariant_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UVariant_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UVariant_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
LAB_14e2d8ced:
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<UVariantSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UVariantSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UVariantSet_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// GetDisplayText @ 14e2dd940

FText * __thiscall UVariantSet::GetDisplayText(UVariantSet *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->DisplayText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->DisplayText).Flags;
  return __return_storage_ptr__;
}

// GetNumVariants @ 14e2ddd30

int __thiscall UVariantSet::GetNumVariants(UVariantSet *this)

{
  return (this->Variants).ArrayNum;
}

// GetParent @ 14e2de0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelVariantSets * __thiscall UVariantSet::GetParent(UVariantSet *this)

{
  int iVar1;
  ULevelVariantSets *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (ULevelVariantSets *)this->_padding_;
  if (pUVar2 != (ULevelVariantSets *)0x0) {
    pUVar3 = ULevelVariantSets::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (ULevelVariantSets *)0x0;
}

// GetPrivateStaticClass @ 14e2deab0

UClass * __cdecl UVariantSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariantSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"VariantSet",
               &Z_Registration_Info_UClass_UVariantSet.InnerSingleton,
               StaticRegisterNativesUVariantSet,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVariantSet>,InternalVTableHelperCtorCaller<UVariantSet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariantSet.InnerSingleton;
}

// GetThumbnail @ 14e2df4b0

UTexture2D * __thiscall UVariantSet::GetThumbnail(UVariantSet *this)

{
  return (this->Thumbnail).field0_0x0.DebugPtr;
}

// GetUniqueVariantName @ 14e2df4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
UVariantSet::GetUniqueVariantName
          (UVariantSet *this,FString *__return_storage_ptr__,FString *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  undefined1 auStackY_128 [32];
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [8];
  FText local_c0;
  FString local_b0;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar13 = (this->Variants).AllocatorInstance.Data;
  iVar6 = (this->Variants).ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  pFVar2 = pFVar13 + (longlong)iVar6 * 8;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  while( true ) {
    if ((this->Variants).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UVariant>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_c8);
    }
    if (pFVar13 == pFVar2) break;
    lVar12 = *(longlong *)pFVar13;
    local_c0.TextData.Reference = *(ITextData **)(lVar12 + 0x48);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 8))
                (local_c0.TextData.Reference,local_a0);
    }
    local_c0.Flags = *(uint *)(lVar12 + 0x50);
    pFVar8 = FText::ToString(&local_c0);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(local_9c + 4),
               (FString *)local_9c,(bool *)pFVar8);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    pFVar13 = pFVar13 + 8;
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    pwVar11 = L"";
    iVar6 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
  iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(local_9c + 4)
                     ,uVar5,param_1);
  if (iVar6 == -1) {
    ::FString::FString(__return_storage_ptr__,param_1);
    goto LAB_14e2df9d1;
  }
  iVar6 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = iVar6;
  if (iVar6 == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)&local_e8,iVar6,&local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar6 * 2);
  }
  iVar6 = local_e8.Data.ArrayNum + -1;
  FVar3.Data = local_e8.Data.AllocatorInstance.Data;
  if (local_e8.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  iVar9 = iVar6;
  if (1 < iVar6) {
    iVar9 = 1;
  }
  iVar7 = 0;
  if (0 < iVar9) {
    iVar7 = iVar9;
  }
  ::FString::FString(&local_b0,(wchar_t *)(FVar3.Data + ((longlong)iVar6 - (longlong)iVar7) * 2));
  bVar4 = ::FString::IsNumeric(&local_b0);
  if (bVar4) {
    do {
      iVar6 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      if (iVar6 + -1 < iVar6) {
        iVar6 = iVar6 + -1;
      }
      iVar9 = 0;
      if (0 < iVar6) {
        iVar9 = iVar6;
      }
      ::FString::RemoveAt(&local_e8,iVar9,1,No);
      iVar6 = local_e8.Data.ArrayNum + -1;
      FVar3.Data = local_e8.Data.AllocatorInstance.Data;
      if (local_e8.Data.ArrayNum == 0) {
        iVar6 = 0;
        FVar3.Data = (FScriptContainerElement *)L"";
      }
      iVar9 = iVar6;
      if (1 < iVar6) {
        iVar9 = 1;
      }
      iVar7 = 0;
      if (0 < iVar9) {
        iVar7 = iVar9;
      }
      ::FString::FString(&local_d8,(wchar_t *)(FVar3.Data + ((longlong)iVar6 - (longlong)iVar7) * 2)
                        );
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      local_b0.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      local_b0.Data.ArrayNum = local_d8.Data.ArrayNum;
      local_b0.Data.ArrayMax = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar4 = ::FString::IsNumeric(&local_b0);
    } while (bVar4);
  }
  if (local_e8.Data.ArrayNum == 0) {
    pwVar11 = L"";
    iVar6 = 0;
  }
  else {
    iVar6 = local_e8.Data.ArrayNum + -1;
    pwVar11 = (wchar_t *)local_e8.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
  iVar6 = local_e8.Data.ArrayNum;
  if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
    FVar10 = (ForElementType<FSetElementId>)&local_98.Hash;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar10 = local_98.Hash.SecondaryData;
    }
    iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(local_98.HashSize - 1U & uVar5) * 4);
    lVar12 = local_98.Elements._0_8_;
    while (iVar9 != -1) {
      lVar1 = (longlong)iVar9 * 0x18;
      iVar7 = *(int *)(lVar1 + 8 + lVar12);
      if (iVar7 == iVar6) {
        if (1 < iVar7) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar1 + lVar12),
                             (wchar_t *)local_e8.Data.AllocatorInstance.Data);
          bVar4 = iVar6 == 0;
          lVar12 = local_98.Elements._0_8_;
          iVar6 = local_e8.Data.ArrayNum;
          goto LAB_14e2df7ff;
        }
LAB_14e2df812:
        if (iVar9 != -1) goto LAB_14e2df826;
        break;
      }
      bVar4 = iVar7 + iVar6 == 1;
LAB_14e2df7ff:
      if (bVar4) goto LAB_14e2df812;
      iVar9 = *(int *)(lVar12 + 0x10 + lVar1);
    }
  }
  if (iVar6 < 2) {
LAB_14e2df826:
    iVar6 = 0;
    do {
      local_c0.TextData.Reference = (ITextData *)0x0;
      local_c0.Flags = 0;
      local_c0._12_4_ = 0;
      ::FString::AppendInt((FString *)&local_c0,iVar6);
      ::FString::ConcatFF(&local_d8,&local_e8,(FString *)&local_c0);
      if (local_d8.Data.ArrayNum == 0) {
        pwVar11 = L"";
        iVar9 = 0;
      }
      else {
        iVar9 = local_d8.Data.ArrayNum + -1;
        pwVar11 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar10 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar10 = local_98.Hash.SecondaryData;
        }
        iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(local_98.HashSize - 1U & uVar5) * 4);
        uVar14 = local_d8.Data._8_8_;
        lVar12 = local_98.Elements._0_8_;
        while (iVar9 != -1) {
          lVar1 = (longlong)iVar9 * 0x18;
          iVar7 = *(int *)(lVar1 + 8 + lVar12);
          if (iVar7 == (int)uVar14) {
            if (iVar7 < 2) goto LAB_14e2df904;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(lVar1 + lVar12),
                               (wchar_t *)local_d8.Data.AllocatorInstance.Data);
            bVar4 = iVar7 == 0;
            lVar12 = local_98.Elements._0_8_;
            uVar14 = local_d8.Data._8_8_;
          }
          else {
            bVar4 = iVar7 + (int)uVar14 == 1;
          }
          if (bVar4) goto LAB_14e2df904;
          iVar9 = *(int *)(lVar12 + 0x10 + lVar1);
        }
      }
      iVar9 = -1;
LAB_14e2df904:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_c0.TextData.Reference);
      }
      if (iVar9 == -1) goto LAB_14e2df92c;
      iVar6 = iVar6 + 1;
    } while( true );
  }
LAB_14e2df990:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_e8.Data.ArrayMax;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = iVar6;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_14e2df9d1:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_9c + 4));
  return __return_storage_ptr__;
LAB_14e2df92c:
  local_c0.TextData.Reference = (ITextData *)0x0;
  local_c0.Flags = 0;
  local_c0._12_4_ = 0;
  ::FString::AppendInt((FString *)&local_c0,iVar6);
  ::FString::ConcatFF(&local_d8,&local_e8,(FString *)&local_c0);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_e8.Data.ArrayNum = local_d8.Data.ArrayNum;
  local_e8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
  local_e8.Data.ArrayMax = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = local_e8.Data.ArrayNum;
  if (local_c0.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_c0.TextData.Reference);
    iVar6 = local_e8.Data.ArrayNum;
  }
  goto LAB_14e2df990;
}

// GetVariant @ 14e2e00b0

UVariant * __thiscall UVariantSet::GetVariant(UVariantSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UVariant *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Variants).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Variants).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UVariant *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UVariant **)((this->Variants).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UVariant *)0x0;
}

// GetVariantByName @ 14e2e0140

UVariant * __thiscall UVariantSet::GetVariantByName(UVariantSet *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  UVariant *pUVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  pFVar4 = (this->Variants).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->Variants).ArrayNum * 8;
  do {
    if (pFVar4 == pFVar1) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
LAB_14e2e0199:
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return (UVariant *)0x0;
    }
    bVar3 = `UVariantSet::GetVariantByName'::__l2::<lambda_1>::operator()
                      (&local_18,*(UVariant **)pFVar4);
    if (bVar3) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        pUVar2 = *(UVariant **)pFVar4;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return pUVar2;
      }
      goto LAB_14e2e0199;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// GetVariantIndex @ 14e2e0200

int __thiscall UVariantSet::GetVariantIndex(UVariantSet *this,UVariant *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (UVariant *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar1 = (this->Variants).AllocatorInstance.Data;
    for (pFVar2 = pFVar1; pFVar2 != pFVar1 + (longlong)(this->Variants).ArrayNum * 8;
        pFVar2 = pFVar2 + 8) {
      if (*(UVariant **)pFVar2 == param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetVariants @ 14e2e0460

TArray<UVariant_*,TSizedDefaultAllocator<32>_> * __thiscall
UVariantSet::GetVariants(UVariantSet *this)

{
  return (TArray<UVariant_*,TSizedDefaultAllocator<32>_> *)&this->Variants;
}

// IsExpanded @ 14e2e0ae0

bool __thiscall UVariantSet::IsExpanded(UVariantSet *this)

{
  return this->bExpanded;
}

// RemoveVariants @ 14e2e2510

void __thiscall
UVariantSet::RemoveVariants
          (UVariantSet *this,TArray<UVariant_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UVariant *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  UPackage *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar3 * 8;
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar2) {
      return;
    }
    pUVar5 = *(UVariant **)pFVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UVariant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pFVar6 = (this->Variants).AllocatorInstance.Data;
    iVar4 = (this->Variants).ArrayNum;
    for (pFVar9 = pFVar6; pFVar9 != pFVar6 + (longlong)iVar4 * 8; pFVar9 = pFVar9 + 8) {
      if (*(UVariant **)pFVar9 == pUVar5) {
        iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar6 >> 3);
        if (iVar8 != -1) {
          memmove(pFVar6 + (longlong)iVar8 * 8,pFVar6 + (longlong)iVar8 * 8 + 8,
                  (longlong)((iVar4 - iVar8) + -1) << 3);
          piVar1 = &(this->Variants).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
    VariantSetImpl::ResetVariantDependents(pUVar5);
    pcVar7 = *(code **)(pUVar5->_padding_ + 0x170);
    pUVar10 = GetTransientPackage();
    (*pcVar7)(pUVar5,0,pUVar10,0);
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// Serialize @ 14e2e5da0

void __thiscall UVariantSet::Serialize(UVariantSet *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  FText *pFVar3;
  FText local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVariantManagerObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FVariantManagerObjectVersion::GUID);
  if (iVar2 < 2) {
    if ((param_1->field_0x28 & 1) != 0) {
      bVar1 = FText::IsEmpty(&this->DisplayText_DEPRECATED);
      if (!bVar1) {
        FText::operator=(&this->DisplayText,&this->DisplayText_DEPRECATED);
        pFVar3 = FText::FText(&local_18);
        FText::operator=(&this->DisplayText_DEPRECATED,pFVar3);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&this->DisplayText);
  }
  return;
}

// Serialize @ 14e2e5e50

void __thiscall UVariantSet::Serialize(UVariantSet *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  int iVar2;
  FArchiveState *this_00;
  FText *pFVar3;
  FSlotBase local_res10 [3];
  FText local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FVariantManagerObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer(this_00,&FVariantManagerObjectVersion::GUID);
  if (iVar2 < 2) {
    if (this_00->ArIsLoading != 0) {
      bVar1 = FText::IsEmpty(&this->DisplayText_DEPRECATED);
      if (!bVar1) {
        FText::operator=(&this->DisplayText,&this->DisplayText_DEPRECATED);
        pFVar3 = FText::FText(&local_18);
        FText::operator=(&this->DisplayText_DEPRECATED,pFVar3);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
          return;
        }
      }
    }
  }
  else {
    (**(code **)(this_00->_padding_ + 0x170))(this_00,&this->DisplayText);
  }
  return;
}

// SetDisplayText @ 14e2e6200

void __thiscall UVariantSet::SetDisplayText(UVariantSet *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DisplayText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->DisplayText).Flags = param_1->Flags;
    return;
  }
  (this->DisplayText).Flags = param_1->Flags;
  return;
}

// SetExpanded @ 14e2e6280

void __thiscall UVariantSet::SetExpanded(UVariantSet *this,bool param_1)

{
  this->bExpanded = param_1;
  return;
}

// SetThumbnailFromCamera @ 14e2e6ac0

void __thiscall
UVariantSet::SetThumbnailFromCamera
          (UVariantSet *this,UObject *param_1,TTransform<double> *param_2,float param_3,
          float param_4,float param_5)

{
  UTexture2D *pUVar1;
  
  pUVar1 = ThumbnailGenerator::GenerateThumbnailFromCamera(param_1,param_2,param_3,param_4,param_5);
  if (pUVar1 != (UTexture2D *)0x0) {
    SetThumbnailInternal(this,pUVar1);
    return;
  }
  return;
}

// SetThumbnailFromEditorViewport @ 14e2e6b20

void __thiscall UVariantSet::SetThumbnailFromEditorViewport(UVariantSet *this)

{
  return;
}

// SetThumbnailFromFile @ 14e2e6bd0

void __thiscall UVariantSet::SetThumbnailFromFile(UVariantSet *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  UTexture2D *pUVar3;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  pUVar3 = ThumbnailGenerator::GenerateThumbnailFromFile(pFVar2);
  if (pUVar3 != (UTexture2D *)0x0) {
    SetThumbnailInternal(this,pUVar3);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetThumbnailFromTexture @ 14e2e6cc0

void __thiscall UVariantSet::SetThumbnailFromTexture(UVariantSet *this,UTexture2D *param_1)

{
  UTexture2D *pUVar1;
  
  if (param_1 == (UTexture2D *)0x0) {
    SetThumbnailInternal(this,(UTexture2D *)0x0);
    return;
  }
  pUVar1 = ThumbnailGenerator::GenerateThumbnailFromTexture(param_1);
  if (pUVar1 != (UTexture2D *)0x0) {
    SetThumbnailInternal(this,pUVar1);
    return;
  }
  return;
}

// SetThumbnailInternal @ 14e2e6d90

void __thiscall UVariantSet::SetThumbnailInternal(UVariantSet *this,UTexture2D *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Thumbnail).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->Thumbnail).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UTexture2D *)0x0) goto LAB_14e2e6def;
  }
  (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this,0);
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Transient|RF_Standalone);
LAB_14e2e6def:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnThumbnailUpdated,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  OnThumbnailUpdated._28_4_ = OnThumbnailUpdated._28_4_ + 1;
  uVar6 = OnThumbnailUpdated._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)OnThumbnailUpdated._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + OnThumbnailUpdated._8_8_) == 0) ||
          (*(longlong **)(lVar7 + OnThumbnailUpdated._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + OnThumbnailUpdated._8_8_) + 0x68))(),
         cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  OnThumbnailUpdated._28_4_ = OnThumbnailUpdated._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnThumbnailUpdated,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// StaticRegisterNativesUVariantSet @ 14e2e7130

void __cdecl UVariantSet::StaticRegisterNativesUVariantSet(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UVariantSet_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDisplayText @ 14e2e85b0

void __cdecl UVariantSet::execGetDisplayText(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.TextData.Reference = *(ITextData **)&param_1[1].field_0x10;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)&param_1[1].field_0x18;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetNumVariants @ 14e2e8790

void __cdecl UVariantSet::execGetNumVariants(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[2].field_0x8;
  return;
}

// execGetParent @ 14e2e8900

void __cdecl UVariantSet::execGetParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1->field_0x20;
  if (lVar2 != 0) {
    pUVar3 = ULevelVariantSets::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(longlong *)param_3 = lVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetThumbnail @ 14e2e8a30

void __cdecl UVariantSet::execGetThumbnail(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[2].field_0x10;
  return;
}

// execGetVariant @ 14e2e8a60

void __cdecl UVariantSet::execGetVariant(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)&param_1[2].field_0x8 <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[2].field_0x8) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
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
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + lVar4 * 8);
  }
  return;
}

// execGetVariantByName @ 14e2e8b50

void __cdecl UVariantSet::execGetVariantByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  void *_Src;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  uVar6 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_20;
  local_38.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_38,(int)local_20,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  ::FString::FString(&local_18,&local_38);
  puVar5 = *(undefined8 **)(param_1 + 2);
  puVar1 = puVar5 + *(int *)&param_1[2].field_0x8;
  do {
    if (puVar5 == puVar1) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
LAB_14e2e8c79:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      *(undefined8 *)param_3 = uVar6;
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      return;
    }
    bVar3 = `UVariantSet::GetVariantByName'::__l2::<lambda_1>::operator()
                      (&local_18,(UVariant *)*puVar5);
    if (bVar3) {
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar6 = *puVar5;
      goto LAB_14e2e8c79;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

// execSetDisplayText @ 14e2e92f0

void __cdecl UVariantSet::execSetDisplayText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDisplayText((UVariantSet *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetThumbnailFromCamera @ 14e2e9690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UVariantSet::execSetThumbnailFromCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UTexture2D *pUVar14;
  TTransform<double> *pTVar15;
  undefined1 auStackY_d8 [32];
  float local_a8;
  float local_a4;
  float local_a0 [2];
  UObject *local_98 [2];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Rotation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar11,0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar12,0);
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar10;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0[0] = 0.0;
  pTVar15 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar15 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a4);
  }
  local_a8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar14 = ThumbnailGenerator::GenerateThumbnailFromCamera
                      (local_98[0],pTVar15,local_a0[0],local_a4,local_a8);
  if (pUVar14 != (UTexture2D *)0x0) {
    SetThumbnailInternal((UVariantSet *)param_1,pUVar14);
  }
  return;
}

// execSetThumbnailFromEditorViewport @ 14e2e98d0

void __cdecl
UVariantSet::execSetThumbnailFromEditorViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetThumbnailFromFile @ 14e2e9a60

void __cdecl UVariantSet::execSetThumbnailFromFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FString *pFVar2;
  UTexture2D *pUVar3;
  longlong lVar4;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_20;
  local_38.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_38,(int)local_20,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  pFVar2 = ::FString::FString(&local_18,&local_38);
  pUVar3 = ThumbnailGenerator::GenerateThumbnailFromFile(pFVar2);
  if (pUVar3 != (UTexture2D *)0x0) {
    SetThumbnailInternal((UVariantSet *)param_1,pUVar3);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetThumbnailFromTexture @ 14e2e9c70

void __cdecl
UVariantSet::execSetThumbnailFromTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *pUVar2;
  UTexture2D *local_res10;
  
  local_res10 = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UTexture2D *)0x0) {
    pUVar2 = (UTexture2D *)0x0;
  }
  else {
    pUVar2 = ThumbnailGenerator::GenerateThumbnailFromTexture(local_res10);
    if (pUVar2 == (UTexture2D *)0x0) {
      return;
    }
  }
  SetThumbnailInternal((UVariantSet *)param_1,pUVar2);
  return;
}

