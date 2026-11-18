// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 24

// StaticClass @ 14e1092c0

UClass * __cdecl UOptimusRawBufferDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusRawBufferDataInterface",
               &Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusRawBufferDataInterface,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusRawBufferDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusRawBufferDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.InnerSingleton;
}

// CreateProvider<UOptimusImplicitPersistentBufferDataProvider> @ 14e128e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e128fdd) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusImplicitPersistentBufferDataProvider * __thiscall
UOptimusRawBufferDataInterface::CreateProvider<UOptimusImplicitPersistentBufferDataProvider>
          (UOptimusRawBufferDataInterface *this,TObjectPtr<UObject> param_1)

{
  FShaderValueType *pFVar1;
  TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UOptimusImplicitPersistentBufferDataProvider *pUVar9;
  UOptimusComponentSourceBinding *this_00;
  FString *pFVar10;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar11;
  longlong *plVar12;
  FString *pFVar13;
  undefined1 auStack_168 [32];
  FString local_148;
  UObject *local_138;
  UObject *local_130;
  TOptional<FString>_u_0 local_128;
  undefined1 local_118 [128];
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_98;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UOptimusImplicitPersistentBufferDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar8);
  local_118._8_8_ = pUVar7;
  pUVar9 = (UOptimusImplicitPersistentBufferDataProvider *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar12 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar8);
    if ((bVar4) && (local_138 = *(UObject **)param_1.field0_0x0, local_138 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_138);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9->_padding_,(FObjectPtr)&local_138);
      this_00 = (UOptimusComponentSourceBinding *)
                FWeakObjectPtr::Get(&(this->ComponentSourceBinding).WeakPtr);
      local_130 = (UObject *)0x0;
      if (this_00 != (UOptimusComponentSourceBinding *)0x0) {
        local_130 = (UObject *)UOptimusComponentSourceBinding::GetComponentSource(this_00);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_130);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9->_padding_,(FObjectPtr)&local_130);
      iVar5 = FShaderValueType::GetResourceElementSize((this->ValueType).ValueTypePtr);
      *(int *)&pUVar9->_padding_ = iVar5;
      pFVar1 = (this->ValueType).ValueTypePtr;
      if ((pFVar1->DimensionType != Vector) ||
         (uVar6 = 4, (pFVar1->field2_0x2).VectorElemCount != '\x03')) {
        uVar6 = 0;
      }
      TVar2.WeakPtr = (FWeakObjectPtr)pUVar9->_padding_;
      *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = uVar6;
      pFVar10 = (FString *)
                FOptimusDataDomain::AsExpression
                          (&this->DataDomain,(TOptional<FString> *)&local_128.TypedValue);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      pFVar13 = &local_148;
      if (*(int *)((longlong)&pFVar10->Data + 0xc) != -1) {
        pFVar13 = pFVar10;
      }
      pTVar11 = Optimus::ParseExecutionDomainExpression(&local_98,pFVar13,TVar2);
      TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::operator=
                ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                  *)&pUVar9->_padding_,pTVar11);
      if ((1 < (ulonglong)local_98.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UOptimusImplicitPersistentBufferDataProvider *)(*pcVar3)();
        return pUVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
      if ((local_128.TypedValue.Data.ArrayMax != -1) &&
         (local_128.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.TypedValue.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar9;
}

// CreateProvider<UOptimusPersistentBufferDataProvider> @ 14e129030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e12920d) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusPersistentBufferDataProvider * __thiscall
UOptimusRawBufferDataInterface::CreateProvider<UOptimusPersistentBufferDataProvider>
          (UOptimusRawBufferDataInterface *this,TObjectPtr<UObject> param_1)

{
  FShaderValueType *pFVar1;
  TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UOptimusPersistentBufferDataProvider *pUVar9;
  UOptimusComponentSourceBinding *this_00;
  FString *pFVar10;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar11;
  longlong *plVar12;
  FString *pFVar13;
  undefined1 auStack_168 [32];
  FString local_148;
  UObject *local_138;
  UObject *local_130;
  TOptional<FString>_u_0 local_128;
  undefined1 local_118 [128];
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_98;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UOptimusPersistentBufferDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar8);
  local_118._8_8_ = pUVar7;
  pUVar9 = (UOptimusPersistentBufferDataProvider *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar12 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar8);
    if ((bVar4) && (local_138 = *(UObject **)param_1.field0_0x0, local_138 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_138);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9->_padding_,(FObjectPtr)&local_138);
      this_00 = (UOptimusComponentSourceBinding *)
                FWeakObjectPtr::Get(&(this->ComponentSourceBinding).WeakPtr);
      local_130 = (UObject *)0x0;
      if (this_00 != (UOptimusComponentSourceBinding *)0x0) {
        local_130 = (UObject *)UOptimusComponentSourceBinding::GetComponentSource(this_00);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_130);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9->_padding_,(FObjectPtr)&local_130);
      iVar5 = FShaderValueType::GetResourceElementSize((this->ValueType).ValueTypePtr);
      *(int *)&pUVar9->_padding_ = iVar5;
      pFVar1 = (this->ValueType).ValueTypePtr;
      if ((pFVar1->DimensionType != Vector) ||
         (uVar6 = 4, (pFVar1->field2_0x2).VectorElemCount != '\x03')) {
        uVar6 = 0;
      }
      TVar2.WeakPtr = (FWeakObjectPtr)pUVar9->_padding_;
      *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = uVar6;
      pFVar10 = (FString *)
                FOptimusDataDomain::AsExpression
                          (&this->DataDomain,(TOptional<FString> *)&local_128.TypedValue);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      pFVar13 = &local_148;
      if (*(int *)((longlong)&pFVar10->Data + 0xc) != -1) {
        pFVar13 = pFVar10;
      }
      pTVar11 = Optimus::ParseExecutionDomainExpression(&local_98,pFVar13,TVar2);
      TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::operator=
                ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                  *)&pUVar9->_padding_,pTVar11);
      if ((1 < (ulonglong)local_98.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UOptimusPersistentBufferDataProvider *)(*pcVar3)();
        return pUVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
      if ((local_128.TypedValue.Data.ArrayMax != -1) &&
         (local_128.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.TypedValue.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar9;
}

// CreateProvider<UOptimusTransientBufferDataProvider> @ 14e129260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e12943d) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusTransientBufferDataProvider * __thiscall
UOptimusRawBufferDataInterface::CreateProvider<UOptimusTransientBufferDataProvider>
          (UOptimusRawBufferDataInterface *this,TObjectPtr<UObject> param_1)

{
  FShaderValueType *pFVar1;
  TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UOptimusTransientBufferDataProvider *pUVar9;
  UOptimusComponentSourceBinding *this_00;
  FString *pFVar10;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar11;
  longlong *plVar12;
  FString *pFVar13;
  undefined1 auStack_168 [32];
  FString local_148;
  UObject *local_138;
  UObject *local_130;
  TOptional<FString>_u_0 local_128;
  undefined1 local_118 [128];
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_98;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UOptimusTransientBufferDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar8);
  local_118._8_8_ = pUVar7;
  pUVar9 = (UOptimusTransientBufferDataProvider *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar12 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar8);
    if ((bVar4) && (local_138 = *(UObject **)param_1.field0_0x0, local_138 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_138);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9->_padding_,(FObjectPtr)&local_138);
      this_00 = (UOptimusComponentSourceBinding *)
                FWeakObjectPtr::Get(&(this->ComponentSourceBinding).WeakPtr);
      local_130 = (UObject *)0x0;
      if (this_00 != (UOptimusComponentSourceBinding *)0x0) {
        local_130 = (UObject *)UOptimusComponentSourceBinding::GetComponentSource(this_00);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_130);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9->_padding_,(FObjectPtr)&local_130);
      iVar5 = FShaderValueType::GetResourceElementSize((this->ValueType).ValueTypePtr);
      *(int *)&pUVar9->_padding_ = iVar5;
      pFVar1 = (this->ValueType).ValueTypePtr;
      if ((pFVar1->DimensionType != Vector) ||
         (uVar6 = 4, (pFVar1->field2_0x2).VectorElemCount != '\x03')) {
        uVar6 = 0;
      }
      TVar2.WeakPtr = (FWeakObjectPtr)pUVar9->_padding_;
      *(undefined4 *)((longlong)&pUVar9->_padding_ + 4) = uVar6;
      pFVar10 = (FString *)
                FOptimusDataDomain::AsExpression
                          (&this->DataDomain,(TOptional<FString> *)&local_128.TypedValue);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      pFVar13 = &local_148;
      if (*(int *)((longlong)&pFVar10->Data + 0xc) != -1) {
        pFVar13 = pFVar10;
      }
      pTVar11 = Optimus::ParseExecutionDomainExpression(&local_98,pFVar13,TVar2);
      TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::operator=
                ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>
                  *)&pUVar9->_padding_,pTVar11);
      if ((1 < (ulonglong)local_98.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar9 = (UOptimusTransientBufferDataProvider *)(*pcVar3)();
        return pUVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
      if ((local_128.TypedValue.Data.ArrayMax != -1) &&
         (local_128.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_128.TypedValue.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar9;
}

// UOptimusRawBufferDataInterface @ 14e15c730

UOptimusRawBufferDataInterface * __thiscall
UOptimusRawBufferDataInterface::UOptimusRawBufferDataInterface
          (UOptimusRawBufferDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataInterface__6B_;
  (this->ValueType).ValueTypePtr = (FShaderValueType *)0x0;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->ComponentSourceBinding).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DomainConstantIdentifier_DEPRECATED).NodePath.ComparisonIndex = 0;
  (this->DomainConstantIdentifier_DEPRECATED).NodePath.Number = 0;
  (this->DomainConstantIdentifier_DEPRECATED).GroupName.ComparisonIndex = 0;
  (this->DomainConstantIdentifier_DEPRECATED).GroupName.Number = 0;
  (this->DomainConstantIdentifier_DEPRECATED).ConstantName.ComparisonIndex = 0;
  (this->DomainConstantIdentifier_DEPRECATED).ConstantName.Number = 0;
  return this;
}

// UOptimusRawBufferDataInterface @ 14e15c790

UOptimusRawBufferDataInterface * __thiscall
UOptimusRawBufferDataInterface::UOptimusRawBufferDataInterface
          (UOptimusRawBufferDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataInterface__6B_;
  (this->ValueType).ValueTypePtr = (FShaderValueType *)0x0;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->ComponentSourceBinding).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DomainConstantIdentifier_DEPRECATED).NodePath.ComparisonIndex = 0;
  (this->DomainConstantIdentifier_DEPRECATED).NodePath.Number = 0;
  (this->DomainConstantIdentifier_DEPRECATED).GroupName.ComparisonIndex = 0;
  (this->DomainConstantIdentifier_DEPRECATED).GroupName.Number = 0;
  (this->DomainConstantIdentifier_DEPRECATED).ConstantName.ComparisonIndex = 0;
  (this->DomainConstantIdentifier_DEPRECATED).ConstantName.Number = 0;
  return this;
}

// ~UOptimusRawBufferDataInterface @ 14e163ce0

void __thiscall
UOptimusRawBufferDataInterface::~UOptimusRawBufferDataInterface
          (UOptimusRawBufferDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusRawBufferDataInterface__6B_;
  pFVar1 = (this->DataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// GetComponentSource @ 14e1beb90

UOptimusComponentSource * __thiscall
UOptimusRawBufferDataInterface::GetComponentSource(UOptimusRawBufferDataInterface *this)

{
  UOptimusComponentSourceBinding *this_00;
  UOptimusComponentSource *pUVar1;
  
  this_00 = (UOptimusComponentSourceBinding *)
            FWeakObjectPtr::Get(&(this->ComponentSourceBinding).WeakPtr);
  if (this_00 != (UOptimusComponentSourceBinding *)0x0) {
    pUVar1 = UOptimusComponentSourceBinding::GetComponentSource(this_00);
    return pUVar1;
  }
  return (UOptimusComponentSource *)0x0;
}

// GetHLSL @ 14e1c7650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusRawBufferDataInterface::GetHLSL
          (UOptimusRawBufferDataInterface *this,FString *param_1,FString *param_2)

{
  FShaderValueType *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOptimusDataType *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FShaderValueTypeHandle this_00;
  FString *pFVar7;
  FOptimusDataTypeRegistry *this_01;
  int iVar8;
  ForAnyElementType FVar9;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar10;
  undefined1 auStackY_308 [32];
  undefined1 local_2c8 [8];
  TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FName local_280;
  FName local_278;
  FString local_270;
  FString *local_260;
  FString local_258;
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FStringFormatArg local_1d8;
  FStringFormatArg local_1b8;
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  FStringFormatArg local_138;
  FString local_118;
  FString local_108;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_f8;
  FString *local_e8;
  FStringFormatArg *local_e0;
  FString *local_d8;
  FStringFormatArg *local_d0;
  FString *local_c8;
  FStringFormatArg *local_c0;
  FString *local_b8;
  FStringFormatArg *local_b0;
  FString *local_a8;
  FStringFormatArg *local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  local_260 = param_1;
  FShaderValueType::ToString((this->ValueType).ValueTypePtr,&local_270,&local_280);
  pFVar1 = (this->ValueType).ValueTypePtr;
  iVar8 = 0;
  if ((pFVar1->DimensionType == Vector) && ((pFVar1->field2_0x2).VectorElemCount == '\x03')) {
    this_00 = FShaderValueType::Get(pFVar1->Type);
    local_278.ComparisonIndex.Value = 0;
    local_278.Number = 0;
    FShaderValueType::ToString(this_00.ValueTypePtr,&local_290,&local_278);
    iVar8 = local_290.Data.ArrayNum;
  }
  else {
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.Data.ArrayNum = 0;
    local_290.Data.ArrayMax = 0;
  }
  pFVar7 = ::FString::FString(&local_118,param_2);
  FStringFormatArg::FStringFormatArg(&local_138,pFVar7);
  ::FString::FString(&local_1e8,L"DataInterfaceName");
  FVar9.Data = local_270.Data.AllocatorInstance.Data;
  local_f8.Key = &local_1e8;
  local_f8.Value = &local_138;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_270.Data.ArrayNum == 0) {
    local_2b0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_270.Data.ArrayNum,0,(ForAnyElementType *)&local_2b0,local_270.Data.ArrayNum
               ,&local_2b0.Data.ArrayMax);
    memcpy(local_2b0.Data.AllocatorInstance.Data,FVar9.Data,(longlong)local_270.Data.ArrayNum * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_158,&local_2b0);
  ::FString::FString(&local_1f8,L"PublicType");
  local_e8 = &local_1f8;
  local_e0 = &local_158;
  pFVar7 = &local_290;
  if (iVar8 < 2) {
    pFVar7 = &local_270;
  }
  pFVar7 = ::FString::FString(&local_108,pFVar7);
  FStringFormatArg::FStringFormatArg(&local_178,pFVar7);
  ::FString::FString(&local_208,L"BufferType");
  local_d0 = &local_178;
  local_d8 = &local_208;
  ::FString::FString(&local_218,L"BufferTypeRaw");
  FStringFormatArg::FStringFormatArg(&local_198,(uint)(1 < iVar8));
  local_c8 = &local_218;
  local_c0 = &local_198;
  ::FString::FString(&local_228,L"SupportAtomic");
  this_01 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::GetAllTypesWithAtomicSupport(this_01,&local_2c0);
  iVar8 = local_2c0.ArrayNum;
  pTVar10 = (TSharedPtr<FOptimusDataType_const_,1> *)
            (local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayNum * 0x10);
  FVar9.Data = local_2c0.AllocatorInstance.Data;
  while( true ) {
    if (local_2c0.ArrayNum != iVar8) {
      local_2c8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FOptimusDataType_const_,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_2c8);
    }
    if ((TSharedPtr<FOptimusDataType_const_,1> *)FVar9.Data == pTVar10) {
      DestructItems<TSharedPtr<FOptimusDataType_const_,1>,int>
                ((TSharedPtr<FOptimusDataType_const_,1> *)local_2c0.AllocatorInstance.Data,
                 local_2c0.ArrayNum);
      if ((TSharedPtr<FOptimusDataType_const_,1> *)local_2c0.AllocatorInstance.Data !=
          (TSharedPtr<FOptimusDataType_const_,1> *)0x0) {
        FMemory::Free(local_2c0.AllocatorInstance.Data);
      }
      iVar8 = 0;
      goto LAB_14e1c7939;
    }
    pTVar2 = (((TSharedPtr<FOptimusDataType_const_,1> *)FVar9.Data)->SharedReferenceCount).
             ReferenceController;
    pFVar3 = ((TSharedPtr<FOptimusDataType_const_,1> *)FVar9.Data)->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 == (FOptimusDataType *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pFVar3->ShaderValueType).ValueTypePtr == (this->ValueType).ValueTypePtr) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FVar9.Data = FVar9.Data + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  DestructItems<TSharedPtr<FOptimusDataType_const_,1>,int>
            ((TSharedPtr<FOptimusDataType_const_,1> *)local_2c0.AllocatorInstance.Data,
             local_2c0.ArrayNum);
  if ((TSharedPtr<FOptimusDataType_const_,1> *)local_2c0.AllocatorInstance.Data !=
      (TSharedPtr<FOptimusDataType_const_,1> *)0x0) {
    FMemory::Free(local_2c0.AllocatorInstance.Data);
  }
  iVar8 = 1;
LAB_14e1c7939:
  FStringFormatArg::FStringFormatArg(&local_1b8,iVar8);
  local_b8 = &local_228;
  local_b0 = &local_1b8;
  ::FString::FString(&local_238,L"SplitReadWrite");
  cVar6 = (**(code **)(this->_padding_ + 0x3b0))(this);
  FStringFormatArg::FStringFormatArg(&local_1d8,(uint)(cVar6 != '\0'));
  local_a8 = &local_238;
  local_a0 = &local_1d8;
  local_248._First = &local_f8;
  local_248._Last = (TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)local_98;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98,&local_248);
  if (local_1d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_1b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_138.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.StringValue.Data.AllocatorInstance.Data);
  }
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  LoadShaderSourceFile
            (TemplateFilePath,SP_PCD3D_SM5,&local_2a0,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_2a0.Data.ArrayNum != 0) {
    FVar9.Data = local_2a0.Data.AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (&local_258,(wchar_t *)FVar9.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  iVar8 = local_258.Data.ArrayNum + -1;
  if (local_258.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(local_260,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar8);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPinDefinitions @ 14e1cf3f0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusRawBufferDataInterface::GetPinDefinitions
          (UOptimusRawBufferDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  FOptimusCDIPinDefinition *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  FName *pFVar9;
  FName local_res18;
  FName local_res20;
  FOptimusCDIPinDefinition local_f8;
  FOptimusCDIPinDefinition local_c0;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = ::FString::FString(&local_88,"ReadNumValues");
  if ((this->DataDomain).DimensionNames.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  FVar1 = *(FName *)(this->DataDomain).DimensionNames.AllocatorInstance.Data;
  pFVar8 = ::FString::FString(&local_78,"ReadValue");
  pFVar9 = ::FName::FName(&local_res18,"ValueIn");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_f8,*pFVar9,pFVar8,FVar1,pFVar6,true,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_f8) && (&local_f8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar9 = local_f8.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_f8.DataFunctionName.Data.AllocatorInstance.Data;
  local_f8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_f8.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_f8.DataFunctionName.Data.ArrayMax;
  local_f8.DataFunctionName.Data.ArrayNum = 0;
  local_f8.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_f8.DataDimensions.AllocatorInstance.Data;
  local_f8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_f8.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_f8.DataDimensions.ArrayMax;
  local_f8.DataDimensions.ArrayNum = 0;
  local_f8.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_f8.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_f8.bMutable;
  pFVar9[6] = local_f8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_f8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_f8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_68,"ReadNumValues");
  if ((this->DataDomain).DimensionNames.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  FVar1 = *(FName *)(this->DataDomain).DimensionNames.AllocatorInstance.Data;
  pFVar8 = ::FString::FString(&local_58,"WriteValue");
  pFVar9 = ::FName::FName(&local_res20,"ValueOut");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_c0,*pFVar9,pFVar8,FVar1,pFVar6,true,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_c0) && (&local_c0 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar9 = local_c0.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_c0.DataFunctionName.Data.AllocatorInstance.Data;
  local_c0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_c0.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_c0.DataFunctionName.Data.ArrayMax;
  local_c0.DataFunctionName.Data.ArrayNum = 0;
  local_c0.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_c0.DataDimensions.AllocatorInstance.Data;
  local_c0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_c0.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_c0.DataDimensions.ArrayMax;
  local_c0.DataDimensions.ArrayNum = 0;
  local_c0.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_c0.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_c0.bMutable;
  pFVar9[6] = local_c0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_c0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_c0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d87e0

UClass * __cdecl UOptimusRawBufferDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusRawBufferDataInterface",
               &Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusRawBufferDataInterface,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusRawBufferDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusRawBufferDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.InnerSingleton;
}

// GetRawStride @ 14e1db5f0

int __thiscall UOptimusRawBufferDataInterface::GetRawStride(UOptimusRawBufferDataInterface *this)

{
  FShaderValueType *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ValueType).ValueTypePtr;
  iVar2 = 0;
  if ((pFVar1->DimensionType == Vector) &&
     (iVar2 = 0, (pFVar1->field2_0x2).VectorElemCount == '\x03')) {
    iVar2 = 4;
  }
  return iVar2;
}

// GetRawType @ 14e1db610

FString * __thiscall
UOptimusRawBufferDataInterface::GetRawType
          (UOptimusRawBufferDataInterface *this,FString *__return_storage_ptr__)

{
  FShaderValueType *pFVar1;
  FShaderValueTypeHandle this_00;
  FName local_res8 [4];
  
  pFVar1 = (this->ValueType).ValueTypePtr;
  if ((pFVar1->DimensionType == Vector) && ((pFVar1->field2_0x2).VectorElemCount == '\x03')) {
    this_00 = FShaderValueType::Get(pFVar1->Type);
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
    FShaderValueType::ToString(this_00.ValueTypePtr,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetReadValueInputIndex @ 14e1db710

int __cdecl UOptimusRawBufferDataInterface::GetReadValueInputIndex(EOptimusBufferReadType param_1)

{
  return (int)param_1;
}

// GetRequiredComponentClass @ 14e1df9d0

TSubclassOf<UActorComponent> __thiscall
UOptimusRawBufferDataInterface::GetRequiredComponentClass(UOptimusRawBufferDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetShaderHash @ 14e1e0810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusRawBufferDataInterface::GetShaderHash(UOptimusRawBufferDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderVirtualPath @ 14e1e3c60

wchar_t * __thiscall
UOptimusRawBufferDataInterface::GetShaderVirtualPath(UOptimusRawBufferDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e5b00

void __thiscall
UOptimusRawBufferDataInterface::GetSupportedInputs
          (UOptimusRawBufferDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FShaderFunctionDefinition *pFVar3;
  FString local_18;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"ReadNumValues");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"ReadValue");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,(this->ValueType).ValueTypePtr);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"ReadValueUAV");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,(this->ValueType).ValueTypePtr);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// GetSupportedOutputs @ 14e1e6a20

void __thiscall
UOptimusRawBufferDataInterface::GetSupportedOutputs
          (UOptimusRawBufferDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FShaderFunctionDefinition *pFVar3;
  FString local_18;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"WriteValue");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,(this->ValueType).ValueTypePtr,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"WriteAtomicAdd");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,(this->ValueType).ValueTypePtr);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,(this->ValueType).ValueTypePtr,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"WriteAtomicMin");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,(this->ValueType).ValueTypePtr);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,(this->ValueType).ValueTypePtr,None);
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar3,1);
  pFVar2 = ::FString::FString(&local_18,L"WriteAtomicMax");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,(this->ValueType).ValueTypePtr);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,(this->ValueType).ValueTypePtr,None);
  return;
}

// GetWriteValueOutputIndex @ 14e1e99a0

int __cdecl
UOptimusRawBufferDataInterface::GetWriteValueOutputIndex(EOptimusBufferWriteType param_1)

{
  return (int)param_1;
}

// IsVisible @ 14e1f1050

bool __thiscall UOptimusRawBufferDataInterface::IsVisible(UOptimusRawBufferDataInterface *this)

{
  return false;
}

// StaticRegisterNativesUOptimusRawBufferDataInterface @ 14e225df0

void __cdecl
UOptimusRawBufferDataInterface::StaticRegisterNativesUOptimusRawBufferDataInterface(void)

{
  return;
}

// SupportsAtomics @ 14e226470

bool __thiscall
UOptimusRawBufferDataInterface::SupportsAtomics(UOptimusRawBufferDataInterface *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  FOptimusDataTypeRegistry *this_00;
  ForAnyElementType FVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  undefined1 local_res10 [8];
  TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::GetAllTypesWithAtomicSupport(this_00,&local_28);
  iVar4 = local_28.ArrayNum;
  pTVar8 = (TSharedPtr<FOptimusDataType_const_,1> *)
           (local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10);
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FOptimusDataType_const_,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if ((TSharedPtr<FOptimusDataType_const_,1> *)FVar7.Data == pTVar8) {
      bVar5 = false;
      goto LAB_14e226531;
    }
    pTVar1 = (((TSharedPtr<FOptimusDataType_const_,1> *)FVar7.Data)->SharedReferenceCount).
             ReferenceController;
    pFVar2 = ((TSharedPtr<FOptimusDataType_const_,1> *)FVar7.Data)->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FOptimusDataType *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if ((pFVar2->ShaderValueType).ValueTypePtr == (this->ValueType).ValueTypePtr) break;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FVar7.Data = FVar7.Data + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  bVar5 = true;
LAB_14e226531:
  DestructItems<TSharedPtr<FOptimusDataType_const_,1>,int>
            ((TSharedPtr<FOptimusDataType_const_,1> *)local_28.AllocatorInstance.Data,
             local_28.ArrayNum);
  if ((TSharedPtr<FOptimusDataType_const_,1> *)local_28.AllocatorInstance.Data !=
      (TSharedPtr<FOptimusDataType_const_,1> *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar5;
}

// UseSplitBuffers @ 14e22ecb0

bool __thiscall
UOptimusRawBufferDataInterface::UseSplitBuffers(UOptimusRawBufferDataInterface *this)

{
  return true;
}

