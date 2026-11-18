// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149ee0450

UClass * __cdecl UPCGEdge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEdge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEdge",&Z_Registration_Info_UClass_UPCGEdge.InnerSingleton,
               StaticRegisterNativesUPCGEdge,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGEdge>,InternalVTableHelperCtorCaller<UPCGEdge>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEdge.InnerSingleton;
}

// UPCGEdge @ 149eee420

UPCGEdge * __thiscall UPCGEdge::UPCGEdge(UPCGEdge *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGEdge__6B_;
  (this->InboundLabel_DEPRECATED).ComparisonIndex = 0;
  (this->InboundLabel_DEPRECATED).Number = 0;
  (this->InboundNode_DEPRECATED).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->OutboundLabel_DEPRECATED).ComparisonIndex = 0;
  (this->OutboundLabel_DEPRECATED).Number = 0;
  (this->OutboundNode_DEPRECATED).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->InputPin).field0_0x0.DebugPtr = (UPCGPin *)0x0;
  (this->OutputPin).field0_0x0.DebugPtr = (UPCGPin *)0x0;
  return this;
}

// UPCGEdge @ 149eee470

UPCGEdge * __thiscall UPCGEdge::UPCGEdge(UPCGEdge *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGEdge__6B_;
  (this->InboundLabel_DEPRECATED).ComparisonIndex = 0;
  (this->InboundLabel_DEPRECATED).Number = 0;
  (this->InboundNode_DEPRECATED).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->OutboundLabel_DEPRECATED).ComparisonIndex = 0;
  (this->OutboundLabel_DEPRECATED).Number = 0;
  (this->OutboundNode_DEPRECATED).field0_0x0.DebugPtr = (UPCGNode *)0x0;
  (this->InputPin).field0_0x0.DebugPtr = (UPCGPin *)0x0;
  (this->OutputPin).field0_0x0.DebugPtr = (UPCGPin *)0x0;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  return this;
}

// ~UPCGEdge @ 149eefd30

void __thiscall UPCGEdge::~UPCGEdge(UPCGEdge *this)

{
  this->_padding_ = (longlong)&___7UPCGEdge__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetOtherPin @ 149f02f90

UPCGPin * __thiscall UPCGEdge::GetOtherPin(UPCGEdge *this,UPCGPin *param_1)

{
  code *pcVar1;
  UPCGPin *pUVar2;
  bool bVar3;
  
  pUVar2 = (this->InputPin).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGPin *)0x0) {
    bVar3 = param_1 == (UPCGPin *)0x0;
  }
  else {
    bVar3 = pUVar2 == param_1;
  }
  if (!bVar3) {
    pUVar2 = (this->OutputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      bVar3 = param_1 == (UPCGPin *)0x0;
    }
    else {
      bVar3 = pUVar2 == param_1;
    }
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pin == InputPin || Pin == OutputPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGEdge.cpp"
                         ,0x1b,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar2 = (UPCGPin *)(*pcVar1)();
        return pUVar2;
      }
    }
  }
  pUVar2 = (this->InputPin).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGPin *)0x0) {
    bVar3 = param_1 == (UPCGPin *)0x0;
  }
  else {
    bVar3 = pUVar2 == param_1;
  }
  if (bVar3) {
    pUVar2 = (this->OutputPin).field0_0x0.DebugPtr;
  }
  return pUVar2;
}

// GetOtherPin @ 149f03030

UPCGPin * __thiscall UPCGEdge::GetOtherPin(UPCGEdge *this,UPCGPin *param_1)

{
  code *pcVar1;
  UPCGPin *pUVar2;
  bool bVar3;
  
  pUVar2 = (this->InputPin).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGPin *)0x0) {
    bVar3 = param_1 == (UPCGPin *)0x0;
  }
  else {
    bVar3 = pUVar2 == param_1;
  }
  if (!bVar3) {
    pUVar2 = (this->OutputPin).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGPin *)0x0) {
      bVar3 = param_1 == (UPCGPin *)0x0;
    }
    else {
      bVar3 = pUVar2 == param_1;
    }
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pin == InputPin || Pin == OutputPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGEdge.cpp"
                         ,0x21,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar2 = (UPCGPin *)(*pcVar1)();
        return pUVar2;
      }
    }
  }
  pUVar2 = (this->InputPin).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGPin *)0x0) {
    bVar3 = param_1 == (UPCGPin *)0x0;
  }
  else {
    bVar3 = pUVar2 == param_1;
  }
  if (bVar3) {
    pUVar2 = (this->OutputPin).field0_0x0.DebugPtr;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 149f04320

UClass * __cdecl UPCGEdge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGEdge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGEdge",&Z_Registration_Info_UClass_UPCGEdge.InnerSingleton,
               StaticRegisterNativesUPCGEdge,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGEdge>,InternalVTableHelperCtorCaller<UPCGEdge>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGEdge.InnerSingleton;
}

// IsValid @ 149f08570

bool __thiscall UPCGEdge::IsValid(UPCGEdge *this)

{
  if (((this->InputPin).field0_0x0.DebugPtr != (UPCGPin *)0x0) &&
     ((this->OutputPin).field0_0x0.DebugPtr != (UPCGPin *)0x0)) {
    return true;
  }
  return false;
}

// PostLoad @ 149f0c7d0

void __thiscall UPCGEdge::PostLoad(UPCGEdge *this)

{
  UObject::PostLoad((UObject *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  return;
}

// StaticRegisterNativesUPCGEdge @ 149f13fc0

void __cdecl UPCGEdge::StaticRegisterNativesUPCGEdge(void)

{
  return;
}

