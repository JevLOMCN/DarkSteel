// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 14972b710

UClass * __cdecl UPCGVirtualTextureDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureDataInterface",
               &Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGVirtualTextureDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVirtualTextureDataInterface>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton;
}

// UPCGVirtualTextureDataInterface @ 14973cf30

UPCGVirtualTextureDataInterface * __thiscall
UPCGVirtualTextureDataInterface::UPCGVirtualTextureDataInterface
          (UPCGVirtualTextureDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGVirtualTextureDataInterface__6B_;
  return this;
}

// UPCGVirtualTextureDataInterface @ 14973cf60

UPCGVirtualTextureDataInterface * __thiscall
UPCGVirtualTextureDataInterface::UPCGVirtualTextureDataInterface
          (UPCGVirtualTextureDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGVirtualTextureDataInterface__6B_;
  return this;
}

// ~UPCGVirtualTextureDataInterface @ 14973ebc0

void __thiscall
UPCGVirtualTextureDataInterface::~UPCGVirtualTextureDataInterface
          (UPCGVirtualTextureDataInterface *this)

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

// CreateDataProvider @ 14974b930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UPCGVirtualTextureDataInterface::CreateDataProvider(UPCGVirtualTextureDataInterface *this)

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
  pUVar2 = UPCGVirtualTextureDataProvider::StaticClass();
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

// GetClassName @ 149754940

wchar_t * __thiscall
UPCGVirtualTextureDataInterface::GetClassName(UPCGVirtualTextureDataInterface *this)

{
  return L"PCGVirtualTexture";
}

// GetDefines @ 1497577f0

/* WARNING: Removing unreachable block (ram,0x00014975796f) */
/* WARNING: Removing unreachable block (ram,0x000149757b08) */
/* WARNING: Removing unreachable block (ram,0x00014975797d) */
/* WARNING: Removing unreachable block (ram,0x000149757b16) */

void __thiscall
UPCGVirtualTextureDataInterface::GetDefines
          (UPCGVirtualTextureDataInterface *this,FComputeKernelDefinitionSet *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  FScriptContainerElement *local_38;
  undefined8 local_30;
  FScriptContainerElement *local_28;
  undefined8 local_20;
  FScriptContainerElement *local_18;
  int local_10;
  int iStack_c;
  
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_88,4);
  pFVar4 = ::FString::FString(&local_68,L"PCG_MAX_NUM_BINDINGS");
  local_48 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = (pFVar4->Data).ArrayNum;
  local_40._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_38 = local_88.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = local_88.Data.ArrayNum;
  local_30._4_4_ = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_48;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_40;
  *(undefined4 *)(pFVar5 + 0xc) = local_40._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_38;
  *(int *)(pFVar5 + 0x18) = (int)local_30;
  *(int *)(pFVar5 + 0x1c) = local_30._4_4_;
  local_30 = 0;
  local_38 = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_48 = (FScriptContainerElement *)0x0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_78,3);
  pFVar4 = ::FString::FString(&local_58,L"PCG_MAX_NUM_LAYERS");
  local_28 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = (pFVar4->Data).ArrayNum;
  local_20._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_18 = local_78.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = local_78.Data.ArrayNum;
  iStack_c = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_28;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar5 + 0xc) = local_20._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_18;
  *(int *)(pFVar5 + 0x18) = local_10;
  *(int *)(pFVar5 + 0x1c) = iStack_c;
  return;
}

// GetHLSL @ 149759a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UPCGVirtualTextureDataInterface::GetHLSL
          (UPCGVirtualTextureDataInterface *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  undefined1 auStackY_118 [32];
  FString local_e8;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_d8;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> local_c8;
  initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_> local_b8;
  FString local_a8;
  FStringFormatArg local_98;
  FString local_78;
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar3 = ::FString::FString(&local_78,param_2);
  FStringFormatArg::FStringFormatArg(&local_98,pFVar3);
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
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  bVar2 = LoadShaderSourceFile
                    (TemplateFilePath,SP_PCD3D_SM5,&local_e8,
                     (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,(FName *)0x0,
                     (TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
  if (bVar2) {
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar4.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FString::FormatImpl
              ((FString *)&local_c8,(wchar_t *)FVar4.Data,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_68);
    iVar5 = (int)local_c8.Value + -1;
    if ((int)local_c8.Value == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_c8.Key,iVar5);
    if (local_c8.Key != (FString *)0x0) {
      FMemory::Free(local_c8.Key);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3096512966187548773>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGVirtualTextureDataInterface.cpp"
                       ,0x65,
                       "LoadShaderSourceFile(TemplateFilePath, EShaderPlatform::SP_PCD3D_SM5, &TemplateFile, nullptr)"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
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

// GetPermutations @ 14975a970

void __thiscall
UPCGVirtualTextureDataInterface::GetPermutations
          (UPCGVirtualTextureDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,EnableMultipleVirtualTexturePermutationName);
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14975d0c0

UClass * __cdecl UPCGVirtualTextureDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureDataInterface",
               &Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGVirtualTextureDataInterface,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVirtualTextureDataInterface>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataInterface.InnerSingleton;
}

// GetShaderHash @ 14975ff10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UPCGVirtualTextureDataInterface::GetShaderHash
          (UPCGVirtualTextureDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  pFVar1 = GetShaderFileHash(L"/Engine/Private/VirtualTextureCommon.ush",SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  pFVar1 = GetShaderFileHash(L"/Plugin/PCG/Private/PCGVirtualTextureCommon.ush",SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 1497622d0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UPCGVirtualTextureDataInterface::GetShaderParameters
          (UPCGVirtualTextureDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FPCGVirtualTextureDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FPCGVirtualTextureDataInterfaceParameters",
                 L"FPCGVirtualTextureDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGVirtualTextureDataInterface.cpp"
                 ,0x2c,0x4f0,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGVirtualTextureDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x4f0;
  return;
}

// GetShaderVirtualPath @ 149762500

wchar_t * __thiscall
UPCGVirtualTextureDataInterface::GetShaderVirtualPath(UPCGVirtualTextureDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 1497679d0

void __thiscall
UPCGVirtualTextureDataInterface::GetSupportedInputs
          (UPCGVirtualTextureDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"SampleVirtualTexture");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,3,0,None);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Bool,0,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,3,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,3,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,Out);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,Out);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,4,0,Out);
  return;
}

// StaticRegisterNativesUPCGVirtualTextureDataInterface @ 149778920

void __cdecl
UPCGVirtualTextureDataInterface::StaticRegisterNativesUPCGVirtualTextureDataInterface(void)

{
  return;
}

