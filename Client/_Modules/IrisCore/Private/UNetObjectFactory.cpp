// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 28

// StaticClass @ 14425e580

UClass * __cdecl UNetObjectFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFactory",
               &Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton,
               StaticRegisterNativesUNetObjectFactory,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFactory>,
               InternalVTableHelperCtorCaller<UNetObjectFactory>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton;
}

// UNetObjectFactory @ 144267a30

UNetObjectFactory * __thiscall
UNetObjectFactory::UNetObjectFactory(UNetObjectFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Bridge = (UObjectReplicationBridge *)0x0;
  this->_padding_ = (longlong)&___7UNetObjectFactory__6B_;
  this->FactoryId = 0xff;
  return this;
}

// UNetObjectFactory @ 144267a70

UNetObjectFactory * __thiscall
UNetObjectFactory::UNetObjectFactory(UNetObjectFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Bridge = (UObjectReplicationBridge *)0x0;
  this->_padding_ = (longlong)&___7UNetObjectFactory__6B_;
  this->FactoryId = 0xff;
  return this;
}

// ~UNetObjectFactory @ 144269400

void __thiscall UNetObjectFactory::~UNetObjectFactory(UNetObjectFactory *this)

{
  this->_padding_ = (longlong)&___7UNetObjectFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateAndDeserializeHeader @ 144271960

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall
UNetObjectFactory::CreateAndDeserializeHeader
          (UNetObjectFactory *this,FCreationHeaderContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0x136,L"Pure virtual not implemented (%s)");
  (param_1->Handle).field0_0x0.Value = 0;
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )(FNetObjectCreationHeader *)param_1;
}

// CreateAndFillHeader @ 1442719a0

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall UNetObjectFactory::CreateAndFillHeader(UNetObjectFactory *this,FNetRefHandle param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0x127,L"Pure virtual not implemented (%s)");
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )param_1.field0_0x0.Value;
}

// CreateHeader @ 144272580

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall
UNetObjectFactory::CreateHeader(UNetObjectFactory *this,FNetRefHandle param_1,uint param_2)

{
  bool bVar1;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  longlong local_res8;
  FNetRefHandle_u_0 local_res18;
  UNetObjectFactory *local_18;
  FNetRefHandle_u_0 *local_10;
  
  local_res18.Value._4_4_ = in_register_00000084;
  local_res18.Value._0_4_ = param_2;
  bVar1 = UReplicationBridge::IsReplicatedHandle
                    ((UReplicationBridge *)this->Bridge,(FNetRefHandle)local_res18);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0x310))(this,&local_res8,local_res18.Value);
    if (local_res8 != 0) {
      *(undefined4 *)(local_res8 + 8) = in_R9D;
      *(uchar *)(local_res8 + 0xc) = this->FactoryId;
      *(longlong *)param_1.field0_0x0 = local_res8;
      return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
              )param_1.field0_0x0.Value;
    }
  }
  else {
    local_10 = &local_res18;
    local_18 = this;
    `UNetObjectFactory::CreateHeader'::__l5::<lambda_1>::operator()(&local_18);
  }
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )param_1.field0_0x0.Value;
}

// Deinit @ 144274ab0

void __thiscall UNetObjectFactory::Deinit(UNetObjectFactory *this)

{
  (**(code **)(this->_padding_ + 0x300))();
  this->Bridge = (UObjectReplicationBridge *)0x0;
  return;
}

// DestroyReplicatedObject @ 144276ff0

void __thiscall
UNetObjectFactory::DestroyReplicatedObject(UNetObjectFactory *this,FDestroyedContext *param_1)

{
  return;
}

// DetachedFromReplication @ 144277540

void __thiscall
UNetObjectFactory::DetachedFromReplication(UNetObjectFactory *this,FDestroyedContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0x94,L"Pure virtual not implemented (%s)");
  return;
}

// GetPollFrequency @ 14427bb90

float __thiscall
UNetObjectFactory::GetPollFrequency(UNetObjectFactory *this,FNetRefHandle param_1,UObject *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0xb7,L"Pure virtual not implemented (%s)");
  return __real_42c80000;
}

// GetPrivateStaticClass @ 14427c060

UClass * __cdecl UNetObjectFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectFactory",
               &Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton,
               StaticRegisterNativesUNetObjectFactory,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectFactory>,
               InternalVTableHelperCtorCaller<UNetObjectFactory>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectFactory.InnerSingleton;
}

// GetWorldInfo @ 14427d210

TOptional<UNetObjectFactory::FWorldInfoData> * __thiscall
UNetObjectFactory::GetWorldInfo
          (UNetObjectFactory *this,
          TOptional<UNetObjectFactory::FWorldInfoData> *__return_storage_ptr__,
          FWorldInfoContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0xb4,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// Init @ 14427e100

void __thiscall
UNetObjectFactory::Init(UNetObjectFactory *this,uchar param_1,UObjectReplicationBridge *param_2)

{
  this->FactoryId = param_1;
  this->Bridge = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014427e10a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// InstantiateReplicatedObjectFromHeader @ 14427edc0

FInstantiateResult * __thiscall
UNetObjectFactory::InstantiateReplicatedObjectFromHeader
          (UNetObjectFactory *this,FInstantiateResult *__return_storage_ptr__,
          FInstantiateContext *param_1,FNetObjectCreationHeader *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0x7e,L"Pure virtual not implemented (%s)");
  *(undefined8 *)&__return_storage_ptr__->Flags = 0;
  __return_storage_ptr__->Instance = (UObject *)0x0;
  __return_storage_ptr__->Template = (UObject *)0x0;
  return __return_storage_ptr__;
}

// OnDeinit @ 1442846e0

void __thiscall UNetObjectFactory::OnDeinit(UNetObjectFactory *this)

{
  return;
}

// OnInit @ 1442851f0

void __thiscall UNetObjectFactory::OnInit(UNetObjectFactory *this)

{
  return;
}

// OnPostReceiveUpdate @ 144285550

void __thiscall UNetObjectFactory::OnPostReceiveUpdate(UNetObjectFactory *this)

{
  return;
}

// PostInit @ 144286490

void __thiscall UNetObjectFactory::PostInit(UNetObjectFactory *this,FPostInitContext *param_1)

{
  return;
}

// PostInstantiation @ 1442864a0

void __thiscall
UNetObjectFactory::PostInstantiation(UNetObjectFactory *this,FPostInstantiationContext *param_1)

{
  return;
}

// PostReceiveUpdate @ 1442864b0

void __thiscall UNetObjectFactory::PostReceiveUpdate(UNetObjectFactory *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442864b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x308))();
  return;
}

// ReadHeader @ 1442899b0

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall
UNetObjectFactory::ReadHeader
          (UNetObjectFactory *this,FNetRefHandle param_1,FNetSerializationContext *param_2)

{
  FNetBitStreamReader *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
  TVar4;
  longlong in_R9;
  undefined8 *local_res8;
  FNetSerializationContext *local_38;
  UObjectReplicationBridge *local_30;
  UNetObjectFactory *local_28;
  
  this_00 = *(FNetBitStreamReader **)(in_R9 + 0x318);
  if (this_00 == (FNetBitStreamReader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Reader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactory.cpp"
                       ,0x6f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Ptr = (FNetObjectCreationHeader *)(*pcVar1)();
      return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
              )TVar4.Ptr;
    }
  }
  uVar3 = UE::Net::FNetBitStreamReader::ReadBits(this_00,0x20);
  local_30 = this->Bridge;
  local_38 = param_2;
  local_28 = this;
  (**(code **)(this->_padding_ + 800))(this,&local_res8,&local_38);
  if ((local_res8 == (undefined8 *)0x0) || (this_00->OverflowBitCount != 0)) {
    *(undefined8 *)param_1.field0_0x0 = 0;
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  else {
    *(uchar *)((longlong)local_res8 + 0xc) = this->FactoryId;
    *(uint *)(local_res8 + 1) = uVar3;
    *(undefined8 **)param_1.field0_0x0 = local_res8;
  }
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )param_1.field0_0x0.Value;
}

// SerializeHeader @ 144292a60

bool __thiscall
UNetObjectFactory::SerializeHeader
          (UNetObjectFactory *this,FCreationHeaderContext *param_1,FNetObjectCreationHeader *param_2
          )

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetObjectFactory.h"
             ,0x12f,L"Pure virtual not implemented (%s)");
  return false;
}

// StaticRegisterNativesUNetObjectFactory @ 144297a80

void __cdecl UNetObjectFactory::StaticRegisterNativesUNetObjectFactory(void)

{
  return;
}

// SubObjectCreatedFromReplication @ 144297f80

void __thiscall
UNetObjectFactory::SubObjectCreatedFromReplication
          (UNetObjectFactory *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  return;
}

// SubObjectDetachedFromReplication @ 144298040

void __thiscall
UNetObjectFactory::SubObjectDetachedFromReplication
          (UNetObjectFactory *this,FDestroyedContext *param_1)

{
  return;
}

// WriteHeader @ 14429bce0

bool __thiscall
UNetObjectFactory::WriteHeader
          (UNetObjectFactory *this,FNetRefHandle param_1,FNetSerializationContext *param_2,
          FNetObjectCreationHeader *param_3)

{
  FNetBitStreamWriter *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  FNetRefHandle_u_0 local_28;
  UObjectReplicationBridge *local_20;
  UNetObjectFactory *local_18;
  FNetSerializationContext *local_10;
  
  this_00 = param_2->BitStreamWriter;
  if (this_00 == (FNetBitStreamWriter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactory.cpp"
                       ,0x4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_3->FactoryId != this->FactoryId) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header->GetNetFactoryId() == FactoryId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactory.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->FactoryId == 0xff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FactoryId != InvalidNetObjectFactoryId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetObjectFactory.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar5 = UE::Net::FNetObjectFactoryRegistry::GetNumBits(7);
  UE::Net::FNetBitStreamWriter::WriteBits(this_00,(uint)param_3->FactoryId,uVar5 + 1);
  UE::Net::FNetBitStreamWriter::WriteBits(this_00,param_3->ProtocolIdentifier,0x20);
  local_20 = this->Bridge;
  local_28 = param_1.field0_0x0;
  local_18 = this;
  local_10 = param_2;
  cVar4 = (**(code **)(this->_padding_ + 0x318))(this,&local_28,param_3);
  if ((cVar4 == '\0') || (this_00->OverflowBitCount != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// operator() @ 1504b53e0

bool __thiscall `UNetObjectFactory::CreateHeader'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9007945123056582603>);
  if (bVar4) {
    if ((**(ulonglong **)((longlong)this + 8) == 0) ||
       (**(ulonglong **)((longlong)this + 8) < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_18,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    if (*(longlong *)(*(longlong *)this + 0x10) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9007945123056582603>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b54fe;
    }
  }
  bVar4 = false;
LAB_1504b54fe:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

