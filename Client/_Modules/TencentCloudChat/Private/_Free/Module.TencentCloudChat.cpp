// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TencentCloudChat
// Functions: 165

// `dynamic_initializer_for_'ModuleRegistrantTencentCloudChat'' @ 1411de140

void __cdecl _dynamic_initializer_for__ModuleRegistrantTencentCloudChat__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TencentCloudChat";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TencentCloudChat",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<TencentCloudChat>::InitializeModule);
  return;
}

// StartupModule @ 14acd9130

void __thiscall TencentCloudChat::StartupModule(TencentCloudChat *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  size_t sVar5;
  void *pvVar6;
  wchar_t *local_58;
  int local_50;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IPluginManager::Get();
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,local_38,"TencentCloudChat");
  if (*plVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)*plVar4 + 0x20))((longlong *)*plVar4,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  local_28.DataPtr = L"";
  if (local_50 != 0) {
    local_28.DataPtr = local_58;
  }
  pvVar6 = (void *)0x0;
  local_28.Size = 0;
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar5 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar5;
  }
  local_10 = 0x5e;
  local_18 = 
  L"Source/ThirdParty/TencentCloudChatLibrary/Windows/ImSDK_Windows_CPP/shared_lib/Win64/ImSDK.dll";
  FPaths::CombineInternal(&local_48,&local_28,2);
  if (1 < local_48.Data.ArrayNum) {
    pvVar6 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)local_48.Data.AllocatorInstance.Data);
  }
  this->ImSDKHandle = pvVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// ShutdownModule @ 14acd9250

void __thiscall TencentCloudChat::ShutdownModule(TencentCloudChat *this)

{
  FWindowsPlatformProcess::FreeDllHandle(this->ImSDKHandle);
  this->ImSDKHandle = (void *)0x0;
  return;
}

// `scalar_deleting_destructor' @ 14acd9280

void * __thiscall
TencentCloudChat::_scalar_deleting_destructor_(TencentCloudChat *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acd92c0

void * __thiscall InitSDKRunner::_scalar_deleting_destructor_(InitSDKRunner *this,uint param_1)

{
  V2TIMSDKConfig::~V2TIMSDKConfig(&this->config);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// Accept @ 14acd9310

void __cdecl
TencentCloudChat::Accept(V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd935d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,param_3);
  return;
}

// AcceptFriendApplication @ 14acd9370

void __cdecl
TencentCloudChat::AcceptFriendApplication
          (V2TIMFriendApplication *param_1,V2TIMFriendAcceptType param_2,
          V2TIMValueCallback<V2TIMFriendOperationResult> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd93bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_2,param_3);
  return;
}

// AcceptGroupApplication @ 14acd93d0

void __cdecl
TencentCloudChat::AcceptGroupApplication
          (V2TIMGroupApplication *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd0))(plVar2,param_1,param_2,param_3);
  return;
}

// AddAdvancedMsgListener @ 14acd9430

void __cdecl TencentCloudChat::AddAdvancedMsgListener(V2TIMAdvancedMsgListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd945d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_1,*(code **)(*plVar2 + 8));
  return;
}

// AddConversationListener @ 14acd9470

void __cdecl TencentCloudChat::AddConversationListener(V2TIMConversationListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd949d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_1,*(code **)(*plVar2 + 8));
  return;
}

// AddConversationsToGroup @ 14acd94b0

void __cdecl
TencentCloudChat::AddConversationsToGroup
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMConversationOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2,param_3);
  return;
}

// AddFriend @ 14acd9510

void __cdecl
TencentCloudChat::AddFriend
          (V2TIMFriendAddApplication *param_1,
          V2TIMValueCallback<V2TIMFriendOperationResult> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd954d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x38));
  return;
}

// AddFriendListener @ 14acd9560

void __cdecl TencentCloudChat::AddFriendListener(V2TIMFriendshipListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd958d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_1,*(code **)(*plVar2 + 8));
  return;
}

// AddFriendsToFriendGroup @ 14acd95a0

void __cdecl
TencentCloudChat::AddFriendsToFriendGroup
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMFriendOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd95f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_1,param_2,param_3);
  return;
}

// AddGroupListener @ 14acd9600

void __cdecl TencentCloudChat::AddGroupListener(V2TIMGroupListener *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acd9624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x88))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 0x88));
  return;
}

// AddInvitedSignaling @ 14acd9630

void __cdecl
TencentCloudChat::AddInvitedSignaling(V2TIMSignalingInfo *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd966d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x48));
  return;
}

// AddSDKListener @ 14acd9680

void __cdecl TencentCloudChat::AddSDKListener(V2TIMSDKListener *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acd96a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 8))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 8));
  return;
}

// AddSignalingListener @ 14acd96b0

void __cdecl TencentCloudChat::AddSignalingListener(V2TIMSignalingListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd96dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_1,*(code **)(*plVar2 + 8));
  return;
}

// AddSimpleMsgListener @ 14acd96f0

void __cdecl TencentCloudChat::AddSimpleMsgListener(V2TIMSimpleMsgListener *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acd9711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x58))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 0x58));
  return;
}

// AddToBlackList @ 14acd9720

void __cdecl
TencentCloudChat::AddToBlackList
          (TXV2TIMStringVector *param_1,
          V2TIMValueCallback<TXV2TIMFriendOperationResultVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd975d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x78));
  return;
}

// Cancel @ 14acd9770

void __cdecl
TencentCloudChat::Cancel(V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd97bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,param_3);
  return;
}

// CheckFriend @ 14acd97d0

void __cdecl
TencentCloudChat::CheckFriend
          (TXV2TIMStringVector *param_1,V2TIMFriendType param_2,
          V2TIMValueCallback<TXV2TIMFriendCheckResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd981c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1,param_2,param_3);
  return;
}

// ClearC2CHistoryMessage @ 14acd9830

void __cdecl TencentCloudChat::ClearC2CHistoryMessage(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xe0))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xe0));
  return;
}

// ClearGroupHistoryMessage @ 14acd9880

void __cdecl TencentCloudChat::ClearGroupHistoryMessage(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd98c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xe8));
  return;
}

// CreateAtSignedGroupMessage @ 14acd98d0

V2TIMMessage * __cdecl
TencentCloudChat::CreateAtSignedGroupMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMMessage *param_1,TXV2TIMStringVector *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x80))(plVar2,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateConversationGroup @ 14acd9930

void __cdecl
TencentCloudChat::CreateConversationGroup
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMConversationOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2,param_1,param_2,param_3);
  return;
}

// CreateCustomMessage @ 14acd9990

V2TIMMessage * __cdecl
TencentCloudChat::CreateCustomMessage(V2TIMMessage *__return_storage_ptr__,V2TIMBuffer *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateCustomMessage @ 14acd99e0

V2TIMMessage * __cdecl
TencentCloudChat::CreateCustomMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMBuffer *param_1,V2TIMString *param_2,
          V2TIMString *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x28))(plVar2,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// CreateFaceMessage @ 14acd9a50

V2TIMMessage * __cdecl
TencentCloudChat::CreateFaceMessage
          (V2TIMMessage *__return_storage_ptr__,uint param_1,V2TIMBuffer *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateFileMessage @ 14acd9ab0

V2TIMMessage * __cdecl
TencentCloudChat::CreateFileMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1,V2TIMString *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x50))(plVar2,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateForwardMessage @ 14acd9b10

V2TIMMessage * __cdecl
TencentCloudChat::CreateForwardMessage(V2TIMMessage *__return_storage_ptr__,V2TIMMessage *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateFriendGroup @ 14acd9b60

void __cdecl
TencentCloudChat::CreateFriendGroup
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMFriendOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x90))(plVar2,param_1,param_2,param_3);
  return;
}

// CreateGroup @ 14acd9bc0

void __cdecl
TencentCloudChat::CreateGroup
          (V2TIMGroupInfo *param_1,TXV2TIMCreateGroupMemberInfoVector *param_2,
          V2TIMValueCallback<V2TIMString> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2,param_3);
  return;
}

// CreateGroup @ 14acd9c20

void __cdecl
TencentCloudChat::CreateGroup
          (V2TIMString *param_1,V2TIMString *param_2,V2TIMString *param_3,
          V2TIMValueCallback<V2TIMString> *param_4)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x98))(pVVar1,param_1,param_2,param_3,param_4);
  return;
}

// CreateImageMessage @ 14acd9c80

V2TIMMessage * __cdecl
TencentCloudChat::CreateImageMessage(V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x38))(plVar2,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateLocationMessage @ 14acd9cd0

V2TIMMessage * __cdecl
TencentCloudChat::CreateLocationMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1,double param_2,double param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x58))(plVar2,__return_storage_ptr__,param_1,SUB84(param_2,0),param_3);
  return __return_storage_ptr__;
}

// CreateMergerMessage @ 14acd9d40

V2TIMMessage * __cdecl
TencentCloudChat::CreateMergerMessage
          (V2TIMMessage *__return_storage_ptr__,TXV2TIMMessageVector *param_1,V2TIMString *param_2,
          TXV2TIMStringVector *param_3,V2TIMString *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x68))(plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSoundMessage @ 14acd9dc0

V2TIMMessage * __cdecl
TencentCloudChat::CreateSoundMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1,uint param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x40))(plVar2,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateTargetedGroupMessage @ 14acd9e20

V2TIMMessage * __cdecl
TencentCloudChat::CreateTargetedGroupMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMMessage *param_1,TXV2TIMStringVector *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x78))(plVar2,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateTextAtMessage @ 14acd9e80

V2TIMMessage * __cdecl
TencentCloudChat::CreateTextAtMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1,TXV2TIMStringVector *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x20))(plVar2,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateTextMessage @ 14acd9ee0

V2TIMMessage * __cdecl
TencentCloudChat::CreateTextMessage(V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x18))(plVar2,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateTopicInCommunity @ 14acd9f30

void __cdecl
TencentCloudChat::CreateTopicInCommunity
          (V2TIMString *param_1,V2TIMTopicInfo *param_2,V2TIMValueCallback<V2TIMString> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acd9f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xf0))(plVar2,param_1,param_2,param_3);
  return;
}

// CreateVideoMessage @ 14acd9f90

V2TIMMessage * __cdecl
TencentCloudChat::CreateVideoMessage
          (V2TIMMessage *__return_storage_ptr__,V2TIMString *param_1,V2TIMString *param_2,
          uint param_3,V2TIMString *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x48))(plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// DecreaseGroupCounter @ 14acda010

void __cdecl
TencentCloudChat::DecreaseGroupCounter
          (V2TIMString *param_1,V2TIMString *param_2,long64 param_3,
          V2TIMValueCallback<TXV2TIMStringToint64_tMap> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// DeleteConversation @ 14acda080

void __cdecl TencentCloudChat::DeleteConversation(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x38));
  return;
}

// DeleteConversationGroup @ 14acda0d0

void __cdecl TencentCloudChat::DeleteConversationGroup(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x90))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x90));
  return;
}

// DeleteConversationsFromGroup @ 14acda120

void __cdecl
TencentCloudChat::DeleteConversationsFromGroup
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMConversationOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa8))(plVar2,param_1,param_2,param_3);
  return;
}

// DeleteFriendApplication @ 14acda180

void __cdecl
TencentCloudChat::DeleteFriendApplication(V2TIMFriendApplication *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda1bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x68));
  return;
}

// DeleteFriendGroup @ 14acda1d0

void __cdecl
TencentCloudChat::DeleteFriendGroup(TXV2TIMStringVector *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xa0));
  return;
}

// DeleteFriendsFromFriendGroup @ 14acda220

void __cdecl
TencentCloudChat::DeleteFriendsFromFriendGroup
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMFriendOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_1,param_2,param_3);
  return;
}

// DeleteFromBlackList @ 14acda280

void __cdecl
TencentCloudChat::DeleteFromBlackList
          (TXV2TIMStringVector *param_1,
          V2TIMValueCallback<TXV2TIMFriendOperationResultVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x80));
  return;
}

// DeleteFromFriendList @ 14acda2d0

void __cdecl
TencentCloudChat::DeleteFromFriendList
          (TXV2TIMStringVector *param_1,V2TIMFriendType param_2,
          V2TIMValueCallback<TXV2TIMFriendOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2,param_3);
  return;
}

// DeleteGroupAttributes @ 14acda330

void __cdecl
TencentCloudChat::DeleteGroupAttributes
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda37d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2,param_3);
  return;
}

// DeleteMessageExtensions @ 14acda390

void __cdecl
TencentCloudChat::DeleteMessageExtensions
          (V2TIMMessage *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMMessageExtensionResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x138))(plVar2,param_1,param_2,param_3);
  return;
}

// DeleteMessages @ 14acda3f0

void __cdecl TencentCloudChat::DeleteMessages(TXV2TIMMessageVector *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd8))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xd8));
  return;
}

// DeleteTopicFromCommunity @ 14acda440

void __cdecl
TencentCloudChat::DeleteTopicFromCommunity
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMTopicOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xf8))(plVar2,param_1,param_2,param_3);
  return;
}

// DismissGroup @ 14acda4a0

void __cdecl TencentCloudChat::DismissGroup(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acda4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xb0))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xb0));
  return;
}

// DoBackground @ 14acda4e0

void __cdecl TencentCloudChat::DoBackground(uint param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x108))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda51b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x10));
  return;
}

// DoForeground @ 14acda530

void __cdecl TencentCloudChat::DoForeground(V2TIMCallback *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x108))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda55d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*(code **)(*plVar2 + 0x18));
  return;
}

// FindMessages @ 14acda570

void __cdecl
FindMessages(TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMMessageVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x100))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x100));
  return;
}

// GetBlackList @ 14acda5c0

void __cdecl TencentCloudChat::GetBlackList(V2TIMValueCallback<TXV2TIMFriendInfoVector> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,param_1,*(code **)(*plVar2 + 0x88));
  return;
}

// GetC2CReceiveMessageOpt @ 14acda600

void __cdecl
TencentCloudChat::GetC2CReceiveMessageOpt
          (TXV2TIMStringVector *param_1,
          V2TIMValueCallback<TXV2TIMReceiveMessageOptInfoVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x98));
  return;
}

// GetConversation @ 14acda650

void __cdecl
TencentCloudChat::GetConversation
          (V2TIMString *param_1,V2TIMValueCallback<V2TIMConversation> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda68d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x28));
  return;
}

// GetConversationGroupList @ 14acda6a0

void __cdecl
TencentCloudChat::GetConversationGroupList(V2TIMValueCallback<TXV2TIMStringVector> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,param_1,*(code **)(*plVar2 + 0x88));
  return;
}

// GetConversationList @ 14acda6e0

void __cdecl
TencentCloudChat::GetConversationList
          (TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMConversationVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda71d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x18));
  return;
}

// GetConversationList @ 14acda730

void __cdecl
TencentCloudChat::GetConversationList
          (ulong64 param_1,uint param_2,V2TIMValueCallback<V2TIMConversationResult> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2,param_3);
  return;
}

// GetConversationListByFilter @ 14acda790

void __cdecl
TencentCloudChat::GetConversationListByFilter
          (V2TIMConversationListFilter *param_1,ulong64 param_2,uint param_3,
          V2TIMValueCallback<V2TIMConversationResult> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// GetFriendApplicationList @ 14acda800

void __cdecl
TencentCloudChat::GetFriendApplicationList
          (V2TIMValueCallback<V2TIMFriendApplicationResult> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda82d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,param_1,*(code **)(*plVar2 + 0x50));
  return;
}

// GetFriendGroups @ 14acda840

void __cdecl
TencentCloudChat::GetFriendGroups
          (TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMFriendGroupVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x98));
  return;
}

// GetFriendList @ 14acda890

void __cdecl TencentCloudChat::GetFriendList(V2TIMValueCallback<TXV2TIMFriendInfoVector> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda8bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*(code **)(*plVar2 + 0x18));
  return;
}

// GetFriendsInfo @ 14acda8d0

void __cdecl
TencentCloudChat::GetFriendsInfo
          (TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMFriendInfoResultVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x20));
  return;
}

// GetGroupApplicationList @ 14acda920

void __cdecl
TencentCloudChat::GetGroupApplicationList(V2TIMValueCallback<V2TIMGroupApplicationResult> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 200))(plVar2,param_1,*(code **)(*plVar2 + 200));
  return;
}

// GetGroupAttributes @ 14acda960

void __cdecl
TencentCloudChat::GetGroupAttributes
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMStringToV2TIMStringMap> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acda9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1,param_2,param_3);
  return;
}

// GetGroupCounters @ 14acda9c0

void __cdecl
TencentCloudChat::GetGroupCounters
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMStringToint64_tMap> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdaa0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2,param_3);
  return;
}

// GetGroupMemberList @ 14acdaa20

void __cdecl
TencentCloudChat::GetGroupMemberList
          (V2TIMString *param_1,uint param_2,ulong64 param_3,
          V2TIMValueCallback<V2TIMGroupMemberInfoResult> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0x78))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// GetGroupMembersInfo @ 14acdaa90

void __cdecl
TencentCloudChat::GetGroupMembersInfo
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMGroupMemberFullInfoVector> *param_3)

{
  code *pcVar1;
  V2TIMManager *pVVar2;
  longlong *plVar3;
  undefined8 uVar4;
  TXV2TIMStringVector local_18;
  
  pVVar2 = V2TIMManager::GetInstance();
  plVar3 = (longlong *)(**(code **)((longlong)*pVVar2 + 0xf0))(pVVar2);
  pcVar1 = *(code **)(*plVar3 + 0x80);
  uVar4 = TXV2TIMStringVector::TXV2TIMStringVector(&local_18,param_2);
  (*pcVar1)(plVar3,param_1,uVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014acdab0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TXV2TIMStringVector::~TXV2TIMStringVector(param_2);
  return;
}

// GetGroupMessageReadMemberList @ 14acdab20

void __cdecl
TencentCloudChat::GetGroupMessageReadMemberList
          (V2TIMMessage *param_1,V2TIMGroupMessageReadMembersFilter param_2,ulong64 param_3,
          uint param_4,V2TIMValueCallback<V2TIMGroupMessageReadMemberList> *param_5)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x120))(plVar2,param_1,param_2,param_3,param_4,param_5);
  return;
}

// GetGroupOnlineMemberCount @ 14acdaba0

void __cdecl
TencentCloudChat::GetGroupOnlineMemberCount
          (V2TIMString *param_1,V2TIMValueCallback<unsigned_int> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdabdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x50));
  return;
}

// GetGroupsInfo @ 14acdabf0

void __cdecl
TencentCloudChat::GetGroupsInfo
          (TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMGroupInfoResultVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdac2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x18));
  return;
}

// GetHistoryMessageList @ 14acdac40

void __cdecl
TencentCloudChat::GetHistoryMessageList
          (V2TIMMessageListGetOption *param_1,V2TIMValueCallback<TXV2TIMMessageVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdac80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa8))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xa8));
  return;
}

// GetJoinedCommunityList @ 14acdac90

void __cdecl
TencentCloudChat::GetJoinedCommunityList(V2TIMValueCallback<TXV2TIMGroupInfoVector> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdacc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1,*(code **)(*plVar2 + 0xe8));
  return;
}

// GetJoinedGroupList @ 14acdacd0

void __cdecl
TencentCloudChat::GetJoinedGroupList(V2TIMValueCallback<TXV2TIMGroupInfoVector> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdacfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
  return;
}

// GetLoginStatus @ 14acdad10

V2TIMLoginStatus __cdecl TencentCloudChat::GetLoginStatus(void)

{
  V2TIMLoginStatus VVar1;
  V2TIMManager *pVVar2;
  
  pVVar2 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VVar1 = (**(code **)((longlong)*pVVar2 + 0x50))(pVVar2,*(code **)((longlong)*pVVar2 + 0x50));
  return VVar1;
}

// GetLoginUser @ 14acdad40

V2TIMString * __cdecl TencentCloudChat::GetLoginUser(V2TIMString *__return_storage_ptr__)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x48))(pVVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMessageExtensions @ 14acdad70

void __cdecl
GetMessageExtensions
          (V2TIMMessage *param_1,V2TIMValueCallback<TXV2TIMMessageExtensionVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x130))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x130));
  return;
}

// GetMessageReadReceipts @ 14acdadc0

void __cdecl
TencentCloudChat::GetMessageReadReceipts
          (TXV2TIMMessageVector *param_1,V2TIMValueCallback<TXV2TIMMessageReceiptVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdae00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x118))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x118));
  return;
}

// GetServerTime @ 14acdae10

long64 __cdecl TencentCloudChat::GetServerTime(void)

{
  V2TIMManager *pVVar1;
  long64 lVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdae28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)((longlong)*pVVar1 + 0x30))(pVVar1,*(code **)((longlong)*pVVar1 + 0x30));
  return lVar2;
}

// GetSignalingInfo @ 14acdae40

V2TIMSignalingInfo * __cdecl
TencentCloudChat::GetSignalingInfo(V2TIMSignalingInfo *__return_storage_ptr__,V2TIMMessage *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
  (**(code **)(*plVar2 + 0x40))(plVar2,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTopicInfoList @ 14acdae90

void __cdecl
TencentCloudChat::GetTopicInfoList
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMValueCallback<TXV2TIMTopicInfoResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdaee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x108))(plVar2,param_1,param_2,param_3);
  return;
}

// GetTotalUnreadMessageCount @ 14acdaef0

void __cdecl
TencentCloudChat::GetTotalUnreadMessageCount(V2TIMValueCallback<unsigned___int64> *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdaf1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,param_1,*(code **)(*plVar2 + 0x60));
  return;
}

// GetUnreadMessageCountByFilter @ 14acdaf30

void __cdecl
TencentCloudChat::GetUnreadMessageCountByFilter
          (V2TIMConversationListFilter *param_1,V2TIMValueCallback<unsigned___int64> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdaf6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x68));
  return;
}

// GetUserStatus @ 14acdaf80

void __cdecl
TencentCloudChat::GetUserStatus
          (TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMUserStatusVector> *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdafb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 200))(pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 200))
  ;
  return;
}

// GetUsersInfo @ 14acdafc0

void __cdecl
TencentCloudChat::GetUsersInfo
          (TXV2TIMStringVector *param_1,V2TIMValueCallback<TXV2TIMUserFullInfoVector> *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdaff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xb8))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xb8));
  return;
}

// GetVersion @ 14acdb000

V2TIMString * __cdecl TencentCloudChat::GetVersion(V2TIMString *__return_storage_ptr__)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x28))(pVVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IncreaseGroupCounter @ 14acdb030

void __cdecl
TencentCloudChat::IncreaseGroupCounter
          (V2TIMString *param_1,V2TIMString *param_2,long64 param_3,
          V2TIMValueCallback<TXV2TIMStringToint64_tMap> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// InitGroupAttributes @ 14acdb0a0

void __cdecl
TencentCloudChat::InitGroupAttributes
          (V2TIMString *param_1,TXV2TIMStringToV2TIMStringMap *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,param_3);
  return;
}

// InitSDK @ 14acdb100

bool __cdecl TencentCloudChat::InitSDK(uint param_1,V2TIMSDKConfig *param_2)

{
  char cVar1;
  code *pcVar2;
  V2TIMManager *pVVar3;
  FRunnable *pFVar4;
  V2TIMSDKConfig *this;
  FRunnableThread *pFVar5;
  V2TIMString local_58;
  V2TIMSDKConfig local_48;
  
  pVVar3 = V2TIMManager::GetInstance();
  pcVar2 = *(code **)((longlong)*pVVar3 + 0x118);
  V2TIMString::V2TIMString(&local_58,"setUIPlatform");
  (*pcVar2)(pVVar3,&local_58);
  V2TIMString::~V2TIMString(&local_58);
  pFVar4 = ::operator_new(0x40);
  if (pFVar4 == (FRunnable *)0x0) {
    pFVar4 = (FRunnable *)0x0;
  }
  else {
    *pFVar4 = (FRunnable)0x0;
    pFVar4[1] = (FRunnable)0x0;
    pFVar4[2] = (FRunnable)0x0;
    pFVar4[3] = (FRunnable)0x0;
    pFVar4[4] = (FRunnable)0x0;
    pFVar4[5] = (FRunnable)0x0;
    pFVar4[6] = (FRunnable)0x0;
    pFVar4[7] = (FRunnable)0x0;
    *pFVar4 = (FRunnable)&___7InitSDKRunner__6B_;
    V2TIMSDKConfig::V2TIMSDKConfig((V2TIMSDKConfig *)(pFVar4 + 2));
  }
  this = (V2TIMSDKConfig *)V2TIMSDKConfig::V2TIMSDKConfig(&local_48,param_2);
  *(uint *)&pFVar4[1].field_0x4 = param_1;
  V2TIMSDKConfig::operator=((V2TIMSDKConfig *)(pFVar4 + 2),this);
  V2TIMSDKConfig::~V2TIMSDKConfig(this);
  pFVar5 = FRunnableThread::Create(pFVar4,L"InitSDKThread",0,TPri_Normal,0xffffffffffffffff,None);
  (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5);
  cVar1 = *(char *)(pFVar4 + 1);
  (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,1);
  (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4,1);
  return cVar1 != '\0';
}

// InsertC2CMessageToLocalStorage @ 14acdb290

V2TIMString * __cdecl
TencentCloudChat::InsertC2CMessageToLocalStorage
          (V2TIMString *__return_storage_ptr__,V2TIMMessage *param_1,V2TIMString *param_2,
          V2TIMString *param_3,V2TIMValueCallback<V2TIMMessage> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0xf8))(plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// InsertGroupMessageToLocalStorage @ 14acdb310

V2TIMString * __cdecl
TencentCloudChat::InsertGroupMessageToLocalStorage
          (V2TIMString *__return_storage_ptr__,V2TIMMessage *param_1,V2TIMString *param_2,
          V2TIMString *param_3,V2TIMValueCallback<V2TIMMessage> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0xf0))(plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// Invite @ 14acdb390

V2TIMString * __cdecl
TencentCloudChat::Invite
          (V2TIMString *__return_storage_ptr__,V2TIMString *param_1,V2TIMString *param_2,
          bool param_3,V2TIMOfflinePushInfo *param_4,int param_5,V2TIMCallback *param_6)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
  (**(code **)(*plVar2 + 0x18))
            (plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,param_6);
  return __return_storage_ptr__;
}

// InviteInGroup @ 14acdb420

V2TIMString * __cdecl
TencentCloudChat::InviteInGroup
          (V2TIMString *__return_storage_ptr__,V2TIMString *param_1,TXV2TIMStringVector *param_2,
          V2TIMString *param_3,bool param_4,int param_5,V2TIMCallback *param_6)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,param_6);
  return __return_storage_ptr__;
}

// InviteUserToGroup @ 14acdb4b0

void __cdecl
InviteUserToGroup(V2TIMString *param_1,TXV2TIMStringVector *param_2,
                 V2TIMValueCallback<TXV2TIMGroupMemberOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2,param_3);
  return;
}

// JoinGroup @ 14acdb510

void __cdecl
TencentCloudChat::JoinGroup(V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdb553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xa0))(pVVar1,param_1,param_2,param_3);
  return;
}

// KickGroupMember @ 14acdb560

void __cdecl
TencentCloudChat::KickGroupMember
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,V2TIMString *param_3,
          V2TIMValueCallback<TXV2TIMGroupMemberOperationResultVector> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0xa8))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// Login @ 14acdb5d0

void __cdecl
TencentCloudChat::Login(V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdb610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x38))(pVVar1,param_1,param_2,param_3);
  return;
}

// Logout @ 14acdb620

void __cdecl TencentCloudChat::Logout(V2TIMCallback *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdb641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x40))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 0x40));
  return;
}

// MarkAllMessageAsRead @ 14acdb650

void __cdecl TencentCloudChat::MarkAllMessageAsRead(V2TIMCallback *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd0))(plVar2,param_1,*(code **)(*plVar2 + 0xd0));
  return;
}

// MarkC2CMessageAsRead @ 14acdb690

void __cdecl TencentCloudChat::MarkC2CMessageAsRead(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xc0))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xc0));
  return;
}

// MarkConversation @ 14acdb6e0

void __cdecl
TencentCloudChat::MarkConversation
          (TXV2TIMStringVector *param_1,ulong64 param_2,bool param_3,
          V2TIMValueCallback<TXV2TIMConversationOperationResultVector> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// MarkGroupMemberList @ 14acdb750

void __cdecl
TencentCloudChat::MarkGroupMemberList
          (V2TIMString *param_1,TXV2TIMStringVector *param_2,uint param_3,bool param_4,
          V2TIMCallback *param_5)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_1,param_2,param_3,param_4,param_5);
  return;
}

// MarkGroupMessageAsRead @ 14acdb7d0

void __cdecl TencentCloudChat::MarkGroupMessageAsRead(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 200))(plVar2,param_1,param_2,*(code **)(*plVar2 + 200));
  return;
}

// ModifyInvitation @ 14acdb820

void __cdecl
TencentCloudChat::ModifyInvitation(V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb86d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2,param_3);
  return;
}

// ModifyMessage @ 14acdb880

void __cdecl
TencentCloudChat::ModifyMessage(V2TIMMessage *param_1,V2TIMCompleteCallback<V2TIMMessage> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xb8));
  return;
}

// MuteGroupMember @ 14acdb8d0

void __cdecl
TencentCloudChat::MuteGroupMember
          (V2TIMString *param_1,V2TIMString *param_2,uint param_3,V2TIMCallback *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0x98))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// PinConversation @ 14acdb940

void __cdecl
TencentCloudChat::PinConversation(V2TIMString *param_1,bool param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdb98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2,param_3);
  return;
}

// QuitGroup @ 14acdb9a0

void __cdecl TencentCloudChat::QuitGroup(V2TIMString *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdb9d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xa8))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xa8));
  return;
}

// RefuseFriendApplication @ 14acdb9e0

void __cdecl
TencentCloudChat::RefuseFriendApplication
          (V2TIMFriendApplication *param_1,V2TIMValueCallback<V2TIMFriendOperationResult> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdba1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x60));
  return;
}

// RefuseGroupApplication @ 14acdba30

void __cdecl
TencentCloudChat::RefuseGroupApplication
          (V2TIMGroupApplication *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd8))(plVar2,param_1,param_2,param_3);
  return;
}

// Reject @ 14acdba90

void __cdecl
TencentCloudChat::Reject(V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,param_3);
  return;
}

// RemoveAdvancedMsgListener @ 14acdbaf0

void __cdecl TencentCloudChat::RemoveAdvancedMsgListener(V2TIMAdvancedMsgListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbb1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
  return;
}

// RemoveConversationListener @ 14acdbb30

void __cdecl TencentCloudChat::RemoveConversationListener(V2TIMConversationListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbb5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
  return;
}

// RemoveFriendListener @ 14acdbb70

void __cdecl TencentCloudChat::RemoveFriendListener(V2TIMFriendshipListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbb9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
  return;
}

// RemoveGroupListener @ 14acdbbb0

void __cdecl TencentCloudChat::RemoveGroupListener(V2TIMGroupListener *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdbbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x90))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 0x90));
  return;
}

// RemoveSDKListener @ 14acdbbe0

void __cdecl TencentCloudChat::RemoveSDKListener(V2TIMSDKListener *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdbc01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x10))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 0x10));
  return;
}

// RemoveSignalingListener @ 14acdbc10

void __cdecl TencentCloudChat::RemoveSignalingListener(V2TIMSignalingListener *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x110))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
  return;
}

// RemoveSimpleMsgListener @ 14acdbc50

void __cdecl TencentCloudChat::RemoveSimpleMsgListener(V2TIMSimpleMsgListener *param_1)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdbc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x60))(pVVar1,param_1,*(code **)((longlong)*pVVar1 + 0x60));
  return;
}

// RenameConversationGroup @ 14acdbc80

void __cdecl
TencentCloudChat::RenameConversationGroup
          (V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))(plVar2,param_1,param_2,param_3);
  return;
}

// RenameFriendGroup @ 14acdbce0

void __cdecl
TencentCloudChat::RenameFriendGroup
          (V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa8))(plVar2,param_1,param_2,param_3);
  return;
}

// RevokeMessage @ 14acdbd40

void __cdecl TencentCloudChat::RevokeMessage(V2TIMMessage *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xb0));
  return;
}

// Run @ 14acdbd90

uint __thiscall InitSDKRunner::Run(InitSDKRunner *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  
  pVVar2 = V2TIMManager::GetInstance();
  bVar1 = (bool)(**(code **)((longlong)*pVVar2 + 0x18))(pVVar2,this->sdkAppID,&this->config);
  this->ReturnValue = bVar1;
  return 0;
}

// SearchFriends @ 14acdbdd0

void __cdecl
TencentCloudChat::SearchFriends
          (V2TIMFriendSearchParam *param_1,
          V2TIMValueCallback<TXV2TIMFriendInfoResultVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbe0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x30));
  return;
}

// SearchGroupMembers @ 14acdbe20

void __cdecl
TencentCloudChat::SearchGroupMembers
          (V2TIMGroupMemberSearchParam *param_1,
          V2TIMValueCallback<TXV2TIMStringToV2TIMGroupMemberFullInfoVectorMap> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x88));
  return;
}

// SearchGroups @ 14acdbe70

void __cdecl
TencentCloudChat::SearchGroups
          (V2TIMGroupSearchParam *param_1,V2TIMValueCallback<TXV2TIMGroupInfoVector> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x20));
  return;
}

// SearchLocalMessages @ 14acdbec0

void __cdecl
TencentCloudChat::SearchLocalMessages
          (V2TIMMessageSearchParam *param_1,V2TIMValueCallback<V2TIMMessageSearchResult> *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdbf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x108))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x108));
  return;
}

// SendC2CCustomMessage @ 14acdbf10

V2TIMString * __cdecl
TencentCloudChat::SendC2CCustomMessage
          (V2TIMString *__return_storage_ptr__,V2TIMBuffer *param_1,V2TIMString *param_2,
          V2TIMSendCallback *param_3)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x70))(pVVar1,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// SendC2CTextMessage @ 14acdbf70

V2TIMString * __cdecl
TencentCloudChat::SendC2CTextMessage
          (V2TIMString *__return_storage_ptr__,V2TIMString *param_1,V2TIMString *param_2,
          V2TIMSendCallback *param_3)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x68))(pVVar1,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// SendGroupCustomMessage @ 14acdbfd0

V2TIMString * __cdecl
TencentCloudChat::SendGroupCustomMessage
          (V2TIMString *__return_storage_ptr__,V2TIMBuffer *param_1,V2TIMString *param_2,
          V2TIMMessagePriority param_3,V2TIMSendCallback *param_4)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x80))
            (pVVar1,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// SendGroupTextMessage @ 14acdc040

V2TIMString * __cdecl
TencentCloudChat::SendGroupTextMessage
          (V2TIMString *__return_storage_ptr__,V2TIMString *param_1,V2TIMString *param_2,
          V2TIMMessagePriority param_3,V2TIMSendCallback *param_4)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
  (**(code **)((longlong)*pVVar1 + 0x78))
            (pVVar1,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// SendMessage @ 14acdc0b0

V2TIMString * __cdecl
TencentCloudChat::SendMessage
          (V2TIMString *__return_storage_ptr__,V2TIMMessage *param_1,V2TIMString *param_2,
          V2TIMString *param_3,V2TIMMessagePriority param_4,bool param_5,
          V2TIMOfflinePushInfo *param_6,V2TIMSendCallback *param_7)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x88))
            (plVar2,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return __return_storage_ptr__;
}

// SendMessageReadReceipts @ 14acdc150

void __cdecl
TencentCloudChat::SendMessageReadReceipts(TXV2TIMMessageVector *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x110))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x110));
  return;
}

// SetC2CReceiveMessageOpt @ 14acdc1a0

void __cdecl
TencentCloudChat::SetC2CReceiveMessageOpt
          (TXV2TIMStringVector *param_1,V2TIMReceiveMessageOpt param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc1ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x90))(plVar2,param_1,param_2,param_3);
  return;
}

// SetConversationCustomData @ 14acdc200

void __cdecl
TencentCloudChat::SetConversationCustomData
          (TXV2TIMStringVector *param_1,V2TIMBuffer *param_2,
          V2TIMValueCallback<TXV2TIMConversationOperationResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1,param_2,param_3);
  return;
}

// SetConversationDraft @ 14acdc260

void __cdecl
TencentCloudChat::SetConversationDraft
          (V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2,param_3);
  return;
}

// SetFriendApplicationRead @ 14acdc2c0

void __cdecl TencentCloudChat::SetFriendApplicationRead(V2TIMCallback *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc2ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1,*(code **)(*plVar2 + 0x70));
  return;
}

// SetFriendInfo @ 14acdc300

void __cdecl TencentCloudChat::SetFriendInfo(V2TIMFriendInfo *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x100))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x28));
  return;
}

// SetGroupApplicationRead @ 14acdc350

void __cdecl TencentCloudChat::SetGroupApplicationRead(V2TIMCallback *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xe0))(plVar2,param_1,*(code **)(*plVar2 + 0xe0));
  return;
}

// SetGroupAttributes @ 14acdc390

void __cdecl
TencentCloudChat::SetGroupAttributes
          (V2TIMString *param_1,TXV2TIMStringToV2TIMStringMap *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,param_3);
  return;
}

// SetGroupCounters @ 14acdc3f0

void __cdecl
TencentCloudChat::SetGroupCounters
          (V2TIMString *param_1,TXV2TIMStringToint64_tMap *param_2,
          V2TIMValueCallback<TXV2TIMStringToint64_tMap> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_2,param_3);
  return;
}

// SetGroupInfo @ 14acdc450

void __cdecl TencentCloudChat::SetGroupInfo(V2TIMGroupInfo *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc48d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x28));
  return;
}

// SetGroupMemberInfo @ 14acdc4a0

void __cdecl
TencentCloudChat::SetGroupMemberInfo
          (V2TIMString *param_1,V2TIMGroupMemberFullInfo *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x90))(plVar2,param_1,param_2,param_3);
  return;
}

// SetGroupMemberRole @ 14acdc500

void __cdecl
TencentCloudChat::SetGroupMemberRole
          (V2TIMString *param_1,V2TIMString *param_2,uint param_3,V2TIMCallback *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// SetGroupReceiveMessageOpt @ 14acdc570

void __cdecl
SetGroupReceiveMessageOpt
          (V2TIMString *param_1,V2TIMReceiveMessageOpt param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc5bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2,param_3);
  return;
}

// SetMessageExtensions @ 14acdc5d0

void __cdecl
TencentCloudChat::SetMessageExtensions
          (V2TIMMessage *param_1,TXV2TIMMessageExtensionVector *param_2,
          V2TIMValueCallback<TXV2TIMMessageExtensionResultVector> *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x128))(plVar2,param_1,param_2,param_3);
  return;
}

// SetOfflinePushConfig @ 14acdc630

void __cdecl
TencentCloudChat::SetOfflinePushConfig(V2TIMOfflinePushConfig *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0x108))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2,*(code **)(*plVar2 + 8));
  return;
}

// SetSelfInfo @ 14acdc680

void __cdecl TencentCloudChat::SetSelfInfo(V2TIMUserFullInfo *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdc6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xc0))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xc0));
  return;
}

// SetSelfStatus @ 14acdc6c0

void __cdecl TencentCloudChat::SetSelfStatus(V2TIMUserStatus *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdc6f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xd0))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xd0));
  return;
}

// SetTopicInfo @ 14acdc700

void __cdecl TencentCloudChat::SetTopicInfo(V2TIMTopicInfo *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x100))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0x100));
  return;
}

// SubscribeUnreadMessageCountByFilter @ 14acdc750

void __cdecl
TencentCloudChat::SubscribeUnreadMessageCountByFilter(V2TIMConversationListFilter *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1,*(code **)(*plVar2 + 0x70));
  return;
}

// SubscribeUserStatus @ 14acdc790

void __cdecl
TencentCloudChat::SubscribeUserStatus(TXV2TIMStringVector *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdc7c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xd8))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xd8));
  return;
}

// TransferGroupOwner @ 14acdc7d0

void __cdecl
TencentCloudChat::TransferGroupOwner
          (V2TIMString *param_1,V2TIMString *param_2,V2TIMCallback *param_3)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf0))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xc0))(plVar2,param_1,param_2,param_3);
  return;
}

// TranslateText @ 14acdc830

void __cdecl
TencentCloudChat::TranslateText
          (TXV2TIMStringVector *param_1,V2TIMString *param_2,V2TIMString *param_3,
          V2TIMValueCallback<TXV2TIMStringToV2TIMStringMap> *param_4)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
  (**(code **)(*plVar2 + 0x140))(plVar2,param_1,param_2,param_3,param_4);
  return;
}

// UnInitSDK @ 14acdc8a0

void __cdecl TencentCloudChat::UnInitSDK(void)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdc8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0x20))(pVVar1,*(code **)((longlong)*pVVar1 + 0x20));
  return;
}

// UnsubscribeUnreadMessageCountByFilter @ 14acdc8d0

void __cdecl
TencentCloudChat::UnsubscribeUnreadMessageCountByFilter(V2TIMConversationListFilter *param_1)

{
  V2TIMManager *pVVar1;
  longlong *plVar2;
  
  pVVar1 = V2TIMManager::GetInstance();
  plVar2 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
                    /* WARNING: Could not recover jumptable at 0x00014acdc8fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,param_1,*(code **)(*plVar2 + 0x78));
  return;
}

// UnsubscribeUserStatus @ 14acdc910

void __cdecl
TencentCloudChat::UnsubscribeUserStatus(TXV2TIMStringVector *param_1,V2TIMCallback *param_2)

{
  V2TIMManager *pVVar1;
  
  pVVar1 = V2TIMManager::GetInstance();
                    /* WARNING: Could not recover jumptable at 0x00014acdc943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pVVar1 + 0xe0))
            (pVVar1,param_1,param_2,*(code **)((longlong)*pVVar1 + 0xe0));
  return;
}

// IMPLEMENT_MODULE_TencentCloudChat @ 14acdc950

void __cdecl IMPLEMENT_MODULE_TencentCloudChat(void)

{
  return;
}

