// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 8

// StaticClass @ 14cfab230

UClass * __cdecl ULiveLinkSourceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkSourceSettings,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSourceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton;
}

// ULiveLinkSourceSettings @ 14cfb5d10

ULiveLinkSourceSettings * __thiscall
ULiveLinkSourceSettings::ULiveLinkSourceSettings
          (ULiveLinkSourceSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Mode = EngineTime;
  this->_padding_ = (longlong)&___7ULiveLinkSourceSettings__6B_;
  (this->BufferSettings).EngineTimeClockOffset = 0.0;
  (this->BufferSettings).SmoothEngineTimeOffset = 0.0;
  (this->BufferSettings).bGenerateSubFrame = false;
  (this->BufferSettings).bUseTimecodeSmoothLatest = false;
  (this->BufferSettings).bValidTimecodeFrameEnabled = false;
  (this->BufferSettings).TimecodeClockOffset = 0.0;
  (this->BufferSettings).LatestOffset = 0;
  this->bTransmitEvaluatedData = false;
  (this->ConnectionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionString).Data.ArrayNum = 0;
  (this->ConnectionString).Data.ArrayMax = 0;
  (this->Factory).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ParentSubject).Name = (FName)0x0;
  (this->BufferSettings).bValidEngineTimeEnabled = false;
  (this->BufferSettings).ValidEngineTime = 1.0;
  (this->BufferSettings).EngineTimeOffset = 0.0;
  (this->BufferSettings).DetectedFrameRate.Numerator = 0x18;
  (this->BufferSettings).DetectedFrameRate.Denominator = 1;
  (this->BufferSettings).SourceTimecodeFrameRate.Numerator = 0x18;
  (this->BufferSettings).SourceTimecodeFrameRate.Denominator = 1;
  (this->BufferSettings).ValidTimecodeFrame = 0x1e;
  (this->BufferSettings).TimecodeFrameOffset = 0.0;
  (this->BufferSettings).MaxNumberOfFrameToBuffered = 10;
  (this->BufferSettings).bKeepAtLeastOneFrame = true;
  return this;
}

// ULiveLinkSourceSettings @ 14cfb5dc0

ULiveLinkSourceSettings * __thiscall
ULiveLinkSourceSettings::ULiveLinkSourceSettings(ULiveLinkSourceSettings *this)

{
  UClass *this_00;
  
  UObject::UObject((UObject *)this);
  this->Mode = EngineTime;
  this->_padding_ = (longlong)&___7ULiveLinkSourceSettings__6B_;
  (this->BufferSettings).EngineTimeClockOffset = 0.0;
  (this->BufferSettings).SmoothEngineTimeOffset = 0.0;
  (this->BufferSettings).bGenerateSubFrame = false;
  (this->BufferSettings).bUseTimecodeSmoothLatest = false;
  (this->BufferSettings).bValidTimecodeFrameEnabled = false;
  (this->BufferSettings).TimecodeClockOffset = 0.0;
  (this->BufferSettings).LatestOffset = 0;
  this->bTransmitEvaluatedData = false;
  (this->ConnectionString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectionString).Data.ArrayNum = 0;
  (this->ConnectionString).Data.ArrayMax = 0;
  (this->Factory).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ParentSubject).Name = (FName)0x0;
  (this->BufferSettings).bValidEngineTimeEnabled = false;
  (this->BufferSettings).ValidEngineTime = 1.0;
  (this->BufferSettings).EngineTimeOffset = 0.0;
  (this->BufferSettings).DetectedFrameRate.Numerator = 0x18;
  (this->BufferSettings).DetectedFrameRate.Denominator = 1;
  (this->BufferSettings).SourceTimecodeFrameRate.Numerator = 0x18;
  (this->BufferSettings).SourceTimecodeFrameRate.Denominator = 1;
  (this->BufferSettings).ValidTimecodeFrame = 0x1e;
  (this->BufferSettings).TimecodeFrameOffset = 0.0;
  (this->BufferSettings).MaxNumberOfFrameToBuffered = 10;
  (this->BufferSettings).bKeepAtLeastOneFrame = true;
  if ((this->_padding_ & 0x30) == 0) {
    this_00 = ULiveLinkDefaultSourceSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    (this->BufferSettings).MaxNumberOfFrameToBuffered =
         *(int *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1);
  }
  return this;
}

// ~ULiveLinkSourceSettings @ 14cfb66f0

void __thiscall ULiveLinkSourceSettings::~ULiveLinkSourceSettings(ULiveLinkSourceSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkSourceSettings__6B_;
  pFVar1 = (this->ConnectionString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cfbb380

UClass * __cdecl ULiveLinkSourceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkSourceSettings,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULiveLinkSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSourceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton;
}

// Serialize @ 14cfbe0c0

void __thiscall ULiveLinkSourceSettings::Serialize(ULiveLinkSourceSettings *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cfbe0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEnterpriseObjectVersion::GUID);
  return;
}

// Serialize @ 14cfbe0f0

void __thiscall
ULiveLinkSourceSettings::Serialize(ULiveLinkSourceSettings *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEnterpriseObjectVersion::GUID);
  return;
}

// StaticRegisterNativesULiveLinkSourceSettings @ 14cfbe340

void __cdecl ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings(void)

{
  return;
}

