// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// FSlateIcon @ 1425bda90

FSlateIcon * __thiscall
FSlateIcon::FSlateIcon(FSlateIcon *this,FName param_1,FName param_2,FName param_3,FName param_4)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FName local_res10 [3];
  FString local_38;
  FString local_28;
  FString local_18;
  
  this->StyleSetName = param_1;
  this->StyleName = param_2;
  if (param_3 == (FName)0x0) {
    local_res8 = param_2;
    ::FString::FString(&local_28,".Small");
    pFVar1 = ::FName::ToString(&local_res8,&local_18);
    ::FString::ConcatFF(&local_38,pFVar1,&local_28);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(local_res10,(wchar_t *)FVar2.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    param_3 = local_res10[0];
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      param_3 = local_res10[0];
    }
  }
  this->StatusOverlayStyleName = param_4;
  this->SmallStyleName = param_3;
  return this;
}

// FSlateIcon @ 1425bdb50

FSlateIcon * __thiscall FSlateIcon::FSlateIcon(FSlateIcon *this)

{
  (this->StyleSetName).ComparisonIndex = 0;
  (this->StyleSetName).Number = 0;
  (this->StyleName).ComparisonIndex = 0;
  (this->StyleName).Number = 0;
  (this->SmallStyleName).ComparisonIndex = 0;
  (this->SmallStyleName).Number = 0;
  (this->StatusOverlayStyleName).ComparisonIndex = 0;
  (this->StatusOverlayStyleName).Number = 0;
  return this;
}

// GetIcon @ 1425e14a0

FSlateBrush * __thiscall FSlateIcon::GetIcon(FSlateIcon *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ISlateStyle *pIVar1;
  FSlateBrush *pFVar2;
  
  if (this->StyleSetName != (FName)0x0) {
    pIVar1 = FSlateStyleRegistry::FindSlateStyle(&this->StyleSetName);
    if (pIVar1 != (ISlateStyle *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x58);
      pFVar2 = FStyleDefaults::GetNoBrush();
                    /* WARNING: Could not recover jumptable at 0x0001425e14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar2 = (FSlateBrush *)(*UNRECOVERED_JUMPTABLE)(pIVar1,this->StyleName,0,pFVar2);
      return pFVar2;
    }
  }
  pFVar2 = FStyleDefaults::GetNoBrush();
  return pFVar2;
}

// GetOptionalIcon @ 1425e1fd0

FSlateBrush * __thiscall FSlateIcon::GetOptionalIcon(FSlateIcon *this)

{
  FSlateBrush *pFVar1;
  FSlateBrush *pFVar2;
  
  pFVar1 = GetIcon(this);
  pFVar2 = FStyleDefaults::GetNoBrush();
  if (pFVar1 == pFVar2) {
    pFVar1 = (FSlateBrush *)0x0;
  }
  return pFVar1;
}

// GetOptionalSmallIcon @ 1425e2000

FSlateBrush * __thiscall FSlateIcon::GetOptionalSmallIcon(FSlateIcon *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSlateBrush *pFVar3;
  FSlateBrush *pFVar4;
  
  if (this->StyleSetName != (FName)0x0) {
    pIVar2 = FSlateStyleRegistry::FindSlateStyle(&this->StyleSetName);
    if (pIVar2 != (ISlateStyle *)0x0) {
      pcVar1 = *(code **)((longlong)*pIVar2 + 0x58);
      pFVar3 = FStyleDefaults::GetNoBrush();
      pFVar3 = (FSlateBrush *)(*pcVar1)(pIVar2,this->SmallStyleName,0,pFVar3);
      pFVar4 = FStyleDefaults::GetNoBrush();
      if (pFVar3 != pFVar4) goto LAB_1425e2058;
    }
  }
  pFVar3 = GetIcon(this);
LAB_1425e2058:
  pFVar4 = FStyleDefaults::GetNoBrush();
  if (pFVar3 == pFVar4) {
    pFVar3 = (FSlateBrush *)0x0;
  }
  return pFVar3;
}

// GetOverlayIcon @ 1425e2080

FSlateBrush * __thiscall FSlateIcon::GetOverlayIcon(FSlateIcon *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ISlateStyle *pIVar1;
  FSlateBrush *pFVar2;
  
  if (this->StyleSetName != (FName)0x0) {
    pIVar1 = FSlateStyleRegistry::FindSlateStyle(&this->StyleSetName);
    if (pIVar1 != (ISlateStyle *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x58);
      pFVar2 = FStyleDefaults::GetNoBrush();
                    /* WARNING: Could not recover jumptable at 0x0001425e20d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar2 = (FSlateBrush *)(*UNRECOVERED_JUMPTABLE)(pIVar1,this->StatusOverlayStyleName,0,pFVar2)
      ;
      return pFVar2;
    }
  }
  return (FSlateBrush *)0x0;
}

// GetSmallIcon @ 1425e37f0

FSlateBrush * __thiscall FSlateIcon::GetSmallIcon(FSlateIcon *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSlateBrush *pFVar3;
  FSlateBrush *pFVar4;
  
  if (this->StyleSetName != (FName)0x0) {
    pIVar2 = FSlateStyleRegistry::FindSlateStyle(&this->StyleSetName);
    if (pIVar2 != (ISlateStyle *)0x0) {
      pcVar1 = *(code **)((longlong)*pIVar2 + 0x58);
      pFVar3 = FStyleDefaults::GetNoBrush();
      pFVar3 = (FSlateBrush *)(*pcVar1)(pIVar2,this->SmallStyleName,0,pFVar3);
      pFVar4 = FStyleDefaults::GetNoBrush();
      if (pFVar3 != pFVar4) {
        return pFVar3;
      }
    }
  }
  pFVar3 = GetIcon(this);
  return pFVar3;
}

// GetStyleSet @ 1425e3a80

ISlateStyle * __thiscall FSlateIcon::GetStyleSet(FSlateIcon *this)

{
  ISlateStyle *pIVar1;
  
  if (this->StyleSetName == (FName)0x0) {
    return (ISlateStyle *)0x0;
  }
  pIVar1 = FSlateStyleRegistry::FindSlateStyle(&this->StyleSetName);
  return pIVar1;
}

