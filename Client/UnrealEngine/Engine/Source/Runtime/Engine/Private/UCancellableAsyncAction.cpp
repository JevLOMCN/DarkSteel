// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147b9e700

UClass * __cdecl UCancellableAsyncAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCancellableAsyncAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CancellableAsyncAction",
               &Z_Registration_Info_UClass_UCancellableAsyncAction.InnerSingleton,
               StaticRegisterNativesUCancellableAsyncAction,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCancellableAsyncAction>,
               InternalVTableHelperCtorCaller<UCancellableAsyncAction>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCancellableAsyncAction.InnerSingleton;
}

// UCancellableAsyncAction @ 147bbacb0

UCancellableAsyncAction * __thiscall
UCancellableAsyncAction::UCancellableAsyncAction
          (UCancellableAsyncAction *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  *(undefined ***)this = &___7UCancellableAsyncAction__6B_;
  return this;
}

// UCancellableAsyncAction @ 147bbace0

UCancellableAsyncAction * __thiscall
UCancellableAsyncAction::UCancellableAsyncAction
          (UCancellableAsyncAction *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  *(undefined ***)this = &___7UCancellableAsyncAction__6B_;
  return this;
}

// ~UCancellableAsyncAction @ 147bbf110

void __thiscall UCancellableAsyncAction::~UCancellableAsyncAction(UCancellableAsyncAction *this)

{
  *(undefined ***)this = &___7UCancellableAsyncAction__6B_;
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// BeginDestroy @ 147bcac40

void __thiscall UCancellableAsyncAction::BeginDestroy(UCancellableAsyncAction *this)

{
  (**(code **)(*(longlong *)this + 0x2d0))();
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Cancel @ 147bcb9a0

void __thiscall UCancellableAsyncAction::Cancel(UCancellableAsyncAction *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147bcb9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c8))();
  return;
}

// GetPrivateStaticClass @ 147be4ae0

UClass * __cdecl UCancellableAsyncAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCancellableAsyncAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CancellableAsyncAction",
               &Z_Registration_Info_UClass_UCancellableAsyncAction.InnerSingleton,
               StaticRegisterNativesUCancellableAsyncAction,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCancellableAsyncAction>,
               InternalVTableHelperCtorCaller<UCancellableAsyncAction>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCancellableAsyncAction.InnerSingleton;
}

// GetTimerManager @ 147bebef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerManager * __thiscall UCancellableAsyncAction::GetTimerManager(UCancellableAsyncAction *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    return *(FTimerManager **)&pUVar2[7].field_0x8;
  }
  return (FTimerManager *)0x0;
}

// IsActive @ 147bf0500

bool __thiscall UCancellableAsyncAction::IsActive(UCancellableAsyncAction *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147bf0503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2e0))();
  return (bool)uVar1;
}

// IsRegistered @ 147bf1140

bool __thiscall UCancellableAsyncAction::IsRegistered(UCancellableAsyncAction *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  return bVar1;
}

// ShouldBroadcastDelegates @ 147c01f10

bool __thiscall UCancellableAsyncAction::ShouldBroadcastDelegates(UCancellableAsyncAction *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x28);
  return bVar1;
}

// StaticRegisterNativesUCancellableAsyncAction @ 147c034f0

void __cdecl UCancellableAsyncAction::StaticRegisterNativesUCancellableAsyncAction(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCancellableAsyncAction_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCancel @ 147c13940

void __cdecl UCancellableAsyncAction::execCancel(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147c13958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d0))();
  return;
}

// execIsActive @ 147c147a0

void __cdecl UCancellableAsyncAction::execIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

