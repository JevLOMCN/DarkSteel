// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// FSlateGameResources @ 148694450

FSlateGameResources * __thiscall
FSlateGameResources::FSlateGameResources(FSlateGameResources *this,FName *param_1)

{
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FSlateStyleSet__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  *(undefined8 *)&(this->UIResources).field_0x10 = 0;
  *(undefined8 *)&(this->UIResources).field_0x18 = 0;
  *(undefined8 *)&(this->UIResources).field_0x38 = 0;
  *(undefined8 *)&(this->UIResources).field_0x48 = 0;
  *(undefined8 *)&this->UIResources = 0;
  *(undefined8 *)&(this->UIResources).field_0x8 = 0;
  *(undefined8 *)&(this->UIResources).field_0x20 = 0;
  *(undefined4 *)&(this->UIResources).field_0x28 = 0;
  *(undefined4 *)&(this->UIResources).field_0x2c = 0x80;
  *(undefined4 *)&(this->UIResources).field_0x34 = 0;
  *(undefined4 *)&(this->UIResources).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UIResources).field_0x40 = 0;
  (this->BasePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasePath).Data.ArrayNum = 0;
  (this->BasePath).Data.ArrayMax = 0;
  this->HasBeenInitialized = false;
  return this;
}

// ~FSlateGameResources @ 14869a980

void __thiscall FSlateGameResources::~FSlateGameResources(FSlateGameResources *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FSlateStyleSet__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pFVar1 = (this->BasePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->UIResources).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UIResources).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UIResources);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  return;
}

// AddAsset @ 1486a4660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSlateGameResources::AddAsset(FSlateGameResources *this,FAssetData *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  UObject *pUVar5;
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ForElementType<FSetElementId> local_80;
  ulonglong local_70;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_68;
  
  bVar3 = ShouldCache(this,param_1);
  if (bVar3) {
    local_b8._16_8_ = 0;
    uStack_a0 = 0;
    local_80.InlineData[0] = '\0';
    local_80.InlineData[1] = '\0';
    local_80.InlineData[2] = '\0';
    local_80.InlineData[3] = '\0';
    local_80._padding_ = 0;
    local_90 = ___xmm_00000000ffffffff0000008000000000;
    uStack_88 = _UNK_150631d98;
    local_70 = 0;
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._8_8_ = 0;
    local_98 = (void *)0x0;
    local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar4 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
             TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                       (&local_68,
                        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_b8);
    pUVar5 = FAssetData::FastGetAsset(param_1,true,pTVar4);
    local_70 = local_70 & 0xffffffff00000000;
    if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_80.SecondaryData);
    }
    iVar1 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    uVar2 = local_90._4_4_;
    local_90 = (ulonglong)local_90._4_4_ << 0x20;
    uStack_88 = 0xffffffff;
    if (0x80 < uVar2) {
      local_90 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
    AddAssetToCache(this,pUVar5,false);
  }
  return;
}

// AddAssetToCache @ 1486a4780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FSlateGameResources::AddAssetToCache(FSlateGameResources *this,UObject *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  TObjectPtr<UObject> *pTVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  UObject *pUVar11;
  UObject *pUVar13;
  UObject *pUVar14;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [24];
  undefined1 local_110 [16];
  undefined1 local_100 [24];
  FString local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FAssetData local_98;
  ulonglong local_30;
  UObject *pUVar12;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar12 = (UObject *)0x0;
  pUVar11 = (UObject *)0x0;
  if (param_1 == (UObject *)0x0) {
LAB_1486a47e5:
    pUVar13 = pUVar12;
    if (param_1 != (UObject *)0x0) goto LAB_1486a47ed;
LAB_1486a4815:
    pUVar14 = pUVar12;
    if (param_1 == (UObject *)0x0) goto LAB_1486a4843;
  }
  else {
    pUVar3 = Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       (pUVar13 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar3->_padding_)) goto LAB_1486a47e5;
LAB_1486a47ed:
    pUVar3 = USlateBrushAsset::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       (pUVar14 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar3->_padding_)) goto LAB_1486a4815;
  }
  pUVar3 = Z_Construct_UClass_UCurveBase_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  pUVar11 = pUVar12;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    pUVar11 = param_1;
  }
LAB_1486a4843:
  if (((pUVar13 != (UObject *)0x0) || (pUVar14 != (UObject *)0x0)) || (pUVar11 != (UObject *)0x0)) {
    FAssetData::FAssetData(&local_98,param_1,None);
    GenerateMapName(this,(FAssetData *)local_128);
    if (local_98.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_98.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_98.TagsAndValues);
    if ((param_2) &&
       (pTVar4 = TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                 ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                         *)&this->UIResources,(FName)local_128._0_8_),
       pTVar4 != (TObjectPtr<UObject> *)0x0)) {
      pcVar2 = *(code **)(this->_padding_ + 0xa8);
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)param_1,&local_e8,(UObject *)0x0);
      pFVar6 = FText::FromString(&local_d8,pFVar5);
      pFVar5 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)param_1,(FString *)(local_100 + 8),(UObject *)0x0);
      pFVar7 = FText::FromString(&local_c8,pFVar5);
      pFVar8 = FText::FromName(&local_b8,(FName *)local_128);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)(local_128 + 8),L"SlateWidgetStyleSet",L"LoadingError",
                          L"Encountered multiple Slate Widget Styles with the same name. Name: \'{0}\', First Asset: \'{1}\',  Second Asset: \'{2}\'."
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_a8,pFVar9,Default);
      pFVar6 = FText::Format<FText,FText,FText>((FText *)local_110,pFVar10,pFVar8,pFVar7,pFVar6);
      (*pcVar2)(this,1,pFVar6);
      if ((FName)local_110._0_8_ != (FName)0x0) {
        (**(code **)(*(longlong *)local_110._0_8_ + 0x10))();
      }
      if ((FName)local_128._8_8_ != (FName)0x0) {
        (**(code **)(*(longlong *)local_128._8_8_ + 0x10))();
      }
      if ((TObjectPtr<UObject> *)local_100._8_8_ != (TObjectPtr<UObject> *)0x0) {
        FMemory::Free((void *)local_100._8_8_);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_128._8_8_ = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_110._0_8_ = local_128;
      local_110._8_8_ = (longlong)local_128 + 8;
      TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UObject>_&&>_>
                ((TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  *)&this->UIResources,
                 (TPairInitializer<FName_const_&,TObjectPtr<UObject>_&&> *)local_100,
                 (bool *)local_110);
    }
  }
  return;
}

// AddReferencedObjects @ 1486a5dd0

void __thiscall
FSlateGameResources::AddReferencedObjects(FSlateGameResources *this,FReferenceCollector *param_1)

{
  FReferenceCollector::
  AddReferencedObjects<FName,UObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            (param_1,(TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                      *)&this->_padding_,(UObject *)0x0,(FProperty *)0x0);
  return;
}

// GenerateMapName @ 1486b8ab0

FName __thiscall FSlateGameResources::GenerateMapName(FSlateGameResources *this,FAssetData *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  longlong in_R8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)(in_R8 + 8),&local_28);
  iVar2 = (this->BasePath).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  iVar1 = 0;
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  iVar7 = iVar1;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    iVar7 = local_28.Data.ArrayNum + -1;
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar5 = iVar7;
  if (iVar2 - iVar4 < iVar7) {
    iVar5 = iVar2 - iVar4;
  }
  iVar2 = iVar1;
  if (0 < iVar5) {
    iVar2 = iVar5;
  }
  ::FString::FString(&local_38,(wchar_t *)(FVar6.Data + ((longlong)iVar7 - (longlong)iVar2) * 2));
  if (local_38.Data.ArrayNum < 2) {
    pFVar3 = ::FName::ToString((FName *)(in_R8 + 0x10),&local_18);
    if (&local_38 != pFVar3) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
  }
  else {
    ::FString::AppendChars(&local_38,L"/",1);
    pFVar3 = ::FName::ToString((FName *)(in_R8 + 0x10),&local_18);
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = iVar1;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&param_1->PackageName,(wchar_t *)FVar6.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GenerateMapName @ 1486b8c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall FSlateGameResources::GenerateMapName(FSlateGameResources *this,UObject *param_1)

{
  UObject *in_R8;
  undefined1 auStack_98 [32];
  FAssetData local_78;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  FAssetData::FAssetData(&local_78,in_R8,None);
  GenerateMapName(this,(FAssetData *)param_1);
  if (local_78.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_78.TagsAndValues);
  return (FName)param_1;
}

// GetBrush @ 1486bb420

FSlateBrush * __thiscall
FSlateGameResources::GetBrush
          (FSlateGameResources *this,FName param_1,char *param_2,ISlateStyle *param_3)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  FSlateBrush *pFVar3;
  FName local_res8;
  FName local_res10;
  char *local_res18 [2];
  FName *local_28;
  char **local_20;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 != (char *)0x0) {
    local_28 = &local_res10;
    local_20 = local_res18;
    `FSlateGameResources::GetBrush'::__l2::<lambda_1>::operator()(&local_28);
  }
  GetCleanName(this,&local_res8);
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                    *)&this->UIResources,local_res8);
  if (this_00 != (FObjectPtr_u_0 *)0x0) {
    if (this_00->Handle != (UObject *)0x0) {
      pUVar2 = USlateBrushAsset::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) && (this_00->Handle != (UObject *)0x0)) {
        return (FSlateBrush *)&this_00->Handle[1].field_0x8;
      }
    }
    local_28 = &local_res8;
    `FSlateGameResources::GetBrush'::__l5::<lambda_2>::operator()(&local_28);
    pFVar3 = (FSlateBrush *)(**(code **)(this->_padding_ + 0x78))(this);
    return pFVar3;
  }
  pFVar3 = FSlateStyleSet::GetBrush((FSlateStyleSet *)this,local_res10,local_res18[0],param_3);
  return pFVar3;
}

// GetCleanName @ 1486bbe10

FName __thiscall FSlateGameResources::GetCleanName(FSlateGameResources *this,FName *param_1)

{
  bool bVar1;
  FString *this_00;
  ForAnyElementType FVar2;
  FName *in_R8;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&SplitOn,L"\'");
      atexit(`FSlateGameResources::GetCleanName'::__l2::_dynamic_atexit_destructor_for__SplitOn__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FName::ToString(in_R8,&local_28);
  this_00 = FPaths::GetBaseFilename(&local_18,&local_28,false);
  bVar1 = ::FString::Split(this_00,&SplitOn,(FString *)0x0,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(param_1,(wchar_t *)FVar2.Data);
  }
  else {
    *param_1 = *in_R8;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetCurveFloat @ 1486bd270

UCurveFloat * __thiscall FSlateGameResources::GetCurveFloat(FSlateGameResources *this,FName param_1)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  UCurveFloat *pUVar3;
  FName local_res8;
  FName local_res10;
  FName *local_res18 [2];
  
  local_res10 = param_1;
  GetCleanName(this,&local_res8);
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                    *)&this->UIResources,local_res8);
  if (this_00 == (FObjectPtr_u_0 *)0x0) goto LAB_1486bd2d6;
  if (this_00->Handle == (UObject *)0x0) {
LAB_1486bd2c4:
    pUVar3 = (UCurveFloat *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UCurveFloat_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (!bVar1) goto LAB_1486bd2c4;
    pUVar3 = (UCurveFloat *)this_00->Handle;
  }
  if (pUVar3 != (UCurveFloat *)0x0) {
    return pUVar3;
  }
LAB_1486bd2d6:
  local_res18[0] = &local_res8;
  `FSlateGameResources::GetCurveFloat'::__l2::<lambda_1>::operator()(local_res18);
  return (UCurveFloat *)0x0;
}

// GetCurveLinearColor @ 1486bd300

UCurveLinearColor * __thiscall
FSlateGameResources::GetCurveLinearColor(FSlateGameResources *this,FName param_1)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  UCurveLinearColor *pUVar3;
  FName local_res8;
  FName local_res10;
  FName *local_res18 [2];
  
  local_res10 = param_1;
  GetCleanName(this,&local_res8);
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                    *)&this->UIResources,local_res8);
  if (this_00 == (FObjectPtr_u_0 *)0x0) goto LAB_1486bd366;
  if (this_00->Handle == (UObject *)0x0) {
LAB_1486bd354:
    pUVar3 = (UCurveLinearColor *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UCurveLinearColor_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (!bVar1) goto LAB_1486bd354;
    pUVar3 = (UCurveLinearColor *)this_00->Handle;
  }
  if (pUVar3 != (UCurveLinearColor *)0x0) {
    return pUVar3;
  }
LAB_1486bd366:
  local_res18[0] = &local_res8;
  `FSlateGameResources::GetCurveLinearColor'::__l2::<lambda_1>::operator()(local_res18);
  return (UCurveLinearColor *)0x0;
}

// GetCurveVector @ 1486bd390

UCurveVector * __thiscall
FSlateGameResources::GetCurveVector(FSlateGameResources *this,FName param_1)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  UCurveVector *pUVar3;
  FName local_res8;
  FName local_res10;
  FName *local_res18 [2];
  
  local_res10 = param_1;
  GetCleanName(this,&local_res8);
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                    *)&this->UIResources,local_res8);
  if (this_00 == (FObjectPtr_u_0 *)0x0) goto LAB_1486bd3f6;
  if (this_00->Handle == (UObject *)0x0) {
LAB_1486bd3e4:
    pUVar3 = (UCurveVector *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UCurveVector_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (!bVar1) goto LAB_1486bd3e4;
    pUVar3 = (UCurveVector *)this_00->Handle;
  }
  if (pUVar3 != (UCurveVector *)0x0) {
    return pUVar3;
  }
LAB_1486bd3f6:
  local_res18[0] = &local_res8;
  `FSlateGameResources::GetCurveVector'::__l2::<lambda_1>::operator()(local_res18);
  return (UCurveVector *)0x0;
}

// GetOptionalBrush @ 1486c3430

FSlateBrush * __thiscall
FSlateGameResources::GetOptionalBrush
          (FSlateGameResources *this,FName param_1,char *param_2,FSlateBrush *param_3)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  FSlateBrush *pFVar3;
  FName local_res8;
  FName local_res10;
  char *local_res18 [2];
  FName *local_28;
  char **local_20;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_2 != (char *)0x0) {
    local_28 = &local_res10;
    local_20 = local_res18;
    `FSlateGameResources::GetOptionalBrush'::__l2::<lambda_1>::operator()(&local_28);
  }
  GetCleanName(this,&local_res8);
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                    *)&this->UIResources,local_res8);
  if (this_00 != (FObjectPtr_u_0 *)0x0) {
    if (this_00->Handle != (UObject *)0x0) {
      pUVar2 = USlateBrushAsset::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
      if ((bVar1) && (this_00->Handle != (UObject *)0x0)) {
        return (FSlateBrush *)&this_00->Handle[1].field_0x8;
      }
    }
    local_28 = &local_res8;
    `FSlateGameResources::GetOptionalBrush'::__l5::<lambda_2>::operator()(&local_28);
    return param_3;
  }
  pFVar3 = FSlateStyleSet::GetOptionalBrush
                     ((FSlateStyleSet *)this,local_res10,local_res18[0],param_3);
  return pFVar3;
}

// GetReferencerName @ 1486c6240

FString * __thiscall
FSlateGameResources::GetReferencerName(FSlateGameResources *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSlateGameResources");
  return __return_storage_ptr__;
}

// GetResources @ 1486c6da0

void __thiscall
FSlateGameResources::GetResources
          (FSlateGameResources *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  TMap<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
  *pTVar10;
  FSlateBrush *local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  FSlateStyleSet::GetResources((FSlateStyleSet *)this,param_1);
  pTVar10 = &this->UIResources;
  iStack_48 = 0;
  iVar2 = *(int *)&(this->UIResources).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->UIResources).field_0x10;
  local_30 = 0;
  uStack_44 = 1;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->UIResources).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar9;
    while (uVar3 == 0) {
      lVar7 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_1486c6e4a;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar7;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_1486c6e4a:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = pTVar10;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      lVar8 = *(longlong *)pTVar10;
      lVar7 = (longlong)TStack_70.CurrentBitIndex * 0x18;
      if (*(longlong *)(lVar8 + 8 + lVar7) == 0) {
LAB_1486c6ede:
        lVar8 = 0;
      }
      else {
        pUVar5 = Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar8 + 8 + lVar7),pUVar5);
        if (!bVar4) goto LAB_1486c6ede;
        lVar8 = *(longlong *)(lVar8 + 8 + lVar7);
      }
      lVar7 = lVar7 + *(longlong *)pTVar10;
      if (*(longlong *)(lVar7 + 8) == 0) {
LAB_1486c6f05:
        lVar7 = 0;
      }
      else {
        pUVar5 = USlateBrushAsset::StaticClass();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(lVar7 + 8),pUVar5);
        if (!bVar4) goto LAB_1486c6f05;
        lVar7 = *(longlong *)(lVar7 + 8);
      }
      if ((lVar8 == 0) || (lVar8 = *(longlong *)(lVar8 + 0x28), lVar8 == 0)) {
        if (lVar7 != 0) {
          local_res8 = (FSlateBrush *)(lVar7 + 0x30);
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FSlateBrush_const_*>(param_1,&local_res8);
        }
      }
      else {
        plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6,param_1);
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return;
}

// GetWidgetStyleInternal @ 1486c9b00

FSlateWidgetStyle * __thiscall
FSlateGameResources::GetWidgetStyleInternal
          (FSlateGameResources *this,FName param_1,FName param_2,FSlateWidgetStyle *param_3,
          bool param_4)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  FSlateWidgetStyle *pFVar3;
  USlateWidgetStyleAsset *this_01;
  
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
                    *)&this->UIResources,param_2);
  if (this_00 == (FObjectPtr_u_0 *)0x0) goto LAB_1486c9b6d;
  if (this_00->Handle == (UObject *)0x0) {
LAB_1486c9b5c:
    this_01 = (USlateWidgetStyleAsset *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (!bVar1) goto LAB_1486c9b5c;
    this_01 = (USlateWidgetStyleAsset *)this_00->Handle;
  }
  if (this_01 != (USlateWidgetStyleAsset *)0x0) {
    pFVar3 = USlateWidgetStyleAsset::GetStyleChecked(this_01,param_1);
    return pFVar3;
  }
LAB_1486c9b6d:
  pFVar3 = FSlateStyleSet::GetWidgetStyleInternal
                     ((FSlateStyleSet *)this,param_1,param_2,param_3,param_4);
  return pFVar3;
}

// Initialize @ 1486cf9c0

void __thiscall
FSlateGameResources::Initialize(FSlateGameResources *this,FString *param_1,FString *param_2)

{
  undefined1 *puVar1;
  TMap<FName,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = &this->UIResources;
  bVar4 = 1 < *(int *)&(this->UIResources).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  uVar6 = 0;
  puVar1 = &(this->UIResources).field_0xc;
  *(undefined4 *)&(this->UIResources).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->UIResources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UIResources).field_0x34 = 0;
  iVar2 = *(int *)&(this->UIResources).field_0x2c;
  *(undefined4 *)&(this->UIResources).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->UIResources).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UIResources).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->UIResources).field_0x48 = 1;
    TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  (**(code **)(this->_padding_ + 0xc0))(this,param_1);
  ::FString::operator=(&this->BasePath,param_2);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar4 = EngineUtils::FindOrLoadAssetsByPath((FString *)&this->_padding_,&local_28,ATL_Regular);
  if (bVar4) {
    for (; (-1 < (int)uVar6 && ((int)uVar6 < local_28.ArrayNum)); uVar6 = uVar6 + 1) {
      uVar5 = 0;
      if ((int)uVar6 < local_28.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      AddAssetToCache(this,*(UObject **)(local_28.AllocatorInstance.Data + (longlong)(int)uVar6 * 8)
                      ,true);
    }
  }
  this->HasBeenInitialized = true;
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// Log @ 1486d3030

void __thiscall
FSlateGameResources::Log(FSlateGameResources *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  return;
}

// Log @ 1486d3040

void __thiscall
FSlateGameResources::Log(FSlateGameResources *this,EStyleMessageSeverity param_1,FText *param_2)

{
  return;
}

// New @ 1486d3190

TSharedRef<FSlateGameResources,1> * __cdecl
FSlateGameResources::New
          (TSharedRef<FSlateGameResources,1> *__return_storage_ptr__,FName *param_1,FString *param_2
          ,FString *param_3)

{
  TRawPtrProxy<FSlateGameResources> local_res8;
  
  local_res8.Object = ::operator_new(0x478);
  if (local_res8.Object != (FSlateGameResources *)0x0) {
    FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)local_res8.Object,param_1);
    *(undefined2 *)&(local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::RegisterGCObject((FGCObject *)&(local_res8.Object)->_padding_);
    (local_res8.Object)->_padding_ = (longlong)&_vftable__for__FSlateStyleSet__;
    (local_res8.Object)->_padding_ = (longlong)&_vftable__for__FGCObject__;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x10 = 0;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x18 = 0;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x38 = 0;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x48 = 0;
    *(undefined8 *)&(local_res8.Object)->UIResources = 0;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x8 = 0;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x20 = 0;
    *(undefined4 *)&((local_res8.Object)->UIResources).field_0x28 = 0;
    *(undefined4 *)&((local_res8.Object)->UIResources).field_0x2c = 0x80;
    *(undefined4 *)&((local_res8.Object)->UIResources).field_0x30 = 0xffffffff;
    *(undefined4 *)&((local_res8.Object)->UIResources).field_0x34 = 0;
    *(undefined8 *)&((local_res8.Object)->UIResources).field_0x40 = 0;
    ((local_res8.Object)->BasePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_res8.Object)->BasePath).Data.ArrayNum = 0;
    ((local_res8.Object)->BasePath).Data.ArrayMax = 0;
    (local_res8.Object)->HasBeenInitialized = false;
  }
  TSharedRef<FSlateGameResources,1>::TSharedRef<FSlateGameResources,1><FSlateGameResources>
            (__return_storage_ptr__,&local_res8);
  Initialize(__return_storage_ptr__->Object,param_2,param_3);
  return __return_storage_ptr__;
}

// RemoveAsset @ 1486e78f0

void __thiscall FSlateGameResources::RemoveAsset(FSlateGameResources *this,FAssetData *param_1)

{
  bool bVar1;
  uint uVar2;
  FName FVar3;
  FName local_res18 [2];
  
  bVar1 = ShouldCache(this,param_1);
  if (bVar1) {
    FVar3 = GenerateMapName(this,(FAssetData *)(local_res18 + 1));
    FVar3 = *(FName *)FVar3;
    if (*(int *)&(this->UIResources).field_0x8 != *(int *)&(this->UIResources).field_0x34) {
      local_res18[0] = FVar3;
      uVar2 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)&this->UIResources,FVar3.Number + uVar2,local_res18);
    }
  }
  return;
}

// RemoveAssetFromCache @ 1486e7970

void __thiscall
FSlateGameResources::RemoveAssetFromCache(FSlateGameResources *this,FAssetData *param_1)

{
  bool bVar1;
  uint uVar2;
  FName FVar3;
  FName local_res18 [2];
  
  bVar1 = ShouldCache(this,param_1);
  if (bVar1) {
    FVar3 = GenerateMapName(this,(FAssetData *)(local_res18 + 1));
    FVar3 = *(FName *)FVar3;
    if (*(int *)&(this->UIResources).field_0x8 != *(int *)&(this->UIResources).field_0x34) {
      local_res18[0] = FVar3;
      uVar2 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)&this->UIResources,FVar3.Number + uVar2,local_res18);
    }
  }
  return;
}

// SetContentRoot @ 1486ee160

void __thiscall FSlateGameResources::SetContentRoot(FSlateGameResources *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (1 < (int)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContentRootDir.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateGameResources.cpp"
                       ,0x30,L"You can\'t change the root directory after setting it");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::operator=((FString *)&this->_padding_,param_1);
  return;
}

// ShouldCache @ 1486f0dc0

bool __thiscall FSlateGameResources::ShouldCache(FSlateGameResources *this,FAssetData *param_1)

{
  int iVar1;
  bool bVar2;
  FString *this_00;
  UClass *this_01;
  int iVar3;
  wchar_t *pwVar4;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  this_00 = ::FName::ToString(&param_1->PackageName,&local_18);
  iVar1 = (int)this->_padding_;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)this->_padding_;
  }
  bVar2 = ::FString::StartsWith(this_00,pwVar4,iVar3,CaseSensitive);
  if (bVar2) {
    this_01 = Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
    UStruct::GetStructPathName((UStruct *)this_01,&local_28);
    if (((param_1->AssetClassPath).PackageName == local_28.PackageName) &&
       ((param_1->AssetClassPath).AssetName == local_28.AssetName)) {
      bVar2 = true;
      goto LAB_1486f0e41;
    }
  }
  bVar2 = false;
LAB_1486f0e41:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator() @ 15052eff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `FSlateGameResources::GetBrush'::__l2::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  size_t sVar6;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar3 = false;
  bVar2 = false;
  local_158 = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687222>);
  if (bVar4) {
    _Str = (char *)**(undefined8 **)((longlong)this + 8);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar6 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar6,Yes);
    }
    ::FName::ToString(*(FName **)this,&local_150);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687222>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052f0c7;
    }
  }
  bVar4 = false;
LAB_15052f0c7:
  if ((bVar2) && (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15052f2b0

bool __thiscall `FSlateGameResources::GetCurveFloat'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687253>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687253>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f317;
    }
  }
  bVar2 = false;
LAB_15052f317:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f350

bool __thiscall `FSlateGameResources::GetCurveLinearColor'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687271>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687271>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f3b7;
    }
  }
  bVar2 = false;
LAB_15052f3b7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f3f0

bool __thiscall `FSlateGameResources::GetCurveVector'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687262>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687262>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f457;
    }
  }
  bVar2 = false;
LAB_15052f457:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall `FSlateGameResources::GetOptionalBrush'::__l2::<lambda_1>::operator()(void *this)

{
  char *_Str;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  size_t sVar6;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar3 = false;
  bVar2 = false;
  local_158 = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687236>);
  if (bVar4) {
    _Str = (char *)**(undefined8 **)((longlong)this + 8);
    local_138._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar6 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar6,Yes);
    }
    ::FName::ToString(*(FName **)this,&local_150);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687236>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052f687;
    }
  }
  bVar4 = false;
LAB_15052f687:
  if ((bVar2) && (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && ((void *)local_138._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15052fa30

bool __thiscall `FSlateGameResources::GetBrush'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687228>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687228>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052fa97;
    }
  }
  bVar2 = false;
LAB_15052fa97:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052fad0

bool __thiscall `FSlateGameResources::GetOptionalBrush'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<309094013015687242>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<309094013015687242>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052fb37;
    }
  }
  bVar2 = false;
LAB_15052fb37:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

