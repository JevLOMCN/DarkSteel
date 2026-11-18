// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9590

IInstallerError * __cdecl BuildPatchServices::FInstallerErrorFactory::Create(void)

{
  IInstallerError *pIVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pIVar1 = ::operator_new(0xb0);
  if (pIVar1 == (IInstallerError *)0x0) {
    return (IInstallerError *)0x0;
  }
  *pIVar1 = (IInstallerError)&___7FInstallerError_BuildPatchServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar1 + 1),4000);
  pwVar2 = InstallErrorPrefixes::ErrorTypeStrings[0];
  *(undefined4 *)(pIVar1 + 6) = 0;
  ::FString::FString((FString *)(pIVar1 + 7),pwVar2);
  switch(*(undefined4 *)(pIVar1 + 6)) {
  case 0:
    pwVar2 = L"BuildPatchInstallShortError_NoError";
    pwVar3 = L"The operation was successful.";
    break;
  case 1:
    pwVar2 = L"BuildPatchInstallShortError_DownloadError";
    pwVar3 = L"Could not download patch data. Please check your internet connection, and try again."
    ;
    break;
  case 2:
    pwVar2 = L"BuildPatchInstallShortError_FileConstructionFail";
    pwVar3 = L"A file corruption has occurred. Please try again.";
    break;
  case 3:
    pwVar2 = L"BuildPatchInstallShortError_MoveFileToInstall";
    pwVar3 = L"A file access error has occurred. Please check your running processes.";
    break;
  case 4:
    pwVar2 = L"BuildPatchInstallShortError_BuildCorrupt";
    pwVar3 = L"The installation is corrupt. Please contact support.";
    break;
  case 5:
    pwVar2 = L"BuildPatchInstallShortError_ApplicationClosing";
    pwVar3 = L"The application is closing.";
    break;
  case 6:
    pwVar2 = L"BuildPatchInstallShortError_ApplicationError";
    pwVar3 = L"Patching service could not start. Please contact support.";
    break;
  case 7:
    pwVar2 = L"BuildPatchInstallShortError_UserCanceled";
    pwVar3 = L"User cancelled.";
    break;
  case 8:
    pwVar2 = L"BuildPatchInstallShortError_PrerequisiteError";
    pwVar3 = L"The necessary prerequisites have failed to install. Please contact support.";
    break;
  case 9:
    pwVar2 = L"BuildPatchInstallShortError_InitializationError";
    pwVar3 = L"The installer failed to initialize. Please contact support.";
    break;
  case 10:
    pwVar2 = L"BuildPatchInstallShortError_PathLengthExceeded";
    pwVar3 = L"Maximum path length exceeded. Please specify a shorter install location.";
    break;
  case 0xb:
    pwVar2 = L"BuildPatchInstallShortError_OutOfDiskSpace";
    pwVar3 = L"Not enough disk space available. Please free up some disk space and try again.";
    break;
  default:
    pwVar2 = L"BuildPatchInstallShortError_InvalidOrMax";
    pwVar3 = L"An unknown error ocurred. Please contact support.";
  }
  FText::AsLocalizable_Advanced_LocText
            ((FText *)(pIVar1 + 9),L"BuildPatchInstallError",pwVar2,pwVar3);
  *(undefined4 *)(pIVar1 + 0xb) = 0;
  pIVar1[0xe] = (IInstallerError)0x0;
  pIVar1[0xf] = (IInstallerError)0x0;
  pIVar1[0x13] = (IInstallerError)0x0;
  pIVar1[0x15] = (IInstallerError)0x0;
  pIVar1[0xc] = (IInstallerError)0x0;
  pIVar1[0xd] = (IInstallerError)0x0;
  pIVar1[0x10] = (IInstallerError)0x0;
  *(undefined4 *)(pIVar1 + 0x11) = 0;
  *(undefined4 *)&pIVar1[0x11].field_0x4 = 0x80;
  *(undefined4 *)(pIVar1 + 0x12) = 0xffffffff;
  *(undefined4 *)&pIVar1[0x12].field_0x4 = 0;
  pIVar1[0x14] = (IInstallerError)0x0;
  return pIVar1;
}

