// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// StaticClass @ 14421e8c0

UClass * __cdecl UNetBlobHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetBlobHandler",
               &Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton,
               StaticRegisterNativesUNetBlobHandler,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetBlobHandler>,InternalVTableHelperCtorCaller<UNetBlobHandler>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton;
}

// UNetBlobHandler @ 14422a200

UNetBlobHandler * __thiscall UNetBlobHandler::UNetBlobHandler(UNetBlobHandler *this)

{
  UObject::UObject((UObject *)this);
  this->NetBlobType = 0xffffffff;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  return this;
}

// UNetBlobHandler @ 14422a240

UNetBlobHandler * __thiscall
UNetBlobHandler::UNetBlobHandler(UNetBlobHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  return this;
}

// ~UNetBlobHandler @ 14422b440

void __thiscall UNetBlobHandler::~UNetBlobHandler(UNetBlobHandler *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UObject::~UObject((UObject *)this);
  return;
}

// AddConnection @ 14422de60

void __thiscall UNetBlobHandler::AddConnection(UNetBlobHandler *this,uint param_1)

{
  return;
}

// CreateNetBlob @ 144235850

TRefCountPtr<UE::Net::FNetBlob> __thiscall
UNetBlobHandler::CreateNetBlob(UNetBlobHandler *this,FNetBlobCreationInfo *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetBlob\\NetBlobHandler.h"
             ,0x45,L"Pure virtual not implemented (%s)");
  param_1->Type = 0;
  param_1->Flags = None;
  return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
}

// GetPrivateStaticClass @ 14423e0b0

UClass * __cdecl UNetBlobHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetBlobHandler",
               &Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton,
               StaticRegisterNativesUNetBlobHandler,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetBlobHandler>,InternalVTableHelperCtorCaller<UNetBlobHandler>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetBlobHandler.InnerSingleton;
}

// OnNetBlobReceived @ 144246c00

void __thiscall
UNetBlobHandler::OnNetBlobReceived
          (UNetBlobHandler *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetBlob\\NetBlobHandler.h"
             ,0x48,L"Pure virtual not implemented (%s)");
  return;
}

// RemoveConnection @ 14424dea0

void __thiscall UNetBlobHandler::RemoveConnection(UNetBlobHandler *this,uint param_1)

{
  return;
}

// StaticRegisterNativesUNetBlobHandler @ 1442548d0

void __cdecl UNetBlobHandler::StaticRegisterNativesUNetBlobHandler(void)

{
  return;
}

