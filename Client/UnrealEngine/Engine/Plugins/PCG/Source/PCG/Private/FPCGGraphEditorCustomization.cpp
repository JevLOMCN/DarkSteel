// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticStruct @ 1499024b0

UScriptStruct * __cdecl FPCGGraphEditorCustomization::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGGraphEditorCustomization.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGGraphEditorCustomization.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGGraphEditorCustomization,(UObject *)pUVar1,
                         L"PCGGraphEditorCustomization");
  }
  return Z_Registration_Info_UScriptStruct_FPCGGraphEditorCustomization.OuterSingleton;
}

// ~FPCGGraphEditorCustomization @ 1499c6150

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
FPCGGraphEditorCustomization::~FPCGGraphEditorCustomization(FPCGGraphEditorCustomization *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->FilteredSettingsTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FilteredSubgraphTypes).HashSize = 0;
  FVar2 = (this->FilteredSubgraphTypes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<UPCGGraph>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<UPCGGraph>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FilteredSubgraphTypes).Elements);
  (this->FilteredCategories).HashSize = 0;
  FVar2 = (this->FilteredCategories).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FilteredCategories).Elements);
  return;
}

// operator() @ 1499c8e80

bool __thiscall
`FPCGGraphEditorCustomization::FilterSettings'::__l6::<lambda_1>::operator()
          (void *this,TSubclassOf<UPCGSettings> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)this;
  if (lVar5 != 0) {
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = *(longlong *)this;
        goto LAB_1499c8ed2;
      }
    }
  }
  lVar5 = 0;
LAB_1499c8ed2:
  pUVar3 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar3 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGSettings_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (pUVar3 = (param_1->Class).field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(lVar5 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          return true;
        }
      }
    }
  }
  return false;
}

// Accepts @ 1499d11e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGGraphEditorCustomization::Accepts(FPCGGraphEditorCustomization *this,FText *param_1)

{
  undefined1 *puVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  FString local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bFilterNodesByCategory != false) {
    pFVar9 = FText::ToString(param_1);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = (pFVar9->Data).ArrayNum;
    lVar12 = (longlong)local_a8.Data.ArrayNum;
    _Src = (pFVar9->Data).AllocatorInstance.Data;
    iStack_90 = 0;
    if (local_a8.Data.ArrayNum == 0) {
      local_a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_a8.Data.ArrayNum,
                 &local_a8.Data.ArrayMax);
      memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
    }
    iVar15 = *(int *)&(this->FilteredCategories).Elements.field_0x28;
    puVar1 = &(this->FilteredCategories).Elements.field_0x10;
    pTVar2 = &this->FilteredCategories;
    uStack_8c = 1;
    local_78 = 0;
    iStack_7c = local_78;
    if (iVar15 != 0) {
      puVar17 = *(uint **)&(this->FilteredCategories).Elements.field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      local_78 = 0;
      iStack_90 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1499d12ed;
        uVar14 = puVar17[lVar12 + 1];
      }
      uStack_8c = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_8c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar12;
      if (iVar15 < iStack_7c) {
        iStack_7c = iVar15;
      }
    }
LAB_1499d12ed:
    uVar14 = *(uint *)&(this->FilteredCategories).Elements.field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    iStack_70 = *(int *)&(this->FilteredCategories).Elements.field_0x8 -
                *(int *)&(this->FilteredCategories).Elements.field_0x34;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar14 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = pTVar2;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = pTVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar4 = *(uint *)&(this->FilteredCategories).Elements.field_0x28;
    if (uVar14 != uVar4) {
      puVar16 = *(undefined1 **)&(this->FilteredCategories).Elements.field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1499d1400;
        uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar13;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_1499d1400:
    while( true ) {
      pTVar6 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar14) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2)
         ) break;
      lVar12 = *(longlong *)&pTVar6->Elements;
      iVar11 = *(int *)(lVar12 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      iVar15 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar15 = 0;
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(lVar12 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      }
      bVar7 = ::FString::StartsWith(&local_a8,pwVar10,iVar15,IgnoreCase);
      if (bVar7) {
        bVar7 = this->NodeFilterType == Allow;
        if (local_a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar7;
        }
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        return bVar7;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bFilterNodesByCategory == false) || (this->NodeFilterType != Allow)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// FilterSettings @ 1499f2550

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGGraphEditorCustomization::FilterSettings
          (FPCGGraphEditorCustomization *this,TSubclassOf<UPCGSettings> *param_1)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  
  if (this->bFilterSettings != false) {
    TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->Class).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (TVar2.DebugPtr != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
    }
    local_res8.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    pFVar4 = (this->FilteredSettingsTypes).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->FilteredSettingsTypes).ArrayNum * 8;
    for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 8) {
      bVar3 = `FPCGGraphEditorCustomization::FilterSettings'::__l6::<lambda_1>::operator()
                        (&local_res8,(TSubclassOf<UPCGSettings> *)pFVar4);
      if (bVar3) {
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          return this->SubgraphFilterType != Allow;
        }
        break;
      }
    }
  }
  if ((this->bFilterSettings != false) && (this->SubgraphFilterType == Allow)) {
    return true;
  }
  return false;
}

// FilterSubgraph @ 1499f2650

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
FPCGGraphEditorCustomization::FilterSubgraph
          (FPCGGraphEditorCustomization *this,FSoftObjectPath *param_1)

{
  EPCGGraphEditorFiltering EVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FSoftObjectPath *pFVar5;
  undefined1 local_88 [24];
  void *local_70;
  FName local_60;
  FSoftObjectPath local_58;
  FName local_38;
  FSoftObjectPath local_30;
  
  if (this->bFilterSubgraphs != false) {
    pFVar5 = FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)local_88,param_1);
    local_60.ComparisonIndex.Value = 0;
    local_60.Number = 0;
    FSoftObjectPath::FSoftObjectPath(&local_58,pFVar5);
    pFVar2 = (pFVar5->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    local_88._0_4_ = local_60.ComparisonIndex.Value;
    local_88._4_4_ = local_60.Number;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_88 + 8),&local_58);
    local_38.ComparisonIndex.Value = local_88._0_4_;
    local_38.Number = local_88._4_4_;
    FSoftObjectPath::FSoftObjectPath(&local_30,(FSoftObjectPath *)(local_88 + 8));
    uVar3 = ::GetTypeHash(&local_30);
    if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
    }
    iVar4 = TSet<TSoftObjectPtr<UPCGGraph>,DefaultKeyFuncs<TSoftObjectPtr<UPCGGraph>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TSoftObjectPtr<UPCGGraph_const_>_>
                      (&this->FilteredSubgraphTypes,uVar3,
                       (TSoftObjectPtr<UPCGGraph_const_> *)local_88);
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (iVar4 != -1) {
      EVar1 = this->SubgraphFilterType;
      if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
      }
      return EVar1 != Allow;
    }
    if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((this->bFilterSubgraphs != false) && (this->SubgraphFilterType == Allow)) {
    return true;
  }
  return false;
}

// FiltersSettings @ 1499f2780

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall FPCGGraphEditorCustomization::FiltersSettings(FPCGGraphEditorCustomization *this)

{
  return this->bFilterSettings != false;
}

// FiltersSubgraphs @ 1499f27a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall FPCGGraphEditorCustomization::FiltersSubgraphs(FPCGGraphEditorCustomization *this)

{
  return this->bFilterSubgraphs != false;
}

// GetParent @ 1499fa650

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGGraphEditorCustomization * __thiscall
FPCGGraphEditorCustomization::GetParent(FPCGGraphEditorCustomization *this)

{
  return (FPCGGraphEditorCustomization *)0x0;
}

