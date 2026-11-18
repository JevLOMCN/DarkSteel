// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 26

// StaticClass @ 14cfcc4b0

UClass * __cdecl UAppleARKitSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitSettings",
               &Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton,
               StaticRegisterNativesUAppleARKitSettings,0xc0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitSettings>,
               InternalVTableHelperCtorCaller<UAppleARKitSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton;
}

// UAppleARKitSettings @ 14cfd06b0

UAppleARKitSettings * __thiscall
UAppleARKitSettings::UAppleARKitSettings(UAppleARKitSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  (this->FaceTrackingLogDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaceTrackingLogDir).Data.ArrayNum = 0;
  (this->FaceTrackingLogDir).Data.ArrayMax = 0;
  (this->LivelinkTrackingTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LivelinkTrackingTypes).ArrayNum = 0;
  (this->LivelinkTrackingTypes).ArrayMax = 0;
  (this->DefaultFaceTrackingLiveLinkSubjectName).ComparisonIndex = 0;
  (this->DefaultFaceTrackingLiveLinkSubjectName).Number = 0;
  (this->DefaultPoseTrackingLiveLinkSubjectName).ComparisonIndex = 0;
  (this->DefaultPoseTrackingLiveLinkSubjectName).Number = 0;
  (this->ARKitTimecodeProvider).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ARKitTimecodeProvider).Data.ArrayNum = 0;
  (this->ARKitTimecodeProvider).Data.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~UAppleARKitSettings @ 14cfd13a0

void __thiscall UAppleARKitSettings::~UAppleARKitSettings(UAppleARKitSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->ARKitTimecodeProvider).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LivelinkTrackingTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FaceTrackingLogDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateFaceTrackingLogDir @ 14cfd3f90

void __cdecl UAppleARKitSettings::CreateFaceTrackingLogDir(void)

{
  undefined1 *lpCriticalSection;
  UObject *pUVar1;
  void *_Src;
  code *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  UClass *this;
  wchar_t *pwVar6;
  IFileManager *pIVar7;
  size_t sVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  lpCriticalSection = &pUVar1[3].field_0x20;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = *(int *)&pUVar1[1].field_0x18;
  lVar11 = (longlong)local_40;
  _Src = *(void **)&pUVar1[1].field_0x10;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar11 * 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = local_40 + -1;
  if (local_40 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
    FVar12.Data = (FScriptContainerElement *)L"FaceTracking";
  }
  else {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar12.Data = local_48.Data;
    }
  }
  pwVar6 = FWindowsPlatformProcess::UserDir();
  ::FString::FString(&local_38,pwVar6);
  pIVar7 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar7 + 0x58);
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  iVar3 = local_38.Data.ArrayNum;
  FVar10.Data = local_38.Data.AllocatorInstance.Data;
  iVar14 = 1;
  iVar5 = (int)sVar8;
  local_58.Data.ArrayNum = local_38.Data.ArrayNum;
  if ((local_38.Data.ArrayNum != 0) || (iVar9 = 2, iVar5 == -1)) {
    iVar9 = 1;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((local_38.Data.ArrayNum == 0) && (iVar5 + iVar9 == 0)) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    uVar13 = local_38.Data.ArrayNum + iVar5 + iVar9;
    if ((int)uVar13 < local_38.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_58.Data.AllocatorInstance.Data,FVar10.Data,(longlong)iVar3 * 2);
    }
  }
  ::FString::PathAppend(&local_58,(wchar_t *)FVar12.Data,iVar5);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
  }
  cVar4 = (*pcVar2)(pIVar7,FVar10.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar4 == '\0') {
    pIVar7 = IFileManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar7 + 0x60);
    sVar8 = wcslen((wchar_t *)FVar12.Data);
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
    iVar5 = (int)sVar8;
    local_58.Data.ArrayNum = local_38.Data.ArrayNum;
    if ((local_38.Data.ArrayNum == 0) && (iVar5 != -1)) {
      iVar14 = 2;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((local_38.Data.ArrayNum == 0) && (iVar5 + iVar14 == 0)) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      uVar13 = local_38.Data.ArrayNum + iVar5 + iVar14;
      if ((int)uVar13 < local_38.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      if (local_38.Data.ArrayNum != 0) {
        memcpy(local_58.Data.AllocatorInstance.Data,FVar10.Data,(longlong)local_38.Data.ArrayNum * 2
              );
      }
    }
    ::FString::PathAppend(&local_58,(wchar_t *)FVar12.Data,iVar5);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar12.Data = local_58.Data.AllocatorInstance.Data;
    }
    (*pcVar2)(pIVar7,FVar12.Data,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// CreateImageLogDir @ 14cfd4290

void __cdecl UAppleARKitSettings::CreateImageLogDir(void)

{
  undefined1 *lpCriticalSection;
  UObject *pUVar1;
  void *_Src;
  code *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  UClass *this;
  wchar_t *pwVar6;
  IFileManager *pIVar7;
  size_t sVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  lpCriticalSection = &pUVar1[3].field_0x20;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = *(int *)&pUVar1[1].field_0x18;
  lVar11 = (longlong)local_40;
  _Src = *(void **)&pUVar1[1].field_0x10;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,_Src,lVar11 * 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = local_40 + -1;
  if (local_40 == 0) {
    iVar5 = 0;
  }
  if (iVar5 < 1) {
    FVar12.Data = (FScriptContainerElement *)L"CameraImages";
  }
  else {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar12.Data = local_48.Data;
    }
  }
  pwVar6 = FWindowsPlatformProcess::UserDir();
  ::FString::FString(&local_38,pwVar6);
  pIVar7 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar7 + 0x58);
  sVar8 = wcslen((wchar_t *)FVar12.Data);
  iVar3 = local_38.Data.ArrayNum;
  FVar10.Data = local_38.Data.AllocatorInstance.Data;
  iVar14 = 1;
  iVar5 = (int)sVar8;
  local_58.Data.ArrayNum = local_38.Data.ArrayNum;
  if ((local_38.Data.ArrayNum != 0) || (iVar9 = 2, iVar5 == -1)) {
    iVar9 = 1;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((local_38.Data.ArrayNum == 0) && (iVar5 + iVar9 == 0)) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    uVar13 = local_38.Data.ArrayNum + iVar5 + iVar9;
    if ((int)uVar13 < local_38.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    if (iVar3 != 0) {
      memcpy(local_58.Data.AllocatorInstance.Data,FVar10.Data,(longlong)iVar3 * 2);
    }
  }
  ::FString::PathAppend(&local_58,(wchar_t *)FVar12.Data,iVar5);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar10.Data = local_58.Data.AllocatorInstance.Data;
  }
  cVar4 = (*pcVar2)(pIVar7,FVar10.Data);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (cVar4 == '\0') {
    pIVar7 = IFileManager::Get();
    pcVar2 = *(code **)((longlong)*pIVar7 + 0x60);
    sVar8 = wcslen((wchar_t *)FVar12.Data);
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
    iVar5 = (int)sVar8;
    local_58.Data.ArrayNum = local_38.Data.ArrayNum;
    if ((local_38.Data.ArrayNum == 0) && (iVar5 != -1)) {
      iVar14 = 2;
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((local_38.Data.ArrayNum == 0) && (iVar5 + iVar14 == 0)) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      uVar13 = local_38.Data.ArrayNum + iVar5 + iVar14;
      if ((int)uVar13 < local_38.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      if (local_38.Data.ArrayNum != 0) {
        memcpy(local_58.Data.AllocatorInstance.Data,FVar10.Data,(longlong)local_38.Data.ArrayNum * 2
              );
      }
    }
    ::FString::PathAppend(&local_58,(wchar_t *)FVar12.Data,iVar5);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar12.Data = local_58.Data.AllocatorInstance.Data;
    }
    (*pcVar2)(pIVar7,FVar12.Data,0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// Exec_Runtime @ 14cfd4e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UAppleARKitSettings::Exec_Runtime
          (UAppleARKitSettings *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  uint *lpCriticalSection;
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"ARKitSettings",true);
  if (bVar1) {
    lpCriticalSection = &(this->DefaultFaceTrackingLiveLinkSubjectName).Number;
    if (lpCriticalSection == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = FParse::Command(local_res18,L"StartFileWriting",true);
    if (bVar1) {
      CreateFaceTrackingLogDir();
      this->bRequireARKitSupport = true;
      this->field_0x33 = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Command(local_res18,L"StopFileWriting",true);
    if (bVar1) {
      this->bRequireARKitSupport = false;
      this->field_0x33 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Command(local_res18,L"StartCameraFileWriting",true);
    if (bVar1) {
      this->field_0x33 = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Command(local_res18,L"StopCameraFileWriting",true);
    if (bVar1) {
      this->field_0x33 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Command(local_res18,L"SavePerFrame",true);
    if (bVar1) {
      this->field_0x31 = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Command(local_res18,L"SaveOnDemand",true);
    if (bVar1) {
      this->field_0x31 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Value(local_res18[0],L"FaceLogDir=",(FString *)&this->_padding_,true,
                          (wchar_t **)0x0);
    if (bVar1) {
      CreateFaceTrackingLogDir();
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    bVar1 = FParse::Value(local_res18[0],L"LiveLinkSubjectName=",
                          (FName *)&(this->FaceTrackingLogDir).Data.ArrayMax);
    if (bVar1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// GetFaceTrackingDirection @ 14cfd6630

EARFaceTrackingDirection __thiscall
UAppleARKitSettings::GetFaceTrackingDirection(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EARFaceTrackingDirection EVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->DefaultFaceTrackingDirection;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFaceTrackingFileWriterType @ 14cfd6680

EARFaceTrackingFileWriterType __thiscall
UAppleARKitSettings::GetFaceTrackingFileWriterType(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EARFaceTrackingFileWriterType EVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->FaceTrackingFileWriterType;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFaceTrackingLiveLinkSubjectName @ 14cfd66d0

FName __thiscall UAppleARKitSettings::GetFaceTrackingLiveLinkSubjectName(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName in_RDX;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(FName *)in_RDX = this->DefaultFaceTrackingLiveLinkSubjectName;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFaceTrackingLogDir @ 14cfd6730

FString * __thiscall
UAppleARKitSettings::GetFaceTrackingLogDir
          (UAppleARKitSettings *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(__return_storage_ptr__,&this->FaceTrackingLogDir);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetGameThreadPriorityOverride @ 14cfd67b0

int __thiscall UAppleARKitSettings::GetGameThreadPriorityOverride(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = this->GameThreadPriorityOverride;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLiveLinkPublishingPort @ 14cfd6d60

int __thiscall UAppleARKitSettings::GetLiveLinkPublishingPort(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = this->LiveLinkPublishingPort;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPoseTrackingLiveLinkSubjectName @ 14cfd7040

FName __thiscall UAppleARKitSettings::GetPoseTrackingLiveLinkSubjectName(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName in_RDX;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(FName *)in_RDX = this->DefaultPoseTrackingLiveLinkSubjectName;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPrivateStaticClass @ 14cfd75d0

UClass * __cdecl UAppleARKitSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"AppleARKitSettings",
               &Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton,
               StaticRegisterNativesUAppleARKitSettings,0xc0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitSettings>,
               InternalVTableHelperCtorCaller<UAppleARKitSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitSettings.InnerSingleton;
}

// GetRenderThreadPriorityOverride @ 14cfd7b50

int __thiscall UAppleARKitSettings::GetRenderThreadPriorityOverride(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = this->RenderThreadPriorityOverride;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetTimecodeProvider @ 14cfd89a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTimecodeProvider * __cdecl UAppleARKitSettings::GetTimecodeProvider(void)

{
  UObject *pUVar1;
  UEngine *pUVar2;
  UClass *pUVar3;
  size_t sVar4;
  UTimecodeProvider *pUVar5;
  int iVar6;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar1 = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar6 = 0;
  if (*(int *)&pUVar1[3].field_0x18 == 0) {
    local_28.DataPtr = L"";
LAB_14cfd8a03:
    sVar4 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar4;
  }
  else {
    local_28.DataPtr = *(wchar_t **)&pUVar1[3].field_0x10;
    local_28.Size = iVar6;
    if (local_28.DataPtr != (wchar_t *)0x0) goto LAB_14cfd8a03;
  }
  pUVar2 = GEngine;
  pUVar3 = Z_Construct_UClass_UTimecodeProvider_NoRegister();
  local_18.DataPtr = local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  pUVar5 = (UTimecodeProvider *)StaticFindObject(pUVar3,(UObject *)pUVar2,&local_18,None);
  if (pUVar5 != (UTimecodeProvider *)0x0) {
    return pUVar5;
  }
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  if (*(int *)&pUVar1[3].field_0x18 == 0) {
    local_18.DataPtr = L"";
  }
  else {
    local_18.DataPtr = *(wchar_t **)&pUVar1[3].field_0x10;
    if (local_18.DataPtr == (wchar_t *)0x0) goto LAB_14cfd8a73;
  }
  sVar4 = wcslen(local_18.DataPtr);
  iVar6 = (int)sVar4;
LAB_14cfd8a73:
  local_18.Size = iVar6;
  pUVar3 = Z_Construct_UClass_UTimecodeProvider_NoRegister();
  pUVar3 = StaticLoadClass(pUVar3,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0);
  if ((pUVar3 == (UClass *)0x0) ||
     (pUVar5 = NewObject<UTimecodeProvider>
                         ((UObject *)GEngine,pUVar3,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0),
     pUVar5 == (UTimecodeProvider *)0x0)) {
    pUVar3 = UAppleARKitTimecodeProvider::StaticClass();
    pUVar5 = NewObject<UTimecodeProvider>
                       ((UObject *)GEngine,pUVar3,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  return pUVar5;
}

// GetWrittenCameraImageQuality @ 14cfd8f50

int __thiscall UAppleARKitSettings::GetWrittenCameraImageQuality(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = this->WrittenCameraImageQuality;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetWrittenCameraImageRotation @ 14cfd8fa0

ETextureRotationDirection __thiscall
UAppleARKitSettings::GetWrittenCameraImageRotation(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ETextureRotationDirection EVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->WrittenCameraImageRotation;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetWrittenCameraImageScale @ 14cfd8ff0

float __thiscall UAppleARKitSettings::GetWrittenCameraImageScale(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->WrittenCameraImageScale;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsFaceTrackingLoggingEnabled @ 14cfd9b90

bool __thiscall UAppleARKitSettings::IsFaceTrackingLoggingEnabled(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bFaceTrackingLogData;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsLiveLinkEnabledForFaceTracking @ 14cfd9c80

bool __thiscall UAppleARKitSettings::IsLiveLinkEnabledForFaceTracking(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->LivelinkTrackingTypes).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->LivelinkTrackingTypes).ArrayNum;
  do {
    if (pFVar1 == pFVar2) {
      bVar3 = false;
LAB_14cfd9cc2:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar3;
    }
    if (*pFVar1 == (FScriptContainerElement)0x0) {
      bVar3 = true;
      goto LAB_14cfd9cc2;
    }
    pFVar1 = pFVar1 + 1;
  } while( true );
}

// IsLiveLinkEnabledForPoseTracking @ 14cfd9cf0

bool __thiscall UAppleARKitSettings::IsLiveLinkEnabledForPoseTracking(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->LivelinkTrackingTypes).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->LivelinkTrackingTypes).ArrayNum;
  do {
    if (pFVar1 == pFVar2) {
      bVar3 = false;
LAB_14cfd9d32:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar3;
    }
    if (*pFVar1 == (FScriptContainerElement)0x1) {
      bVar3 = true;
      goto LAB_14cfd9d32;
    }
    pFVar1 = pFVar1 + 1;
  } while( true );
}

// ShouldAdjustThreadPriorities @ 14cfdeb20

bool __thiscall UAppleARKitSettings::ShouldAdjustThreadPriorities(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bAdjustThreadPrioritiesDuringARSession;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ShouldFaceTrackingLogPerFrame @ 14cfdec40

bool __thiscall UAppleARKitSettings::ShouldFaceTrackingLogPerFrame(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bFaceTrackingWriteEachFrame;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ShouldWriteCameraImagePerFrame @ 14cfdece0

bool __thiscall UAppleARKitSettings::ShouldWriteCameraImagePerFrame(UAppleARKitSettings *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->bShouldWriteCameraImagePerFrame;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUAppleARKitSettings @ 14cfdf470

void __cdecl UAppleARKitSettings::StaticRegisterNativesUAppleARKitSettings(void)

{
  return;
}

