// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 7

// FGameplayTagRedirectors @ 146acbb40

/* WARNING: Enum "Type": Some values do not have unique names */

FGameplayTagRedirectors * __thiscall
FGameplayTagRedirectors::FGameplayTagRedirectors(FGameplayTagRedirectors *this)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  FConfigSection *pFVar10;
  TArray<FGameplayTagSource_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FString *pFVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  int *piVar18;
  TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
  *local_res8;
  TObjectPtr<UObject>_u_0 local_res10;
  FName local_res18;
  TArray<FGameplayTagSource_const_*,TSizedDefaultAllocator<32>_> local_d8;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  FString local_b8;
  longlong *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  FConfigSection *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TObjectPtr<UObject>_u_0 local_60;
  FName local_58;
  FString local_50;
  
  uVar15 = 0;
  piVar18 = (int *)&(this->TagRedirects).field_0xc;
  local_res10.DebugPtr = local_res10.DebugPtr & 0xffffffff00000000;
  *(undefined8 *)&this->TagRedirects = 0;
  *(undefined4 *)&(this->TagRedirects).field_0x8 = 0;
  *piVar18 = 0;
  *(undefined8 *)&(this->TagRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->TagRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->TagRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->TagRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->TagRedirects).field_0x48 = 0;
  local_res8 = (TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                *)this;
  pUVar9 = UGameplayTagsSettings::StaticClass();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  local_res10 = (TObjectPtr<UObject>_u_0)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  bVar5 = false;
  pFVar10 = FConfigCacheIni::GetSection(GConfig,L"/Script/Engine.Engine",false,&GEngineIni);
  TVar6 = local_res10;
  if (pFVar10 != (FConfigSection *)0x0) {
    iVar3 = (int)pFVar10->_padding_;
    local_a8 = &pFVar10->_padding_;
    local_b8.Data.ArrayMax = 1;
    local_98 = 0;
    iVar8 = 0;
    local_b8.Data.ArrayNum = 0;
    if (iVar3 != 0) {
      plVar17 = (longlong *)pFVar10->_padding_;
      if ((longlong *)pFVar10->_padding_ == (longlong *)0x0) {
        plVar17 = local_a8;
      }
      uVar2 = (uint)*plVar17;
      local_b8.Data.ArrayNum = uVar15;
      while (uVar2 == 0) {
        lVar13 = (longlong)local_b8.Data.ArrayNum;
        local_98 = local_98 + 0x20;
        local_b8.Data.ArrayNum = local_b8.Data.ArrayNum + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b8.Data.ArrayNum)
        goto LAB_146acbc6d;
        uVar2 = *(uint *)((longlong)plVar17 + lVar13 * 4 + 4);
      }
      local_b8.Data.ArrayMax = -uVar2 & uVar2;
      uVar1 = (ulonglong)(uint)local_b8.Data.ArrayMax * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = local_98 + -1 + (int)lVar13;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_146acbc6d:
    uStack_a0 = 0xffffffff;
    TStack_80._padding_ = CONCAT44(local_b8.Data.ArrayMax,local_b8.Data.ArrayNum);
    TStack_80.CurrentBitIndex = iVar8;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80._28_4_ = iVar8;
    TStack_80.BaseBitIndex = local_98;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar10;
    iStack_9c = iVar8;
    iStack_94 = iVar8;
    local_88 = pFVar10;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
    if (iVar8 < iVar3) {
      do {
        pFVar10 = local_88;
        bVar7 = ::FName::Equals(*(FName *)((longlong)iVar8 * 0x28 + local_88->_padding_),
                                L"+GameplayTagRedirects");
        if (bVar7) {
          local_res10.DebugPtr = (UObject *)0x0;
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
          lVar13 = pFVar10->_padding_ + (longlong)iVar8 * 0x28;
          if (*(char *)(lVar13 + 0x1d) == '\0') {
            iVar3 = *(int *)(lVar13 + 0x10);
            uVar15 = uVar15 | 2;
            _Src = *(void **)(lVar13 + 8);
            local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.ArrayNum = iVar3;
            if (iVar3 == 0) {
              local_d8.ArrayNum = 0;
              local_d8.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar3,0,&local_d8.AllocatorInstance,iVar3,&local_d8.ArrayMax);
              memcpy(local_d8.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
            }
            pTVar11 = &local_d8;
          }
          else {
            uVar15 = uVar15 | 1;
            pTVar11 = (TArray<FGameplayTagSource_const_*,TSizedDefaultAllocator<32>_> *)
                      FConfigValue::ExpandValue(&local_50,(FString *)(lVar13 + 8));
          }
          local_c8.Data = (FScriptContainerElement *)0x0;
          local_c0 = pTVar11->ArrayNum;
          lVar13 = (longlong)local_c0;
          pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar11->AllocatorInstance)->
                   AllocatorInstance).Data;
          if (local_c0 == 0) {
            local_bc = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_c0,0,&local_c8,local_c0,&local_bc);
            memcpy(local_c8.Data,pFVar4,lVar13 * 2);
          }
          if (((uVar15 & 2) != 0) &&
             (uVar15 = uVar15 & 0xfffffffd,
             local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
          if (((uVar15 & 1) != 0) &&
             (uVar15 = uVar15 & 0xfffffffe,
             local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_c0 != 0) {
            FVar16.Data = local_c8.Data;
          }
          bVar7 = FParse::Value((wchar_t *)FVar16.Data,L"OldTagName=",
                                (FName *)&local_res10.ObjectPtr);
          if (local_c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data);
          }
          if (bVar7) {
            pFVar12 = FConfigValue::GetValue
                                ((FConfigValue *)
                                 (pFVar10->_padding_ + ((longlong)iVar8 * 5 + 1) * 8),&local_b8);
            if ((pFVar12->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
            }
            bVar7 = FParse::Value(pwVar14,L"NewTagName=",&local_res18);
            if ((FConfigSection *)local_b8.Data.AllocatorInstance.Data != (FConfigSection *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              local_60 = local_res10;
              local_58 = local_res18;
              TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FGameplayTagRedirect_const_&>
                        ((TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *)
                         &TVar6.DebugPtr[1].field_0x10,(FGameplayTagRedirect *)&local_60.ObjectPtr);
              bVar5 = true;
            }
          }
        }
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        this = (FGameplayTagRedirectors *)local_res8;
        iVar8 = TStack_80.CurrentBitIndex;
      } while (TStack_80.CurrentBitIndex < (int)*(longlong *)&(TStack_80.Array)->NumBits);
      if ((bVar5) && (1 < (byte)LogGameplayTags._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      }
    }
    piVar18 = (int *)&((TMap<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
                        *)&((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                             *)this)->Elements)->field_0xc;
  }
  bVar5 = 1 < ((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                *)this)->HashSize;
  if (!bVar5) {
    TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                      *)this);
  }
  iVar3 = *piVar18;
  *(undefined4 *)
   &(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
       *)this)->Elements).field_0x8 = 0;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,piVar18);
  }
  *(undefined4 *)
   &(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
       *)this)->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)
   &(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
       *)this)->Elements).field_0x34 = 0;
  iVar3 = *(int *)&(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                      *)this)->Elements).field_0x2c;
  *(undefined4 *)
   &(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
       *)this)->Elements).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)
     &(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
         *)this)->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                   *)this)->Elements).field_0x10,0);
  }
  if (bVar5) {
    ((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
      *)this)->HashSize = 1;
    TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
              *)this);
  }
  pUVar9 = UGameplayTagsSettings::StaticClass();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  AddRedirects(this,(TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *)
                    &(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10);
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  UGameplayTagsManager::FindTagSourcesWithType
            (UGameplayTagsManager::SingletonManager,TagList,&local_d8);
  iVar3 = local_d8.ArrayNum;
  pFVar4 = local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 8;
  FVar16.Data = local_d8.AllocatorInstance.Data;
  while( true ) {
    if (local_d8.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGameplayTagSource_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (FVar16.Data == pFVar4) break;
    if ((*(longlong *)FVar16.Data != 0) &&
       (lVar13 = *(longlong *)(*(longlong *)FVar16.Data + 0x10), lVar13 != 0)) {
      AddRedirects(this,(TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *)(lVar13 + 0x38))
      ;
    }
    FVar16.Data = FVar16.Data + 8;
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return (FGameplayTagRedirectors *)
         (TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
          *)this;
}

// AddRedirects @ 146ad01e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameplayTagRedirectors::AddRedirects
          (FGameplayTagRedirectors *this,
          TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  FName FVar6;
  undefined1 *puVar7;
  FName *pFVar8;
  FName *pFVar9;
  FName *this_00;
  int iVar10;
  FName local_res10;
  uint local_res18;
  FName local_a8;
  FName *local_a0;
  FName local_98;
  FName *local_90;
  FName *local_88;
  FName *local_80;
  FName *local_78;
  FName *local_70;
  FName **local_68;
  FString local_60;
  FString local_50;
  
  local_res18 = param_1->ArrayNum;
  uVar5 = (ulonglong)(int)local_res18;
  this_00 = (FName *)(param_1->AllocatorInstance).Data;
  local_90 = this_00 + uVar5 * 2;
LAB_146ad0220:
  do {
    pFVar8 = local_90;
    if (param_1->ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FGameplayTagRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (this_00 == pFVar8) {
      return;
    }
    FVar6 = *this_00;
    local_a8 = this_00[1];
    local_98 = FVar6;
    uVar4 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
    if (*(int *)&(this->TagRedirects).field_0x8 != *(int *)&(this->TagRedirects).field_0x34) {
      puVar3 = *(undefined1 **)&(this->TagRedirects).field_0x40;
      puVar7 = &(this->TagRedirects).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar7 = puVar3;
      }
      iVar10 = *(int *)(puVar7 + (ulonglong)
                                 (*(int *)&(this->TagRedirects).field_0x48 - 1U &
                                 FVar6.Number + uVar4) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *(longlong *)&this->TagRedirects + (longlong)iVar10 * 0x18;
          if (*(FName *)(*(longlong *)&this->TagRedirects + (longlong)iVar10 * 0x18) == FVar6) {
            local_a0 = (FName *)(lVar1 + 8);
            if (lVar1 == 0) {
              local_a0 = (FName *)0x0;
            }
            if (local_a0 == (FName *)0x0) goto LAB_146ad02ac;
            if (*local_a0 == local_a8) goto LAB_146ad0403;
            local_78 = &local_98;
            local_70 = &local_a8;
            local_68 = &local_a0;
            `FGameplayTagRedirectors::AddRedirects'::__l44::<lambda_1>::operator()(&local_78);
            uVar5 = (ulonglong)local_res18;
            this_00 = this_00 + 2;
            goto LAB_146ad0220;
          }
          iVar10 = *(int *)(lVar1 + 0x10);
        } while (iVar10 != -1);
      }
    }
    local_a0 = (FName *)0x0;
LAB_146ad02ac:
    iVar10 = 10;
    do {
      FVar6 = local_a8;
      if (local_a8 == (FName)0x0) goto LAB_146ad03da;
      iVar2 = param_1->ArrayNum;
      pFVar8 = (FName *)(param_1->AllocatorInstance).Data;
      pFVar9 = pFVar8 + (longlong)iVar2 * 2;
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FGameplayTagRedirect_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res10);
          FVar6 = local_a8;
        }
        if (pFVar8 == pFVar9) goto LAB_146ad03da;
        if (*pFVar8 == FVar6) break;
        pFVar8 = pFVar8 + 2;
      }
      local_a8 = pFVar8[1];
      iVar10 = iVar10 + -1;
    } while (0 < iVar10);
    FVar6 = local_a8;
    if (2 < (byte)LogGameplayTags._0_1_) {
      ::FName::ToString(this_00,&local_50);
      ::FName::ToString(this_00 + 1,&local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      FVar6 = local_a8;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        FVar6 = local_a8;
      }
    }
LAB_146ad03da:
    local_88 = &local_98;
    local_80 = &local_res10;
    local_res10 = FVar6;
    TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FGameplayTag_&&>_>
              ((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,FGameplayTag_&&> *)&stack0x00000020,
               (bool *)&local_88);
LAB_146ad0403:
    this_00 = this_00 + 2;
    uVar5 = (ulonglong)local_res18;
  } while( true );
}

// AddRedirectsFromSource @ 146ad0440

void __thiscall
FGameplayTagRedirectors::AddRedirectsFromSource
          (FGameplayTagRedirectors *this,FGameplayTagSource *param_1)

{
  UGameplayTagsList *pUVar1;
  
  if ((param_1 != (FGameplayTagSource *)0x0) &&
     (pUVar1 = (param_1->SourceTagList).field0_0x0.DebugPtr, pUVar1 != (UGameplayTagsList *)0x0)) {
    AddRedirects(this,&pUVar1->GameplayTagRedirects);
    return;
  }
  return;
}

// Get @ 146add6c0

FGameplayTagRedirectors * __cdecl FGameplayTagRedirectors::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGameplayTagRedirectors(&::Singleton);
      atexit(`FGameplayTagRedirectors::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// RedirectTag @ 146ae9b60

bool __thiscall
FGameplayTagRedirectors::RedirectTag
          (FGameplayTagRedirectors *this,FName *param_1,FGameplayTag *param_2)

{
  FName *pFVar1;
  
  pFVar1 = &TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
            ::Find((TMapBase<FName,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>_>
                    *)this,*param_1)->TagName;
  if (pFVar1 != (FName *)0x0) {
    param_2->TagName = *pFVar1;
    return true;
  }
  return false;
}

// RefreshTagRedirects @ 146ae9f00

void __thiscall FGameplayTagRedirectors::RefreshTagRedirects(FGameplayTagRedirectors *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  UClass *this_00;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<FGameplayTagSource_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  bVar5 = 1 < *(int *)&(this->TagRedirects).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(this->TagRedirects).field_0xc;
  *(undefined4 *)&(this->TagRedirects).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TagRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagRedirects).field_0x34 = 0;
  iVar3 = *(int *)&(this->TagRedirects).field_0x2c;
  *(undefined4 *)&(this->TagRedirects).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->TagRedirects).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TagRedirects).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->TagRedirects).field_0x48 = 1;
    TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FGameplayTag>,TDefaultMapHashableKeyFuncs<FName,FGameplayTag,0>,FDefaultSetAllocator>
              *)this);
  }
  this_00 = UGameplayTagsSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  AddRedirects(this,(TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *)
                    &(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10);
  if (UGameplayTagsManager::SingletonManager == (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::InitializeManager();
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UGameplayTagsManager::FindTagSourcesWithType
            (UGameplayTagsManager::SingletonManager,TagList,&local_18);
  iVar3 = local_18.ArrayNum;
  pFVar2 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar6.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FGameplayTagSource_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar2) break;
    if ((*(longlong *)FVar6.Data != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)FVar6.Data + 0x10), lVar4 != 0)) {
      AddRedirects(this,(TArray<FGameplayTagRedirect,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x38));
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1504f8760

bool __thiscall `FGameplayTagRedirectors::AddRedirects'::__l44::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8000825375758221159>);
  if (bVar5) {
    local_res10 = *(FName *)**(undefined8 **)((longlong)this + 0x10);
    ::FName::ToString(&local_res10,&local_28);
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_38);
    ::FName::ToString(*(FName **)this,&local_48);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8000825375758221159>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504f8849;
    }
  }
  bVar5 = false;
LAB_1504f8849:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

