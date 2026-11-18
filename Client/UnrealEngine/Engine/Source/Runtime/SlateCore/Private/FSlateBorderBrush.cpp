// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateBorderBrush @ 142544d50

FSlateBorderBrush * __thiscall
FSlateBorderBrush::FSlateBorderBrush
          (FSlateBorderBrush *this,FString *param_1,FMargin *param_2,FLinearColor *param_3,
          Type param_4)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FSlateBorderBrush *pFVar4;
  wchar_t *pwVar5;
  float fVar6;
  float fVar7;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res10,pwVar5);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Border,*pFVar3,param_2,Both,param_4,
             (FDeprecateVector2DParameter *)&local_res8._s_0,param_3,(UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateBorderBrush__6B_;
  fVar6 = param_2->Right + param_2->Left;
  fVar7 = param_2->Bottom + param_2->Top;
  if (fVar7 * fVar7 + fVar6 * fVar6 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMargin.GetDesiredSize().SizeSquared() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Brushes\\SlateBorderBrush.h"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBorderBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// FSlateBorderBrush @ 142544e50

FSlateBorderBrush * __thiscall
FSlateBorderBrush::FSlateBorderBrush
          (FSlateBorderBrush *this,FString *param_1,FMargin *param_2,FSlateColor *param_3,
          Type param_4)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FSlateBorderBrush *pFVar4;
  wchar_t *pwVar5;
  float fVar6;
  float fVar7;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res10,pwVar5);
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Border,*pFVar3,param_2,Both,param_4,
             (FDeprecateVector2DParameter *)&local_res8._s_0,param_3,(UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateBorderBrush__6B_;
  fVar6 = param_2->Right + param_2->Left;
  fVar7 = param_2->Bottom + param_2->Top;
  if (fVar7 * fVar7 + fVar6 * fVar6 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMargin.GetDesiredSize().SizeSquared() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Brushes\\SlateBorderBrush.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateBorderBrush *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

