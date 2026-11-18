// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ~ISlateLineHighlighter @ 14284a230

void __thiscall ISlateLineHighlighter::~ISlateLineHighlighter(ISlateLineHighlighter *this)

{
  *this = (ISlateLineHighlighter)&___7ILineHighlighter__6B_;
  return;
}

// OnPaint @ 14288c740

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
ISlateLineHighlighter::OnPaint
          (ISlateLineHighlighter *this,FPaintArgs *param_1,FLineView *param_2,float param_3,
          float param_4,FTextBlockStyle *param_5,FGeometry *param_6,FSlateRect *param_7,
          FSlateWindowElementList *param_8,int param_9,FWidgetStyle *param_10,bool param_11)

{
  int iVar1;
  double local_18 [3];
  
  local_18[0] = (double)param_3;
  local_18[1] = 0.0;
  iVar1 = (**(code **)((longlong)*this + 8))
                    (param_4,0,param_2,local_18,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11);
  return iVar1;
}

