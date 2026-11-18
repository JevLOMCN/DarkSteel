// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b49e050

UClass * __cdecl UDS_GameStartState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameStartState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameStartState",
               &Z_Registration_Info_UClass_UDS_GameStartState.InnerSingleton,
               StaticRegisterNativesUDS_GameStartState,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameStartState>,
               InternalVTableHelperCtorCaller<UDS_GameStartState>,local_res8,
               UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameStartState.InnerSingleton;
}

// UDS_GameStartState @ 14b4a0150

UDS_GameStartState * __thiscall
UDS_GameStartState::UDS_GameStartState(UDS_GameStartState *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_GameStartState__6B_;
  return this;
}

// UDS_GameStartState @ 14b4a0180

UDS_GameStartState * __thiscall
UDS_GameStartState::UDS_GameStartState(UDS_GameStartState *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_GameStartState__6B_;
  return this;
}

// ~UDS_GameStartState @ 14b4a0c50

void __thiscall UDS_GameStartState::~UDS_GameStartState(UDS_GameStartState *this)

{
  *(undefined ***)this = &___7UDS_GameStateBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a1990

UClass * __cdecl UDS_GameStartState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameStartState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameStartState",
               &Z_Registration_Info_UClass_UDS_GameStartState.InnerSingleton,
               StaticRegisterNativesUDS_GameStartState,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameStartState>,
               InternalVTableHelperCtorCaller<UDS_GameStartState>,local_res8,
               UDS_GameStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameStartState.InnerSingleton;
}

// StaticRegisterNativesUDS_GameStartState @ 14b4a1c90

void __cdecl UDS_GameStartState::StaticRegisterNativesUDS_GameStartState(void)

{
  return;
}

// Created @ 14b9a6160

void __thiscall UDS_GameStartState::Created(UDS_GameStartState *this)

{
  return;
}

// Destroyed @ 14b9a6e30

void __thiscall UDS_GameStartState::Destroyed(UDS_GameStartState *this)

{
  return;
}

// End @ 14b9a7330

void __thiscall UDS_GameStartState::End(UDS_GameStartState *this)

{
  return;
}

// GetInst @ 14b9af170

TWeakObjectPtr<UDS_GameStartState,FWeakObjectPtr> __cdecl UDS_GameStartState::GetInst(void)

{
  int iVar1;
  bool bVar2;
  ADS_GameMode *this;
  TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr in_RCX;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  ADS_GameMode::GetInst();
  bVar2 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)in_RCX = 0;
    local_res18 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<UDS_GameStartState,FWeakObjectPtr>)in_RCX;
  }
  this = (ADS_GameMode *)FWeakObjectPtr::Get(&local_res10);
  this_00 = ADS_GameMode::GetGameState(this,(EDS_GameStateType)local_res20);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_GameStartState_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b9af1f2;
  }
  pUVar3 = (UObject *)0x0;
LAB_14b9af1f2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)in_RCX = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<UDS_GameStartState,FWeakObjectPtr>)in_RCX;
}

// Start @ 14b9c5c40

void __thiscall UDS_GameStartState::Start(UDS_GameStartState *this)

{
  return;
}

