// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 22

// StaticClass @ 14e2581c0

UClass * __cdecl UOptimusGroomExecDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomExecDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomExecDataInterface,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomExecDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomExecDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.InnerSingleton;
}

// UOptimusGroomExecDataInterface @ 14e26aba0

UOptimusGroomExecDataInterface * __thiscall
UOptimusGroomExecDataInterface::UOptimusGroomExecDataInterface
          (UOptimusGroomExecDataInterface *this,FVTableHelper *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  this->Domain = ControlPoint;
  this->_padding_ = (longlong)&_vftable__for__UOptimusComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeprecatedExecutionDataInterface__;
  return this;
}

// UOptimusGroomExecDataInterface @ 14e26abe0

UOptimusGroomExecDataInterface * __thiscall
UOptimusGroomExecDataInterface::UOptimusGroomExecDataInterface
          (UOptimusGroomExecDataInterface *this,FObjectInitializer *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  this->Domain = ControlPoint;
  this->_padding_ = (longlong)&_vftable__for__UOptimusComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeprecatedExecutionDataInterface__;
  return this;
}

// ~UOptimusGroomExecDataInterface @ 14e26b390

void __thiscall
UOptimusGroomExecDataInterface::~UOptimusGroomExecDataInterface
          (UOptimusGroomExecDataInterface *this)

{
  this->_padding_ = (longlong)&_vftable__for__UOptimusComputeDataInterface__;
  this->_padding_ = (longlong)&___7IOptimusDeprecatedExecutionDataInterface__6B_;
  UOptimusComputeDataInterface::~UOptimusComputeDataInterface((UOptimusComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14e26f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGroomExecDataInterface::CreateDataProvider
          (UOptimusGroomExecDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UObject *pUVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UOptimusGroomExecDataProvider::StaticClass();
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
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar3 = Z_Construct_UClass_UMeshComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar3);
    if (bVar1) {
      pUVar5 = *(UObject **)param_1.field0_0x0;
      goto LAB_14e26f2bd;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14e26f2bd:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 1) = pUVar5;
  pUVar2[1].field_0x8 = this->Domain;
  return (UComputeDataProvider *)pUVar2;
}

// GetCategory @ 14e274020

FName __thiscall UOptimusGroomExecDataInterface::GetCategory(UOptimusGroomExecDataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusComputeDataInterface::CategoryName::ExecutionDataInterfaces;
  return in_RDX;
}

// GetClassName @ 14e2740a0

wchar_t * __thiscall
UOptimusGroomExecDataInterface::GetClassName(UOptimusGroomExecDataInterface *this)

{
  return L"GroomExec";
}

// GetDisplayName @ 14e276600

FString * __thiscall
UOptimusGroomExecDataInterface::GetDisplayName
          (UOptimusGroomExecDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Execute Groom");
  return __return_storage_ptr__;
}

// GetExecutionDomainName @ 14e276790

FName __cdecl
UOptimusGroomExecDataInterface::GetExecutionDomainName(EOptimusGroomExecDomain param_1)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  undefined7 in_register_00000009;
  char in_DL;
  
  if (in_DL == '\x01') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points;
    FVar1._1_7_ = in_register_00000009;
    FVar1.ComparisonIndex.Value._0_1_ = param_1;
    return FVar1;
  }
  if (in_DL == '\x02') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves;
    FVar2._1_7_ = in_register_00000009;
    FVar2.ComparisonIndex.Value._0_1_ = param_1;
    return FVar2;
  }
  if (in_DL == '\x03') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Edges;
    FVar3._1_7_ = in_register_00000009;
    FVar3.ComparisonIndex.Value._0_1_ = param_1;
    return FVar3;
  }
  if (in_DL == '\x04') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Objects;
    FVar4._1_7_ = in_register_00000009;
    FVar4.ComparisonIndex.Value._0_1_ = param_1;
    return FVar4;
  }
  if (in_DL == '\x05') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points;
    FVar5._1_7_ = in_register_00000009;
    FVar5.ComparisonIndex.Value._0_1_ = param_1;
    return FVar5;
  }
  if (in_DL == '\x06') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves;
    FVar6._1_7_ = in_register_00000009;
    FVar6.ComparisonIndex.Value._0_1_ = param_1;
    return FVar6;
  }
  if (in_DL == '\a') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Edges;
    FVar7._1_7_ = in_register_00000009;
    FVar7.ComparisonIndex.Value._0_1_ = param_1;
    return FVar7;
  }
  if (in_DL == '\b') {
    *(FName *)CONCAT71(in_register_00000009,param_1) =
         UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Objects;
    FVar8._1_7_ = in_register_00000009;
    FVar8.ComparisonIndex.Value._0_1_ = param_1;
    return FVar8;
  }
  *(undefined8 *)CONCAT71(in_register_00000009,param_1) = 0;
  FVar9._1_7_ = in_register_00000009;
  FVar9.ComparisonIndex.Value._0_1_ = param_1;
  return FVar9;
}

// GetHLSL @ 14e277770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomExecDataInterface::GetHLSL
          (UOptimusGroomExecDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e27ab80

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomExecDataInterface::GetPinDefinitions
          (UOptimusGroomExecDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FName *pFVar6;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar7;
  FName local_res18;
  FString local_68;
  FName local_58;
  FString local_50;
  FName local_40;
  undefined8 local_38;
  uint local_30;
  undefined1 local_2c;
  FName local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FString::FString(&local_68,"ReadNumThreads");
  pFVar6 = ::FName::FName(&local_res18,"NumThreads");
  local_58 = *pFVar6;
  ::FString::FString(&local_50,pFVar5);
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_38 = 0;
  local_30 = 1;
  local_2c = 1;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar6 <= &local_58) && (&local_58 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 7)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar6 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x38);
  *pFVar6 = local_58;
  pFVar6[1].ComparisonIndex = 0;
  pFVar6[1].Number = 0;
  pFVar6[1] = (FName)local_50.Data.AllocatorInstance.Data;
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6[2].ComparisonIndex.Value = local_50.Data.ArrayNum;
  pFVar6[2].Number = local_50.Data.ArrayMax;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  pFVar6[3].ComparisonIndex = 0;
  pFVar6[3].Number = 0;
  pFVar6[3] = local_40;
  local_40 = (FName)0x0;
  pFVar6[4].ComparisonIndex.Value = (uint)local_38;
  pFVar6[4].Number = local_38._4_4_;
  local_38 = 0;
  pFVar6[5].ComparisonIndex.Value = local_30;
  *(undefined1 *)&pFVar6[5].Number = local_2c;
  pFVar6[6] = local_28;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_40 != (FName)0x0) {
    FMemory::Free((void *)local_40);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e282a10

UClass * __cdecl UOptimusGroomExecDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomExecDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomExecDataInterface,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomExecDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomExecDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e2844d0

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomExecDataInterface::GetRequiredComponentClass(UOptimusGroomExecDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetSelectedExecutionDomainName @ 14e2846d0

FName __thiscall
UOptimusGroomExecDataInterface::GetSelectedExecutionDomainName(UOptimusGroomExecDataInterface *this)

{
  FName in_RDX;
  
  GetExecutionDomainName((EOptimusGroomExecDomain)in_RDX.ComparisonIndex.Value);
  return in_RDX;
}

// GetShaderHash @ 14e284780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomExecDataInterface::GetShaderHash(UOptimusGroomExecDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e284cc0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusGroomExecDataInterface::GetShaderParameters
          (UOptimusGroomExecDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FGroomExecDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FGroomExecDataInterfaceParameters",L"FGroomExecDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomDomainsExec.cpp"
                 ,0x2d,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FGroomExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetShaderVirtualPath @ 14e285960

wchar_t * __thiscall
UOptimusGroomExecDataInterface::GetShaderVirtualPath(UOptimusGroomExecDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e2862d0

void __thiscall
UOptimusGroomExecDataInterface::GetSupportedInputs
          (UOptimusGroomExecDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumThreads");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Int,3,0);
  return;
}

// IsExecutionInterface @ 14e2888a0

bool __thiscall
UOptimusGroomExecDataInterface::IsExecutionInterface(UOptimusGroomExecDataInterface *this)

{
  return true;
}

// IsVisible @ 14e289420

bool __thiscall UOptimusGroomExecDataInterface::IsVisible(UOptimusGroomExecDataInterface *this)

{
  return false;
}

// StaticRegisterNativesUOptimusGroomExecDataInterface @ 14e289780

void __cdecl
UOptimusGroomExecDataInterface::StaticRegisterNativesUOptimusGroomExecDataInterface(void)

{
  return;
}

// _getUObject @ 14e28a830

UObject * __thiscall
UOptimusGroomExecDataInterface::_getUObject(UOptimusGroomExecDataInterface *this)

{
  return (UObject *)&this[-1]._padding_;
}

