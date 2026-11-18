// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 14972c620

UClass * __cdecl UPCGDebugDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDataInterface",
               &Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGDebugDataInterface,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDebugDataInterface>,
               InternalVTableHelperCtorCaller<UPCGDebugDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton;
}

// UPCGDebugDataInterface @ 14973b920

UPCGDebugDataInterface * __thiscall
UPCGDebugDataInterface::UPCGDebugDataInterface(UPCGDebugDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this->DebugBufferSizeFloats = 0;
  this->_padding_ = (longlong)&___7UPCGDebugDataInterface__6B_;
  return this;
}

// UPCGDebugDataInterface @ 14973b960

UPCGDebugDataInterface * __thiscall
UPCGDebugDataInterface::UPCGDebugDataInterface
          (UPCGDebugDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this->DebugBufferSizeFloats = 0;
  this->_padding_ = (longlong)&___7UPCGDebugDataInterface__6B_;
  return this;
}

// ~UPCGDebugDataInterface @ 14973e070

void __thiscall UPCGDebugDataInterface::~UPCGDebugDataInterface(UPCGDebugDataInterface *this)

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

// CreateDataProvider @ 14974b250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UPCGDebugDataInterface::CreateDataProvider(UPCGDebugDataInterface *this)

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
  pUVar2 = UPCGDebugDataProvider::StaticClass();
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

// GetClassName @ 149754890

wchar_t * __thiscall UPCGDebugDataInterface::GetClassName(UPCGDebugDataInterface *this)

{
  return L"PCGKernelDebug";
}

// GetHLSL @ 149758620

void __thiscall
UPCGDebugDataInterface::GetHLSL(UPCGDebugDataInterface *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  int iVar4;
  ForAnyElementType _Src;
  wchar_t *pwVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  pwVar5 = L"";
  if (this->DebugBufferSizeFloats == 0) {
    pFVar1 = ::FString::FString(&local_78,L"{ /* No-Op */ }\n");
    _Src.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar1->Data).ArrayNum;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  else {
    FStringFormatArg::FStringFormatArg(&local_68,this->DebugBufferSizeFloats);
    if ((param_2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_48,pwVar3);
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_98.AllocatorInstance.Data,&local_68,2);
    ::FString::FormatImpl
              (&local_88,
               L"\n{\n\tif (Index >= 0 && Index < {0})\n\t{\n\t\t{1}_DebugBuffer.Store(Index * 4, asuint(Value));\n\t}\n}\n"
               ,&local_98);
    iVar4 = local_88.Data.ArrayNum;
    _Src.Data = local_88.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    FVar2.Data = local_68.StringValue.Data.AllocatorInstance.Data;
    if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      FVar2.Data = local_68.StringValue.Data.AllocatorInstance.Data;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_68,pwVar5);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_88,iVar4,&local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_48,&local_88);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl
            (&local_78,
             L"RWByteAddressBuffer {0}_DebugBuffer;\nvoid WriteDebugValue_{0}(uint Index, float Value) {1}"
             ,&local_98);
  iVar4 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14975bb00

UClass * __cdecl UPCGDebugDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDataInterface",
               &Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGDebugDataInterface,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDebugDataInterface>,
               InternalVTableHelperCtorCaller<UPCGDebugDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataInterface.InnerSingleton;
}

// GetRequiresReadback @ 14975f5e0

bool __thiscall UPCGDebugDataInterface::GetRequiresReadback(UPCGDebugDataInterface *this)

{
  return this->DebugBufferSizeFloats != 0;
}

// GetShaderHash @ 14975fd90

void __thiscall UPCGDebugDataInterface::GetShaderHash(UPCGDebugDataInterface *this,FString *param_1)

{
  return;
}

// GetShaderParameters @ 149760f40

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UPCGDebugDataInterface::GetShaderParameters
          (UPCGDebugDataInterface *this,wchar_t *param_1,FShaderParametersMetadataBuilder *param_2,
          FShaderParametersMetadataAllocations *param_3)

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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FPCGDebugDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPCGDebugDataInterfaceParameters",L"FPCGDebugDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDebugDataInterface.cpp"
                 ,0x1b,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGDebugDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetSupportedOutputs @ 149767b50

void __thiscall
UPCGDebugDataInterface::GetSupportedOutputs
          (UPCGDebugDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,"WriteDebugValue");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,None);
  return;
}

// StaticRegisterNativesUPCGDebugDataInterface @ 149778720

void __cdecl UPCGDebugDataInterface::StaticRegisterNativesUPCGDebugDataInterface(void)

{
  return;
}

