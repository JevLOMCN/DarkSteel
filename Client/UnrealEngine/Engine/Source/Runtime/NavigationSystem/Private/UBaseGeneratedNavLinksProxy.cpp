// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 12

// StaticClass @ 146d61380

UClass * __cdecl UBaseGeneratedNavLinksProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"BaseGeneratedNavLinksProxy",
               &Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton,
               StaticRegisterNativesUBaseGeneratedNavLinksProxy,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseGeneratedNavLinksProxy>,
               InternalVTableHelperCtorCaller<UBaseGeneratedNavLinksProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton;
}

// UBaseGeneratedNavLinksProxy @ 146d757e0

UBaseGeneratedNavLinksProxy * __thiscall
UBaseGeneratedNavLinksProxy::UBaseGeneratedNavLinksProxy
          (UBaseGeneratedNavLinksProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  (this->LinkProxyId).Id = 0;
  (this->Owner).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UBaseGeneratedNavLinksProxy @ 146d75820

UBaseGeneratedNavLinksProxy * __thiscall
UBaseGeneratedNavLinksProxy::UBaseGeneratedNavLinksProxy
          (UBaseGeneratedNavLinksProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  (this->LinkProxyId).Id = 0;
  (this->Owner).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UBaseGeneratedNavLinksProxy @ 146d78b70

void __thiscall
UBaseGeneratedNavLinksProxy::~UBaseGeneratedNavLinksProxy(UBaseGeneratedNavLinksProxy *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7INavLinkCustomInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetId @ 146d9b990

FNavLinkId __thiscall UBaseGeneratedNavLinksProxy::GetId(UBaseGeneratedNavLinksProxy *this)

{
  longlong *in_RDX;
  
  *in_RDX = this->_padding_;
  return (FNavLinkId)(ulong64)in_RDX;
}

// GetLinkData @ 146d9c0a0

void __thiscall
UBaseGeneratedNavLinksProxy::GetLinkData
          (UBaseGeneratedNavLinksProxy *this,TVector<double> *param_1,TVector<double> *param_2,
          Type *param_3)

{
  undefined1 local_18 [24];
  
  `UBaseGeneratedNavLinksProxy::GetLinkData'::__l2::<lambda_1>::operator()(local_18);
  return;
}

// GetLinkOwner @ 146d9c0d0

UObject * __thiscall UBaseGeneratedNavLinksProxy::GetLinkOwner(UBaseGeneratedNavLinksProxy *this)

{
  return (UObject *)this->_padding_;
}

// GetPrivateStaticClass @ 146d9ff10

UClass * __cdecl UBaseGeneratedNavLinksProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"BaseGeneratedNavLinksProxy",
               &Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton,
               StaticRegisterNativesUBaseGeneratedNavLinksProxy,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBaseGeneratedNavLinksProxy>,
               InternalVTableHelperCtorCaller<UBaseGeneratedNavLinksProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseGeneratedNavLinksProxy.InnerSingleton;
}

// StaticRegisterNativesUBaseGeneratedNavLinksProxy @ 146dba8f0

void __cdecl UBaseGeneratedNavLinksProxy::StaticRegisterNativesUBaseGeneratedNavLinksProxy(void)

{
  return;
}

// UpdateLinkId @ 146dc2600

void __thiscall
UBaseGeneratedNavLinksProxy::UpdateLinkId(UBaseGeneratedNavLinksProxy *this,FNavLinkId param_1)

{
  this->_padding_ = param_1.Id;
  return;
}

// _getUObject @ 146dc5730

UObject * __thiscall UBaseGeneratedNavLinksProxy::_getUObject(UBaseGeneratedNavLinksProxy *this)

{
  return (UObject *)&this[-1]._padding_;
}

// operator() @ 1504fc1b0

bool __thiscall `UBaseGeneratedNavLinksProxy::GetLinkData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5304237383099613198>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5304237383099613198>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

