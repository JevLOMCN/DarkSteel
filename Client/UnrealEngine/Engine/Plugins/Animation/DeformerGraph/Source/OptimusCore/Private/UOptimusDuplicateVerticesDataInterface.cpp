// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e10c1d0

UClass * __cdecl UOptimusDuplicateVerticesDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDuplicateVerticesDataInterface",
               &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusDuplicateVerticesDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDuplicateVerticesDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusDuplicateVerticesDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.InnerSingleton;
}

// UOptimusDuplicateVerticesDataInterface @ 14e159df0

UOptimusDuplicateVerticesDataInterface * __thiscall
UOptimusDuplicateVerticesDataInterface::UOptimusDuplicateVerticesDataInterface
          (UOptimusDuplicateVerticesDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDuplicateVerticesDataInterface__6B_;
  return this;
}

// UOptimusDuplicateVerticesDataInterface @ 14e159e20

UOptimusDuplicateVerticesDataInterface * __thiscall
UOptimusDuplicateVerticesDataInterface::UOptimusDuplicateVerticesDataInterface
          (UOptimusDuplicateVerticesDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDuplicateVerticesDataInterface__6B_;
  return this;
}

// ~UOptimusDuplicateVerticesDataInterface @ 14e162b30

void __thiscall
UOptimusDuplicateVerticesDataInterface::~UOptimusDuplicateVerticesDataInterface
          (UOptimusDuplicateVerticesDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14e19ce60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusDuplicateVerticesDataInterface::CreateDataProvider
          (UOptimusDuplicateVerticesDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UOptimusDuplicateVerticesDataProvider::StaticClass();
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
    pUVar3 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar3);
    if (bVar1) {
      local_a8[0] = *(UObject **)param_1.field0_0x0;
      goto LAB_14e19cf03;
    }
  }
  local_a8[0] = (UObject *)0x0;
LAB_14e19cf03:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar2 + 1),(FObjectPtr)local_a8);
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e1bcb80

wchar_t * __thiscall
UOptimusDuplicateVerticesDataInterface::GetClassName(UOptimusDuplicateVerticesDataInterface *this)

{
  return L"SkinnedMesh";
}

// GetDisplayName @ 14e1c40f0

FString * __thiscall
UOptimusDuplicateVerticesDataInterface::GetDisplayName
          (UOptimusDuplicateVerticesDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Duplicate Vertices");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c6e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusDuplicateVerticesDataInterface::GetHLSL
          (UOptimusDuplicateVerticesDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e1cc4f0

void __thiscall
UOptimusDuplicateVerticesDataInterface::GetPermutations
          (UOptimusDuplicateVerticesDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ENABLE_DUPLICATED_VERTICES");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPinDefinitions @ 14e1ce500

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusDuplicateVerticesDataInterface::GetPinDefinitions
          (UOptimusDuplicateVerticesDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FOptimusCDIPinDefinition *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FName *pFVar9;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  FName local_148;
  FString local_140;
  FName local_130;
  undefined8 local_128;
  uint local_120;
  undefined1 local_11c;
  FName local_118;
  FOptimusCDIPinDefinition local_110;
  FOptimusCDIPinDefinition local_d8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  FVar5 = UOptimusSkinnedMeshComponentSource::Domains::DuplicateVertex;
  FVar4 = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = ::FString::FString(&local_88,"ReadNumVertices");
  pFVar9 = ::FName::FName(&local_a0,"NumVertices");
  local_148 = *pFVar9;
  ::FString::FString(&local_140,pFVar8);
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  local_128 = 0;
  local_120 = 1;
  local_11c = 1;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar9 <= &local_148) &&
     (&local_148 < pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == __return_storage_ptr__->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar9 = local_148;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_140.Data.AllocatorInstance.Data;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_140.Data.ArrayNum;
  pFVar9[2].Number = local_140.Data.ArrayMax;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = local_130;
  local_130 = (FName)0x0;
  pFVar9[4].ComparisonIndex.Value = (uint)local_128;
  pFVar9[4].Number = local_128._4_4_;
  local_128 = 0;
  pFVar9[5].ComparisonIndex.Value = local_120;
  *(undefined1 *)&pFVar9[5].Number = local_11c;
  pFVar9[6] = local_118;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_130 != (FName)0x0) {
    FMemory::Free((void *)local_130);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FString::FString(&local_78,"ReadDuplicateVerticesStartAndLength");
  pFVar11 = ::FString::FString(&local_68,"ReadDuplicateVerticesStartAndLength");
  pFVar9 = ::FName::FName(&local_98,"DuplicateVerticesStartAndLength");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_110,*pFVar9,pFVar11,FVar4,pFVar8,true,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_110) && (&local_110 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == __return_storage_ptr__->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar9 = local_110.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_110.DataFunctionName.Data.AllocatorInstance.Data;
  local_110.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_110.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_110.DataFunctionName.Data.ArrayMax;
  local_110.DataFunctionName.Data.ArrayNum = 0;
  local_110.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_110.DataDimensions.AllocatorInstance.Data;
  local_110.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_110.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_110.DataDimensions.ArrayMax;
  local_110.DataDimensions.ArrayNum = 0;
  local_110.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_110.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_110.bMutable;
  pFVar9[6] = local_110.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_110.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.DataDimensions.AllocatorInstance.Data);
  }
  if (local_110.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FString::FString(&local_58,"ReadDuplicateVertex");
  pFVar11 = ::FString::FString(&local_48,"ReadDuplicateVertex");
  pFVar9 = ::FName::FName(&local_90,"DuplicateVertex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_d8,*pFVar9,pFVar11,FVar5,pFVar8,true,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_d8) && (&local_d8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == __return_storage_ptr__->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar9 = local_d8.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_d8.DataFunctionName.Data.AllocatorInstance.Data;
  local_d8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_d8.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_d8.DataFunctionName.Data.ArrayMax;
  local_d8.DataFunctionName.Data.ArrayNum = 0;
  local_d8.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_d8.DataDimensions.AllocatorInstance.Data;
  local_d8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_d8.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_d8.DataDimensions.ArrayMax;
  local_d8.DataDimensions.ArrayNum = 0;
  local_d8.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_d8.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_d8.bMutable;
  pFVar9[6] = local_d8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_d8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_d8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d5cb0

UClass * __cdecl UOptimusDuplicateVerticesDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDuplicateVerticesDataInterface",
               &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusDuplicateVerticesDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusDuplicateVerticesDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusDuplicateVerticesDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1df8d0

TSubclassOf<UActorComponent> __thiscall
UOptimusDuplicateVerticesDataInterface::GetRequiredComponentClass
          (UOptimusDuplicateVerticesDataInterface *this)

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

// GetShaderHash @ 14e1e0710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusDuplicateVerticesDataInterface::GetShaderHash
          (UOptimusDuplicateVerticesDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e1ae0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusDuplicateVerticesDataInterface::GetShaderParameters
          (UOptimusDuplicateVerticesDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FDuplicateVerticesDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FDuplicateVerticesDataInterfaceParameters",
                 L"FDuplicateVerticesDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceDuplicateVertices.cpp"
                 ,0x40,0x20,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDuplicateVerticesDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x20;
  return;
}

// GetShaderVirtualPath @ 14e1e3c20

wchar_t * __thiscall
UOptimusDuplicateVerticesDataInterface::GetShaderVirtualPath
          (UOptimusDuplicateVerticesDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e5360

void __thiscall
UOptimusDuplicateVerticesDataInterface::GetSupportedInputs
          (UOptimusDuplicateVerticesDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumVertices");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumDuplicateVertices");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadDuplicateVerticesStartAndLength");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Int,2,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadDuplicateVertex");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusDuplicateVerticesDataInterface @ 14e2259c0

void __cdecl
UOptimusDuplicateVerticesDataInterface::StaticRegisterNativesUOptimusDuplicateVerticesDataInterface
          (void)

{
  return;
}

