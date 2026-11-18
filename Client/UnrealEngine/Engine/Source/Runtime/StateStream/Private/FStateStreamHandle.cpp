// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 11

// FStateStreamHandle @ 143125530

FStateStreamHandle * __thiscall
FStateStreamHandle::FStateStreamHandle(FStateStreamHandle *this,FStateStreamHandle *param_1)

{
  this->IsInternal = 0;
  this->Id = 0;
  this->Owner = (IStateStreamHandleOwner *)0x0;
  this->Owner = param_1->Owner;
  this->IsInternal = param_1->IsInternal;
  this->Id = param_1->Id;
  param_1->Owner = (IStateStreamHandleOwner *)0x0;
  param_1->Id = 0;
  return this;
}

// FStateStreamHandle @ 143125560

FStateStreamHandle * __thiscall
FStateStreamHandle::FStateStreamHandle
          (FStateStreamHandle *this,FStateStreamCopyContext *param_1,FStateStreamHandle *param_2)

{
  uint uVar1;
  IStateStreamHandleOwner *pIVar2;
  
  pIVar2 = param_2->Owner;
  this->Owner = pIVar2;
  uVar1 = param_1->IsInternal;
  this->IsInternal = uVar1;
  this->Id = param_2->Id;
  if ((pIVar2 != (IStateStreamHandleOwner *)0x0) && (uVar1 == 0)) {
    (**(code **)*pIVar2)();
  }
  return this;
}

// FStateStreamHandle @ 1431255a0

FStateStreamHandle * __thiscall
FStateStreamHandle::FStateStreamHandle
          (FStateStreamHandle *this,IStateStreamHandleOwner *param_1,uint param_2)

{
  this->Owner = param_1;
  this->IsInternal = 0;
  this->Id = param_2;
  return this;
}

// FStateStreamHandle @ 1431255c0

FStateStreamHandle * __thiscall
FStateStreamHandle::FStateStreamHandle(FStateStreamHandle *this,FStateStreamHandle *param_1)

{
  uint uVar1;
  IStateStreamHandleOwner *pIVar2;
  
  pIVar2 = param_1->Owner;
  this->Owner = pIVar2;
  uVar1 = param_1->IsInternal;
  this->IsInternal = uVar1;
  this->Id = param_1->Id;
  if ((pIVar2 != (IStateStreamHandleOwner *)0x0) && (uVar1 == 0)) {
    (**(code **)*pIVar2)();
  }
  return this;
}

// ~FStateStreamHandle @ 143125cf0

void __thiscall FStateStreamHandle::~FStateStreamHandle(FStateStreamHandle *this)

{
  IStateStreamHandleOwner *pIVar1;
  
  pIVar1 = this->Owner;
  if ((pIVar1 != (IStateStreamHandleOwner *)0x0) && (this->IsInternal == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143125d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this->Id);
    return;
  }
  return;
}

// operator= @ 143125fc0

FStateStreamHandle * __thiscall
FStateStreamHandle::operator=(FStateStreamHandle *this,FStateStreamHandle *param_1)

{
  IStateStreamHandleOwner *pIVar1;
  
  pIVar1 = this->Owner;
  if ((pIVar1 != (IStateStreamHandleOwner *)0x0) && (this->IsInternal == 0)) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this->Id);
  }
  this->Owner = param_1->Owner;
  this->IsInternal = param_1->IsInternal;
  this->Id = param_1->Id;
  param_1->Owner = (IStateStreamHandleOwner *)0x0;
  param_1->Id = 0;
  return this;
}

// operator= @ 143126020

FStateStreamHandle * __thiscall
FStateStreamHandle::operator=(FStateStreamHandle *this,FStateStreamHandle *param_1)

{
  uint uVar1;
  IStateStreamHandleOwner *pIVar2;
  
  pIVar2 = this->Owner;
  if ((pIVar2 != param_1->Owner) || (this->Id != param_1->Id)) {
    if ((pIVar2 != (IStateStreamHandleOwner *)0x0) && (this->IsInternal == 0)) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,this->Id);
    }
    pIVar2 = param_1->Owner;
    this->Owner = pIVar2;
    uVar1 = param_1->IsInternal;
    this->IsInternal = uVar1;
    this->Id = param_1->Id;
    if ((pIVar2 != (IStateStreamHandleOwner *)0x0) && (uVar1 == 0)) {
      (**(code **)*pIVar2)();
    }
  }
  return this;
}

// operator== @ 143126120

bool __thiscall FStateStreamHandle::operator==(FStateStreamHandle *this,FStateStreamHandle *param_1)

{
  if ((this->Id == param_1->Id) && (this->Owner == param_1->Owner)) {
    return true;
  }
  return false;
}

// Apply @ 1431266f0

void __thiscall
FStateStreamHandle::Apply
          (FStateStreamHandle *this,FStateStreamCopyContext *param_1,FStateStreamHandle *param_2)

{
  IStateStreamHandleOwner *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->IsInternal == 0) {
    if (param_2->IsInternal != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Other.IsInternal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamHandle.cpp"
                         ,0x5a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = param_2->Owner;
    if (pIVar1 != (IStateStreamHandleOwner *)0x0) {
      (**(code **)*pIVar1)(pIVar1,param_2->Id);
    }
    pIVar1 = this->Owner;
    if (pIVar1 != (IStateStreamHandleOwner *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this->Id);
    }
  }
  this->Owner = param_2->Owner;
  this->Id = param_2->Id;
  return;
}

// MakeInternal @ 143127d00

void __thiscall FStateStreamHandle::MakeInternal(FStateStreamHandle *this)

{
  IStateStreamHandleOwner *pIVar1;
  
  pIVar1 = this->Owner;
  if ((pIVar1 != (IStateStreamHandleOwner *)0x0) && (this->IsInternal == 0)) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this->Id);
  }
  this->IsInternal = 1;
  return;
}

// Render_GetUserData @ 143128310

void * __thiscall FStateStreamHandle::Render_GetUserData(FStateStreamHandle *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((this->Owner != (IStateStreamHandleOwner *)0x0) && (this->Id != 0)) {
    if (this->IsInternal == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInternal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamHandle.cpp"
                         ,0x72,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014312835f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (void *)(**(code **)((longlong)*this->Owner + 0x20))(this->Owner,this->Id);
    return pvVar3;
  }
  return (void *)0x0;
}

