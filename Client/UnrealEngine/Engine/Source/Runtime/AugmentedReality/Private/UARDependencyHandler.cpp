// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 16

// StaticClass @ 14cf2aab0

UClass * __cdecl UARDependencyHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARDependencyHandler",
               &Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton,
               StaticRegisterNativesUARDependencyHandler,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARDependencyHandler>,
               InternalVTableHelperCtorCaller<UARDependencyHandler>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton;
}

// UARDependencyHandler @ 14cf40f10

UARDependencyHandler * __thiscall
UARDependencyHandler::UARDependencyHandler(UARDependencyHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARDependencyHandler__6B_;
  return this;
}

// UARDependencyHandler @ 14cf40f40

UARDependencyHandler * __thiscall
UARDependencyHandler::UARDependencyHandler(UARDependencyHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARDependencyHandler__6B_;
  return this;
}

// ~UARDependencyHandler @ 14cf44130

void __thiscall UARDependencyHandler::~UARDependencyHandler(UARDependencyHandler *this)

{
  *(undefined ***)this = &___7UARDependencyHandler__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CheckARServiceAvailability @ 14cf4bb00

void __thiscall
UARDependencyHandler::CheckARServiceAvailability
          (UARDependencyHandler *this,UObject *param_1,FLatentActionInfo *param_2,
          EARServiceAvailability *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Public\\ARDependencyHandler.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return;
}

// GetARDependencyHandler @ 14cf4f7c0

UARDependencyHandler * __cdecl UARDependencyHandler::GetARDependencyHandler(void)

{
  FName FVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  UARDependencyHandler *pUVar5;
  
  pIVar3 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"ARDependencyHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1 = `public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'::
          __l2::FeatureName;
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar2 != 0) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar1,0);
    pUVar5 = (UARDependencyHandler *)(lVar4 + -0x28);
    if (lVar4 == 0) {
      pUVar5 = (UARDependencyHandler *)0x0;
    }
    return pUVar5;
  }
  return (UARDependencyHandler *)0x0;
}

// GetPrivateStaticClass @ 14cf54160

UClass * __cdecl UARDependencyHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARDependencyHandler",
               &Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton,
               StaticRegisterNativesUARDependencyHandler,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARDependencyHandler>,
               InternalVTableHelperCtorCaller<UARDependencyHandler>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton;
}

// InstallARService @ 14cf57040

void __thiscall
UARDependencyHandler::InstallARService
          (UARDependencyHandler *this,UObject *param_1,FLatentActionInfo *param_2,
          EARServiceInstallRequestResult *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Public\\ARDependencyHandler.h"
             ,0x6b,L"Pure virtual not implemented (%s)");
  return;
}

// RequestARSessionPermission @ 14cf5ccd0

void __thiscall
UARDependencyHandler::RequestARSessionPermission
          (UARDependencyHandler *this,UObject *param_1,UARSessionConfig *param_2,
          FLatentActionInfo *param_3,EARServicePermissionRequestResult *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Public\\ARDependencyHandler.h"
             ,0x6f,L"Pure virtual not implemented (%s)");
  return;
}

// StartARSessionLatent @ 14cf60c80

void __thiscall
UARDependencyHandler::StartARSessionLatent
          (UARDependencyHandler *this,UObject *param_1,UARSessionConfig *param_2,
          FLatentActionInfo *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Public\\ARDependencyHandler.h"
             ,0x76,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUARDependencyHandler @ 14cf60f20

void __cdecl UARDependencyHandler::StaticRegisterNativesUARDependencyHandler(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UARDependencyHandler_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCheckARServiceAvailability @ 14cf6beb0

void __cdecl
UARDependencyHandler::execCheckARServiceAvailability(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_48;
  undefined8 local_40;
  UObject *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  UObject *local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_38 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_20 = local_38;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b0);
  local_30 = (undefined4)local_48;
  local_2c = local_48._4_4_;
  local_28 = local_40;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  (*pcVar2)(param_1,local_res10,&local_30,puVar3);
  return;
}

// execGetARDependencyHandler @ 14cf6cc00

void __cdecl
UARDependencyHandler::execGetARDependencyHandler(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong lVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"ARDependencyHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1 = `public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'::
          __l2::FeatureName;
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_UARDependencyHandler::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar2 == 0) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar1,0);
    lVar5 = lVar4 + -0x28;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    *(longlong *)param_3 = lVar5;
  }
  return;
}

// execInstallARService @ 14cf70170

void __cdecl
UARDependencyHandler::execInstallARService(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined8 local_res10;
  undefined8 local_48;
  undefined8 local_40;
  UObject *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  UObject *local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_38 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_20 = local_38;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b8);
  local_30 = (undefined4)local_48;
  local_2c = local_48._4_4_;
  local_28 = local_40;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  (*pcVar2)(param_1,local_res10,&local_30,puVar3);
  return;
}

// execRequestARSessionPermission @ 14cf72150

void __cdecl
UARDependencyHandler::execRequestARSessionPermission(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  UObject *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  UObject *local_30;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58 = 0xffffffffffffffff;
  local_50 = 0;
  local_48 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_30 = local_48;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
  local_40 = (undefined4)local_58;
  local_3c = local_58._4_4_;
  local_38 = local_50;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  (*pcVar2)(param_1,local_res20,local_res10[0],&local_40,puVar3);
  return;
}

// execStartARSessionLatent @ 14cf74db0

void __cdecl
UARDependencyHandler::execStartARSessionLatent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_48;
  undefined8 local_40;
  UObject *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  UObject *local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_38 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_20 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c8);
  local_30 = (undefined4)local_48;
  local_2c = local_48._4_4_;
  local_28 = local_40;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  (*pcVar2)(param_1,local_res10,local_res8,&local_30);
  return;
}

