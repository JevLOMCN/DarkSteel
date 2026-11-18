// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// StaticClass @ 14425df50

UClass * __cdecl USequentialPartialNetBlobHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SequentialPartialNetBlobHandler",
               &Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton,
               StaticRegisterNativesUSequentialPartialNetBlobHandler,0x48,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequentialPartialNetBlobHandler>,
               InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton;
}

// USequentialPartialNetBlobHandler @ 1442688a0

USequentialPartialNetBlobHandler * __thiscall
USequentialPartialNetBlobHandler::USequentialPartialNetBlobHandler
          (USequentialPartialNetBlobHandler *this)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->Config = (USequentialPartialNetBlobHandlerConfig *)0x0;
  return this;
}

// USequentialPartialNetBlobHandler @ 1442688e0

USequentialPartialNetBlobHandler * __thiscall
USequentialPartialNetBlobHandler::USequentialPartialNetBlobHandler
          (USequentialPartialNetBlobHandler *this,FVTableHelper *param_1)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  return this;
}

// ~USequentialPartialNetBlobHandler @ 144269860

void __thiscall
USequentialPartialNetBlobHandler::~USequentialPartialNetBlobHandler
          (USequentialPartialNetBlobHandler *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  return;
}

// CreateNetBlob @ 144272750

TRefCountPtr<UE::Net::FNetBlob> __thiscall
USequentialPartialNetBlobHandler::CreateNetBlob
          (USequentialPartialNetBlobHandler *this,FNetBlobCreationInfo *param_1)

{
  FPartialNetBlob *this_00;
  FNetBlobCreationInfo FVar1;
  FNetBlobCreationInfo *in_R8;
  
  this_00 = ::operator_new(0xc0);
  if (this_00 == (FPartialNetBlob *)0x0) {
    param_1->Type = 0;
    param_1->Flags = None;
  }
  else {
    FVar1 = (FNetBlobCreationInfo)UE::Net::FPartialNetBlob::FPartialNetBlob(this_00,in_R8);
    *param_1 = FVar1;
    if (FVar1 != (FNetBlobCreationInfo)0x0) {
      *(int *)((longlong)FVar1 + 0x28) = *(int *)((longlong)FVar1 + 0x28) + 1;
      return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
    }
  }
  return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
}

// GetPrivateStaticClass @ 14427c580

UClass * __cdecl USequentialPartialNetBlobHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SequentialPartialNetBlobHandler",
               &Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton,
               StaticRegisterNativesUSequentialPartialNetBlobHandler,0x48,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USequentialPartialNetBlobHandler>,
               InternalVTableHelperCtorCaller<USequentialPartialNetBlobHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.InnerSingleton;
}

// Init @ 14427e380

void __thiscall
USequentialPartialNetBlobHandler::Init
          (USequentialPartialNetBlobHandler *this,
          FSequentialPartialNetBlobHandlerInitParams *param_1)

{
  this->ReplicationSystem = param_1->ReplicationSystem;
  this->Config = param_1->Config;
  return;
}

// OnNetBlobReceived @ 144285360

void __thiscall
USequentialPartialNetBlobHandler::OnNetBlobReceived
          (USequentialPartialNetBlobHandler *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2)

{
  FName FVar1;
  undefined1 local_res10 [24];
  
  `USequentialPartialNetBlobHandler::OnNetBlobReceived'::__l2::<lambda_1>::operator()(local_res10);
  FVar1 = UE::Net::GNetError_UnsupportedNetBlob;
  UE::Net::FNetSerializationContext::SetBitStreamOverflow(param_1);
  UE::Net::FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
  return;
}

// SplitNetBlob @ 144295750

bool __thiscall
USequentialPartialNetBlobHandler::SplitNetBlob
          (USequentialPartialNetBlobHandler *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_3,
          FNetDebugName *param_4)

{
  FReplicationStateDescriptor *pFVar1;
  bool bVar2;
  FNetBlobCreationInfo local_res8 [4];
  FSplitParams local_38;
  
  local_res8[0].Type = (uint)this->_padding_;
  local_res8[0].Flags = (param_2->Reference->CreationInfo).Flags & (Ordered|Reliable);
  local_38.NetObjectReference.RefHandle.field0_0x0.Value = (FNetRefHandle_u_0)0x0;
  local_38.NetObjectReference.PathToken.field0_0x0 = (FNetToken_u_0)0x0;
  local_38.NetObjectReference.Traits = None;
  local_38.DebugName.Name = (wchar_t *)0x0;
  local_38.DebugName._8_8_ = local_38.DebugName._8_8_ & 0xffffffff00000000;
  local_38.bSerializeWithObject = false;
  local_38._41_7_ = 0;
  local_38.MaxPartBitCount = this->Config->MaxPartBitCount;
  local_38.MaxPartCount = this->Config->MaxPartCount;
  if ((param_4 != (FNetDebugName *)0x0) ||
     ((pFVar1 = (param_2->Reference->BlobDescriptor).Reference,
      pFVar1 != (FReplicationStateDescriptor *)0x0 &&
      (param_4 = pFVar1->DebugName, param_4 != (FNetDebugName *)0x0)))) {
    local_38.DebugName.Name = param_4->Name;
    local_38.DebugName._8_8_ = *(undefined8 *)&param_4->DebugNameId;
  }
  bVar2 = UE::Net::FPartialNetBlob::SplitNetBlob(param_1,local_res8,&local_38,param_2,param_3);
  return bVar2;
}

// SplitNetBlob @ 1442957f0

bool __thiscall
USequentialPartialNetBlobHandler::SplitNetBlob
          (USequentialPartialNetBlobHandler *this,FNetSerializationContext *param_1,
          FNetObjectReference *param_2,TRefCountPtr<UE::Net::FNetBlob> *param_3,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_4,
          FNetDebugName *param_5)

{
  FReplicationStateDescriptor *pFVar1;
  bool bVar2;
  FNetBlobCreationInfo local_res8 [4];
  FSplitParams local_38;
  
  local_res8[0].Type = (uint)this->_padding_;
  local_38.NetObjectReference.RefHandle.field0_0x0._s_0 = (param_2->RefHandle).field0_0x0;
  local_38.NetObjectReference.PathToken.field0_0x0 = (param_2->PathToken).field0_0x0;
  local_38.NetObjectReference.Traits = param_2->Traits;
  local_res8[0].Flags = (param_3->Reference->CreationInfo).Flags & (Ordered|Reliable);
  local_38.DebugName.Name = (wchar_t *)0x0;
  local_38.DebugName._8_8_ = local_38.DebugName._8_8_ & 0xffffffff00000000;
  local_38.MaxPartBitCount = this->Config->MaxPartBitCount;
  local_38.MaxPartCount = this->Config->MaxPartCount;
  local_38.bSerializeWithObject = true;
  local_38._41_7_ = 0;
  if ((param_5 != (FNetDebugName *)0x0) ||
     ((pFVar1 = (param_3->Reference->BlobDescriptor).Reference,
      pFVar1 != (FReplicationStateDescriptor *)0x0 &&
      (param_5 = pFVar1->DebugName, param_5 != (FNetDebugName *)0x0)))) {
    local_38.DebugName.Name = param_5->Name;
    local_38.DebugName._8_8_ = *(undefined8 *)&param_5->DebugNameId;
  }
  bVar2 = UE::Net::FPartialNetBlob::SplitNetBlob(param_1,local_res8,&local_38,param_3,param_4);
  return bVar2;
}

// StaticRegisterNativesUSequentialPartialNetBlobHandler @ 144297af0

void __cdecl
USequentialPartialNetBlobHandler::StaticRegisterNativesUSequentialPartialNetBlobHandler(void)

{
  return;
}

// operator() @ 1504b4b70

bool __thiscall
`USequentialPartialNetBlobHandler::OnNetBlobReceived'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6107880254431297624>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6107880254431297624>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

