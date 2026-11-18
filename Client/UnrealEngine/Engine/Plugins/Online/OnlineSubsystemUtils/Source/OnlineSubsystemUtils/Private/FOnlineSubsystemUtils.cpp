// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// FOnlineSubsystemUtils @ 14ec52610

FOnlineSubsystemUtils * __thiscall
FOnlineSubsystemUtils::FOnlineSubsystemUtils(FOnlineSubsystemUtils *this)

{
  this->bShouldTryOnlinePIE = true;
  this->_padding_ = (longlong)&___7FOnlineSubsystemUtils__6B_;
  *(undefined8 *)&this->OnExternalUIChangeDelegate = 0;
  *(undefined8 *)&(this->OnExternalUIChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnExternalUIChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ExternalUIDelegateHandles = 0;
  *(undefined8 *)&(this->ExternalUIDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalUIDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalUIDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x48 = 0;
  (this->OnOnlineSubsystemCreatedDelegateHandle).ID = 0;
  *(undefined8 *)&this->SubsystemNameToHash = 0;
  *(undefined8 *)&(this->SubsystemNameToHash).field_0x8 = 0;
  *(undefined8 *)&(this->SubsystemNameToHash).field_0x20 = 0;
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x28 = 0;
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x34 = 0;
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubsystemNameToHash).field_0x40 = 0;
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x48 = 0;
  *(undefined8 *)&this->HashToSubsystemName = 0;
  *(undefined8 *)&(this->HashToSubsystemName).field_0x8 = 0;
  *(undefined8 *)&(this->HashToSubsystemName).field_0x20 = 0;
  *(undefined4 *)&(this->HashToSubsystemName).field_0x28 = 0;
  *(undefined4 *)&(this->HashToSubsystemName).field_0x2c = 0x80;
  *(undefined4 *)&(this->HashToSubsystemName).field_0x34 = 0;
  *(undefined4 *)&(this->HashToSubsystemName).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HashToSubsystemName).field_0x40 = 0;
  *(undefined4 *)&(this->HashToSubsystemName).field_0x48 = 0;
  return this;
}

// ~FOnlineSubsystemUtils @ 14ec56190

void __thiscall FOnlineSubsystemUtils::~FOnlineSubsystemUtils(FOnlineSubsystemUtils *this)

{
  FDelegateHandle FVar1;
  void *pvVar2;
  
  FVar1.ID = (this->OnOnlineSubsystemCreatedDelegateHandle).ID;
  this->_padding_ = (longlong)&___7FOnlineSubsystemUtils__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FOnlineSubsystemDelegates::OnOnlineSubsystemCreated,FVar1);
  }
  *(undefined4 *)&(this->HashToSubsystemName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HashToSubsystemName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_char,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HashToSubsystemName);
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SubsystemNameToHash).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubsystemNameToHash);
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExternalUIDelegateHandles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalUIDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExternalUIChangeDelegate);
  pvVar2 = *(void **)&(this->OnExternalUIChangeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalUIChangeDelegate);
  this->_padding_ = (longlong)&___7IOnlineSubsystemUtils__6B_;
  return;
}

// operator() @ 14ec582e0

void __thiscall
`FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>::operator()
          (void *this,IOnlineSubsystem *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FDelegateHandle *pFVar5;
  TPairInitializer<FName_&&,FDelegateHandle_const_&> local_res10;
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined8 local_30;
  FDelegateHandle **local_28;
  
  (**(code **)(param_1->_padding_ + 0x70))(param_1,&local_40);
  if (local_40 != (longlong *)0x0) {
    lVar1 = *(longlong *)this;
    pFVar4 = (FName *)(**(code **)(param_1->_padding_ + 0x10))(param_1,local_res20);
    pFVar5 = TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
             ::Find((TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
                     *)(lVar1 + 0x28),*pFVar4);
    if ((pFVar5 != (FDelegateHandle *)0x0) && (pFVar5->ID != 0)) {
      if ((local_40 == (longlong *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*local_40 + 0x90))(local_40,pFVar5);
    }
    if ((local_40 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*local_40 + 0x88))(local_40,&local_res10.Value,*(longlong *)this + 0x10);
    lVar1 = *(longlong *)this;
    local_30 = (**(code **)(param_1->_padding_ + 0x10))(param_1,local_48);
    local_28 = &local_res10.Value;
    TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,FDelegateHandle_const_&>_>
              ((TSet<TTuple<FName,FDelegateHandle>,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x28),&local_res10,(bool *)&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// CreateForeignUniqueNetId @ 14ec69980

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FOnlineSubsystemUtils::CreateForeignUniqueNetId
          (FOnlineSubsystemUtils *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__,
          FString *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FUniqueNetIdString *pFVar3;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar4;
  TRawPtrProxy<FUniqueNetIdString> local_res10;
  TSharedRef<FUniqueNetIdString_const_,1> local_18;
  
  pFVar3 = ::operator_new(0x30);
  if (pFVar3 == (FUniqueNetIdString *)0x0) {
    pFVar3 = (FUniqueNetIdString *)0x0;
  }
  else {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FUniqueNetIdString__6B_;
    ::FString::FString(&pFVar3->UniqueNetIdStr,param_1);
    pFVar3->Type = param_2;
    if (((pFVar3->_padding_ != 0) && (pFVar3->_padding_ != 0)) &&
       (0 < *(int *)(pFVar3->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  local_res10.Object = pFVar3;
  TSharedRef<FUniqueNetIdString_const_,1>::
  TSharedRef<FUniqueNetIdString_const_,1><FUniqueNetIdString>(&local_18,&local_res10);
  __return_storage_ptr__->Object = (FUniqueNetId *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateNameHashes @ 14ec69a70

void __thiscall FOnlineSubsystemUtils::CreateNameHashes(FOnlineSubsystemUtils *this)

{
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *this_00;
  TMap<unsigned_char,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>_>
  *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined1 local_2b0;
  undefined1 local_2af;
  undefined1 local_2ae;
  undefined1 local_2ad;
  undefined1 local_2ac [8];
  undefined1 local_2a4 [8];
  undefined1 local_29c [8];
  undefined1 local_294 [8];
  undefined1 local_28c [8];
  undefined1 local_284 [8];
  undefined1 local_27c [8];
  undefined1 local_274 [8];
  undefined1 local_26c [8];
  undefined1 local_264 [8];
  undefined1 local_25c [8];
  undefined1 local_254 [8];
  undefined1 local_24c [8];
  undefined1 local_244 [8];
  undefined1 local_23c [8];
  undefined1 local_234 [12];
  FName *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  FName *local_210;
  FName *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  FName *local_1f0;
  FName *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  FName *local_1d0;
  FName *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  FName *local_1b0;
  FName *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  FName *local_190;
  FName *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  FName *local_170;
  FName *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  FName *local_150;
  FName *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  FName *local_130;
  FName *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  FName *local_110;
  FName *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  FName *local_f0;
  FName *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  FName *local_d0;
  FName *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName *local_b0;
  FName *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  FName *local_90;
  FName *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  FName *local_70;
  FName *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  FName *local_50;
  FName *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  FName *local_30;
  
  this_00 = &this->SubsystemNameToHash;
  local_res8[0] = 1;
  local_220 = local_res8;
  local_228 = &NULL_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_2ac,
             (bool *)&local_228);
  local_210 = &NULL_SUBSYSTEM;
  local_218 = local_res8;
  this_01 = &this->HashToSubsystemName;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_2ac + 4),
             (bool *)&local_218);
  local_200 = local_res10;
  local_res10[0] = 2;
  local_208 = &MCP_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_2a4,
             (bool *)&local_208);
  local_1f8 = local_res10;
  local_1f0 = &MCP_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_2a4 + 4),
             (bool *)&local_1f8);
  local_1e0 = local_res18;
  local_res18[0] = 3;
  local_1e8 = &STEAM_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_29c,
             (bool *)&local_1e8);
  local_1d8 = local_res18;
  local_1d0 = &STEAM_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_29c + 4),
             (bool *)&local_1d8);
  local_1c0 = local_res20;
  local_res20[0] = 4;
  local_1c8 = &PS4_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_294,
             (bool *)&local_1c8);
  local_1b8 = local_res20;
  local_1b0 = &PS4_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_294 + 4),
             (bool *)&local_1b8);
  local_1a0 = &local_2b8;
  local_2b8 = 5;
  local_1a8 = &GOOGLE_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_28c,
             (bool *)&local_1a8);
  local_198 = &local_2b8;
  local_190 = &GOOGLE_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_28c + 4),
             (bool *)&local_198);
  local_180 = &local_2b7;
  local_2b7 = 6;
  local_188 = &GOOGLEPLAY_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_284,
             (bool *)&local_188);
  local_178 = &local_2b7;
  local_170 = &GOOGLEPLAY_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_284 + 4),
             (bool *)&local_178);
  local_160 = &local_2b6;
  local_2b6 = 7;
  local_168 = &FACEBOOK_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_27c,
             (bool *)&local_168);
  local_158 = &local_2b6;
  local_150 = &FACEBOOK_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_27c + 4),
             (bool *)&local_158);
  local_140 = &local_2b5;
  local_2b5 = 8;
  local_148 = &IOS_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_274,
             (bool *)&local_148);
  local_138 = &local_2b5;
  local_130 = &IOS_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_274 + 4),
             (bool *)&local_138);
  local_120 = &local_2b4;
  local_2b4 = 9;
  local_128 = &APPLE_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_26c,
             (bool *)&local_128);
  local_118 = &local_2b4;
  local_110 = &APPLE_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_26c + 4),
             (bool *)&local_118);
  local_100 = &local_2b3;
  local_2b3 = 10;
  local_108 = &TENCENT_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_264,
             (bool *)&local_108);
  local_f8 = &local_2b3;
  local_f0 = &TENCENT_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_264 + 4),
             (bool *)&local_f8);
  local_e0 = &local_2b2;
  local_2b2 = 0xb;
  local_e8 = &NINTENDO_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_25c,
             (bool *)&local_e8);
  local_d8 = &local_2b2;
  local_d0 = &NINTENDO_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_25c + 4),
             (bool *)&local_d8);
  local_c0 = &local_2b1;
  local_2b1 = 0xc;
  local_c8 = &AMAZON_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_254,
             (bool *)&local_c8);
  local_b8 = &local_2b1;
  local_b0 = &AMAZON_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_254 + 4),
             (bool *)&local_b8);
  local_a0 = &local_2b0;
  local_2b0 = 0xd;
  local_a8 = &GAMECIRCLE_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_24c,
             (bool *)&local_a8);
  local_98 = &local_2b0;
  local_90 = &GAMECIRCLE_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_24c + 4),
             (bool *)&local_98);
  local_80 = &local_2af;
  local_2af = 0xe;
  local_88 = &THUNDERHEAD_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_244,
             (bool *)&local_88);
  local_78 = &local_2af;
  local_70 = &THUNDERHEAD_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_244 + 4),
             (bool *)&local_78);
  local_60 = &local_2ae;
  local_2ae = 0xf;
  local_68 = &ONESTORE_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_23c,
             (bool *)&local_68);
  local_58 = &local_2ae;
  local_50 = &ONESTORE_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_23c + 4),
             (bool *)&local_58);
  local_40 = &local_2ad;
  local_2ad = 0x10;
  local_48 = &PS4SERVER_SUBSYSTEM;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_char_const_&>_>
            ((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,unsigned_char_const_&> *)local_234,
             (bool *)&local_48);
  local_38 = &local_2ad;
  local_30 = &PS4SERVER_SUBSYSTEM;
  TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_char_const_&,FName_const_&>_>
            ((TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
              *)this_01,(TPairInitializer<unsigned_char_const_&,FName_const_&> *)(local_234 + 4),
             (bool *)&local_38);
  if (*(int *)&(this->SubsystemNameToHash).field_0x8 -
      *(int *)&(this->SubsystemNameToHash).field_0x34 != 0x10) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1549396141928349943>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineSubsystemUtilsModule.cpp"
                       ,0xf7,"SubsystemNameToHash.Num() == (HashId - 1)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&(this->HashToSubsystemName).field_0x8 -
      *(int *)&(this->HashToSubsystemName).field_0x34 != 0x10) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1549396141928349944>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineSubsystemUtilsModule.cpp"
                       ,0xf8,"HashToSubsystemName.Num() == (HashId - 1)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetOnlineIdentifier @ 14ec76420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FOnlineSubsystemUtils::GetOnlineIdentifier
          (FOnlineSubsystemUtils *this,FWorldContext *param_1,FName param_2)

{
  undefined8 in_R9;
  
  *(undefined8 *)param_1 = in_R9;
  return (FName)param_1;
}

// GetOnlineIdentifier @ 14ec76430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FOnlineSubsystemUtils::GetOnlineIdentifier
          (FOnlineSubsystemUtils *this,UWorld *param_1,FName param_2)

{
  longlong in_R9;
  
  param_1->_padding_ = in_R9;
  return (FName)param_1;
}

// GetReplicationHashForSubsystem @ 14ec78ab0

uchar __thiscall
FOnlineSubsystemUtils::GetReplicationHashForSubsystem(FOnlineSubsystemUtils *this,FName param_1)

{
  uchar *puVar1;
  
  puVar1 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::Find((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                   *)&this->SubsystemNameToHash,param_1);
  if (puVar1 != (uchar *)0x0) {
    return *puVar1;
  }
  return '\0';
}

// GetSubsystemFromReplicationHash @ 14ec79020

FName __thiscall
FOnlineSubsystemUtils::GetSubsystemFromReplicationHash(FOnlineSubsystemUtils *this,uchar param_1)

{
  FName *pFVar1;
  undefined7 in_register_00000011;
  FName FVar2;
  uchar in_R8B;
  
  FVar2._1_7_ = in_register_00000011;
  FVar2.ComparisonIndex.Value._0_1_ = param_1;
  pFVar1 = TMapBase<unsigned_char,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>_>
           ::Find((TMapBase<unsigned_char,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>_>
                   *)&this->HashToSubsystemName,in_R8B);
  if (pFVar1 != (FName *)0x0) {
    *(FName *)FVar2 = *pFVar1;
    return FVar2;
  }
  *(FName *)FVar2 = (FName)0x0;
  return FVar2;
}

// OnOnlineSubsystemCreated @ 14ec89510

void __thiscall
FOnlineSubsystemUtils::OnOnlineSubsystemCreated
          (FOnlineSubsystemUtils *this,IOnlineSubsystem *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnExternalUIChangeDelegate,&local_28);
  if (((*(int *)&(this->OnExternalUIChangeDelegate).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnExternalUIChangeDelegate).field_0x8,
      plVar1 != (longlong *)0x0)) && (cVar3 = (**(code **)(*plVar1 + 0x38))(), cVar3 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    (**(code **)(param_1->_padding_ + 0x70))(param_1,&local_38);
    if (local_38 != (longlong *)0x0) {
      if ((local_38 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*local_38 + 0x88))(local_38,local_res8,&this->OnExternalUIChangeDelegate);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SetEngineExternalUIBinding @ 14ec97850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOnlineSubsystemUtils::SetEngineExternalUIBinding
          (FOnlineSubsystemUtils *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  FName *pFVar1;
  FOnlineSubsystemModule *this_00;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  FName local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  FOnlineSubsystemUtils *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnExternalUIChangeDelegate,param_1);
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__SetEngineExternalUIBinding_FOnlineSubsystemUtils__UEAAXAEBV__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy_____Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>,void,IOnlineSubsystem_*>
                ::Call;
  local_30 = this;
  pFVar1 = ::FName::FName(local_58,"OnlineSubsystem");
  this_00 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar1);
  FOnlineSubsystemModule::EnumerateOnlineSubsystems
            (this_00,(TFunction<void___cdecl(IOnlineSubsystem_*)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar2 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar2 = local_20;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return;
}

