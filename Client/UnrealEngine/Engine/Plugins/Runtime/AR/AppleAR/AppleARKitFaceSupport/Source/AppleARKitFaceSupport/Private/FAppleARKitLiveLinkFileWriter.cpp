// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 8

// FAppleARKitLiveLinkFileWriter @ 14d282cc0

FAppleARKitLiveLinkFileWriter * __thiscall
FAppleARKitLiveLinkFileWriter::FAppleARKitLiveLinkFileWriter
          (FAppleARKitLiveLinkFileWriter *this,wchar_t *param_1)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)this);
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  ::FString::FString(&this->FileExtension,param_1);
  (this->FrameHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameHistory).ArrayNum = 0;
  (this->FrameHistory).ArrayMax = 0;
  (this->DeviceName).ComparisonIndex = 0;
  (this->DeviceName).Number = 0;
  UAppleARKitSettings::CreateFaceTrackingLogDir();
  return this;
}

// ~FAppleARKitLiveLinkFileWriter @ 14d283f40

void __thiscall
FAppleARKitLiveLinkFileWriter::~FAppleARKitLiveLinkFileWriter(FAppleARKitLiveLinkFileWriter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  this->_padding_ = (longlong)&_vftable__for__IARKitBlendShapePublisher__;
  DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
            ((FFaceTrackingFrame *)(this->FrameHistory).AllocatorInstance.Data,
             (this->FrameHistory).ArrayNum);
  pFVar1 = (this->FrameHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileExtension).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  return;
}

// Exec_Runtime @ 14d286f90

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
FAppleARKitLiveLinkFileWriter::Exec_Runtime
          (FAppleARKitLiveLinkFileWriter *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"FaceAR",true);
  if (bVar1) {
    bVar1 = FParse::Command(local_res18,L"WriteCurveFile",true);
    if (bVar1) {
      lpCriticalSection = &this->CriticalSection;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SaveFileData(this);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return true;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  return false;
}

// GenerateFilePath @ 14d287420

FString * __thiscall
FAppleARKitLiveLinkFileWriter::GenerateFilePath
          (FAppleARKitLiveLinkFileWriter *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  UClass *this_00;
  FDateTime local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FTimecode local_38;
  
  UTimecodeProvider::GetTimecode(this->TimecodeProvider,&local_38);
  FDateTime::UtcNow();
  pwVar1 = FWindowsPlatformProcess::UserDir();
  ::FString::FString(&local_48,pwVar1);
  ::FName::ToString(&this->DeviceName,&local_58);
  this_00 = Z_Construct_UClass_UAppleARKitSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  UAppleARKitSettings::GetFaceTrackingLogDir
            ((UAppleARKitSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr,&local_68);
  FDateTime::GetDay(&local_res8);
  FDateTime::GetMonth(&local_res8);
  FDateTime::GetYear(&local_res8);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s/%s_%d-%d-%d-%d-%d-%d-%d%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PublishBlendShapes @ 14d288f90

void __thiscall
FAppleARKitLiveLinkFileWriter::PublishBlendShapes
          (FAppleARKitLiveLinkFileWriter *this,FName param_1,FQualifiedFrameTime *param_2,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_3,FName param_4)

{
  longlong *lpCriticalSection;
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  FFrameTime *pFVar9;
  FFrameTime *this_00;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pUVar7 = Z_Construct_UClass_UAppleARKitSettings_NoRegister();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  bVar5 = UAppleARKitSettings::IsFaceTrackingLoggingEnabled
                    ((UAppleARKitSettings *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr);
  if (bVar5) {
    puVar1 = (uint *)((longlong)&(this->FrameHistory).AllocatorInstance.Data + 4);
    (this->FrameHistory).ArrayNum = param_4.ComparisonIndex.Value;
    (this->FrameHistory).ArrayMax = param_4.Number;
    uVar6 = *(uint *)&(this->FrameHistory).AllocatorInstance.Data;
    if (uVar6 == *puVar1) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,(ForAnyElementType *)&(this->FileExtension).Data.ArrayNum,
                         (int *)puVar1);
    }
    *(uint *)&(this->FrameHistory).AllocatorInstance.Data = uVar6 + 1;
    uVar8 = 0;
    if ((int)uVar6 < (int)(uVar6 + 1)) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (FFrameTime *)
             ((longlong)(int)uVar6 * 0x60 + *(longlong *)&(this->FileExtension).Data.ArrayNum);
    if (pFVar9 != (FFrameTime *)0x0) {
      iVar3 = (param_2->Rate).Numerator;
      iVar4 = (param_2->Rate).Denominator;
      *pFVar9 = param_2->Time;
      pFVar9[1].FrameNumber = (FFrameNumber)iVar3;
      pFVar9[1].SubFrame = (float)iVar4;
      this_00 = pFVar9 + 2;
      this_00->FrameNumber = 0;
      this_00->SubFrame = 0.0;
      pFVar9[3].FrameNumber = 0;
      pFVar9[3].SubFrame = 0.0;
      pFVar9[6].FrameNumber = 0;
      pFVar9[6].SubFrame = 0.0;
      pFVar9[7].FrameNumber.Value = 0;
      pFVar9[7].SubFrame = 1.79366e-43;
      pFVar9[8].FrameNumber.Value = -1;
      pFVar9[8].SubFrame = 0.0;
      pFVar9[10].FrameNumber = 0;
      pFVar9[10].SubFrame = 0.0;
      pFVar9[0xb].FrameNumber.Value = 0;
      TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
      ::operator=(this_00,(TSet<TTuple<EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>,FDefaultSetAllocator>
                           *)param_3);
    }
    pUVar7 = Z_Construct_UClass_UAppleARKitSettings_NoRegister();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    bVar5 = UAppleARKitSettings::ShouldFaceTrackingLogPerFrame
                      ((UAppleARKitSettings *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr);
    if (bVar5) {
      SaveFileData((FAppleARKitLiveLinkFileWriter *)&this[-1].TimecodeProvider);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d289110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SaveFileData @ 14d28abd0

void __thiscall FAppleARKitLiveLinkFileWriter::SaveFileData(FAppleARKitLiveLinkFileWriter *this)

{
  int *piVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  UClass *this_00;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FDateTime local_res8;
  FScriptContainerElement *local_res10;
  IFileManager *local_res18;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  undefined8 local_68 [2];
  FTimecode local_58;
  
  pwVar5 = (wchar_t *)0x0;
  iVar4 = 0;
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x28))(this,&local_78);
  if (local_68 != puVar2) {
    pwVar5 = (wchar_t *)*puVar2;
    *puVar2 = 0;
    iVar4 = *(int *)(puVar2 + 1);
    puVar2[1] = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_res18 = IFileManager::Get();
  UTimecodeProvider::GetTimecode(this->TimecodeProvider,&local_58);
  FDateTime::UtcNow();
  pwVar3 = FWindowsPlatformProcess::UserDir();
  ::FString::FString((FString *)&local_88,pwVar3);
  ::FName::ToString(&this->DeviceName,&local_98);
  this_00 = Z_Construct_UClass_UAppleARKitSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  UAppleARKitSettings::GetFaceTrackingLogDir
            ((UAppleARKitSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr,&local_a8);
  if ((this->FileExtension).Data.ArrayNum == 0) {
    local_res10 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_res10 = (this->FileExtension).Data.AllocatorInstance.Data;
  }
  FDateTime::GetDay(&local_res8);
  FDateTime::GetMonth(&local_res8);
  FDateTime::GetYear(&local_res8);
  ::FString::PrintfImpl(&local_78,L"%s%s/%s_%d-%d-%d-%d-%d-%d-%d%s");
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  local_88.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_88.Size = 0;
  }
  local_88.DataPtr = pwVar5;
  FFileHelper::SaveStringToFile(&local_88,(wchar_t *)FVar6.Data,ForceAnsi,local_res18,0);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<FAppleARKitLiveLinkFileWriter::FFaceTrackingFrame,int>
            ((FFaceTrackingFrame *)(this->FrameHistory).AllocatorInstance.Data,
             (this->FrameHistory).ArrayNum);
  piVar1 = &(this->FrameHistory).ArrayMax;
  (this->FrameHistory).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->FrameHistory).AllocatorInstance,0,piVar1);
  }
  if (pwVar5 != (wchar_t *)0x0) {
    FMemory::Free(pwVar5);
  }
  return;
}

// SetTimecodeProvider @ 14d28b2c0

void __thiscall
FAppleARKitLiveLinkFileWriter::SetTimecodeProvider
          (FAppleARKitLiveLinkFileWriter *this,UTimecodeProvider *param_1)

{
  this->DeviceName = (FName)param_1;
  return;
}

// Shutdown @ 14d28b430

void __thiscall FAppleARKitLiveLinkFileWriter::Shutdown(FAppleARKitLiveLinkFileWriter *this)

{
  bool bVar1;
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UAppleARKitSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  bVar1 = UAppleARKitSettings::ShouldFaceTrackingLogPerFrame
                    ((UAppleARKitSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr);
  if (!bVar1) {
    SaveFileData((FAppleARKitLiveLinkFileWriter *)&this[-1].TimecodeProvider);
  }
  return;
}

