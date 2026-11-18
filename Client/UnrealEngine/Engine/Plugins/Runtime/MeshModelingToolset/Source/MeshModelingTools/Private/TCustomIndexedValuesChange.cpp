// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// ~TCustomIndexedValuesChange<float,int> @ 14ccc11e0

void __thiscall
TCustomIndexedValuesChange<float,int>::~TCustomIndexedValuesChange<float,int>
          (TCustomIndexedValuesChange<float,int> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->RevertFunction != 0) {
    plVar1 = *(longlong **)&(this->RevertFunction).field_0x28;
    plVar2 = (longlong *)&(this->RevertFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ApplyFunction != 0) {
    plVar1 = *(longlong **)&(this->ApplyFunction).field_0x28;
    plVar2 = (longlong *)&(this->ApplyFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  return;
}

// ~TCustomIndexedValuesChange<UE::Math::TVector4<float>,int> @ 14ccc1270

void __thiscall
TCustomIndexedValuesChange<UE::Math::TVector4<float>,int>::
~TCustomIndexedValuesChange<UE::Math::TVector4<float>,int>
          (TCustomIndexedValuesChange<UE::Math::TVector4<float>,int> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->RevertFunction != 0) {
    plVar1 = *(longlong **)&(this->RevertFunction).field_0x28;
    plVar2 = (longlong *)&(this->RevertFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ApplyFunction != 0) {
    plVar1 = *(longlong **)&(this->ApplyFunction).field_0x28;
    plVar2 = (longlong *)&(this->ApplyFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FChange__6B_;
  return;
}

// Apply @ 14ccde2f0

void __thiscall
TCustomIndexedValuesChange<float,int>::Apply
          (TCustomIndexedValuesChange<float,int> *this,UObject *param_1)

{
  if (*(longlong *)&this->ApplyFunction != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&)>
                  *)&this->ApplyFunction,param_1,&this->CustomData,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  }
  return;
}

// Apply @ 14ccde320

void __thiscall
TCustomIndexedValuesChange<UE::Math::TVector4<float>,int>::Apply
          (TCustomIndexedValuesChange<UE::Math::TVector4<float>,int> *this,UObject *param_1)

{
  if (*(longlong *)&this->ApplyFunction != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&)>
                  *)&this->ApplyFunction,param_1,&this->CustomData,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  }
  return;
}

// Revert @ 14cd1ca30

void __thiscall
TCustomIndexedValuesChange<float,int>::Revert
          (TCustomIndexedValuesChange<float,int> *this,UObject *param_1)

{
  if (*(longlong *)&this->RevertFunction != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&)>
                  *)&this->RevertFunction,param_1,&this->CustomData,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  }
  return;
}

// Revert @ 14cd1ca60

void __thiscall
TCustomIndexedValuesChange<UE::Math::TVector4<float>,int>::Revert
          (TCustomIndexedValuesChange<UE::Math::TVector4<float>,int> *this,UObject *param_1)

{
  if (*(longlong *)&this->RevertFunction != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&)>
                  *)&this->RevertFunction,param_1,&this->CustomData,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  }
  return;
}

