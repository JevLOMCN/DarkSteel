// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b447f50

UClass * __cdecl UDS_ChattingData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChattingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChattingData",
               &Z_Registration_Info_UClass_UDS_ChattingData.InnerSingleton,
               StaticRegisterNativesUDS_ChattingData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ChattingData>,
               InternalVTableHelperCtorCaller<UDS_ChattingData>,local_res8,UDS_DataBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChattingData.InnerSingleton;
}

// UDS_ChattingData @ 14b44e0b0

UDS_ChattingData * __thiscall
UDS_ChattingData::UDS_ChattingData(UDS_ChattingData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->SubTabIndex = -1;
  this->_padding_ = (longlong)&___7UDS_ChattingData__6B_;
  this->Index = 0;
  this->ChattingType = None;
  this->SenderPlayerUID = 0;
  (this->SenderNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SenderNickname).Data.ArrayNum = 0;
  (this->SenderNickname).Data.ArrayMax = 0;
  this->ReceiverPlayerUID = 0;
  (this->Message).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Message).Data.ArrayNum = 0;
  (this->Message).Data.ArrayMax = 0;
  (this->TranslatedMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslatedMessage).Data.ArrayNum = 0;
  (this->TranslatedMessage).Data.ArrayMax = 0;
  (this->MessageID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageID).Data.ArrayNum = 0;
  (this->MessageID).Data.ArrayMax = 0;
  this->SendTime = 0.0;
  this->Sequence = 0;
  this->bIsRead = false;
  this->bIsMyChat = false;
  this->bIsRequestTranslate = false;
  return this;
}

// UDS_ChattingData @ 14b44e140

UDS_ChattingData * __thiscall
UDS_ChattingData::UDS_ChattingData(UDS_ChattingData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->SubTabIndex = -1;
  this->_padding_ = (longlong)&___7UDS_ChattingData__6B_;
  this->Index = 0;
  this->ChattingType = None;
  this->SenderPlayerUID = 0;
  (this->SenderNickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SenderNickname).Data.ArrayNum = 0;
  (this->SenderNickname).Data.ArrayMax = 0;
  this->ReceiverPlayerUID = 0;
  (this->Message).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Message).Data.ArrayNum = 0;
  (this->Message).Data.ArrayMax = 0;
  (this->TranslatedMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslatedMessage).Data.ArrayNum = 0;
  (this->TranslatedMessage).Data.ArrayMax = 0;
  (this->MessageID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageID).Data.ArrayNum = 0;
  (this->MessageID).Data.ArrayMax = 0;
  this->SendTime = 0.0;
  this->Sequence = 0;
  this->bIsRead = false;
  this->bIsMyChat = false;
  this->bIsRequestTranslate = false;
  return this;
}

// ~UDS_ChattingData @ 14b450850

void __thiscall UDS_ChattingData::~UDS_ChattingData(UDS_ChattingData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ChattingData__6B_;
  pFVar1 = (this->MessageID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TranslatedMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Message).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SenderNickname).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4543b0

UClass * __cdecl UDS_ChattingData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChattingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChattingData",
               &Z_Registration_Info_UClass_UDS_ChattingData.InnerSingleton,
               StaticRegisterNativesUDS_ChattingData,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ChattingData>,
               InternalVTableHelperCtorCaller<UDS_ChattingData>,local_res8,UDS_DataBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChattingData.InnerSingleton;
}

// StaticRegisterNativesUDS_ChattingData @ 14b455170

void __cdecl UDS_ChattingData::StaticRegisterNativesUDS_ChattingData(void)

{
  return;
}

// GetMainPlayerUID @ 14ba4cd20

long64 __cdecl UDS_ChattingData::GetMainPlayerUID(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_PlayerData::GetData((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    return *(long64 *)&pUVar2[6].field_0x8;
  }
  return 0;
}

// GetWhisperTargetUID @ 14ba513b0

long64 __thiscall UDS_ChattingData::GetWhisperTargetUID(UDS_ChattingData *this)

{
  if (this->ChattingType != Whisper) {
    return 0;
  }
  if (this->bIsMyChat == true) {
    return this->ReceiverPlayerUID;
  }
  return this->SenderPlayerUID;
}

// IsSystemMessage @ 14ba5d420

bool __thiscall UDS_ChattingData::IsSystemMessage(UDS_ChattingData *this)

{
  EDS_ChattingType EVar1;
  
  if ((((0 < this->SenderPlayerUID) && (1 < (this->SenderNickname).Data.ArrayNum)) &&
      (EVar1 = this->ChattingType, EVar1 != None)) &&
     (((EVar1 != System && (EVar1 != Total)) && ((EVar1 != Battle && (EVar1 != Max)))))) {
    return false;
  }
  return true;
}

// IsWhisperMessage @ 14ba5dab0

bool __thiscall UDS_ChattingData::IsWhisperMessage(UDS_ChattingData *this,long64 param_1)

{
  if ((this->ChattingType == Whisper) && (0 < param_1)) {
    if (this->SenderPlayerUID != param_1) {
      return this->ReceiverPlayerUID == param_1;
    }
    return true;
  }
  return false;
}

// ResetChattingDataIndex @ 14ba67f20

void __cdecl UDS_ChattingData::ResetChattingDataIndex(void)

{
  ChattingDataIndex = 0;
  return;
}

// SetChattingData @ 14ba6afa0

void __thiscall
UDS_ChattingData::SetChattingData(UDS_ChattingData *this,EDS_ChattingType param_1,FString *param_2)

{
  double dVar1;
  
  this->ChattingType = param_1;
  this->SubTabIndex = -1;
  this->SenderPlayerUID = 0;
  ::FString::Reset(&this->SenderNickname,0);
  ::FString::operator=(&this->Message,param_2);
  ::FString::Reset(&this->TranslatedMessage,0);
  ::FString::Reset(&this->MessageID,0);
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  this->SendTime = dVar1;
  this->Sequence = 0;
  ChattingDataIndex = ChattingDataIndex + 1;
  this->Index = ChattingDataIndex;
  this->bIsRead = false;
  this->bIsMyChat = false;
  return;
}

// SetChattingData @ 14ba6b040

void __thiscall
UDS_ChattingData::SetChattingData
          (UDS_ChattingData *this,EDS_ChattingType param_1,int param_2,FDS_ChatMessageInfo *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  FWeakObjectPtr local_res8;
  
  this->ChattingType = param_1;
  this->SubTabIndex = param_2;
  this->SenderPlayerUID = param_3->SenderPlayerUID;
  ::FString::operator=(&this->SenderNickname,&param_3->SenderNickname);
  this->ReceiverPlayerUID = param_3->ReceiverPlayerUID;
  ::FString::operator=(&this->Message,&param_3->MessageText);
  ::FString::Reset(&this->TranslatedMessage,0);
  ::FString::operator=(&this->MessageID,&param_3->MessageID);
  this->SendTime = param_3->SendTime;
  this->Sequence = param_3->Sequence;
  ChattingDataIndex = ChattingDataIndex + 1;
  this->Index = ChattingDataIndex;
  this->bIsRead = param_3->IsRead;
  if (this->SenderPlayerUID != 0) {
    UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      lVar3 = *(longlong *)&pUVar2[6].field_0x8;
    }
    else {
      lVar3 = 0;
    }
    if (this->SenderPlayerUID == lVar3) {
      this->bIsMyChat = true;
      return;
    }
  }
  this->bIsMyChat = false;
  return;
}

// SetChattingData @ 14ba6b160

void __thiscall
UDS_ChattingData::SetChattingData
          (UDS_ChattingData *this,EDS_ChattingType param_1,int param_2,long64 param_3,
          FString *param_4,FString *param_5)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  double dVar4;
  FWeakObjectPtr local_res8;
  
  this->ChattingType = param_1;
  this->SubTabIndex = param_2;
  this->SenderPlayerUID = param_3;
  ::FString::operator=(&this->SenderNickname,param_4);
  ::FString::operator=(&this->Message,param_5);
  ::FString::Reset(&this->TranslatedMessage,0);
  ::FString::Reset(&this->MessageID,0);
  dVar4 = UDS_TimeUtilManager::GetCurrentServerTime();
  lVar3 = 0;
  this->SendTime = dVar4;
  this->Sequence = 0;
  ChattingDataIndex = ChattingDataIndex + 1;
  this->Index = ChattingDataIndex;
  this->bIsRead = false;
  if (this->SenderPlayerUID != 0) {
    UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      lVar3 = *(longlong *)&pUVar2[6].field_0x8;
    }
    if (this->SenderPlayerUID == lVar3) {
      this->bIsMyChat = true;
      return;
    }
  }
  this->bIsMyChat = false;
  return;
}

// SortChatData @ 14ba758f0

bool __cdecl
UDS_ChattingData::SortChatData
          (TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *param_2)

{
  double dVar1;
  ulonglong uVar2;
  bool bVar3;
  UObject *pUVar4;
  double dVar5;
  
  bVar3 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (bVar3) {
    bVar3 = FWeakObjectPtr::IsValid(&param_2->WeakPtr);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&param_1->WeakPtr);
      dVar1 = *(double *)&pUVar4[4].field_0x18;
      pUVar4 = FWeakObjectPtr::Get(&param_2->WeakPtr);
      dVar5 = dVar1 - *(double *)&pUVar4[4].field_0x18;
      if ((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3e45798ee2308c3a) {
        pUVar4 = FWeakObjectPtr::Get(&param_1->WeakPtr);
        uVar2 = *(ulonglong *)&pUVar4[4].field_0x20;
        pUVar4 = FWeakObjectPtr::Get(&param_2->WeakPtr);
        return uVar2 < *(ulonglong *)&pUVar4[4].field_0x20;
      }
      return dVar1 < *(double *)&pUVar4[4].field_0x18;
    }
  }
  bVar3 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  return bVar3;
}

