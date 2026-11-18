// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 18

// StaticClass @ 14e258e40

UClass * __cdecl UOptimusGroomStrandsWriteDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsWriteDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsWriteDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsWriteDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsWriteDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataInterface.InnerSingleton;
}

// UOptimusGroomStrandsWriteDataInterface @ 14e26b120

UOptimusGroomStrandsWriteDataInterface * __thiscall
UOptimusGroomStrandsWriteDataInterface::UOptimusGroomStrandsWriteDataInterface
          (UOptimusGroomStrandsWriteDataInterface *this,FVTableHelper *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomStrandsWriteDataInterface__6B_;
  return this;
}

// UOptimusGroomStrandsWriteDataInterface @ 14e26b150

UOptimusGroomStrandsWriteDataInterface * __thiscall
UOptimusGroomStrandsWriteDataInterface::UOptimusGroomStrandsWriteDataInterface
          (UOptimusGroomStrandsWriteDataInterface *this,FObjectInitializer *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomStrandsWriteDataInterface__6B_;
  return this;
}

// ~UOptimusGroomStrandsWriteDataInterface @ 14e26b530

void __thiscall
UOptimusGroomStrandsWriteDataInterface::~UOptimusGroomStrandsWriteDataInterface
          (UOptimusGroomStrandsWriteDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusGroomStrandsWriteDataInterface__6B_;
  UOptimusComputeDataInterface::~UOptimusComputeDataInterface((UOptimusComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14e26f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGroomStrandsWriteDataInterface::CreateDataProvider
          (UOptimusGroomStrandsWriteDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
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
  pUVar3 = UOptimusGroomStrandsWriteDataProvider::StaticClass();
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
      goto LAB_14e26f8ad;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14e26f8ad:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 1) = pUVar5;
  *(ulong64 *)&pUVar2[1].field_0x8 = param_3;
  return (UComputeDataProvider *)pUVar2;
}

// GetCategory @ 14e274060

FName __thiscall
UOptimusGroomStrandsWriteDataInterface::GetCategory(UOptimusGroomStrandsWriteDataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusComputeDataInterface::CategoryName::OutputDataInterfaces;
  return in_RDX;
}

// GetClassName @ 14e274100

wchar_t * __thiscall
UOptimusGroomStrandsWriteDataInterface::GetClassName(UOptimusGroomStrandsWriteDataInterface *this)

{
  return L"GroomStrandsWrite";
}

// GetDisplayName @ 14e276760

FString * __thiscall
UOptimusGroomStrandsWriteDataInterface::GetDisplayName
          (UOptimusGroomStrandsWriteDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Write Groom Strands");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e277fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomStrandsWriteDataInterface::GetHLSL
          (UOptimusGroomStrandsWriteDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e281540

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomStrandsWriteDataInterface::GetPinDefinitions
          (UOptimusGroomStrandsWriteDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  FOptimusCDIPinDefinition *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar10;
  int *piVar11;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FOptimusCDIPinDefinition local_3c8;
  FOptimusCDIPinDefinition local_390;
  FOptimusCDIPinDefinition local_358;
  FOptimusCDIPinDefinition local_320;
  FOptimusCDIPinDefinition local_2e8;
  FOptimusCDIPinDefinition local_2b0;
  FOptimusCDIPinDefinition local_278;
  FOptimusCDIPinDefinition local_240;
  FOptimusCDIPinDefinition local_208;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar11 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      StrandsPoints = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar11 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      StrandsCurves = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves;
      _Init_thread_footer(&::_TSS1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = ::FName::FName(&local_res10,"PointDeformedPosition");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_78,"ReadNumPoints");
  FVar4 = StrandsPoints;
  pFVar9 = ::FString::FString(&local_88,"WritePointDeformedPosition");
  pFVar7 = ::FName::FName(&local_res18,"Position");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_3c8,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_3c8) && (&local_3c8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_3c8.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_3c8.DataFunctionName.Data.AllocatorInstance.Data;
  local_3c8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_3c8.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_3c8.DataFunctionName.Data.ArrayMax;
  local_3c8.DataFunctionName.Data.ArrayNum = 0;
  local_3c8.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_3c8.DataDimensions.AllocatorInstance.Data;
  local_3c8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_3c8.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_3c8.DataDimensions.ArrayMax;
  local_3c8.DataDimensions.ArrayNum = 0;
  local_3c8.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_3c8.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_3c8.bMutable;
  pFVar7[6] = local_3c8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_3c8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_3c8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_res20,"PointPositionRadius");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_a8,"ReadNumPoints");
  FVar4 = StrandsPoints;
  pFVar9 = ::FString::FString(&local_b8,"WritePointPositionRadius");
  pFVar7 = ::FName::FName(&local_168,"PositionAndRadius");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_278,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_278) && (&local_278 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_278.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_278.DataFunctionName.Data.AllocatorInstance.Data;
  local_278.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_278.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_278.DataFunctionName.Data.ArrayMax;
  local_278.DataFunctionName.Data.ArrayNum = 0;
  local_278.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_278.DataDimensions.AllocatorInstance.Data;
  local_278.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_278.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_278.DataDimensions.ArrayMax;
  local_278.DataDimensions.ArrayNum = 0;
  local_278.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_278.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_278.bMutable;
  pFVar7[6] = local_278.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_278.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.DataDimensions.AllocatorInstance.Data);
  }
  if (local_278.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_160,"PointMaterialRadius");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_c8,"ReadNumPoints");
  FVar4 = StrandsPoints;
  pFVar9 = ::FString::FString(&local_e8,"WritePointRadius");
  pFVar7 = ::FName::FName(&local_1d0,"Radius");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_2e8,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_2e8) && (&local_2e8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_2e8.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_2e8.DataFunctionName.Data.AllocatorInstance.Data;
  local_2e8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_2e8.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_2e8.DataFunctionName.Data.ArrayMax;
  local_2e8.DataFunctionName.Data.ArrayNum = 0;
  local_2e8.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_2e8.DataDimensions.AllocatorInstance.Data;
  local_2e8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_2e8.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_2e8.DataDimensions.ArrayMax;
  local_2e8.DataDimensions.ArrayNum = 0;
  local_2e8.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_2e8.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_2e8.bMutable;
  pFVar7[6] = local_2e8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_2e8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_2e8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_1c8,"CurveMaterialRootUV");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_98,"ReadNumCurves");
  FVar4 = StrandsCurves;
  pFVar9 = ::FString::FString(&local_68,"WriteCurveRootUV");
  pFVar7 = ::FName::FName(&local_1c0,"RootUV");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_390,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_390) && (&local_390 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_390.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_390.DataFunctionName.Data.AllocatorInstance.Data;
  local_390.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_390.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_390.DataFunctionName.Data.ArrayMax;
  local_390.DataFunctionName.Data.ArrayNum = 0;
  local_390.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_390.DataDimensions.AllocatorInstance.Data;
  local_390.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_390.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_390.DataDimensions.ArrayMax;
  local_390.DataDimensions.ArrayNum = 0;
  local_390.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_390.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_390.bMutable;
  pFVar7[6] = local_390.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_390.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.DataDimensions.AllocatorInstance.Data);
  }
  if (local_390.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_170,"CurveMaterialSeed");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_58,"ReadNumCurves");
  FVar4 = StrandsCurves;
  pFVar9 = ::FString::FString(&local_158,"WriteCurveSeed");
  pFVar7 = ::FName::FName(&local_1b8,"Seed");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_320,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_320) && (&local_320 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_320.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_320.DataFunctionName.Data.AllocatorInstance.Data;
  local_320.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_320.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_320.DataFunctionName.Data.ArrayMax;
  local_320.DataFunctionName.Data.ArrayNum = 0;
  local_320.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_320.DataDimensions.AllocatorInstance.Data;
  local_320.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_320.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_320.DataDimensions.ArrayMax;
  local_320.DataDimensions.ArrayNum = 0;
  local_320.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_320.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_320.bMutable;
  pFVar7[6] = local_320.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_320.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.DataDimensions.AllocatorInstance.Data);
  }
  if (local_320.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_1b0,"CurveMaterialClumpId");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_148,"ReadNumCurves");
  FVar4 = StrandsCurves;
  pFVar9 = ::FString::FString(&local_138,"WriteCurveClumpId");
  pFVar7 = ::FName::FName(&local_1a8,"ClumpId");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_358,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_358) && (&local_358 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_358.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_358.DataFunctionName.Data.AllocatorInstance.Data;
  local_358.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_358.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_358.DataFunctionName.Data.ArrayMax;
  local_358.DataFunctionName.Data.ArrayNum = 0;
  local_358.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_358.DataDimensions.AllocatorInstance.Data;
  local_358.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_358.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_358.DataDimensions.ArrayMax;
  local_358.DataDimensions.ArrayNum = 0;
  local_358.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_358.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_358.bMutable;
  pFVar7[6] = local_358.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_358.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.DataDimensions.AllocatorInstance.Data);
  }
  if (local_358.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_1a0,"PointMaterialColor");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_128,"ReadNumPoints");
  FVar4 = StrandsPoints;
  pFVar9 = ::FString::FString(&local_118,"WritePointColor");
  pFVar7 = ::FName::FName(&local_198,"Color");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_240,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_240) && (&local_240 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_240.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_240.DataFunctionName.Data.AllocatorInstance.Data;
  local_240.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_240.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_240.DataFunctionName.Data.ArrayMax;
  local_240.DataFunctionName.Data.ArrayNum = 0;
  local_240.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_240.DataDimensions.AllocatorInstance.Data;
  local_240.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_240.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_240.DataDimensions.ArrayMax;
  local_240.DataDimensions.ArrayNum = 0;
  local_240.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_240.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_240.bMutable;
  pFVar7[6] = local_240.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_240.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.DataDimensions.AllocatorInstance.Data);
  }
  if (local_240.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_190,"PointMaterialRoughness");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_108,"ReadNumPoints");
  FVar4 = StrandsPoints;
  pFVar9 = ::FString::FString(&local_f8,"WritePointRoughness");
  pFVar7 = ::FName::FName(&local_188,"Roughness");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_208,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_208) && (&local_208 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_208.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_208.DataFunctionName.Data.AllocatorInstance.Data;
  local_208.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_208.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_208.DataFunctionName.Data.ArrayMax;
  local_208.DataFunctionName.Data.ArrayNum = 0;
  local_208.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_208.DataDimensions.AllocatorInstance.Data;
  local_208.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_208.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_208.DataDimensions.ArrayMax;
  local_208.DataDimensions.ArrayNum = 0;
  local_208.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_208.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_208.bMutable;
  pFVar7[6] = local_208.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_208.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.DataDimensions.AllocatorInstance.Data);
  }
  if (local_208.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FName::FName(&local_180,"PointMaterialAO");
  FVar1 = *pFVar7;
  pFVar8 = ::FString::FString(&local_48,"ReadNumPoints");
  FVar4 = StrandsPoints;
  pFVar9 = ::FString::FString(&local_d8,"WritePointAO");
  pFVar7 = ::FName::FName(&local_178,"AO");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_2b0,*pFVar7,pFVar9,FVar4,pFVar8,true,FVar1);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_2b0) && (&local_2b0 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == __return_storage_ptr__->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar7 = local_2b0.PinName;
  pFVar7[1].ComparisonIndex = 0;
  pFVar7[1].Number = 0;
  pFVar7[1] = (FName)local_2b0.DataFunctionName.Data.AllocatorInstance.Data;
  local_2b0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[2].ComparisonIndex.Value = local_2b0.DataFunctionName.Data.ArrayNum;
  pFVar7[2].Number = local_2b0.DataFunctionName.Data.ArrayMax;
  local_2b0.DataFunctionName.Data.ArrayNum = 0;
  local_2b0.DataFunctionName.Data.ArrayMax = 0;
  pFVar7[3].ComparisonIndex = 0;
  pFVar7[3].Number = 0;
  pFVar7[3] = (FName)local_2b0.DataDimensions.AllocatorInstance.Data;
  local_2b0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[4].ComparisonIndex.Value = local_2b0.DataDimensions.ArrayNum;
  pFVar7[4].Number = local_2b0.DataDimensions.ArrayMax;
  local_2b0.DataDimensions.ArrayNum = 0;
  local_2b0.DataDimensions.ArrayMax = 0;
  pFVar7[5].ComparisonIndex.Value = local_2b0.DomainMultiplier;
  *(bool *)&pFVar7[5].Number = local_2b0.bMutable;
  pFVar7[6] = local_2b0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_2b0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_2b0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2833d0

UClass * __cdecl UOptimusGroomStrandsWriteDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsWriteDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsWriteDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsWriteDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsWriteDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsWriteDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e284650

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomStrandsWriteDataInterface::GetRequiredComponentClass
          (UOptimusGroomStrandsWriteDataInterface *this)

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

// GetShaderHash @ 14e284900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomStrandsWriteDataInterface::GetShaderHash
          (UOptimusGroomStrandsWriteDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e285770

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusGroomStrandsWriteDataInterface::GetShaderParameters
          (UOptimusGroomStrandsWriteDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FOptimusGroomStrandsWriteParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FOptimusGroomStrandsWriteParameters",L"FOptimusGroomStrandsWriteParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomStrandsWrite.cpp"
                 ,0x73,0x180,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsWriteParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x180;
  return;
}

// GetShaderVirtualPath @ 14e2859c0

wchar_t * __thiscall
UOptimusGroomStrandsWriteDataInterface::GetShaderVirtualPath
          (UOptimusGroomStrandsWriteDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e287da0

void __thiscall
UOptimusGroomStrandsWriteDataInterface::GetSupportedInputs
          (UOptimusGroomStrandsWriteDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumPoints");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumCurves");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  return;
}

// GetSupportedOutputs @ 14e287f30

void __thiscall
UOptimusGroomStrandsWriteDataInterface::GetSupportedOutputs
          (UOptimusGroomStrandsWriteDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"WritePointDeformedPosition");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,3,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WritePointRadius");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WritePointPositionRadius");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,4,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WriteCurveRootUV");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,2,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WriteCurveSeed");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WriteCurveClumpId");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WritePointColor");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,3,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WritePointRoughness");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"WritePointAO");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Float,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusGroomStrandsWriteDataInterface @ 14e289850

void __cdecl
UOptimusGroomStrandsWriteDataInterface::StaticRegisterNativesUOptimusGroomStrandsWriteDataInterface
          (void)

{
  return;
}

