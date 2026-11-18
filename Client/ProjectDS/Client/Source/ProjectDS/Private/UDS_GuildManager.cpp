// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 64

// StaticClass @ 14b4a2d20

UClass * __cdecl UDS_GuildManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildManager",
               &Z_Registration_Info_UClass_UDS_GuildManager.InnerSingleton,
               StaticRegisterNativesUDS_GuildManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_GuildManager>,
               InternalVTableHelperCtorCaller<UDS_GuildManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildManager.InnerSingleton;
}

// UDS_GuildManager @ 14b4a76a0

UDS_GuildManager * __thiscall
UDS_GuildManager::UDS_GuildManager(UDS_GuildManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->GuildListCursor = 0;
  this->_padding_ = (longlong)&___7UDS_GuildManager__6B_;
  return this;
}

// UDS_GuildManager @ 14b4a76d0

UDS_GuildManager * __thiscall
UDS_GuildManager::UDS_GuildManager(UDS_GuildManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->GuildListCursor = 0;
  this->_padding_ = (longlong)&___7UDS_GuildManager__6B_;
  return this;
}

// ~UDS_GuildManager @ 14b4a7bf0

void __thiscall UDS_GuildManager::~UDS_GuildManager(UDS_GuildManager *this)

{
  this->_padding_ = (longlong)&___7UDS_GuildManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a92b0

UClass * __cdecl UDS_GuildManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildManager",
               &Z_Registration_Info_UClass_UDS_GuildManager.InnerSingleton,
               StaticRegisterNativesUDS_GuildManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_GuildManager>,
               InternalVTableHelperCtorCaller<UDS_GuildManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildManager.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildManager @ 14b4a9620

void __cdecl UDS_GuildManager::StaticRegisterNativesUDS_GuildManager(void)

{
  return;
}

// Created @ 14bb01500

void __thiscall UDS_GuildManager::Created(UDS_GuildManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb02e20

void __thiscall UDS_GuildManager::Destroyed(UDS_GuildManager *this)

{
  return;
}

// GetGuildData @ 14bb0b2f0

TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> __cdecl UDS_GuildManager::GetGuildData(long64 param_1)

{
  bool in_DL;
  
  UDS_GuildData::GetData(param_1,UDS_PlayerData::MainPlayerEntityID,in_DL);
  return (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetGuildMemberDatas @ 14bb0b320

TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __cdecl
UDS_GuildManager::GetGuildMemberDatas
          (TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,long64 param_1)

{
  bool bVar1;
  UDS_GuildData *this;
  FWeakObjectPtr local_res18 [2];
  
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,SUB81(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
  UDS_GuildData::GetAllMemberData(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGuildMemberPendingDatas @ 14bb0b390

TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __cdecl
UDS_GuildManager::GetGuildMemberPendingDatas
          (TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_GuildData *this;
  undefined1 uVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    uVar3 = (undefined1)*(undefined8 *)&pUVar2[10].field_0x10;
  }
  else {
    uVar3 = false;
  }
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar3);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
  UDS_GuildData::GetAllMemberPendingData(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInst @ 14bb0b940

UDS_GuildManager * __cdecl UDS_GuildManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_GuildManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_GuildManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_GuildManager_NoRegister();
  pUVar3 = (UDS_GuildManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_GuildManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_GuildManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_GuildManager *)0x0;
}

// GetMyGuildData @ 14bb0c650

TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> __cdecl UDS_GuildManager::GetMyGuildData(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr in_RCX;
  undefined1 uVar3;
  FWeakObjectPtr local_res8 [4];
  
  UDS_PlayerData::GetData((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    uVar3 = (undefined1)*(undefined8 *)&pUVar2[10].field_0x10;
  }
  else {
    uVar3 = false;
  }
  UDS_GuildData::GetData((ulong64)in_RCX,UDS_PlayerData::MainPlayerEntityID,(bool)uVar3);
  return (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>)in_RCX;
}

// GetMyGuildMemberData @ 14bb0c6c0

TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr> __cdecl
UDS_GuildManager::GetMyGuildMemberData(void)

{
  bool bVar1;
  UDS_GuildData *this;
  UObject *pUVar2;
  FWeakObjectPtr in_RCX;
  undefined1 uVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res10);
      uVar3 = (undefined1)*(undefined8 *)&pUVar2[10].field_0x10;
    }
    else {
      uVar3 = false;
    }
    UDS_GuildData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar3);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      this = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
      pUVar2 = FWeakObjectPtr::Get(&local_res20);
      UDS_GuildData::GetMemberData(this,(long64)in_RCX,SUB81(*(undefined8 *)&pUVar2[6].field_0x8,0))
      ;
      return (TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>)in_RCX;
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>)in_RCX;
}

// GetMyGuildUID @ 14bb0c7c0

long64 __cdecl UDS_GuildManager::GetMyGuildUID(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_PlayerData::GetData((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return *(long64 *)&pUVar2[10].field_0x10;
}

// GetMyMemberGrade @ 14bb0c810

GuildMemberGradeType __cdecl UDS_GuildManager::GetMyMemberGrade(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetMyGuildMemberData();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    return *(GuildMemberGradeType *)&pUVar2[1].field_0x20;
  }
  return GuildMemberGradeType_None;
}

// HasJoinedGuild @ 14bb112d0

bool __cdecl UDS_GuildManager::HasJoinedGuild(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_PlayerData::GetData((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return 0 < *(longlong *)&pUVar2[10].field_0x10;
}

// HasMyGuildMember @ 14bb11330

bool __cdecl UDS_GuildManager::HasMyGuildMember(long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_GuildData *this;
  undefined1 uVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    uVar3 = (undefined1)*(undefined8 *)&pUVar2[10].field_0x10;
  }
  else {
    uVar3 = false;
  }
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar3);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return false;
  }
  this = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
  bVar1 = UDS_GuildData::HasGuildMember(this,param_1);
  return bVar1;
}

// Init @ 14bb13570

void __thiscall UDS_GuildManager::Init(UDS_GuildManager *this)

{
  return;
}

// IsGuildMoneyPermission @ 14bb15580

bool __cdecl UDS_GuildManager::IsGuildMoneyPermission(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetMyGuildMemberData();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return (bool)pUVar2[1].field_0x3;
}

// IsGuildSettingPermission @ 14bb155c0

bool __cdecl UDS_GuildManager::IsGuildSettingPermission(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetMyGuildMemberData();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return (bool)pUVar2[1].field_0x2;
}

// IsMembershipPermission @ 14bb15850

bool __cdecl UDS_GuildManager::IsMembershipPermission(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  GetMyGuildMemberData();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return (bool)pUVar2[1].field_0x1;
}

// MakeGuildMarkInfoToJson @ 14bb18f90

FString * __cdecl
UDS_GuildManager::MakeGuildMarkInfoToJson
          (FString *__return_storage_ptr__,FDS_GuildMarkInfo *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FJsonObject *pFVar4;
  FString *pFVar5;
  TRawPtrProxy<FJsonObject> local_res8;
  TSharedPtr<FJsonObject,1> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TSharedPtr<FJsonObject,1> local_48;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_38 [2];
  
  pFVar4 = ::operator_new(0x50);
  local_res8.Object = (FJsonObject *)0x0;
  if (pFVar4 != (FJsonObject *)0x0) {
    *(undefined8 *)&(pFVar4->Values).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->Values).field_0x18 = 0;
    *(undefined8 *)&(pFVar4->Values).field_0x38 = 0;
    *(undefined8 *)&(pFVar4->Values).field_0x48 = 0;
    *(undefined8 *)&pFVar4->Values = 0;
    *(undefined8 *)&(pFVar4->Values).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->Values).field_0x20 = 0;
    *(undefined4 *)&(pFVar4->Values).field_0x28 = 0;
    *(undefined4 *)&(pFVar4->Values).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar4->Values).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar4->Values).field_0x34 = 0;
    *(undefined8 *)&(pFVar4->Values).field_0x40 = 0;
    local_res8.Object = pFVar4;
  }
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_98,&local_res8);
  if ((local_98.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = param_1->GuildMarkTableID;
  ::FString::FString(&local_88,L"GuildMark");
  FJsonObject::SetNumberField(local_98.Object,&local_88,(double)iVar1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((local_98.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = param_1->GuildMarkBgTableID;
  ::FString::FString(&local_78,L"GuildMarkBg");
  FJsonObject::SetNumberField(local_98.Object,&local_78,(double)iVar1);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((local_98.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = param_1->GuildMarkColorTableID;
  ::FString::FString(&local_68,L"GuildMarkColor");
  FJsonObject::SetNumberField(local_98.Object,&local_68,(double)iVar1);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((local_98.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = param_1->GuildMarkBgColorTableID;
  ::FString::FString(&local_58,L"GuildMarkBgColor");
  FJsonObject::SetNumberField(local_98.Object,&local_58,(double)iVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
            (local_38,__return_storage_ptr__,0);
  if ((local_98.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_98.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  local_48.Object = local_98.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_48,local_38,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    ::FString::ReplaceInline(__return_storage_ptr__,L"\\",L"",IgnoreCase);
    ::FString::ReplaceInline(__return_storage_ptr__,L"\r",L"",IgnoreCase);
    ::FString::ReplaceInline(__return_storage_ptr__,L"\n",L"",IgnoreCase);
    ::FString::ReplaceInline(__return_storage_ptr__,L"\t",L"",IgnoreCase);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MakeJsonToGuildMarkInfo @ 14bb19e30

FDS_GuildMarkInfo * __cdecl
UDS_GuildManager::MakeJsonToGuildMarkInfo
          (FDS_GuildMarkInfo *__return_storage_ptr__,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar6;
  FDS_GuildMarkInfo *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TSharedPtr<FJsonObject,1> local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  StackState local_e8;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28 [2];
  
  uVar8 = 0;
  uVar9 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  pTVar6 = TJsonStringReader<wchar_t>::Create(&local_68,param_1);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_e8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Identifier.Data.ArrayNum = 0;
  local_e8.Identifier.Data.ArrayMax = 0;
  local_e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Object = (FJsonObject *)0x0;
  local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Array.ArrayNum = 0;
  local_e8.Array.ArrayMax = 0;
  local_e8.Object.Object = (FJsonObject *)0x0;
  local_e8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_e8,None);
  if (bVar5) {
    bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_e8,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data,
               local_e8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    if (local_e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar5) && (local_108.Object != (FJsonObject *)0x0)) {
      if ((local_108.Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FDS_GuildMarkInfo *)(*pcVar3)();
        return pFVar7;
      }
      uStack_a0 = 9;
      local_a8 = L"GuildMark";
      local_58._12_4_ = uStack_9c;
      local_58.Size = 9;
      local_58.DataPtr = L"GuildMark";
      dVar4 = FJsonObject::GetNumberField(local_108.Object,&local_58);
      local_f8 = CONCAT44(local_f8._4_4_,(int)dVar4);
      if ((local_108.Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FDS_GuildMarkInfo *)(*pcVar3)();
        return pFVar7;
      }
      local_98 = L"GuildMarkBg";
      uStack_90 = 0xb;
      local_48._12_4_ = uStack_8c;
      local_48.Size = 0xb;
      local_48.DataPtr = L"GuildMarkBg";
      dVar4 = FJsonObject::GetNumberField(local_108.Object,&local_48);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)dVar4);
      if ((local_108.Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FDS_GuildMarkInfo *)(*pcVar3)();
        return pFVar7;
      }
      local_88 = L"GuildMarkColor";
      uStack_80 = 0xe;
      local_38._12_4_ = uStack_7c;
      local_38.Size = 0xe;
      local_38.DataPtr = L"GuildMarkColor";
      dVar4 = FJsonObject::GetNumberField(local_108.Object,&local_38);
      local_f8 = CONCAT44((int)dVar4,(undefined4)local_f8);
      if ((local_108.Object == (FJsonObject *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FDS_GuildMarkInfo *)(*pcVar3)();
        return pFVar7;
      }
      local_78 = L"GuildMarkBgColor";
      uStack_70 = 0x10;
      local_28[0]._12_4_ = uStack_6c;
      local_28[0].Size = 0x10;
      local_28[0].DataPtr = L"GuildMarkBgColor";
      dVar4 = FJsonObject::GetNumberField(local_108.Object,local_28);
      uStack_f0 = CONCAT44((int)dVar4,(undefined4)uStack_f0);
      uVar8 = local_f8;
      uVar9 = uStack_f0;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data,
               local_e8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    if (local_e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->GuildMarkTableID = (int)uVar8;
  __return_storage_ptr__->GuildMarkColorTableID = (int)((ulonglong)uVar8 >> 0x20);
  __return_storage_ptr__->GuildMarkBgTableID = (int)uVar9;
  __return_storage_ptr__->GuildMarkBgColorTableID = (int)((ulonglong)uVar9 >> 0x20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// MyGuildDataUpdate @ 14bb1a290

void __thiscall UDS_GuildManager::MyGuildDataUpdate(UDS_GuildManager *this,GuildRes *param_1)

{
  SqlGuildTable *pSVar1;
  bool bVar2;
  UDS_PlayerData *this_00;
  UDS_GuildData *this_01;
  SqlGuildTable *pSVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    TDS_DataSetGetter<UDS_GuildDataSet>::Get((ulong64)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar2) {
      UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res10);
        UDS_PlayerData::SetDataByGuildInfo(this_00,param_1);
        pSVar1 = (param_1->_impl_).guild_;
        pSVar3 = &ds_guild::_SqlGuildTable_default_instance_._instance;
        if (pSVar1 != (SqlGuildTable *)0x0) {
          pSVar3 = pSVar1;
        }
        UDS_GuildData::GetData
                  ((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,
                   SUB81((pSVar3->_impl_).guild_uid_,0));
        bVar2 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar2) {
          this_01 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
          pSVar1 = (param_1->_impl_).guild_;
          pSVar3 = &ds_guild::_SqlGuildTable_default_instance_._instance;
          if (pSVar1 != (SqlGuildTable *)0x0) {
            pSVar3 = pSVar1;
          }
          UDS_GuildData::SetGuildData(this_01,pSVar3);
        }
      }
    }
  }
  return;
}

// MyGuildMemberDataRemove @ 14bb1a380

void __thiscall
UDS_GuildManager::MyGuildMemberDataRemove(UDS_GuildManager *this,GuildMemberRes *param_1)

{
  SqlGuildMemberTable *pSVar1;
  long64 lVar2;
  bool bVar3;
  SqlGuildMemberTable *pSVar4;
  UObject *pUVar5;
  UDS_GuildData *this_00;
  undefined1 uVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    FWeakObjectPtr::Get(&local_res10);
  }
  pSVar1 = (param_1->_impl_).guild_member_;
  pSVar4 = &ds_guild::_SqlGuildMemberTable_default_instance_._instance;
  if (pSVar1 != (SqlGuildMemberTable *)0x0) {
    pSVar4 = pSVar1;
  }
  lVar2 = (pSVar4->_impl_).player_uid_;
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    uVar6 = (undefined1)*(undefined8 *)&pUVar5[10].field_0x10;
  }
  else {
    uVar6 = false;
  }
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar6);
  bVar3 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar3) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
    UDS_GuildData::RemoveMemberData(this_00,lVar2);
  }
  return;
}

// MyGuildMemberDataUpdate @ 14bb1a450

void __thiscall
UDS_GuildManager::MyGuildMemberDataUpdate
          (UDS_GuildManager *this,RepeatedPtrField<api_guild::GuildMemberRes> *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  RepeatedPtrField<api_guild::GuildMemberRes> *pRVar3;
  
  pRVar3 = param_1;
  if ((*(ulonglong *)param_1 & 1) != 0) {
    pRVar3 = (RepeatedPtrField<api_guild::GuildMemberRes> *)(*(ulonglong *)param_1 + 7);
  }
  iVar1 = *(int *)&param_1->field_0x8;
  puVar2 = (undefined8 *)&pRVar3->field_0x0;
  for (; pRVar3 != (RepeatedPtrField<api_guild::GuildMemberRes> *)(puVar2 + iVar1);
      pRVar3 = (RepeatedPtrField<api_guild::GuildMemberRes> *)&pRVar3->field_0x8) {
    MyGuildMemberDataUpdate(this,*(GuildMemberRes **)pRVar3);
  }
  return;
}

// MyGuildMemberDataUpdate @ 14bb1a4b0

void __thiscall
UDS_GuildManager::MyGuildMemberDataUpdate(UDS_GuildManager *this,GuildMemberRes *param_1)

{
  SqlGuildMemberTable *pSVar1;
  long64 lVar2;
  bool bVar3;
  SqlGuildMemberTable *pSVar4;
  UObject *pUVar5;
  UDS_GuildData *this_00;
  UDS_GuildMemberData *this_01;
  undefined1 uVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    FWeakObjectPtr::Get(&local_res10);
  }
  pSVar1 = (param_1->_impl_).guild_member_;
  pSVar4 = &ds_guild::_SqlGuildMemberTable_default_instance_._instance;
  if (pSVar1 != (SqlGuildMemberTable *)0x0) {
    pSVar4 = pSVar1;
  }
  lVar2 = (pSVar4->_impl_).player_uid_;
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    uVar6 = (undefined1)*(undefined8 *)&pUVar5[10].field_0x10;
  }
  else {
    uVar6 = false;
  }
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar6);
  bVar3 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar3) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
    UDS_GuildData::GetMemberData(this_00,(long64)&local_res10,SUB81(lVar2,0));
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      this_01 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&local_res10);
      UDS_GuildMemberData::SetMemberData(this_01,param_1);
    }
  }
  return;
}

// Reset @ 14bb32b50

void __thiscall UDS_GuildManager::Reset(UDS_GuildManager *this)

{
  return;
}

// ResetGuildListData @ 14bb33590

void __thiscall UDS_GuildManager::ResetGuildListData(UDS_GuildManager *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  this->GuildListCursor = 0;
  TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2);
  }
  return;
}

// ResetMyGuildData @ 14bb335e0

void __cdecl UDS_GuildManager::ResetMyGuildData(void)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_GuildDataSet>::Get((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2);
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    *(undefined8 *)&pUVar2[10].field_0x10 = 0;
  }
  return;
}

// SendChangeGuildMemberGrade @ 14bb34b60

void __thiscall
UDS_GuildManager::SendChangeGuildMemberGrade
          (UDS_GuildManager *this,
          TArray<FDS_GuildMemberGradeChangeInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    FDS_GuildService::SendChangeMemberGradeRequest(0,param_1);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  FDS_GuildService::SendChangeMemberGradeRequest(*(long64 *)&pUVar2[10].field_0x10,param_1);
  return;
}

// SendCreateGuild @ 14bb34bd0

void __thiscall
UDS_GuildManager::SendCreateGuild(UDS_GuildManager *this,FDS_GuildCreateInfo *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  long64 lVar6;
  FWeakObjectPtr local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar5 = FWeakObjectPtr::Get(local_res18);
    if (0 < *(longlong *)&pUVar5[10].field_0x10) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a993,Alert_None_01,&local_28);
      return;
    }
  }
  iVar2 = DS_GuildDataHelper::CreateMoneyValue();
  iVar3 = DS_GuildDataHelper::CreateMoneyType();
  bVar1 = UDS_MoneyDataSet::CheckEnoughMoney((EDS_MoneyType)iVar3,(longlong)iVar2);
  if (bVar1) {
    iVar2 = (param_1->GuildName).Data.ArrayNum;
    if (iVar2 < 2) {
      lVar6 = 0x3a990;
    }
    else {
      iVar3 = DS_GuildDataHelper::MaxNameLength();
      if (iVar2 + -1 <= iVar3) {
        iVar3 = (param_1->GuildName).Data.ArrayNum;
        iVar4 = DS_GuildDataHelper::MinNameLength();
        iVar2 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar2 = 0;
        }
        if (iVar4 <= iVar2) {
          FDS_GuildService::SendCreateGuildRequest(param_1);
          return;
        }
      }
      lVar6 = 0x3a9fb;
    }
  }
  else {
    lVar6 = 0x3a98f;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar6,Alert_None_01,&local_28);
  return;
}

// SendDisbandGuild @ 14bb34cf0

bool __thiscall UDS_GuildManager::SendDisbandGuild(UDS_GuildManager *this,long64 param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  UDS_GuildData *this_00;
  undefined1 uVar4;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    uVar4 = (undefined1)*(undefined8 *)&pUVar3[10].field_0x10;
  }
  else {
    uVar4 = false;
  }
  UDS_GuildData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,(bool)uVar4);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res20);
    iVar2 = UDS_GuildData::GetGuildMembersCount(this_00);
    if (iVar2 < 2) {
      FDS_GuildService::SendDisbandGuildRequest(param_1);
      return true;
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a99f,Alert_None_01,&local_28);
  }
  return false;
}

// SendGetGuildList @ 14bb34dc0

void __thiscall UDS_GuildManager::SendGetGuildList(UDS_GuildManager *this,int param_1)

{
  FDS_GuildService::SendGetGuildListRequest(this->GuildListCursor,param_1);
  return;
}

// SendGuildInviteCancel @ 14bb34dd0

void __thiscall UDS_GuildManager::SendGuildInviteCancel(UDS_GuildManager *this,long64 param_1)

{
  FDS_GuildService::SendGuildInviteCancelRequest(param_1);
  return;
}

// SendGuildJoinApprove @ 14bb34de0

void __thiscall
UDS_GuildManager::SendGuildJoinApprove(UDS_GuildManager *this,long64 param_1,bool param_2)

{
  bool bVar1;
  UObject *pUVar2;
  long64 lVar3;
  FWeakObjectPtr local_res20;
  
  UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    lVar3 = *(long64 *)&pUVar2[10].field_0x10;
  }
  else {
    lVar3 = 0;
  }
  FDS_GuildService::SendApproveJoinGuildRequest(lVar3,param_1,param_2);
  return;
}

// SendGuildPendingList @ 14bb34e50

void __thiscall UDS_GuildManager::SendGuildPendingList(UDS_GuildManager *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    FDS_GuildService::SendGuildPendingListRequest(0,param_1);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  FDS_GuildService::SendGuildPendingListRequest(*(long64 *)&pUVar2[10].field_0x10,param_1);
  return;
}

// SendJoinGuild @ 14bb34eb0

void __thiscall UDS_GuildManager::SendJoinGuild(UDS_GuildManager *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  UDS_GuildListData::GetData
            ((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,SUB81(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if ((bVar1) &&
       (pUVar2 = FWeakObjectPtr::Get(&local_res20), 0 < *(longlong *)&pUVar2[10].field_0x10)) {
      pUVar2 = FWeakObjectPtr::Get(&local_res18);
      if (pUVar2[2].field_0x8 == '\x01') {
        local_28._0_8_ = 0;
        local_28._8_8_ = 0;
        local_28._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x3a999,Alert_None_01,&local_28);
        return;
      }
      pUVar2 = FWeakObjectPtr::Get(&local_res18);
      if (pUVar2[2].field_0x8 != '\x02') {
        return;
      }
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x3a994,Alert_None_01,&local_28);
      return;
    }
    FDS_GuildService::SendJoinGuildRequest(param_1);
  }
  return;
}

// SendKickoutGuildMember @ 14bb34fb0

void __thiscall UDS_GuildManager::SendKickoutGuildMember(UDS_GuildManager *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    FDS_GuildService::SendKickoutGuildMemberRequest(0,param_1);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  FDS_GuildService::SendKickoutGuildMemberRequest(*(long64 *)&pUVar2[10].field_0x10,param_1);
  return;
}

// SendLeaveGuild @ 14bb35020

void __thiscall UDS_GuildManager::SendLeaveGuild(UDS_GuildManager *this,long64 param_1)

{
  FDS_GuildService::SendLeaveGuildRequest(param_1);
  return;
}

// SendMyPendingList @ 14bb35030

void __thiscall UDS_GuildManager::SendMyPendingList(UDS_GuildManager *this,int param_1)

{
  FDS_GuildService::SendMyPendingListRequest(param_1);
  return;
}

// SendUpdateGuildMark @ 14bb35a20

void __thiscall UDS_GuildManager::SendUpdateGuildMark(UDS_GuildManager *this,FString *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    FDS_GuildService::SendUpdateGuildMarkRequest(0,param_1);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  FDS_GuildService::SendUpdateGuildMarkRequest(*(long64 *)&pUVar2[10].field_0x10,param_1);
  return;
}

// SendUpdateGuildName @ 14bb35a90

void __thiscall UDS_GuildManager::SendUpdateGuildName(UDS_GuildManager *this,FString *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    FDS_GuildService::SendUpdateGuildNameRequest(0,param_1);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res18);
  FDS_GuildService::SendUpdateGuildNameRequest(*(long64 *)&pUVar2[10].field_0x10,param_1);
  return;
}

// SendUpdateGuildSetting @ 14bb35b00

void __thiscall
UDS_GuildManager::SendUpdateGuildSetting(UDS_GuildManager *this,FDS_GuildSettingUpdate *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  FDS_GuildSettingUpdate local_38;
  
  ::FString::FString(&local_38.GuildIntroduction,&param_1->GuildIntroduction);
  ::FString::FString(&local_38.GuildNotice,&param_1->GuildNotice);
  local_38.KickType = param_1->KickType;
  local_38.JoinType = param_1->JoinType;
  local_38.JoinLimitLevel = param_1->JoinLimitLevel;
  UDS_PlayerData::GetData((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    FDS_GuildService::SendUpdateGuildSettingRequest(0,&local_38);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  FDS_GuildService::SendUpdateGuildSettingRequest(*(long64 *)&pUVar2[10].field_0x10,&local_38);
  return;
}

// SetAcceptGuildInvitationResponse @ 14bb35ce0

void __thiscall
UDS_GuildManager::SetAcceptGuildInvitationResponse
          (UDS_GuildManager *this,AcceptGuildInvitationResponse *param_1)

{
  GuildFullInfoResponse *pGVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_ContentManager *this_00;
  UDS_GuildEvent *pUVar4;
  UDS_DataSetBase *this_01;
  GuildFullInfoResponse *pGVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->_impl_).accept_flag_ == true) {
    pGVar1 = (param_1->_impl_).guild_full_info_;
    pGVar5 = &api_guild::_GuildFullInfoResponse_default_instance_._instance;
    if (pGVar1 != (GuildFullInfoResponse *)0x0) {
      pGVar5 = pGVar1;
    }
    SetGuildFullInfoResponse(this,pGVar5);
    TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3);
    }
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      UDS_ContentManager::CloseContent(this_00);
      local_res20 = 0;
      local_res10.ObjectIndex = 0x46b5;
      UDS_ContentManager::OpenContent
                (this_00,(EDS_ContentsTabFrameType *)&local_res10,
                 (TObjectPtr<UDS_ContentArguments>)&local_res20);
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9be,Alert_None_01,&local_28);
    return;
  }
  pUVar4 = UDS_GuildEvent::GetEvent();
  if (pUVar4 != (UDS_GuildEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast
              (&pUVar4->PendingListRemoveDelegate,(param_1->_impl_).guild_uid_);
  }
  TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10);
    UDS_DataSetBase::RemoveData(this_01,(param_1->_impl_).guild_uid_);
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x3a9bf,Alert_None_01,&local_28);
  return;
}

// SetChangeGuildMemberGradeResponse @ 14bb35e30

void __thiscall
UDS_GuildManager::SetChangeGuildMemberGradeResponse
          (UDS_GuildManager *this,ChangeGuildMemberGradeResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_GuildData *this_00;
  undefined1 uVar7;
  RepeatedPtrField<api_guild::ChangeGuildMemberGradeInfo> *pRVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  uVar7 = false;
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    uVar7 = (undefined1)*(undefined8 *)&pUVar6[10].field_0x10;
  }
  UDS_GuildData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,(bool)uVar7);
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar5) {
    uVar2 = *(ulonglong *)&(param_1->_impl_).changed_grade_member_list_;
    if ((uVar2 & 1) == 0) {
      pRVar8 = &(param_1->_impl_).changed_grade_member_list_;
    }
    else {
      pRVar8 = (RepeatedPtrField<api_guild::ChangeGuildMemberGradeInfo> *)(uVar2 + 7);
    }
    iVar1 = *(int *)&(param_1->_impl_).changed_grade_member_list_.field_0x8;
    plVar4 = (longlong *)&pRVar8->field_0x0;
    for (; pRVar8 != (RepeatedPtrField<api_guild::ChangeGuildMemberGradeInfo> *)(plVar4 + iVar1);
        pRVar8 = (RepeatedPtrField<api_guild::ChangeGuildMemberGradeInfo> *)&pRVar8->field_0x8) {
      lVar3 = *(longlong *)pRVar8;
      this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res20);
      UDS_GuildData::GetMemberData
                (this_00,(long64)&local_res18,SUB81(*(undefined8 *)(lVar3 + 0x18),0));
      FWeakObjectPtr::IsValid(&local_res18);
    }
  }
  return;
}

// SetCreateGuildResponse @ 14bb35f80

void __thiscall
UDS_GuildManager::SetCreateGuildResponse(UDS_GuildManager *this,CreateGuildResponse *param_1)

{
  GuildRes *pGVar1;
  GuildMemberRes *pGVar2;
  UDS_ContentManager *this_00;
  GuildRes *pGVar3;
  GuildMemberRes *pGVar4;
  EDS_ContentsTabFrameType local_res10 [2];
  undefined8 local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  ResetMyGuildData();
  pGVar1 = (param_1->_impl_).guild_info_res_;
  pGVar3 = &api_guild::_GuildRes_default_instance_._instance;
  if (pGVar1 != (GuildRes *)0x0) {
    pGVar3 = pGVar1;
  }
  MyGuildDataUpdate(this,pGVar3);
  pGVar2 = (param_1->_impl_).guild_member_res_;
  pGVar4 = &api_guild::_GuildMemberRes_default_instance_._instance;
  if (pGVar2 != (GuildMemberRes *)0x0) {
    pGVar4 = pGVar2;
  }
  MyGuildMemberDataUpdate(this,pGVar4);
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    UDS_ContentManager::CloseContent(this_00);
    local_res18[0] = 0;
    local_res10[0] = GuildMain;
    UDS_ContentManager::OpenContent
              (this_00,local_res10,(TObjectPtr<UDS_ContentArguments>)local_res18);
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x3a99e,Alert_System_01,&local_28);
  return;
}

// SetDisbandGuildResponse @ 14bb36170

void __thiscall
UDS_GuildManager::SetDisbandGuildResponse(UDS_GuildManager *this,DeleteGuildResponse *param_1)

{
  UDS_ContentManager *this_00;
  
  ResetMyGuildData();
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    UDS_ContentManager::CloseContent(this_00);
    return;
  }
  return;
}

// SetGetGuildListResponse @ 14bb36290

void __thiscall
UDS_GuildManager::SetGetGuildListResponse(UDS_GuildManager *this,GetGuildListResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ForAnyElementType FVar4;
  long64 lVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UDS_GuildData *this_00;
  UDS_GuildEvent *pUVar9;
  RepeatedPtrField<ds_guild::SqlGuildTable> *pRVar10;
  longlong lVar11;
  FWeakObjectPtr local_res8;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_c8;
  SqlGuildTable local_b8;
  
  if (this->GuildListCursor < 1) {
    this->GuildListCursor = 0;
    TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_res8);
    bVar6 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      (**(code **)(*(longlong *)pUVar8 + 0x2c0))(pUVar8);
    }
  }
  uVar2 = *(ulonglong *)&(param_1->_impl_).guild_infos_;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if ((uVar2 & 1) == 0) {
    pRVar10 = &(param_1->_impl_).guild_infos_;
  }
  else {
    pRVar10 = (RepeatedPtrField<ds_guild::SqlGuildTable> *)(uVar2 + 7);
  }
  iVar1 = *(int *)&(param_1->_impl_).guild_infos_.field_0x8;
  puVar3 = (undefined8 *)&pRVar10->field_0x0;
  for (; pRVar10 != (RepeatedPtrField<ds_guild::SqlGuildTable> *)(puVar3 + iVar1);
      pRVar10 = (RepeatedPtrField<ds_guild::SqlGuildTable> *)&pRVar10->field_0x8) {
    ds_guild::SqlGuildTable::SqlGuildTable(&local_b8,(Arena *)0x0,*(SqlGuildTable **)pRVar10);
    lVar5 = local_b8._impl_.guild_uid_;
    local_b8._padding_ = (longlong)&___7SqlGuildTable_ds_guild__6B_;
    UDS_GuildListData::GetData
              ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,
               SUB81(local_b8._impl_.guild_uid_,0));
    bVar6 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar6) {
      this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res8);
      UDS_GuildData::SetGuildData(this_00,&local_b8);
      iVar7 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar7 + 1);
      *(long64 *)(local_f8.Data + (longlong)iVar7 * 8) = lVar5;
    }
    ds_guild::SqlGuildTable::~SqlGuildTable(&local_b8);
  }
  pUVar9 = UDS_GuildEvent::GetEvent();
  FVar4.Data = local_f8.Data;
  if (pUVar9 != (UDS_GuildEvent *)0x0) {
    lVar11 = (longlong)(int)local_f0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = (int)local_f0;
    if ((int)local_f0 == 0) {
      local_cc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_f0,0,&local_d8,(int)local_f0,&local_cc);
      memcpy(local_d8.Data,FVar4.Data,lVar11 << 3);
    }
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar9->GuildListUpdateDelegate);
    FVar4.Data = local_d8.Data;
    if (bVar6) {
      lVar11 = (longlong)local_d0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = local_d0;
      if (local_d0 == 0) {
        local_dc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_d0,0,&local_e8,local_d0,&local_dc);
        memcpy(local_e8.Data,FVar4.Data,lVar11 << 3);
      }
      iVar1 = local_e0;
      FVar4.Data = local_e8.Data;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = local_e0;
      if (local_e0 == 0) {
        local_c8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_e0,0,&local_c8.AllocatorInstance,local_e0,&local_c8.ArrayMax);
        memcpy(local_c8.AllocatorInstance.Data,FVar4.Data,(longlong)iVar1 << 3);
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(TArray<__int64,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TArray<__int64,TSizedDefaultAllocator<32>_>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar9->GuildListUpdateDelegate,&local_c8);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
  }
  this->GuildListCursor = (param_1->_impl_).cursor_;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// SetGuildFullInfoResponse @ 14bb365a0

void __thiscall
UDS_GuildManager::SetGuildFullInfoResponse(UDS_GuildManager *this,GuildFullInfoResponse *param_1)

{
  int iVar1;
  GuildRes *pGVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  GuildRes *pGVar5;
  RepeatedPtrField<api_guild::GuildMemberRes> *pRVar6;
  
  ResetMyGuildData();
  pGVar2 = (param_1->_impl_).guild_res_;
  pGVar5 = &api_guild::_GuildRes_default_instance_._instance;
  if (pGVar2 != (GuildRes *)0x0) {
    pGVar5 = pGVar2;
  }
  MyGuildDataUpdate(this,pGVar5);
  pRVar6 = &(param_1->_impl_).guild_member_res_;
  uVar3 = *(ulonglong *)&(param_1->_impl_).guild_member_res_;
  if ((uVar3 & 1) != 0) {
    pRVar6 = (RepeatedPtrField<api_guild::GuildMemberRes> *)(uVar3 + 7);
  }
  iVar1 = *(int *)&(param_1->_impl_).guild_member_res_.field_0x8;
  puVar4 = (undefined8 *)&pRVar6->field_0x0;
  for (; pRVar6 != (RepeatedPtrField<api_guild::GuildMemberRes> *)(puVar4 + iVar1);
      pRVar6 = (RepeatedPtrField<api_guild::GuildMemberRes> *)&pRVar6->field_0x8) {
    MyGuildMemberDataUpdate(this,*(GuildMemberRes **)pRVar6);
  }
  return;
}

// SetGuildInviteCancelResponse @ 14bb36630

void __thiscall
UDS_GuildManager::SetGuildInviteCancelResponse
          (UDS_GuildManager *this,CancelGuildInvitationResponse *param_1)

{
  long64 lVar1;
  bool bVar2;
  UDS_GuildEvent *pUVar3;
  UObject *pUVar4;
  UDS_GuildData *this_00;
  undefined1 uVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  lVar1 = (param_1->_impl_).player_uid_;
  pUVar3 = UDS_GuildEvent::GetEvent();
  if (pUVar3 != (UDS_GuildEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar3->PendingListRemoveDelegate,lVar1);
  }
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    uVar5 = (undefined1)*(undefined8 *)&pUVar4[10].field_0x10;
  }
  else {
    uVar5 = false;
  }
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar5);
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar2) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
    UDS_GuildData::RemoveMemberPendingData(this_00,lVar1);
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x3aa57,Alert_None_01,&local_28);
  return;
}

// SetGuildInviteResponse @ 14bb36700

void __thiscall
UDS_GuildManager::SetGuildInviteResponse(UDS_GuildManager *this,InviteGuildResponse *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_GameInstance *this_00;
  UClass *pUVar4;
  UDS_NotificationManager *this_01;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if ((bVar2) &&
     (pUVar3 = FWeakObjectPtr::Get(local_res18), 0 < *(longlong *)&pUVar3[10].field_0x10)) {
    return;
  }
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UDS_NotificationManager_NoRegister();
  this_01 = (UDS_NotificationManager *)
            UDS_GameInstance::GetManager(this_00,(FName)pUVar4->_padding_);
  if (this_01 != (UDS_NotificationManager *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NotificationManager_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14bb3678d;
  }
  this_01 = (UDS_NotificationManager *)0x0;
LAB_14bb3678d:
  if (this_01 == (UDS_NotificationManager *)0x0) {
    return;
  }
  UDS_NotificationManager::AddNotificationData(this_01,GuildInvite);
  return;
}

// SetGuildJoinApplyCancelResponse @ 14bb367c0

void __thiscall
UDS_GuildManager::SetGuildJoinApplyCancelResponse
          (UDS_GuildManager *this,CancelJoinGuildResponse *param_1)

{
  bool bVar1;
  UDS_GuildEvent *pUVar2;
  UDS_DataSetBase *this_00;
  FWeakObjectPtr local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  pUVar2 = UDS_GuildEvent::GetEvent();
  if (pUVar2 != (UDS_GuildEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast
              (&pUVar2->PendingListRemoveDelegate,(param_1->_impl_).guild_uid_);
  }
  TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(local_res18);
    UDS_DataSetBase::RemoveData(this_00,(param_1->_impl_).guild_uid_);
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x3a9ba,Alert_None_01,&local_28);
  return;
}

// SetGuildJoinApproveResponse @ 14bb36850

void __thiscall
UDS_GuildManager::SetGuildJoinApproveResponse
          (UDS_GuildManager *this,ApproveJoinGuildResponse *param_1)

{
  long64 lVar1;
  bool bVar2;
  UDS_GuildEvent *pUVar3;
  UObject *pUVar4;
  UDS_GuildData *this_00;
  undefined1 uVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  uVar5 = false;
  if ((param_1->_impl_).accept_flag_ == true) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3aa56,Alert_System_01,&local_28);
  }
  lVar1 = (param_1->_impl_).player_uid_;
  pUVar3 = UDS_GuildEvent::GetEvent();
  if (pUVar3 != (UDS_GuildEvent *)0x0) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar3->PendingListRemoveDelegate,lVar1);
  }
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    uVar5 = (undefined1)*(undefined8 *)&pUVar4[10].field_0x10;
  }
  UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar5);
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar2) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
    UDS_GuildData::RemoveMemberPendingData(this_00,lVar1);
  }
  return;
}

// SetGuildPendingListResponse @ 14bb36930

void __thiscall
UDS_GuildManager::SetGuildPendingListResponse
          (UDS_GuildManager *this,GetGuildPendingListResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  GuildPendingInfo *pGVar3;
  long64 lVar4;
  undefined8 *puVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_GuildData *pUVar8;
  UDS_GuildMemberData *this_00;
  UDS_GuildEvent *pUVar9;
  undefined1 uVar10;
  RepeatedPtrField<api_guild::GuildPendingInfo> *pRVar11;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  uVar10 = false;
  UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
  bVar6 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&local_res20);
    uVar10 = (undefined1)*(undefined8 *)&pUVar7[10].field_0x10;
  }
  UDS_GuildData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar10);
  bVar6 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar6) {
    pUVar8 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
    UDS_GuildData::RemoveAllMemberPendingData(pUVar8);
    uVar2 = *(ulonglong *)&(param_1->_impl_).guild_pending_list_;
    if ((uVar2 & 1) == 0) {
      pRVar11 = &(param_1->_impl_).guild_pending_list_;
    }
    else {
      pRVar11 = (RepeatedPtrField<api_guild::GuildPendingInfo> *)(uVar2 + 7);
    }
    iVar1 = *(int *)&(param_1->_impl_).guild_pending_list_.field_0x8;
    puVar5 = (undefined8 *)&pRVar11->field_0x0;
    for (; pRVar11 != (RepeatedPtrField<api_guild::GuildPendingInfo> *)(puVar5 + iVar1);
        pRVar11 = (RepeatedPtrField<api_guild::GuildPendingInfo> *)&pRVar11->field_0x8) {
      pGVar3 = *(GuildPendingInfo **)pRVar11;
      lVar4 = (pGVar3->_impl_).player_uid_;
      pUVar8 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
      UDS_GuildData::GetMemberPendingData(pUVar8,(long64)&local_res20,SUB81(lVar4,0));
      bVar6 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar6) {
        this_00 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&local_res20);
        UDS_GuildMemberData::SetMemberPendingData(this_00,pGVar3);
      }
    }
    pUVar9 = UDS_GuildEvent::GetEvent();
    if (pUVar9 != (UDS_GuildEvent *)0x0) {
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar9->PendingListUpdateDelegate);
      if (bVar6) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar9->PendingListUpdateDelegate).Delegate);
      }
    }
  }
  return;
}

// SetJoinGuildResponse @ 14bb36af0

void __thiscall
UDS_GuildManager::SetJoinGuildResponse(UDS_GuildManager *this,JoinGuildResponse *param_1)

{
  uint uVar1;
  GuildFullInfoResponse *pGVar2;
  UDS_ContentManager *this_00;
  GuildFullInfoResponse *pGVar3;
  EDS_ContentsTabFrameType local_res10 [2];
  undefined8 local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 10) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9b5,Alert_None_01,&local_28);
    return;
  }
  if (uVar1 == 0xb) {
    pGVar2 = (((param_1->_impl_).result_data_.joined_result_)->_impl_).guild_full_info_;
    pGVar3 = &api_guild::_GuildFullInfoResponse_default_instance_._instance;
    if (pGVar2 != (GuildFullInfoResponse *)0x0) {
      pGVar3 = pGVar2;
    }
    SetGuildFullInfoResponse(this,pGVar3);
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      UDS_ContentManager::CloseContent(this_00);
      local_res18[0] = 0;
      local_res10[0] = GuildMain;
      UDS_ContentManager::OpenContent
                (this_00,local_res10,(TObjectPtr<UDS_ContentArguments>)local_res18);
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x3a9b4,Alert_None_01,&local_28);
  }
  return;
}

// SetKickoutGuildMemberResponse @ 14bb36bc0

void __thiscall
UDS_GuildManager::SetKickoutGuildMemberResponse
          (UDS_GuildManager *this,DeleteGuildMemberResponse *param_1)

{
  long64 lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_GuildEvent *pUVar4;
  UDS_GuildData *this_00;
  undefined1 uVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    uVar5 = (undefined1)*(undefined8 *)&pUVar3[10].field_0x10;
  }
  else {
    uVar5 = false;
  }
  UDS_GuildData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,(bool)uVar5);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    lVar1 = (param_1->_impl_).player_uid_;
    pUVar4 = UDS_GuildEvent::GetEvent();
    if (pUVar4 != (UDS_GuildEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar4->GuildMemberListRemoveDelegate,lVar1);
    }
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res20);
    UDS_GuildData::RemoveMemberData(this_00,lVar1);
  }
  return;
}

// SetLeaveGuildResponse @ 14bb36c70

void __thiscall
UDS_GuildManager::SetLeaveGuildResponse(UDS_GuildManager *this,LeaveGuildResponse *param_1)

{
  UDS_ContentManager *this_00;
  
  ResetMyGuildData();
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    UDS_ContentManager::CloseContent(this_00);
    return;
  }
  return;
}

// SetMyPendingListResponse @ 14bb36ca0

void __thiscall
UDS_GuildManager::SetMyPendingListResponse(UDS_GuildManager *this,GetMyPendingListResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  PlayerPendingInfo *pPVar3;
  SqlGuildTable *pSVar4;
  undefined8 *puVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_GuildListData *this_00;
  UDS_GuildEvent *pUVar8;
  RepeatedPtrField<api_guild::PlayerPendingInfo> *pRVar9;
  SqlGuildTable *pSVar10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  SqlGuildTable local_a8;
  
  TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_res18);
  bVar6 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7);
    pRVar9 = &(param_1->_impl_).player_pending_list_;
    uVar2 = *(ulonglong *)&(param_1->_impl_).player_pending_list_;
    if ((uVar2 & 1) != 0) {
      pRVar9 = (RepeatedPtrField<api_guild::PlayerPendingInfo> *)(uVar2 + 7);
    }
    iVar1 = *(int *)&(param_1->_impl_).player_pending_list_.field_0x8;
    puVar5 = (undefined8 *)&pRVar9->field_0x0;
    for (; pRVar9 != (RepeatedPtrField<api_guild::PlayerPendingInfo> *)(puVar5 + iVar1);
        pRVar9 = (RepeatedPtrField<api_guild::PlayerPendingInfo> *)&pRVar9->field_0x8) {
      pPVar3 = *(PlayerPendingInfo **)pRVar9;
      pSVar4 = (pPVar3->_impl_).guild_info_;
      pSVar10 = &ds_guild::_SqlGuildTable_default_instance_._instance;
      if (pSVar4 != (SqlGuildTable *)0x0) {
        pSVar10 = pSVar4;
      }
      ds_guild::SqlGuildTable::SqlGuildTable(&local_a8,(Arena *)0x0,pSVar10);
      local_a8._padding_ = (longlong)&___7SqlGuildTable_ds_guild__6B_;
      UDS_GuildListData::GetData
                ((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,
                 SUB81(local_a8._impl_.guild_uid_,0));
      bVar6 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar6) {
        this_00 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res20);
        UDS_GuildListData::SetGuildListData(this_00,pPVar3);
      }
      ds_guild::SqlGuildTable::~SqlGuildTable(&local_a8);
    }
    pUVar8 = UDS_GuildEvent::GetEvent();
    if (pUVar8 != (UDS_GuildEvent *)0x0) {
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar8->PendingListUpdateDelegate);
      if (bVar6) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar8->PendingListUpdateDelegate).Delegate);
      }
    }
  }
  return;
}

// SetNotifyGuildMessageResponse @ 14bb36e20

void __thiscall
UDS_GuildManager::SetNotifyGuildMessageResponse(UDS_GuildManager *this,NotifyGuildMessage *param_1)

{
  uint uVar1;
  GuildRes *pGVar2;
  GuildMemberResDefaultTypeInternal *pGVar3;
  SqlGuildMemberTable *pSVar4;
  long64 lVar5;
  GuildMemberRes *pGVar6;
  bool bVar7;
  SqlGuildMemberTable *pSVar8;
  UObject *pUVar9;
  UDS_GuildData *this_00;
  GuildRes *pGVar10;
  GuildMemberRes *pGVar11;
  GuildMemberResDefaultTypeInternal *pGVar12;
  undefined1 uVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 10) {
    pGVar6 = *(GuildMemberRes **)((param_1->_impl_).item_.notify_create_guild_msg_ + 2);
    pGVar11 = &api_guild::_GuildMemberRes_default_instance_._instance;
    if (pGVar6 != (GuildMemberRes *)0x0) {
      pGVar11 = pGVar6;
    }
    MyGuildMemberDataUpdate(this,pGVar11);
    return;
  }
  if (uVar1 == 0xc) {
    pGVar3 = *(GuildMemberResDefaultTypeInternal **)
              &(param_1->_impl_).item_.notify_create_guild_msg_[1].field_0x8;
    pGVar12 = &api_guild::_GuildMemberRes_default_instance_;
    if (pGVar3 != (GuildMemberResDefaultTypeInternal *)0x0) {
      pGVar12 = pGVar3;
    }
    UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
    bVar7 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar7) {
      FWeakObjectPtr::Get(&local_res10);
    }
    pSVar4 = (pGVar12->_instance)._impl_.guild_member_;
    pSVar8 = &ds_guild::_SqlGuildMemberTable_default_instance_._instance;
    if (pSVar4 != (SqlGuildMemberTable *)0x0) {
      pSVar8 = pSVar4;
    }
    lVar5 = (pSVar8->_impl_).player_uid_;
    UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
    bVar7 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar7) {
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      uVar13 = (undefined1)*(undefined8 *)&pUVar9[10].field_0x10;
    }
    else {
      uVar13 = false;
    }
    UDS_GuildData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar13);
    bVar7 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar7) {
      this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(local_res18);
      UDS_GuildData::RemoveMemberData(this_00,lVar5);
      return;
    }
  }
  else {
    if (uVar1 == 0xd) {
      pGVar2 = *(GuildRes **)&(param_1->_impl_).item_.notify_create_guild_msg_[1].field_0x8;
      pGVar10 = &api_guild::_GuildRes_default_instance_._instance;
      if (pGVar2 != (GuildRes *)0x0) {
        pGVar10 = pGVar2;
      }
      MyGuildDataUpdate(this,pGVar10);
      return;
    }
    if (uVar1 == 0xe) {
      MyGuildMemberDataUpdate
                (this,(RepeatedPtrField<api_guild::GuildMemberRes> *)
                      ((param_1->_impl_).item_.notify_create_guild_msg_ + 1));
      return;
    }
  }
  return;
}

// SetUpdateGuildMarkResponse @ 14bb37db0

void __thiscall
UDS_GuildManager::SetUpdateGuildMarkResponse
          (UDS_GuildManager *this,UpdateGuildMarkResponse *param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_GuildData *this_00;
  FString *pFVar4;
  FDS_GuildMarkInfo *pFVar5;
  UDS_GuildEvent *pUVar6;
  char *pcVar7;
  undefined1 uVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FDS_GuildMarkInfo local_38;
  FString local_28;
  FDS_GuildMarkInfo local_18;
  
  UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    uVar8 = (undefined1)*(undefined8 *)&pUVar3[10].field_0x10;
  }
  else {
    uVar8 = false;
  }
  UDS_GuildData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar2) &&
     (lVar1 = (param_1->_impl_).guild_uid_, pUVar3 = FWeakObjectPtr::Get(&local_res18),
     lVar1 == *(longlong *)&pUVar3[2].field_0x10)) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
    pcVar7 = (char *)((ulonglong)(param_1->_impl_).mark_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      pcVar7 = *(char **)pcVar7;
    }
    pFVar4 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar7);
    pFVar5 = MakeJsonToGuildMarkInfo(&local_18,pFVar4);
    local_38.GuildMarkTableID = pFVar5->GuildMarkTableID;
    local_38.GuildMarkColorTableID = pFVar5->GuildMarkColorTableID;
    local_38.GuildMarkBgTableID = pFVar5->GuildMarkBgTableID;
    local_38.GuildMarkBgColorTableID = pFVar5->GuildMarkBgColorTableID;
    UDS_GuildData::SetGuildMarkData(this_00,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pUVar6 = UDS_GuildEvent::GetEvent();
    if (pUVar6 != (UDS_GuildEvent *)0x0) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar6->GuildMarkUpdateCompleteDelegate);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar6->GuildMarkUpdateCompleteDelegate).Delegate);
      }
    }
  }
  return;
}

// SetUpdateGuildNameResponse @ 14bb37ed0

void __thiscall
UDS_GuildManager::SetUpdateGuildNameResponse
          (UDS_GuildManager *this,UpdateGuildNameResponse *param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_GuildData *this_00;
  undefined1 uVar4;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    uVar4 = (undefined1)*(undefined8 *)&pUVar3[10].field_0x10;
  }
  else {
    uVar4 = false;
  }
  UDS_GuildData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar4);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    lVar1 = (param_1->_impl_).guild_uid_;
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    if (lVar1 == *(longlong *)&pUVar3[2].field_0x10) {
      this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
      UDS_GuildData::SetGuildName(this_00,param_1);
    }
  }
  return;
}

// SetUpdateGuildSettingResponse @ 14bb37f80

void __thiscall
UDS_GuildManager::SetUpdateGuildSettingResponse
          (UDS_GuildManager *this,UpdateGuildSettingResponse *param_1)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_GuildData *this_00;
  UDS_GuildEvent *pUVar4;
  undefined1 uVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  UDS_PlayerData::GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    uVar5 = (undefined1)*(undefined8 *)&pUVar3[10].field_0x10;
  }
  else {
    uVar5 = false;
  }
  UDS_GuildData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,(bool)uVar5);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar2) &&
     (lVar1 = (param_1->_impl_).guild_uid_, pUVar3 = FWeakObjectPtr::Get(&local_res18),
     lVar1 == *(longlong *)&pUVar3[2].field_0x10)) {
    this_00 = (UDS_GuildData *)FWeakObjectPtr::Get(&local_res18);
    UDS_GuildData::SetGuildSettingData(this_00,param_1);
    pUVar4 = UDS_GuildEvent::GetEvent();
    if (pUVar4 != (UDS_GuildEvent *)0x0) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->GuildSettingUpdateCompleteDelegate);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->GuildSettingUpdateCompleteDelegate).Delegate);
      }
    }
  }
  return;
}

