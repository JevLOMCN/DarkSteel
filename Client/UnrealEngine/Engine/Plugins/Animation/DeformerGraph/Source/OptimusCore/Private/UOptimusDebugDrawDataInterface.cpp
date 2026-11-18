// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 20

// StaticClass @ 14e113740

UClass * __cdecl UOptimusDebugDrawDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDebugDrawDataInterface",
               &Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusDebugDrawDataInterface,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDebugDrawDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusDebugDrawDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.InnerSingleton;
}

// UOptimusDebugDrawDataInterface @ 14e158f10

UOptimusDebugDrawDataInterface * __thiscall
UOptimusDebugDrawDataInterface::UOptimusDebugDrawDataInterface
          (UOptimusDebugDrawDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->bIsSupported = false;
  this->_padding_ = (longlong)&___7UOptimusDebugDrawDataInterface__6B_;
  (this->DebugDrawParameters).bForceEnable = false;
  (this->DebugDrawParameters).MaxLineCount = 10000;
  (this->DebugDrawParameters).MaxTriangleCount = 2000;
  (this->DebugDrawParameters).MaxCharacterCount = 2000;
  (this->DebugDrawParameters).FontSize = 8;
  return this;
}

// UOptimusDebugDrawDataInterface @ 14e158f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UOptimusDebugDrawDataInterface * __thiscall
UOptimusDebugDrawDataInterface::UOptimusDebugDrawDataInterface(UOptimusDebugDrawDataInterface *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,pFVar2);
  this->bIsSupported = false;
  this->_padding_ = (longlong)&___7UOptimusDebugDrawDataInterface__6B_;
  (this->DebugDrawParameters).bForceEnable = false;
  (this->DebugDrawParameters).MaxLineCount = 10000;
  (this->DebugDrawParameters).MaxTriangleCount = 2000;
  (this->DebugDrawParameters).MaxCharacterCount = 2000;
  (this->DebugDrawParameters).FontSize = 8;
  bVar1 = ShaderPrint::IsSupported(GMaxRHIShaderPlatform);
  if (bVar1) {
    this->bIsSupported = true;
  }
  return this;
}

// ~UOptimusDebugDrawDataInterface @ 14e162660

void __thiscall
UOptimusDebugDrawDataInterface::~UOptimusDebugDrawDataInterface
          (UOptimusDebugDrawDataInterface *this)

{
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181b10

bool __thiscall
UOptimusDebugDrawDataInterface::CanSupportUnifiedDispatch(UOptimusDebugDrawDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19cd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusDebugDrawDataInterface::CreateDataProvider
          (UOptimusDebugDrawDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  undefined3 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UOptimusDebugDrawDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar7);
    if (bVar5) {
      local_a8[0] = *(UObject **)param_1.field0_0x0;
      goto LAB_14e19cddb;
    }
  }
  local_a8[0] = (UObject *)0x0;
LAB_14e19cddb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar6 + 1),(FObjectPtr)local_a8);
  uVar1 = *(undefined3 *)&(this->DebugDrawParameters).field_0x1;
  iVar2 = (this->DebugDrawParameters).MaxLineCount;
  iVar3 = (this->DebugDrawParameters).MaxTriangleCount;
  iVar4 = (this->DebugDrawParameters).MaxCharacterCount;
  pUVar6[1].field_0x8 = (this->DebugDrawParameters).bForceEnable;
  *(undefined3 *)&pUVar6[1].field_0x9 = uVar1;
  *(int *)&pUVar6[1].field_0xc = iVar2;
  *(int *)&pUVar6[1].field_0x10 = iVar3;
  *(int *)&pUVar6[1].field_0x14 = iVar4;
  *(int *)&pUVar6[1].field_0x18 = (this->DebugDrawParameters).FontSize;
  if ((this->bIsSupported == false) && (1 < (byte)LogOptimusCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  }
  return (UComputeDataProvider *)pUVar6;
}

// GetCategory @ 14e1bc350

FName __thiscall UOptimusDebugDrawDataInterface::GetCategory(UOptimusDebugDrawDataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusComputeDataInterface::CategoryName::DataInterfaces;
  return in_RDX;
}

// GetClassName @ 14e1bcb70

wchar_t * __thiscall
UOptimusDebugDrawDataInterface::GetClassName(UOptimusDebugDrawDataInterface *this)

{
  return L"DebugDraw";
}

// GetDisplayName @ 14e1c40c0

FString * __thiscall
UOptimusDebugDrawDataInterface::GetDisplayName
          (UOptimusDebugDrawDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Debug Draw");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c6d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusDebugDrawDataInterface::GetHLSL
          (UOptimusDebugDrawDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e1ce340

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDebugDrawDataInterface::GetPinDefinitions
          (UOptimusDebugDrawDataInterface *this,
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
  pFVar5 = ::FString::FString(&local_68,"ReadDebugDraw");
  pFVar6 = ::FName::FName(&local_res18,"DebugDraw");
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

// GetPrivateStaticClass @ 14e1d5530

UClass * __cdecl UOptimusDebugDrawDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDebugDrawDataInterface",
               &Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusDebugDrawDataInterface,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDebugDrawDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusDebugDrawDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1df890

TSubclassOf<UActorComponent> __thiscall
UOptimusDebugDrawDataInterface::GetRequiredComponentClass(UOptimusDebugDrawDataInterface *this)

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

// GetShaderHash @ 14e1e06d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusDebugDrawDataInterface::GetShaderHash(UOptimusDebugDrawDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e1920

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusDebugDrawDataInterface::GetShaderParameters
          (UOptimusDebugDrawDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FDebugDrawDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FDebugDrawDataInterfaceParameters",L"FDebugDrawDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceDebugDraw.cpp"
                 ,0x52,0x80,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDebugDrawDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x80;
  return;
}

// GetShaderVirtualPath @ 14e1e3c10

wchar_t * __thiscall
UOptimusDebugDrawDataInterface::GetShaderVirtualPath(UOptimusDebugDrawDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e5220

void __thiscall
UOptimusDebugDrawDataInterface::GetSupportedInputs
          (UOptimusDebugDrawDataInterface *this,
          TArray<FShaderFunctionDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderValueTypeHandle FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FOptimusDataTypeRegistry *pFVar5;
  FName *pFVar6;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar7;
  FString *pFVar8;
  FShaderFunctionDefinition *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName local_res10;
  FString local_18;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pFVar5 = FOptimusDataTypeRegistry::Get();
  pFVar6 = ::FName::FName(&local_res10,"FDebugDraw");
  pTVar7 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar5->RegisteredTypes,*pFVar6);
  pTVar11 = (TReferenceControllerBase<1> *)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pTVar11 = pTVar10;
  }
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11 = pTVar10;
  }
  else {
    pTVar10 = (TReferenceControllerBase<1> *)pTVar11->_padding_;
    pTVar11 = *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) goto LAB_14e1e52d5;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e1e52d5:
  FVar1.ValueTypePtr = *(FShaderValueType **)&pTVar10[1].SharedReferenceCount;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  pFVar9 = (FShaderFunctionDefinition *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x28)
  ;
  DefaultConstructItems<FShaderFunctionDefinition,int>(pFVar9,1);
  pFVar8 = ::FString::FString(&local_18,L"ReadDebugDraw");
  pFVar9 = FShaderFunctionDefinition::SetName(pFVar9,pFVar8);
  FShaderFunctionDefinition::AddReturnType(pFVar9,FVar1);
  return;
}

// RegisterTypes @ 14e20b470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UOptimusDebugDrawDataInterface::RegisterTypes(UOptimusDebugDrawDataInterface *this)

{
  FName FVar1;
  FOptimusDataTypeRegistry *this_00;
  FName *pFVar2;
  FShaderValueTypeHandle FVar3;
  FText *pFVar4;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FShaderValueType *local_48;
  undefined1 local_40 [8];
  initializer_list<FShaderValueType::FStructElement> local_38;
  FText local_28;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  pFVar2 = ::FName::FName(&local_res10,"FDebugDraw");
  FVar1 = *pFVar2;
  FVar3 = FShaderValueType::Get(Float,4,4);
  pFVar2 = ::FName::FName(&local_res18,"LocalToWorld");
  local_50 = *pFVar2;
  local_48 = FVar3.ValueTypePtr;
  pFVar2 = ::FName::FName(&local_res20,"FDebugDraw");
  local_38._First = (FStructElement *)&local_50;
  local_38._Last = (FStructElement *)local_40;
  FVar3 = FShaderValueType::Get
                    (*pFVar2,(initializer_list<FShaderValueType::FStructElement> *)(local_40 + 8));
  pFVar4 = FText::FromString(&local_28,L"FDebugDraw");
  pFVar2 = ::FName::FName(&local_58,"FDebugDraw");
  local_38._First = (FStructElement *)___xmm_3f8000003ecccccd3f3333333e99999a;
  local_38._Last = (FStructElement *)_UNK_152e27218;
  FOptimusDataTypeRegistry::RegisterType
            (this_00,*pFVar2,pFVar4,FVar3,FVar1,(UObject *)0x0,(FLinearColor *)(local_40 + 8),
             PinType|DataInterfaceOutput);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUOptimusDebugDrawDataInterface @ 14e2258c0

void __cdecl
UOptimusDebugDrawDataInterface::StaticRegisterNativesUOptimusDebugDrawDataInterface(void)

{
  return;
}

// ValidateForCompile @ 14e22f420

TOptional<FText> * __thiscall
UOptimusDebugDrawDataInterface::ValidateForCompile
          (UOptimusDebugDrawDataInterface *this,TOptional<FText> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (this->bIsSupported == false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"OptimusDebugDrawDataInterface",L"Unsupported Platform Setting",
                        L"Deformer Graph contains unsupported DebugDraw Data Interface and may not function properly. Either make sure DirectX 12 and Shader Model 6 are enabled in Project Settings, or remove the data interface from your graph completely"
                       );
    FText::FText((FText *)__return_storage_ptr__,pFVar3);
    if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FText> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  return __return_storage_ptr__;
}

