// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 22

// StaticClass @ 14e1098e0

UClass * __cdecl UDEPRECATED_OptimusSkinnedMeshExecDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_OptimusSkinnedMeshExecDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshExecDataInterface",
               &Z_Registration_Info_UClass_UDEPRECATED_OptimusSkinnedMeshExecDataInterface.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_OptimusSkinnedMeshExecDataInterface,
               0x38,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_OptimusSkinnedMeshExecDataInterface>,
               InternalVTableHelperCtorCaller<UDEPRECATED_OptimusSkinnedMeshExecDataInterface>,
               local_res8,UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_OptimusSkinnedMeshExecDataInterface.InnerSingleton;
}

// UDEPRECATED_OptimusSkinnedMeshExecDataInterface @ 14e158060

UDEPRECATED_OptimusSkinnedMeshExecDataInterface * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::UDEPRECATED_OptimusSkinnedMeshExecDataInterface
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->Domain = Vertex;
  this->_padding_ = (longlong)&_vftable__for__UOptimusComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeprecatedExecutionDataInterface__;
  return this;
}

// UDEPRECATED_OptimusSkinnedMeshExecDataInterface @ 14e1580a0

UDEPRECATED_OptimusSkinnedMeshExecDataInterface * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::UDEPRECATED_OptimusSkinnedMeshExecDataInterface
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->Domain = Vertex;
  this->_padding_ = (longlong)&_vftable__for__UOptimusComputeDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeprecatedExecutionDataInterface__;
  return this;
}

// ~UDEPRECATED_OptimusSkinnedMeshExecDataInterface @ 14e162030

void __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::~UDEPRECATED_OptimusSkinnedMeshExecDataInterface
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  this->_padding_ = (longlong)&___7IOptimusDeprecatedExecutionDataInterface__6B_;
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181ac0

bool __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::CanSupportUnifiedDispatch
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19c3c0

UComputeDataProvider * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::CreateDataProvider
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,TObjectPtr<UObject> param_1,
          ulong64 param_2,ulong64 param_3)

{
  return (UComputeDataProvider *)0x0;
}

// GetCategory @ 14e1bc310

FName __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetCategory
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusComputeDataInterface::CategoryName::ExecutionDataInterfaces;
  return in_RDX;
}

// GetClassName @ 14e1bcb00

wchar_t * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetClassName
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  return L"SkinnedMeshExec";
}

// GetDisplayName @ 14e1c3eb0

FString * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetDisplayName
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Execute Skinned Mesh");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c5a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetHLSL
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e1cd310

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetPinDefinitions
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,
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

// GetPrivateStaticClass @ 14e1d42b0

UClass * __cdecl UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_OptimusSkinnedMeshExecDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshExecDataInterface",
               &Z_Registration_Info_UClass_UDEPRECATED_OptimusSkinnedMeshExecDataInterface.
                InnerSingleton,StaticRegisterNativesUDEPRECATED_OptimusSkinnedMeshExecDataInterface,
               0x38,8,CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_OptimusSkinnedMeshExecDataInterface>,
               InternalVTableHelperCtorCaller<UDEPRECATED_OptimusSkinnedMeshExecDataInterface>,
               local_res8,UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_OptimusSkinnedMeshExecDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1df710

TSubclassOf<UActorComponent> __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetRequiredComponentClass
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetSelectedExecutionDomainName @ 14e1e0510

FName __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetSelectedExecutionDomainName
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  char cVar1;
  FName in_RDX;
  
  cVar1 = (char)this->_padding_;
  if (cVar1 == '\x01') {
    *(FName *)in_RDX = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
    return in_RDX;
  }
  if (cVar1 == '\x02') {
    *(FName *)in_RDX = UOptimusSkinnedMeshComponentSource::Domains::Triangle;
    return in_RDX;
  }
  *(FName *)in_RDX = (FName)0x0;
  return in_RDX;
}

// GetShaderHash @ 14e1e0570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetShaderHash
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e0a10

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetShaderParameters
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FSkinedMeshExecDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FSkinedMeshExecDataInterfaceParameters",L"FSkinedMeshExecDataInterfaceParameters"
                 ,(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinnedMeshExec.cpp"
                 ,0x30,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinedMeshExecDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetShaderVirtualPath @ 14e1e3bc0

wchar_t * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetShaderVirtualPath
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e4380

void __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::GetSupportedInputs
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this,
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

// IsExecutionInterface @ 14e1eefd0

bool __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::IsExecutionInterface
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  return true;
}

// IsVisible @ 14e1f1020

bool __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::IsVisible
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  return false;
}

// StaticRegisterNativesUDEPRECATED_OptimusSkinnedMeshExecDataInterface @ 14e225730

void __cdecl
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::
StaticRegisterNativesUDEPRECATED_OptimusSkinnedMeshExecDataInterface(void)

{
  return;
}

// _getUObject @ 14e238d10

UObject * __thiscall
UDEPRECATED_OptimusSkinnedMeshExecDataInterface::_getUObject
          (UDEPRECATED_OptimusSkinnedMeshExecDataInterface *this)

{
  return (UObject *)&this[-1]._padding_;
}

