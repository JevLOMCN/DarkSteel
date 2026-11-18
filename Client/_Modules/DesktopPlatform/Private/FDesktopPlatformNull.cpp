// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 18

// FDesktopPlatformNull @ 142d1ba20

FDesktopPlatformNull * __thiscall
FDesktopPlatformNull::FDesktopPlatformNull(FDesktopPlatformNull *this)

{
  FDesktopPlatformBase::FDesktopPlatformBase((FDesktopPlatformBase *)this);
  *(undefined ***)this = &___7FDesktopPlatformNull__6B_;
  return this;
}

// ~FDesktopPlatformNull @ 142d1c840

void __thiscall FDesktopPlatformNull::~FDesktopPlatformNull(FDesktopPlatformNull *this)

{
  *(undefined ***)this = &___7FDesktopPlatformNull__6B_;
  FDesktopPlatformBase::~FDesktopPlatformBase((FDesktopPlatformBase *)this);
  return;
}

// EnumerateEngineInstallations @ 142d1ee50

void __thiscall
FDesktopPlatformNull::EnumerateEngineInstallations
          (FDesktopPlatformNull *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142d1ee53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x50))();
  return;
}

// FileDialogShared @ 142d21590

bool __thiscall
FDesktopPlatformNull::FileDialogShared
          (FDesktopPlatformNull *this,bool param_1,void *param_2,FString *param_3,FString *param_4,
          FString *param_5,FString *param_6,uint param_7,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_8,int *param_9)

{
  return false;
}

// GetNativeFeedbackContext @ 142d243d0

FFeedbackContext * __thiscall
FDesktopPlatformNull::GetNativeFeedbackContext(FDesktopPlatformNull *this)

{
  _iobuf *p_Var1;
  
  if (!AlreadySeenThisStubbedSection) {
    AlreadySeenThisStubbedSection = true;
    p_Var1 = (_iobuf *)__acrt_iob_func(2);
    fprintf(p_Var1,"STUBBED: %s at %s:%d (%s)\n");
  }
  return GWarn;
}

// GetOidcTokenExecutableFilename @ 142d253f0

FString * __thiscall
FDesktopPlatformNull::GetOidcTokenExecutableFilename
          (FDesktopPlatformNull *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// GetUserTempPath @ 142d282b0

FString * __thiscall
FDesktopPlatformNull::GetUserTempPath(FDesktopPlatformNull *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FWindowsPlatformProcess::UserTempDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// IsSourceDistribution @ 142d28e00

bool __thiscall
FDesktopPlatformNull::IsSourceDistribution(FDesktopPlatformNull *this,FString *param_1)

{
  IFileManager *pIVar1;
  byte extraout_var;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::operator/(&local_18,param_1,L"Engine/Build/SourceDistribution.txt");
  pIVar1 = IFileManager::Get();
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x110))(pIVar1,FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)(extraout_var >> 7 ^ 1);
}

// OpenDirectoryDialog @ 142d2a900

bool __thiscall
FDesktopPlatformNull::OpenDirectoryDialog
          (FDesktopPlatformNull *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  FModuleManager *pFVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  FName local_18 [2];
  
  pFVar3 = FModuleManager::Get();
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar3,*pFVar4);
  if (!bVar1) {
    pFVar3 = FModuleManager::Get();
    pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
    FModuleManager::LoadModule(pFVar3,*pFVar4,None);
  }
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
  uVar2 = 0;
  if (pIVar5 != (IModuleInterface *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,param_1,param_2,param_3,param_4);
  }
  return (bool)uVar2;
}

// OpenFileDialog @ 142d2acf0

bool __thiscall
FDesktopPlatformNull::OpenFileDialog
          (FDesktopPlatformNull *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,uint param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  FModuleManager *pFVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  FName local_18 [2];
  
  pFVar3 = FModuleManager::Get();
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar3,*pFVar4);
  if (!bVar1) {
    pFVar3 = FModuleManager::Get();
    pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
    FModuleManager::LoadModule(pFVar3,*pFVar4,None);
  }
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
  uVar2 = 0;
  if (pIVar5 != (IModuleInterface *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar5 + 0x40))
                      (pIVar5,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return (bool)uVar2;
}

// OpenFileDialog @ 142d2ade0

bool __thiscall
FDesktopPlatformNull::OpenFileDialog
          (FDesktopPlatformNull *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,uint param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7,int *param_8)

{
  bool bVar1;
  undefined1 uVar2;
  FModuleManager *pFVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  FName local_18 [2];
  
  pFVar3 = FModuleManager::Get();
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar3,*pFVar4);
  if (!bVar1) {
    pFVar3 = FModuleManager::Get();
    pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
    FModuleManager::LoadModule(pFVar3,*pFVar4,None);
  }
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
  uVar2 = 0;
  if (pIVar5 != (IModuleInterface *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar5 + 0x48))
                      (pIVar5,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  }
  return (bool)uVar2;
}

// OpenFontDialog @ 142d2afb0

bool __thiscall
FDesktopPlatformNull::OpenFontDialog
          (FDesktopPlatformNull *this,void *param_1,FString *param_2,float *param_3,
          EFontImportFlags *param_4)

{
  return false;
}

// OpenProject @ 142d2b3e0

bool __thiscall FDesktopPlatformNull::OpenProject(FDesktopPlatformNull *this,FString *param_1)

{
  FScriptContainerElement *_Src;
  _iobuf *p_Var1;
  longlong lVar2;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  FPaths::MakePlatformFilename(&local_18);
  if (AlreadySeenThisStubbedSection == false) {
    AlreadySeenThisStubbedSection = true;
    p_Var1 = (_iobuf *)__acrt_iob_func(2);
    fprintf(p_Var1,"STUBBED: %s at %s:%d (%s)\n");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// RegisterEngineInstallation @ 142d30980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FDesktopPlatformNull::RegisterEngineInstallation
          (FDesktopPlatformNull *this,FString *param_1,FString *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FString *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  IFileManager *pIVar10;
  FArchive *pFVar11;
  FGuid *pFVar12;
  FName *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStackY_208 [32];
  FGuid local_1c8;
  FString local_1b8;
  FString local_1a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_198;
  ForAnyElementType local_188;
  uint local_180;
  FString local_178;
  FString local_168;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_158;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_148;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  cVar1 = (**(code **)(*(longlong *)this + 0xc0))();
  if (cVar1 == '\0') {
    return false;
  }
  FConfigFile::FConfigFile(&local_138);
  pFVar6 = ::FString::FString(&local_178,L"Install.ini");
  pFVar7 = ::FString::FString(&local_168,L"UnrealEngine");
  pwVar8 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar9 = &::FString::FString((FString *)&local_188,pwVar8)->Data;
  iVar3 = (pFVar7->Data).ArrayNum;
  iVar17 = 0;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar17;
  }
  if ((pTVar9->ArrayNum != 0) || (iVar3 = 1, iVar4 + 1 == 0)) {
    iVar3 = iVar17;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_1c8,pTVar9,iVar3 + iVar4 + 1);
  ::FString::PathAppend
            ((FString *)&local_1c8,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar4);
  iVar3 = (pFVar6->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar17;
  }
  if ((local_1c8.C != 0) || (iVar3 = 1, iVar4 + 1 == 0)) {
    iVar3 = iVar17;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_148,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_1c8,iVar3 + iVar4 + 1)
  ;
  ::FString::PathAppend
            ((FString *)&local_148,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar4);
  if ((FName)local_1c8._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_1c8._0_8_);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FConfigFile::Read(&local_138,(FString *)&local_148);
  ::FString::FString((FString *)&local_188,"InstalledBuild.txt");
  ::FString::FString(&local_168,"Build");
  ::FString::FString(&local_178,"Engine");
  uVar5 = (param_1->Data).ArrayNum;
  iVar3 = local_178.Data.ArrayNum + -1;
  if (local_178.Data.ArrayNum == 0) {
    iVar3 = iVar17;
  }
  iVar4 = iVar3 + 1;
  local_1c8.C = uVar5;
  if ((uVar5 == 0) && (iVar4 != 0)) {
    pFVar15 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar3 + 2;
LAB_142d30b42:
    local_1c8.A = 0;
    local_1c8.B = 0;
    if (iVar4 == 0) {
      local_1c8.D = 0;
      goto LAB_142d30b98;
    }
  }
  else {
    pFVar15 = (param_1->Data).AllocatorInstance.Data;
    if (uVar5 == 0) goto LAB_142d30b42;
  }
  local_1c8.A = 0;
  local_1c8.B = 0;
  uVar16 = uVar5 + iVar4;
  if ((int)uVar16 < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar16,0,(ForAnyElementType *)&local_1c8,uVar5,(int *)((longlong)&local_1c8 + 0xc))
  ;
  if (uVar5 != 0) {
    memcpy((void *)local_1c8._0_8_,pFVar15,(longlong)(int)uVar5 * 2);
  }
LAB_142d30b98:
  ::FString::PathAppend
            ((FString *)&local_1c8,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar3);
  iVar3 = local_168.Data.ArrayNum + -1;
  if (local_168.Data.ArrayNum == 0) {
    iVar3 = iVar17;
  }
  if ((local_1c8.C != 0) || (iVar4 = 1, iVar3 + 1 == 0)) {
    iVar4 = iVar17;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_198,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_1c8,iVar4 + iVar3 + 1)
  ;
  ::FString::PathAppend
            ((FString *)&local_198,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar3);
  iVar3 = local_180 - 1;
  if (local_180 == 0) {
    iVar3 = iVar17;
  }
  if ((local_198.ArrayNum != 0) || (iVar4 = 1, iVar3 + 1 == 0)) {
    iVar4 = iVar17;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_158,&local_198,iVar4 + iVar3 + 1);
  ::FString::PathAppend((FString *)&local_158,(wchar_t *)local_188.Data,iVar3);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  if ((FName)local_1c8._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_1c8._0_8_);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  pIVar10 = IFileManager::Get();
  pwVar8 = L"";
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_158.ArrayNum != 0) {
    FVar14.Data = local_158.AllocatorInstance.Data;
  }
  pFVar11 = (FArchive *)(**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,FVar14.Data);
  if (pFVar11 == (FArchive *)0x0) {
    pFVar12 = FGuid::NewGuid((FGuid *)&local_188);
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar12,&local_1a8,DigitsWithHyphens);
    if (param_2 != &local_1a8) {
      pFVar15 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (param_2->Data).AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_1a8.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_1a8.Data.ArrayMax;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    FFileHelper::LoadFileToString(param_2,pFVar11,None);
    bVar2 = FGuid::Parse(param_2,&local_1c8);
    if (bVar2) {
      uVar5 = local_1c8.A;
      uVar16 = local_1c8.B;
    }
    else {
      local_1c8.D = 0;
      local_1c8.C = 0;
      local_1c8.A = 0;
      local_1c8.B = 0;
      uVar5 = 0;
      uVar16 = 0;
    }
    if (((uVar5 == 0 && uVar16 == 0) && local_1c8.C == 0) && local_1c8.D == 0) {
      pFVar12 = FGuid::NewGuid((FGuid *)&local_188);
      local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.Data.ArrayNum = 0;
      local_1b8.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar12,&local_1b8,DigitsWithHyphens);
      if (param_2 != &local_1b8) {
        pFVar15 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (param_2->Data).AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_1b8.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_1b8.Data.ArrayMax;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(*(longlong *)pFVar11 + 0x210))(pFVar11);
    (*(code *)**(undefined8 **)pFVar11)(pFVar11,1);
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar13 = ::FName::FName((FName *)&local_1c8,pwVar8);
  FConfigFile::AddUniqueToSection(&local_138,L"Installations",*pFVar13,param_1);
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  FConfigFile::Write(&local_138,(FString *)&local_148,true,(FString *)&local_198);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_138);
  return true;
}

// RunUnrealBuildTool @ 142d31840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDesktopPlatformNull::RunUnrealBuildTool
          (FDesktopPlatformNull *this,FText *param_1,FString *param_2,FString *param_3,
          FFeedbackContext *param_4,int *param_5)

{
  bool bVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  *param_5 = 1;
  FDesktopPlatformBase::GetUnrealBuildToolExecutableFilename
            ((FDesktopPlatformBase *)this,&local_18,param_2);
  pIVar2 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,FVar4.Data);
  if (lVar3 < 0) {
    FOutputDevice::LogfImpl
              ((FOutputDevice *)param_4,Error,L"Couldn\'t find UnrealBuildTool at \'%s\'");
  }
  else {
    FOutputDevice::LogfImpl((FOutputDevice *)param_4,L"Running %s %s");
    bVar1 = FFeedbackContextMarkup::PipeProcessOutput(param_1,&local_18,param_3,param_4,param_5);
    if ((bVar1) && (*param_5 == 0)) {
      bVar1 = true;
      goto LAB_142d318c4;
    }
  }
  bVar1 = false;
LAB_142d318c4:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SaveFileDialog @ 142d31a60

bool __thiscall
FDesktopPlatformNull::SaveFileDialog
          (FDesktopPlatformNull *this,void *param_1,FString *param_2,FString *param_3,
          FString *param_4,FString *param_5,uint param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  FModuleManager *pFVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  FName local_18 [2];
  
  pFVar3 = FModuleManager::Get();
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar3,*pFVar4);
  if (!bVar1) {
    pFVar3 = FModuleManager::Get();
    pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
    FModuleManager::LoadModule(pFVar3,*pFVar4,None);
  }
  pFVar4 = ::FName::FName(local_18,"SlateFileDialogs");
  pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
  uVar2 = 0;
  if (pIVar5 != (IModuleInterface *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar5 + 0x58))
                      (pIVar5,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return (bool)uVar2;
}

// UpdateFileAssociations @ 142d35da0

bool __thiscall FDesktopPlatformNull::UpdateFileAssociations(FDesktopPlatformNull *this)

{
  return true;
}

// VerifyFileAssociations @ 142d35fb0

bool __thiscall FDesktopPlatformNull::VerifyFileAssociations(FDesktopPlatformNull *this)

{
  return true;
}

