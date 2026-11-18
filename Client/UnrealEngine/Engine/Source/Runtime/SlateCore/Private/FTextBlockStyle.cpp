// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 17

// StaticStruct @ 14252dfd0

UScriptStruct * __cdecl FTextBlockStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTextBlockStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FTextBlockStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextBlockStyle,(UObject *)pUVar1,
                         L"TextBlockStyle");
  }
  return Z_Registration_Info_UScriptStruct_FTextBlockStyle.OuterSingleton;
}

// FTextBlockStyle @ 142548500

FTextBlockStyle * __thiscall
FTextBlockStyle::FTextBlockStyle(FTextBlockStyle *this,FTextBlockStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  *(undefined ***)this = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&this->Font,&param_1->Font);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ColorAndOpacity).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12;
  (this->ColorAndOpacity).ColorUseRule = (param_1->ColorAndOpacity).ColorUseRule;
  (this->ColorAndOpacity).ColorTableId = EVar2;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = uVar3;
  this->ShadowOffset = param_1->ShadowOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ShadowColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0 =
       *(undefined8 *)&(param_1->ShadowColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SelectedBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SelectedBackgroundColor).field_0x12;
  (this->SelectedBackgroundColor).ColorUseRule = (param_1->SelectedBackgroundColor).ColorUseRule;
  (this->SelectedBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SelectedBackgroundColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->HighlightColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HighlightColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HighlightColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->HighlightColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->HighlightColor).field_0x12;
  (this->HighlightColor).ColorUseRule = (param_1->HighlightColor).ColorUseRule;
  (this->HighlightColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->HighlightColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->HighlightShape,&param_1->HighlightShape);
  FSlateBrush::FSlateBrush(&this->StrikeBrush,&param_1->StrikeBrush);
  FSlateBrush::FSlateBrush(&this->UnderlineBrush,&param_1->UnderlineBrush);
  this->TransformPolicy = param_1->TransformPolicy;
  this->OverflowPolicy = param_1->OverflowPolicy;
  return this;
}

// FTextBlockStyle @ 1425485f0

FTextBlockStyle * __thiscall FTextBlockStyle::FTextBlockStyle(FTextBlockStyle *this)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ColorAndOpacity).ColorUseRule = UseColor_Specified;
  this->ShadowOffset = (FDeprecateSlateVector2D)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->ShadowColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  *(undefined8 *)&(this->SelectedBackgroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->SelectedBackgroundColor).ColorUseRule = UseColor_Foreground;
  FVar1 = FLinearColor::Black;
  (this->SelectedBackgroundColor).ColorTableId = Black;
  (this->HighlightColor).ColorUseRule = UseColor_Specified;
  (this->HighlightColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FSlateBrush::FSlateBrush(&this->HighlightShape);
  FSlateBrush::FSlateBrush(&this->StrikeBrush);
  FSlateBrush::FSlateBrush(&this->UnderlineBrush);
  this->TransformPolicy = None;
  this->OverflowPolicy = Clip;
  return this;
}

// ~FTextBlockStyle @ 14254c4d0

void __thiscall FTextBlockStyle::~FTextBlockStyle(FTextBlockStyle *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &___7FTextBlockStyle__6B_;
  (this->UnderlineBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UnderlineBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->StrikeBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->StrikeBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->HighlightShape).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->HighlightShape)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// operator= @ 14254e800

FTextBlockStyle * __thiscall
FTextBlockStyle::operator=(FTextBlockStyle *this,FTextBlockStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  FSlateFontInfo::operator=(&this->Font,&param_1->Font);
  uVar1 = *(undefined8 *)((longlong)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ColorAndOpacity).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ColorAndOpacity).field_0x12;
  (this->ColorAndOpacity).ColorUseRule = (param_1->ColorAndOpacity).ColorUseRule;
  (this->ColorAndOpacity).ColorTableId = EVar2;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = uVar3;
  this->ShadowOffset = param_1->ShadowOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ShadowColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&(this->ShadowColorAndOpacity).field0_0x0 =
       *(undefined8 *)&(param_1->ShadowColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(this->ShadowColorAndOpacity).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SelectedBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SelectedBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SelectedBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SelectedBackgroundColor).field_0x12;
  (this->SelectedBackgroundColor).ColorUseRule = (param_1->SelectedBackgroundColor).ColorUseRule;
  (this->SelectedBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SelectedBackgroundColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->HighlightColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HighlightColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HighlightColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->HighlightColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->HighlightColor).field_0x12;
  (this->HighlightColor).ColorUseRule = (param_1->HighlightColor).ColorUseRule;
  (this->HighlightColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->HighlightColor).field_0x12 = uVar3;
  FSlateBrush::operator=(&this->HighlightShape,&param_1->HighlightShape);
  FSlateBrush::operator=(&this->StrikeBrush,&param_1->StrikeBrush);
  FSlateBrush::operator=(&this->UnderlineBrush,&param_1->UnderlineBrush);
  this->TransformPolicy = param_1->TransformPolicy;
  this->OverflowPolicy = param_1->OverflowPolicy;
  return this;
}

// GetDefault @ 1425804c0

FTextBlockStyle * __cdecl FTextBlockStyle::GetDefault(void)

{
  code *pcVar1;
  bool bVar2;
  FTextBlockStyle *pFVar3;
  FSlateFontInfo *pFVar4;
  TRawPtrProxy<FTextBlockStyle> local_res8 [4];
  FSlateFontInfo local_68;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FTextBlockStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (::Default.Object == (FTextBlockStyle *)0x0) {
    pFVar3 = ::operator_new(0x2e0);
    local_res8[0].Object = (FTextBlockStyle *)0x0;
    if (pFVar3 != (FTextBlockStyle *)0x0) {
      local_res8[0].Object = FTextBlockStyle(pFVar3);
    }
    TSharedPtr<FTextBlockStyle,1>::operator=<FTextBlockStyle>(&::Default,local_res8);
    pFVar4 = FStyleDefaults::GetFontInfo(&local_68,10);
    if (::Default.Object == (FTextBlockStyle *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTextBlockStyle *)(*pcVar1)();
        return pFVar3;
      }
    }
    FSlateFontInfo::operator=(&(::Default.Object)->Font,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return ::Default.Object;
}

// GetResources @ 142587880

void __thiscall
FTextBlockStyle::GetResources
          (FTextBlockStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->HighlightShape;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  local_10 = &this->UnderlineBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  return;
}

// GetTypeName @ 142589dd0

FName __thiscall FTextBlockStyle::GetTypeName(FTextBlockStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetFont @ 142590fb0

FTextBlockStyle * __thiscall FTextBlockStyle::SetFont(FTextBlockStyle *this,FSlateFontInfo *param_1)

{
  FSlateFontInfo::operator=(&this->Font,param_1);
  return this;
}

// SetFont @ 142590fe0

FTextBlockStyle * __thiscall
FTextBlockStyle::SetFont(FTextBlockStyle *this,FName *param_1,float param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 142591030

FTextBlockStyle * __thiscall
FTextBlockStyle::SetFont(FTextBlockStyle *this,FString *param_1,float param_2)

{
  FSlateFontInfo *pFVar1;
  wchar_t *pwVar2;
  FSlateFontInfo local_68;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,pwVar2,param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 142591090

FTextBlockStyle * __thiscall
FTextBlockStyle::SetFont(FTextBlockStyle *this,char *param_1,float param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 1425910e0

FTextBlockStyle * __thiscall
FTextBlockStyle::SetFont(FTextBlockStyle *this,wchar_t *param_1,float param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 142591130

FTextBlockStyle * __thiscall FTextBlockStyle::SetFontName(FTextBlockStyle *this,FName *param_1)

{
  FSlateFontInfo *pFVar1;
  float fVar2;
  FSlateFontInfo local_68;
  
  fVar2 = FSlateFontInfo::GetClampSize(&this->Font);
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,fVar2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 1425911a0

FTextBlockStyle * __thiscall FTextBlockStyle::SetFontName(FTextBlockStyle *this,FString *param_1)

{
  FSlateFontInfo *pFVar1;
  float fVar2;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  local_88.OutlineSize = 0;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  fVar2 = FSlateFontInfo::GetClampSize(&this->Font);
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,fVar2,Default,&local_88);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 142591240

FTextBlockStyle * __thiscall FTextBlockStyle::SetFontName(FTextBlockStyle *this,char *param_1)

{
  FSlateFontInfo *pFVar1;
  float fVar2;
  FSlateFontInfo local_68;
  
  fVar2 = FSlateFontInfo::GetClampSize(&this->Font);
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,fVar2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 1425912b0

FTextBlockStyle * __thiscall FTextBlockStyle::SetFontName(FTextBlockStyle *this,wchar_t *param_1)

{
  FSlateFontInfo *pFVar1;
  float fVar2;
  FSlateFontInfo local_68;
  
  fVar2 = FSlateFontInfo::GetClampSize(&this->Font);
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,fVar2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

