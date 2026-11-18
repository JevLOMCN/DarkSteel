// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 14972a270

UClass * __cdecl UPCGCountUniqueAttributeValuesDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesDataInterface",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.
                InnerSingleton,StaticRegisterNativesUPCGCountUniqueAttributeValuesDataInterface,0xa0
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCountUniqueAttributeValuesDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataInterface>,
               local_res8,UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.InnerSingleton;
}

// UPCGCountUniqueAttributeValuesDataInterface @ 14973af20

UPCGCountUniqueAttributeValuesDataInterface * __thiscall
UPCGCountUniqueAttributeValuesDataInterface::UPCGCountUniqueAttributeValuesDataInterface
          (UPCGCountUniqueAttributeValuesDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataInterface__6B_;
  (this->AttributeToCountName).ComparisonIndex = 0;
  (this->AttributeToCountName).Number = 0;
  return this;
}

// UPCGCountUniqueAttributeValuesDataInterface @ 14973af60

UPCGCountUniqueAttributeValuesDataInterface * __thiscall
UPCGCountUniqueAttributeValuesDataInterface::UPCGCountUniqueAttributeValuesDataInterface
          (UPCGCountUniqueAttributeValuesDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this->bEmitPerDataCounts = true;
  this->bOutputRawBuffer = false;
  this->_padding_ = (longlong)&___7UPCGCountUniqueAttributeValuesDataInterface__6B_;
  (this->AttributeToCountName).ComparisonIndex = 0;
  (this->AttributeToCountName).Number = 0;
  return this;
}

// ~UPCGCountUniqueAttributeValuesDataInterface @ 14973db90

void __thiscall
UPCGCountUniqueAttributeValuesDataInterface::~UPCGCountUniqueAttributeValuesDataInterface
          (UPCGCountUniqueAttributeValuesDataInterface *this)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14974adf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UPCGCountUniqueAttributeValuesDataInterface::CreateDataProvider
          (UPCGCountUniqueAttributeValuesDataInterface *this)

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
  pUVar2 = UPCGCountUniqueAttributeValuesDataProvider::StaticClass();
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
  return (UComputeDataProvider *)pUVar1;
}

// GetClassName @ 149754820

wchar_t * __thiscall
UPCGCountUniqueAttributeValuesDataInterface::GetClassName
          (UPCGCountUniqueAttributeValuesDataInterface *this)

{
  return L"PCGCountUniqueAttributeValues";
}

// GetHLSL @ 149757e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGCountUniqueAttributeValuesDataInterface::GetHLSL
          (UPCGCountUniqueAttributeValuesDataInterface *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_c8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FString local_78;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar1 = ::FString::FString(&local_78,param_2);
  FStringFormatArg::FStringFormatArg(&local_98,pFVar1);
  ::FString::FString(&local_b8.StringValue,L"DataInterfaceName");
  local_c8.Key = &local_b8.StringValue;
  local_c8.Value = &local_98;
  local_b8._0_8_ = &local_c8;
  local_b8.field1_0x8.StringLiteralANSIValue = (char *)&local_b8;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_68,
             (initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> *)
             &local_b8);
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl
            ((FString *)&local_c8,
             L"int {DataInterfaceName}_AttributeToCountId;\nint {DataInterfaceName}_OutputValueAttributeId;\nint {DataInterfaceName}_OutputCountAttributeId;\nuint {DataInterfaceName}_EmitPerDataCounts;\n\nint CountUniqueValues_GetAttributeToCountId_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_AttributeToCountId;\n}\n\nint CountUniqueValues_GetOutputValueAttributeId_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_OutputValueAttributeId;\n}\n\nint CountUniqueValues_GetOutputCountAttributeId_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_OutputCountAttributeId;\n}\n\nbool CountUniqueValues_GetEmitPerDataCounts_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_EmitPerDataCounts > 0;\n}\n"
             ,(TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
               *)local_68);
  iVar2 = (int)local_c8.Value + -1;
  if ((int)local_c8.Value == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_c8.Key,iVar2);
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

// GetPrivateStaticClass @ 14975af00

UClass * __cdecl UPCGCountUniqueAttributeValuesDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCountUniqueAttributeValuesDataInterface",
               &Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.
                InnerSingleton,StaticRegisterNativesUPCGCountUniqueAttributeValuesDataInterface,0xa0
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCountUniqueAttributeValuesDataInterface>,
               InternalVTableHelperCtorCaller<UPCGCountUniqueAttributeValuesDataInterface>,
               local_res8,UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCountUniqueAttributeValuesDataInterface.InnerSingleton;
}

// GetShaderParameters @ 149760300

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UPCGCountUniqueAttributeValuesDataInterface::GetShaderParameters
          (UPCGCountUniqueAttributeValuesDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FPCGCountUniqueAttributeValuesDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPCGCountUniqueAttributeValuesDataInterfaceParameters",
                 L"FPCGCountUniqueAttributeValuesDataInterfaceParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGCountUniqueAttributeValuesDataInterface.cpp"
                 ,0x2a,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata'::
             __l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGCountUniqueAttributeValuesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetSupportedInputs @ 149762af0

void __thiscall
UPCGCountUniqueAttributeValuesDataInterface::GetSupportedInputs
          (UPCGCountUniqueAttributeValuesDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"CountUniqueValues_GetAttributeToCountId");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Int,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"CountUniqueValues_GetOutputCountAttributeId");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Int,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"CountUniqueValues_GetOutputValueAttributeId");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Int,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"CountUniqueValues_GetEmitPerDataCounts");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Bool,0,0);
  return;
}

// StaticRegisterNativesUPCGCountUniqueAttributeValuesDataInterface @ 149778620

void __cdecl
UPCGCountUniqueAttributeValuesDataInterface::
StaticRegisterNativesUPCGCountUniqueAttributeValuesDataInterface(void)

{
  return;
}

