// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 5

// Hide @ 1423e7720

void __cdecl FWindowsPlatformSplash::Hide(void)

{
  bool bVar1;
  
  if (GSplashScreenThread != (void *)0x0) {
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId736,"FWindowsPlatformSplash::Hide",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\WindowsPlatformSplash.cpp"
                 ,0x2e0);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId736);
    }
    WaitForSingleObject(GSplashWindowCreationEvent,0xffffffff);
    if (GSplashScreenWnd != (HWND__ *)0x0) {
      PostMessageW((HWND)GSplashScreenWnd,0x10,0,0);
    }
    WaitForSingleObject(GSplashScreenThread,0xffffffff);
    CloseHandle(GSplashScreenThread);
    GSplashScreenThread = (void *)0x0;
    GSplashScreenWnd = (HWND__ *)0x0;
    if (GSplashScreenGuard != (HWND__ *)0x0) {
      PostMessageW((HWND)GSplashScreenGuard,2,0,0);
      GSplashScreenGuard = (HWND__ *)0x0;
    }
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// IsShown @ 1423eb380

bool __cdecl FWindowsPlatformSplash::IsShown(void)

{
  return GSplashScreenThread != (void *)0x0;
}

// SetProgress @ 142405550

void __cdecl FWindowsPlatformSplash::SetProgress(int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTaskbarList *pFVar2;
  ITaskbarList3 *pIVar3;
  code *pcVar4;
  bool bVar5;
  
  pTVar1 = (WindowsApplication->TaskbarList).SharedReferenceCount.ReferenceController;
  if (param_1 == 100) {
    pFVar2 = (WindowsApplication->TaskbarList).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FTaskbarList *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar3 = pFVar2->TaskBarList3;
    if (pIVar3 != (ITaskbarList3 *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,GSplashScreenWnd,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    }
  }
  else {
    pFVar2 = (WindowsApplication->TaskbarList).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FTaskbarList *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar3 = pFVar2->TaskBarList3;
    if (pIVar3 != (ITaskbarList3 *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,GSplashScreenWnd,(longlong)param_1,100);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetSplashText @ 1424058a0

void __cdecl FWindowsPlatformSplash::SetSplashText(Type param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res18 [16];
  
  if (GSplashScreenThread == (void *)0x0) {
    pIVar1 = (param_2->TextData).Reference;
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
    GSplashScreenText[(int)param_1].Flags = param_2->Flags;
  }
  else if (param_1 == CopyrightInfo) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
    bVar3 = FText::IdenticalTo(param_2,GSplashScreenText + 2,LexicalCompareInvariants);
    if (!bVar3) {
      FText::operator=(GSplashScreenText + 2,param_2);
      InvalidateRect((HWND)GSplashScreenWnd,(RECT *)(GSplashScreenTextRects + 2),0);
    }
                    /* WARNING: Could not recover jumptable at 0x000142405911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&GSplashScreenSynchronizationObject);
    return;
  }
  return;
}

// Show @ 142407280

void __cdecl FWindowsPlatformSplash::Show(void)

{
  DWORD DVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  FStartupMessages *this;
  FName *pFVar5;
  int iVar6;
  DWORD local_res8 [2];
  FName local_res10;
  FString local_28;
  FText local_18;
  
  if (GSplashScreenThread == (void *)0x0) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"NOSPLASH");
    if (!bVar2) {
      FText::FromString(&local_18,GInternalProjectName);
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      bVar2 = FGenericPlatformSplash::GetSplashPath(L"Splash",&local_28,(bool *)local_res8);
      if (bVar2) {
        if (local_res8[0]._0_1_ == false) {
          pFVar4 = FText::ToString(&local_18);
          if ((pFVar4->Data).ArrayNum == 0) {
            pwVar3 = L"";
          }
          else {
            pwVar3 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
          }
          StartSetSplashText(GameName,pwVar3);
        }
        GSplashScreenGuard =
             (HWND__ *)
             CreateWindowExW(0,L"STATIC",L"SplashScreenGuard",0,0,0,0,0,(HWND)0xfffffffffffffffd,
                             (HMENU)0x0,(HINSTANCE)hInstance,(LPVOID)0x0);
        if (GSplashScreenGuard != (HWND__ *)0x0) {
          ShowWindow((HWND)GSplashScreenGuard,5);
        }
        GSplashWindowCreationEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        iVar6 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange
                  (&GSplashScreenFileName,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar6);
        local_res8[0] = 0;
        GSplashScreenThread =
             CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x20000,StartSplashScreenThread,(LPVOID)0x0,
                          0x10000,local_res8);
        this = FStartupMessages::Get();
        DVar1 = local_res8[0];
        pFVar5 = ::FName::FName(&local_res10,"SplashScreenThread");
        FStartupMessages::AddThreadMetadata(this,*pFVar5,DVar1);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

