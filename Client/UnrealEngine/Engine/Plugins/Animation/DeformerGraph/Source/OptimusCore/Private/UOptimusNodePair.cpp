// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// StaticClass @ 14e116290

UClass * __cdecl UOptimusNodePair::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePair",
               &Z_Registration_Info_UClass_UOptimusNodePair.InnerSingleton,
               StaticRegisterNativesUOptimusNodePair,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UOptimusNodePair>,
               InternalVTableHelperCtorCaller<UOptimusNodePair>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePair.InnerSingleton;
}

// UOptimusNodePair @ 14e15ab10

UOptimusNodePair * __thiscall
UOptimusNodePair::UOptimusNodePair(UOptimusNodePair *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNodePair__6B_;
  (this->First).field0_0x0.DebugPtr = (UOptimusNode *)0x0;
  (this->Second).field0_0x0.DebugPtr = (UOptimusNode *)0x0;
  return this;
}

// ~UOptimusNodePair @ 14e163010

void __thiscall UOptimusNodePair::~UOptimusNodePair(UOptimusNodePair *this)

{
  this->_padding_ = (longlong)&___7UOptimusNodePair__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Contains @ 14e1948d0

bool __thiscall
UOptimusNodePair::Contains(UOptimusNodePair *this,UOptimusNode *param_1,UOptimusNode *param_2)

{
  UOptimusNode *pUVar1;
  UOptimusNode *pUVar2;
  bool bVar3;
  
  pUVar1 = (this->First).field0_0x0.DebugPtr;
  if (pUVar1 == (UOptimusNode *)0x0) {
    bVar3 = param_1 == (UOptimusNode *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_1;
  }
  if (bVar3) {
    pUVar2 = (this->Second).field0_0x0.DebugPtr;
    if (pUVar2 == (UOptimusNode *)0x0) {
      bVar3 = param_2 == (UOptimusNode *)0x0;
    }
    else {
      bVar3 = pUVar2 == param_2;
    }
    if (bVar3) {
      return true;
    }
  }
  if (pUVar1 == (UOptimusNode *)0x0) {
    bVar3 = param_2 == (UOptimusNode *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_2;
  }
  if (bVar3) {
    pUVar1 = (this->Second).field0_0x0.DebugPtr;
    if (pUVar1 == (UOptimusNode *)0x0) {
      bVar3 = param_1 == (UOptimusNode *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_1;
    }
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// Contains @ 14e194940

bool __thiscall UOptimusNodePair::Contains(UOptimusNodePair *this,UOptimusNode *param_1)

{
  UOptimusNode *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->First).field0_0x0.DebugPtr;
  if (pUVar1 == (UOptimusNode *)0x0) {
    bVar2 = param_1 == (UOptimusNode *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    pUVar1 = (this->Second).field0_0x0.DebugPtr;
    if (pUVar1 == (UOptimusNode *)0x0) {
      bVar2 = param_1 == (UOptimusNode *)0x0;
    }
    else {
      bVar2 = pUVar1 == param_1;
    }
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// GetNodeCounterpart @ 14e1caf40

UOptimusNode * __thiscall
UOptimusNodePair::GetNodeCounterpart(UOptimusNodePair *this,UOptimusNode *param_1)

{
  UOptimusNode *pUVar1;
  UOptimusNode *pUVar2;
  UOptimusNode *pUVar3;
  bool bVar4;
  
  pUVar1 = (this->First).field0_0x0.DebugPtr;
  if (pUVar1 == (UOptimusNode *)0x0) {
    bVar4 = param_1 == (UOptimusNode *)0x0;
  }
  else {
    bVar4 = pUVar1 == param_1;
  }
  pUVar2 = (this->Second).field0_0x0.DebugPtr;
  pUVar3 = pUVar2;
  if (!bVar4) {
    if (pUVar2 == (UOptimusNode *)0x0) {
      pUVar2 = (UOptimusNode *)0x0;
      if (param_1 == (UOptimusNode *)0x0) {
        pUVar2 = pUVar1;
      }
      return pUVar2;
    }
    pUVar3 = (UOptimusNode *)0x0;
    if (pUVar2 == param_1) {
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14e1d6dc0

UClass * __cdecl UOptimusNodePair::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePair",
               &Z_Registration_Info_UClass_UOptimusNodePair.InnerSingleton,
               StaticRegisterNativesUOptimusNodePair,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UOptimusNodePair>,
               InternalVTableHelperCtorCaller<UOptimusNodePair>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePair.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodePair @ 14e225bc0

void __cdecl UOptimusNodePair::StaticRegisterNativesUOptimusNodePair(void)

{
  return;
}

