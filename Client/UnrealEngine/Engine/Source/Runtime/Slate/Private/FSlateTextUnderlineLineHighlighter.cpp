// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FSlateTextUnderlineLineHighlighter @ 142845f50

FSlateTextUnderlineLineHighlighter * __thiscall
FSlateTextUnderlineLineHighlighter::FSlateTextUnderlineLineHighlighter
          (FSlateTextUnderlineLineHighlighter *this,FSlateBrush *param_1,FSlateFontInfo *param_2,
          FSlateColor *param_3,FDeprecateVector2DParameter param_4,FLinearColor *param_5)

{
  FLinearColor_u_0 local_38;
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  local_28._0_8_ = *(undefined8 *)&(param_3->SpecifiedColor).field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&(param_3->SpecifiedColor).field0_0x0 + 8);
  local_38._0_8_ = *(undefined8 *)&param_5->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  local_18._0_1_ = param_3->ColorUseRule;
  local_18._1_1_ = param_3->ColorTableId;
  local_18._2_2_ = *(undefined2 *)&param_3->field_0x12;
  ISlateTextLineHighlighter::ISlateTextLineHighlighter
            ((ISlateTextLineHighlighter *)this,param_1,param_2,(FSlateColor *)&local_28._s_0,param_4
             ,(FLinearColor *)&local_38._s_0);
  *(undefined ***)this = &___7FSlateTextUnderlineLineHighlighter__6B_;
  return this;
}

// Create @ 1428659f0

TSharedRef<FSlateTextUnderlineLineHighlighter,1> * __cdecl
FSlateTextUnderlineLineHighlighter::Create
          (TSharedRef<FSlateTextUnderlineLineHighlighter,1> *__return_storage_ptr__,
          FSlateBrush *param_1,FSlateFontInfo *param_2,FSlateColor *param_3,
          FDeprecateVector2DParameter param_4,FLinearColor *param_5)

{
  TRawPtrProxy<FSlateTextUnderlineLineHighlighter> local_res8;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  undefined4 local_28;
  
  local_res8.Object = ::operator_new(0x150);
  if ((ISlateTextLineHighlighter *)local_res8.Object == (ISlateTextLineHighlighter *)0x0) {
    local_res8.Object = (FSlateTextUnderlineLineHighlighter *)0x0;
  }
  else {
    local_38._0_8_ = *(undefined8 *)&(param_3->SpecifiedColor).field0_0x0;
    local_38._8_8_ = *(undefined8 *)((longlong)&(param_3->SpecifiedColor).field0_0x0 + 8);
    local_28._0_1_ = param_3->ColorUseRule;
    local_28._1_1_ = param_3->ColorTableId;
    local_28._2_2_ = *(undefined2 *)&param_3->field_0x12;
    local_48._0_8_ = *(undefined8 *)&param_5->field0_0x0;
    local_48._8_8_ = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    ISlateTextLineHighlighter::ISlateTextLineHighlighter
              ((ISlateTextLineHighlighter *)local_res8.Object,param_1,param_2,
               (FSlateColor *)&local_38._s_0,param_4,(FLinearColor *)&local_48._s_0);
    ((ISlateTextLineHighlighter *)local_res8.Object)->_padding_ =
         (longlong)&___7FSlateTextUnderlineLineHighlighter__6B_;
  }
  TSharedRef<FSlateTextUnderlineLineHighlighter,1>::
  TSharedRef<FSlateTextUnderlineLineHighlighter,1><FSlateTextUnderlineLineHighlighter>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetLineMetrics @ 142877460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateTextUnderlineLineHighlighter::GetLineMetrics
          (FSlateTextUnderlineLineHighlighter *this,float param_1,short *param_2,short *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  TSharedRef<FSlateFontCache,1> local_28 [2];
  
  pFVar4 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar4->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSlateFontServices::GetFontCache(*(FSlateFontServices **)(lVar1 + 8),local_28);
  FSlateFontCache::GetUnderlineMetrics
            (local_28[0].Object,(FSlateFontInfo *)&this->field_0xc0,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

