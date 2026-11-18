// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 4

// GetSplashPath @ 1423e2ca0

bool __cdecl
FGenericPlatformSplash::GetSplashPath
          (wchar_t *param_1,wchar_t *param_2,FString *param_3,FString *param_4,bool *param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar3 = ::FString::FString(&local_38,L"Splash/");
  ::FString::ConcatFC(&local_48,pFVar3,param_2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar2 = GetSplashPath(param_1,param_3,param_5);
  pFVar3 = FPaths::ProjectContentDir(&local_28);
  pFVar3 = GetSplashFilename(&local_38,pFVar3,&local_48);
  if (param_4 != pFVar3) {
    pFVar1 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_4->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (param_4->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pIVar4 = IFileManager::Get();
  pwVar7 = L"";
  if ((param_4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  lVar5 = (**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar6);
  if (lVar5 == -1) {
    pFVar3 = FPaths::EngineContentDir(&local_38);
    pFVar3 = GetSplashFilename(&local_28,pFVar3,&local_48);
    if (param_4 != pFVar3) {
      pFVar1 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_4->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_4->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    *param_5 = false;
    pIVar4 = IFileManager::Get();
    if ((param_4->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar7);
    if (lVar5 == -1) {
      bVar2 = false;
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetSplashPath @ 1423e2e80

bool __cdecl FGenericPlatformSplash::GetSplashPath(wchar_t *param_1,FString *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  bool bVar7;
  wchar_t *pwVar8;
  int iVar9;
  code *pcVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_38,L"Splash/");
  ::FString::ConcatFC(&local_48,pFVar3,param_1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar2 = GCustomSplashScreenFileName.Data.ArrayNum;
  if (iVar2 < 2) {
    pFVar3 = FPaths::ProjectContentDir(&local_18);
    pFVar3 = GetSplashFilename(&local_28,pFVar3,&local_48);
    pFVar3 = FPaths::ConvertRelativePathToFull(&local_38,pFVar3);
    if (param_2 != pFVar3) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *param_3 = true;
    pIVar4 = IFileManager::Get();
    pwVar8 = L"";
    if ((param_2->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x110))(pIVar4,pwVar6);
    if (lVar5 == -1) {
      pFVar3 = FPaths::EngineContentDir(&local_38);
      pFVar3 = GetSplashFilename(&local_28,pFVar3,&local_48);
      pFVar3 = FPaths::ConvertRelativePathToFull(&local_18,pFVar3);
      if (param_2 != pFVar3) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
        (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      *param_3 = false;
      pIVar4 = IFileManager::Get();
      pcVar10 = *(code **)((longlong)*pIVar4 + 0x110);
      if ((param_2->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      goto LAB_1423e3083;
    }
  }
  else {
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange
              (param_2,(wchar_t *)GCustomSplashScreenFileName.Data.AllocatorInstance.Data,iVar9);
    *param_3 = true;
    pIVar4 = IFileManager::Get();
    pcVar10 = *(code **)((longlong)*pIVar4 + 0x110);
    if ((param_2->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
LAB_1423e3083:
    lVar5 = (*pcVar10)(pIVar4,pwVar8);
    if (lVar5 == -1) {
      bVar7 = false;
      goto LAB_1423e3098;
    }
  }
  bVar7 = true;
LAB_1423e3098:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// SetCustomSplashImage @ 142404190

void __cdecl FGenericPlatformSplash::SetCustomSplashImage(wchar_t *param_1)

{
  ::FString::operator=(&GCustomSplashScreenFileName,param_1);
  return;
}

// SetSplashText @ 1424057a0

void __cdecl FGenericPlatformSplash::SetSplashText(Type param_1,wchar_t *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  FText *this;
  undefined1 local_res18 [16];
  FText local_18;
  
  this = FText::AsCultureInvariant(&local_18,param_2);
  if (GSplashScreenThread == (void *)0x0) {
    pIVar1 = (this->TextData).Reference;
    pIVar2 = GSplashScreenText[(int)param_1].TextData.Reference;
    if (pIVar2 != pIVar1) {
      GSplashScreenText[(int)param_1].TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    GSplashScreenText[(int)param_1].Flags = this->Flags;
  }
  else if (param_1 == CopyrightInfo) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
    bVar3 = FText::IdenticalTo(this,GSplashScreenText + 2,LexicalCompareInvariants);
    if (!bVar3) {
      FText::operator=(GSplashScreenText + 2,this);
      InvalidateRect((HWND)GSplashScreenWnd,(RECT *)(GSplashScreenTextRects + 2),0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

