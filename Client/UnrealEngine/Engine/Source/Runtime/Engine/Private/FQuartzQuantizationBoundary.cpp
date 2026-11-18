// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147336470

UScriptStruct * __cdecl FQuartzQuantizationBoundary::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQuartzQuantizationBoundary,(UObject *)pUVar1,
                         L"QuartzQuantizationBoundary");
  }
  return Z_Registration_Info_UScriptStruct_FQuartzQuantizationBoundary.OuterSingleton;
}

// ToString @ 14735a180

FString * __thiscall
FQuartzQuantizationBoundary::ToString
          (FQuartzQuantizationBoundary *this,FString *__return_storage_ptr__)

{
  EQuarztQuantizationReference EVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  switch(this->Quantization) {
  case Bar:
    ::FString::FString(&local_68,L"Bar");
    break;
  case Beat:
    ::FString::FString(&local_68,L"Beat");
    break;
  case ThirtySecondNote:
    ::FString::FString(&local_68,L"ThirtySecondNote");
    break;
  case SixteenthNote:
    ::FString::FString(&local_68,L"SixteenthNote");
    break;
  case EighthNote:
    ::FString::FString(&local_68,L"EighthNote");
    break;
  case QuarterNote:
    ::FString::FString(&local_68,L"QuarterNote");
    break;
  case HalfNote:
    ::FString::FString(&local_68,L"HalfNote");
    break;
  case WholeNote:
  case DottedWholeNote:
    ::FString::FString(&local_68,L"WholeNote");
    break;
  case DottedSixteenthNote:
    ::FString::FString(&local_68,L"DottedSixteenthNote");
    break;
  case DottedEighthNote:
    ::FString::FString(&local_68,L"DottedEighthNote");
    break;
  case DottedQuarterNote:
    ::FString::FString(&local_68,L"DottedQuarterNote");
    break;
  case DottedHalfNote:
    ::FString::FString(&local_68,L"DottedHalfNote");
    break;
  case SixteenthNoteTriplet:
    ::FString::FString(&local_68,L"SixteenthNoteTriplet");
    break;
  case EighthNoteTriplet:
    ::FString::FString(&local_68,L"EighthNoteTriplet");
    break;
  case QuarterNoteTriplet:
    ::FString::FString(&local_68,L"QuarterNoteTriplet");
    break;
  case HalfNoteTriplet:
    ::FString::FString(&local_68,L"HalfNoteTriplet");
    break;
  default:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    break;
  case None:
    ::FString::FString(&local_68,L"None");
  }
  ::FString::PrintfImpl(&local_28,L"Quant:(%s) - ");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  sVar2 = wcslen((wchar_t *)FVar4.Data);
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar4.Data,(int)sVar2);
  ::FString::PrintfImpl(&local_38,L"Mult:(%f) - ");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  sVar2 = wcslen((wchar_t *)FVar4.Data);
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar4.Data,(int)sVar2);
  EVar1 = this->CountingReferencePoint;
  if (EVar1 == BarRelative) {
    pwVar3 = L"BarRelative";
  }
  else if (EVar1 == TransportRelative) {
    pwVar3 = L"TransportRelative";
  }
  else {
    if (EVar1 != CurrentTimeRelative) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      goto LAB_14735a3f5;
    }
    pwVar3 = L"CurrentTimeRelative";
  }
  ::FString::FString(&local_58,pwVar3);
LAB_14735a3f5:
  ::FString::PrintfImpl(&local_48,L"Ref:(%s)");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  sVar2 = wcslen((wchar_t *)FVar4.Data);
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar4.Data,(int)sVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

