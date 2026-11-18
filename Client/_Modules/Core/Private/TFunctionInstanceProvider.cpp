// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// ~TFunctionInstanceProvider<ISmoothie<1>_> @ 141cf0c40

void __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>::
~TFunctionInstanceProvider<ISmoothie<1>_>(TFunctionInstanceProvider<ISmoothie<1>_> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ =
       (longlong)&___7__TFunctionInstanceProvider_U__ISmoothie__00_____TTypeContainer__00__6B_;
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TFunctionInstanceProvider<TSmoothie<1>_> @ 141cf0ca0

void __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>::
~TFunctionInstanceProvider<TSmoothie<1>_>(TFunctionInstanceProvider<TSmoothie<1>_> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ =
       (longlong)&___7__TFunctionInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__6B_;
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TFunctionInstanceProvider<FBanana> @ 141cf0d00

void __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<FBanana>::~TFunctionInstanceProvider<FBanana>
          (TFunctionInstanceProvider<FBanana> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__TFunctionInstanceProvider_UFBanana_____TTypeContainer__00__6B_;
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TFunctionInstanceProvider<FStrawberry> @ 141cf0d60

void __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>::~TFunctionInstanceProvider<FStrawberry>
          (TFunctionInstanceProvider<FStrawberry> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ =
       (longlong)&___7__TFunctionInstanceProvider_UFStrawberry_____TTypeContainer__00__6B_;
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TFunctionInstanceProvider<IBerry> @ 141cf0dc0

void __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<IBerry>::~TFunctionInstanceProvider<IBerry>
          (TFunctionInstanceProvider<IBerry> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__TFunctionInstanceProvider_UIBerry_____TTypeContainer__00__6B_;
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TFunctionInstanceProvider<IFruit> @ 141cf0e20

void __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<IFruit>::~TFunctionInstanceProvider<IFruit>
          (TFunctionInstanceProvider<IFruit> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7__TFunctionInstanceProvider_UIFruit_____TTypeContainer__00__6B_;
  if (*(longlong *)&this->CreateFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// GetInstance @ 141d00320

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>::GetInstance
          (TFunctionInstanceProvider<ISmoothie<1>_> *this,TSharedPtr<void,1> *__return_storage_ptr__
          )

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFunc);
  plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
  pcVar2 = *(code **)&this->CreateFunc;
  plVar4 = (longlong *)&(this->CreateFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetInstance @ 141d00380

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>::GetInstance
          (TFunctionInstanceProvider<TSmoothie<1>_> *this,TSharedPtr<void,1> *__return_storage_ptr__
          )

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFunc);
  plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
  pcVar2 = *(code **)&this->CreateFunc;
  plVar4 = (longlong *)&(this->CreateFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetInstance @ 141d003e0

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<FBanana>::GetInstance
          (TFunctionInstanceProvider<FBanana> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFunc);
  plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
  pcVar2 = *(code **)&this->CreateFunc;
  plVar4 = (longlong *)&(this->CreateFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetInstance @ 141d00440

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>::GetInstance
          (TFunctionInstanceProvider<FStrawberry> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFunc);
  plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
  pcVar2 = *(code **)&this->CreateFunc;
  plVar4 = (longlong *)&(this->CreateFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetInstance @ 141d004a0

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<IBerry>::GetInstance
          (TFunctionInstanceProvider<IBerry> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFunc);
  plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
  pcVar2 = *(code **)&this->CreateFunc;
  plVar4 = (longlong *)&(this->CreateFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetInstance @ 141d00500

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TFunctionInstanceProvider<IFruit>::GetInstance
          (TFunctionInstanceProvider<IFruit> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateFunc);
  plVar1 = *(longlong **)&(this->CreateFunc).field_0x28;
  pcVar2 = *(code **)&this->CreateFunc;
  plVar4 = (longlong *)&(this->CreateFunc).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

