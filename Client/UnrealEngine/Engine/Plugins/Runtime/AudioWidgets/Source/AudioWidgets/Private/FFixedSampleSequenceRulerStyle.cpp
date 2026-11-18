// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticStruct @ 14d88f460

UScriptStruct * __cdecl FFixedSampleSequenceRulerStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFixedSampleSequenceRulerStyle,(UObject *)pUVar1,
                         L"FixedSampleSequenceRulerStyle");
  }
  return Z_Registration_Info_UScriptStruct_FFixedSampleSequenceRulerStyle.OuterSingleton;
}

// FFixedSampleSequenceRulerStyle @ 14d8b5a70

FFixedSampleSequenceRulerStyle * __thiscall
FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle
          (FFixedSampleSequenceRulerStyle *this,FFixedSampleSequenceRulerStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  *(undefined ***)this = &___7FFixedSampleSequenceRulerStyle__6B_;
  this->HandleWidth = param_1->HandleWidth;
  uVar1 = *(undefined8 *)((longlong)&(param_1->HandleColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HandleColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HandleColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HandleColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->HandleColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->HandleColor).field_0x12;
  (this->HandleColor).ColorUseRule = (param_1->HandleColor).ColorUseRule;
  (this->HandleColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->HandleColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->HandleBrush,&param_1->HandleBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->TicksColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TicksColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->TicksColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TicksColor).field_0x12;
  (this->TicksColor).ColorUseRule = (param_1->TicksColor).ColorUseRule;
  (this->TicksColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->TicksColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->TicksTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TicksTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->TicksTextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TicksTextColor).field_0x12;
  (this->TicksTextColor).ColorUseRule = (param_1->TicksTextColor).ColorUseRule;
  (this->TicksTextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->TicksTextColor).field_0x12 = uVar3;
  FSlateFontInfo::FSlateFontInfo(&this->TicksTextFont,&param_1->TicksTextFont);
  this->TicksTextOffset = param_1->TicksTextOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar3;
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,&param_1->BackgroundBrush);
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  return this;
}

// FFixedSampleSequenceRulerStyle @ 14d8b5b60

FFixedSampleSequenceRulerStyle * __thiscall
FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle(FFixedSampleSequenceRulerStyle *this)

{
  FName FVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FSlateBrush *pFVar5;
  FName local_res8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->HandleWidth = 15.0;
  *(undefined ***)this = &___7FFixedSampleSequenceRulerStyle__6B_;
  FVar2 = AudioWidgetStylesSharedParams::PlayheadColor;
  (this->HandleColor).ColorUseRule = UseColor_Specified;
  (this->HandleColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FSlateBrush::FSlateBrush(&this->HandleBrush);
  FVar2 = AudioWidgetStylesSharedParams::RulerTicksColor;
  (this->TicksColor).ColorUseRule = UseColor_Specified;
  (this->TicksColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgetStylesSharedParams::RulerTicksColor;
  (this->TicksTextColor).ColorUseRule = UseColor_Specified;
  (this->TicksTextColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pFVar3 = ::FName::FName(&local_res8,"Regular");
  FVar1 = *pFVar3;
  pIVar4 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,&this->TicksTextFont,FVar1,0);
  this->TicksTextOffset = 5.0;
  FVar2 = FLinearColor::Black;
  (this->BackgroundColor).ColorUseRule = UseColor_Specified;
  (this->BackgroundColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FLazyName::Resolve(&AudioWidgetStylesSharedParams::BackgroundBrushName);
  pIVar4 = FAppStyle::Get();
  pFVar5 = (FSlateBrush *)(**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,local_res8,0,0);
  FSlateBrush::FSlateBrush(&this->BackgroundBrush,pFVar5);
  this->DesiredWidth = 1280.0;
  this->DesiredHeight = 30.0;
  return this;
}

// operator= @ 14d8c3970

FFixedSampleSequenceRulerStyle * __thiscall
FFixedSampleSequenceRulerStyle::operator=
          (FFixedSampleSequenceRulerStyle *this,FFixedSampleSequenceRulerStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  this->HandleWidth = param_1->HandleWidth;
  uVar1 = *(undefined8 *)((longlong)&(param_1->HandleColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->HandleColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->HandleColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->HandleColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->HandleColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->HandleColor).field_0x12;
  (this->HandleColor).ColorUseRule = (param_1->HandleColor).ColorUseRule;
  (this->HandleColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->HandleColor).field_0x12 = uVar3;
  FSlateBrush::operator=(&this->HandleBrush,&param_1->HandleBrush);
  uVar1 = *(undefined8 *)((longlong)&(param_1->TicksColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TicksColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->TicksColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TicksColor).field_0x12;
  (this->TicksColor).ColorUseRule = (param_1->TicksColor).ColorUseRule;
  (this->TicksColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->TicksColor).field_0x12 = uVar3;
  uVar1 = *(undefined8 *)((longlong)&(param_1->TicksTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TicksTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TicksTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TicksTextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->TicksTextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TicksTextColor).field_0x12;
  (this->TicksTextColor).ColorUseRule = (param_1->TicksTextColor).ColorUseRule;
  (this->TicksTextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->TicksTextColor).field_0x12 = uVar3;
  FSlateFontInfo::operator=(&this->TicksTextFont,&param_1->TicksTextFont);
  this->TicksTextOffset = param_1->TicksTextOffset;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BackgroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->BackgroundColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->BackgroundColor).field_0x12;
  (this->BackgroundColor).ColorUseRule = (param_1->BackgroundColor).ColorUseRule;
  (this->BackgroundColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->BackgroundColor).field_0x12 = uVar3;
  FSlateBrush::operator=(&this->BackgroundBrush,&param_1->BackgroundBrush);
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  return this;
}

// GetDefault @ 14d92cef0

FFixedSampleSequenceRulerStyle * __cdecl FFixedSampleSequenceRulerStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFixedSampleSequenceRulerStyle(&::Default);
      atexit(`FFixedSampleSequenceRulerStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934400

void __thiscall
FFixedSampleSequenceRulerStyle::GetResources
          (FFixedSampleSequenceRulerStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateBrush *local_18;
  FSlateBrush *local_10;
  
  local_18 = &this->HandleBrush;
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
  local_10 = &this->BackgroundBrush;
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

// GetTypeName @ 14d937530

FName __thiscall FFixedSampleSequenceRulerStyle::GetTypeName(FFixedSampleSequenceRulerStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

