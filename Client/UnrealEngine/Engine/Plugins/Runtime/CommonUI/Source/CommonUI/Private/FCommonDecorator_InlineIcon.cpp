// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 3

// FCommonDecorator_InlineIcon @ 14a7aa030

FCommonDecorator_InlineIcon * __thiscall
FCommonDecorator_InlineIcon::FCommonDecorator_InlineIcon
          (FCommonDecorator_InlineIcon *this,UCommonRichTextBlock *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UCommonUIRichTextData *pUVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  UCommonUISettings *pUVar11;
  FCommonDecorator_InlineIcon *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_res8 [8];
  int local_res10;
  undefined1 local_res18 [16];
  UCommonRichTextBlock *local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString *local_d0;
  longlong **local_c8;
  FString local_c0;
  longlong *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  FSoftObjectPath local_88;
  undefined4 local_4c;
  
  *(undefined ***)this = &___7FCommonRichTextDecorator__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonRichTextBlock *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar15 = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  local_138 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonRichTextBlock *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x8,(FObjectPtr)&local_138);
  *(undefined ***)this = &___7FCommonDecorator_InlineIcon__6B_;
  if (InlineIconsByTag._8_4_ == InlineIconsByTag._52_4_) {
    pUVar11 = ICommonUIModule::GetSettings();
    if ((pUVar11->bDefaultDataLoaded == false) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2728553711960850556>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISettings.cpp"
                            ,0x7c,"bDefaultDataLoaded"), bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FCommonDecorator_InlineIcon *)(*pcVar8)();
      return pFVar12;
    }
    pUVar5 = (pUVar11->RichTextDataInstance).field0_0x0.DebugPtr;
    if (pUVar5 != (UCommonUIRichTextData *)0x0) {
      plVar13 = (longlong *)
                (**(code **)(((pUVar5->InlineIconSet).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
      iVar3 = (int)plVar13[5];
      uStack_124 = 1;
      local_110 = 0;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
      iStack_114 = iVar15;
      if (iVar3 != 0) {
        pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = pTVar1;
        }
        uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
        local_110 = 0;
        iVar15 = 0;
        while (uVar18 == 0) {
          lVar14 = (longlong)iVar15;
          local_110 = local_110 + 0x20;
          iVar15 = iVar15 + 1;
          iStack_114 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a7aa1ad;
          uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uStack_124 = -uVar18 & uVar18;
        uVar2 = (ulonglong)uStack_124 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_res10 = (int)lVar14;
        iStack_114 = local_110 + -1 + local_res10;
        if (iVar3 < iStack_114) {
          iStack_114 = iVar3;
        }
      }
LAB_14a7aa1ad:
      uVar18 = *(uint *)(plVar13 + 5);
      uStack_10c = local_4c;
      uVar17 = uVar18 & 0xffffffe0;
      iStack_108 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
      uStack_118 = 0xffffffff;
      TStack_f8._padding_ = CONCAT44(uStack_124,iVar15);
      TStack_f8.CurrentBitIndex = iStack_114;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar18 >> 5;
      TStack_f8._28_4_ = local_4c;
      TStack_f8.BaseBitIndex = local_110;
      uStack_d8 = CONCAT44(uStack_104,iStack_108);
      local_130 = plVar13;
      iStack_128 = iVar15;
      local_120 = pTVar1;
      local_100 = plVar13;
      TStack_f8.Array = pTVar1;
      if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FCommonDecorator_InlineIcon *)(*pcVar8)();
        return pFVar12;
      }
      uVar4 = *(uint *)(plVar13 + 5);
      if (uVar18 != uVar4) {
        pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar19 = pTVar1;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                 *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
        while (uVar18 == 0) {
          lVar14 = (longlong)iVar16;
          uVar17 = uVar17 + 0x20;
          iVar16 = iVar16 + 1;
          uVar18 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14a7aa2c0;
          uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar18 = (int)lVar14 + -1 + uVar17;
        if ((int)uVar4 < (int)uVar18) {
          uVar18 = uVar4;
        }
      }
LAB_14a7aa2c0:
      while( true ) {
        plVar9 = local_100;
        if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
          `TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar14 = (longlong)TStack_f8.CurrentBitIndex;
        if (((TStack_f8.CurrentBitIndex == uVar18) && (TStack_f8.Array == pTVar1)) &&
           (plVar9 == plVar13)) break;
        lVar6 = *plVar9;
        lVar7 = *(longlong *)(lVar6 + 8 + lVar14 * 0x18);
        if (lVar7 != 0) {
          local_b0 = *(longlong **)(lVar7 + 8);
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 8))(local_b0,local_res18);
          }
          local_a8 = *(undefined4 *)(lVar7 + 0x10);
          local_a0 = *(undefined8 *)(lVar7 + 0x40);
          uStack_98 = *(undefined8 *)(lVar7 + 0x48);
          local_90 = *(undefined8 *)(lVar7 + 0x18);
          FSoftObjectPath::FSoftObjectPath(&local_88,(FSoftObjectPath *)(lVar7 + 0x20));
          local_d0 = ::FName::ToString((FName *)(lVar6 + lVar14 * 0x18),&local_c0);
          local_c8 = &local_b0;
          TSet<TTuple<FString,FInlineIconEntry>,TDefaultMapHashableKeyFuncs<FString,FInlineIconEntry,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,FInlineIconEntry_&&>_>
                    ((TSet<TTuple<FString,FInlineIconEntry>,TDefaultMapHashableKeyFuncs<FString,FInlineIconEntry,0>,FDefaultSetAllocator>
                      *)&InlineIconsByTag,
                     (TPairInitializer<FString_&&,FInlineIconEntry_&&> *)(local_res18 + 8),
                     (bool *)&local_d0);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
          if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
          }
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 0x10))();
          }
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
    }
  }
  return this;
}

// CreateDecoratorWidget @ 14a7d0df0

TSharedPtr<SWidget,1> * __thiscall
FCommonDecorator_InlineIcon::CreateDecoratorWidget
          (FCommonDecorator_InlineIcon *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FTextRunInfo *param_1,FTextBlockStyle *param_2)

{
  undefined1 *this_00;
  code *pcVar1;
  SCommonInlineIcon *pSVar2;
  FSharedReferencer<1> FVar3;
  ETextTransformPolicy EVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  FColor FVar10;
  undefined4 extraout_var;
  FArguments *pFVar12;
  UObject *pUVar13;
  URichTextBlock *this_01;
  TSharedPtr<SWidget,1> *pTVar14;
  int iVar15;
  ForAnyElementType FVar16;
  FInlineIconEntry *pFVar17;
  wchar_t *pwVar18;
  FInlineIconEntry *pFVar19;
  longlong lVar20;
  FInlineIconEntry *pFVar21;
  ERichTextInlineIconDisplayMode EVar22;
  FLLMScope local_res18 [5];
  float local_588 [2];
  FString local_580;
  TSlateDecl<SCommonInlineIcon,RequiredArgs::T2RequiredArgs<FInlineIconEntry_const_&,FTextBlockStyle_&>_>
  local_570;
  FString local_558;
  FString local_548;
  FMemScope local_538;
  T2RequiredArgs<FInlineIconEntry_const_&,FTextBlockStyle_&> local_530;
  EStyleColor local_51f;
  undefined1 uStack_51e;
  undefined1 local_51d;
  FTextBlockStyle local_518;
  FArguments local_238;
  byte *pbVar11;
  
  FTextBlockStyle::FTextBlockStyle(&local_518,param_2);
  pFVar21 = (FInlineIconEntry *)0x0;
  iVar15 = 0;
  if (SupportedMarkupKeys::Color.Data.ArrayNum == 0) {
    FVar16.Data = (FScriptContainerElement *)L"";
    iVar9 = iVar15;
  }
  else {
    FVar16 = SupportedMarkupKeys::Color.Data.AllocatorInstance;
    iVar9 = SupportedMarkupKeys::Color.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar16.Data);
  iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&param_1->_padding_,uVar8,&SupportedMarkupKeys::Color);
  if (iVar9 != -1) {
    lVar20 = param_1->_padding_ + (longlong)iVar9 * 0x28;
    pFVar17 = (FInlineIconEntry *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      pFVar17 = pFVar21;
    }
    if (pFVar17 != (FInlineIconEntry *)0x0) {
      FVar10 = FColor::FromHex(&local_548);
      pbVar11 = (byte *)CONCAT44(extraout_var,FVar10.field0_0x0);
      local_518.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.G =
           FLinearColor::sRGBToLinearTable[pbVar11[1]];
      local_518.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.B =
           FLinearColor::sRGBToLinearTable[*pbVar11];
      local_518.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[pbVar11[2]];
      local_518.ColorAndOpacity.ColorTableId = local_51f;
      local_518.ColorAndOpacity._18_1_ = uStack_51e;
      local_518.ColorAndOpacity.ColorUseRule = UseColor_Specified;
      local_518.ColorAndOpacity._19_1_ = local_51d;
      local_518.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.A =
           (float)pbVar11[3] * __real_3b808081;
    }
  }
  local_588[0] = 0.75;
  ::FString::FString(&local_558,L"scale");
  if (local_558.Data.ArrayNum == 0) {
    pwVar18 = L"";
    iVar9 = iVar15;
  }
  else {
    pwVar18 = (wchar_t *)local_558.Data.AllocatorInstance.Data;
    iVar9 = local_558.Data.ArrayNum + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar18);
  iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&param_1->_padding_,uVar8,&local_558);
  pFVar17 = pFVar21;
  if (iVar9 != -1) {
    pFVar17 = (FInlineIconEntry *)(param_1->_padding_ + (longlong)iVar9 * 0x28);
  }
  pFVar19 = (FInlineIconEntry *)&pFVar17->ImageSize;
  if (pFVar17 == (FInlineIconEntry *)0x0) {
    pFVar19 = pFVar21;
  }
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  if (pFVar19 != (FInlineIconEntry *)0x0) {
    FDefaultValueHelper::ParseFloat((FString *)pFVar19,local_588);
  }
  ::FString::ToLower((FString *)param_1,&local_580);
  if (local_580.Data.ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    iVar15 = local_580.Data.ArrayNum + -1;
    pwVar18 = (wchar_t *)local_580.Data.AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar18);
  iVar15 = TSet<TTuple<FString,FInlineIconEntry>,TDefaultMapHashableKeyFuncs<FString,FInlineIconEntry,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FInlineIconEntry>,TDefaultMapHashableKeyFuncs<FString,FInlineIconEntry,0>,FDefaultSetAllocator>
                       *)&InlineIconsByTag,uVar8,&local_580);
  if (iVar15 != -1) {
    lVar20 = (longlong)iVar15 * 0x60 + InlineIconsByTag._0_8_;
    pFVar17 = (FInlineIconEntry *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      pFVar17 = pFVar21;
    }
    if (pFVar17 != (FInlineIconEntry *)0x0) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_580.Data.ArrayNum != 0) {
        FVar16.Data = local_580.Data.AllocatorInstance.Data;
      }
      iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"cash");
      this_00 = &this->field_0x8;
      if (iVar15 == 0) {
        EVar22 = TextOnly;
      }
      else {
        pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        EVar22 = pUVar13[0x33].field_0x8;
      }
      pFVar12 = SCommonInlineIcon::FArguments::FArguments(&local_238);
      pFVar12->_DisplayMode = EVar22;
      pFVar12->_IconScale = local_588[0];
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pFVar12->_bTintIcon = (bool)pUVar13[0x33].field_0x9;
      this_01 = (URichTextBlock *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      EVar4 = URichTextBlock::GetTransformPolicy(this_01);
      pFVar12->_TransformPolicy = EVar4;
      local_530.Arg1 = &local_518;
      local_530.Arg0 = pFVar17;
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_548.Data._4_8_ = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope
                (&local_538,(FName *)((longlong)&local_548.Data.AllocatorInstance.Data + 4),true);
      TSlateDecl<SCommonInlineIcon,RequiredArgs::T2RequiredArgs<FInlineIconEntry_const_&,FTextBlockStyle_&>_>
      ::
      TSlateDecl<SCommonInlineIcon,RequiredArgs::T2RequiredArgs<FInlineIconEntry_const_&,FTextBlockStyle_&>_>
                (&local_570,"SCommonInlineIcon",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
                 ,0x15b,&local_530);
      FMemScope::~FMemScope(&local_538);
      FLLMScope::~FLLMScope(local_res18);
      pSVar2 = local_570._Widget.Object;
      if ((local_570._Widget.Object == (SCommonInlineIcon *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar14 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
        return pTVar14;
      }
      SWidget::SWidgetConstruct((SWidget *)local_570._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
      SCommonInlineIcon::Construct
                (local_570._Widget.Object,pFVar12,(local_570._RequiredArgs)->Arg0,
                 (local_570._RequiredArgs)->Arg1);
      if ((local_570._Widget.Object == (SCommonInlineIcon *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar14 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
        return pTVar14;
      }
      if (((local_570._Widget.Object)->_padding_ & 0x10) == 0) {
        cVar6 = (**(code **)((local_570._Widget.Object)->_padding_ + 0x228))
                          (local_570._Widget.Object);
        bVar7 = 0;
        if (cVar6 != '\0') goto LAB_14a7d119e;
      }
      else {
LAB_14a7d119e:
        bVar7 = 0x20;
      }
      *(byte *)&(local_570._Widget.Object)->_padding_ =
           (byte)(local_570._Widget.Object)->_padding_ & 0xdf;
      *(byte *)&(local_570._Widget.Object)->_padding_ =
           (byte)(local_570._Widget.Object)->_padding_ | bVar7;
      if ((local_570._Widget.Object == (SCommonInlineIcon *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar14 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
        return pTVar14;
      }
      pbVar11 = (byte *)((longlong)&(local_570._Widget.Object)->_padding_ + 1);
      *pbVar11 = *pbVar11 | 4;
      if ((local_570._Widget.Object == (SCommonInlineIcon *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar14 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
        return pTVar14;
      }
      FVar3.ReferenceController = local_570._Widget.SharedReferenceCount.ReferenceController;
      local_570._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_570._Widget.Object = (SCommonInlineIcon *)0x0;
      if ((pSVar2 == (SCommonInlineIcon *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar14 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
        return pTVar14;
      }
      __return_storage_ptr__->Object = (SWidget *)pSVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController
      ;
      if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar3.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
      goto LAB_14a7d12ac;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5551749716938587821>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonRichTextBlock.cpp"
                     ,0x153,"InlineIconEntry");
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    pTVar14 = (TSharedPtr<SWidget,1> *)(*pcVar1)();
    return pTVar14;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14a7d12ac:
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  FTextBlockStyle::~FTextBlockStyle(&local_518);
  return __return_storage_ptr__;
}

// Supports @ 14a81ec10

bool __thiscall
FCommonDecorator_InlineIcon::Supports
          (FCommonDecorator_InlineIcon *this,FTextRunParseResults *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  pFVar4 = ::FString::ToLower(&param_1->Name,&local_18);
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,FInlineIconEntry>,TDefaultMapHashableKeyFuncs<FString,FInlineIconEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FInlineIconEntry>,TDefaultMapHashableKeyFuncs<FString,FInlineIconEntry,0>,FDefaultSetAllocator>
                      *)&InlineIconsByTag,uVar2,pFVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar3 != -1;
}

