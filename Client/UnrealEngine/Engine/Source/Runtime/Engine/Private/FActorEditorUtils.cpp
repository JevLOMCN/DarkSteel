// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetEditableComponents @ 14739b2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FActorEditorUtils::GetEditableComponents
          (AActor *param_1,TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  UActorComponent *local_a8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pTVar9 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                     (&param_1->OwnedComponents);
  iVar8 = *(int *)&(pTVar9->Elements).field_0x28;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  puVar1 = &(pTVar9->Elements).field_0x10;
  iStack_84 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&(pTVar9->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14739b36e;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = (int)lVar10 + -1 + local_80;
    if (iVar8 < iStack_84) {
      iStack_84 = iVar8;
    }
  }
LAB_14739b36e:
  uVar11 = *(uint *)&(pTVar9->Elements).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  iStack_78 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar9;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar9;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(pTVar9->Elements).field_0x28;
  if (uVar11 != uVar3) {
    puVar13 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14739b470;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_14739b470:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar9))
    break;
    local_a8 = *(UActorComponent **)
                (*(longlong *)&pTVar6->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
    if ((local_a8 != (UActorComponent *)0x0) &&
       (bVar7 = UActorComponent::IsCreatedByConstructionScript(local_a8), !bVar7)) {
      pFVar4 = (param_2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
         (((FScriptContainerElement *)&local_a8 < pFVar4 + (longlong)param_2->ArrayMax * 8 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      *(UActorComponent **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// IsABrush @ 1473a6080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FActorEditorUtils::IsABrush(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_ABrush_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1473a60b3;
  }
  param_1 = (AActor *)0x0;
LAB_1473a60b3:
  return param_1 != (AActor *)0x0;
}

// IsABuilderBrush @ 1473a60d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FActorEditorUtils::IsABuilderBrush(AActor *param_1)

{
  return false;
}

// IsAPreviewOrInactiveActor @ 1473a60e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FActorEditorUtils::IsAPreviewOrInactiveActor(AActor *param_1)

{
  uchar uVar1;
  UWorld *pUVar2;
  
  if (param_1 != (AActor *)0x0) {
    pUVar2 = AActor::GetWorld(param_1);
    if ((pUVar2 != (UWorld *)0x0) &&
       ((uVar1 = (pUVar2->WorldType).Value, uVar1 == '\x04' || (uVar1 == '\a')))) {
      return true;
    }
  }
  return false;
}

// TraverseActorTree_ChildFirst @ 1473ba370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
FActorEditorUtils::TraverseActorTree_ChildFirst
          (AActor *param_1,TFunctionRef<bool___cdecl(AActor_*)> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USceneComponent *pUVar3;
  AActor *pAVar4;
  bool bVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  AActor *local_res8;
  TFunctionRef<bool___cdecl(AActor_*)> local_38;
  
  if (param_1 == (AActor *)0x0) {
    return true;
  }
  pUVar3 = (param_1->RootComponent).field0_0x0.DebugPtr;
  pFVar7 = (pUVar3->AttachChildren).AllocatorInstance.Data;
  iVar2 = (pUVar3->AttachChildren).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar3->AttachChildren).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if (((*(longlong *)pFVar7 != 0) &&
        (pAVar4 = *(AActor **)(*(longlong *)pFVar7 + 0xa8), pAVar4 != (AActor *)0x0)) &&
       (pAVar4 != param_1)) {
      local_38._0_8_ = *(undefined8 *)param_2;
      local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
      bVar5 = TraverseActorTree_ChildFirst(pAVar4,&local_38,true);
      if (!bVar5) {
        return false;
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  if ((param_3) &&
     (local_res8 = param_1,
     cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8), cVar6 == '\0')) {
    return false;
  }
  return true;
}

// TraverseActorTree_ParentFirst @ 1473ba460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
FActorEditorUtils::TraverseActorTree_ParentFirst
          (AActor *param_1,TFunctionRef<bool___cdecl(AActor_*)> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USceneComponent *pUVar3;
  AActor *pAVar4;
  char cVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  AActor *local_res8;
  TFunctionRef<bool___cdecl(AActor_*)> local_28;
  
  if (param_1 != (AActor *)0x0) {
    if ((param_3) &&
       (local_res8 = param_1,
       cVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8), cVar5 == '\0'))
    {
      return false;
    }
    pUVar3 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar3 != (USceneComponent *)0x0) {
      pFVar7 = (pUVar3->AttachChildren).AllocatorInstance.Data;
      iVar2 = (pUVar3->AttachChildren).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pUVar3->AttachChildren).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar7 == pFVar1) break;
        if (((*(longlong *)pFVar7 != 0) &&
            (pAVar4 = *(AActor **)(*(longlong *)pFVar7 + 0xa8), pAVar4 != (AActor *)0x0)) &&
           (pAVar4 != param_1)) {
          local_28._0_8_ = *(undefined8 *)param_2;
          local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
          bVar6 = TraverseActorTree_ParentFirst(pAVar4,&local_28,true);
          if (!bVar6) {
            return false;
          }
        }
        pFVar7 = pFVar7 + 8;
      }
      return true;
    }
  }
  return true;
}

// ValidateActorLabel @ 1473bce90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl FActorEditorUtils::ValidateActorLabel(TStringView<wchar_t> *param_1,FText *param_2)

{
  FFormatArgumentValue *pFVar1;
  int iVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_98;
  FTextFormat local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FFormatArgumentValue local_48;
  
  pwVar8 = param_1->DataPtr;
  iVar7 = 0;
  iVar9 = param_1->Size;
  pwVar5 = pwVar8;
  while ((pwVar5 != pwVar8 + iVar9 && (iVar2 = iswspace(*pwVar5), iVar2 != 0))) {
    iVar7 = iVar7 + 1;
    pwVar5 = pwVar5 + 1;
  }
  pFVar1 = (FFormatArgumentValue *)(pwVar8 + iVar7);
  iVar9 = iVar9 - iVar7;
  if (iVar9 != 0) {
    lVar6 = (longlong)iVar9;
    pwVar8 = pwVar8 + lVar6 + -1 + (longlong)iVar7;
    do {
      iVar7 = iswspace(*pwVar8);
      if (iVar7 == 0) break;
      iVar9 = iVar9 + -1;
      pwVar8 = pwVar8 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_1->DataPtr = (wchar_t *)pFVar1;
  *(ulonglong *)&param_1->Size = CONCAT44(local_98.ArrayMax,iVar9);
  iVar7 = param_1->Size;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)pFVar1;
  local_98.ArrayNum = iVar9;
  if (iVar7 == 0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"ActorEditorUtils",L"ValidateActorNameString_Empty",
                        L"Actor names cannot be empty");
    FText::operator=(param_2,pFVar3);
    local_68.TextData.Reference = local_78.TextData.Reference;
  }
  else if (iVar7 < 0x400) {
    iVar9 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,"None",(longlong)iVar7);
    if ((iVar9 != 0) || ("None"[iVar7] != '\0')) {
      return true;
    }
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"ActorEditorUtils",L"ValidateActorNameString_ReservedNameNone",
                        L"\"None\" is a reserved term and cannot be used for actor names");
    FText::operator=(param_2,pFVar3);
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"ActorEditorUtils",L"ValidateActorNameString_TooLong",
                        L"Names must be less than {0} characters long.");
    pFVar4 = FTextFormat::FTextFormat(&local_58,pFVar3,Default);
    local_48.field1_0x8.IntValue = 0x400;
    local_98.ArrayNum = 1;
    local_48.Type = Int;
    local_48.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(ITextData *)0x0;
    local_48.TextValue.field0_0x0.TypedValue.Flags = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_98.AllocatorInstance.Data,&local_48,1);
    local_88.TextFormatData.Object = (pFVar4->TextFormatData).Object;
    local_88.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar4->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_78,&local_88,&local_98);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if ((FFormatArgumentValue *)local_98.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->TextFormatData).SharedReferenceCount.ReferenceController);
    FText::operator=(param_2,&local_78);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return false;
}

// ValidateActorName @ 1473bd100

bool __cdecl FActorEditorUtils::ValidateActorName(FText *param_1,FText *param_2)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  TStringView<wchar_t> local_18;
  
  pFVar3 = FText::ToString(param_1);
  local_18.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = ValidateActorLabel(&local_18,param_2);
  return bVar2;
}

