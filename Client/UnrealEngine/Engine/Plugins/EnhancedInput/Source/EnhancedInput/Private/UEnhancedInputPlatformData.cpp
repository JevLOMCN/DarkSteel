// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6bb270

UClass * __cdecl UEnhancedInputPlatformData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputPlatformData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputPlatformData",
               &Z_Registration_Info_UClass_UEnhancedInputPlatformData.InnerSingleton,
               StaticRegisterNativesUEnhancedInputPlatformData,0x78,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputPlatformData>,
               InternalVTableHelperCtorCaller<UEnhancedInputPlatformData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputPlatformData.InnerSingleton;
}

// UEnhancedInputPlatformData @ 14a6cb990

UEnhancedInputPlatformData * __thiscall
UEnhancedInputPlatformData::UEnhancedInputPlatformData
          (UEnhancedInputPlatformData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputPlatformData__6B_;
  *(undefined8 *)&this->MappingContextRedirects = 0;
  *(undefined8 *)&(this->MappingContextRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->MappingContextRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x34 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MappingContextRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x48 = 0;
  return this;
}

// UEnhancedInputPlatformData @ 14a6cb9e0

UEnhancedInputPlatformData * __thiscall
UEnhancedInputPlatformData::UEnhancedInputPlatformData
          (UEnhancedInputPlatformData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputPlatformData__6B_;
  *(undefined8 *)&this->MappingContextRedirects = 0;
  *(undefined8 *)&(this->MappingContextRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->MappingContextRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x34 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MappingContextRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x48 = 0;
  return this;
}

// ~UEnhancedInputPlatformData @ 14a6cf220

void __thiscall
UEnhancedInputPlatformData::~UEnhancedInputPlatformData(UEnhancedInputPlatformData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UEnhancedInputPlatformData__6B_;
  *(undefined4 *)&(this->MappingContextRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MappingContextRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappingContextRedirects);
  UObject::~UObject((UObject *)this);
  return;
}

// GetContextRedirect @ 14a6deba0

UInputMappingContext * __thiscall
UEnhancedInputPlatformData::GetContextRedirect
          (UEnhancedInputPlatformData *this,UInputMappingContext *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  UInputMappingContext *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
           ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
                   *)&this->MappingContextRedirects,
                  (TObjectPtr<UInputMappingContext_const_>)&local_res8);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (UInputMappingContext *)(FObjectPtr)pFVar1->Handle;
  }
  return param_1;
}

// GetPrivateStaticClass @ 14a6e0a30

UClass * __cdecl UEnhancedInputPlatformData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputPlatformData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputPlatformData",
               &Z_Registration_Info_UClass_UEnhancedInputPlatformData.InnerSingleton,
               StaticRegisterNativesUEnhancedInputPlatformData,0x78,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedInputPlatformData>,
               InternalVTableHelperCtorCaller<UEnhancedInputPlatformData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputPlatformData.InnerSingleton;
}

// StaticRegisterNativesUEnhancedInputPlatformData @ 14a6fb430

void __cdecl UEnhancedInputPlatformData::StaticRegisterNativesUEnhancedInputPlatformData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedInputPlatformData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetContextRedirect @ 14a704890

void __cdecl
UEnhancedInputPlatformData::execGetContextRedirect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TObjectPtr<UInputMappingContext_const_>_u_0 *pTVar3;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_res10 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pTVar3 = &TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
            ::Find((TMapBase<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
                    *)(param_1 + 1),(TObjectPtr<UInputMappingContext_const_>)&local_res10)->
            field0_0x0;
  if (pTVar3 != (TObjectPtr<UInputMappingContext_const_>_u_0 *)0x0) {
    *(TObjectPtr<UInputMappingContext_const_>_u_0 *)param_3 = *pTVar3;
    return;
  }
  *(UObject **)param_3 = pUVar2;
  return;
}

