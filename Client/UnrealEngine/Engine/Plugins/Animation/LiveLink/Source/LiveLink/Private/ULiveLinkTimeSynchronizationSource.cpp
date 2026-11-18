// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 18

// StaticClass @ 14cff6b90

UClass * __cdecl ULiveLinkTimeSynchronizationSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTimeSynchronizationSource",
               &Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesULiveLinkTimeSynchronizationSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<ULiveLinkTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton;
}

// ULiveLinkTimeSynchronizationSource @ 14d0143e0

ULiveLinkTimeSynchronizationSource * __thiscall
ULiveLinkTimeSynchronizationSource::ULiveLinkTimeSynchronizationSource
          (ULiveLinkTimeSynchronizationSource *this,FVTableHelper *param_1)

{
  UTimeSynchronizationSource::UTimeSynchronizationSource((UTimeSynchronizationSource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7ULiveLinkTimeSynchronizationSource__6B_;
  (this->SubjectName).Name = (FName)0x0;
  this->State = NotSynced;
  (this->CachedData).bIsValid = false;
  (this->CachedData).OldestSampleTime.FrameNumber = 0;
  (this->CachedData).OldestSampleTime.SubFrame = 0.0;
  (this->CachedData).NewestSampleTime.FrameNumber = 0;
  (this->CachedData).NewestSampleTime.SubFrame = 0.0;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  (this->CachedData).SampleFrameRate.Numerator = 60000;
  (this->CachedData).SampleFrameRate.Denominator = 1;
  return this;
}

// ULiveLinkTimeSynchronizationSource @ 14d014440

ULiveLinkTimeSynchronizationSource * __thiscall
ULiveLinkTimeSynchronizationSource::ULiveLinkTimeSynchronizationSource
          (ULiveLinkTimeSynchronizationSource *this)

{
  int iVar1;
  FObjectInitializer *pFVar2;
  IModularFeatures *pIVar3;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *pTVar4;
  longlong lVar5;
  FLiveLinkClient *pFVar6;
  
  pFVar2 = FObjectInitializer::Get();
  UTimeSynchronizationSource::UTimeSynchronizationSource((UTimeSynchronizationSource *)this,pFVar2);
  this->_padding_ = (longlong)&___7ULiveLinkTimeSynchronizationSource__6B_;
  (this->SubjectName).Name = (FName)0x0;
  (this->CachedData).bIsValid = false;
  (this->CachedData).OldestSampleTime.FrameNumber = 0;
  (this->CachedData).OldestSampleTime.SubFrame = 0.0;
  (this->CachedData).NewestSampleTime.FrameNumber = 0;
  (this->CachedData).NewestSampleTime.SubFrame = 0.0;
  (this->CachedData).SampleFrameRate.Numerator = 60000;
  (this->CachedData).SampleFrameRate.Denominator = 1;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  this->State = NotSynced;
  if ((this->_padding_ & 0x30) == 0) {
    pIVar3 = IModularFeatures::Get();
    pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
              *)(**(code **)((longlong)*pIVar3 + 0x38))(pIVar3);
    TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
    ::AddUObject<ULiveLinkTimeSynchronizationSource>
              (pTVar4,(ULiveLinkTimeSynchronizationSource *)&stack0x00000008,(pmf_a312ab9c)this);
    pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
              *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
    TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
    ::AddUObject<ULiveLinkTimeSynchronizationSource>
              (pTVar4,(ULiveLinkTimeSynchronizationSource *)&stack0x00000008,(pmf_a312ab9c)this);
    iVar1 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
    if (0 < iVar1) {
      lVar5 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
      pFVar6 = (FLiveLinkClient *)(lVar5 + -8);
      if (lVar5 == 0) {
        pFVar6 = (FLiveLinkClient *)0x0;
      }
      this->LiveLinkClient = pFVar6;
    }
    return this;
  }
  return this;
}

// ~ULiveLinkTimeSynchronizationSource @ 14d017480

void __thiscall
ULiveLinkTimeSynchronizationSource::~ULiveLinkTimeSynchronizationSource
          (ULiveLinkTimeSynchronizationSource *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkTimeSynchronizationSource__6B_;
  UTimeSynchronizationSource::~UTimeSynchronizationSource((UTimeSynchronizationSource *)this);
  return;
}

// Close @ 14d029ac0

void __thiscall ULiveLinkTimeSynchronizationSource::Close(ULiveLinkTimeSynchronizationSource *this)

{
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  this->State = NotSynced;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  return;
}

// GetDisplayName @ 14d04b780

FString * __thiscall
ULiveLinkTimeSynchronizationSource::GetDisplayName
          (ULiveLinkTimeSynchronizationSource *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&(this->SubjectName).Name,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFrameRate @ 14d04d590

FFrameRate __thiscall
ULiveLinkTimeSynchronizationSource::GetFrameRate(ULiveLinkTimeSynchronizationSource *this)

{
  FFrameRate in_RDX;
  
  UpdateCachedState(this);
  *(FFrameRate *)in_RDX = (this->CachedData).SampleFrameRate;
  return in_RDX;
}

// GetNewestSampleTime @ 14d050630

FFrameTime __thiscall
ULiveLinkTimeSynchronizationSource::GetNewestSampleTime(ULiveLinkTimeSynchronizationSource *this)

{
  int iVar1;
  FFrameTime FVar2;
  uint uVar3;
  int iVar4;
  FFrameTime in_RDX;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStackX_14;
  
  UpdateCachedState(this);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  FVar2 = (this->CachedData).NewestSampleTime;
  fStackX_14 = FVar2.SubFrame;
  fStackX_14 = fStackX_14 + 0.0;
  iVar4 = (int)fStackX_14;
  fVar6 = fStackX_14;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fStackX_14)) {
    auVar7._4_4_ = fStackX_14;
    auVar7._0_4_ = fStackX_14;
    auVar7._8_8_ = 0;
    uVar3 = movmskps(iVar1,auVar7);
    fVar6 = (float)(int)(iVar4 - (uVar3 & 1));
  }
  fVar5 = fStackX_14 - fVar6;
  if (::FFrameTime::MaxSubframe <= fStackX_14 - fVar6) {
    fVar5 = ::FFrameTime::MaxSubframe;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(int *)in_RDX =
       ((int)ROUND((fStackX_14 + fStackX_14) - __real_3f000000) >> 1) +
       FVar2.FrameNumber.Value.Value + iVar1;
  *(float *)((longlong)in_RDX + 4) = fVar5;
  return in_RDX;
}

// GetOldestSampleTime @ 14d051220

FFrameTime __thiscall
ULiveLinkTimeSynchronizationSource::GetOldestSampleTime(ULiveLinkTimeSynchronizationSource *this)

{
  int iVar1;
  FFrameTime FVar2;
  uint uVar3;
  int iVar4;
  FFrameTime in_RDX;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStackX_14;
  
  UpdateCachedState(this);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  FVar2 = (this->CachedData).OldestSampleTime;
  fStackX_14 = FVar2.SubFrame;
  fStackX_14 = fStackX_14 + 0.0;
  iVar4 = (int)fStackX_14;
  fVar6 = fStackX_14;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fStackX_14)) {
    auVar7._4_4_ = fStackX_14;
    auVar7._0_4_ = fStackX_14;
    auVar7._8_8_ = 0;
    uVar3 = movmskps(iVar1,auVar7);
    fVar6 = (float)(int)(iVar4 - (uVar3 & 1));
  }
  fVar5 = fStackX_14 - fVar6;
  if (::FFrameTime::MaxSubframe <= fStackX_14 - fVar6) {
    fVar5 = ::FFrameTime::MaxSubframe;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(int *)in_RDX =
       ((int)ROUND((fStackX_14 + fStackX_14) - __real_3f000000) >> 1) +
       FVar2.FrameNumber.Value.Value + iVar1;
  *(float *)((longlong)in_RDX + 4) = fVar5;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d052b80

UClass * __cdecl ULiveLinkTimeSynchronizationSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTimeSynchronizationSource",
               &Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton,
               StaticRegisterNativesULiveLinkTimeSynchronizationSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTimeSynchronizationSource>,
               InternalVTableHelperCtorCaller<ULiveLinkTimeSynchronizationSource>,local_res8,
               UTimeSynchronizationSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTimeSynchronizationSource.InnerSingleton;
}

// IsCurrentStateValid @ 14d05eb50

bool __thiscall
ULiveLinkTimeSynchronizationSource::IsCurrentStateValid(ULiveLinkTimeSynchronizationSource *this)

{
  FLiveLinkClient *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->LiveLinkClient == (FLiveLinkClient *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8030484628903034785>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkTimeSynchronizationSource.cpp"
                       ,0x5f,"LiveLinkClient != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = this->LiveLinkClient;
  if (pFVar1 != (FLiveLinkClient *)0x0) {
    cVar5 = (**(code **)(pFVar1->_padding_ + 0x120))(pFVar1,&this->SubjectKey,0);
    if (cVar5 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::FName::FName(&NAME_DisabledSubject,"ULiveLinkTimeSynchronizationSource_DisabledSubject")
          ;
          _Init_thread_footer(&::_TSS0);
        }
      }
      ::FName::ToString(&(this->SubjectName).Name,&local_48);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
      }
      FLiveLinkLog::Log_Internal<wchar_t_const_*>
                (Error,NAME_DisabledSubject,&this->SubjectKey,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa2550,
                 (wchar_t *)FVar7.Data);
    }
    else {
      cVar5 = (**(code **)(this->LiveLinkClient->_padding_ + 0x140))
                        (this->LiveLinkClient,&this->SubjectKey);
      if (cVar5 == '\0') {
        lVar6 = (**(code **)(this->LiveLinkClient->_padding_ + 0x168))
                          (this->LiveLinkClient,&this->SubjectKey);
        if (lVar6 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS2) {
            _Init_thread_header(&::_TSS2);
            if (::_TSS2 == -1) {
              ::FName::FName(&NAME_InvalidSettings,
                             "ULiveLinkTimeSynchronizationSource_InvalidSettings");
              _Init_thread_footer(&::_TSS2);
            }
          }
          ::FName::ToString(&(this->SubjectName).Name,&local_28);
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_28.Data.ArrayNum != 0) {
            FVar7.Data = local_28.Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Error,NAME_InvalidSettings,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa2670,
                     (wchar_t *)FVar7.Data);
          local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        }
        else {
          if (*(char *)(lVar6 + 0x28) == '\x02') {
            return true;
          }
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS3) {
            _Init_thread_header(&::_TSS3);
            if (::_TSS3 == -1) {
              ::FName::FName(&NAME_InvalidTimeMode,
                             "ULiveLinkTimeSynchronizationSource_InvalidTimeMode");
              _Init_thread_footer(&::_TSS3);
            }
          }
          ::FName::ToString(&(this->SubjectName).Name,&local_18);
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_18.Data.ArrayNum != 0) {
            FVar7.Data = local_18.Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Error,NAME_InvalidTimeMode,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa2720,
                     (wchar_t *)FVar7.Data);
          local_48.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
        }
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS1) {
          _Init_thread_header(&::_TSS1);
          if (::_TSS1 == -1) {
            ::FName::FName(&NAME_VirtualSubject,"ULiveLinkTimeSynchronizationSource_VirtualSubject")
            ;
            _Init_thread_footer(&::_TSS1);
          }
        }
        ::FName::ToString(&(this->SubjectName).Name,&local_38);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar7.Data = local_38.Data.AllocatorInstance.Data;
        }
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (Error,NAME_VirtualSubject,&this->SubjectKey,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa25d0,
                   (wchar_t *)FVar7.Data);
        local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// IsReady @ 14d05fb30

bool __thiscall
ULiveLinkTimeSynchronizationSource::IsReady(ULiveLinkTimeSynchronizationSource *this)

{
  bool bVar1;
  
  UpdateCachedState(this);
  if ((this->LiveLinkClient != (FLiveLinkClient *)0x0) && ((this->CachedData).bIsValid != false)) {
    bVar1 = IsCurrentStateValid(this);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// OnModularFeatureRegistered @ 14d066780

void __thiscall
ULiveLinkTimeSynchronizationSource::OnModularFeatureRegistered
          (ULiveLinkTimeSynchronizationSource *this,FName *param_1,IModularFeature *param_2)

{
  FLiveLinkClient *pFVar1;
  
  if (*param_1 == ILiveLinkClient::ModularFeatureName) {
    pFVar1 = (FLiveLinkClient *)(param_2 + -8);
    if (param_2 == (IModularFeature *)0x0) {
      pFVar1 = (FLiveLinkClient *)0x0;
    }
    this->LiveLinkClient = pFVar1;
  }
  return;
}

// OnModularFeatureUnregistered @ 14d0667b0

void __thiscall
ULiveLinkTimeSynchronizationSource::OnModularFeatureUnregistered
          (ULiveLinkTimeSynchronizationSource *this,FName *param_1,IModularFeature *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*param_1 == ILiveLinkClient::ModularFeatureName) &&
     (this->LiveLinkClient != (FLiveLinkClient *)0x0)) {
    if (param_2 == (IModularFeature *)&this->LiveLinkClient->Collection) {
      this->LiveLinkClient = (FLiveLinkClient *)0x0;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8030484628903034737>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkTimeSynchronizationSource.cpp"
                         ,0x8f,"Feature == LiveLinkClient");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Open @ 14d06bd90

bool __thiscall
ULiveLinkTimeSynchronizationSource::Open
          (ULiveLinkTimeSynchronizationSource *this,FTimeSynchronizationOpenData *param_1)

{
  FLiveLinkClient *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined8 *puVar6;
  FString local_48;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  FLiveLinkSubjectKey local_20;
  
  bVar4 = false;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  this->State = NotSynced;
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  pFVar1 = this->LiveLinkClient;
  if (pFVar1 == (FLiveLinkClient *)0x0) {
    return false;
  }
  (**(code **)(pFVar1->_padding_ + 0x100))(pFVar1,&local_38,0,0);
  if (local_38 != local_38 + (longlong)(int)uStack_30 * 3) {
    puVar6 = local_38;
    do {
      if (*(FName *)(puVar6 + 2) == (this->SubjectName).Name) {
        if (puVar6 != (undefined8 *)0x0) {
          uVar2 = *puVar6;
          uVar3 = puVar6[1];
          (this->SubjectKey).Source.A = (int)uVar2;
          (this->SubjectKey).Source.B = (int)((ulonglong)uVar2 >> 0x20);
          (this->SubjectKey).Source.C = (int)uVar3;
          (this->SubjectKey).Source.D = (int)((ulonglong)uVar3 >> 0x20);
          (this->SubjectKey).SubjectName.Name = *(FName *)(puVar6 + 2);
          bVar4 = IsCurrentStateValid(this);
          if (bVar4) {
            this->State = Opened;
          }
          goto LAB_14d06be82;
        }
        break;
      }
      puVar6 = puVar6 + 3;
    } while (puVar6 != local_38 + (longlong)(int)uStack_30 * 3);
  }
  ::FName::ToString(&(this->SubjectName).Name,&local_48);
  local_20.Source.A = 0;
  local_20.Source.B = 0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  local_20.Source.C = 0;
  local_20.Source.D = 0;
  local_20.SubjectName.Name.ComparisonIndex.Value = 0;
  local_20.SubjectName.Name.Number = 0;
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (Error,(FName)0x0,&local_20,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa2428,(wchar_t *)FVar5.Data
            );
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14d06be82:
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return bVar4;
}

// Start @ 14d080020

void __thiscall
ULiveLinkTimeSynchronizationSource::Start
          (ULiveLinkTimeSynchronizationSource *this,FTimeSynchronizationStartData *param_1)

{
  return;
}

// StaticRegisterNativesULiveLinkTimeSynchronizationSource @ 14d080870

void __cdecl
ULiveLinkTimeSynchronizationSource::StaticRegisterNativesULiveLinkTimeSynchronizationSource(void)

{
  return;
}

// UpdateCachedState @ 14d087890

void __thiscall
ULiveLinkTimeSynchronizationSource::UpdateCachedState(ULiveLinkTimeSynchronizationSource *this)

{
  FName FVar1;
  FLiveLinkSubject *this_00;
  FLiveLinkCollectionSubjectItem *pFVar2;
  FLiveLinkSubjectTimeSyncData local_28;
  
  if ((this->LastUpdateFrame != GFrameCounter) && (this->LiveLinkClient != (FLiveLinkClient *)0x0))
  {
    FVar1 = (this->SubjectName).Name;
    this->LastUpdateFrame = GFrameCounter;
    pFVar2 = FLiveLinkSourceCollection::FindEnabledSubject
                       ((this->LiveLinkClient->Collection).Ptr,(FLiveLinkSubjectName)FVar1);
    if ((pFVar2 == (FLiveLinkCollectionSubjectItem *)0x0) ||
       (this_00 = (pFVar2->LiveSubject).Ptr, this_00 == (FLiveLinkSubject *)0x0)) {
      local_28.SampleFrameRate.Numerator = 60000;
      local_28._1_2_ = 0;
      local_28._3_1_ = 0;
      local_28.bIsValid = false;
      local_28.OldestSampleTime.FrameNumber.Value = 0;
      local_28.OldestSampleTime.SubFrame = 0.0;
      local_28.NewestSampleTime.FrameNumber.Value = 0;
      local_28.NewestSampleTime.SubFrame = 0.0;
      local_28.SampleFrameRate.Denominator = 1;
    }
    else {
      FLiveLinkSubject::GetTimeSyncData(this_00,&local_28);
    }
    (this->CachedData).bIsValid = local_28.bIsValid;
    *(int3 *)&(this->CachedData).field_0x1 =
         (int3)(CONCAT13(local_28._3_1_,CONCAT21(local_28._1_2_,local_28.bIsValid)) >> 8);
    (this->CachedData).OldestSampleTime.FrameNumber =
         (FFrameNumber)local_28.OldestSampleTime.FrameNumber.Value;
    *(ulonglong *)&(this->CachedData).OldestSampleTime.SubFrame =
         CONCAT44(local_28.NewestSampleTime.FrameNumber.Value,local_28.OldestSampleTime.SubFrame);
    *(ulonglong *)&(this->CachedData).NewestSampleTime.SubFrame =
         CONCAT44(local_28.SampleFrameRate.Numerator,local_28.NewestSampleTime.SubFrame);
    (this->CachedData).SampleFrameRate.Denominator = local_28.SampleFrameRate.Denominator;
  }
  return;
}

