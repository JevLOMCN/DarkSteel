// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 22

// StaticClass @ 14e1133a0

UClass * __cdecl UOptimusCopyKernelDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusCopyKernelDataInterface",
               &Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusCopyKernelDataInterface,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusCopyKernelDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusCopyKernelDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.InnerSingleton;
}

// UOptimusCopyKernelDataInterface @ 14e158b10

UOptimusCopyKernelDataInterface * __thiscall
UOptimusCopyKernelDataInterface::UOptimusCopyKernelDataInterface
          (UOptimusCopyKernelDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComputeKernelDataInterface__;
  (this->ComponentSourceBinding).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NumThreadsExpression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumThreadsExpression).Data.ArrayNum = 0;
  (this->NumThreadsExpression).Data.ArrayMax = 0;
  return this;
}

// UOptimusCopyKernelDataInterface @ 14e158b50

UOptimusCopyKernelDataInterface * __thiscall
UOptimusCopyKernelDataInterface::UOptimusCopyKernelDataInterface
          (UOptimusCopyKernelDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComputeKernelDataInterface__;
  (this->ComponentSourceBinding).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NumThreadsExpression).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumThreadsExpression).Data.ArrayNum = 0;
  (this->NumThreadsExpression).Data.ArrayMax = 0;
  return this;
}

// ~UOptimusCopyKernelDataInterface @ 14e1624b0

void __thiscall
UOptimusCopyKernelDataInterface::~UOptimusCopyKernelDataInterface
          (UOptimusCopyKernelDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComputeKernelDataInterface__;
  pFVar1 = (this->NumThreadsExpression).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusComputeKernelDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181af0

bool __thiscall
UOptimusCopyKernelDataInterface::CanSupportUnifiedDispatch(UOptimusCopyKernelDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19c9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusCopyKernelDataInterface::CreateDataProvider
          (UOptimusCopyKernelDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  int iVar1;
  TWeakObjectPtr<UOptimusComponentSource_const_,FWeakObjectPtr> TVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UOptimusComponentSourceBinding *this_00;
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *pTVar7;
  UComputeDataProvider *pUVar8;
  longlong *plVar9;
  UObject *pUVar10;
  undefined1 auStack_148 [32];
  UObject *local_128;
  UOptimusComponentSource *local_120;
  undefined1 local_118 [128];
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> local_98;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UOptimusCopyKernelDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar6);
  local_118._8_8_ = pUVar5;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar9 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar10 = *(UObject **)param_1.field0_0x0;
  if (pUVar10 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14e19ca84;
  }
  pUVar10 = (UObject *)0x0;
LAB_14e19ca84:
  local_128 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar5 + 1),(FObjectPtr)&local_128);
  this_00 = (UOptimusComponentSourceBinding *)
            FWeakObjectPtr::Get(&(this->ComponentSourceBinding).WeakPtr);
  local_120 = UOptimusComponentSourceBinding::GetComponentSource(this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_120 != (UOptimusComponentSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_120);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar5[1].field_0x8,(FObjectPtr)&local_120);
  TVar2.WeakPtr.ObjectIndex = *(int *)&pUVar5[1].field_0x8;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&pUVar5[1].field_0xc;
  pTVar7 = Optimus::ParseExecutionDomainExpression(&local_98,&this->NumThreadsExpression,TVar2);
  TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::operator=
            ((TVariant<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError> *)
             &pUVar5[1].field_0x10,pTVar7);
  if (1 < (ulonglong)local_98.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UComputeDataProvider *)(*pcVar3)();
      return pUVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Optimus::Expression::FExpressionObject,Optimus::Expression::FParseError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
  return (UComputeDataProvider *)pUVar5;
}

// GetClassName @ 14e1bcb50

wchar_t * __thiscall
UOptimusCopyKernelDataInterface::GetClassName(UOptimusCopyKernelDataInterface *this)

{
  return L"CopyKernelData";
}

// GetExecutionDomain @ 14e1c4da0

FString * __thiscall
UOptimusCopyKernelDataInterface::GetExecutionDomain(UOptimusCopyKernelDataInterface *this)

{
  return (FString *)&this->_padding_;
}

// GetHLSL @ 14e1c6a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusCopyKernelDataInterface::GetHLSL
          (UOptimusCopyKernelDataInterface *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStackY_108 [32];
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_d8;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_c8;
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_b8;
  FString local_a8;
  FStringFormatArg local_98;
  FString local_78;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = ::FString::FString(&local_78,param_2);
  FStringFormatArg::FStringFormatArg(&local_98,pFVar1);
  ::FString::FString(&local_a8,L"DataInterfaceName");
  local_d8.Key = &local_a8;
  local_d8.Value = &local_98;
  local_b8._First = &local_d8;
  local_b8._Last = &local_c8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_68,&local_b8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
  }
  local_c8.Key = (FString *)0x0;
  local_c8.Value = (FStringFormatArg *)0x0;
  LoadShaderSourceFile
            (TemplateFilePath,SP_PCD3D_SM5,(FString *)&local_c8,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  pFVar1 = (FString *)L"";
  if ((int)local_c8.Value != 0) {
    pFVar1 = local_c8.Key;
  }
  ::FString::FormatImpl
            ((FString *)&local_d8,(wchar_t *)pFVar1,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_68);
  iVar2 = (int)local_d8.Value + -1;
  if ((int)local_d8.Value == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_d8.Key,iVar2);
  if (local_d8.Key != (FString *)0x0) {
    FMemory::Free(local_d8.Key);
  }
  if (local_c8.Key != (FString *)0x0) {
    FMemory::Free(local_c8.Key);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// GetPrivateStaticClass @ 14e1d5170

UClass * __cdecl UOptimusCopyKernelDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusCopyKernelDataInterface",
               &Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusCopyKernelDataInterface,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusCopyKernelDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusCopyKernelDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusCopyKernelDataInterface.InnerSingleton;
}

// GetReadNumThreadsFunctionName @ 14e1db6b0

wchar_t * __thiscall
UOptimusCopyKernelDataInterface::GetReadNumThreadsFunctionName
          (UOptimusCopyKernelDataInterface *this)

{
  return ReadNumThreadsFunctionName;
}

// GetReadNumThreadsPerInvocationFunctionName @ 14e1db6d0

wchar_t * __thiscall
UOptimusCopyKernelDataInterface::GetReadNumThreadsPerInvocationFunctionName
          (UOptimusCopyKernelDataInterface *this)

{
  return ReadNumThreadsPerInvocationFunctionName;
}

// GetReadThreadIndexOffsetFunctionName @ 14e1db6f0

wchar_t * __thiscall
UOptimusCopyKernelDataInterface::GetReadThreadIndexOffsetFunctionName
          (UOptimusCopyKernelDataInterface *this)

{
  return ReadThreadIndexOffsetFunctionName;
}

// GetShaderHash @ 14e1e0650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusCopyKernelDataInterface::GetShaderHash
          (UOptimusCopyKernelDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e15a0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusCopyKernelDataInterface::GetShaderParameters
          (UOptimusCopyKernelDataInterface *this,wchar_t *param_1,
          FShaderParametersMetadataBuilder *param_2,FShaderParametersMetadataAllocations *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_28;
  
  uVar5 = (ulonglong)_tls_index;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0xf & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FCopyKernelDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FCopyKernelDataInterfaceParameters",L"FCopyKernelDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceCopyKernel.cpp"
                 ,0x27,0x20,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar3 = (param_2->Members).ArrayNum;
  piVar1 = &(param_2->Members).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Members).ArrayNum = iVar3 + 1;
  uVar2 = param_2->NextMemberOffset;
  pFVar6 = (param_2->Members).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(wchar_t **)pFVar6 = param_1;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FCopyKernelDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x20;
  return;
}

// GetShaderVirtualPath @ 14e1e3bf0

wchar_t * __thiscall
UOptimusCopyKernelDataInterface::GetShaderVirtualPath(UOptimusCopyKernelDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e4f40

void __thiscall
UOptimusCopyKernelDataInterface::GetSupportedInputs
          (UOptimusCopyKernelDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FString *pFVar2;
  FShaderFunctionDefinition *pFVar3;
  FShaderValueTypeHandle FVar4;
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
  pFVar2 = ::FString::FString(&local_18,ReadNumThreadsFunctionName);
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint,3);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
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
  pFVar2 = ::FString::FString(&local_18,ReadNumThreadsPerInvocationFunctionName);
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
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
  pFVar2 = ::FString::FString(&local_18,ReadThreadIndexOffsetFunctionName);
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FVar4 = FShaderValueType::Get(Uint);
  FShaderFunctionDefinition::AddReturnType(pFVar3,FVar4);
  return;
}

// IsExecutionInterface @ 14e1eefe0

bool __thiscall
UOptimusCopyKernelDataInterface::IsExecutionInterface(UOptimusCopyKernelDataInterface *this)

{
  return true;
}

// SetComponentBinding @ 14e21c020

void __thiscall
UOptimusCopyKernelDataInterface::SetComponentBinding
          (UOptimusCopyKernelDataInterface *this,UOptimusComponentSourceBinding *param_1)

{
  UOptimusComponentSourceBinding *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UOptimusComponentSourceBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)local_res8);
  return;
}

// SetExecutionDomain @ 14e21dfc0

void __thiscall
UOptimusCopyKernelDataInterface::SetExecutionDomain
          (UOptimusCopyKernelDataInterface *this,FString *param_1)

{
  ::FString::operator=((FString *)&this->_padding_,param_1);
  return;
}

// StaticRegisterNativesUOptimusCopyKernelDataInterface @ 14e225870

void __cdecl
UOptimusCopyKernelDataInterface::StaticRegisterNativesUOptimusCopyKernelDataInterface(void)

{
  return;
}

// _getUObject @ 14e238d30

UObject * __thiscall
UOptimusCopyKernelDataInterface::_getUObject(UOptimusCopyKernelDataInterface *this)

{
  return (UObject *)&this[-1]._padding_;
}

