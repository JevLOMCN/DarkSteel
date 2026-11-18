// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// StaticClass @ 14425e090

UClass * __cdecl UNetObjectBlobHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectBlobHandler",
               &Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton,
               StaticRegisterNativesUNetObjectBlobHandler,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectBlobHandler>,
               InternalVTableHelperCtorCaller<UNetObjectBlobHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton;
}

// UNetObjectBlobHandler @ 1442679b0

UNetObjectBlobHandler * __thiscall
UNetObjectBlobHandler::UNetObjectBlobHandler(UNetObjectBlobHandler *this,FVTableHelper *param_1)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INetBlobReceiver__;
  return this;
}

// UNetObjectBlobHandler @ 1442679f0

UNetObjectBlobHandler * __thiscall
UNetObjectBlobHandler::UNetObjectBlobHandler(UNetObjectBlobHandler *this)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INetBlobReceiver__;
  return this;
}

// ~UNetObjectBlobHandler @ 1442693e0

void __thiscall UNetObjectBlobHandler::~UNetObjectBlobHandler(UNetObjectBlobHandler *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  return;
}

// CreateNetBlob @ 144272630

TRefCountPtr<UE::Net::FNetBlob> __thiscall
UNetObjectBlobHandler::CreateNetBlob(UNetObjectBlobHandler *this,FNetBlobCreationInfo *param_1)

{
  FNetBlobCreationInfo this_00;
  uint *in_R8;
  FNetBlobCreationInfo local_res10;
  
  this_00 = (FNetBlobCreationInfo)::operator_new(0x48);
  if (this_00 != (FNetBlobCreationInfo)0x0) {
    local_res10.Type = *in_R8;
    local_res10.Flags = in_R8[1] | RawDataNetBlob;
    UE::Net::FNetBlob::FNetBlob((FNetBlob *)this_00,&local_res10);
    *param_1 = this_00;
    ((FNetBlob *)((longlong)this_00 + 0x30))->_padding_ = 0;
    ((FNetBlobCreationInfo *)((longlong)this_00 + 0x38))->Type = 0;
    ((FNetBlobCreationInfo *)((longlong)this_00 + 0x38))->Flags = None;
    *(undefined ***)this_00 = &___7FNetObjectBlob_Private_Net_UE__6B_;
    *(int *)((longlong)this_00 + 0x28) = *(int *)((longlong)this_00 + 0x28) + 1;
    return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
  }
  param_1->Type = 0;
  param_1->Flags = None;
  return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
}

// CreateNetObjectBlob @ 1442728d0

TRefCountPtr<UE::Net::Private::FNetObjectBlob> __thiscall
UNetObjectBlobHandler::CreateNetObjectBlob
          (UNetObjectBlobHandler *this,TArrayView<unsigned_int_const_,int> *param_1,uint param_2)

{
  ENetBlobFlags *pEVar1;
  ENetBlobFlags EVar2;
  FNetBlob *this_00;
  uint uVar3;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  FNetBlobCreationInfo local_res8;
  
  uVar3 = *(uint *)&this->field_0x30;
  this_00 = ::operator_new(0x48);
  if (this_00 != (FNetBlob *)0x0) {
    local_res8.Flags = RawDataNetBlob|Reliable;
    local_res8.Type = uVar3;
    UE::Net::FNetBlob::FNetBlob(this_00,&local_res8);
    this_00[1]._padding_ = 0;
    this_00[1].CreationInfo.Flags = None;
    this_00->_padding_ = (longlong)&___7FNetObjectBlob_Private_Net_UE__6B_;
  }
  EVar2 = this_00[1].CreationInfo.Flags;
  pEVar1 = &this_00[1].CreationInfo.Flags;
  uVar3 = (uint)((undefined8 *)CONCAT44(in_register_00000084,param_2))[1];
  this_00[1].CreationInfo.Type = uVar3;
  if ((uVar3 == 0) && (EVar2 == None)) {
    *pEVar1 = None;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,EVar2,(ForAnyElementType *)(this_00 + 1),uVar3,(int *)pEVar1);
    if (uVar3 != 0) {
      memcpy((FScriptContainerElement *)this_00[1]._padding_,
             *(void **)CONCAT44(in_register_00000084,param_2),(longlong)(int)uVar3 << 2);
    }
  }
  *(undefined4 *)&this_00[1].BlobDescriptor.Reference = in_R9D;
  this_00->RefCount = this_00->RefCount + 1;
  param_1->DataPtr = (uint *)this_00;
  return (TRefCountPtr<UE::Net::Private::FNetObjectBlob>)(FNetObjectBlob *)param_1;
}

// GetPrivateStaticClass @ 14427bfa0

UClass * __cdecl UNetObjectBlobHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectBlobHandler",
               &Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton,
               StaticRegisterNativesUNetObjectBlobHandler,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetObjectBlobHandler>,
               InternalVTableHelperCtorCaller<UNetObjectBlobHandler>,local_res8,
               UNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectBlobHandler.InnerSingleton;
}

// OnNetBlobReceived @ 1442852d0

void __thiscall
UNetObjectBlobHandler::OnNetBlobReceived
          (UNetObjectBlobHandler *this,FNetSerializationContext *param_1,
          TRefCountPtr<UE::Net::FNetBlob> *param_2)

{
  FName FVar1;
  undefined1 local_res10 [24];
  
  `UNetObjectBlobHandler::OnNetBlobReceived'::__l2::<lambda_1>::operator()(local_res10);
  FVar1 = UE::Net::GNetError_UnsupportedNetBlob;
  UE::Net::FNetSerializationContext::SetBitStreamOverflow(param_1);
  UE::Net::FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
  return;
}

// StaticRegisterNativesUNetObjectBlobHandler @ 144297a70

void __cdecl UNetObjectBlobHandler::StaticRegisterNativesUNetObjectBlobHandler(void)

{
  return;
}

// operator() @ 1504b4b20

bool __thiscall `UNetObjectBlobHandler::OnNetBlobReceived'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7009477981026385859>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7009477981026385859>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

