// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 2

// ~IAudioParameterInterfaceRegistry @ 1445309f0

void __thiscall
Audio::IAudioParameterInterfaceRegistry::~IAudioParameterInterfaceRegistry
          (IAudioParameterInterfaceRegistry *this)

{
  longlong *plVar1;
  ForElementType<FSetElementId> FVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->RegistrationFunction != 0) {
    plVar1 = *(longlong **)&(this->RegistrationFunction).field_0x28;
    plVar3 = (longlong *)&(this->RegistrationFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  (this->Interfaces).HashSize = 0;
  FVar2 = (this->Interfaces).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<Audio::FParameterInterface,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Interfaces).Elements);
  return;
}

// Get @ 1445335e0

IAudioParameterInterfaceRegistry * __cdecl Audio::IAudioParameterInterfaceRegistry::Get(void)

{
  longlong *plVar1;
  TUniquePtr<Audio::IAudioParameterInterfaceRegistry,TDefaultDelete<Audio::IAudioParameterInterfaceRegistry>_>
  TVar2;
  TUniquePtr<Audio::IAudioParameterInterfaceRegistry,TDefaultDelete<Audio::IAudioParameterInterfaceRegistry>_>
  TVar3;
  
  TVar3.Ptr = Instance.Ptr;
  if (Instance.Ptr == (IAudioParameterInterfaceRegistry *)0x0) {
    TVar3.Ptr = ::operator_new(0x90);
    if (TVar3.Ptr != (IAudioParameterInterfaceRegistry *)0x0) {
      (TVar3.Ptr)->_padding_ = 0;
      (TVar3.Ptr)->_padding_ = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x8 = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x10 = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x18 = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x20 = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x28 = 0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x30 = 0;
      ((TVar3.Ptr)->Interfaces).Hash.InlineData[0] = '\0';
      ((TVar3.Ptr)->Interfaces).Hash.InlineData[1] = '\0';
      ((TVar3.Ptr)->Interfaces).Hash.InlineData[2] = '\0';
      ((TVar3.Ptr)->Interfaces).Hash.InlineData[3] = '\0';
      ((TVar3.Ptr)->Interfaces).Hash._padding_ = 0;
      ((TVar3.Ptr)->Interfaces).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      *(undefined8 *)&((TVar3.Ptr)->Interfaces).HashSize = 0;
      *(undefined8 *)&(TVar3.Ptr)->RegistrationFunction = 0;
      *(undefined8 *)&((TVar3.Ptr)->RegistrationFunction).field_0x8 = 0;
      *(undefined8 *)&((TVar3.Ptr)->RegistrationFunction).field_0x10 = 0;
      *(undefined8 *)&((TVar3.Ptr)->RegistrationFunction).field_0x18 = 0;
      *(undefined8 *)&((TVar3.Ptr)->RegistrationFunction).field_0x20 = 0;
      *(undefined8 *)&((TVar3.Ptr)->RegistrationFunction).field_0x28 = 0;
      *(undefined4 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x2c = 0x80;
      *(undefined4 *)&((TVar3.Ptr)->Interfaces).Elements.field_0x30 = 0xffffffff;
      (TVar3.Ptr)->_padding_ =
           (longlong)&___7FParameterInterfaceRegistry_ParameterInterfaceRegistryPrivate_Audio__6B_;
    }
    TVar2.Ptr = Instance.Ptr;
    if (Instance.Ptr != (IAudioParameterInterfaceRegistry *)0x0) {
      plVar1 = &(Instance.Ptr)->_padding_;
      Instance.Ptr = TVar3.Ptr;
      (**(code **)*plVar1)(TVar2.Ptr,1);
      TVar3.Ptr = Instance.Ptr;
    }
  }
  Instance.Ptr = TVar3.Ptr;
  return TVar3.Ptr;
}

