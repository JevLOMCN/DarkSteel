// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateImageBrush @ 142545f10

FSlateImageBrush * __thiscall
FSlateImageBrush::FSlateImageBrush
          (FSlateImageBrush *this,FString *param_1,FDeprecateVector2DParameter *param_2,
          FLinearColor *param_3,Type param_4,Type param_5)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FMargin local_18;
  
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Image,*pFVar1,&local_18,param_4,param_5,param_2,param_3,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateImageBrush__6B_;
  return this;
}

// FSlateImageBrush @ 142545fc0

FSlateImageBrush * __thiscall
FSlateImageBrush::FSlateImageBrush
          (FSlateImageBrush *this,FString *param_1,FDeprecateVector2DParameter *param_2,
          FSlateColor *param_3,Type param_4,Type param_5)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FMargin local_18;
  
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Image,*pFVar1,&local_18,param_4,param_5,param_2,param_3,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateImageBrush__6B_;
  return this;
}

