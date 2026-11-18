// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 14907a910

UClass * __cdecl UNiagaraDataChannel_MapBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_MapBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_MapBase",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_MapBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_MapBase,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataChannel_MapBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_MapBase>,local_res8,
               UNiagaraDataChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_MapBase.InnerSingleton;
}

// UNiagaraDataChannel_MapBase @ 1490b2fe0

UNiagaraDataChannel_MapBase * __thiscall
UNiagaraDataChannel_MapBase::UNiagaraDataChannel_MapBase
          (UNiagaraDataChannel_MapBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_MapBase__6B_;
  (this->DefaultSystemToSpawn).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UNiagaraDataChannel_MapBase @ 1490b3050

UNiagaraDataChannel_MapBase * __thiscall
UNiagaraDataChannel_MapBase::UNiagaraDataChannel_MapBase
          (UNiagaraDataChannel_MapBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = (longlong)&___7UNiagaraDataChannel_MapBase__6B_;
  (this->DefaultSystemToSpawn).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UNiagaraDataChannel_MapBase @ 1490b89c0

void __thiscall
UNiagaraDataChannel_MapBase::~UNiagaraDataChannel_MapBase(UNiagaraDataChannel_MapBase *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataChannel__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  FRenderCommandFence::~FRenderCommandFence((FRenderCommandFence *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1491089a0

UClass * __cdecl UNiagaraDataChannel_MapBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannel_MapBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannel_MapBase",
               &Z_Registration_Info_UClass_UNiagaraDataChannel_MapBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannel_MapBase,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataChannel_MapBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannel_MapBase>,local_res8,
               UNiagaraDataChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannel_MapBase.InnerSingleton;
}

// StaticRegisterNativesUNiagaraDataChannel_MapBase @ 149139e10

void __cdecl UNiagaraDataChannel_MapBase::StaticRegisterNativesUNiagaraDataChannel_MapBase(void)

{
  return;
}

