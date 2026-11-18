// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticStruct @ 14d88f2f0

UScriptStruct * __cdecl FSampledSequenceViewerStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSampledSequenceViewerStyle,(UObject *)pUVar1,
                         L"SampledSequenceViewerStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSampledSequenceViewerStyle.OuterSingleton;
}

// FSampledSequenceViewerStyle @ 14d8b66b0

FSampledSequenceViewerStyle * __thiscall
FSampledSequenceViewerStyle::FSampledSequenceViewerStyle
          (FSampledSequenceViewerStyle *this,FSampledSequenceViewerStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  *(undefined ***)this = &___7FSampledSequenceViewerStyle__6B_;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SequenceColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SequenceColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SequenceColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SequenceColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SequenceColor).field_0x12;
  (this->SequenceColor).ColorUseRule = (param_1->SequenceColor).ColorUseRule;
  (this->SequenceColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SequenceColor).field_0x12 = uVar3;
  this->SequenceLineThickness = param_1->SequenceLineThickness;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->MajorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->MajorGridLineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->MajorGridLineColor).field_0x12;
  (this->MajorGridLineColor).ColorUseRule = (param_1->MajorGridLineColor).ColorUseRule;
  (this->MajorGridLineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->MajorGridLineColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->MinorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->MinorGridLineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->MinorGridLineColor).field_0x12;
  (this->MinorGridLineColor).ColorUseRule = (param_1->MinorGridLineColor).ColorUseRule;
  (this->MinorGridLineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->MinorGridLineColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ZeroCrossingLineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ZeroCrossingLineColor).field_0x12;
  (this->ZeroCrossingLineColor).ColorUseRule = (param_1->ZeroCrossingLineColor).ColorUseRule;
  (this->ZeroCrossingLineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->ZeroCrossingLineColor).field_0x12 = uVar3;
  this->ZeroCrossingLineThickness = param_1->ZeroCrossingLineThickness;
  this->SampleMarkersSize = param_1->SampleMarkersSize;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SequenceBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SequenceBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SequenceBackgroundColor).field_0x12;
  (this->SequenceBackgroundColor).ColorUseRule = (param_1->SequenceBackgroundColor).ColorUseRule;
  (this->SequenceBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SequenceBackgroundColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,&param_1->BackgroundBrush);
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  return this;
}

// FSampledSequenceViewerStyle @ 14d8b6760

FSampledSequenceViewerStyle * __thiscall
FSampledSequenceViewerStyle::FSampledSequenceViewerStyle(FSampledSequenceViewerStyle *this)

{
  FLinearColor FVar1;
  ISlateStyle *pIVar2;
  FSlateBrush *pFVar3;
  undefined8 local_res8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined ***)this = &___7FSampledSequenceViewerStyle__6B_;
  FVar1 = FLinearColor::White;
  (this->SequenceColor).ColorUseRule = UseColor_Specified;
  (this->SequenceColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->SequenceLineThickness = 1.0;
  FVar1 = FLinearColor::Black;
  (this->MajorGridLineColor).ColorUseRule = UseColor_Specified;
  (this->MajorGridLineColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0
  ;
  *(undefined8 *)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 = 0;
  (this->MinorGridLineColor).SpecifiedColor.field0_0x0._s_0.B = 0.0;
  (this->MinorGridLineColor).SpecifiedColor.field0_0x0._s_0.A = 0.5;
  (this->MinorGridLineColor).ColorUseRule = UseColor_Specified;
  FVar1 = FLinearColor::Black;
  (this->ZeroCrossingLineColor).ColorUseRule = UseColor_Specified;
  (this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ZeroCrossingLineThickness = 1.0;
  this->SampleMarkersSize = 2.5;
  (this->SequenceBackgroundColor).SpecifiedColor.field0_0x0._s_0.R = 0.02;
  (this->SequenceBackgroundColor).SpecifiedColor.field0_0x0._s_0.G = 0.02;
  (this->SequenceBackgroundColor).SpecifiedColor.field0_0x0._s_0.B = 0.02;
  (this->SequenceBackgroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->SequenceBackgroundColor).ColorUseRule = UseColor_Specified;
  FLazyName::Resolve(&AudioWidgetStylesSharedParams::BackgroundBrushName);
  pIVar2 = FAppStyle::Get();
  pFVar3 = (FSlateBrush *)(**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,local_res8,0,0);
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,pFVar3);
  this->DesiredWidth = 1280.0;
  this->DesiredHeight = 720.0;
  return this;
}

// operator= @ 14d8c3a50

FSampledSequenceViewerStyle * __thiscall
FSampledSequenceViewerStyle::operator=
          (FSampledSequenceViewerStyle *this,FSampledSequenceViewerStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->SequenceColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SequenceColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SequenceColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SequenceColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SequenceColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SequenceColor).field_0x12;
  (this->SequenceColor).ColorUseRule = (param_1->SequenceColor).ColorUseRule;
  (this->SequenceColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SequenceColor).field_0x12 = uVar3;
  this->SequenceLineThickness = param_1->SequenceLineThickness;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->MajorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MajorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->MajorGridLineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->MajorGridLineColor).field_0x12;
  (this->MajorGridLineColor).ColorUseRule = (param_1->MajorGridLineColor).ColorUseRule;
  (this->MajorGridLineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->MajorGridLineColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->MinorGridLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->MinorGridLineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->MinorGridLineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->MinorGridLineColor).field_0x12;
  (this->MinorGridLineColor).ColorUseRule = (param_1->MinorGridLineColor).ColorUseRule;
  (this->MinorGridLineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->MinorGridLineColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8)
  ;
  *(undefined8 *)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->ZeroCrossingLineColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ZeroCrossingLineColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->ZeroCrossingLineColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->ZeroCrossingLineColor).field_0x12;
  (this->ZeroCrossingLineColor).ColorUseRule = (param_1->ZeroCrossingLineColor).ColorUseRule;
  (this->ZeroCrossingLineColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->ZeroCrossingLineColor).field_0x12 = uVar3;
  this->ZeroCrossingLineThickness = param_1->ZeroCrossingLineThickness;
  this->SampleMarkersSize = param_1->SampleMarkersSize;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->SequenceBackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->SequenceBackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->SequenceBackgroundColor).field_0x12;
  (this->SequenceBackgroundColor).ColorUseRule = (param_1->SequenceBackgroundColor).ColorUseRule;
  (this->SequenceBackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->SequenceBackgroundColor).field_0x12 = uVar3;
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->BackgroundBrush);
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  return this;
}

// GetDefault @ 14d92d0e0

FSampledSequenceViewerStyle * __cdecl FSampledSequenceViewerStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSampledSequenceViewerStyle(&::Default);
      atexit(`FSampledSequenceViewerStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934620

void __thiscall
FSampledSequenceViewerStyle::GetResources
          (FSampledSequenceViewerStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18 [2];
  
  local_18[0] = &this->BackgroundBrush;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  *(FSlateBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetTypeName @ 14d9375b0

FName __thiscall FSampledSequenceViewerStyle::GetTypeName(FSampledSequenceViewerStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

