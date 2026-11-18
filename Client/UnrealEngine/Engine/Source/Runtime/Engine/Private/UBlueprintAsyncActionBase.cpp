// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// UBlueprintAsyncActionBase @ 147d79610

UBlueprintAsyncActionBase * __thiscall
UBlueprintAsyncActionBase::UBlueprintAsyncActionBase
          (UBlueprintAsyncActionBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintAsyncActionBase__6B_;
  (this->RegisteredWithGameInstance).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UBlueprintAsyncActionBase @ 147d79640

UBlueprintAsyncActionBase * __thiscall
UBlueprintAsyncActionBase::UBlueprintAsyncActionBase
          (UBlueprintAsyncActionBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintAsyncActionBase__6B_;
  (this->RegisteredWithGameInstance).WeakPtr = (FWeakObjectPtr)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  }
  return this;
}

// ~UBlueprintAsyncActionBase @ 147d7b950

void __thiscall
UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase(UBlueprintAsyncActionBase *this)

{
  this->_padding_ = (longlong)&___7UBlueprintAsyncActionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 147d82330

void __thiscall UBlueprintAsyncActionBase::Activate(UBlueprintAsyncActionBase *this)

{
  return;
}

// GetPrivateStaticClass @ 147da78b0

UClass * __cdecl UBlueprintAsyncActionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintAsyncActionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintAsyncActionBase",
               &Z_Registration_Info_UClass_UBlueprintAsyncActionBase.InnerSingleton,
               StaticRegisterNativesUBlueprintAsyncActionBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintAsyncActionBase>,
               InternalVTableHelperCtorCaller<UBlueprintAsyncActionBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintAsyncActionBase.InnerSingleton;
}

// RegisterWithGameInstance @ 147dbc6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UBlueprintAsyncActionBase::RegisterWithGameInstance
          (UBlueprintAsyncActionBase *this,UGameInstance *param_1)

{
  UObject *pUVar1;
  UGameInstance *local_res10;
  
  if (param_1 != (UGameInstance *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&(this->RegisteredWithGameInstance).WeakPtr);
    if (pUVar1 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0x410))(pUVar1,this);
    }
    (**(code **)(param_1->_padding_ + 0x408))(param_1,this);
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->RegisteredWithGameInstance).WeakPtr,(FObjectPtr)&local_res10);
  }
  return;
}

// RegisterWithGameInstance @ 147dbc740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UBlueprintAsyncActionBase::RegisterWithGameInstance
          (UBlueprintAsyncActionBase *this,UObject *param_1)

{
  UWorld *pUVar1;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((pUVar1 != (UWorld *)0x0) &&
     ((pUVar1->OwningGameInstance).field0_0x0.DebugPtr != (UGameInstance *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147dbc777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2b8))(this);
    return;
  }
  return;
}

// SetReadyToDestroy @ 147dc1060

void __thiscall UBlueprintAsyncActionBase::SetReadyToDestroy(UBlueprintAsyncActionBase *this)

{
  UObject *pUVar1;
  
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pUVar1 = FWeakObjectPtr::Get(&(this->RegisteredWithGameInstance).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x410))(pUVar1,this);
    (this->RegisteredWithGameInstance).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// StaticRegisterNativesUBlueprintAsyncActionBase @ 147dc3fa0

void __cdecl UBlueprintAsyncActionBase::StaticRegisterNativesUBlueprintAsyncActionBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActivate @ 147dca3f0

void __cdecl UBlueprintAsyncActionBase::execActivate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147dca408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

