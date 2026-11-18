// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FSlateBoxBrush @ 142544f50

FSlateBoxBrush * __thiscall
FSlateBoxBrush::FSlateBoxBrush
          (FSlateBoxBrush *this,FString *param_1,FDeprecateVector2DParameter *param_2,
          FMargin *param_3,FLinearColor *param_4,Type param_5)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Box,*pFVar1,param_3,NoTile,param_5,param_2,param_4,(UObject *)0x0,
             false);
  *(undefined ***)this = &___7FSlateBoxBrush__6B_;
  return this;
}

// FSlateBoxBrush @ 142544ff0

FSlateBoxBrush * __thiscall
FSlateBoxBrush::FSlateBoxBrush
          (FSlateBoxBrush *this,FString *param_1,FDeprecateVector2DParameter *param_2,
          FMargin *param_3,FSlateColor *param_4,Type param_5)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res8,pwVar2);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Box,*pFVar1,param_3,NoTile,param_5,param_2,param_4,(UObject *)0x0,
             false);
  *(undefined ***)this = &___7FSlateBoxBrush__6B_;
  return this;
}

// FSlateBoxBrush @ 142545090

FSlateBoxBrush * __thiscall
FSlateBoxBrush::FSlateBoxBrush
          (FSlateBoxBrush *this,FString *param_1,FMargin *param_2,FLinearColor *param_3,Type param_4
          )

{
  FName *pFVar1;
  wchar_t *pwVar2;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res10,pwVar2);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Box,*pFVar1,param_2,NoTile,param_4,
             (FDeprecateVector2DParameter *)&local_res8._s_0,param_3,(UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateBoxBrush__6B_;
  return this;
}

// FSlateBoxBrush @ 142545130

FSlateBoxBrush * __thiscall
FSlateBoxBrush::FSlateBoxBrush
          (FSlateBoxBrush *this,FString *param_1,FMargin *param_2,FSlateColor *param_3,Type param_4)

{
  FName *pFVar1;
  wchar_t *pwVar2;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(&local_res10,pwVar2);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Box,*pFVar1,param_2,NoTile,param_4,
             (FDeprecateVector2DParameter *)&local_res8._s_0,param_3,(UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateBoxBrush__6B_;
  return this;
}

