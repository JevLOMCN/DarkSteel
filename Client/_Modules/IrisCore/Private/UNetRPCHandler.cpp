// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// StaticClass @ 14425dbb0

UClass * __cdecl UNetRPCHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetRPCHandler",
               &Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton,
               StaticRegisterNativesUNetRPCHandler,0x40,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetRPCHandler>,
               InternalVTableHelperCtorCaller<UNetRPCHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton;
}

// UNetRPCHandler @ 144267ab0

UNetRPCHandler * __thiscall
UNetRPCHandler::UNetRPCHandler(UNetRPCHandler *this,FVTableHelper *param_1)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this,param_1);
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  return this;
}

// UNetRPCHandler @ 144267af0

UNetRPCHandler * __thiscall UNetRPCHandler::UNetRPCHandler(UNetRPCHandler *this)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this);
  this->ReplicationSystem = (UReplicationSystem *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  return this;
}

// ~UNetRPCHandler @ 144269420

void __thiscall UNetRPCHandler::~UNetRPCHandler(UNetRPCHandler *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  return;
}

// CreateNetBlob @ 1442726c0

TRefCountPtr<UE::Net::FNetBlob> __thiscall
UNetRPCHandler::CreateNetBlob(UNetRPCHandler *this,FNetBlobCreationInfo *param_1)

{
  FNetBlobCreationInfo this_00;
  FNetBlobCreationInfo *in_R8;
  
  this_00 = (FNetBlobCreationInfo)::operator_new(0x70);
  if (this_00 != (FNetBlobCreationInfo)0x0) {
    UE::Net::FNetObjectAttachment::FNetObjectAttachment((FNetObjectAttachment *)this_00,in_R8);
    *param_1 = this_00;
    *(undefined ***)this_00 = &___7FNetRPC_Private_Net_UE__6B_;
    *(undefined4 *)&((FNetObjectAttachment *)((longlong)this_00 + 0x50))->_padding_ = 0;
    *(longlong *)((longlong)this_00 + 0x60) = 0;
    *(longlong *)((longlong)this_00 + 0x68) = 0;
    *(longlong *)((longlong)this_00 + 0x58) = 0;
    *(int *)((longlong)this_00 + 0x28) = *(int *)((longlong)this_00 + 0x28) + 1;
    return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
  }
  param_1->Type = 0;
  param_1->Flags = None;
  return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
}

// CreateRPC @ 144274860

TRefCountPtr<UE::Net::Private::FNetRPC> __thiscall
UNetRPCHandler::CreateRPC
          (UNetRPCHandler *this,FNetObjectReference *param_1,UFunction *param_2,void *param_3)

{
  FNetRPC *pFVar1;
  FNetBlobCreationInfo local_res8 [4];
  void *in_stack_00000028;
  
  local_res8[0].Type = (uint)this->_padding_;
  local_res8[0].Flags = *(uint *)((longlong)param_3 + 0xb0) >> 7 & Reliable;
  if ((*(uint *)((longlong)param_3 + 0xb0) >> 0xe & 1) == 0) {
    local_res8[0].Flags = local_res8[0].Flags | Ordered;
  }
  pFVar1 = UE::Net::Private::FNetRPC::Create
                     (this->ReplicationSystem,local_res8,(FNetObjectReference *)param_2,param_3,
                      in_stack_00000028);
  (param_1->RefHandle).field0_0x0.Value = (ulong64)pFVar1;
  if (pFVar1 != (FNetRPC *)0x0) {
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
  }
  return (TRefCountPtr<UE::Net::Private::FNetRPC>)(FNetRPC *)param_1;
}

// GetPrivateStaticClass @ 14427c110

UClass * __cdecl UNetRPCHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetRPCHandler",
               &Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton,
               StaticRegisterNativesUNetRPCHandler,0x40,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetRPCHandler>,
               InternalVTableHelperCtorCaller<UNetRPCHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetRPCHandler.InnerSingleton;
}

// Init @ 14427e120

void __thiscall UNetRPCHandler::Init(UNetRPCHandler *this,UReplicationSystem *param_1)

{
  this->ReplicationSystem = param_1;
  return;
}

// OnNetBlobReceived @ 144285320

void __thiscall
UNetRPCHandler::OnNetBlobReceived
          (UNetRPCHandler *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2)

{
  FReplicationSystemInternal *pFVar1;
  FNetRPCCallContext local_18;
  
  local_18.NetContext = param_1;
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal((UReplicationSystem *)this->_padding_);
  local_18.ForwardNetRPCCallDelegate = &pFVar1->ForwardNetRPCCallMulticastDelegate;
  UE::Net::Private::FNetRPC::CallFunction((FNetRPC *)param_2->Reference,&local_18);
  return;
}

// StaticRegisterNativesUNetRPCHandler @ 144297a90

void __cdecl UNetRPCHandler::StaticRegisterNativesUNetRPCHandler(void)

{
  return;
}

