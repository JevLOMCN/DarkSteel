// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149ce6080

UClass * __cdecl UPCGGenerateGraphAsync::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenerateGraphAsync.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenerateGraphAsync",
               &Z_Registration_Info_UClass_UPCGGenerateGraphAsync.InnerSingleton,
               StaticRegisterNativesUPCGGenerateGraphAsync,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGenerateGraphAsync>,
               InternalVTableHelperCtorCaller<UPCGGenerateGraphAsync>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenerateGraphAsync.InnerSingleton;
}

// UPCGGenerateGraphAsync @ 149d34240

UPCGGenerateGraphAsync * __thiscall
UPCGGenerateGraphAsync::UPCGGenerateGraphAsync(UPCGGenerateGraphAsync *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->Seed = 0x2a;
  this->_padding_ = (longlong)&___7UPCGGenerateGraphAsync__6B_;
  *(undefined8 *)&this->OnCompleted = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x10 = 0;
  (this->Graph).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  return this;
}

// UPCGGenerateGraphAsync @ 149d34280

UPCGGenerateGraphAsync * __thiscall
UPCGGenerateGraphAsync::UPCGGenerateGraphAsync
          (UPCGGenerateGraphAsync *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->Seed = 0x2a;
  this->_padding_ = (longlong)&___7UPCGGenerateGraphAsync__6B_;
  *(undefined8 *)&this->OnCompleted = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnCompleted).field_0x10 = 0;
  (this->Graph).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  return this;
}

// ~UPCGGenerateGraphAsync @ 149d34f40

void __thiscall UPCGGenerateGraphAsync::~UPCGGenerateGraphAsync(UPCGGenerateGraphAsync *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGGenerateGraphAsync__6B_;
  pvVar1 = *(void **)&(this->OnCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCompleted);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// Activate @ 149d3b440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGGenerateGraphAsync::Activate(UPCGGenerateGraphAsync *this)

{
  undefined1 local_res8 [32];
  
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  local_res8[0] = 1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCompleted,local_res8);
                    /* WARNING: Could not recover jumptable at 0x000149d3b483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// GenerateGraphAsync @ 149d4d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGGenerateGraphAsync * __cdecl
UPCGGenerateGraphAsync::GenerateGraphAsync(UPCGGraphInterface *param_1,int param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGGenerateGraphAsync *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UPCGGenerateGraphAsync *)
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

// GetPrivateStaticClass @ 149d54360

UClass * __cdecl UPCGGenerateGraphAsync::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenerateGraphAsync.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenerateGraphAsync",
               &Z_Registration_Info_UClass_UPCGGenerateGraphAsync.InnerSingleton,
               StaticRegisterNativesUPCGGenerateGraphAsync,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGenerateGraphAsync>,
               InternalVTableHelperCtorCaller<UPCGGenerateGraphAsync>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenerateGraphAsync.InnerSingleton;
}

// OnGenerationDone @ 149d59cb0

void __thiscall
UPCGGenerateGraphAsync::OnGenerationDone
          (UPCGGenerateGraphAsync *this,IPCGGraphExecutionSource *param_1,
          EPCGGenerationStatus param_2)

{
  EPCGGenerationStatus local_res18 [16];
  
  local_res18[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCompleted,local_res18)
  ;
                    /* WARNING: Could not recover jumptable at 0x000149d59cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// StaticRegisterNativesUPCGGenerateGraphAsync @ 149d66210

void __cdecl UPCGGenerateGraphAsync::StaticRegisterNativesUPCGGenerateGraphAsync(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGGenerateGraphAsync_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGenerateGraphAsync @ 149d69e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UPCGGenerateGraphAsync::execGenerateGraphAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(UObject **)param_3 = pUVar2;
  return;
}

