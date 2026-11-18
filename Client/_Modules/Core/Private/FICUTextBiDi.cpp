// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// ComputeBaseDirection @ 1416e4080

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeBaseDirection(FICUTextBiDi *this,FString *param_1)

{
  int iVar1;
  ETextDirection EVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (iVar4 != 0) {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,pwVar3,0,iVar4,&this->ICUString,true);
    EVar2 = Internal::ComputeBaseDirection(&this->ICUString);
    return EVar2;
  }
  return LeftToRight;
}

// ComputeBaseDirection @ 1416e40f0

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeBaseDirection(FICUTextBiDi *this,FText *param_1)

{
  int iVar1;
  ETextDirection EVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pFVar3 = FText::ToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  if (iVar5 != 0) {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,pwVar4,0,iVar5,&this->ICUString,true);
    EVar2 = Internal::ComputeBaseDirection(&this->ICUString);
    return EVar2;
  }
  return LeftToRight;
}

// ComputeBaseDirection @ 1416e4170

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeBaseDirection
          (FICUTextBiDi *this,wchar_t *param_1,int param_2,int param_3)

{
  ETextDirection EVar1;
  
  if (param_3 == 0) {
    return LeftToRight;
  }
  ICUUtilities::FStringConverter::ConvertString
            (&this->StringConverter,param_1,param_2,param_3,&this->ICUString,true);
  EVar1 = Internal::ComputeBaseDirection(&this->ICUString);
  return EVar1;
}

// ComputeTextDirection @ 1416e45c0

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection(FICUTextBiDi *this,FString *param_1)

{
  int iVar1;
  ETextDirection EVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (iVar4 != 0) {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,pwVar3,0,iVar4,&this->ICUString,true);
    EVar2 = Internal::ComputeTextDirection(this->ICUBiDi,&this->ICUString);
    return EVar2;
  }
  return LeftToRight;
}

// ComputeTextDirection @ 1416e4630

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
          (FICUTextBiDi *this,FString *param_1,ETextDirection param_2,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  ETextDirection EVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = 0;
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar1 + -1;
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (iVar4 == 0) {
    EVar2 = LeftToRight;
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,pwVar3,0,iVar4,&this->ICUString,true);
    EVar2 = Internal::ComputeTextDirection(this->ICUBiDi,&this->ICUString,0,param_2,param_3);
  }
  return EVar2;
}

// ComputeTextDirection @ 1416e4700

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection(FICUTextBiDi *this,FText *param_1)

{
  int iVar1;
  ETextDirection EVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pFVar3 = FText::ToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  if (iVar5 != 0) {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,pwVar4,0,iVar5,&this->ICUString,true);
    EVar2 = Internal::ComputeTextDirection(this->ICUBiDi,&this->ICUString);
    return EVar2;
  }
  return LeftToRight;
}

// ComputeTextDirection @ 1416e4780

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
          (FICUTextBiDi *this,FText *param_1,ETextDirection param_2,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  ETextDirection EVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pFVar3 = FText::ToString(param_1);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar5 = 0;
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    iVar5 = iVar1 + -1;
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (iVar5 == 0) {
    EVar2 = LeftToRight;
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,pwVar4,0,iVar5,&this->ICUString,true);
    EVar2 = Internal::ComputeTextDirection(this->ICUBiDi,&this->ICUString,0,param_2,param_3);
  }
  return EVar2;
}

// ComputeTextDirection @ 1416e4860

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
          (FICUTextBiDi *this,wchar_t *param_1,int param_2,int param_3)

{
  ETextDirection EVar1;
  
  if (param_3 == 0) {
    return LeftToRight;
  }
  ICUUtilities::FStringConverter::ConvertString
            (&this->StringConverter,param_1,param_2,param_3,&this->ICUString,true);
  EVar1 = Internal::ComputeTextDirection(this->ICUBiDi,&this->ICUString);
  return EVar1;
}

// ComputeTextDirection @ 1416e48b0

ETextDirection __thiscall
TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
          (FICUTextBiDi *this,wchar_t *param_1,int param_2,int param_3,ETextDirection param_4,
          TArray<TextBiDi::FTextDirectionInfo,TSizedDefaultAllocator<32>_> *param_5)

{
  ETextDirection EVar1;
  
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  if (param_3 == 0) {
    EVar1 = LeftToRight;
  }
  else {
    ICUUtilities::FStringConverter::ConvertString
              (&this->StringConverter,param_1,param_2,param_3,&this->ICUString,true);
    EVar1 = Internal::ComputeTextDirection(this->ICUBiDi,&this->ICUString,param_2,param_4,param_5);
  }
  return EVar1;
}

