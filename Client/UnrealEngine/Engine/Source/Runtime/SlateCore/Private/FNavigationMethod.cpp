// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// DrawDebug @ 1424c4720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationMethod::DrawDebug
          (FNavigationMethod *this,int param_1,FGeometry *param_2,FSlateWindowElementList *param_3)

{
  return;
}

// StaticStruct @ 1424c6fb0

UScriptStruct * __cdecl FNavigationMethod::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationMethod,(UObject *)pUVar1,
                         L"NavigationMethod");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationMethod.OuterSingleton;
}

// Initialize @ 1424c6ff0

void __thiscall
FNavigationMethod::Initialize
          (FNavigationMethod *this,FHittestGrid *param_1,
          TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->DisabledDestinations;
  this->HittestGrid = param_1;
  this->IntermediateResultsPtr = param_2;
  bVar3 = 1 < (this->DisabledDestinations).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->DisabledDestinations).Elements.field_0x8);
  puVar1 = &(this->DisabledDestinations).Elements.field_0xc;
  *(undefined4 *)&(this->DisabledDestinations).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DisabledDestinations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisabledDestinations).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->DisabledDestinations).Elements.field_0x2c;
  *(undefined4 *)&(this->DisabledDestinations).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DisabledDestinations).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->DisabledDestinations).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->DisabledDestinations).HashSize = 1;
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  return;
}

// FindNextFocusableWidget @ 1424c70c0

TSharedPtr<SWidget,1> * __thiscall
FNavigationMethod::FindNextFocusableWidget
          (FNavigationMethod *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FArrangedWidget *param_1,EUINavigation param_2,FNavigationReply *param_3,
          FArrangedWidget *param_4,int param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (param_1->Widget).Object;
  pTVar1 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// ~FNavigationMethod @ 1424ec810

void __thiscall FNavigationMethod::~FNavigationMethod(FNavigationMethod *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->DisabledDestinations).HashSize = 0;
  FVar1 = (this->DisabledDestinations).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledDestinations).Elements);
  return;
}

// AddDebugIntermediateResult @ 1424fd850

void __thiscall
FNavigationMethod::AddDebugIntermediateResult
          (FNavigationMethod *this,TSharedPtr<SWidget_const_,1> *param_1,FText *param_2)

{
  uint uVar1;
  TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
  *pTVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pTVar2 = this->IntermediateResultsPtr;
  if (pTVar2 != (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    iVar5 = pTVar2->ArrayNum;
    if (iVar5 == pTVar2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
    pTVar2->ArrayNum = iVar5 + 1;
    pIVar3 = (param_2->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    uVar1 = param_2->Flags;
    *(SWidget **)pFVar6 = param_1->Object;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(ITextData **)(pFVar6 + 0x10) = pIVar3;
    if (pIVar3 == (ITextData *)0x0) {
      *(uint *)(pFVar6 + 0x18) = uVar1;
    }
    else {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      *(uint *)(pFVar6 + 0x18) = uVar1;
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  pIVar3 = (param_2->TextData).Reference;
  if (pIVar3 == (ITextData *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424fd929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 0x10))();
  return;
}

// ForEachFocusableWidgetsInCell @ 14250b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavigationMethod::ForEachFocusableWidgetsInCell
          (FNavigationMethod *this,int param_1,int param_2,FNavigationReply *param_3,int param_4,
          TFunction<bool___cdecl(TSharedPtr<SWidget,1>)> *param_5)

{
  SWidget *pSVar1;
  TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
  *pTVar2;
  SWidget *pSVar3;
  FHittestGrid *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  TRefCountPtr<ITextData> TVar8;
  bool bVar9;
  char cVar10;
  atomic<int> aVar11;
  int iVar12;
  FWidgetData *pFVar13;
  undefined8 uVar14;
  ForElementType<FHittestGrid::FWidgetIndex> FVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  FScriptContainerElement *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined1 auStack_7e8 [32];
  longlong local_7c8;
  longlong local_7c0;
  uint local_7b8;
  FNavigationReply *local_7b0;
  TFunction<bool___cdecl(TSharedPtr<SWidget,1>)> *local_7a8;
  FNavigationMethod *local_7a0;
  TReferenceControllerBase<1> *local_798;
  longlong local_790;
  longlong local_788;
  undefined1 local_780 [4];
  undefined1 local_77c [4];
  undefined1 local_778 [4];
  undefined1 local_774 [4];
  undefined1 local_770 [4];
  undefined1 local_76c [4];
  undefined1 local_768 [4];
  undefined1 local_764 [4];
  TReferenceControllerBase<1> *local_760;
  SWidget *local_750;
  TReferenceControllerBase<1> *local_748;
  FText local_740;
  TSharedPtr<SWidget_const_,1> local_730;
  FText local_720;
  TSharedPtr<SWidget_const_,1> local_710;
  FText local_700;
  TSharedPtr<SWidget_const_,1> local_6f0;
  TSharedPtr<SWidget_const_,1> local_6e0;
  FText local_6d0;
  TSharedPtr<SWidget_const_,1> local_6c0;
  FText local_6b0;
  TSharedPtr<SWidget_const_,1> local_6a0;
  TArray<FHittestGrid::FWidgetIndex,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  local_690;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_7e8;
  bVar6 = false;
  bVar5 = false;
  local_7a8 = param_5;
  local_7b8 = 0;
  local_7b0 = param_3;
  local_7a0 = this;
  if ((this->HittestGrid == (FHittestGrid *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HittestGrid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethod.cpp"
                         ,0x3c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_690.AllocatorInstance.SecondaryData = (ForElementType<FHittestGrid::FWidgetIndex>)0x0;
  local_690.ArrayNum = 0;
  local_690.ArrayMax = 100;
  FHittestGrid::GetCollapsedWidgets(this->HittestGrid,&local_690,param_1,param_2);
  local_7b8 = local_690.ArrayNum - 1;
  if (-1 < (int)local_7b8) {
    local_790 = (longlong)(int)local_7b8;
    lVar18 = local_790 << 4;
    do {
      uVar17 = 0;
      if ((int)local_7b8 < local_690.ArrayNum) {
        uVar17 = ~local_7b8 >> 0x1f;
      }
      local_788 = lVar18;
      if (uVar17 == 0) {
        local_7c0 = (longlong)local_690.ArrayNum;
        local_7c8 = local_790;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar15 = (ForElementType<FHittestGrid::FWidgetIndex>)&local_690;
      if (local_690.AllocatorInstance.SecondaryData !=
          (ForElementType<FHittestGrid::FWidgetIndex>)0x0) {
        FVar15 = local_690.AllocatorInstance.SecondaryData;
      }
      pFVar13 = FHittestGrid::FWidgetIndex::GetWidgetData
                          ((FWidgetIndex *)((longlong)FVar15 + lVar18));
      pTVar19 = (pFVar13->WeakWidget).WeakReferenceCount.ReferenceController;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar19->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) {
            pTVar19 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14250b4c0;
          }
          LOCK();
          aVar11 = pTVar19->SharedReferenceCount;
          bVar9 = aVar7 == aVar11;
          if (bVar9) {
            pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar11 = aVar7;
          }
          TVar8.Reference = FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference;
          UNLOCK();
          aVar7 = aVar11;
        } while (!bVar9);
        pSVar1 = (pFVar13->WeakWidget).Object;
        if (pSVar1 != (SWidget *)0x0) {
          if (((param_4 == -1) || (pFVar13->UserIndex == -1)) || (param_4 == pFVar13->UserIndex)) {
            pTVar21 = local_760;
            pTVar22 = local_798;
            if (param_3->BoundaryRule == Escape) {
LAB_14250b654:
              bVar9 = false;
            }
            else {
              pTVar21 = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
              bVar6 = true;
              pSVar3 = (param_3->EventHandler).Object;
              if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar21->SharedReferenceCount =
                     (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_760 = pTVar21;
              if (pSVar3 == (SWidget *)0x0) goto LAB_14250b654;
              pSVar3 = (param_3->EventHandler).Object;
              bVar6 = true;
              bVar5 = true;
              pTVar22 = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
              this_00 = this->HittestGrid;
              if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar22->SharedReferenceCount =
                     (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_798 = pTVar22;
              bVar9 = FHittestGrid::IsDescendantOf(this_00,pSVar3,pFVar13);
              if (bVar9) goto LAB_14250b654;
              bVar9 = true;
            }
            if (bVar5) {
              bVar5 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar22);
            }
            if (bVar6) {
              bVar6 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar21);
            }
            if (bVar9) {
              local_740.TextData.Reference = FDebuggingText::NotADescendant.TextData.Reference;
              if (FDebuggingText::NotADescendant.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*FDebuggingText::NotADescendant.TextData.Reference + 8))
                          (FDebuggingText::NotADescendant.TextData.Reference,local_774);
              }
              local_740.Flags = FDebuggingText::NotADescendant.Flags;
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
              local_730.Object = pSVar1;
              local_730.SharedReferenceCount.ReferenceController = pTVar19;
              AddDebugIntermediateResult(this,&local_730,&local_740);
LAB_14250b6c3:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              param_5 = local_7a8;
              param_3 = local_7b0;
            }
            else if (pSVar1->EnabledStateAttribute ==
                     (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)
            {
              local_720.TextData.Reference = FDebuggingText::Disabled.TextData.Reference;
              if (FDebuggingText::Disabled.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*FDebuggingText::Disabled.TextData.Reference + 8))
                          (FDebuggingText::Disabled.TextData.Reference,local_770);
              }
              local_720.Flags = FDebuggingText::Disabled.Flags;
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
              local_710.Object = pSVar1;
              local_710.SharedReferenceCount.ReferenceController = pTVar19;
              AddDebugIntermediateResult(this,&local_710,&local_720);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              param_5 = local_7a8;
              param_3 = local_7b0;
            }
            else {
              cVar10 = (**(code **)(pSVar1->_padding_ + 0x198))(pSVar1);
              if (cVar10 == '\0') {
                local_700.TextData.Reference =
                     FDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference;
                if (FDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference !=
                    (ITextData *)0x0) {
                  (**(code **)((longlong)
                               *FDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference + 8))
                            (FDebuggingText::DoesNotSuportKeyboardFocus.TextData.Reference,local_76c
                            );
                }
                local_700.Flags = FDebuggingText::DoesNotSuportKeyboardFocus.Flags;
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
                local_6f0.Object = pSVar1;
                local_6f0.SharedReferenceCount.ReferenceController = pTVar19;
                AddDebugIntermediateResult(this,&local_6f0,&local_700);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar19);
                param_5 = local_7a8;
                param_3 = local_7b0;
              }
              else {
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
                uVar17 = ((uint)((ulonglong)pSVar1 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pSVar1 >> 4)) * -0x7a143595;
                uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
                local_6e0.Object = pSVar1;
                local_6e0.SharedReferenceCount.ReferenceController = pTVar19;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar19);
                iVar12 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                                   (&this->DisabledDestinations,uVar17 >> 0x10 ^ uVar17,&local_6e0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar19);
                param_5 = local_7a8;
                if (iVar12 != -1) {
                  local_6d0.TextData.Reference = FDebuggingText::ParentDisabled.TextData.Reference;
                  if (FDebuggingText::ParentDisabled.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*FDebuggingText::ParentDisabled.TextData.Reference + 8))
                              (FDebuggingText::ParentDisabled.TextData.Reference,local_768);
                  }
                  this = local_7a0;
                  local_6d0.Flags = FDebuggingText::ParentDisabled.Flags;
                  LOCK();
                  pTVar19->SharedReferenceCount =
                       (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                  UNLOCK();
                  local_6c0.Object = pSVar1;
                  local_6c0.SharedReferenceCount.ReferenceController = pTVar19;
                  AddDebugIntermediateResult(local_7a0,&local_6c0,&local_6d0);
                  goto LAB_14250b6c3;
                }
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
                local_750 = pSVar1;
                local_748 = pTVar19;
                UE::Core::Private::Function::CheckCallable(*(void **)local_7a8);
                pcVar4 = *(code **)param_5;
                plVar16 = *(longlong **)&param_5->field_0x28;
                if (*(longlong **)&param_5->field_0x28 == (longlong *)0x0) {
                  plVar16 = (longlong *)&param_5->field_0x10;
                }
                uVar14 = (**(code **)(*plVar16 + 8))();
                cVar10 = (*pcVar4)(uVar14,&local_750);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_748);
                this = local_7a0;
                param_3 = local_7b0;
                if (cVar10 != '\0') {
                  local_6b0.TextData.Reference = FDebuggingText::Valid.TextData.Reference;
                  if (FDebuggingText::Valid.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*FDebuggingText::Valid.TextData.Reference + 8))
                              (FDebuggingText::Valid.TextData.Reference,local_764);
                  }
                  this = local_7a0;
                  local_6b0.Flags = FDebuggingText::Valid.Flags;
                  LOCK();
                  pTVar19->SharedReferenceCount =
                       (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                  UNLOCK();
                  local_6a0.Object = pSVar1;
                  local_6a0.SharedReferenceCount.ReferenceController = pTVar19;
                  AddDebugIntermediateResult(local_7a0,&local_6a0,&local_6b0);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar19);
                  param_3 = local_7b0;
                }
              }
            }
          }
          else {
            if (FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference
                          + 8))(FDebuggingText::NotCompatibleWithUserIndex.TextData.Reference,
                                local_780);
            }
            uVar17 = FDebuggingText::NotCompatibleWithUserIndex.Flags;
            LOCK();
            pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
            UNLOCK();
            pTVar2 = this->IntermediateResultsPtr;
            if (pTVar2 == (TArray<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,TSizedDefaultAllocator<32>_>
                           *)0x0) {
              if (TVar8.Reference != (ITextData *)0x0) goto LAB_14250b5d3;
            }
            else {
              iVar12 = pTVar2->ArrayNum;
              if (iVar12 == pTVar2->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
              }
              pTVar2->ArrayNum = iVar12 + 1;
              pFVar20 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x20;
              if (TVar8.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_77c);
              }
              *(SWidget **)pFVar20 = pSVar1;
              *(TReferenceControllerBase<1> **)(pFVar20 + 8) = pTVar19;
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
              *(ITextData **)(pFVar20 + 0x10) = TVar8.Reference;
              if (TVar8.Reference == (ITextData *)0x0) {
                *(uint *)(pFVar20 + 0x18) = uVar17;
              }
              else {
                (**(code **)((longlong)*TVar8.Reference + 8))(TVar8.Reference,local_778);
                *(uint *)(pFVar20 + 0x18) = uVar17;
                (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
LAB_14250b5d3:
                (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            this = local_7a0;
            param_3 = local_7b0;
          }
        }
      }
LAB_14250b4c0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
      local_7b8 = local_7b8 - 1;
      local_790 = local_790 + -1;
      lVar18 = local_788 + -0x10;
      local_788 = lVar18;
    } while (-1 < (int)local_7b8);
  }
  if (local_690.AllocatorInstance.SecondaryData != (ForElementType<FHittestGrid::FWidgetIndex>)0x0)
  {
    FMemory::Free((void *)local_690.AllocatorInstance.SecondaryData);
  }
  if (*(longlong *)param_5 != 0) {
    plVar16 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return;
}

// GetCellCoordinate @ 14250c940

TIntPoint<int> __thiscall
FNavigationMethod::GetCellCoordinate(FNavigationMethod *this,TVector2<float> param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TIntPoint<int> TVar6;
  int iVar7;
  undefined8 in_R8;
  int iVar8;
  float local_res8;
  float fStackX_c;
  
  if (this->HittestGrid == (FHittestGrid *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HittestGrid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethod.cpp"
                       ,0x23,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar6.field0_0x0;
    }
  }
  fStackX_c = (float)((ulonglong)in_R8 >> 0x20);
  iVar8 = (this->HittestGrid->NumCells).field0_0x0._s_0.Y + -1;
  local_res8 = (float)in_R8;
  iVar4 = (int)ROUND((fStackX_c / FHittestGrid::CellSize.field0_0x0._s_0.Y +
                     fStackX_c / FHittestGrid::CellSize.field0_0x0._s_0.Y) - __real_3f000000) >> 1;
  iVar2 = 0;
  if (0 < iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = (this->HittestGrid->NumCells).field0_0x0._s_0.X + -1;
  iVar5 = (int)ROUND((local_res8 / FHittestGrid::CellSize.field0_0x0._s_0.X +
                     local_res8 / FHittestGrid::CellSize.field0_0x0._s_0.X) - __real_3f000000) >> 1;
  iVar7 = 0;
  if (0 < iVar5) {
    iVar7 = iVar5;
  }
  if (iVar7 < iVar4) {
    iVar4 = iVar7;
  }
  *(int *)param_1.field0_0x0 = iVar4;
  if (iVar2 < iVar8) {
    iVar8 = iVar2;
  }
  *(int *)((longlong)param_1.field0_0x0 + 4) = iVar8;
  return (TIntPoint<int>)param_1.field0_0x0;
}

// IsParentsEnabled @ 142511450

bool __thiscall FNavigationMethod::IsParentsEnabled(FNavigationMethod *this,SWidget *param_1)

{
  FSlateWidgetPersistentState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  if (param_1 == (SWidget *)0x0) {
    return true;
  }
  do {
    if (param_1->EnabledStateAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      return false;
    }
    pTVar2 = (param_1->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
    pFVar1 = &param_1->PersistentState;
    param_1 = (SWidget *)0x0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar2->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return true;
        }
        LOCK();
        aVar4 = pTVar2->SharedReferenceCount;
        bVar5 = aVar3 == aVar4;
        if (bVar5) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar5);
      param_1 = (pFVar1->PaintParent).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  } while (param_1 != (SWidget *)0x0);
  return true;
}

// IsValidCellCoordinate @ 1425119e0

bool __thiscall
FNavigationMethod::IsValidCellCoordinate(FNavigationMethod *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->HittestGrid == (FHittestGrid *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HittestGrid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\NavigationMethod.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((((-1 < param_1) && (param_1 < (this->HittestGrid->NumCells).field0_0x0._s_0.X)) &&
      (-1 < param_2)) && (param_2 < (this->HittestGrid->NumCells).field0_0x0._s_0.Y)) {
    return true;
  }
  return false;
}

