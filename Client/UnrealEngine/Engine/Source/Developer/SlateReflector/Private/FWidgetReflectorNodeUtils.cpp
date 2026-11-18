// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 37

// FindLiveWidget @ 142e84720

void __cdecl
FWidgetReflectorNodeUtils::FindLiveWidget
          (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<SWidget_const_,1> *param_2,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar8;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pTVar8 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  iVar1 = param_1->ArrayNum;
  pTVar8 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
  pTVar9 = pTVar8 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar8 == pTVar9) break;
    WidgetReflectorNodeUtilsImpl::FindLiveWidget(param_2,pTVar8,param_3);
    iVar2 = param_3->ArrayNum;
    if (0 < iVar2) {
      pFVar10 = (param_3->AllocatorInstance).Data;
      lVar7 = (longlong)(iVar2 / 2);
      if (0 < iVar2 / 2) {
        pFVar6 = pFVar10 + (longlong)(iVar2 + -1) * 0x10;
        do {
          uVar3 = *(undefined8 *)(pFVar6 + 8);
          uVar4 = *(undefined8 *)pFVar10;
          uVar5 = *(undefined8 *)(pFVar10 + 8);
          *(undefined8 *)pFVar10 = *(undefined8 *)pFVar6;
          *(undefined8 *)(pFVar10 + 8) = uVar3;
          pFVar10 = pFVar10 + 0x10;
          *(undefined8 *)pFVar6 = uVar4;
          *(undefined8 *)(pFVar6 + 8) = uVar5;
          lVar7 = lVar7 + -1;
          pFVar6 = pFVar6 + -0x10;
        } while (lVar7 != 0);
      }
      return;
    }
    pTVar8 = pTVar8 + 1;
  }
  return;
}

// FindLiveWidgetPath @ 142e84a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FWidgetReflectorNodeUtils::FindLiveWidgetPath
          (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1,
          FWidgetPath *param_2,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar1;
  
  pTVar1 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar1,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar1,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  if ((param_2->Widgets).Array.ArrayNum != 0) {
    WidgetReflectorNodeUtilsImpl::FindLiveWidgetPath(param_1,param_2,param_3,0);
  }
  return;
}

// FindSnaphotWidget @ 142e85170

void __cdecl
FWidgetReflectorNodeUtils::FindSnaphotWidget
          (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1,
          ulong64 param_2,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar8;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pTVar8 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  iVar1 = param_1->ArrayNum;
  pTVar8 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
  pTVar9 = pTVar8 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar8 == pTVar9) break;
    WidgetReflectorNodeUtilsImpl::FindSnapshotWidget(param_2,pTVar8,param_3);
    iVar2 = param_3->ArrayNum;
    if (0 < iVar2) {
      pFVar10 = (param_3->AllocatorInstance).Data;
      lVar7 = (longlong)(iVar2 / 2);
      if (0 < iVar2 / 2) {
        pFVar6 = pFVar10 + (longlong)(iVar2 + -1) * 0x10;
        do {
          uVar3 = *(undefined8 *)(pFVar6 + 8);
          uVar4 = *(undefined8 *)pFVar10;
          uVar5 = *(undefined8 *)(pFVar10 + 8);
          *(undefined8 *)pFVar10 = *(undefined8 *)pFVar6;
          *(undefined8 *)(pFVar10 + 8) = uVar3;
          pFVar10 = pFVar10 + 0x10;
          *(undefined8 *)pFVar6 = uVar4;
          *(undefined8 *)(pFVar6 + 8) = uVar5;
          lVar7 = lVar7 + -1;
          pFVar6 = pFVar6 + -0x10;
        } while (lVar7 != 0);
      }
      return;
    }
    pTVar8 = pTVar8 + 1;
  }
  return;
}

// GetWidgetAddress @ 142ea9f10

ulong64 __cdecl FWidgetReflectorNodeUtils::GetWidgetAddress(TSharedPtr<SWidget_const_,1> *param_1)

{
  return (ulong64)param_1->Object;
}

// GetWidgetAssetData @ 142eaa1c0

FAssetData * __cdecl
FWidgetReflectorNodeUtils::GetWidgetAssetData
          (FAssetData *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAssetData *pFVar3;
  UObject *pUVar4;
  TSharedPtr<FReflectionMetaData,1> local_18;
  
  if (param_1->Object != (SWidget *)0x0) {
    SWidget::GetMetaData<FReflectionMetaData>(param_1->Object,&local_18);
    if (local_18.Object != (FReflectionMetaData *)0x0) {
      if (local_18.Object == (FReflectionMetaData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FAssetData *)(*pcVar1)();
          return pFVar3;
        }
      }
      pUVar4 = FWeakObjectPtr::Get(&((local_18.Object)->Asset).WeakPtr);
      if (pUVar4 != (UObject *)0x0) {
        if (local_18.Object == (FReflectionMetaData *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FAssetData *)(*pcVar1)();
            return pFVar3;
          }
        }
        pUVar4 = FWeakObjectPtr::Get(&((local_18.Object)->Asset).WeakPtr);
        FAssetData::FAssetData(__return_storage_ptr__,pUVar4,None);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
  (__return_storage_ptr__->PackagePath).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClass).Number = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
  __return_storage_ptr__->PackageFlags = 0;
  (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
  return __return_storage_ptr__;
}

// GetWidgetAttributeCount @ 142eaa380

int __cdecl
FWidgetReflectorNodeUtils::GetWidgetAttributeCount(TSharedPtr<SWidget_const_,1> *param_1)

{
  FSlateAttributeMetaData *pFVar1;
  
  if (param_1->Object != (SWidget *)0x0) {
    pFVar1 = FSlateAttributeMetaData::FindMetaData(param_1->Object);
    if (pFVar1 != (FSlateAttributeMetaData *)0x0) {
      return (pFVar1->Attributes).ArrayNum;
    }
  }
  return 0;
}

// GetWidgetClippingText @ 142eaa570

FText * __cdecl
FWidgetReflectorNodeUtils::GetWidgetClippingText
          (FText *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  EWidgetClipping EVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res10 [24];
  
  if (param_1->Object != (SWidget *)0x0) {
    EVar1 = param_1->Object->Clipping;
    if (EVar1 == Inherit) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingNo",L"No");
      return __return_storage_ptr__;
    }
    if (EVar1 == ClipToBounds) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingYes",L"Yes");
      return __return_storage_ptr__;
    }
    if (EVar1 == ClipToBoundsWithoutIntersecting) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"WidgetReflectorNode",
                 L"WidgetClippingYesWithoutIntersecting",L"Yes (No Intersect)");
      return __return_storage_ptr__;
    }
    if (EVar1 == ClipToBoundsAlways) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingYesAlways",
                 L"Yes (Always)");
      return __return_storage_ptr__;
    }
    if (EVar1 == OnDemand) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingOnDemand",
                 L"On Demand");
      return __return_storage_ptr__;
    }
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetWidgetCollapsedAttributeCount @ 142eaa730

int __cdecl
FWidgetReflectorNodeUtils::GetWidgetCollapsedAttributeCount(TSharedPtr<SWidget_const_,1> *param_1)

{
  FSlateAttributeMetaData *pFVar1;
  
  if (param_1->Object != (SWidget *)0x0) {
    pFVar1 = FSlateAttributeMetaData::FindMetaData(param_1->Object);
    if (pFVar1 != (FSlateAttributeMetaData *)0x0) {
      return (int)pFVar1->AffectVisibilityCounter;
    }
  }
  return 0;
}

// GetWidgetDesiredSize @ 142eaa810

TVector2<double> * __cdecl
FWidgetReflectorNodeUtils::GetWidgetDesiredSize
          (TVector2<double> *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  FDeprecateSlateVector2D FVar4;
  double dStack_10;
  
  if (param_1->Object == (SWidget *)0x0) {
    dVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    FVar4 = SWidget::GetDesiredSize(param_1->Object);
    dVar2 = (double)(float)*(undefined8 *)FVar4;
    dVar3 = (double)(float)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  }
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dStack_10 = auVar1._8_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_10;
  return __return_storage_ptr__;
}

// GetWidgetEnabled @ 142eaa8e0

bool __cdecl FWidgetReflectorNodeUtils::GetWidgetEnabled(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return (bool)param_1->Object->EnabledStateAttribute;
  }
  return false;
}

// GetWidgetFile @ 142eaaa50

FString * __cdecl
FWidgetReflectorNodeUtils::GetWidgetFile
          (FString *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  FName this;
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_1->Object == (SWidget *)0x0;
  if (bVar2) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    this = SWidget::GetCreatedInLocation(param_1->Object);
    pFVar1 = ::FName::GetPlainNameString((FName *)this,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetWidgetFocusable @ 142eaaba0

bool __cdecl FWidgetReflectorNodeUtils::GetWidgetFocusable(TSharedPtr<SWidget_const_,1> *param_1)

{
  undefined1 uVar1;
  
  if (param_1->Object != (SWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142eaabab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1->Object->_padding_ + 0x198))();
    return (bool)uVar1;
  }
  return false;
}

// GetWidgetForegroundColor @ 142eaac90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __cdecl
FWidgetReflectorNodeUtils::GetWidgetForegroundColor
          (FSlateColor *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  undefined4 uVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  pSVar2 = param_1->Object;
  if (pSVar2 == (SWidget *)0x0) {
    puVar4 = &local_28;
    local_28 = ___xmm_3f8000003f800000000000003f800000;
    uStack_20 = _UNK_15090c6d8;
    local_18 = 2;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(pSVar2->_padding_ + 0x1f8))(pSVar2,&local_28);
  }
  uVar3 = puVar4[1];
  uVar1 = *(undefined4 *)(puVar4 + 2);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = *puVar4;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
  __return_storage_ptr__->ColorUseRule = (char)uVar1;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar1 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar1 >> 0x10);
  return __return_storage_ptr__;
}

// GetWidgetHasActiveTimers @ 142eaad80

bool __cdecl
FWidgetReflectorNodeUtils::GetWidgetHasActiveTimers(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return param_1->Object->bHasActiveTimers;
  }
  return false;
}

// GetWidgetIsInvalidationRoot @ 142eaae30

bool __cdecl
FWidgetReflectorNodeUtils::GetWidgetIsInvalidationRoot(TSharedPtr<SWidget_const_,1> *param_1)

{
  undefined1 uVar1;
  
  if (param_1->Object != (SWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142eaae3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1->Object->_padding_ + 0x210))();
    return (bool)uVar1;
  }
  return false;
}

// GetWidgetIsVolatile @ 142eaaee0

bool __cdecl FWidgetReflectorNodeUtils::GetWidgetIsVolatile(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return param_1->Object->bCachedVolatile;
  }
  return false;
}

// GetWidgetIsVolatileIndirectly @ 142eaaf90

bool __cdecl
FWidgetReflectorNodeUtils::GetWidgetIsVolatileIndirectly(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return param_1->Object->bInheritedVolatility;
  }
  return false;
}

// GetWidgetLayerId @ 142eab030

int __cdecl FWidgetReflectorNodeUtils::GetWidgetLayerId(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return (param_1->Object->PersistentState).LayerId;
  }
  return -1;
}

// GetWidgetLayerIdOut @ 142eab0d0

int __cdecl FWidgetReflectorNodeUtils::GetWidgetLayerIdOut(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return (param_1->Object->PersistentState).OutgoingLayerId;
  }
  return -1;
}

// GetWidgetLineNumber @ 142eab180

int __cdecl FWidgetReflectorNodeUtils::GetWidgetLineNumber(TSharedPtr<SWidget_const_,1> *param_1)

{
  FName FVar1;
  
  if (param_1->Object != (SWidget *)0x0) {
    FVar1 = SWidget::GetCreatedInLocation(param_1->Object);
    return *(int *)((longlong)FVar1 + 4);
  }
  return 0;
}

// GetWidgetNeedsTick @ 142eab240

bool __cdecl FWidgetReflectorNodeUtils::GetWidgetNeedsTick(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return (bool)(param_1->Object->UpdateFlags >> 2 & 1);
  }
  return false;
}

// GetWidgetReadableLocation @ 142eab340

FText * __cdecl
FWidgetReflectorNodeUtils::GetWidgetReadableLocation
          (FText *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FReflectionMetaData::GetWidgetDebugInfo(&local_18,param_1->Object);
  FText::FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetWidgetSupportsInvalidation @ 142eab970

bool __cdecl
FWidgetReflectorNodeUtils::GetWidgetSupportsInvalidation(TSharedPtr<SWidget_const_,1> *param_1)

{
  return false;
}

// GetWidgetSupportsInvalidationRecursive @ 142eab980

bool __cdecl
FWidgetReflectorNodeUtils::GetWidgetSupportsInvalidationRecursive
          (TSharedPtr<SWidget_const_,1> *param_1)

{
  return false;
}

// GetWidgetType @ 142eaba70

FText * __cdecl
FWidgetReflectorNodeUtils::GetWidgetType
          (FText *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  undefined4 local_res8 [2];
  FText local_38;
  FText local_28;
  FString local_18;
  
  local_res8[0] = 0;
  if (param_1->Object == (SWidget *)0x0) {
    pFVar7 = FText::GetEmpty();
    TVar8.Reference = (pFVar7->TextData).Reference;
    local_38.TextData.Reference = TVar8.Reference;
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_res8);
    }
    pFVar6 = &local_38;
    local_38.Flags = pFVar7->Flags;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    pFVar5 = SWidget::GetTypeAsString(param_1->Object,&local_18);
    pFVar6 = FText::FromString(&local_28,pFVar5);
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    TVar8.Reference = local_38.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  if ((bVar2) && (TVar8.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
  }
  if (bVar3) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetWidgetTypeAndShortName @ 142eabfd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName
          (FText *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_68;
  TSharedPtr<FReflectionMetaData,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (param_1->Object == (SWidget *)0x0) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    return __return_storage_ptr__;
  }
  GetWidgetType(&local_68,param_1);
  if ((param_1->Object == (SWidget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar2)();
    return pFVar4;
  }
  SWidget::GetMetaData<FReflectionMetaData>(param_1->Object,&local_58);
  if (local_58.Object != (FReflectionMetaData *)0x0) {
    if ((local_58.Object == (FReflectionMetaData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    if ((local_58.Object)->Name != (FName)0x0) {
      pFVar4 = FText::FromName(&local_28,&(local_58.Object)->Name);
      local_48.TextData.Reference = local_68.TextData.Reference;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 8))
                  (local_68.TextData.Reference,local_res10);
      }
      local_48.Flags = local_68.Flags;
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"WidgetReflectorNode",L"WidgetTypeAndName",L"{0} ({1})");
      pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
      FText::Format<FText,FText>(__return_storage_ptr__,pFVar6,&local_48,pFVar4);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      goto LAB_142eac119;
    }
  }
  FText::FText(__return_storage_ptr__,&local_68);
LAB_142eac119:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetWidgetVisibility @ 142eac190

bool __cdecl FWidgetReflectorNodeUtils::GetWidgetVisibility(TSharedPtr<SWidget_const_,1> *param_1)

{
  if (param_1->Object != (SWidget *)0x0) {
    return ((byte)param_1->Object->VisibilityAttribute & 0x19) != 0;
  }
  return false;
}

// GetWidgetVisibilityInherited @ 142eac260

bool __cdecl
FWidgetReflectorNodeUtils::GetWidgetVisibilityInherited(TSharedPtr<SWidget_const_,1> *param_1)

{
  SWidget *pSVar1;
  FSlateInvalidationWidgetVisibility FVar2;
  undefined7 extraout_var;
  FWidgetProxyHandle local_28;
  
  pSVar1 = param_1->Object;
  if (pSVar1 != (SWidget *)0x0) {
    local_28.InvalidationRootHandle.InvalidationRoot =
         (pSVar1->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_28.InvalidationRootHandle.UniqueId =
         (pSVar1->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_28.InvalidationRootHandle._12_4_ =
         *(undefined4 *)&(pSVar1->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
    local_28.WidgetIndex = (pSVar1->FastPathProxyHandle).WidgetIndex;
    local_28.WidgetSortOrder.Order = (pSVar1->FastPathProxyHandle).WidgetSortOrder.Order;
    FVar2 = FWidgetProxyHandle::GetWidgetVisibility(&local_28,(SWidget *)&stack0x00000008);
    return (*(byte *)CONCAT71(extraout_var,FVar2.field0_0x0) & 3) == 3;
  }
  return false;
}

// GetWidgetVisibilityText @ 142eac390

FText * __cdecl
FWidgetReflectorNodeUtils::GetWidgetVisibilityText
          (FText *__return_storage_ptr__,TSharedPtr<SWidget_const_,1> *param_1)

{
  ITextData *pIVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  TRefCountPtr<ITextData> TVar8;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  FText local_48;
  FText local_38;
  FString local_28;
  
  local_res8[0] = 0;
  if (param_1->Object == (SWidget *)0x0) {
    pFVar7 = FText::GetEmpty();
    TVar8.Reference = (pFVar7->TextData).Reference;
    local_48.TextData.Reference = TVar8.Reference;
    if (TVar8.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_res10);
    }
    pFVar6 = &local_48;
    local_48.Flags = pFVar7->Flags;
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_res8[0] = (uint)(byte)param_1->Object->VisibilityAttribute;
    pFVar5 = EVisibility::ToString((EVisibility *)local_res8,&local_28);
    pFVar6 = FText::FromString(&local_38,pFVar5);
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    TVar8.Reference = local_48.TextData.Reference;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  if ((bVar2) && (TVar8.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
  }
  if (bVar3) {
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasValidWidgetAssetData @ 142eba2a0

bool __cdecl
FWidgetReflectorNodeUtils::HasValidWidgetAssetData(TSharedPtr<SWidget_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FReflectionMetaData,1> local_18;
  
  if (param_1->Object != (SWidget *)0x0) {
    SWidget::GetMetaData<FReflectionMetaData>(param_1->Object,&local_18);
    if (local_18.Object != (FReflectionMetaData *)0x0) {
      if (local_18.Object == (FReflectionMetaData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = FWeakObjectPtr::IsValid(&((local_18.Object)->Asset).WeakPtr);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return bVar2;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// NewLiveNode @ 142ec43b0

TSharedRef<FLiveWidgetReflectorNode,1> * __cdecl
FWidgetReflectorNodeUtils::NewLiveNode
          (TSharedRef<FLiveWidgetReflectorNode,1> *__return_storage_ptr__,FArrangedWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  pTVar2 = NewNode(&local_18,Live,param_1);
  __return_storage_ptr__->Object = (FLiveWidgetReflectorNode *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NewLiveNodeTreeFrom @ 142ec4400

TSharedRef<FLiveWidgetReflectorNode,1> * __cdecl
FWidgetReflectorNodeUtils::NewLiveNodeTreeFrom
          (TSharedRef<FLiveWidgetReflectorNode,1> *__return_storage_ptr__,FArrangedWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  pTVar2 = NewNodeTreeFrom(&local_18,Live,param_1);
  __return_storage_ptr__->Object = (FLiveWidgetReflectorNode *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NewNode @ 142ec4450

TSharedRef<FWidgetReflectorNodeBase,1> * __cdecl
FWidgetReflectorNodeUtils::NewNode
          (TSharedRef<FWidgetReflectorNodeBase,1> *__return_storage_ptr__,
          EWidgetReflectorNodeType param_1,FArrangedWidget *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar4;
  TSharedRef<FLiveWidgetReflectorNode,1> *pTVar5;
  FSnapshotWidgetReflectorNode *this;
  TRawPtrProxy<FSnapshotWidgetReflectorNode> local_res20;
  TSharedRef<FSnapshotWidgetReflectorNode,1> local_38;
  TSharedRef<FLiveWidgetReflectorNode,1> local_28;
  TSharedRef<FLiveWidgetReflectorNode,1> local_18;
  
  if (param_1 == Live) {
    pTVar5 = FLiveWidgetReflectorNode::Create(&local_18,param_2);
    __return_storage_ptr__->Object = (FWidgetReflectorNodeBase *)pTVar5->Object;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    if (param_1 != Snapshot) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                         ,0x31b,L"");
      if (!bVar3) {
        pTVar5 = FLiveWidgetReflectorNode::Create(&local_28,param_2);
        __return_storage_ptr__->Object = (FWidgetReflectorNodeBase *)pTVar5->Object;
        pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar2)();
      return pTVar4;
    }
    this = ::operator_new(0x198);
    local_res20.Object = (FSnapshotWidgetReflectorNode *)0x0;
    if (this != (FSnapshotWidgetReflectorNode *)0x0) {
      local_res20.Object = FSnapshotWidgetReflectorNode::FSnapshotWidgetReflectorNode(this,param_2);
    }
    TSharedRef<FSnapshotWidgetReflectorNode,1>::
    TSharedRef<FSnapshotWidgetReflectorNode,1><FSnapshotWidgetReflectorNode>(&local_38,&local_res20)
    ;
    __return_storage_ptr__->Object = (FWidgetReflectorNodeBase *)local_38.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NewNodeTreeFrom @ 142ec4570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<FWidgetReflectorNodeBase,1> * __cdecl
FWidgetReflectorNodeUtils::NewNodeTreeFrom
          (TSharedRef<FWidgetReflectorNodeBase,1> *__return_storage_ptr__,
          EWidgetReflectorNodeType param_1,FArrangedWidget *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  FWidgetReflectorNodeBase *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar10;
  FGeometry *pFVar11;
  atomic<int> *paVar12;
  int iVar13;
  undefined1 auStackY_1a8 [32];
  SWidget *local_170;
  TReferenceControllerBase<1> *local_168;
  TSharedRef<FWidgetReflectorNodeBase,1> local_160;
  FArrangedWidget local_148;
  TSharedRef<FWidgetReflectorNodeBase,1> local_f8;
  FGeometry local_e8;
  FGeometry local_b0;
  FGeometry local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  NewNode(__return_storage_ptr__,param_1,param_2);
  pTVar1 = (param_2->Widget).SharedReferenceCount.ReferenceController;
  pSVar2 = (param_2->Widget).Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar12 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  plVar9 = (longlong *)(**(code **)(pSVar2->_padding_ + 400))(pSVar2);
  pFVar3 = __return_storage_ptr__->Object;
  pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  if (plVar9 == (longlong *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7338620222774969150>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                       ,0x33e,"Children");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  else {
    iVar13 = 0;
    iVar8 = (**(code **)*plVar9)(plVar9);
    if (0 < iVar8) {
      do {
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_170,iVar13);
        pFVar11 = SWidget::GetCachedGeometry(local_170);
        local_e8.Size = pFVar11->Size;
        local_e8._8_8_ = *(undefined8 *)&pFVar11->Scale;
        local_e8._16_8_ = *(undefined8 *)((longlong)&(pFVar11->AbsolutePosition).field0_0x0 + 4);
        local_e8._24_8_ = *(undefined8 *)((longlong)&(pFVar11->Position).field0_0x0 + 4);
        local_e8.AccumulatedRenderTransform.M.M[0][1] =
             (pFVar11->AccumulatedRenderTransform).M.M[0][1];
        local_e8.AccumulatedRenderTransform.M.M[1][0] =
             (pFVar11->AccumulatedRenderTransform).M.M[1][0];
        local_e8.AccumulatedRenderTransform.M.M[1][1] =
             (pFVar11->AccumulatedRenderTransform).M.M[1][1];
        local_e8.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X =
             (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_e8._48_8_ =
             *(undefined8 *)((longlong)&(pFVar11->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
        if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&local_170->VisibilityAttribute ==
            EVisibility::Collapsed.Value.Value) {
          pFVar11 = &local_b0;
LAB_142ec46b7:
          pFVar11 = FGeometry::FGeometry(pFVar11);
          FGeometry::operator=(&local_e8,pFVar11);
        }
        else {
          cVar7 = (**(code **)(pSVar2->_padding_ + 0x158))(pSVar2);
          if (cVar7 == '\0') {
            pFVar11 = &local_78;
            goto LAB_142ec46b7;
          }
        }
        if (local_168 == (TReferenceControllerBase<1> *)0x0) {
          paVar12 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar12 = &local_168->SharedReferenceCount;
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        local_148.Widget.Object = local_170;
        local_148.Widget.SharedReferenceCount.ReferenceController = local_168;
        local_148.Geometry.Size = local_e8.Size;
        local_148.Geometry._8_8_ = local_e8._8_8_;
        local_148.Geometry._16_8_ = local_e8._16_8_;
        local_148.Geometry._24_8_ = local_e8._24_8_;
        local_148.Geometry._48_8_ = local_e8._48_8_;
        local_148.Geometry.AccumulatedRenderTransform.M.M[1][0] =
             local_e8.AccumulatedRenderTransform.M.M[1][0];
        local_148.Geometry.AccumulatedRenderTransform.M.M[0][1] =
             local_e8.AccumulatedRenderTransform.M.M[0][1];
        local_148.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._0_4_ =
             local_e8.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
        local_148.Geometry.AccumulatedRenderTransform.M.M[1][1] =
             local_e8.AccumulatedRenderTransform.M.M[1][1];
        if (local_168 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168);
        pTVar10 = NewNodeTreeFrom(&local_f8,param_1,&local_148);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_160.Object = pFVar3;
        local_160.SharedReferenceCount.ReferenceController = pTVar4;
        FWidgetReflectorNodeBase::AddChildNode(&local_160,pTVar10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168);
        iVar13 = iVar13 + 1;
        iVar8 = (**(code **)*plVar9)(plVar9);
      } while (iVar13 < iVar8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// NewSnapshotNode @ 142ec47c0

TSharedRef<FSnapshotWidgetReflectorNode,1> * __cdecl
FWidgetReflectorNodeUtils::NewSnapshotNode
          (TSharedRef<FSnapshotWidgetReflectorNode,1> *__return_storage_ptr__,
          FArrangedWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  pTVar2 = NewNode(&local_18,Snapshot,param_1);
  __return_storage_ptr__->Object = (FSnapshotWidgetReflectorNode *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NewSnapshotNodeTreeFrom @ 142ec4810

TSharedRef<FSnapshotWidgetReflectorNode,1> * __cdecl
FWidgetReflectorNodeUtils::NewSnapshotNodeTreeFrom
          (TSharedRef<FSnapshotWidgetReflectorNode,1> *__return_storage_ptr__,
          FArrangedWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  pTVar2 = NewNodeTreeFrom(&local_18,Snapshot,param_1);
  __return_storage_ptr__->Object = (FSnapshotWidgetReflectorNode *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// WidgetAddressToString @ 142f18a80

FString * __cdecl
FWidgetReflectorNodeUtils::WidgetAddressToString(FString *__return_storage_ptr__,ulong64 param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"0x%0llx");
  return __return_storage_ptr__;
}

