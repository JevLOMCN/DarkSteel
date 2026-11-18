// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 8

// StaticClass @ 14f0a6440

UClass * __cdecl UAudioImpulseResponse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"AudioImpulseResponse",
               &Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton,
               StaticRegisterNativesUAudioImpulseResponse,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioImpulseResponse>,
               InternalVTableHelperCtorCaller<UAudioImpulseResponse>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton;
}

// UAudioImpulseResponse @ 14f0b9760

UAudioImpulseResponse * __thiscall
UAudioImpulseResponse::UAudioImpulseResponse(UAudioImpulseResponse *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioImpulseResponse__6B_;
  (this->ImpulseResponse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpulseResponse).ArrayNum = 0;
  (this->ImpulseResponse).ArrayMax = 0;
  (this->IRData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IRData_DEPRECATED).ArrayNum = 0;
  (this->IRData_DEPRECATED).ArrayMax = 0;
  return this;
}

// UAudioImpulseResponse @ 14f0b97a0

UAudioImpulseResponse * __thiscall
UAudioImpulseResponse::UAudioImpulseResponse(UAudioImpulseResponse *this)

{
  UObject::UObject((UObject *)this);
  this->NormalizationVolumeDb = -24.0;
  this->_padding_ = (longlong)&___7UAudioImpulseResponse__6B_;
  (this->ImpulseResponse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImpulseResponse).ArrayNum = 0;
  (this->ImpulseResponse).ArrayMax = 0;
  this->NumChannels = 0;
  this->SampleRate = 0;
  (this->IRData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IRData_DEPRECATED).ArrayNum = 0;
  (this->IRData_DEPRECATED).ArrayMax = 0;
  return this;
}

// ~UAudioImpulseResponse @ 14f0bff40

void __thiscall UAudioImpulseResponse::~UAudioImpulseResponse(UAudioImpulseResponse *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAudioImpulseResponse__6B_;
  pFVar1 = (this->IRData_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ImpulseResponse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14f0dbd30

UClass * __cdecl UAudioImpulseResponse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"AudioImpulseResponse",
               &Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton,
               StaticRegisterNativesUAudioImpulseResponse,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioImpulseResponse>,
               InternalVTableHelperCtorCaller<UAudioImpulseResponse>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioImpulseResponse.InnerSingleton;
}

// Serialize @ 14f0f8b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UAudioImpulseResponse::Serialize(UAudioImpulseResponse *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14f0f8b60

void __thiscall
UAudioImpulseResponse::Serialize(UAudioImpulseResponse *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUAudioImpulseResponse @ 14f103500

void __cdecl UAudioImpulseResponse::StaticRegisterNativesUAudioImpulseResponse(void)

{
  return;
}

