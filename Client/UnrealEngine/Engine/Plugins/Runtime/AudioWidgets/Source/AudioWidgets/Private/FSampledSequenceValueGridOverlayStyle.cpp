// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 5

// StaticStruct @ 14d88f530

UScriptStruct * __cdecl FSampledSequenceValueGridOverlayStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSampledSequenceValueGridOverlayStyle,
                         (UObject *)pUVar1,L"SampledSequenceValueGridOverlayStyle");
  }
  return Z_Registration_Info_UScriptStruct_FSampledSequenceValueGridOverlayStyle.OuterSingleton;
}

// FSampledSequenceValueGridOverlayStyle @ 14d8b64a0

FSampledSequenceValueGridOverlayStyle * __thiscall
FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
          (FSampledSequenceValueGridOverlayStyle *this,
          FSampledSequenceValueGridOverlayStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  this->_padding_ = (longlong)&___7FSampledSequenceValueGridOverlayStyle__6B_;
  uVar1 = *(undefined8 *)((longlong)&(param_1->GridColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->GridColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->GridColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->GridColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->GridColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->GridColor).field_0x12;
  (this->GridColor).ColorUseRule = (param_1->GridColor).ColorUseRule;
  (this->GridColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->GridColor).field_0x12 = uVar3;
  this->GridThickness = param_1->GridThickness;
  uVar1 = *(undefined8 *)((longlong)&(param_1->LabelTextColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->LabelTextColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->LabelTextColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LabelTextColor).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = (param_1->LabelTextColor).ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->LabelTextColor).field_0x12;
  (this->LabelTextColor).ColorUseRule = (param_1->LabelTextColor).ColorUseRule;
  (this->LabelTextColor).ColorTableId = EVar2;
  *(undefined2 *)&(this->LabelTextColor).field_0x12 = uVar3;
  FSlateFontInfo::FSlateFontInfo(&this->LabelTextFont,&param_1->LabelTextFont);
  this->DesiredWidth = param_1->DesiredWidth;
  this->DesiredHeight = param_1->DesiredHeight;
  return this;
}

// FSampledSequenceValueGridOverlayStyle @ 14d8b6520

FSampledSequenceValueGridOverlayStyle * __thiscall
FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
          (FSampledSequenceValueGridOverlayStyle *this)

{
  FName FVar1;
  FLinearColor FVar2;
  FName *pFVar3;
  ISlateStyle *pIVar4;
  FName local_res8;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FSampledSequenceValueGridOverlayStyle__6B_;
  FVar2 = FLinearColor::Black;
  (this->GridColor).ColorUseRule = UseColor_Specified;
  (this->GridColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->GridThickness = 1.0;
  FVar2 = FLinearColor::White;
  (this->LabelTextColor).ColorUseRule = UseColor_Specified;
  (this->LabelTextColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  pFVar3 = ::FName::FName(&local_res8,"Regular");
  FVar1 = *pFVar3;
  pIVar4 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,&this->LabelTextFont,FVar1,0);
  this->DesiredWidth = 1280.0;
  this->DesiredHeight = 720.0;
  return this;
}

// GetDefault @ 14d92d050

FSampledSequenceValueGridOverlayStyle * __cdecl
FSampledSequenceValueGridOverlayStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSampledSequenceValueGridOverlayStyle(&::Default);
      atexit(`FSampledSequenceValueGridOverlayStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetTypeName @ 14d937570

FName __thiscall
FSampledSequenceValueGridOverlayStyle::GetTypeName(FSampledSequenceValueGridOverlayStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

