// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 6

// ~SInterchangeGenericAssetMaterialConflictWidget @ 14e76bce0

void __thiscall
SInterchangeGenericAssetMaterialConflictWidget::~SInterchangeGenericAssetMaterialConflictWidget
          (SInterchangeGenericAssetMaterialConflictWidget *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaterialList).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int>
            ((TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)
             (this->RowItems).AllocatorInstance.Data,(this->RowItems).ArrayNum);
  pFVar1 = (this->RowItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MatchMaterialIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ImportMaterialNames).AllocatorInstance.Data,
             (this->ImportMaterialNames).ArrayNum);
  pFVar1 = (this->ImportMaterialNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AssetMaterialNames).AllocatorInstance.Data,
             (this->AssetMaterialNames).ArrayNum);
  pFVar1 = (this->AssetMaterialNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14e786a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SInterchangeGenericAssetMaterialConflictWidget::Construct
          (SInterchangeGenericAssetMaterialConflictWidget *this,FArguments *param_1)

{
  int *piVar1;
  byte *pbVar2;
  TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *pSVar15;
  FSharedReferencer<1> FVar16;
  FName FVar17;
  SHeaderRow *pSVar18;
  FArguments *pFVar19;
  bool bVar20;
  char cVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  TReferenceControllerBase<1> *pTVar26;
  FSlotArguments *pFVar27;
  undefined1 *puVar28;
  FArguments *pFVar29;
  FArguments *pFVar30;
  undefined8 *puVar31;
  TSharedRef<SWidget,1> *pTVar32;
  ulong64 uVar33;
  FArguments *pFVar34;
  FText *pFVar35;
  FArguments *pFVar36;
  TSharedRef<SBorder,1> *pTVar37;
  FArguments *this_00;
  FMemScope FVar38;
  TSharedRef<SButton,1> *pTVar39;
  FArguments *pFVar40;
  TSharedRef<SVerticalBox,1> *pTVar41;
  TSharedRef<SBox,1> *pTVar42;
  FSlotArguments *pFVar43;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar44;
  uint uVar45;
  SInterchangeGenericAssetMaterialConflictWidget *pSVar46;
  FSharedReferencer<1> FVar47;
  uint uVar48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar49;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2518;
  T0RequiredArgs local_2517;
  T0RequiredArgs local_2516 [6];
  FArguments *local_2510;
  FArguments *local_2508;
  FLLMScope local_2500;
  FLLMScope local_24fc;
  FLLMScope local_24f8;
  FLLMScope local_24f4;
  FLLMScope local_24f0;
  FLLMScope local_24ec;
  FSlotArguments *local_24e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *local_24e0;
  TReferenceControllerBase<1> *local_24d8;
  TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
  local_24d0;
  SButton *local_24b8;
  FSharedReferencer<1> local_24b0;
  SBorder *local_24a8;
  FSharedReferencer<1> local_24a0;
  FMemScope local_2498;
  FName local_2490;
  FMemScope local_2488;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_2480;
  FName local_2468;
  undefined4 uStack_2460;
  undefined4 uStack_245c;
  FName local_2458;
  undefined4 uStack_2450;
  undefined4 uStack_244c;
  undefined8 local_2448;
  undefined8 uStack_2440;
  undefined1 local_2438;
  undefined1 local_2430 [8];
  ForAnyElementType FStack_2428;
  ulonglong local_2420;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2418;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2408;
  float local_23f8;
  undefined1 local_23f4;
  undefined1 local_23f0 [8];
  void *pvStack_23e8;
  undefined8 local_23e0;
  float local_23d8;
  undefined1 local_23d4;
  undefined1 local_23d0 [8];
  void *pvStack_23c8;
  undefined8 local_23c0;
  SVerticalBox *local_23b8;
  TReferenceControllerBase<1> *pTStack_23b0;
  FMemScope local_23a8;
  FName local_23a0;
  FMemScope local_2398;
  FArguments *local_2390;
  FName local_2388;
  FMemScope local_2380;
  FName local_2378;
  undefined4 local_2370 [2];
  undefined4 local_2368 [2];
  undefined4 local_2360 [2];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2358;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2348;
  undefined8 local_2338;
  FSharedReferencer<1> FStack_2330;
  FText local_2328;
  FMemScope local_2318;
  undefined4 local_2310 [2];
  TAttribute<float> local_2308;
  TSharedRef<SWidget,1> local_22e8;
  FDestructionSentinel local_22d8;
  FDestructionSentinel local_22c0;
  undefined1 *local_22a8;
  FDestructionSentinel local_22a0;
  FDelegateAllocation *local_2288;
  TAttribute<FText> local_2280;
  TAttribute<FText> local_2250;
  TAttribute<FText> local_2220;
  TSharedRef<SButton,1> local_21f0;
  FText local_21e0;
  TSharedRef<SBorder,1> local_21d0;
  FText local_21c0;
  TSharedRef<SWidget,1> local_21b0;
  SHeaderRow *local_21a0;
  TReferenceControllerBase<1> *pTStack_2198;
  SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *local_2190;
  TReferenceControllerBase<1> *pTStack_2188;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2180;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2168;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2150;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2138;
  SWidget *local_2120;
  TReferenceControllerBase<1> *pTStack_2118;
  TSharedRef<SWidget,1> local_2110;
  TSharedRef<SBox,1> local_2100;
  TSharedRef<SVerticalBox,1> local_20f0;
  undefined8 *local_20e0 [2];
  TReferenceControllerBase<1> *local_20d0;
  undefined1 local_20b0 [40];
  FSlotArgumentsMixin local_2088;
  undefined8 *local_1ff8 [2];
  TReferenceControllerBase<1> *local_1fe8;
  undefined1 local_1fc8 [40];
  FSlotArgumentsMixin local_1fa0;
  undefined1 local_1f10 [528];
  undefined1 local_1d00 [24];
  undefined1 local_1ce8 [40];
  ForAnyElementType local_1cc0;
  undefined1 local_1cb0 [24];
  FArguments local_1c98;
  FArguments local_1a90;
  FArguments local_1618;
  FArguments local_11a0;
  FArguments local_e60;
  FArguments local_a80;
  FArguments local_5a0;
  
  uVar48 = 0;
  local_res10[0] = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->AssetMaterialNames,&param_1->_AssetMaterialNames);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->ImportMaterialNames,&param_1->_ImportMaterialNames);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->MatchMaterialIndexes,&param_1->_MatchMaterialIndexes);
  pUVar5 = param_1->_ReimportObject;
  this->ReimportObject = pUVar5;
  if (pUVar5 == (UObject *)0x0) {
    bVar20 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2674368391669610530>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                        ,0x7de,"ReimportObject");
    if (!bVar20) {
      return;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar25 = (this->AssetMaterialNames).ArrayNum;
  iVar4 = (this->ImportMaterialNames).ArrayNum;
  if (iVar4 < iVar25) {
    iVar4 = iVar25;
  }
  local_2508 = (FArguments *)(longlong)iVar4;
  uVar45 = uVar48;
  if (0 < iVar4) {
    local_2510 = (FArguments *)0x0;
    local_24e8 = (FSlotArguments *)0x0;
    do {
      pFVar27 = local_24e8;
      pTVar26 = ::operator_new(0x48);
      if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
        pTVar26 = (TReferenceControllerBase<1> *)0x0;
        pTVar49 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      }
      else {
        pTVar26->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00_SharedPointerInternals__6B_
        ;
        pTVar26->SharedReferenceCount = (atomic<int>)0x1;
        pTVar26->WeakReferenceCount = (atomic<int>)0x1;
        *(undefined4 *)((longlong)&pTVar26[2]._padding_ + 4) = 0;
        pTVar26[1]._padding_ = 0;
        pTVar26[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar26[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar26[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar26[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar49 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar26 + 1);
        pTVar26[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar26[1].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar26[2]._padding_ = 0xffffffff;
        pTVar26[3]._padding_ = 0;
        pTVar26[4]._padding_ = 0;
        if ((pTVar49 == (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (((int)uVar48 < 0) || ((this->ImportMaterialNames).ArrayNum <= (int)uVar48)) {
        uVar45 = uVar45 | 2;
        pTVar44 = &local_2418;
        local_2418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2418.ArrayNum = 0;
        local_2418.ArrayMax = 0;
      }
      else {
        uVar45 = uVar45 | 1;
        uVar23 = 0;
        if ((int)uVar48 < (this->ImportMaterialNames).ArrayNum) {
          uVar23 = ~uVar48 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar6 = (this->ImportMaterialNames).AllocatorInstance.Data;
        local_2358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_2358,*(wchar_t **)(pFVar6 + (longlong)pFVar27),
                   *(int *)(pFVar6 + (longlong)pFVar27 + 8),0);
        pTVar44 = &local_2358;
      }
      if (pTVar49 != pTVar44) {
        pFVar6 = (pTVar49->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pTVar49->AllocatorInstance).Data = (pTVar44->AllocatorInstance).Data;
        (pTVar44->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar49->ArrayNum = pTVar44->ArrayNum;
        pTVar49->ArrayMax = pTVar44->ArrayMax;
        pTVar44->ArrayNum = 0;
        pTVar44->ArrayMax = 0;
      }
      if (((uVar45 & 2) != 0) &&
         (uVar45 = uVar45 & 0xfffffffd,
         local_2418.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2418.AllocatorInstance.Data);
      }
      if (((uVar45 & 1) != 0) &&
         (uVar45 = uVar45 & 0xfffffffe,
         local_2358.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2358.AllocatorInstance.Data);
      }
      *(undefined4 *)&pTVar49[1].AllocatorInstance.Data = 0xffffffff;
      if ((int)uVar48 < 0) {
LAB_14e786e5c:
        uVar45 = uVar45 | 8;
        pTVar44 = &local_2408;
        local_2408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2408.ArrayNum = 0;
        local_2408.ArrayMax = 0;
      }
      else {
        if ((int)uVar48 < (this->MatchMaterialIndexes).ArrayNum) {
          uVar23 = 0;
          if ((int)uVar48 < (this->MatchMaterialIndexes).ArrayNum) {
            uVar23 = ~uVar48 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar23 = *(uint *)((this->MatchMaterialIndexes).AllocatorInstance.Data +
                            (longlong)local_2510 * 4);
          *(uint *)&pTVar49[1].AllocatorInstance.Data = uVar23;
          if ((-1 < (int)uVar23) && ((int)uVar23 < (this->AssetMaterialNames).ArrayNum)) {
            uVar24 = 0;
            if ((int)uVar23 < (this->AssetMaterialNames).ArrayNum) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar6 = (this->AssetMaterialNames).AllocatorInstance.Data;
            iVar4 = *(int *)(pFVar6 + (longlong)(int)uVar23 * 0x10 + 8);
            iVar25 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar25 = 0;
            }
            ::FString::AssignRange
                      ((FString *)&pTVar49[1].ArrayNum,
                       *(wchar_t **)(pFVar6 + (longlong)(int)uVar23 * 0x10),iVar25);
          }
        }
        if ((this->AssetMaterialNames).ArrayNum <= (int)uVar48) goto LAB_14e786e5c;
        uVar45 = uVar45 | 4;
        uVar23 = 0;
        if ((int)uVar48 < (this->AssetMaterialNames).ArrayNum) {
          uVar23 = ~uVar48 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar6 = (this->AssetMaterialNames).AllocatorInstance.Data;
        local_2348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_2348,*(wchar_t **)(pFVar6 + (longlong)pFVar27),
                   *(int *)(pFVar6 + (longlong)pFVar27 + 8),0);
        pTVar44 = &local_2348;
      }
      piVar1 = &pTVar49[2].ArrayNum;
      if ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)piVar1 != pTVar44) {
        if (*(void **)piVar1 != (void *)0x0) {
          FMemory::Free(*(void **)piVar1);
        }
        *(FScriptContainerElement **)piVar1 = (pTVar44->AllocatorInstance).Data;
        (pTVar44->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)&pTVar49[3].AllocatorInstance.Data = pTVar44->ArrayNum;
        *(int *)((longlong)&pTVar49[3].AllocatorInstance.Data + 4) = pTVar44->ArrayMax;
        pTVar44->ArrayNum = 0;
        pTVar44->ArrayMax = 0;
      }
      if (((uVar45 & 8) != 0) &&
         (uVar45 = uVar45 & 0xfffffff7,
         local_2408.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2408.AllocatorInstance.Data);
      }
      if (((uVar45 & 4) != 0) &&
         (uVar45 = uVar45 & 0xfffffffb,
         local_2348.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2348.AllocatorInstance.Data);
      }
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = &this->RowItems;
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      local_24e0 = pTVar49;
      local_24d8 = pTVar26;
      if (((pFVar6 <= (FScriptContainerElement *)&local_24e0) &&
          ((FScriptContainerElement *)&local_24e0 <
           pFVar6 + (longlong)(this->RowItems).ArrayMax * 0x10)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar25 = (this->RowItems).ArrayNum;
      if (iVar25 == (this->RowItems).ArrayMax) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,&(this->RowItems).ArrayMax);
      }
      (this->RowItems).ArrayNum = iVar25 + 1;
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      *(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)(pFVar6 + (longlong)iVar25 * 0x10) =
           local_24e0;
      *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar25 * 0x10 + 8) = local_24d8;
      local_24d8 = (TReferenceControllerBase<1> *)0x0;
      local_24e0 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      local_2510 = (FArguments *)((longlong)local_2510 + 1);
      local_24e8 = (FSlotArguments *)((longlong)local_24e8 + 0x10);
      uVar48 = uVar48 + 1;
    } while ((longlong)local_2510 < (longlong)local_2508);
  }
  local_2390 = SBox::FArguments::FArguments(&local_11a0);
  local_2510 = SVerticalBox::FArguments::FArguments(&local_1c98);
  pFVar27 = SVerticalBox::Slot((FSlotArguments *)local_1ff8);
  puVar28 = &pFVar27->field_0x48;
  if (local_2310 != (undefined4 *)puVar28) {
    *(undefined4 *)puVar28 = 0;
    pFVar27->field_0x4c = 1;
  }
  if (puVar28 == (undefined1 *)0x0) {
    pFVar27 = (FSlotArguments *)0x0;
  }
  if (local_2360 != (undefined4 *)&pFVar27->field_0x50) {
    *(undefined4 *)&pFVar27->field_0x50 = 0;
    pFVar27->field_0x54 = 1;
  }
  uVar14 = _UNK_1528a02d8;
  uVar13 = ___xmm_41000000000000000000000000000000;
  local_2438 = 1;
  pFVar43 = (FSlotArguments *)0x0;
  if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar43 = pFVar27;
  }
  local_2448 = ___xmm_41000000000000000000000000000000;
  uStack_2440 = _UNK_1528a02d8;
  local_2420 = 0;
  local_2430 = (undefined1  [8])0x0;
  FStack_2428.Data = (FScriptContainerElement *)0x0;
  pFVar43->field_0x28 = 1;
  *(undefined8 *)&pFVar43->field_0x18 = uVar13;
  *(undefined8 *)&pFVar43->field_0x20 = uVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar43->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2430);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2430,
             (FWriteAccessScope *)&local_22d8);
  if (((int)local_2420 != 0) && (FStack_2428.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2428.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2428,0,0,0x10);
    local_2420 = local_2420 & 0xffffffff00000000;
  }
  if (local_22d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22d8.Accessor,&local_22d8);
  }
  if (FStack_2428.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2428.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2430);
  if (&pFVar43->field_0x18 == (undefined1 *)0x0) {
    pFVar43 = (FSlotArguments *)0x0;
  }
  local_2308.Value = 1.0;
  local_2308.Getter._16_8_ = 0;
  local_2308.bIsSet = true;
  local_2308.Getter._0_8_ = 0;
  local_2308.Getter._8_8_ = 0;
  local_24e8 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar43,&local_2308);
  pFVar29 = SBorder::FArguments::FArguments(&local_e60);
  local_2508 = pFVar29;
  pFVar30 = SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
            FArguments::FArguments(&local_a80);
  local_2338 = 0;
  FStack_2330.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar30->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  pFVar30->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
       )0x0;
  if (&pFVar30->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
       *)&local_2338) {
    (pFVar30->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
          *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar30->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_2330)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2330.ReferenceController);
  pFVar30->_ListItemsSource_ArrayPointer = &this->RowItems;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar30->_OnGenerateRow,
             (FWriteAccessScope *)&local_22c0);
  local_22a8 = &(pFVar30->_OnGenerateRow).field_0x8;
  puVar31 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_22a8);
  pSVar46 = this;
  if (puVar31 != (undefined8 *)0x0) {
    uStack_245c = local_2328._12_4_;
    local_2468 = (FName)OnGenerateRow;
    uStack_2460 = 0;
    pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_21b0);
    pSVar46 = (SInterchangeGenericAssetMaterialConflictWidget *)
              (pTVar32->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar32->Object;
    if (pSVar46 != (SInterchangeGenericAssetMaterialConflictWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar46->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar46->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar46->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar46->_padding_ + 1);
      UNLOCK();
    }
    uVar45 = uVar45 | 0x70;
    *puVar31 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar33 = FDelegateHandle::GenerateNewID();
    puVar31[2] = uVar33;
    *puVar31 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSInterchangeGenericAssetMaterialConflictWidget___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar31[3] = pSVar7;
    puVar31[4] = pSVar46;
    if (pSVar46 != (SInterchangeGenericAssetMaterialConflictWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar46->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar46->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar31 + 5) = local_2468;
    puVar31[6] = CONCAT44(uStack_245c,uStack_2460);
    pFVar29 = local_2508;
  }
  if ((uVar45 & 0x40) != 0) {
    uVar45 = uVar45 & 0xffffffbf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar46);
  }
  if ((uVar45 & 0x20) != 0) {
    uVar45 = uVar45 & 0xffffffdf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar46);
  }
  if ((uVar45 & 0x10) != 0) {
    uVar45 = uVar45 & 0xffffffef;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21b0.SharedReferenceCount.ReferenceController);
  }
  if (local_22c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22c0.Accessor,&local_22c0);
  }
  pFVar34 = SHeaderRow::FArguments::FArguments((FArguments *)local_1f10);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1618);
  fVar12 = __real_3f000000;
  local_1618._ColumnId = NAME_Import;
  local_23f8 = __real_3f000000;
  local_1618._FillWidth.Value = __real_3f000000;
  local_23f4 = 1;
  local_23f0 = (undefined1  [8])0x0;
  pvStack_23e8 = (void *)0x0;
  local_23e0 = 0;
  local_1618._FillWidth.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1618._FillWidth.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_23f0);
  if (pvStack_23e8 != (void *)0x0) {
    FMemory::Free(pvStack_23e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23f0);
  pFVar35 = FText::AsLocalizable_Advanced_LocText
                      (&local_2328,L"GenericAssetPipeline",
                       L"SInterchangeGenericAssetMaterialConflictWidget_ImportName",L"Import");
  FText::FText(&local_2280.Value,pFVar35);
  local_2280.bIsSet = true;
  local_2280.Getter._16_8_ = 0;
  local_2280.Getter._0_8_ = 0;
  local_2280.Getter._8_8_ = 0;
  pFVar36 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1618,&local_2280);
  pFVar34 = SHeaderRow::FArguments::operator+(pFVar34,pFVar36);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1a90);
  local_1a90._ColumnId = NAME_Asset;
  local_23d8 = fVar12;
  local_1a90._FillWidth.Value = fVar12;
  local_23d4 = 1;
  local_23d0 = (undefined1  [8])0x0;
  pvStack_23c8 = (void *)0x0;
  local_23c0 = 0;
  local_1a90._FillWidth.bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a90._FillWidth.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_23d0);
  if (pvStack_23c8 != (void *)0x0) {
    FMemory::Free(pvStack_23c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23d0);
  pFVar35 = FText::AsLocalizable_Advanced_LocText
                      (&local_21c0,L"GenericAssetPipeline",
                       L"SInterchangeGenericAssetMaterialConflictWidget_AssetName",L"Asset");
  FText::FText(&local_2250.Value,pFVar35);
  local_2250.bIsSet = true;
  local_2250.Getter._16_8_ = 0;
  local_2250.Getter._0_8_ = 0;
  local_2250.Getter._8_8_ = 0;
  pFVar36 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1a90,&local_2250);
  pFVar34 = SHeaderRow::FArguments::operator+(pFVar34,pFVar36);
  FLLMScope::FLLMScope(&local_2500,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2318,&local_2468,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_2480,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x807,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_2318);
  FLLMScope::~FLLMScope(&local_2500);
  pSVar18 = local_2480._Widget.Object;
  if ((local_2480._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2480._Widget.Object,(FSlateBaseNamedArgs *)pFVar34);
  SHeaderRow::Construct(local_2480._Widget.Object,pFVar34);
  if ((local_2480._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((local_2480._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar21 = (**(code **)((local_2480._Widget.Object)->_padding_ + 0x228))
                       (local_2480._Widget.Object);
    bVar22 = 0;
    if (cVar21 != '\0') goto LAB_14e7875f9;
  }
  else {
LAB_14e7875f9:
    bVar22 = 0x20;
  }
  *(byte *)&(local_2480._Widget.Object)->_padding_ =
       (byte)(local_2480._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2480._Widget.Object)->_padding_ =
       (byte)(local_2480._Widget.Object)->_padding_ | bVar22;
  if ((local_2480._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_2480._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_2480._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar47.ReferenceController = local_2480._Widget.SharedReferenceCount.ReferenceController;
  local_2508 = (FArguments *)local_2480._Widget.SharedReferenceCount.ReferenceController;
  local_2480._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2480._Widget.Object = (SHeaderRow *)0x0;
  if ((pSVar18 == (SHeaderRow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (FVar47.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar47.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar47.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar47.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar47.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_21a0 = (pFVar30->_HeaderRow).Object;
  pTStack_2198 = (pFVar30->_HeaderRow).SharedReferenceCount.ReferenceController;
  (pFVar30->_HeaderRow).Object = pSVar18;
  (pFVar30->_HeaderRow).SharedReferenceCount.ReferenceController = FVar47.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar47.ReferenceController);
  FLLMScope::FLLMScope(&local_24fc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2378 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2498,&local_2378,true);
  TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_24d0,"SListView<TSharedPtr<FListItem>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x802,local_res18);
  FMemScope::~FMemScope(&local_2498);
  FLLMScope::~FLLMScope(&local_24fc);
  if (local_24d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_24d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_24d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2190 = (this->MaterialList).Object;
  pTStack_2188 = (this->MaterialList).SharedReferenceCount.ReferenceController;
  (this->MaterialList).Object = local_24d0._Widget.Object;
  (this->MaterialList).SharedReferenceCount.ReferenceController =
       local_24d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2188);
  pSVar15 = local_24d0._Widget.Object;
  if ((local_24d0._Widget.Object ==
       (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0)
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_24d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar30);
  SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::Construct
            (local_24d0._Widget.Object,pFVar30);
  if ((local_24d0._Widget.Object ==
       (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0)
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((local_24d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar21 = (**(code **)((local_24d0._Widget.Object)->_padding_ + 0x228))
                       (local_24d0._Widget.Object);
    bVar22 = 0;
    if (cVar21 == '\0') goto LAB_14e78782e;
  }
  bVar22 = 0x20;
LAB_14e78782e:
  *(byte *)&(local_24d0._Widget.Object)->_padding_ =
       (byte)(local_24d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_24d0._Widget.Object)->_padding_ =
       (byte)(local_24d0._Widget.Object)->_padding_ | bVar22;
  if ((local_24d0._Widget.Object ==
       (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0)
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_24d0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_24d0._Widget.Object ==
       (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0)
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar16.ReferenceController = local_24d0._Widget.SharedReferenceCount.ReferenceController;
  local_24d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_24d0._Widget.Object =
       (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0;
  if ((pSVar15 ==
       (SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)0x0)
     && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2120 = (pFVar29->_Content).Widget.Object;
  pTStack_2118 = (pFVar29->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar29->_Content).Widget.Object = (SWidget *)pSVar15;
  (pFVar29->_Content).Widget.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2118);
  FLLMScope::FLLMScope(&local_24f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2490 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2488,&local_2490,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_2138,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x800,local_res20);
  FMemScope::~FMemScope(&local_2488);
  FLLMScope::~FLLMScope(&local_24f8);
  pTVar37 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2138,&local_21d0,pFVar29);
  pFVar27 = local_24e8;
  pTVar26 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_24a8 = pTVar37->Object;
  if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24a0.ReferenceController = pTVar26;
  if ((SBorder **)&local_24e8->field_0x8 != &local_24a8) {
    *(SBorder **)&local_24e8->field_0x8 = local_24a8;
    local_24a8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_24e8->field_0x10,&local_24a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24a0.ReferenceController);
  local_2498 = (FMemScope)SVerticalBox::FArguments::operator+(local_2510,pFVar27);
  pFVar27 = SVerticalBox::Slot((FSlotArguments *)local_20e0);
  pFVar27 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar27);
  puVar28 = &pFVar27->field_0x48;
  if (local_2368 != (undefined4 *)puVar28) {
    *(undefined4 *)puVar28 = 3;
    pFVar27->field_0x4c = 1;
  }
  if (puVar28 == (undefined1 *)0x0) {
    pFVar27 = (FSlotArguments *)0x0;
  }
  if (local_2370 != (undefined4 *)&pFVar27->field_0x50) {
    *(undefined4 *)&pFVar27->field_0x50 = 3;
    pFVar27->field_0x54 = 1;
  }
  pFVar43 = (FSlotArguments *)0x0;
  if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar43 = pFVar27;
  }
  local_2490 = (FName)TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)&pFVar43->field_0x18,__real_40000000);
  this_00 = SButton::FArguments::FArguments(&local_5a0);
  this_00->_HAlign = HAlign_Center;
  pFVar35 = FText::AsLocalizable_Advanced_LocText
                      (&local_21e0,L"SInterchangeGenericAssetMaterialConflictWidget",
                       L"SInterchangeGenericAssetMaterialConflictWidget_Done",L"Done");
  FText::FText(&local_2220.Value,pFVar35);
  local_2220.bIsSet = true;
  local_2220.Getter._16_8_ = 0;
  local_2220.Getter._0_8_ = 0;
  local_2220.Getter._8_8_ = 0;
  FVar38 = (FMemScope)SButton::FArguments::Text(this_00,&local_2220);
  local_2488 = FVar38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x2e0),
             (FWriteAccessScope *)&local_22a0);
  local_2288 = (FDelegateAllocation *)((longlong)FVar38 + 0x2e8);
  puVar31 = UE::Core::Private::DelegateAllocate(0x38,local_2288);
  pSVar46 = this;
  if (puVar31 != (undefined8 *)0x0) {
    uStack_244c = local_2328._12_4_;
    local_2458 = (FName)OnDone;
    uStack_2450 = 0;
    pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2110);
    pSVar46 = (SInterchangeGenericAssetMaterialConflictWidget *)
              (pTVar32->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar32->Object;
    if (pSVar46 != (SInterchangeGenericAssetMaterialConflictWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar46->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar46->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar46->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar46->_padding_ + 1);
      UNLOCK();
    }
    uVar45 = uVar45 | 0x380;
    *puVar31 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar33 = FDelegateHandle::GenerateNewID();
    puVar31[2] = uVar33;
    *puVar31 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSInterchangeGenericAssetMaterialConflictWidget___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar31[3] = pSVar7;
    puVar31[4] = pSVar46;
    if (pSVar46 != (SInterchangeGenericAssetMaterialConflictWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar46->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar46->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar31 + 5) = local_2458;
    puVar31[6] = CONCAT44(uStack_244c,uStack_2450);
    FVar47.ReferenceController = (TReferenceControllerBase<1> *)local_2508;
  }
  if (uVar45 >> 9 != 0) {
    uVar45 = uVar45 & 0xfffffdff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar46);
  }
  if ((uVar45 >> 8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar46);
  }
  if ((char)uVar45 < '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2110.SharedReferenceCount.ReferenceController);
  }
  if (local_22a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_22a0.Accessor,&local_22a0);
  }
  FLLMScope::FLLMScope(&local_24f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2388 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_23a8,&local_2388,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2150,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x819,&local_2518);
  FMemScope::~FMemScope(&local_23a8);
  FLLMScope::~FLLMScope(&local_24f4);
  pTVar39 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2150,&local_21f0,(FArguments *)local_2488);
  FVar17 = local_2490;
  pTVar8 = (pTVar39->SharedReferenceCount).ReferenceController;
  local_24b8 = pTVar39->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24b0.ReferenceController = pTVar8;
  if ((SButton **)((longlong)local_2490 + 8) != &local_24b8) {
    *(SButton **)((longlong)local_2490 + 8) = local_24b8;
    local_24b8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_2490 + 0x10),&local_24b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24b0.ReferenceController);
  pFVar40 = SVerticalBox::FArguments::operator+((FArguments *)local_2498,(FSlotArguments *)FVar17);
  FLLMScope::FLLMScope(&local_24f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_23a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2398,&local_23a0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2168,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x7f9,&local_2517);
  FMemScope::~FMemScope(&local_2398);
  FLLMScope::~FLLMScope(&local_24f0);
  pTVar41 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2168,&local_20f0,pFVar40);
  pFVar19 = local_2390;
  pTVar9 = (pTVar41->SharedReferenceCount).ReferenceController;
  local_23b8 = pTVar41->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (local_2390->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2390->_Content).Widget.Object = (SWidget *)local_23b8;
  (local_2390->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_23b0 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FLLMScope::FLLMScope(&local_24ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2458 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2380,&local_2458,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2180,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x7f7,local_2516);
  FMemScope::~FMemScope(&local_2380);
  FLLMScope::~FLLMScope(&local_24ec);
  pTVar42 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2180,&local_2100,pFVar19);
  pTVar10 = (pTVar42->SharedReferenceCount).ReferenceController;
  local_22e8.Object = (SWidget *)pTVar42->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_22e8.SharedReferenceCount.ReferenceController = pTVar10;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_22e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2100.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2180._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2168._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2150._Widget.SharedReferenceCount.ReferenceController);
  if (local_21e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_21e0.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_5a0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2088);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20b0);
  if ((void *)local_20b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20d0);
  if (local_20e0[0] != (undefined8 *)0x0) {
    (**(code **)*local_20e0[0])(local_20e0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2138._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar47.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2480._Widget.SharedReferenceCount.ReferenceController);
  if (local_21c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_21c0.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1a90);
  if (local_2328.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2328.TextData.Reference + 0x10))();
  }
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1618);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cb0);
  if ((void *)local_1cb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1cb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cb0);
  if (local_1cc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1cc0.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ce8);
  if ((void *)local_1ce8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1ce8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ce8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d00);
  if ((void *)local_1d00._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d00._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d00);
  if ((FScriptContainerElement *)local_1f10._512_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1f10._512_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1f10);
  SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::FArguments::
  ~FArguments(&local_a80);
  SBorder::FArguments::~FArguments(&local_e60);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1fa0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fc8);
  if ((void *)local_1fc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1fc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1fe8);
  if (local_1ff8[0] != (undefined8 *)0x0) {
    (**(code **)*local_1ff8[0])(local_1ff8[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1c98._Slots.AllocatorInstance.Data,local_1c98._Slots.ArrayNum);
  if ((FSlotArguments *)local_1c98._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1c98._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1c98);
  SBox::FArguments::~FArguments(&local_11a0);
  return;
}

// OnDone @ 14e7cb130

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInterchangeGenericAssetMaterialConflictWidget::OnDone
          (SInterchangeGenericAssetMaterialConflictWidget *this,FReply *__return_storage_ptr__)

{
  if ((SWindow *)this->_padding_ != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow((SWindow *)this->_padding_);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnGenerateRow @ 14e7cc0e0

TSharedRef<ITableRow,1> * __thiscall
SInterchangeGenericAssetMaterialConflictWidget::OnGenerateRow
          (SInterchangeGenericAssetMaterialConflictWidget *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FListItem *pFVar1;
  code *pcVar2;
  SInterchangeGenericAssetMaterialConflictListRow *pSVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FLLMScope local_res10 [2];
  FName local_res18;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res20;
  TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_2a8;
  FMemScope local_290;
  undefined8 local_288;
  FSharedReferencer<1> local_280;
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1> local_278;
  FListItem *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1> local_258;
  FArguments local_248;
  
  pFVar5 = SInterchangeGenericAssetMaterialConflictListRow::FArguments::FArguments(&local_248);
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar1 = param_1->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_268 = (pFVar5->_Item).Object;
  pTStack_260 = (pFVar5->_Item).SharedReferenceCount.ReferenceController;
  (pFVar5->_Item).Object = pFVar1;
  (pFVar5->_Item).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_res20.Arg0 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_res18,true);
  local_2a8._RequiredArgs = &local_res20;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x478);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSInterchangeGenericAssetMaterialConflictListRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x468);
    STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
    STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
              ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                *)(pTVar6 + 1));
    pTVar6[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41]._padding_ = 0;
    pTVar6[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x42]._padding_ = 0;
    pTVar6[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x44]._padding_ + 4) = 0x80;
    pTVar6[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x46]._padding_ = 0;
    pTVar6[1]._padding_ =
         (longlong)&SInterchangeGenericAssetMaterialConflictListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &SInterchangeGenericAssetMaterialConflictListRow::_vftable__for__SBorder__;
    pTVar6[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x47]._padding_ = 0;
    pTVar9 = pTVar6;
  }
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1>::
  TSharedRef<SInterchangeGenericAssetMaterialConflictListRow,1>
            (&local_278,(SInterchangeGenericAssetMaterialConflictListRow *)(pTVar9 + 1),pTVar9);
  local_280.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8._Widget.Object = local_278.Object;
  local_288 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2a8._Widget.SharedReferenceCount,&local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  pSVar3 = local_2a8._Widget.Object;
  if ((local_2a8._Widget.Object == (SInterchangeGenericAssetMaterialConflictListRow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
    return pTVar7;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar3->_padding_,"SInterchangeGenericAssetMaterialConflictListRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x824,0x468);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SInterchangeGenericAssetMaterialConflictListRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(&local_2a8,&local_258,pFVar5);
  __return_storage_ptr__->Object = (ITableRow *)pTVar8->Object;
  pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Item.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyDown @ 14e7cdd00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInterchangeGenericAssetMaterialConflictWidget::OnKeyDown
          (SInterchangeGenericAssetMaterialConflictWidget *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar1 == EKeys::Escape.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    if ((SWindow *)this->_padding_ != (SWindow *)0x0) {
      SWindow::RequestDestroyWindow((SWindow *)this->_padding_);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 14e7e4760

bool __thiscall
SInterchangeGenericAssetMaterialConflictWidget::SupportsKeyboardFocus
          (SInterchangeGenericAssetMaterialConflictWidget *this)

{
  return true;
}

