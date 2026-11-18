// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 22

// AddKey @ 14238e350

void __cdecl EKeys::AddKey(FKeyDetails *param_1)

{
  TSharedPtr<FKeyDetails,1> *this;
  FName FVar1;
  uint uVar2;
  int iVar3;
  FKeyDetails *this_00;
  FKeyDetails *pFVar4;
  longlong lVar5;
  FLLMScope local_res8 [2];
  TPairInitializer<FKey_const_&,TSharedPtr<FKeyDetails,1>_const_&> local_res10;
  FKeyDetails *local_18;
  TSharedPtr<FKeyDetails,1> *local_10;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_InputCore_EKeys.UniqueName,false,None,Default,true);
  local_res10.Key = (FKey *)LLMTagDeclaration_InputCore_EKeys.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_res10.Value,(FName *)&local_res10,true);
  FVar1 = (param_1->Key).KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (InputKeys._8_4_ != InputKeys._52_4_) {
    lVar5 = 0x154ba5628;
    if (InputKeys._64_8_ != 0) {
      lVar5 = InputKeys._64_8_;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(InputKeys._72_4_ - 1 & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(InputKeys._0_8_ + (longlong)iVar3 * 0x30) == (param_1->Key).KeyName) {
          local_res10.Key = &param_1->Key;
          `EKeys::AddKey'::__l2::<lambda_1>::operator()(&local_res10);
          break;
        }
        iVar3 = *(int *)(InputKeys._0_8_ + 0x28 + (longlong)iVar3 * 0x30);
      } while (iVar3 != -1);
    }
  }
  this_00 = ::operator_new(0xc0);
  pFVar4 = (FKeyDetails *)0x0;
  if (this_00 != (FKeyDetails *)0x0) {
    pFVar4 = FKeyDetails::FKeyDetails(this_00,param_1);
  }
  this = &(param_1->Key).KeyDetails;
  local_res10.Key = &pFVar4->Key;
  TSharedPtr<FKeyDetails,1>::operator=<FKeyDetails>(this,(TRawPtrProxy<FKeyDetails> *)&local_res10);
  local_18 = param_1;
  local_10 = this;
  TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FKey_const_&,TSharedPtr<FKeyDetails,1>_const_&>_>
            ((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
              *)&InputKeys,&local_res10,(bool *)&local_18);
  FMemScope::~FMemScope((FMemScope *)&local_res10.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddMenuCategoryDisplayInfo @ 14238e4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl EKeys::AddMenuCategoryDisplayInfo(FName param_1,FText *param_2,FName param_3)

{
  int iVar1;
  ITextData *pIVar2;
  FName FVar3;
  TRefCountPtr<ITextData> TVar4;
  uint uVar5;
  longlong lVar6;
  FName local_res8;
  FLLMScope local_res10 [2];
  FName local_res18;
  FName *local_res20;
  FMemScope local_58;
  FString local_50;
  FText local_40;
  FName local_30;
  
  local_res8 = param_1;
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_InputCore_EKeys.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_InputCore_EKeys.UniqueName;
  FMemScope::FMemScope(&local_58,&local_res18,true);
  FVar3 = local_res8;
  uVar5 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  if (MenuCategoryDisplayInfo._8_4_ != MenuCategoryDisplayInfo._52_4_) {
    lVar6 = 0x154ba56c8;
    if (MenuCategoryDisplayInfo._64_8_ != 0) {
      lVar6 = MenuCategoryDisplayInfo._64_8_;
    }
    for (iVar1 = *(int *)(lVar6 + (ulonglong)
                                  (MenuCategoryDisplayInfo._72_4_ - 1 & FVar3.Number + uVar5) * 4);
        iVar1 != -1; iVar1 = *(int *)(MenuCategoryDisplayInfo._0_8_ + 0x20 + (longlong)iVar1 * 0x28)
        ) {
      if (*(FName *)(MenuCategoryDisplayInfo._0_8_ + (longlong)iVar1 * 0x28) == FVar3) {
        if (2 < (byte)LogInput._0_1_) {
          ::FName::ToString(&local_res8,&local_50);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
    }
  }
  FText::FText(&local_40);
  TVar4.Reference = local_40.TextData.Reference;
  pIVar2 = (param_2->TextData).Reference;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  if (local_40.TextData.Reference != pIVar2) {
    local_40.TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res18);
    }
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
  }
  FVar3 = local_res8;
  local_40.Flags = param_2->Flags;
  local_30 = param_3;
  uVar5 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  if (MenuCategoryDisplayInfo._8_4_ != MenuCategoryDisplayInfo._52_4_) {
    lVar6 = 0x154ba56c8;
    if (MenuCategoryDisplayInfo._64_8_ != 0) {
      lVar6 = MenuCategoryDisplayInfo._64_8_;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)(MenuCategoryDisplayInfo._72_4_ - 1 & uVar5) * 4);
    while (iVar1 != -1) {
      lVar6 = MenuCategoryDisplayInfo._0_8_ + (longlong)iVar1 * 0x28;
      if (*(FName *)(MenuCategoryDisplayInfo._0_8_ + (longlong)iVar1 * 0x28) == local_res8) {
        if (lVar6 != 0) goto LAB_14238e6ab;
        break;
      }
      iVar1 = *(int *)(lVar6 + 0x20);
    }
  }
  local_res20 = &local_res8;
  TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
              *)&MenuCategoryDisplayInfo,(uint)&local_res18,
             (TKeyInitializer<FName_const_&> *)(ulonglong)uVar5,(bool *)&local_res20);
  lVar6 = MenuCategoryDisplayInfo._0_8_ + (longlong)(int)local_res18.ComparisonIndex.Value * 0x28;
LAB_14238e6ab:
  pIVar2 = *(ITextData **)(lVar6 + 8);
  if (pIVar2 != local_40.TextData.Reference) {
    *(ITextData **)(lVar6 + 8) = local_40.TextData.Reference;
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 8))
                (local_40.TextData.Reference,&local_res18);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)(lVar6 + 0x10) = local_40.Flags;
  *(FName *)(lVar6 + 0x18) = local_30;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res10);
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// AddPairedKey @ 14238e730

void __cdecl EKeys::AddPairedKey(FKeyDetails *param_1,FKey *param_2,FKey *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *pTVar6;
  FKeyDetails *pFVar7;
  FKey *pFVar8;
  TSharedPtr<FKeyDetails,1> *pTVar9;
  TSharedPtr<FKeyDetails,1> *pTVar10;
  longlong lVar11;
  FKeyDetails *local_res20;
  FKey *local_d8;
  FKey *local_d0;
  FKey *local_c8;
  FKey *local_c0;
  FKey *local_b8;
  FKey *local_b0;
  FKeyDetails *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FKeyDetails *local_98;
  TReferenceControllerBase<1> *local_90;
  FKeyDetails *local_88;
  FKeyDetails **local_80;
  FKey local_78;
  FKey local_60;
  TSharedPtr<FKeyDetails,1> local_48;
  TSharedPtr<FKeyDetails,1> local_38;
  
  if ((param_1->AxisType == Axis2D) ||
     (local_res20 = param_1,
     bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_1>::operator()(&local_res20), bVar3)) {
    FVar1 = param_2->KeyName;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (InputKeys._8_4_ != InputKeys._52_4_) {
      lVar11 = 0x154ba5628;
      if (InputKeys._64_8_ != 0) {
        lVar11 = InputKeys._64_8_;
      }
      iVar5 = *(int *)(lVar11 + (ulonglong)(InputKeys._72_4_ - 1 & FVar1.Number + uVar4) * 4);
      if (iVar5 != -1) {
        do {
          if (*(FName *)(InputKeys._0_8_ + (longlong)iVar5 * 0x30) == param_2->KeyName)
          goto LAB_14238e7fe;
          iVar5 = *(int *)(InputKeys._0_8_ + 0x28 + (longlong)iVar5 * 0x30);
        } while (iVar5 != -1);
      }
    }
    local_d8 = param_2;
    bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_2>::operator()(&local_d8);
    if (bVar3) {
LAB_14238e7fe:
      FVar1 = param_3->KeyName;
      uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      if (InputKeys._8_4_ != InputKeys._52_4_) {
        lVar11 = 0x154ba5628;
        if (InputKeys._64_8_ != 0) {
          lVar11 = InputKeys._64_8_;
        }
        iVar5 = *(int *)(lVar11 + (ulonglong)(InputKeys._72_4_ - 1 & FVar1.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(InputKeys._0_8_ + (longlong)iVar5 * 0x30) == param_3->KeyName)
            goto LAB_14238e87e;
            iVar5 = *(int *)(InputKeys._0_8_ + 0x28 + (longlong)iVar5 * 0x30);
          } while (iVar5 != -1);
        }
      }
      local_d0 = param_3;
      bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_3>::operator()(&local_d0);
      if (bVar3) {
LAB_14238e87e:
        FKey::ConditionalLookupKeyDetails(param_2);
        pFVar7 = (param_2->KeyDetails).Object;
        if (((pFVar7 != (FKeyDetails *)0x0) && (pFVar7->AxisType == Axis1D)) ||
           (local_c8 = param_2,
           bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_4>::operator()(&local_c8), bVar3)) {
          FKey::ConditionalLookupKeyDetails(param_3);
          pFVar7 = (param_3->KeyDetails).Object;
          if (((pFVar7 != (FKeyDetails *)0x0) && (pFVar7->AxisType == Axis1D)) ||
             (local_c0 = param_3,
             bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_5>::operator()(&local_c0), bVar3)) {
            FKey::ConditionalLookupKeyDetails(param_2);
            pFVar7 = (param_2->KeyDetails).Object;
            if (((pFVar7 == (FKeyDetails *)0x0) || (pFVar7->PairedAxis == Unpaired)) ||
               (local_b8 = param_2,
               bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_6>::operator()(&local_b8), bVar3)) {
              FKey::ConditionalLookupKeyDetails(param_3);
              pFVar7 = (param_3->KeyDetails).Object;
              if (((pFVar7 == (FKeyDetails *)0x0) || (pFVar7->PairedAxis == Unpaired)) ||
                 (local_b0 = param_3,
                 bVar3 = `EKeys::AddPairedKey'::__l3::<lambda_7>::operator()(&local_b0), bVar3)) {
                AddKey(param_1);
                pTVar6 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                         ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                                 *)&InputKeys,param_2);
                if ((pTVar6 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Pair != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                       ,0x288,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar7 = TSharedPtr<FKeyDetails,1>::operator->
                                   ((TSharedPtr<FKeyDetails,1> *)&pTVar6->field_0x18);
                pFVar7->PairedAxis = X;
                pTVar6 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                         ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                                 *)&InputKeys,param_3);
                if ((pTVar6 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Pair != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                       ,0x288,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar7 = TSharedPtr<FKeyDetails,1>::operator->
                                   ((TSharedPtr<FKeyDetails,1> *)&pTVar6->field_0x18);
                pFVar7->PairedAxis = Y;
                pTVar6 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                         ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                                 *)&InputKeys,param_3);
                if ((pTVar6 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Pair != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                       ,0x288,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar7 = TSharedPtr<FKeyDetails,1>::operator->
                                   ((TSharedPtr<FKeyDetails,1> *)&pTVar6->field_0x18);
                pFVar8 = FKey::operator=(&pFVar7->PairedAxisKey,&param_1->Key);
                pTVar6 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                         ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                                 *)&InputKeys,param_2);
                if ((pTVar6 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Pair != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                       ,0x288,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar7 = TSharedPtr<FKeyDetails,1>::operator->
                                   ((TSharedPtr<FKeyDetails,1> *)&pTVar6->field_0x18);
                FKey::operator=(&pFVar7->PairedAxisKey,pFVar8);
                local_78.KeyName = param_3->KeyName;
                local_78.KeyDetails.Object = (param_3->KeyDetails).Object;
                local_78.KeyDetails.SharedReferenceCount.ReferenceController =
                     (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
                if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar9 = GetKeyDetails(&local_48,&local_78);
                local_60.KeyName = param_2->KeyName;
                local_60.KeyDetails.Object = (param_2->KeyDetails).Object;
                local_60.KeyDetails.SharedReferenceCount.ReferenceController =
                     (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
                if (local_60.KeyDetails.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_60.KeyDetails.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_60.KeyDetails.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar10 = GetKeyDetails(&local_38,&local_60);
                local_a8 = pTVar10->Object;
                local_a0 = (pTVar10->SharedReferenceCount).ReferenceController;
                if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_a0->SharedReferenceCount =
                       (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_98 = pTVar9->Object;
                local_90 = (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_90 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_90->SharedReferenceCount =
                       (atomic<int>)((int)local_90->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pTVar10->SharedReferenceCount).ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pTVar9->SharedReferenceCount).ReferenceController);
                local_80 = &local_a8;
                local_88 = param_1;
                TSet<TTuple<FKey,EKeys::FPairedKeyDetails>,TDefaultMapHashableKeyFuncs<FKey,EKeys::FPairedKeyDetails,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FKey_const_&,EKeys::FPairedKeyDetails_&&>_>
                          ((TSet<TTuple<FKey,EKeys::FPairedKeyDetails>,TDefaultMapHashableKeyFuncs<FKey,EKeys::FPairedKeyDetails,0>,FDefaultSetAllocator>
                            *)&PairedInputKeysLookup,
                           (TPairInitializer<FKey_const_&,EKeys::FPairedKeyDetails_&&> *)
                           &stack0x00000008,(bool *)&local_88);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_90);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_a0);
              }
            }
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// AddVirtualKey @ 14238eb90

void __cdecl EKeys::AddVirtualKey(FKeyDetails *param_1,FKey *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKeyDetails *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *pTVar9;
  longlong lVar10;
  FKeyDetails *local_res8;
  FKey *local_res18;
  
  if ((param_1->bIsVirtual != 0) ||
     (local_res8 = param_1,
     bVar6 = `EKeys::AddVirtualKey'::__l3::<lambda_1>::operator()(&local_res8), bVar6)) {
    FVar1 = param_2->KeyName;
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (InputKeys._8_4_ != InputKeys._52_4_) {
      lVar10 = 0x154ba5628;
      if (InputKeys._64_8_ != 0) {
        lVar10 = InputKeys._64_8_;
      }
      iVar8 = *(int *)(lVar10 + (ulonglong)(InputKeys._72_4_ - 1 & FVar1.Number + uVar7) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FName *)(InputKeys._0_8_ + (longlong)iVar8 * 0x30) == param_2->KeyName)
          goto LAB_14238ec50;
          iVar8 = *(int *)(InputKeys._0_8_ + 0x28 + (longlong)iVar8 * 0x30);
        } while (iVar8 != -1);
      }
    }
    local_res18 = param_2;
    bVar6 = `EKeys::AddVirtualKey'::__l3::<lambda_2>::operator()(&local_res18);
    if (bVar6) {
LAB_14238ec50:
      AddKey(param_1);
      pTVar9 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                       *)&InputKeys,&param_1->Key);
      if ((pTVar9 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(longlong *)&pTVar9->field_0x18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = *(longlong *)&pTVar9->field_0x18;
      *(FName *)(lVar10 + 0x38) = param_2->KeyName;
      pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
      pFVar3 = (param_2->KeyDetails).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar10 + 0x48);
      *(FKeyDetails **)(lVar10 + 0x40) = pFVar3;
      *(TReferenceControllerBase<1> **)(lVar10 + 0x48) = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
  }
  return;
}

// GetAllKeys @ 14238fc50

void __cdecl EKeys::GetAllKeys(TArray<FKey,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
              *)&InputKeys,param_1);
  return;
}

// GetGamepadDisplayName @ 14238fed0

FText * __cdecl EKeys::GetGamepadDisplayName(FText *__return_storage_ptr__,FKey *param_1)

{
  bool bVar1;
  FString *pFVar2;
  FKey *local_30;
  FKey **local_28;
  FString local_20 [2];
  
  if (ConsoleForGamepadLabels == XBoxOne) {
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Bottom);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Bottom",
                 L"Gamepad A");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Right);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Right",
                 L"Gamepad B");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Left);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Left",L"Gamepad X"
                );
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Top);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Top",L"Gamepad Y")
      ;
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Left);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"XBoxOne_Gamepad_Special_Left",L"Gamepad Back"
                );
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Right);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"XBoxOne_Gamepad_Special_Right",
                 L"Gamepad Start");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftShoulder);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftShoulder",
                 L"Gamepad Left Shoulder");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightShoulder);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightShoulder",
                 L"Gamepad Right Shoulder");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftTrigger);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftTrigger",L"Gamepad Left Trigger")
      ;
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightTrigger);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightTrigger",
                 L"Gamepad Right Trigger");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftTriggerAxis);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftTriggerAxis",
                 L"Gamepad Left Trigger Axis");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightTriggerAxis);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightTriggerAxis",
                 L"Gamepad Right Trigger Axis");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftThumbstick);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftThumbstick",
                 L"Gamepad Left Thumbstick Button");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightThumbstick);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightThumbstick",
                 L"Gamepad Right Thumbstick Button");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
  }
  else if (ConsoleForGamepadLabels == PS4) {
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Bottom);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_FaceButton_Bottom",L"Gamepad X");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Right);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_FaceButton_Right",
                 L"Gamepad Circle");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Left);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_FaceButton_Left",
                 L"Gamepad Square");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Top);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_FaceButton_Top",
                 L"Gamepad Triangle");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Left);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_Special_Left",
                 L"Gamepad Touchpad Button");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Left_Touched);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_Special_Left_Touched",
                 L"Gamepad Touchpad Touched");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Right);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_Special_Right",L"Gamepad Options"
                );
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftShoulder);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_LeftShoulder",L"Gamepad L1");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightShoulder);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_RightShoulder",L"Gamepad R1");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftTrigger);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_LeftTrigger",L"Gamepad L2");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightTrigger);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_RightTrigger",L"Gamepad R2");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftTriggerAxis);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_LeftTriggerAxis",
                 L"Gamepad L2 Axis");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightTriggerAxis);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_RightTriggerAxis",
                 L"Gamepad R2 Axis");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftThumbstick);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_LeftThumbstick",L"Gamepad L3");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightThumbstick);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"PS4_Gamepad_RightThumbstick",L"Gamepad R3");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
  }
  else {
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Bottom);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_FaceButton_Bottom",
                 L"Gamepad Face Button Bottom");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Right);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_FaceButton_Right",
                 L"Gamepad Face Button Right");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Left);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_FaceButton_Left",
                 L"Gamepad Face Button Left");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_FaceButton_Top);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_FaceButton_Top",
                 L"Gamepad Face Button Top");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Left);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_Special_Left",L"Gamepad Special Left"
                );
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_Special_Right);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_Special_Right",
                 L"Gamepad Special Right");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftShoulder);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftShoulder",
                 L"Gamepad Left Shoulder");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightShoulder);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightShoulder",
                 L"Gamepad Right Shoulder");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftTrigger);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftTrigger",L"Gamepad Left Trigger")
      ;
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightTrigger);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightTrigger",
                 L"Gamepad Right Trigger");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftTriggerAxis);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftTriggerAxis",
                 L"Gamepad Left Trigger Axis");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightTriggerAxis);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightTriggerAxis",
                 L"Gamepad Right Trigger Axis");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_LeftThumbstick);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_LeftThumbstick",
                 L"Gamepad Left Thumbstick Button");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
    bVar1 = ::operator==(param_1,&Gamepad_RightThumbstick);
    if (bVar1) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"InputKeys",L"Gamepad_RightThumbstick",
                 L"Gamepad Right Thumbstick Button");
      FKey::~FKey(param_1);
      return __return_storage_ptr__;
    }
  }
  local_28 = &local_30;
  local_30 = param_1;
  `EKeys::GetGamepadDisplayName'::__l2::<lambda_1>::operator()(local_28);
  pFVar2 = FKey::ToString(param_1,local_20);
  FText::FromString(__return_storage_ptr__,pFVar2);
  ::FString::~FString(local_20);
  FKey::~FKey(param_1);
  return __return_storage_ptr__;
}

// GetKeyDetails @ 142390cf0

TSharedPtr<FKeyDetails,1> * __cdecl
EKeys::GetKeyDetails(TSharedPtr<FKeyDetails,1> *__return_storage_ptr__,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *pTVar2;
  undefined8 *puVar3;
  
  pTVar2 = TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                   *)&InputKeys,param_1);
  puVar3 = (undefined8 *)&pTVar2->field_0x18;
  if (pTVar2 == (TTuple<FKey,TSharedPtr<FKeyDetails,1>_> *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FKeyDetails *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (FKeyDetails *)*puVar3;
    pTVar1 = (TReferenceControllerBase<1> *)puVar3[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetMenuCategoryDisplayName @ 142392250

FText * __cdecl EKeys::GetMenuCategoryDisplayName(FText *__return_storage_ptr__,FName param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,EKeys::FCategoryDisplayInfo> *pTVar5;
  FText *pFVar6;
  longlong *plVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pTVar5 = TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
                   *)&MenuCategoryDisplayInfo,param_1);
  plVar7 = (longlong *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,EKeys::FCategoryDisplayInfo> *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    pTVar5 = TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
                     *)&MenuCategoryDisplayInfo,NAME_KeyboardCategory);
    if (pTVar5 == (TTuple<FName,EKeys::FCategoryDisplayInfo> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar2)();
        return pFVar6;
      }
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = *(ITextData **)&pTVar5->field_0x8;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    uVar4 = *(uint *)&pTVar5->field_0x10;
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (ITextData *)*plVar7;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    uVar4 = *(uint *)(plVar7 + 1);
  }
  __return_storage_ptr__->Flags = uVar4;
  return __return_storage_ptr__;
}

// GetMenuCategoryPaletteIcon @ 142392320

FName __cdecl EKeys::GetMenuCategoryPaletteIcon(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,EKeys::FCategoryDisplayInfo> *pTVar3;
  FName FVar4;
  undefined1 *puVar5;
  FName in_RDX;
  
  pTVar3 = TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
                   *)&MenuCategoryDisplayInfo,in_RDX);
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,EKeys::FCategoryDisplayInfo> *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if (puVar5 != (undefined1 *)0x0) {
    *(undefined8 *)param_1 = *(undefined8 *)(puVar5 + 0x10);
    return param_1;
  }
  pTVar3 = TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,EKeys::FCategoryDisplayInfo>,TDefaultMapHashableKeyFuncs<FName,EKeys::FCategoryDisplayInfo,0>,FDefaultSetAllocator>
                   *)&MenuCategoryDisplayInfo,NAME_KeyboardCategory);
  if (pTVar3 == (TTuple<FName,EKeys::FCategoryDisplayInfo> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)&pTVar3->field_0x18;
  return param_1;
}

// GetPairedKeyDetails @ 1423924d0

FPairedKeyDetails * __cdecl EKeys::GetPairedKeyDetails(FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  FPairedKeyDetails *pFVar4;
  FPairedKeyDetails *pFVar5;
  longlong lVar6;
  FPairedKeyDetails *pFVar7;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar7 = (FPairedKeyDetails *)0x0;
  pFVar4 = pFVar7;
  if (PairedInputKeysLookup._8_4_ != PairedInputKeysLookup._52_4_) {
    lVar6 = 0x154ba5678;
    if (PairedInputKeysLookup._64_8_ != 0) {
      lVar6 = PairedInputKeysLookup._64_8_;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(PairedInputKeysLookup._72_4_ - 1 & FVar1.Number + uVar2) *
                             4);
    if (iVar3 != -1) {
      do {
        pFVar4 = (FPairedKeyDetails *)((longlong)iVar3 * 0x40 + PairedInputKeysLookup._0_8_);
        if ((FName)(pFVar4->XKeyDetails).Object == param_1->KeyName) break;
        iVar3 = *(int *)&pFVar4[1].YKeyDetails.SharedReferenceCount.ReferenceController;
        pFVar4 = pFVar7;
      } while (iVar3 != -1);
    }
  }
  pFVar5 = (FPairedKeyDetails *)&(pFVar4->YKeyDetails).SharedReferenceCount;
  if (pFVar4 == (FPairedKeyDetails *)0x0) {
    pFVar5 = pFVar7;
  }
  return pFVar5;
}

// RemoveKeysWithCategory @ 1423b7680

void __cdecl EKeys::RemoveKeysWithCategory(FName param_1)

{
  ulonglong uVar1;
  FKeyDetails *pFVar2;
  uint uVar3;
  FName FVar4;
  longlong lVar5;
  int iVar6;
  FKey *pFVar7;
  uint *puVar8;
  uint uStackX_c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FKey,TSharedPtr<FKeyDetails,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined8 local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iVar6 = InputKeys._40_4_;
  iStack_34 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)&InputKeys.field_0x10;
    if (InputKeys._32_8_ != 0) {
      puVar8 = (uint *)InputKeys._32_8_;
    }
    uVar3 = *puVar8;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_1423b7729;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_34 = (int)lVar5 + -1 + local_30;
    if (iVar6 < iStack_34) {
      iStack_34 = iVar6;
    }
  }
LAB_1423b7729:
  local_50 = &InputKeys;
  local_40 = 0x154ba5600;
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&InputKeys.field_0x10;
  if (iStack_34 < iVar6) {
    uStackX_c = param_1.Number;
    TStack_70.CurrentBitIndex = iStack_34;
    do {
      iVar6 = TStack_70.CurrentBitIndex;
      pFVar7 = (FKey *)((longlong)TStack_70.CurrentBitIndex * 0x30 + InputKeys._0_8_);
      FKey::ConditionalLookupKeyDetails(pFVar7);
      pFVar2 = (pFVar7->KeyDetails).Object;
      FVar4 = NAME_KeyboardCategory;
      if (pFVar2 != (FKeyDetails *)0x0) {
        FVar4 = pFVar2->MenuCategory;
      }
      if (((FVar4.ComparisonIndex.Value.Value == param_1.ComparisonIndex.Value.Value) &&
          (FVar4.Number == uStackX_c)) &&
         (pFVar7 = (FKey *)((longlong)iVar6 * 0x30 + InputKeys._0_8_),
         InputKeys._8_4_ != InputKeys._52_4_)) {
        FVar4 = pFVar7->KeyName;
        uVar3 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FKey>((TSet<TTuple<FKey,TSharedPtr<FKeyDetails,1>_>,TDefaultMapHashableKeyFuncs<FKey,TSharedPtr<FKeyDetails,1>,0>,FDefaultSetAllocator>
                            *)&InputKeys,uVar3 + FVar4.Number,pFVar7);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return;
}

// operator() @ 15048b0f0

bool __thiscall `EKeys::AddKey'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541775>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541775>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b157;
    }
  }
  bVar2 = false;
LAB_15048b157:
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

// operator() @ 15048b190

bool __thiscall `EKeys::GetGamepadDisplayName'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 local_70 [4];
  undefined4 local_6c;
  int local_68;
  FString *local_60;
  FScriptContainerElement *local_58;
  atomic<unsigned_char> *local_50;
  undefined4 local_48;
  undefined4 local_44;
  FKey *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  FString local_18;
  
  bVar2 = false;
  local_48 = 0;
  local_44 = 0;
  UE::Core::Private::FormatStringSan::
  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
  local_50 = &bGEnsureHasExecuted<488820106382542089>;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382542089>);
  if (bVar4) {
    local_40 = *(FKey **)this;
    bVar2 = true;
    local_60 = FKey::ToString(local_40,&local_18);
    local_68 = (local_60->Data).ArrayNum;
    if (local_68 == 0) {
      local_58 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(local_70);
    }
    else {
      local_58 = (local_60->Data).AllocatorInstance.Data;
      local_38 = local_58;
      local_30 = local_58;
      local_28 = local_58;
    }
    local_20 = local_58;
    bVar4 = UE::Assert::Private::EnsureFailed(local_50,&::ENSURE_Static);
    if (bVar4) {
      local_6c = 1;
      goto LAB_15048b29b;
    }
  }
  local_6c = 0;
LAB_15048b29b:
  cVar3 = (char)local_6c;
  if (bVar2) {
    ::FString::~FString(&local_18);
  }
  if (cVar3 == '\0') {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return (bool)uVar5;
}

// operator() @ 15048b2e0

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541784>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541784>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b347;
    }
  }
  bVar2 = false;
LAB_15048b347:
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

// operator() @ 15048b380

bool __thiscall `EKeys::AddVirtualKey'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541814>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541814>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b3e7;
    }
  }
  bVar2 = false;
LAB_15048b3e7:
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

// operator() @ 15048b490

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541785>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541785>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b4f7;
    }
  }
  bVar2 = false;
LAB_15048b4f7:
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

// operator() @ 15048b530

bool __thiscall `EKeys::AddVirtualKey'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541815>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541815>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b597;
    }
  }
  bVar2 = false;
LAB_15048b597:
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

// operator() @ 15048b5d0

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541786>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541786>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b637;
    }
  }
  bVar2 = false;
LAB_15048b637:
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

// operator() @ 15048b670

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541787>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541787>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b6d7;
    }
  }
  bVar2 = false;
LAB_15048b6d7:
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

// operator() @ 15048b710

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541788>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541788>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048b777;
    }
  }
  bVar2 = false;
LAB_15048b777:
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

// operator() @ 15048b7b0

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FKey *this_00;
  FString local_48;
  FString local_38;
  FKey local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541789>);
  if (bVar5) {
    this_00 = FKey::GetPairedAxisKey(*(FKey **)this,&local_28);
    ::FName::ToString(&this_00->KeyName,&local_38);
    ::FName::ToString(*(FName **)this,&local_48);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541789>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15048b85e;
    }
  }
  bVar5 = false;
LAB_15048b85e:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15048b8d0

bool __thiscall `EKeys::AddPairedKey'::__l3::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FKey *this_00;
  FString local_48;
  FString local_38;
  FKey local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<488820106382541790>);
  if (bVar5) {
    this_00 = FKey::GetPairedAxisKey(*(FKey **)this,&local_28);
    ::FName::ToString(&this_00->KeyName,&local_38);
    ::FName::ToString(*(FName **)this,&local_48);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<488820106382541790>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15048b97e;
    }
  }
  bVar5 = false;
LAB_15048b97e:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

