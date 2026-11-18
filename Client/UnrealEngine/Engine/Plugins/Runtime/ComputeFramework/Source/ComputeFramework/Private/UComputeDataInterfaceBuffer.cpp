// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 14

// StaticClass @ 1494bdf60

UClass * __cdecl UComputeDataInterfaceBuffer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterfaceBuffer",
               &Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton,
               StaticRegisterNativesUComputeDataInterfaceBuffer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataInterfaceBuffer>,
               InternalVTableHelperCtorCaller<UComputeDataInterfaceBuffer>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton;
}

// UComputeDataInterfaceBuffer @ 1494c4950

UComputeDataInterfaceBuffer * __thiscall
UComputeDataInterfaceBuffer::UComputeDataInterfaceBuffer
          (UComputeDataInterfaceBuffer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeDataInterfaceBuffer__6B_;
  (this->ValueType).ValueTypePtr = (FShaderValueType *)0x0;
  this->ElementCount = 0;
  this->bAllowReadWrite = false;
  this->bClearBeforeUse = false;
  return this;
}

// UComputeDataInterfaceBuffer @ 1494c4990

UComputeDataInterfaceBuffer * __thiscall
UComputeDataInterfaceBuffer::UComputeDataInterfaceBuffer
          (UComputeDataInterfaceBuffer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeDataInterfaceBuffer__6B_;
  (this->ValueType).ValueTypePtr = (FShaderValueType *)0x0;
  this->ElementCount = 0;
  this->bAllowReadWrite = false;
  this->bClearBeforeUse = false;
  return this;
}

// ~UComputeDataInterfaceBuffer @ 1494c5cf0

void __thiscall
UComputeDataInterfaceBuffer::~UComputeDataInterfaceBuffer(UComputeDataInterfaceBuffer *this)

{
  this->_padding_ = (longlong)&___7UComputeDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateDataProvider @ 1494cb020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UComputeDataInterfaceBuffer::CreateDataProvider(UComputeDataInterfaceBuffer *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UBufferDataProvider::StaticClass();
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
  *(int *)(pUVar2 + 1) = this->ElementCount;
  iVar1 = FShaderValueType::GetResourceElementSize((this->ValueType).ValueTypePtr);
  *(int *)&pUVar2[1].field_0x4 = iVar1;
  pUVar2[1].field_0x8 = this->bClearBeforeUse;
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 1494cf230

wchar_t * __thiscall UComputeDataInterfaceBuffer::GetClassName(UComputeDataInterfaceBuffer *this)

{
  return L"Buffer";
}

// GetHLSL @ 1494cf7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UComputeDataInterfaceBuffer::GetHLSL
          (UComputeDataInterfaceBuffer *this,FString *param_1,FString *param_2)

{
  EShaderFundamentalType EVar1;
  FShaderValueType *pFVar2;
  int iVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  undefined1 auStackY_268 [32];
  FString local_228;
  FString local_218;
  FString local_208;
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  FStringFormatArg local_138;
  FStringFormatArg local_118;
  FString local_f8;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_e8;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  iVar6 = 0;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FShaderValueType::ToString((this->ValueType).ValueTypePtr,&local_208,(FName *)&local_228);
  iVar3 = FShaderValueType::GetResourceElementSize((this->ValueType).ValueTypePtr);
  pFVar2 = (this->ValueType).ValueTypePtr;
  if ((pFVar2->DimensionType == Scalar) && ((EVar1 = pFVar2->Type, EVar1 == Int || (EVar1 == Uint)))
     ) {
    iVar6 = 1;
  }
  pFVar4 = ::FString::FString(&local_f8,param_2);
  FStringFormatArg::FStringFormatArg(&local_118,pFVar4);
  ::FString::FString(&local_1a8,L"DataInterfaceName");
  FVar5.Data = local_208.Data.AllocatorInstance.Data;
  local_e8.Key = &local_1a8;
  local_e8.Value = &local_118;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = local_208.Data.ArrayNum;
  if (local_208.Data.ArrayNum == 0) {
    local_228.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_208.Data.ArrayNum,0,(ForAnyElementType *)&local_228,local_208.Data.ArrayNum
               ,&local_228.Data.ArrayMax);
    memcpy(local_228.Data.AllocatorInstance.Data,FVar5.Data,(longlong)local_208.Data.ArrayNum * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_138,&local_228);
  ::FString::FString(&local_1b8,L"ValueType");
  local_d8 = &local_1b8;
  local_d0 = &local_138;
  ::FString::FString(&local_1c8,L"ValueTypeStride");
  FStringFormatArg::FStringFormatArg(&local_158,iVar3);
  local_c8 = &local_1c8;
  local_c0 = &local_158;
  ::FString::FString(&local_1d8,L"SupportAtomic");
  FStringFormatArg::FStringFormatArg(&local_178,iVar6);
  local_b8 = &local_1d8;
  local_b0 = &local_178;
  ::FString::FString(&local_1e8,L"SplitReadWrite");
  FStringFormatArg::FStringFormatArg(&local_198,(uint)(this->bAllowReadWrite == false));
  local_a8 = &local_1e8;
  local_a0 = &local_198;
  local_1f8._First = &local_e8;
  local_1f8._Last = (TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)local_98;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98,&local_1f8);
  if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_158.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_138.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_118.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.StringValue.Data.AllocatorInstance.Data);
  }
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  LoadShaderSourceFile
            (TemplateFilePath,SP_PCD3D_SM5,&local_218,
             (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
             (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_218.Data.ArrayNum != 0) {
    FVar5.Data = local_218.Data.AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (&local_228,(wchar_t *)FVar5.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  iVar3 = local_228.Data.ArrayNum + -1;
  if (local_228.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_228.Data.AllocatorInstance.Data,iVar3);
  if ((FName)local_228.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
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
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 1494d0440

UClass * __cdecl UComputeDataInterfaceBuffer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeDataInterfaceBuffer",
               &Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton,
               StaticRegisterNativesUComputeDataInterfaceBuffer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComputeDataInterfaceBuffer>,
               InternalVTableHelperCtorCaller<UComputeDataInterfaceBuffer>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeDataInterfaceBuffer.InnerSingleton;
}

// GetShaderHash @ 1494d1060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UComputeDataInterfaceBuffer::GetShaderHash(UComputeDataInterfaceBuffer *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 1494d13f0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UComputeDataInterfaceBuffer::GetShaderParameters
          (UComputeDataInterfaceBuffer *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FBufferDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FBufferDataInterfaceParameters",L"FBufferDataInterfaceParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeDataInterfaceBuffer.cpp"
                 ,0x3d,0x20,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FBufferDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x20;
  return;
}

// GetShaderVirtualPath @ 1494d17a0

wchar_t * __thiscall
UComputeDataInterfaceBuffer::GetShaderVirtualPath(UComputeDataInterfaceBuffer *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 1494d19a0

void __thiscall
UComputeDataInterfaceBuffer::GetSupportedInputs
          (UComputeDataInterfaceBuffer *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FString *pFVar13;
  FShaderFunctionDefinition *pFVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar12 = param_1->ArrayNum;
  if (iVar12 == param_1->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar12 + 1;
  pFVar14 = (FShaderFunctionDefinition *)
            ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x28);
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar14,1);
  pFVar13 = ::FString::FString(&local_58,L"ReadNumValues");
  iVar17 = (pFVar13->Data).ArrayNum;
  iVar12 = iVar17 + -1;
  if (iVar17 == 0) {
    iVar12 = 0;
  }
  ::FString::AssignRange
            ((FString *)pFVar14,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar12);
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((pFVar14->bHasReturnType != false) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<297563889841734451>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ShaderParamTypeDefinition.cpp"
                          ,0x333,"!bHasReturnType"), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar14->bHasReturnType = true;
  FShaderFunctionDefinition::AddParam(pFVar14,Uint,0,0,None);
  iVar12 = (pFVar14->ParamTypes).ArrayNum;
  iVar17 = iVar12 + -1;
  lVar16 = (longlong)iVar17;
  if (0 < iVar17) {
    lVar15 = lVar16 * 0x30;
    iVar12 = iVar12 + -2;
    do {
      if ((iVar12 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce6,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (pFVar14->ParamTypes).ArrayNum;
      if (((iVar1 <= iVar17) || (iVar1 <= iVar12)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce7,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar17 != iVar12) {
        pFVar2 = (pFVar14->ParamTypes).AllocatorInstance.Data;
        uVar4 = *(undefined8 *)(pFVar2 + lVar15 + -0x30 + 8);
        uVar5 = *(undefined8 *)(pFVar2 + lVar15);
        uVar6 = *(undefined8 *)(pFVar2 + lVar15 + 8);
        uVar7 = *(undefined8 *)(pFVar2 + lVar15 + 0x10);
        uVar8 = *(undefined8 *)(pFVar2 + lVar15 + 0x10 + 8);
        uVar9 = *(undefined8 *)(pFVar2 + lVar15 + 0x20);
        uVar10 = *(undefined8 *)(pFVar2 + lVar15 + 0x20 + 8);
        *(undefined8 *)(pFVar2 + lVar15) = *(undefined8 *)(pFVar2 + lVar15 + -0x30);
        *(undefined8 *)(pFVar2 + lVar15 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar2 + lVar15 + -0x20 + 8);
        *(undefined8 *)(pFVar2 + lVar15 + 0x10) = *(undefined8 *)(pFVar2 + lVar15 + -0x20);
        *(undefined8 *)(pFVar2 + lVar15 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)(pFVar2 + lVar15 + -0x10 + 8);
        *(undefined8 *)(pFVar2 + lVar15 + 0x20) = *(undefined8 *)(pFVar2 + lVar15 + -0x10);
        *(undefined8 *)(pFVar2 + lVar15 + 0x20 + 8) = uVar4;
        *(undefined8 *)(pFVar2 + lVar15 + -0x30) = uVar5;
        *(undefined8 *)(pFVar2 + lVar15 + -0x30 + 8) = uVar6;
        *(undefined8 *)(pFVar2 + lVar15 + -0x20) = uVar7;
        *(undefined8 *)(pFVar2 + lVar15 + -0x20 + 8) = uVar8;
        *(undefined8 *)(pFVar2 + lVar15 + -0x10) = uVar9;
        *(undefined8 *)(pFVar2 + lVar15 + -0x10 + 8) = uVar10;
      }
      iVar17 = iVar17 + -1;
      iVar12 = iVar12 + -1;
      lVar16 = lVar16 + -1;
      lVar15 = lVar15 + -0x30;
    } while (0 < lVar16);
  }
  iVar12 = param_1->ArrayNum;
  if (iVar12 == param_1->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar12 + 1;
  pFVar14 = (FShaderFunctionDefinition *)
            ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x28);
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar14,1);
  pFVar13 = ::FString::FString(&local_48,L"ReadValue");
  iVar17 = (pFVar13->Data).ArrayNum;
  iVar12 = iVar17 + -1;
  if (iVar17 == 0) {
    iVar12 = 0;
  }
  ::FString::AssignRange
            ((FString *)pFVar14,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar12);
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar14 = FShaderFunctionDefinition::AddReturnType(pFVar14,(this->ValueType).ValueTypePtr);
  FShaderFunctionDefinition::AddParam(pFVar14,Uint,0,0,None);
  iVar12 = param_1->ArrayNum;
  if (iVar12 == param_1->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar12 + 1;
  pFVar14 = (FShaderFunctionDefinition *)
            ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x28);
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar14,1);
  pFVar13 = ::FString::FString(&local_38,L"ReadValueUAV");
  iVar17 = (pFVar13->Data).ArrayNum;
  iVar12 = iVar17 + -1;
  if (iVar17 == 0) {
    iVar12 = 0;
  }
  ::FString::AssignRange
            ((FString *)pFVar14,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar12);
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar14 = FShaderFunctionDefinition::AddReturnType(pFVar14,(this->ValueType).ValueTypePtr);
  FShaderFunctionDefinition::AddParam(pFVar14,Uint,0,0,None);
  return;
}

// GetSupportedOutputs @ 1494d1da0

void __thiscall
UComputeDataInterfaceBuffer::GetSupportedOutputs
          (UComputeDataInterfaceBuffer *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FShaderFunctionDefinition *pFVar4;
  int iVar5;
  int iVar6;
  FString local_28;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar4 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar4,1);
  pFVar3 = ::FString::FString(&local_28,L"WriteValue");
  iVar6 = 0;
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange((FString *)pFVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar4 = FShaderFunctionDefinition::AddParam(pFVar4,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar4,(this->ValueType).ValueTypePtr,None);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar4 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar4,1);
  pFVar3 = ::FString::FString(&local_28,L"WriteAtomicAdd");
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange((FString *)pFVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar4 = FShaderFunctionDefinition::AddReturnType(pFVar4,(this->ValueType).ValueTypePtr);
  pFVar4 = FShaderFunctionDefinition::AddParam(pFVar4,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar4,(this->ValueType).ValueTypePtr,None);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar4 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar4,1);
  pFVar3 = ::FString::FString(&local_28,L"WriteAtomicMin");
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange((FString *)pFVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar4 = FShaderFunctionDefinition::AddReturnType(pFVar4,(this->ValueType).ValueTypePtr);
  pFVar4 = FShaderFunctionDefinition::AddParam(pFVar4,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar4,(this->ValueType).ValueTypePtr,None);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar4 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar4,1);
  pFVar3 = ::FString::FString(&local_28,L"WriteAtomicMax");
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = iVar6;
  }
  ::FString::AssignRange((FString *)pFVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar4 = FShaderFunctionDefinition::AddReturnType(pFVar4,(this->ValueType).ValueTypePtr);
  pFVar4 = FShaderFunctionDefinition::AddParam(pFVar4,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar4,(this->ValueType).ValueTypePtr,None);
  return;
}

// StaticRegisterNativesUComputeDataInterfaceBuffer @ 1494d7e30

void __cdecl UComputeDataInterfaceBuffer::StaticRegisterNativesUComputeDataInterfaceBuffer(void)

{
  return;
}

