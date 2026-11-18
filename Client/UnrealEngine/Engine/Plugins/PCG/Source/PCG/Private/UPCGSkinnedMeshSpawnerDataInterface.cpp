// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 14972b250

UClass * __cdecl UPCGSkinnedMeshSpawnerDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerDataInterface",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSpawnerDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerDataInterface>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton;
}

// UPCGSkinnedMeshSpawnerDataInterface @ 14973c610

UPCGSkinnedMeshSpawnerDataInterface * __thiscall
UPCGSkinnedMeshSpawnerDataInterface::UPCGSkinnedMeshSpawnerDataInterface
          (UPCGSkinnedMeshSpawnerDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGSkinnedMeshSpawnerDataInterface__6B_;
  return this;
}

// UPCGSkinnedMeshSpawnerDataInterface @ 14973c640

UPCGSkinnedMeshSpawnerDataInterface * __thiscall
UPCGSkinnedMeshSpawnerDataInterface::UPCGSkinnedMeshSpawnerDataInterface
          (UPCGSkinnedMeshSpawnerDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGSkinnedMeshSpawnerDataInterface__6B_;
  return this;
}

// ~UPCGSkinnedMeshSpawnerDataInterface @ 14973e700

void __thiscall
UPCGSkinnedMeshSpawnerDataInterface::~UPCGSkinnedMeshSpawnerDataInterface
          (UPCGSkinnedMeshSpawnerDataInterface *this)

{
  *(undefined ***)this = &___7UPCGComputeDataInterface__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14974b610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UPCGSkinnedMeshSpawnerDataInterface::CreateDataProvider(UPCGSkinnedMeshSpawnerDataInterface *this)

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
  pUVar2 = UPCGSkinnedMeshSpawnerDataProvider::StaticClass();
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

// GetClassName @ 1497548f0

wchar_t * __thiscall
UPCGSkinnedMeshSpawnerDataInterface::GetClassName(UPCGSkinnedMeshSpawnerDataInterface *this)

{
  return L"PCGSkinnedMeshSpawner";
}

// GetHLSL @ 149759280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGSkinnedMeshSpawnerDataInterface::GetHLSL
          (UPCGSkinnedMeshSpawnerDataInterface *this,FString *param_1,FString *param_2)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStack_168 [32];
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FString local_a8;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_98;
  FString *local_88;
  FStringFormatArg *local_80;
  FString *local_78;
  FStringFormatArg *local_70;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar1 = ::FString::FString(&local_a8,param_2);
  FStringFormatArg::FStringFormatArg(&local_c8,pFVar1);
  ::FString::FString(&local_118,L"DataInterfaceName");
  local_98.Key = &local_118;
  local_98.Value = &local_c8;
  ::FString::FString(&local_128,L"MaxAttributes");
  FStringFormatArg::FStringFormatArg(&local_e8,0x40);
  local_88 = &local_128;
  local_80 = &local_e8;
  ::FString::FString(&local_138,L"MaxPrimitives");
  FStringFormatArg::FStringFormatArg(&local_108,0x100);
  local_78 = &local_138;
  local_70 = &local_108;
  local_148._First = &local_98;
  local_148._Last = (TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)local_68;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_68,&local_148);
  if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl
            ((FString *)&local_148,
             L"int {DataInterfaceName}_SelectorAttributeId;\nuint {DataInterfaceName}_NumAttributes;\nuint {DataInterfaceName}_NumPrimitives;\nuint {DataInterfaceName}_ApplyBounds;\nuint4 {DataInterfaceName}_AttributeIdOffsetStrides[{MaxAttributes}];\nStructuredBuffer<float4> {DataInterfaceName}_PrimitiveMeshBoundsMin;\nStructuredBuffer<float4> {DataInterfaceName}_PrimitiveMeshBoundsMax;\nStructuredBuffer<int> {DataInterfaceName}_PrimitiveStringKeys;\nDECLARE_SCALAR_ARRAY(float, {DataInterfaceName}_SelectionCDF, {MaxPrimitives});\n\nint SMSpawner_GetSelectorAttributeId_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_SelectorAttributeId;\n}\n\nuint SMSpawner_GetNumAttributes_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_NumAttributes;\n}\n\nuint4 SMSpawner_GetAttributeIdOffsetStride_{DataInterfaceName}(uint InAttributeIndex)\n{\n\treturn {DataInterfaceName}_AttributeIdOffsetStrides[InAttributeIndex];\n}\n\nuint SMSpawner_GetNumPrimitives_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_NumPrimitives;\n}\n\nbool SMSpawner_ShouldApplyBounds_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ApplyBounds > 0;\n}\n\nfloat3 SMSpawner_GetPrimitiveMeshBoundsMin_{DataInterfaceName}(uint InPrimitiveIndex)\n{\n\treturn {DataInterfaceName}_PrimitiveMeshBoundsMin[InPrimitiveIndex].xyz;\n}\n\nfloat3 SMSpawner_GetPrimitiveMeshBoundsMax_{DataInterfaceName}(uint InPrimitiveIndex)\n{\n\treturn {DataInterfaceName}_PrimitiveMeshBoundsMax[InPrimitiveIndex].xyz;\n}\n\nint SMSpawner_GetPrimitiveStringKey_{DataInterfaceName}(uint InPrimitiveIndex)\n{\n\treturn {DataInterfaceName}_PrimitiveStringKeys[InPrimitiveIndex];\n}\n\nuint SMSpawner_GetPrimitiveIndexFromStringKey_{DataInterfaceName}(int InMeshPathStringKey)\n{\n\tfor (uint Index = 0; Index < {DataInterfaceName}_NumPrimitives; ++Index)\n\t{\n\t\tif ({DataInterfaceName}_PrimitiveStringKeys[Index] == InMeshPathStringKey)\n\t\t{\n\t\t\treturn Index;\n\t\t}\n\t}\n\t\n\treturn (uint)-1;\n}\n\nfloat SMSpawner_GetPrimitiveSelectionCDF_{DataInterfaceName}(uint InPrimitiveIndex)\n{\n\treturn GET_SCALAR_ARRAY_ELEMENT({DataInterfaceName}_SelectionCDF, InPrimitiveIndex)..." /* TRUNCATED STRING LITERAL */
             ,(TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
               *)local_68);
  iVar2 = (int)local_148._Last + -1;
  if ((int)local_148._Last == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_148._First,iVar2);
  if (local_148._First != (TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)0x0) {
    FMemory::Free(local_148._First);
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

// GetPrivateStaticClass @ 14975c880

UClass * __cdecl UPCGSkinnedMeshSpawnerDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSkinnedMeshSpawnerDataInterface",
               &Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGSkinnedMeshSpawnerDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSkinnedMeshSpawnerDataInterface>,
               InternalVTableHelperCtorCaller<UPCGSkinnedMeshSpawnerDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSkinnedMeshSpawnerDataInterface.InnerSingleton;
}

// GetShaderParameters @ 1497619e0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UPCGSkinnedMeshSpawnerDataInterface::GetShaderParameters
          (UPCGSkinnedMeshSpawnerDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FPCGSkinnedMeshSpawnerDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPCGSkinnedMeshSpawnerDataInterfaceParameters",
                 L"FPCGSkinnedMeshSpawnerDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGSkinnedMeshSpawnerDataInterface.cpp"
                 ,0x62,0x830,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSkinnedMeshSpawnerDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x830;
  return;
}

// GetSupportedInputs @ 149765eb0

void __thiscall
UPCGSkinnedMeshSpawnerDataInterface::GetSupportedInputs
          (UPCGSkinnedMeshSpawnerDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetSelectorAttributeId");
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetNumAttributes");
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetNumPrimitives");
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_ShouldApplyBounds");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Bool,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetPrimitiveMeshBoundsMin");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,0);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetPrimitiveMeshBoundsMax");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,0);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetAttributeIdOffsetStride");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,4,0);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetPrimitiveStringKey");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Int,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetPrimitiveIndexFromStringKey");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Int,0,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetPrimitiveSelectionCDF");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"SMSpawner_GetSelectedMeshAttributeId");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  return;
}

// StaticRegisterNativesUPCGSkinnedMeshSpawnerDataInterface @ 149778870

void __cdecl
UPCGSkinnedMeshSpawnerDataInterface::StaticRegisterNativesUPCGSkinnedMeshSpawnerDataInterface(void)

{
  return;
}

