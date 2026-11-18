// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1

// GenerateWidgetForColumn @ 14e7b1fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SInterchangeGenericAssetMaterialConflictListRow::GenerateWidgetForColumn
          (SInterchangeGenericAssetMaterialConflictListRow *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FText *pFVar10;
  FString *pFVar11;
  FArguments *pFVar12;
  FArguments *pFVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  TSharedRef<SBox,1> *pTVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1418;
  T0RequiredArgs local_1417 [3];
  FLLMScope local_1414;
  FLLMScope local_1410;
  FLLMScope local_140c;
  FLLMScope local_1408 [2];
  FText local_1400;
  FString local_13f0;
  STextBlock *local_13e0;
  TReferenceControllerBase<1> *pTStack_13d8;
  STextBlock *local_13d0;
  TReferenceControllerBase<1> *pTStack_13c8;
  FLinearColor_u_0 local_13c0;
  undefined1 local_13b0;
  undefined1 local_13af;
  undefined2 local_13ae;
  undefined1 local_13ac;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined1 local_1390 [4];
  FName local_138c;
  FMemScope local_1380;
  FName local_1378;
  FMemScope local_1370;
  FName local_1368;
  FMemScope local_1360;
  FName local_1358;
  FMemScope local_1350;
  float local_1348;
  float fStack_1344;
  float fStack_1340;
  float fStack_133c;
  int local_1338;
  undefined4 local_1320;
  float local_1318;
  float fStack_1314;
  float fStack_1310;
  float fStack_130c;
  int local_1308;
  FString local_1300;
  TAttribute<FText> local_12f0;
  TAttribute<FText> local_12c0;
  TAttribute<FText> local_1290;
  TSharedRef<STextBlock,1> local_1260;
  FText local_1250;
  FText local_1240;
  FText local_1230;
  FText local_1220;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1210;
  TSharedRef<SBox,1> local_11f8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_11e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_11d0;
  TSharedRef<STextBlock,1> local_11b8;
  FText local_11a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1198;
  TSharedRef<SBox,1> local_1180;
  FArguments local_1170;
  FArguments local_e30;
  FArguments local_af0;
  FArguments local_598;
  undefined8 uStack_30;
  
  uStack_30 = 0x14e7b1ffe;
  if (*param_1 == SInterchangeGenericAssetMaterialConflictWidget::NAME_Import) {
    if ((this->Item).Object == (FListItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    fVar7 = _UNK_152f5d93c;
    fVar6 = _UNK_152f5d938;
    fVar5 = _UNK_152f5d934;
    fVar4 = ___xmm_3f800000000000003e99999a3f333333;
    fVar20 = _UNK_15090c6dc;
    fVar19 = _UNK_15090c6d8;
    fVar18 = _UNK_15090c6d4;
    fVar17 = ___xmm_3f8000003f800000000000003f800000;
    if (((this->Item).Object)->bMatched == -1) {
      local_1338 = (uint)CONCAT21(local_1320._2_2_,local_res18[0]) << 8;
      iVar16 = local_1338;
      local_1320 = local_1338;
      local_1348 = ___xmm_3f800000000000003e99999a3f333333;
      fStack_1344 = _UNK_152f5d934;
      fStack_1340 = _UNK_152f5d938;
      fStack_133c = _UNK_152f5d93c;
      FText::FText(&local_1400);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_1240,L"InterchangeGenericAssetPipeline",
                           L"SInterchangeGenericAssetMaterialConflictListRow_Conflict_unmatched",
                           L"Import material is unmatched");
      FText::operator=(&local_1400,pFVar10);
      fVar17 = fVar4;
      fVar18 = fVar5;
      fVar19 = fVar6;
      fVar20 = fVar7;
      if (local_1240.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1240.TextData.Reference + 0x10))();
      }
    }
    else {
      local_1308 = CONCAT22(local_1308._2_2_,2);
      iVar16 = local_1308;
      local_1318 = ___xmm_3f8000003f800000000000003f800000;
      fStack_1314 = _UNK_15090c6d4;
      fStack_1310 = _UNK_15090c6d8;
      fStack_130c = _UNK_15090c6dc;
      local_1320 = local_1308;
      FText::FText(&local_1400);
      if ((this->Item).Object == (FListItem *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      local_13f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_13f0.Data.ArrayNum = 0;
      local_13f0.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_13f0,((this->Item).Object)->bMatched);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_1220,L"InterchangeGenericAssetPipeline",
                           L"SInterchangeGenericAssetMaterialConflictListRow_Conflict_matched",
                           L"Import material is matched with original asset index: ");
      pFVar11 = FText::ToString(pFVar10);
      ::FString::ConcatFF(&local_1300,pFVar11,&local_13f0);
      pFVar10 = FText::FromString(&local_1230,&local_1300);
      FText::operator=(&local_1400,pFVar10);
      if (local_1230.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1230.TextData.Reference + 0x10))();
      }
      if (local_1300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1300.Data.AllocatorInstance.Data);
      }
      if (local_1220.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1220.TextData.Reference + 0x10))();
      }
      if (local_13f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_13f0.Data.AllocatorInstance.Data);
      }
    }
    pFVar12 = SBox::FArguments::FArguments(&local_1170);
    pFVar12 = SBox::FArguments::Padding(pFVar12,__real_40000000);
    pFVar12->_HAlign = HAlign_Left;
    pFVar12->_VAlign = VAlign_Center;
    pFVar13 = STextBlock::FArguments::FArguments(&local_af0);
    if ((this->Item).Object == (FListItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pFVar10 = FText::FromString(&local_11a8,&((this->Item).Object)->ImportName);
    FText::FText(&local_12c0.Value,pFVar10);
    local_12c0.bIsSet = true;
    local_12c0.Getter._16_8_ = 0;
    local_12c0.Getter._0_8_ = 0;
    local_12c0.Getter._8_8_ = 0;
    pFVar13 = STextBlock::FArguments::Text(pFVar13,&local_12c0);
    local_12f0.Value.TextData.Reference = local_1400.TextData.Reference;
    if (local_1400.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1400.TextData.Reference + 8))
                (local_1400.TextData.Reference,local_1390);
    }
    local_12f0.Value.Flags = local_1400.Flags;
    local_12f0.Getter._16_8_ = 0;
    local_12f0.bIsSet = true;
    local_12f0.Getter._0_8_ = 0;
    local_12f0.Getter._8_8_ = 0;
    pFVar13 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar13,&local_12f0);
    local_13af = local_1320._1_1_;
    local_13ae = local_1320._2_2_;
    local_1398 = 0;
    local_13b0 = (undefined1)iVar16;
    local_13ac = 1;
    local_13a8 = 0;
    uStack_13a0 = 0;
    local_13c0._s_0.R = fVar17;
    local_13c0._s_0.G = fVar18;
    local_13c0._s_0.B = fVar19;
    local_13c0._s_0.A = fVar20;
    pFVar13 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar13,(TAttribute<FSlateColor> *)&local_13c0._s_0);
    FLLMScope::FLLMScope(&local_1414,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_138c = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1380,&local_138c,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1198,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
               ,0x7c3,local_res18);
    FMemScope::~FMemScope(&local_1380);
    FLLMScope::~FLLMScope(&local_1414);
    pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1198,&local_11b8,pFVar13);
    pTVar1 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_13e0 = pTVar14->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar12->_Content).Widget.Object = (SWidget *)local_13e0;
    (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_13d8 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FLLMScope::FLLMScope(&local_1410,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1378 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1370,&local_1378,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_1210,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
               ,0x7be,local_res20);
    FMemScope::~FMemScope(&local_1370);
    FLLMScope::~FLLMScope(&local_1410);
    pTVar15 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1210,&local_11f8,pFVar12);
    __return_storage_ptr__->Object = (SWidget *)pTVar15->Object;
    pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1210._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1198._Widget.SharedReferenceCount.ReferenceController);
    if (local_11a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11a8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_af0);
    SBox::FArguments::~FArguments(&local_1170);
    if (local_1400.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1400.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar12 = SBox::FArguments::FArguments(&local_e30);
    pFVar12 = SBox::FArguments::Padding(pFVar12,__real_40000000);
    pFVar12->_HAlign = HAlign_Left;
    pFVar12->_VAlign = VAlign_Center;
    pFVar13 = STextBlock::FArguments::FArguments(&local_598);
    if ((this->Item).Object == (FListItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pFVar10 = FText::FromString(&local_1250,&((this->Item).Object)->AssetName);
    FText::FText(&local_1290.Value,pFVar10);
    local_1290.bIsSet = true;
    local_1290.Getter._16_8_ = 0;
    local_1290.Getter._0_8_ = 0;
    local_1290.Getter._8_8_ = 0;
    pFVar13 = STextBlock::FArguments::Text(pFVar13,&local_1290);
    FLLMScope::FLLMScope(&local_140c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1368 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1360,&local_1368,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_11d0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
               ,2000,&local_1418);
    FMemScope::~FMemScope(&local_1360);
    FLLMScope::~FLLMScope(&local_140c);
    pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_11d0,&local_1260,pFVar13);
    pTVar1 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_13d0 = pTVar14->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar12->_Content).Widget.Object = (SWidget *)local_13d0;
    (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_13c8 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FLLMScope::FLLMScope(local_1408,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1358 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1350,&local_1358,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_11e8,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
               ,0x7cb,local_1417);
    FMemScope::~FMemScope(&local_1350);
    FLLMScope::~FLLMScope(local_1408);
    pTVar15 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_11e8,&local_1180,pFVar12);
    __return_storage_ptr__->Object = (SWidget *)pTVar15->Object;
    pTVar2 = (pTVar15->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1180.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11e8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1260.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11d0._Widget.SharedReferenceCount.ReferenceController);
    if (local_1250.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1250.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
    SBox::FArguments::~FArguments(&local_e30);
  }
  return __return_storage_ptr__;
}

