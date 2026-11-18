// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// HandleBasicStats @ 14770f2e0

void __thiscall FDumpFPSChartToHTMLEndpoint::HandleBasicStats(FDumpFPSChartToHTMLEndpoint *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EBuildConfiguration EVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FDateTime this_00;
  ForAnyElementType FVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_38,L"TOKEN_MAPNAME",(wchar_t *)FVar6.Data,CaseSensitive)
  ;
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  GetChangeListNumberForPerfTesting();
  ::FString::PrintfImpl(&local_48,L"%i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_38,L"TOKEN_CHANGELIST",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  EVar3 = FApp::GetBuildConfiguration();
  pwVar5 = ::LexToString(EVar3);
  pFVar4 = ::FString::Replace(pFVar1,&local_38,L"TOKEN_BUILDCONFIG",pwVar5,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_28);
  ::FString::PrintfImpl(&local_48,L"%s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_38,L"TOKEN_DATESTAMP",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((int)this->_padding_ == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)this->_padding_;
  }
  pFVar4 = ::FString::Replace(this->FPSChartRow,&local_28,L"TOKEN_DEVICE_PROFILE",pwVar5,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%s %s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_OS",(wchar_t *)FVar6.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%s %s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_CPU",(wchar_t *)FVar6.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%s");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_GPU",(wchar_t *)FVar6.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_RES",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_VD",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_AA",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_SHADOW",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_GI",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_REFL",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_PP",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_TEX",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_FX",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_FLG",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%d");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_SETTINGS_SHD",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_AVG_FPS",(wchar_t *)FVar6.Data,CaseSensitive)
  ;
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_TIME_DISREGARDED",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_TIME",(wchar_t *)FVar6.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_FRAMECOUNT",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f ms");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_AVG_GPUTIME",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_BOUND_GAME_THREAD_PERCENT",
                              (wchar_t *)FVar6.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_BOUND_RENDER_THREAD_PERCENT",
                              (wchar_t *)FVar6.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_BOUND_GPU_PERCENT",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f ms");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_AVG_RENDTIME",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_48,L"%4.2f ms");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_AVG_GAMETIME",(wchar_t *)FVar6.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleDynamicResThreshold @ 147710800

void __thiscall
FDumpFPSChartToHTMLEndpoint::HandleDynamicResThreshold
          (FDumpFPSChartToHTMLEndpoint *this,int param_1,float param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(&local_38,L"TOKEN_DYNRES_%d_PLUS");
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(this->FPSChartRow,local_28,(wchar_t *)FVar4.Data,(wchar_t *)FVar5.Data
                              ,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleFPSThreshold @ 147710c80

void __thiscall
FDumpFPSChartToHTMLEndpoint::HandleFPSThreshold
          (FDumpFPSChartToHTMLEndpoint *this,int param_1,float param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(&local_38,L"TOKEN_MVP_%d");
  ::FString::PrintfImpl(&local_48,L"%4.2f");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(this->FPSChartRow,local_28,(wchar_t *)FVar4.Data,(wchar_t *)FVar5.Data
                              ,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleHitchBucket @ 1477113f0

void __thiscall
FDumpFPSChartToHTMLEndpoint::HandleHitchBucket
          (FDumpFPSChartToHTMLEndpoint *this,FHistogram *param_1,int param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  double dVar7;
  FString local_38;
  FString local_28 [2];
  
  dVar7 = FHistogram::GetBinUpperBound(param_1,param_2);
  FHistogram::GetBinLowerBound(param_1,param_2);
  if (dVar7 == __real_47efffffe0000000) {
    ::FString::PrintfImpl(local_28,L"TOKEN_HITCH_%i_PLUS");
  }
  else {
    ::FString::PrintfImpl(local_28,L"TOKEN_HITCH_%i_%i");
  }
  FVar3.Data = local_28[0].Data.AllocatorInstance.Data;
  FHistogram::GetBinObservationsCount(param_1,param_2);
  ::FString::PrintfImpl(&local_38,L"%i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_28[0].Data.ArrayNum != 0) {
    FVar5.Data = FVar3.Data;
  }
  pFVar4 = ::FString::Replace(this->FPSChartRow,local_28,(wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data
                              ,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// HandleHitchSummary @ 147712640

void __thiscall
FDumpFPSChartToHTMLEndpoint::HandleHitchSummary
          (FDumpFPSChartToHTMLEndpoint *this,int param_1,double param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FString local_38;
  FString local_28;
  
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_38,L"%i");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_HITCH_TOTAL",(wchar_t *)FVar4.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_38,L"%i");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_HITCH_GAME_BOUND_COUNT",(wchar_t *)FVar4.Data
                              ,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_38,L"%i");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_HITCH_RENDER_BOUND_COUNT",
                              (wchar_t *)FVar4.Data,CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_38,L"%i");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_HITCH_GPU_BOUND_COUNT",(wchar_t *)FVar4.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = this->FPSChartRow;
  ::FString::PrintfImpl(&local_38,L"%.2f");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FString::Replace(pFVar1,&local_28,L"TOKEN_HITCHES_PER_MIN",(wchar_t *)FVar4.Data,
                              CaseSensitive);
  pFVar1 = this->FPSChartRow;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// PrintToEndpoint @ 147721ba0

void __thiscall
FDumpFPSChartToHTMLEndpoint::PrintToEndpoint(FDumpFPSChartToHTMLEndpoint *this,FString *param_1)

{
  return;
}

