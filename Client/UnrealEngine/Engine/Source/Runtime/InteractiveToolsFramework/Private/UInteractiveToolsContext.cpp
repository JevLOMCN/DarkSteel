// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 43

// StaticClass @ 1496cb960

UClass * __cdecl UInteractiveToolsContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolsContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolsContext",
               &Z_Registration_Info_UClass_UInteractiveToolsContext.InnerSingleton,
               StaticRegisterNativesUInteractiveToolsContext,0x2a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolsContext>,
               InternalVTableHelperCtorCaller<UInteractiveToolsContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolsContext.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 1496cd240

void __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_10>::<lambda_invoker_cdecl>
          (UContextObjectStore *param_1)

{
  int *piVar1;
  
  piVar1 = &(param_1->ContextObjects).ArrayMax;
  (param_1->ContextObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(param_1->ContextObjects).AllocatorInstance,0,piVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1496cd250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputRouter * __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FContextInitInfo *param_1)

{
  UInteractiveToolsContext *pUVar1;
  UClass *pUVar2;
  UInputRouter *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolsContext;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UInputRouter_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UInputRouter *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,param_1->TransactionsAPI);
  return pUVar3;
}

// <lambda_invoker_cdecl> @ 1496cd310

void __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UInputRouter *param_1)

{
  (**(code **)(param_1->_padding_ + 0x2f0))();
                    /* WARNING: Could not recover jumptable at 0x0001496cd32d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  return;
}

// <lambda_invoker_cdecl> @ 1496cd340

void __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (UInteractiveToolManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496cd343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2b8))();
  return;
}

// <lambda_invoker_cdecl> @ 1496cd350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolTargetManager * __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (FContextInitInfo *param_1)

{
  UInteractiveToolsContext *pUVar1;
  UClass *pUVar2;
  UToolTargetManager *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolsContext;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UToolTargetManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UToolTargetManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x300))(pUVar3);
  return pUVar3;
}

// <lambda_invoker_cdecl> @ 1496cd400

void __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_6>::<lambda_invoker_cdecl>
          (UToolTargetManager *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 1496cd410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveGizmoManager * __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_7>::<lambda_invoker_cdecl>
          (FContextInitInfo *param_1)

{
  UInteractiveToolsContext *pUVar1;
  UClass *pUVar2;
  UInteractiveGizmoManager *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolsContext;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UInteractiveGizmoManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UInteractiveGizmoManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2b0))
            (pUVar3,param_1->QueriesAPI,param_1->TransactionsAPI,param_1->InputRouter);
  (**(code **)(pUVar3->_padding_ + 0x330))(pUVar3);
  return pUVar3;
}

// <lambda_invoker_cdecl> @ 1496cd4e0

void __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_8>::<lambda_invoker_cdecl>
          (UInteractiveGizmoManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496cd4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2b8))();
  return;
}

// <lambda_invoker_cdecl> @ 1496cd4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UContextObjectStore * __cdecl
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_9>::<lambda_invoker_cdecl>
          (FContextInitInfo *param_1)

{
  UInteractiveToolsContext *pUVar1;
  UClass *pUVar2;
  UContextObjectStore *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->ToolsContext;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UContextObjectStore_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UContextObjectStore *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// UInteractiveToolsContext @ 1496d31b0

UInteractiveToolsContext * __thiscall
UInteractiveToolsContext::UInteractiveToolsContext
          (UInteractiveToolsContext *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->ToolManagerClass).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &___7UInteractiveToolsContext__6B_;
  *(undefined8 *)&this->OnToolNotificationMessage = 0;
  *(undefined8 *)&(this->OnToolNotificationMessage).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolNotificationMessage).field_0x10 = 0;
  *(undefined8 *)&this->OnToolWarningMessage = 0;
  *(undefined8 *)&(this->OnToolWarningMessage).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolWarningMessage).field_0x10 = 0;
  (this->InputRouter).field0_0x0.DebugPtr = (UInputRouter *)0x0;
  (this->TargetManager).field0_0x0.DebugPtr = (UToolTargetManager *)0x0;
  (this->ToolManager).field0_0x0.DebugPtr = (UInteractiveToolManager *)0x0;
  (this->GizmoManager).field0_0x0.DebugPtr = (UInteractiveGizmoManager *)0x0;
  (this->ContextObjectStore).field0_0x0.DebugPtr = (UContextObjectStore *)0x0;
  *(undefined8 *)&this->CreateInputRouterFunc = 0;
  *(undefined8 *)&(this->CreateInputRouterFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateToolManagerFunc = 0;
  *(undefined8 *)&(this->CreateToolManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateToolTargetManagerFunc = 0;
  *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateGizmoManagerFunc = 0;
  *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateContextStoreFunc = 0;
  *(undefined8 *)&(this->CreateContextStoreFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownInputRouterFunc = 0;
  *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownToolManagerFunc = 0;
  *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownToolTargetManagerFunc = 0;
  *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownGizmoManagerFunc = 0;
  *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownContextStoreFunc = 0;
  *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x28 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OnToolNotificationMessage).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolWarningMessage).field_0x18 = 2;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UInteractiveToolsContext @ 1496d32e0

UInteractiveToolsContext * __thiscall
UInteractiveToolsContext::UInteractiveToolsContext(UInteractiveToolsContext *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  UClass *local_18 [2];
  
  UObject::UObject((UObject *)this);
  puVar1 = &(this->ToolManagerClass).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &___7UInteractiveToolsContext__6B_;
  *(undefined8 *)&this->OnToolNotificationMessage = 0;
  *(undefined8 *)&(this->OnToolNotificationMessage).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolNotificationMessage).field_0x10 = 0;
  *(undefined8 *)&(this->OnToolNotificationMessage).field_0x18 = 2;
  *(undefined8 *)&this->OnToolWarningMessage = 0;
  *(undefined8 *)&(this->OnToolWarningMessage).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolWarningMessage).field_0x10 = 0;
  *(undefined8 *)&(this->OnToolWarningMessage).field_0x18 = 2;
  (this->InputRouter).field0_0x0.DebugPtr = (UInputRouter *)0x0;
  (this->TargetManager).field0_0x0.DebugPtr = (UToolTargetManager *)0x0;
  (this->ToolManager).field0_0x0.DebugPtr = (UInteractiveToolManager *)0x0;
  (this->GizmoManager).field0_0x0.DebugPtr = (UInteractiveGizmoManager *)0x0;
  (this->ContextObjectStore).field0_0x0.DebugPtr = (UContextObjectStore *)0x0;
  *(undefined8 *)&this->CreateInputRouterFunc = 0;
  *(undefined8 *)&(this->CreateInputRouterFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateToolManagerFunc = 0;
  *(undefined8 *)&(this->CreateToolManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateToolTargetManagerFunc = 0;
  *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateGizmoManagerFunc = 0;
  *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->CreateContextStoreFunc = 0;
  *(undefined8 *)&(this->CreateContextStoreFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownInputRouterFunc = 0;
  *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownToolManagerFunc = 0;
  *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownToolTargetManagerFunc = 0;
  *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownGizmoManagerFunc = 0;
  *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x28 = 0;
  *(undefined8 *)&this->ShutdownContextStoreFunc = 0;
  *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x28 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ToolManagerClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->InputRouter).field0_0x0.DebugPtr = (UInputRouter *)0x0;
  (this->ToolManager).field0_0x0.DebugPtr = (UInteractiveToolManager *)0x0;
  (this->GizmoManager).field0_0x0.DebugPtr = (UInteractiveGizmoManager *)0x0;
  (this->TargetManager).field0_0x0.DebugPtr = (UToolTargetManager *)0x0;
  (this->ContextObjectStore).field0_0x0.DebugPtr = (UContextObjectStore *)0x0;
  local_18[0] = UInteractiveToolManager::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  FSoftObjectPtr::operator=(&(this->ToolManagerClass).SoftObjectPtr,(FObjectPtr)local_18);
  lVar4 = *(longlong *)&this->CreateInputRouterFunc;
  uVar5 = *(undefined8 *)&(this->CreateInputRouterFunc).field_0x8;
  puVar1 = &(this->CreateInputRouterFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->CreateInputRouterFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->CreateInputRouterFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->CreateInputRouterFunc).field_0x28;
  *(code **)&this->CreateInputRouterFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<UInputRouter_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UInputRouter_*,UInteractiveToolsContext::FContextInitInfo_const_&>
       ::Call;
  *(undefined8 *)&(this->CreateInputRouterFunc).field_0x8 = uStack_40;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x10 = 0x51ea86c0;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x14 = 1;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x18 = 0x496cd250;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x1c = 1;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x28 = 0;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea86c0,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->ShutdownInputRouterFunc;
  uVar6 = *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x8;
  puVar1 = &(this->ShutdownInputRouterFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->ShutdownInputRouterFunc).field_0x28;
  *(code **)&this->ShutdownInputRouterFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UInputRouter_*),void,UInputRouter_*>::Call;
  *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x8 = uVar5;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x10 = 0x51ea86e0;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x14 = 1;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x18 = 0x496cd310;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x1c = 1;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x28 = 0;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea86e0,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->CreateToolManagerFunc;
  uVar5 = *(undefined8 *)&(this->CreateToolManagerFunc).field_0x8;
  puVar1 = &(this->CreateToolManagerFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->CreateToolManagerFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->CreateToolManagerFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->CreateToolManagerFunc).field_0x28;
  *(code **)&this->CreateToolManagerFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_3>,UInteractiveToolManager_*,UInteractiveToolsContext::FContextInitInfo_const_&>
       ::Call;
  *(undefined8 *)&(this->CreateToolManagerFunc).field_0x8 = uVar6;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x10 = 0x51ea8700;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x14 = 1;
  *(UInteractiveToolsContext **)&(this->CreateToolManagerFunc).field_0x18 = this;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x28 = 0;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea8700,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->ShutdownToolManagerFunc;
  uVar6 = *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x8;
  puVar1 = &(this->ShutdownToolManagerFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->ShutdownToolManagerFunc).field_0x28;
  *(code **)&this->ShutdownToolManagerFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UInteractiveToolManager_*),void,UInteractiveToolManager_*>
       ::Call;
  *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x8 = uVar5;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x10 = 0x51ea8720;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x14 = 1;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x18 = 0x496cd340;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x1c = 1;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x28 = 0;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea8720,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->CreateToolTargetManagerFunc;
  uVar5 = *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x8;
  puVar1 = &(this->CreateToolTargetManagerFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->CreateToolTargetManagerFunc).field_0x28;
  *(code **)&this->CreateToolTargetManagerFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<UToolTargetManager_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UToolTargetManager_*,UInteractiveToolsContext::FContextInitInfo_const_&>
       ::Call;
  *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x8 = uVar6;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x10 = 0x51ea8740;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x14 = 1;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x18 = 0x496cd350;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x1c = 1;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x28 = 0;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea8740,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->ShutdownToolTargetManagerFunc;
  uVar6 = *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x8;
  puVar1 = &(this->ShutdownToolTargetManagerFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->ShutdownToolTargetManagerFunc).field_0x28;
  *(code **)&this->ShutdownToolTargetManagerFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UToolTargetManager_*),void,UToolTargetManager_*>::Call;
  *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x8 = uVar5;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x10 = 0x51ea8760;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x14 = 1;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x18 = 0x496cd400;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x1c = 1;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x28 = 0;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea8760,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->CreateGizmoManagerFunc;
  uVar5 = *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x8;
  puVar1 = &(this->CreateGizmoManagerFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->CreateGizmoManagerFunc).field_0x28;
  *(code **)&this->CreateGizmoManagerFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<UInteractiveGizmoManager_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UInteractiveGizmoManager_*,UInteractiveToolsContext::FContextInitInfo_const_&>
       ::Call;
  *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x8 = uVar6;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x10 = 0x51ea8780;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x14 = 1;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x18 = 0x496cd410;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x1c = 1;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x28 = 0;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea8780,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->ShutdownGizmoManagerFunc;
  uVar6 = *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x8;
  puVar1 = &(this->ShutdownGizmoManagerFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->ShutdownGizmoManagerFunc).field_0x28;
  *(code **)&this->ShutdownGizmoManagerFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UInteractiveGizmoManager_*),void,UInteractiveGizmoManager_*>
       ::Call;
  *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x8 = uVar5;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x10 = 0x51ea87a0;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x14 = 1;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x18 = 0x496cd4e0;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x1c = 1;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x28 = 0;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea87a0,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->CreateContextStoreFunc;
  uVar5 = *(undefined8 *)&(this->CreateContextStoreFunc).field_0x8;
  puVar1 = &(this->CreateContextStoreFunc).field_0x10;
  uVar2 = *(undefined4 *)puVar1;
  local_38 = *(longlong *)puVar1;
  uStack_30 = *(undefined8 *)&(this->CreateContextStoreFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->CreateContextStoreFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->CreateContextStoreFunc).field_0x28;
  *(code **)&this->CreateContextStoreFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<UContextObjectStore_*_(__cdecl*)(UInteractiveToolsContext::FContextInitInfo_const_&),UContextObjectStore_*,UInteractiveToolsContext::FContextInitInfo_const_&>
       ::Call;
  *(undefined8 *)&(this->CreateContextStoreFunc).field_0x8 = uVar6;
  uVar7 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x10 = 0x51ea87c0;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x14 = 1;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x18 = 0x496cd4f0;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x1c = 1;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x28 = 0;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))(uVar7,0x51ea87c0,uVar2,(int)lVar4,lVar4);
  }
  lVar4 = *(longlong *)&this->ShutdownContextStoreFunc;
  local_38 = *(longlong *)&(this->ShutdownContextStoreFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x18;
  uVar3 = *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->ShutdownContextStoreFunc).field_0x28;
  *(code **)&this->ShutdownContextStoreFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UContextObjectStore_*),void,UContextObjectStore_*>::Call;
  *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x8 = uVar5;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x10 = 0x51ea87e0;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x14 = 1;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x18 = 0x496cd240;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x1c = 1;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x28 = 0;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x2c = 0;
  local_28 = uVar3;
  if (lVar4 != 0) {
    plVar8 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar8 = plStack_20;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return this;
}

// ~UInteractiveToolsContext @ 1496d4780

void __thiscall UInteractiveToolsContext::~UInteractiveToolsContext(UInteractiveToolsContext *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UInteractiveToolsContext__6B_;
  pvVar1 = *(void **)&(this->ToolManagerClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(longlong *)&this->ShutdownContextStoreFunc != 0) {
    plVar2 = *(longlong **)&(this->ShutdownContextStoreFunc).field_0x28;
    plVar3 = (longlong *)&(this->ShutdownContextStoreFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ShutdownGizmoManagerFunc != 0) {
    plVar2 = *(longlong **)&(this->ShutdownGizmoManagerFunc).field_0x28;
    plVar3 = (longlong *)&(this->ShutdownGizmoManagerFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ShutdownToolTargetManagerFunc != 0) {
    plVar2 = *(longlong **)&(this->ShutdownToolTargetManagerFunc).field_0x28;
    plVar3 = (longlong *)&(this->ShutdownToolTargetManagerFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ShutdownToolManagerFunc != 0) {
    plVar2 = *(longlong **)&(this->ShutdownToolManagerFunc).field_0x28;
    plVar3 = (longlong *)&(this->ShutdownToolManagerFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ShutdownInputRouterFunc != 0) {
    plVar2 = *(longlong **)&(this->ShutdownInputRouterFunc).field_0x28;
    plVar3 = (longlong *)&(this->ShutdownInputRouterFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CreateContextStoreFunc != 0) {
    plVar2 = *(longlong **)&(this->CreateContextStoreFunc).field_0x28;
    plVar3 = (longlong *)&(this->CreateContextStoreFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CreateGizmoManagerFunc != 0) {
    plVar2 = *(longlong **)&(this->CreateGizmoManagerFunc).field_0x28;
    plVar3 = (longlong *)&(this->CreateGizmoManagerFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CreateToolTargetManagerFunc != 0) {
    plVar2 = *(longlong **)&(this->CreateToolTargetManagerFunc).field_0x28;
    plVar3 = (longlong *)&(this->CreateToolTargetManagerFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CreateToolManagerFunc != 0) {
    plVar2 = *(longlong **)&(this->CreateToolManagerFunc).field_0x28;
    plVar3 = (longlong *)&(this->CreateToolManagerFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CreateInputRouterFunc != 0) {
    plVar2 = *(longlong **)&(this->CreateInputRouterFunc).field_0x28;
    plVar3 = (longlong *)&(this->CreateInputRouterFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolWarningMessage).field_0x8,
             *(int *)&(this->OnToolWarningMessage).field_0x10);
  pvVar1 = *(void **)&(this->OnToolWarningMessage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolWarningMessage);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolNotificationMessage).field_0x8,
             *(int *)&(this->OnToolNotificationMessage).field_0x10);
  pvVar1 = *(void **)&(this->OnToolNotificationMessage).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolNotificationMessage);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1496d4f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveToolManager * __thiscall
`UInteractiveToolsContext::UInteractiveToolsContext'::__l2::<lambda_3>::operator()
          (void *this,FContextInitInfo *param_1)

{
  int iVar1;
  longlong lVar2;
  UInteractiveToolsContext *pUVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UInteractiveToolManager *pUVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  UClass *local_b8;
  FName local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)this;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  pUVar7 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0x270));
  if ((pUVar7 == (UClass *)0x0) &&
     ((((FSoftObjectPath *)(lVar2 + 0x278))->AssetPath).PackageName != (FName)0x0)) {
    pUVar8 = (UClass *)FSoftObjectPath::ResolveObject((FSoftObjectPath *)(lVar2 + 0x278));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    bVar6 = (*IsInAsyncLoadingThread)();
    if ((bVar6) && (pUVar8 != (UClass *)0x0)) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4));
      if (((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_1496d5017;
LAB_1496d5048:
      if (((uint)pUVar8->_padding_ >> 0x1e & 1) != 0) goto LAB_1496d5056;
      bVar6 = true;
    }
    else {
LAB_1496d5017:
      local_b8 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar2 + 0x270),(FObjectPtr)&local_b8);
      if (pUVar8 != (UClass *)0x0) goto LAB_1496d5048;
LAB_1496d5056:
      bVar6 = false;
    }
    pUVar7 = (UClass *)0x0;
    if (bVar6) {
      pUVar7 = pUVar8;
    }
  }
  if (pUVar7 != (UClass *)0x0) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      pUVar8 = UInteractiveToolManager::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) goto LAB_1496d50ba;
      }
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_1496d50ba:
  FVar4 = local_b0;
  pUVar3 = param_1->ToolsContext;
  local_b8 = (UClass *)0x0;
  if (local_b0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = UInteractiveToolManager::StaticClass();
  CheckIsClassChildOf_Internal(pUVar8,pUVar7);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  FVar5 = local_b0;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b0.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_b0.Number = FVar4.Number;
  local_a8._16_4_ = local_b0.ComparisonIndex.Value;
  local_a8._20_4_ = local_b0.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b0 = FVar5;
  local_a8._8_8_ = pUVar3;
  pUVar10 = (UInteractiveToolManager *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  (**(code **)(pUVar10->_padding_ + 0x2b0))
            (pUVar10,param_1->QueriesAPI,param_1->TransactionsAPI,param_1->InputRouter);
  return pUVar10;
}

// ActiveToolHasAccept @ 1496d6810

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::ActiveToolHasAccept(UInteractiveToolsContext *this,EToolSide param_1)

{
  UInteractiveToolManager *pUVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x300))();
  if (cVar2 != '\0') {
    pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
    plVar3 = (longlong *)(**(code **)(pUVar1->_padding_ + 800))(pUVar1,param_1);
    cVar2 = (**(code **)(*plVar3 + 0x2e8))(plVar3);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// CanAcceptActiveTool @ 1496d87f0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::CanAcceptActiveTool(UInteractiveToolsContext *this,EToolSide param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d87f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x338))();
  return (bool)uVar1;
}

// CanCancelActiveTool @ 1496d8d80

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::CanCancelActiveTool(UInteractiveToolsContext *this,EToolSide param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d8d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x340))();
  return (bool)uVar1;
}

// CanCompleteActiveTool @ 1496d8da0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::CanCompleteActiveTool(UInteractiveToolsContext *this,EToolSide param_1)

{
  UInteractiveToolManager *pUVar1;
  char cVar2;
  
  cVar2 = (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x300))();
  if (cVar2 != '\0') {
    pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,param_1);
    if (cVar2 == '\0') {
      return true;
    }
  }
  return false;
}

// CanStartTool @ 1496d8e00

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::CanStartTool
          (UInteractiveToolsContext *this,EToolSide param_1,FString *param_2)

{
  UInteractiveToolManager *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_18;
  
  pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2f0);
  pFVar4 = ::FString::FString(&local_18,param_2);
  uVar3 = (*pcVar2)(pUVar1,param_1,pFVar4);
  return (bool)uVar3;
}

// DeactivateActiveTool @ 1496da280

/* WARNING: Enum "EToolSide": Some values do not have unique names */

void __thiscall
UInteractiveToolsContext::DeactivateActiveTool
          (UInteractiveToolsContext *this,EToolSide param_1,EToolShutdownType param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496da287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x348))();
  return;
}

// DeactivateAllActiveTools @ 1496da2a0

void __thiscall
UInteractiveToolsContext::DeactivateAllActiveTools
          (UInteractiveToolsContext *this,EToolShutdownType param_1)

{
  UInteractiveToolManager *pUVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  EToolShutdownType EVar5;
  TObjectPtr<UInteractiveToolManager> *pTVar6;
  undefined1 local_res8 [8];
  
  if (((this->ToolManager).field0_0x0.DebugPtr != (UInteractiveToolManager *)0x0) ||
     (bVar2 = `UInteractiveToolsContext::DeactivateAllActiveTools'::__l3::<lambda_1>::operator()
                        (local_res8), bVar2)) {
    pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,1);
    if (cVar3 != '\0') {
      EVar5 = param_1;
      if (param_1 != Cancel) {
        pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
        plVar4 = (longlong *)(**(code **)(pUVar1->_padding_ + 800))(pUVar1,1,param_1);
        cVar3 = (**(code **)(*plVar4 + 0x2e8))(plVar4);
        if (cVar3 == '\0') {
          EVar5 = Completed;
        }
        else {
          pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
          cVar3 = (**(code **)(pUVar1->_padding_ + 0x338))(pUVar1,1);
          EVar5 = (cVar3 == '\0') + Accept;
        }
      }
      pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x348))(pUVar1,1,EVar5);
    }
    pTVar6 = &this->ToolManager;
    pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,2);
    if (cVar3 != '\0') {
      if (param_1 != Cancel) {
        plVar4 = (longlong *)
                 (**(code **)(((pTVar6->field0_0x0).DebugPtr)->_padding_ + 800))
                           ((pTVar6->field0_0x0).DebugPtr,2);
        cVar3 = (**(code **)(*plVar4 + 0x2e8))(plVar4);
        if (cVar3 == '\0') {
          param_1 = Completed;
        }
        else {
          cVar3 = (**(code **)(((pTVar6->field0_0x0).DebugPtr)->_padding_ + 0x338))
                            ((pTVar6->field0_0x0).DebugPtr,2);
          param_1 = (cVar3 == '\0') + Accept;
        }
      }
      (**(code **)(((pTVar6->field0_0x0).DebugPtr)->_padding_ + 0x348))
                ((pTVar6->field0_0x0).DebugPtr,2,param_1);
    }
  }
  return;
}

// EndTool @ 1496db810

/* WARNING: Enum "EToolSide": Some values do not have unique names */

void __thiscall
UInteractiveToolsContext::EndTool
          (UInteractiveToolsContext *this,EToolSide param_1,EToolShutdownType param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496db813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x310))();
  return;
}

// GetActiveToolName @ 1496dca70

/* WARNING: Enum "EToolSide": Some values do not have unique names */

FString * __thiscall
UInteractiveToolsContext::GetActiveToolName
          (UInteractiveToolsContext *this,FString *__return_storage_ptr__,EToolSide param_1)

{
  (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x330))();
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496dd8b0

UClass * __cdecl UInteractiveToolsContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolsContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolsContext",
               &Z_Registration_Info_UClass_UInteractiveToolsContext.InnerSingleton,
               StaticRegisterNativesUInteractiveToolsContext,0x2a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolsContext>,
               InternalVTableHelperCtorCaller<UInteractiveToolsContext>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolsContext.InnerSingleton;
}

// HasActiveTool @ 1496dea10

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::HasActiveTool(UInteractiveToolsContext *this,EToolSide param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496dea17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x300))();
  return (bool)uVar1;
}

// Initialize @ 1496def60

void __thiscall
UInteractiveToolsContext::Initialize
          (UInteractiveToolsContext *this,IToolsContextQueriesAPI *param_1,
          IToolsContextTransactionsAPI *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  UInputRouter *pUVar4;
  UContextObjectStore *pUVar5;
  UInteractiveToolManager *pUVar6;
  UToolTargetManager *pUVar7;
  UInteractiveGizmoManager *pUVar8;
  longlong *plVar9;
  UInteractiveToolsContext *local_28;
  IToolsContextQueriesAPI *local_20;
  IToolsContextTransactionsAPI *local_18;
  UInputRouter *local_10;
  
  local_10 = (UInputRouter *)0x0;
  local_28 = this;
  local_20 = param_1;
  local_18 = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateInputRouterFunc);
  pcVar1 = *(code **)&this->CreateInputRouterFunc;
  plVar2 = *(longlong **)&(this->CreateInputRouterFunc).field_0x28;
  plVar9 = (longlong *)&(this->CreateInputRouterFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar3 = (**(code **)(*plVar9 + 8))();
  pUVar4 = (UInputRouter *)(*pcVar1)(uVar3,&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UInputRouter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->InputRouter).field0_0x0.DebugPtr = pUVar4;
  local_10 = pUVar4;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateContextStoreFunc);
  pcVar1 = *(code **)&this->CreateContextStoreFunc;
  plVar2 = *(longlong **)&(this->CreateContextStoreFunc).field_0x28;
  plVar9 = (longlong *)&(this->CreateContextStoreFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar3 = (**(code **)(*plVar9 + 8))();
  pUVar5 = (UContextObjectStore *)(*pcVar1)(uVar3,&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UContextObjectStore *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ContextObjectStore).field0_0x0.DebugPtr = pUVar5;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateToolManagerFunc);
  pcVar1 = *(code **)&this->CreateToolManagerFunc;
  plVar2 = *(longlong **)&(this->CreateToolManagerFunc).field_0x28;
  plVar9 = (longlong *)&(this->CreateToolManagerFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar3 = (**(code **)(*plVar9 + 8))();
  pUVar6 = (UInteractiveToolManager *)(*pcVar1)(uVar3,&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UInteractiveToolManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ToolManager).field0_0x0.DebugPtr = pUVar6;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateToolTargetManagerFunc);
  pcVar1 = *(code **)&this->CreateToolTargetManagerFunc;
  plVar2 = *(longlong **)&(this->CreateToolTargetManagerFunc).field_0x28;
  plVar9 = (longlong *)&(this->CreateToolTargetManagerFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar3 = (**(code **)(*plVar9 + 8))();
  pUVar7 = (UToolTargetManager *)(*pcVar1)(uVar3,&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UToolTargetManager *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->TargetManager).field0_0x0.DebugPtr = pUVar7;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateGizmoManagerFunc);
  pcVar1 = *(code **)&this->CreateGizmoManagerFunc;
  plVar2 = *(longlong **)&(this->CreateGizmoManagerFunc).field_0x28;
  plVar9 = (longlong *)&(this->CreateGizmoManagerFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar3 = (**(code **)(*plVar9 + 8))();
  pUVar8 = (UInteractiveGizmoManager *)(*pcVar1)(uVar3,&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 != (UInteractiveGizmoManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->GizmoManager).field0_0x0.DebugPtr = pUVar8;
  return;
}

// IsToolActive @ 1496e2650

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::IsToolActive
          (UInteractiveToolsContext *this,EToolSide param_1,FString *param_2)

{
  UInteractiveToolManager *pUVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  wchar_t *local_18;
  int local_10;
  
  pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,&local_18,param_1);
  iVar3 = (param_2->Data).ArrayNum;
  if (local_10 == iVar3) {
    if (local_10 < 2) {
      bVar4 = true;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (local_18,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
  }
  else {
    bVar4 = local_10 + iVar3 == 1;
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return bVar4;
}

// PostToolNotificationMessage @ 1496e3090

void __thiscall
UInteractiveToolsContext::PostToolNotificationMessage(UInteractiveToolsContext *this,FText *param_1)

{
  TMulticastDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnToolNotificationMessage,param_1);
  return;
}

// PostToolWarningMessage @ 1496e30a0

void __thiscall
UInteractiveToolsContext::PostToolWarningMessage(UInteractiveToolsContext *this,FText *param_1)

{
  TMulticastDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnToolWarningMessage,param_1);
  return;
}

// SetCreateContextStoreFunc @ 1496e58f0

void __thiscall
UInteractiveToolsContext::SetCreateContextStoreFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<UContextObjectStore_*___cdecl(UInteractiveToolsContext::FContextInitInfo_const_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->CreateContextStoreFunc;
  uVar2 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->CreateContextStoreFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->CreateContextStoreFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->CreateContextStoreFunc).field_0x28;
  *(undefined8 *)&this->CreateContextStoreFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CreateContextStoreFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->CreateContextStoreFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetCreateGizmoManagerFunc @ 1496e5960

void __thiscall
UInteractiveToolsContext::SetCreateGizmoManagerFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<UInteractiveGizmoManager_*___cdecl(UInteractiveToolsContext::FContextInitInfo_const_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->CreateGizmoManagerFunc;
  uVar2 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x28;
  *(undefined8 *)&this->CreateGizmoManagerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CreateGizmoManagerFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->CreateGizmoManagerFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e59b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetCreateInputRouterFunc @ 1496e59d0

void __thiscall
UInteractiveToolsContext::SetCreateInputRouterFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<UInputRouter_*___cdecl(UInteractiveToolsContext::FContextInitInfo_const_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->CreateInputRouterFunc;
  uVar2 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->CreateInputRouterFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->CreateInputRouterFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->CreateInputRouterFunc).field_0x28;
  *(undefined8 *)&this->CreateInputRouterFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CreateInputRouterFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->CreateInputRouterFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetCreateToolManagerFunc @ 1496e5a40

void __thiscall
UInteractiveToolsContext::SetCreateToolManagerFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<UInteractiveToolManager_*___cdecl(UInteractiveToolsContext::FContextInitInfo_const_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->CreateToolManagerFunc;
  uVar2 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->CreateToolManagerFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->CreateToolManagerFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->CreateToolManagerFunc).field_0x28;
  *(undefined8 *)&this->CreateToolManagerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CreateToolManagerFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->CreateToolManagerFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetCreateToolTargetManagerFunc @ 1496e5ab0

void __thiscall
UInteractiveToolsContext::SetCreateToolTargetManagerFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<UToolTargetManager_*___cdecl(UInteractiveToolsContext::FContextInitInfo_const_&)>
          *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->CreateToolTargetManagerFunc;
  uVar2 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x28;
  *(undefined8 *)&this->CreateToolTargetManagerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->CreateToolTargetManagerFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x10 =
       *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x20 =
       *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->CreateToolTargetManagerFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetShutdownContextStoreFunc @ 1496e5d30

void __thiscall
UInteractiveToolsContext::SetShutdownContextStoreFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<void___cdecl(UContextObjectStore_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->ShutdownContextStoreFunc;
  uVar2 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x28;
  *(undefined8 *)&this->ShutdownContextStoreFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShutdownContextStoreFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->ShutdownContextStoreFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetShutdownGizmoManagerFunc @ 1496e5da0

void __thiscall
UInteractiveToolsContext::SetShutdownGizmoManagerFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<void___cdecl(UInteractiveGizmoManager_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->ShutdownGizmoManagerFunc;
  uVar2 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x28;
  *(undefined8 *)&this->ShutdownGizmoManagerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShutdownGizmoManagerFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->ShutdownGizmoManagerFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetShutdownInputRouterFunc @ 1496e5e10

void __thiscall
UInteractiveToolsContext::SetShutdownInputRouterFunc
          (UInteractiveToolsContext *this,TUniqueFunction<void___cdecl(UInputRouter_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->ShutdownInputRouterFunc;
  uVar2 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x28;
  *(undefined8 *)&this->ShutdownInputRouterFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShutdownInputRouterFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->ShutdownInputRouterFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetShutdownToolManagerFunc @ 1496e5e80

void __thiscall
UInteractiveToolsContext::SetShutdownToolManagerFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<void___cdecl(UInteractiveToolManager_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->ShutdownToolManagerFunc;
  uVar2 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x28;
  *(undefined8 *)&this->ShutdownToolManagerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShutdownToolManagerFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->ShutdownToolManagerFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetShutdownToolTargetManagerFunc @ 1496e5ef0

void __thiscall
UInteractiveToolsContext::SetShutdownToolTargetManagerFunc
          (UInteractiveToolsContext *this,
          TUniqueFunction<void___cdecl(UToolTargetManager_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->ShutdownToolTargetManagerFunc;
  uVar2 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x28;
  *(undefined8 *)&this->ShutdownToolTargetManagerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->ShutdownToolTargetManagerFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x10 =
       *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x20 =
       *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->ShutdownToolTargetManagerFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001496e5f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// Shutdown @ 1496e6450

void __thiscall UInteractiveToolsContext::Shutdown(UInteractiveToolsContext *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  TObjectPtr<UInteractiveToolManager>_u_0 local_res8;
  
  local_res8 = *(TObjectPtr<UInteractiveToolManager>_u_0 *)&(this->InputRouter).field0_0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShutdownInputRouterFunc);
  pcVar1 = *(code **)&this->ShutdownInputRouterFunc;
  plVar2 = *(longlong **)&(this->ShutdownInputRouterFunc).field_0x28;
  plVar4 = (longlong *)&(this->ShutdownInputRouterFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_res8);
  (this->InputRouter).field0_0x0.DebugPtr = (UInputRouter *)0x0;
  local_res8 = *(TObjectPtr<UInteractiveToolManager>_u_0 *)&(this->GizmoManager).field0_0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShutdownGizmoManagerFunc);
  pcVar1 = *(code **)&this->ShutdownGizmoManagerFunc;
  plVar2 = *(longlong **)&(this->ShutdownGizmoManagerFunc).field_0x28;
  plVar4 = (longlong *)&(this->ShutdownGizmoManagerFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_res8);
  (this->GizmoManager).field0_0x0.DebugPtr = (UInteractiveGizmoManager *)0x0;
  local_res8 = (this->ToolManager).field0_0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShutdownToolManagerFunc);
  pcVar1 = *(code **)&this->ShutdownToolManagerFunc;
  plVar2 = *(longlong **)&(this->ShutdownToolManagerFunc).field_0x28;
  plVar4 = (longlong *)&(this->ShutdownToolManagerFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_res8);
  (this->ToolManager).field0_0x0.DebugPtr = (UInteractiveToolManager *)0x0;
  local_res8 = *(TObjectPtr<UInteractiveToolManager>_u_0 *)&(this->TargetManager).field0_0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShutdownToolTargetManagerFunc);
  pcVar1 = *(code **)&this->ShutdownToolTargetManagerFunc;
  plVar2 = *(longlong **)&(this->ShutdownToolTargetManagerFunc).field_0x28;
  plVar4 = (longlong *)&(this->ShutdownToolTargetManagerFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_res8);
  (this->TargetManager).field0_0x0.DebugPtr = (UToolTargetManager *)0x0;
  local_res8 = *(TObjectPtr<UInteractiveToolManager>_u_0 *)&(this->ContextObjectStore).field0_0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShutdownContextStoreFunc);
  pcVar1 = *(code **)&this->ShutdownContextStoreFunc;
  plVar2 = *(longlong **)&(this->ShutdownContextStoreFunc).field_0x28;
  plVar4 = (longlong *)&(this->ShutdownContextStoreFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_res8);
  (this->ContextObjectStore).field0_0x0.DebugPtr = (UContextObjectStore *)0x0;
  return;
}

// StartTool @ 1496e6620

/* WARNING: Enum "EToolSide": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UInteractiveToolsContext::StartTool
          (UInteractiveToolsContext *this,EToolSide param_1,FString *param_2)

{
  UInteractiveToolManager *pUVar1;
  char cVar2;
  
  cVar2 = (**(code **)(((this->ToolManager).field0_0x0.DebugPtr)->_padding_ + 0x2e0))();
  if (cVar2 == '\0') {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  pUVar1 = (this->ToolManager).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,param_1);
  return true;
}

// StaticRegisterNativesUInteractiveToolsContext @ 1496e6720

void __cdecl UInteractiveToolsContext::StaticRegisterNativesUInteractiveToolsContext(void)

{
  return;
}

// operator() @ 150544290

bool __thiscall
`UInteractiveToolsContext::DeactivateAllActiveTools'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5072881762745450660>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5072881762745450660>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

