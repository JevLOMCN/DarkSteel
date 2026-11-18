// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 5

// Create @ 142e555c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FSlateStyleSet,1> * __cdecl
FWidgetReflectorStyle::Create(TSharedRef<FSlateStyleSet,1> *__return_storage_ptr__)

{
  code *pcVar1;
  UObject *pUVar2;
  void *pvVar3;
  undefined8 uVar4;
  FSharedReferencer<1> FVar5;
  FSlateStyleSet *pFVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  FName FVar8;
  FString *pFVar9;
  FName *pFVar10;
  FName FVar11;
  ISlateStyle *pIVar12;
  FToolBarStyle *pFVar13;
  FTextBlockStyle *pFVar14;
  FButtonStyle *pFVar15;
  FName FVar16;
  FName local_res8;
  FName local_res10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_81e8;
  FLinearColor_u_0 local_81d8;
  FButtonStyle local_81c8;
  FToolBarStyle local_7e38;
  FToolBarStyle local_3f38;
  
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar6 = ::operator_new(0x400);
  local_res10 = FVar16;
  if (pFVar6 != (FSlateStyleSet *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
    local_res8 = StyleSetName;
    local_res10 = (FName)FSlateStyleSet::FSlateStyleSet(pFVar6,&local_res8);
  }
  TSharedRef<FSlateStyleSet,1>::TSharedRef<FSlateStyleSet,1><FSlateStyleSet>
            (__return_storage_ptr__,(TRawPtrProxy<FSlateStyleSet> *)&local_res10);
  pFVar6 = __return_storage_ptr__->Object;
  pcVar1 = *(code **)(pFVar6->_padding_ + 0xc0);
  pTVar7 = &FPaths::EngineContentDir((FString *)&local_81d8._s_0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_81e8,pTVar7,0xe - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_81e8,L"Editor/Slate",0xc);
  (*pcVar1)(pFVar6,&local_81e8);
  if (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  if ((void *)local_81d8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_81d8._0_8_);
  }
  pFVar6 = __return_storage_ptr__->Object;
  pcVar1 = *(code **)(pFVar6->_padding_ + 0xf8);
  pTVar7 = &FPaths::EngineContentDir((FString *)&local_81d8._s_0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_81e8,pTVar7,7 - (uint)(pTVar7->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_81e8,L"Slate",5);
  (*pcVar1)(pFVar6,&local_81e8);
  if (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  if ((void *)local_81d8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_81d8._0_8_);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar8 = (FName)::operator_new(0xb0);
  uVar4 = _UNK_15076b1f8;
  pvVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  FVar11 = FVar16;
  if (FVar8 != (FName)0x0) {
    local_81d8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_81d8._8_8_ = _UNK_15076b1f8;
    local_res8.ComparisonIndex.Value = 0x41c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,"Starship/Common/Import",L".svg")
    ;
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar8,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar8 = &___7FSlateVectorImageBrush__6B_;
    FVar11 = FVar8;
  }
  pFVar10 = ::FName::FName(&local_res10,"Icon.LoadSnapshot");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar11);
  if ((FVar8 != (FName)0x0) && (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar8 = (FName)::operator_new(0xb0);
  FVar11 = FVar16;
  if (FVar8 != (FName)0x0) {
    local_81d8._0_8_ = pvVar3;
    local_81d8._8_8_ = uVar4;
    local_res8.ComparisonIndex.Value = 0x41c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,"Starship/Common/filter",L".svg")
    ;
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar8,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar8 = &___7FSlateVectorImageBrush__6B_;
    FVar11 = FVar8;
  }
  pFVar10 = ::FName::FName(&local_res10,"Icon.Filter");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar11);
  if ((FVar8 != (FName)0x0) && (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar8 = (FName)::operator_new(0xb0);
  FVar11 = FVar16;
  if (FVar8 != (FName)0x0) {
    local_81d8._0_8_ = pvVar3;
    local_81d8._8_8_ = uVar4;
    local_res8.ComparisonIndex.Value = 0x41c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,"Starship/Common/arrow-left",
                        L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar8,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar8 = &___7FSlateVectorImageBrush__6B_;
    FVar11 = FVar8;
  }
  pFVar10 = ::FName::FName(&local_res10,"Symbols.LeftArrow");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar11);
  if ((FVar8 != (FName)0x0) && (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar8 = (FName)::operator_new(0xb0);
  FVar11 = FVar16;
  if (FVar8 != (FName)0x0) {
    local_81d8._0_8_ = pvVar3;
    local_81d8._8_8_ = uVar4;
    local_res8.ComparisonIndex.Value = 0x41c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,"Starship/Common/arrow-right",
                        L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar8,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar8 = &___7FSlateVectorImageBrush__6B_;
    FVar11 = FVar8;
  }
  pFVar10 = ::FName::FName(&local_res10,"Symbols.RightArrow");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar11);
  if ((FVar8 != (FName)0x0) && (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar8 = (FName)::operator_new(0xb0);
  FVar11 = FVar16;
  if (FVar8 != (FName)0x0) {
    local_81d8._0_8_ = pvVar3;
    local_81d8._8_8_ = uVar4;
    local_res8.ComparisonIndex.Value = 0x41c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,"Starship/Common/arrow-up",
                        L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar8,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar8 = &___7FSlateVectorImageBrush__6B_;
    FVar11 = FVar8;
  }
  pFVar10 = ::FName::FName(&local_res10,"Symbols.UpArrow");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar11);
  if ((FVar8 != (FName)0x0) && (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar8 = (FName)::operator_new(0xb0);
  FVar11 = FVar16;
  if (FVar8 != (FName)0x0) {
    local_81d8._0_8_ = pvVar3;
    local_81d8._8_8_ = uVar4;
    local_res8.ComparisonIndex.Value = 0x41c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,"Starship/Common/arrow-down",
                        L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar8,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar8 = &___7FSlateVectorImageBrush__6B_;
    FVar11 = FVar8;
  }
  pFVar10 = ::FName::FName(&local_res10,"Symbols.DownArrow");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar11);
  if ((FVar8 != (FName)0x0) && (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pFVar6 = __return_storage_ptr__->Object;
  FVar11 = (FName)::operator_new(0xb0);
  if (FVar11 != (FName)0x0) {
    local_81d8._0_8_ = pvVar3;
    local_81d8._8_8_ = uVar4;
    local_res8.ComparisonIndex.Value = 0x40c00000;
    local_res8.Number = 0x41c00000;
    pFVar9 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                       (__return_storage_ptr__->Object,&local_81e8,
                        "Starship/Common/ellipsis-vertical-narrow",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)FVar11,pFVar9,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_81d8._s_0,NoTile,Vector);
    *(undefined ***)FVar11 = &___7FSlateVectorImageBrush__6B_;
    FVar16 = FVar11;
  }
  pFVar10 = ::FName::FName(&local_res10,"Icon.Ellipsis");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar6,*pFVar10,(FSlateVectorImageBrush *)FVar16);
  if ((FVar11 != (FName)0x0) &&
     (local_81e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_81e8.AllocatorInstance.Data);
  }
  pIVar12 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"SlimToolBar");
  pFVar13 = (FToolBarStyle *)
            (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12,FToolBarStyle::TypeName,*pFVar10,0,1);
  if (pFVar13 == (FToolBarStyle *)0x0) {
    pFVar13 = FToolBarStyle::GetDefault();
  }
  FToolBarStyle::FToolBarStyle(&local_7e38,pFVar13);
  pIVar12 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ButtonText");
  pFVar14 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12,FTextBlockStyle::TypeName,*pFVar10,0,1)
  ;
  if (pFVar14 == (FTextBlockStyle *)0x0) {
    pFVar14 = FTextBlockStyle::GetDefault();
  }
  pFVar14 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)&local_81c8,pFVar14);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (pFVar14->Font).FontObject.field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_7e38.LabelStyle.Font.FontObject.field0_0x0 = (pFVar14->Font).FontObject.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (pFVar14->Font).FontMaterial.field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_7e38.LabelStyle.Font.FontMaterial.field0_0x0 = (pFVar14->Font).FontMaterial.field0_0x0;
  local_7e38.LabelStyle.Font.OutlineSettings.OutlineSize =
       (pFVar14->Font).OutlineSettings.OutlineSize;
  local_7e38.LabelStyle.Font.OutlineSettings.bMiteredCorners =
       (pFVar14->Font).OutlineSettings.bMiteredCorners;
  local_7e38.LabelStyle.Font.OutlineSettings.bSeparateFillAlpha =
       (pFVar14->Font).OutlineSettings.bSeparateFillAlpha;
  local_7e38.LabelStyle.Font.OutlineSettings.bApplyOutlineToDropShadows =
       (pFVar14->Font).OutlineSettings.bApplyOutlineToDropShadows;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (pFVar14->Font).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr,
     pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FVar5.ReferenceController =
       local_7e38.LabelStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController;
  local_7e38.LabelStyle.Font.OutlineSettings.OutlineMaterial.field0_0x0 =
       (pFVar14->Font).OutlineSettings.OutlineMaterial.field0_0x0;
  local_7e38.LabelStyle.Font.OutlineSettings.OutlineColor.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar14->Font).OutlineSettings.OutlineColor.field0_0x0;
  local_7e38.LabelStyle.Font.OutlineSettings.OutlineColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar14->Font).OutlineSettings.OutlineColor.field0_0x0 + 8);
  local_7e38.LabelStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController =
       (pFVar14->Font).CompositeFont.SharedReferenceCount.ReferenceController;
  local_7e38.LabelStyle.Font.CompositeFont.Object = (pFVar14->Font).CompositeFont.Object;
  if (local_7e38.LabelStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7e38.LabelStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7e38.LabelStyle.Font.CompositeFont.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  local_7e38.LabelStyle.Font.TypefaceFontName = (pFVar14->Font).TypefaceFontName;
  local_7e38.LabelStyle.Font.Size = (pFVar14->Font).Size;
  local_7e38.LabelStyle.Font.LetterSpacing = (pFVar14->Font).LetterSpacing;
  local_7e38.LabelStyle.Font.SkewAmount = (pFVar14->Font).SkewAmount;
  local_7e38.LabelStyle.Font.FontFallback = (pFVar14->Font).FontFallback;
  local_7e38.LabelStyle.Font.bForceMonospaced = (pFVar14->Font).bForceMonospaced;
  local_7e38.LabelStyle.Font.bMaterialIsStencil = (pFVar14->Font).bMaterialIsStencil;
  local_7e38.LabelStyle.Font.MonospacedWidth = (pFVar14->Font).MonospacedWidth;
  local_7e38.LabelStyle.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar14->ColorAndOpacity).SpecifiedColor.field0_0x0;
  local_7e38.LabelStyle.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar14->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  local_7e38.LabelStyle.ColorAndOpacity.ColorUseRule = (pFVar14->ColorAndOpacity).ColorUseRule;
  local_7e38.LabelStyle.ColorAndOpacity.ColorTableId = (pFVar14->ColorAndOpacity).ColorTableId;
  local_7e38.LabelStyle.ColorAndOpacity._18_2_ =
       *(undefined2 *)&(pFVar14->ColorAndOpacity).field_0x12;
  local_7e38.LabelStyle.ShadowOffset = pFVar14->ShadowOffset;
  local_7e38.LabelStyle.ShadowColorAndOpacity.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar14->ShadowColorAndOpacity).field0_0x0;
  local_7e38.LabelStyle.ShadowColorAndOpacity.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar14->ShadowColorAndOpacity).field0_0x0 + 8);
  local_7e38.LabelStyle.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar14->SelectedBackgroundColor).SpecifiedColor.field0_0x0;
  local_7e38.LabelStyle.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar14->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  local_7e38.LabelStyle.SelectedBackgroundColor.ColorUseRule =
       (pFVar14->SelectedBackgroundColor).ColorUseRule;
  local_7e38.LabelStyle.SelectedBackgroundColor.ColorTableId =
       (pFVar14->SelectedBackgroundColor).ColorTableId;
  local_7e38.LabelStyle.SelectedBackgroundColor._18_2_ =
       *(undefined2 *)&(pFVar14->SelectedBackgroundColor).field_0x12;
  local_7e38.LabelStyle.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar14->HighlightColor).SpecifiedColor.field0_0x0;
  local_7e38.LabelStyle.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar14->HighlightColor).SpecifiedColor.field0_0x0 + 8);
  local_7e38.LabelStyle.HighlightColor.ColorUseRule = (pFVar14->HighlightColor).ColorUseRule;
  local_7e38.LabelStyle.HighlightColor.ColorTableId = (pFVar14->HighlightColor).ColorTableId;
  local_7e38.LabelStyle.HighlightColor._18_2_ = *(undefined2 *)&(pFVar14->HighlightColor).field_0x12
  ;
  FSlateBrush::operator=(&local_7e38.LabelStyle.HighlightShape,&pFVar14->HighlightShape);
  FSlateBrush::operator=(&local_7e38.LabelStyle.StrikeBrush,&pFVar14->StrikeBrush);
  FSlateBrush::operator=(&local_7e38.LabelStyle.UnderlineBrush,&pFVar14->UnderlineBrush);
  local_7e38.LabelStyle.TransformPolicy = pFVar14->TransformPolicy;
  local_7e38.LabelStyle.OverflowPolicy = pFVar14->OverflowPolicy;
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)&local_81c8);
  pFVar6 = __return_storage_ptr__->Object;
  pFVar10 = ::FName::FName(&local_res8,"BoldSlimToolbar");
  FSlateStyleSet::Set<FToolBarStyle>(pFVar6,*pFVar10,&local_7e38);
  FToolBarStyle::~FToolBarStyle(&local_7e38);
  pIVar12 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"SlimToolBar");
  pFVar13 = (FToolBarStyle *)
            (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12,FToolBarStyle::TypeName,*pFVar10,0,1);
  if (pFVar13 == (FToolBarStyle *)0x0) {
    pFVar13 = FToolBarStyle::GetDefault();
  }
  FToolBarStyle::FToolBarStyle(&local_3f38,pFVar13);
  pFVar6 = __return_storage_ptr__->Object;
  pFVar10 = ::FName::FName(&local_res8,"Menu.Label");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar6,*pFVar10,&local_3f38.LabelStyle);
  pFVar6 = __return_storage_ptr__->Object;
  pFVar15 = FButtonStyle::FButtonStyle(&local_81c8,&local_3f38.ButtonStyle);
  (pFVar15->NormalPadding).Left = 0.0;
  (pFVar15->NormalPadding).Top = 0.0;
  (pFVar15->NormalPadding).Right = 0.0;
  (pFVar15->NormalPadding).Bottom = 0.0;
  (pFVar15->PressedPadding).Left = 0.0;
  (pFVar15->PressedPadding).Top = 0.0;
  (pFVar15->PressedPadding).Right = 0.0;
  (pFVar15->PressedPadding).Bottom = 0.0;
  pFVar10 = ::FName::FName(&local_res8,"Menu.Button");
  FSlateStyleSet::Set<FButtonStyle>(pFVar6,*pFVar10,pFVar15);
  FButtonStyle::~FButtonStyle(&local_81c8);
  FToolBarStyle::~FToolBarStyle(&local_3f38);
  return __return_storage_ptr__;
}

// Get @ 142e978c0

ISlateStyle * __cdecl FWidgetReflectorStyle::Get(void)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  
  if ((StyleInstance.Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISlateStyle *)(*pcVar1)();
    return pIVar3;
  }
  return (ISlateStyle *)StyleInstance.Object;
}

// GetStyleSetName @ 142ea8230

FName __cdecl FWidgetReflectorStyle::GetStyleSetName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = StyleSetName;
  return in_RCX;
}

// Initialize @ 142eba680

void __cdecl FWidgetReflectorStyle::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FSlateStyleSet,1> *pTVar3;
  FSharedReferencer<1> local_20;
  TSharedRef<FSlateStyleSet,1> local_18;
  
  if (StyleInstance.Object != (FSlateStyleSet *)0x0) {
    return;
  }
  pTVar3 = Create(&local_18);
  local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  StyleInstance.Object = pTVar3->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&StyleInstance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (StyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)StyleInstance.Object);
  return;
}

// Shutdown @ 142f06670

void __cdecl FWidgetReflectorStyle::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_10 [2];
  
  if (StyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)StyleInstance.Object);
  if ((StyleInstance.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
     || ((StyleInstance.SharedReferenceCount.ReferenceController)->SharedReferenceCount !=
         (atomic<int>)0x1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7548361896953380892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Styling\\WidgetReflectorStyle.cpp"
                       ,0x1c,"StyleInstance.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  StyleInstance.Object = (FSlateStyleSet *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&StyleInstance.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

