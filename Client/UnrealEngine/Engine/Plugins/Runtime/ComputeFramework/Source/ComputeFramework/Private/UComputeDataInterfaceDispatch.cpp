// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 14

// StaticClass @ 1494bbc30

UClass * __cdecl UComputeDataInterfaceDispatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterfaceDispatch",
               &Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton,
               StaticRegisterNativesUComputeDataInterfaceDispatch,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataInterfaceDispatch>,
               InternalVTableHelperCtorCaller<UComputeDataInterfaceDispatch>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton;
}

// UComputeDataInterfaceDispatch @ 1494c49d0

UComputeDataInterfaceDispatch * __thiscall
UComputeDataInterfaceDispatch::UComputeDataInterfaceDispatch
          (UComputeDataInterfaceDispatch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeDataInterfaceDispatch__6B_;
  return this;
}

// UComputeDataInterfaceDispatch @ 1494c4a00

UComputeDataInterfaceDispatch * __thiscall
UComputeDataInterfaceDispatch::UComputeDataInterfaceDispatch
          (UComputeDataInterfaceDispatch *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeDataInterfaceDispatch__6B_;
  return this;
}

// ~UComputeDataInterfaceDispatch @ 1494c5d10

void __thiscall
UComputeDataInterfaceDispatch::~UComputeDataInterfaceDispatch(UComputeDataInterfaceDispatch *this)

{
  this->_padding_ = (longlong)&___7UComputeDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateDataProvider @ 1494cb0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UComputeDataInterfaceDispatch::CreateDataProvider
          (UComputeDataInterfaceDispatch *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UDispatchDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined8 *)(pUVar1 + 1) = *(undefined8 *)&(this->ThreadCount).field0_0x0;
  *(uint *)&pUVar1[1].field_0x8 = (this->ThreadCount).field0_0x0._s_0.Z;
  return (UComputeDataProvider *)pUVar1;
}

// GetClassName @ 1494cf240

wchar_t * __thiscall
UComputeDataInterfaceDispatch::GetClassName(UComputeDataInterfaceDispatch *this)

{
  return L"Dispatch";
}

// GetHLSL @ 1494cfb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UComputeDataInterfaceDispatch::GetHLSL
          (UComputeDataInterfaceDispatch *this,FString *param_1,FString *param_2)

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

// GetPrivateStaticClass @ 1494d0500

UClass * __cdecl UComputeDataInterfaceDispatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterfaceDispatch",
               &Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton,
               StaticRegisterNativesUComputeDataInterfaceDispatch,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataInterfaceDispatch>,
               InternalVTableHelperCtorCaller<UComputeDataInterfaceDispatch>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceDispatch.InnerSingleton;
}

// GetShaderHash @ 1494d10a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UComputeDataInterfaceDispatch::GetShaderHash(UComputeDataInterfaceDispatch *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 1494d15b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UComputeDataInterfaceDispatch::GetShaderParameters
          (UComputeDataInterfaceDispatch *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FDataInterfaceDispatchParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FDataInterfaceDispatchParameters",L"FDataInterfaceDispatchParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeDataInterfaceDispatch.cpp"
                 ,0x13,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDataInterfaceDispatchParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetShaderVirtualPath @ 1494d17b0

wchar_t * __thiscall
UComputeDataInterfaceDispatch::GetShaderVirtualPath(UComputeDataInterfaceDispatch *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 1494d1cb0

void __thiscall
UComputeDataInterfaceDispatch::GetSupportedInputs
          (UComputeDataInterfaceDispatch *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderFunctionDefinition *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FString *pFVar4;
  FShaderValueTypeHandle FVar5;
  FString local_38;
  FShaderValueType local_28;
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  this_00 = (FShaderFunctionDefinition *)
            ((param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x28);
  DefaultConstructItems<FShaderFunctionDefinition,int>(this_00,1);
  pFVar4 = ::FString::FString(&local_38,L"ReadNumThreads");
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange((FString *)this_00,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_28.Name.ComparisonIndex.Value = 0;
  local_28.Name.Number = 0;
  local_28.bIsDynamicArray = false;
  local_28.StructElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.StructElements.ArrayNum = 0;
  local_28.StructElements.ArrayMax = 0;
  local_28.Type = Uint;
  local_28.DimensionType = Vector;
  local_28.field2_0x2.VectorElemCount = '\x03';
  FVar5 = FShaderValueType::GetOrCreate(&local_28);
  if (local_28.StructElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StructElements.AllocatorInstance.Data);
  }
  FShaderFunctionDefinition::AddReturnType(this_00,FVar5);
  return;
}

// IsExecutionInterface @ 1494d4710

bool __thiscall
UComputeDataInterfaceDispatch::IsExecutionInterface(UComputeDataInterfaceDispatch *this)

{
  return true;
}

// StaticRegisterNativesUComputeDataInterfaceDispatch @ 1494d7e40

void __cdecl UComputeDataInterfaceDispatch::StaticRegisterNativesUComputeDataInterfaceDispatch(void)

{
  return;
}

