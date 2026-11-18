// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// StaticClass @ 1441f2160

UClass * __cdecl UDataStream::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStream",
               &Z_Registration_Info_UClass_UDataStream.InnerSingleton,
               StaticRegisterNativesUDataStream,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStream>,InternalVTableHelperCtorCaller<UDataStream>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStream.InnerSingleton;
}

// UDataStream @ 1441f9040

UDataStream * __thiscall UDataStream::UDataStream(UDataStream *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataStream__6B_;
  (this->DataStreamInitParameters).NetExports = (FNetExports *)0x0;
  (this->DataStreamInitParameters).Name.ComparisonIndex = 0;
  (this->DataStreamInitParameters).Name.Number = 0;
  (this->DataStreamInitParameters).ReplicationSystemId = 0;
  (this->DataStreamInitParameters).ConnectionId = 0;
  (this->DataStreamInitParameters).PacketWindowSize = 0;
  (this->DataStreamInitParameters).DataStreamManager = (UDataStreamManager *)0x0;
  return this;
}

// UDataStream @ 1441f9080

UDataStream * __thiscall UDataStream::UDataStream(UDataStream *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataStream__6B_;
  (this->DataStreamInitParameters).NetExports = (FNetExports *)0x0;
  (this->DataStreamInitParameters).Name.ComparisonIndex = 0;
  (this->DataStreamInitParameters).Name.Number = 0;
  (this->DataStreamInitParameters).ReplicationSystemId = 0;
  (this->DataStreamInitParameters).ConnectionId = 0;
  (this->DataStreamInitParameters).PacketWindowSize = 0;
  (this->DataStreamInitParameters).DataStreamManager = (UDataStreamManager *)0x0;
  return this;
}

// ~UDataStream @ 1441f9ea0

void __thiscall UDataStream::~UDataStream(UDataStream *this)

{
  this->_padding_ = (longlong)&___7UDataStream__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginWrite @ 1441fbf90

EWriteResult __thiscall UDataStream::BeginWrite(UDataStream *this,FBeginWriteParameters *param_1)

{
  return HasMoreData;
}

// Deinit @ 144206e30

void __thiscall UDataStream::Deinit(UDataStream *this)

{
  return;
}

// EndWrite @ 1442084c0

void __thiscall UDataStream::EndWrite(UDataStream *this)

{
  return;
}

// GetPrivateStaticClass @ 14420ba40

UClass * __cdecl UDataStream::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"DataStream",
               &Z_Registration_Info_UClass_UDataStream.InnerSingleton,
               StaticRegisterNativesUDataStream,0x50,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStream>,InternalVTableHelperCtorCaller<UDataStream>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStream.InnerSingleton;
}

// GetState @ 14420da00

EDataStreamState __thiscall UDataStream::GetState(UDataStream *this)

{
  UDataStreamManager *pUVar1;
  FImpl *this_00;
  FScriptContainerElement *pFVar2;
  EDataStreamState EVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  pUVar1 = (this->DataStreamInitParameters).DataStreamManager;
  if (pUVar1 != (UDataStreamManager *)0x0) {
    this_00 = (pUVar1->Impl).Ptr;
    pFVar2 = (this_00->Streams).AllocatorInstance.Data;
    for (pFVar5 = pFVar2; pFVar5 != pFVar2 + (longlong)(this_00->Streams).ArrayNum * 8;
        pFVar5 = pFVar5 + 8) {
      if ((*(longlong *)pFVar5 != 0) &&
         ((this->DataStreamInitParameters).Name.ComparisonIndex.Value ==
          *(uint *)(*(longlong *)pFVar5 + 0x18))) {
        uVar4 = (uint)((longlong)pFVar5 - (longlong)pFVar2 >> 3);
        if (uVar4 == 0xffffffff) {
          return Invalid;
        }
        EVar3 = UDataStreamManager::FImpl::GetStreamState(this_00,uVar4);
        return EVar3;
      }
    }
  }
  return Invalid;
}

// HasAcknowledgedAllReliableData @ 14420f2e0

bool __thiscall UDataStream::HasAcknowledgedAllReliableData(UDataStream *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\DataStream\\DataStream.h"
             ,0xc0,L"Pure virtual not implemented (%s)");
  return true;
}

// Init @ 14420f840

void __thiscall UDataStream::Init(UDataStream *this,FInitParameters *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  FVar1 = param_1->Name;
  (this->DataStreamInitParameters).NetExports = param_1->NetExports;
  (this->DataStreamInitParameters).Name = FVar1;
  uVar2 = param_1->ConnectionId;
  uVar3 = param_1->PacketWindowSize;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  (this->DataStreamInitParameters).ReplicationSystemId = param_1->ReplicationSystemId;
  (this->DataStreamInitParameters).ConnectionId = uVar2;
  (this->DataStreamInitParameters).PacketWindowSize = uVar3;
  *(undefined4 *)&(this->DataStreamInitParameters).field_0x1c = uVar4;
  (this->DataStreamInitParameters).DataStreamManager = param_1->DataStreamManager;
  return;
}

// ProcessPacketDeliveryStatus @ 1442149a0

void __thiscall
UDataStream::ProcessPacketDeliveryStatus
          (UDataStream *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\DataStream\\DataStream.h"
             ,0xbb,L"Pure virtual not implemented (%s)");
  return;
}

// ReadData @ 144215230

void __thiscall UDataStream::ReadData(UDataStream *this,FNetSerializationContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\DataStream\\DataStream.h"
             ,0xb3,L"Pure virtual not implemented (%s)");
  return;
}

// RequestClose @ 144218670

void __thiscall UDataStream::RequestClose(UDataStream *this)

{
  UDataStreamManager *pUVar1;
  
  pUVar1 = (this->DataStreamInitParameters).DataStreamManager;
  if (pUVar1 != (UDataStreamManager *)0x0) {
    UDataStreamManager::FImpl::CloseStream((pUVar1->Impl).Ptr,(this->DataStreamInitParameters).Name)
    ;
    return;
  }
  return;
}

// StaticRegisterNativesUDataStream @ 14421bde0

void __cdecl UDataStream::StaticRegisterNativesUDataStream(void)

{
  return;
}

// Update @ 14421c640

void __thiscall UDataStream::Update(UDataStream *this,FUpdateParameters *param_1)

{
  return;
}

// WriteData @ 14421d910

EWriteResult __thiscall
UDataStream::WriteData
          (UDataStream *this,FNetSerializationContext *param_1,FDataStreamRecord **param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\DataStream\\DataStream.h"
             ,0xa8,L"Pure virtual not implemented (%s)");
  return NoData;
}

