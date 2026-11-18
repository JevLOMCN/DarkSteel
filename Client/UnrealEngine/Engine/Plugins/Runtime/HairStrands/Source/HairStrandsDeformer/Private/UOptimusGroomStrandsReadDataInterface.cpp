// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 17

// StaticClass @ 14e258700

UClass * __cdecl UOptimusGroomStrandsReadDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsReadDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsReadDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataInterface.InnerSingleton;
}

// UOptimusGroomStrandsReadDataInterface @ 14e26b060

UOptimusGroomStrandsReadDataInterface * __thiscall
UOptimusGroomStrandsReadDataInterface::UOptimusGroomStrandsReadDataInterface
          (UOptimusGroomStrandsReadDataInterface *this,FVTableHelper *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomStrandsReadDataInterface__6B_;
  return this;
}

// UOptimusGroomStrandsReadDataInterface @ 14e26b090

UOptimusGroomStrandsReadDataInterface * __thiscall
UOptimusGroomStrandsReadDataInterface::UOptimusGroomStrandsReadDataInterface
          (UOptimusGroomStrandsReadDataInterface *this,FObjectInitializer *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomStrandsReadDataInterface__6B_;
  return this;
}

// ~UOptimusGroomStrandsReadDataInterface @ 14e26b4f0

void __thiscall
UOptimusGroomStrandsReadDataInterface::~UOptimusGroomStrandsReadDataInterface
          (UOptimusGroomStrandsReadDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusGroomStrandsReadDataInterface__6B_;
  UOptimusComputeDataInterface::~UOptimusComputeDataInterface((UOptimusComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14e26f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGroomStrandsReadDataInterface::CreateDataProvider
          (UOptimusGroomStrandsReadDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
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
  pUVar3 = UOptimusGroomStrandsReadDataProvider::StaticClass();
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
      goto LAB_14e26f7b5;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14e26f7b5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 1) = pUVar5;
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e2740f0

wchar_t * __thiscall
UOptimusGroomStrandsReadDataInterface::GetClassName(UOptimusGroomStrandsReadDataInterface *this)

{
  return L"GroomStrandsRead";
}

// GetDisplayName @ 14e276730

FString * __thiscall
UOptimusGroomStrandsReadDataInterface::GetDisplayName
          (UOptimusGroomStrandsReadDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Groom Strands");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e277e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomStrandsReadDataInterface::GetHLSL
          (UOptimusGroomStrandsReadDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e278520

void __thiscall
UOptimusGroomStrandsReadDataInterface::GetPermutations
          (UOptimusGroomStrandsReadDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ENABLE_SKINNED_TRANSFORM");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPinDefinitions @ 14e27eed0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomStrandsReadDataInterface::GetPinDefinitions
          (UOptimusGroomStrandsReadDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FOptimusCDIPinDefinition *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FString *pFVar9;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  int *piVar12;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_888;
  FString local_880;
  FName local_870;
  undefined8 local_868;
  uint local_860;
  undefined1 local_85c;
  FName local_858;
  FName local_850;
  FString local_848;
  FName local_838;
  undefined8 local_830;
  uint local_828;
  undefined1 local_824;
  FName local_820;
  FOptimusCDIPinDefinition local_818;
  FOptimusCDIPinDefinition local_7e0;
  FOptimusCDIPinDefinition local_7a8;
  FOptimusCDIPinDefinition local_770;
  FOptimusCDIPinDefinition local_738;
  FOptimusCDIPinDefinition local_700;
  FOptimusCDIPinDefinition local_6c8;
  FOptimusCDIPinDefinition local_690;
  FOptimusCDIPinDefinition local_658;
  FOptimusCDIPinDefinition local_620;
  FOptimusCDIPinDefinition local_5e8;
  FOptimusCDIPinDefinition local_5b0;
  FOptimusCDIPinDefinition local_578;
  FOptimusCDIPinDefinition local_540;
  FOptimusCDIPinDefinition local_508;
  FOptimusCDIPinDefinition local_4d0;
  FOptimusCDIPinDefinition local_498;
  FOptimusCDIPinDefinition local_460;
  FOptimusCDIPinDefinition local_428;
  FName local_3f0;
  FName local_3e8;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  FName local_370;
  FName local_368;
  FName local_360;
  FName local_358;
  FName local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
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
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar12 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      StrandsPoints = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar12 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      StrandsCurves = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves;
      _Init_thread_footer(&::_TSS1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = ::FName::FName(&local_res10,"NumStrandsPoints");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_e8,"ReadNumPoints");
  pFVar8 = ::FName::FName(&local_res18,"NumControlPoints");
  local_850 = *pFVar8;
  ::FString::FString(&local_848,pFVar9);
  local_838.ComparisonIndex.Value = 0;
  local_838.Number = 0;
  local_830 = 0;
  local_828 = 1;
  local_824 = 0;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_820 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_850) &&
     (&local_850 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_850;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_848.Data.AllocatorInstance.Data;
  local_848.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_848.Data.ArrayNum;
  pFVar8[2].Number = local_848.Data.ArrayMax;
  local_848.Data.ArrayNum = 0;
  local_848.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_838;
  local_838 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_830;
  pFVar8[4].Number = local_830._4_4_;
  local_830 = 0;
  pFVar8[5].ComparisonIndex.Value = local_828;
  *(undefined1 *)&pFVar8[5].Number = local_824;
  pFVar8[6] = local_820;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_838 != (FName)0x0) {
    FMemory::Free((void *)local_838);
  }
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_res20,"NumStrandsCurves");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_f8,"ReadNumCurves");
  pFVar8 = ::FName::FName(&local_300,"NumCurves");
  local_888 = *pFVar8;
  ::FString::FString(&local_880,pFVar9);
  local_870.ComparisonIndex.Value = 0;
  local_870.Number = 0;
  local_868 = 0;
  local_860 = 1;
  local_85c = 0;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_858 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_888) &&
     (&local_888 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_888;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_880.Data.AllocatorInstance.Data;
  local_880.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_880.Data.ArrayNum;
  pFVar8[2].Number = local_880.Data.ArrayMax;
  local_880.Data.ArrayNum = 0;
  local_880.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_870;
  local_870 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_868;
  pFVar8[4].Number = local_868._4_4_;
  local_868 = 0;
  pFVar8[5].ComparisonIndex.Value = local_860;
  *(undefined1 *)&pFVar8[5].Number = local_85c;
  pFVar8[6] = local_858;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_870 != (FName)0x0) {
    FMemory::Free((void *)local_870);
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2f8,"PointRestPosition");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_118,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_128,"ReadPointRestPosition");
  pFVar8 = ::FName::FName(&local_2f0,"Position");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_7e0,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_7e0) && (&local_7e0 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_7e0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_7e0.DataFunctionName.Data.AllocatorInstance.Data;
  local_7e0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_7e0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_7e0.DataFunctionName.Data.ArrayMax;
  local_7e0.DataFunctionName.Data.ArrayNum = 0;
  local_7e0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_7e0.DataDimensions.AllocatorInstance.Data;
  local_7e0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_7e0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_7e0.DataDimensions.ArrayMax;
  local_7e0.DataDimensions.ArrayNum = 0;
  local_7e0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_7e0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_7e0.bMutable;
  pFVar8[6] = local_7e0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_7e0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_7e0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2e8,"CurvePointOffset");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_138,"ReadNumCurves");
  FVar5 = StrandsCurves;
  pFVar11 = ::FString::FString(&local_148,"ReadCurvePointOffset");
  pFVar8 = ::FName::FName(&local_2e0,"CurveOffsetPoint");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_620,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_620) && (&local_620 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_620.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_620.DataFunctionName.Data.AllocatorInstance.Data;
  local_620.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_620.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_620.DataFunctionName.Data.ArrayMax;
  local_620.DataFunctionName.Data.ArrayNum = 0;
  local_620.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_620.DataDimensions.AllocatorInstance.Data;
  local_620.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_620.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_620.DataDimensions.ArrayMax;
  local_620.DataDimensions.ArrayNum = 0;
  local_620.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_620.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_620.bMutable;
  pFVar8[6] = local_620.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_620.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.DataDimensions.AllocatorInstance.Data);
  }
  if (local_620.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2d8,"CurveNumPoints");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_158,"ReadNumCurves");
  FVar5 = StrandsCurves;
  pFVar11 = ::FString::FString(&local_168,"ReadCurveNumPoints");
  pFVar8 = ::FName::FName(&local_2d0,"CurveNumPoint");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_658,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_658) && (&local_658 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_658.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_658.DataFunctionName.Data.AllocatorInstance.Data;
  local_658.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_658.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_658.DataFunctionName.Data.ArrayMax;
  local_658.DataFunctionName.Data.ArrayNum = 0;
  local_658.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_658.DataDimensions.AllocatorInstance.Data;
  local_658.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_658.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_658.DataDimensions.ArrayMax;
  local_658.DataDimensions.ArrayNum = 0;
  local_658.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_658.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_658.bMutable;
  pFVar8[6] = local_658.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_658.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.DataDimensions.AllocatorInstance.Data);
  }
  if (local_658.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2c8,"PointCurveIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_178,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_188,"ReadPointCurveIndex");
  pFVar8 = ::FName::FName(&local_2c0,"PointCurveIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_690,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_690) && (&local_690 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_690.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_690.DataFunctionName.Data.AllocatorInstance.Data;
  local_690.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_690.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_690.DataFunctionName.Data.ArrayMax;
  local_690.DataFunctionName.Data.ArrayNum = 0;
  local_690.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_690.DataDimensions.AllocatorInstance.Data;
  local_690.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_690.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_690.DataDimensions.ArrayMax;
  local_690.DataDimensions.ArrayNum = 0;
  local_690.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_690.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_690.bMutable;
  pFVar8[6] = local_690.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_690.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.DataDimensions.AllocatorInstance.Data);
  }
  if (local_690.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_3f0,"CurveRestTransform");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1c8,"ReadNumCurves");
  FVar5 = StrandsCurves;
  pFVar11 = ::FString::FString(&local_108,"ReadCurveRestTransform");
  pFVar8 = ::FName::FName(&local_3e8,"CurveRestTransform");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_6c8,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_6c8) && (&local_6c8 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_6c8.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_6c8.DataFunctionName.Data.AllocatorInstance.Data;
  local_6c8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_6c8.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_6c8.DataFunctionName.Data.ArrayMax;
  local_6c8.DataFunctionName.Data.ArrayNum = 0;
  local_6c8.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_6c8.DataDimensions.AllocatorInstance.Data;
  local_6c8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_6c8.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_6c8.DataDimensions.ArrayMax;
  local_6c8.DataDimensions.ArrayNum = 0;
  local_6c8.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_6c8.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_6c8.bMutable;
  pFVar8[6] = local_6c8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_6c8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_6c8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_3e0,"CurveDeformedTransform");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_d8,"ReadNumCurves");
  FVar5 = StrandsCurves;
  pFVar11 = ::FString::FString(&local_c8,"ReadCurveDeformedTransform");
  pFVar8 = ::FName::FName(&local_308,"CurveDeformedTransform");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_700,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_700) && (&local_700 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_700.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_700.DataFunctionName.Data.AllocatorInstance.Data;
  local_700.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_700.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_700.DataFunctionName.Data.ArrayMax;
  local_700.DataFunctionName.Data.ArrayNum = 0;
  local_700.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_700.DataDimensions.AllocatorInstance.Data;
  local_700.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_700.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_700.DataDimensions.ArrayMax;
  local_700.DataDimensions.ArrayNum = 0;
  local_700.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_700.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_700.bMutable;
  pFVar8[6] = local_700.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_700.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.DataDimensions.AllocatorInstance.Data);
  }
  if (local_700.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_3d8,"CurveSourceIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_b8,"ReadNumCurves");
  FVar5 = StrandsCurves;
  pFVar11 = ::FString::FString(&local_a8,"ReadCurveSourceIndex");
  pFVar8 = ::FName::FName(&local_3d0,"CurveSourceIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_7a8,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_7a8) && (&local_7a8 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_7a8.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_7a8.DataFunctionName.Data.AllocatorInstance.Data;
  local_7a8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_7a8.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_7a8.DataFunctionName.Data.ArrayMax;
  local_7a8.DataFunctionName.Data.ArrayNum = 0;
  local_7a8.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_7a8.DataDimensions.AllocatorInstance.Data;
  local_7a8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_7a8.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_7a8.DataDimensions.ArrayMax;
  local_7a8.DataDimensions.ArrayNum = 0;
  local_7a8.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_7a8.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_7a8.bMutable;
  pFVar8[6] = local_7a8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_7a8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_7a8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_3c8,"PointSourceIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_98,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_88,"ReadPointSourceIndex");
  pFVar8 = ::FName::FName(&local_3c0,"PointSourceIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_738,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_738) && (&local_738 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_738.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_738.DataFunctionName.Data.AllocatorInstance.Data;
  local_738.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_738.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_738.DataFunctionName.Data.ArrayMax;
  local_738.DataFunctionName.Data.ArrayNum = 0;
  local_738.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_738.DataDimensions.AllocatorInstance.Data;
  local_738.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_738.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_738.DataDimensions.ArrayMax;
  local_738.DataDimensions.ArrayNum = 0;
  local_738.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_738.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_738.bMutable;
  pFVar8[6] = local_738.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_738.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.DataDimensions.AllocatorInstance.Data);
  }
  if (local_738.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_3b8,"PointGuideIndices");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_78,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_68,"ReadPointGuideIndices");
  pFVar8 = ::FName::FName(&local_3b0,"GuideIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_770,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_770) && (&local_770 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_770.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_770.DataFunctionName.Data.AllocatorInstance.Data;
  local_770.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_770.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_770.DataFunctionName.Data.ArrayMax;
  local_770.DataFunctionName.Data.ArrayNum = 0;
  local_770.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_770.DataDimensions.AllocatorInstance.Data;
  local_770.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_770.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_770.DataDimensions.ArrayMax;
  local_770.DataDimensions.ArrayNum = 0;
  local_770.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_770.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_770.bMutable;
  pFVar8[6] = local_770.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_770.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.DataDimensions.AllocatorInstance.Data);
  }
  if (local_770.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_770.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_3a8,"PointGuideWeights");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_58,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_2b8,"ReadPointGuideWeights");
  pFVar8 = ::FName::FName(&local_3a0,"PointGuideWeights");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_5e8,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_5e8) && (&local_5e8 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_5e8.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_5e8.DataFunctionName.Data.AllocatorInstance.Data;
  local_5e8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_5e8.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_5e8.DataFunctionName.Data.ArrayMax;
  local_5e8.DataFunctionName.Data.ArrayNum = 0;
  local_5e8.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_5e8.DataDimensions.AllocatorInstance.Data;
  local_5e8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_5e8.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_5e8.DataDimensions.ArrayMax;
  local_5e8.DataDimensions.ArrayNum = 0;
  local_5e8.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_5e8.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_5e8.bMutable;
  pFVar8[6] = local_5e8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_5e8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_5e8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_398,"PointCurveCoordU");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_2a8,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_298,"ReadPointCoordU");
  pFVar8 = ::FName::FName(&local_390,"CoordU");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_5b0,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_5b0) && (&local_5b0 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_5b0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_5b0.DataFunctionName.Data.AllocatorInstance.Data;
  local_5b0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_5b0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_5b0.DataFunctionName.Data.ArrayMax;
  local_5b0.DataFunctionName.Data.ArrayNum = 0;
  local_5b0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_5b0.DataDimensions.AllocatorInstance.Data;
  local_5b0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_5b0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_5b0.DataDimensions.ArrayMax;
  local_5b0.DataDimensions.ArrayNum = 0;
  local_5b0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_5b0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_5b0.bMutable;
  pFVar8[6] = local_5b0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_5b0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_5b0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_388,"PointCurveLength");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_288,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_278,"ReadPointLength");
  pFVar8 = ::FName::FName(&local_380,"Length");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_578,*pFVar8,pFVar11,FVar5,pFVar9,false,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_578) && (&local_578 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_578.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_578.DataFunctionName.Data.AllocatorInstance.Data;
  local_578.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_578.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_578.DataFunctionName.Data.ArrayMax;
  local_578.DataFunctionName.Data.ArrayNum = 0;
  local_578.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_578.DataDimensions.AllocatorInstance.Data;
  local_578.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_578.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_578.DataDimensions.ArrayMax;
  local_578.DataDimensions.ArrayNum = 0;
  local_578.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_578.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_578.bMutable;
  pFVar8[6] = local_578.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_578.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.DataDimensions.AllocatorInstance.Data);
  }
  if (local_578.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_378,"PointMaterialRadius");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_268,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_258,"ReadPointRadius");
  pFVar8 = ::FName::FName(&local_370,"Radius");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_540,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_540) && (&local_540 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_540.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_540.DataFunctionName.Data.AllocatorInstance.Data;
  local_540.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_540.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_540.DataFunctionName.Data.ArrayMax;
  local_540.DataFunctionName.Data.ArrayNum = 0;
  local_540.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_540.DataDimensions.AllocatorInstance.Data;
  local_540.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_540.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_540.DataDimensions.ArrayMax;
  local_540.DataDimensions.ArrayNum = 0;
  local_540.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_540.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_540.bMutable;
  pFVar8[6] = local_540.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_540.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.DataDimensions.AllocatorInstance.Data);
  }
  if (local_540.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_368,"PointMaterialRootUV");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_248,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_238,"ReadPointRootUV");
  pFVar8 = ::FName::FName(&local_360,"RootUV");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_508,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_508) && (&local_508 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_508.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_508.DataFunctionName.Data.AllocatorInstance.Data;
  local_508.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_508.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_508.DataFunctionName.Data.ArrayMax;
  local_508.DataFunctionName.Data.ArrayNum = 0;
  local_508.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_508.DataDimensions.AllocatorInstance.Data;
  local_508.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_508.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_508.DataDimensions.ArrayMax;
  local_508.DataDimensions.ArrayNum = 0;
  local_508.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_508.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_508.bMutable;
  pFVar8[6] = local_508.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_508.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.DataDimensions.AllocatorInstance.Data);
  }
  if (local_508.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_358,"PointMaterialSeed");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_228,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_218,"ReadPointSeed");
  pFVar8 = ::FName::FName(&local_350,"Seed");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_4d0,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_4d0) && (&local_4d0 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_4d0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_4d0.DataFunctionName.Data.AllocatorInstance.Data;
  local_4d0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_4d0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_4d0.DataFunctionName.Data.ArrayMax;
  local_4d0.DataFunctionName.Data.ArrayNum = 0;
  local_4d0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_4d0.DataDimensions.AllocatorInstance.Data;
  local_4d0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_4d0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_4d0.DataDimensions.ArrayMax;
  local_4d0.DataDimensions.ArrayNum = 0;
  local_4d0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_4d0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_4d0.bMutable;
  pFVar8[6] = local_4d0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_4d0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_4d0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_348,"PointMaterialClumpId");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_208,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_1f8,"ReadPointClumpId");
  pFVar8 = ::FName::FName(&local_340,"ClumpId");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_498,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_498) && (&local_498 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_498.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_498.DataFunctionName.Data.AllocatorInstance.Data;
  local_498.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_498.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_498.DataFunctionName.Data.ArrayMax;
  local_498.DataFunctionName.Data.ArrayNum = 0;
  local_498.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_498.DataDimensions.AllocatorInstance.Data;
  local_498.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_498.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_498.DataDimensions.ArrayMax;
  local_498.DataDimensions.ArrayNum = 0;
  local_498.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_498.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_498.bMutable;
  pFVar8[6] = local_498.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_498.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.DataDimensions.AllocatorInstance.Data);
  }
  if (local_498.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_338,"PointMaterialColor");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1e8,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_1d8,"ReadPointColor");
  pFVar8 = ::FName::FName(&local_330,"Color");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_460,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_460) && (&local_460 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_460.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_460.DataFunctionName.Data.AllocatorInstance.Data;
  local_460.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_460.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_460.DataFunctionName.Data.ArrayMax;
  local_460.DataFunctionName.Data.ArrayNum = 0;
  local_460.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_460.DataDimensions.AllocatorInstance.Data;
  local_460.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_460.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_460.DataDimensions.ArrayMax;
  local_460.DataDimensions.ArrayNum = 0;
  local_460.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_460.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_460.bMutable;
  pFVar8[6] = local_460.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_460.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.DataDimensions.AllocatorInstance.Data);
  }
  if (local_460.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_328,"PointMaterialRoughness");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_48,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_1b8,"ReadPointRoughness");
  pFVar8 = ::FName::FName(&local_320,"Roughness");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_428,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_428) && (&local_428 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_428.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_428.DataFunctionName.Data.AllocatorInstance.Data;
  local_428.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_428.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_428.DataFunctionName.Data.ArrayMax;
  local_428.DataFunctionName.Data.ArrayNum = 0;
  local_428.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_428.DataDimensions.AllocatorInstance.Data;
  local_428.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_428.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_428.DataDimensions.ArrayMax;
  local_428.DataDimensions.ArrayNum = 0;
  local_428.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_428.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_428.bMutable;
  pFVar8[6] = local_428.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_428.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.DataDimensions.AllocatorInstance.Data);
  }
  if (local_428.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_318,"PointMaterialAO");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1a8,"ReadNumPoints");
  FVar5 = StrandsPoints;
  pFVar11 = ::FString::FString(&local_198,"ReadPointAO");
  pFVar8 = ::FName::FName(&local_310,"AO");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_818,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_818) && (&local_818 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x38);
  *pFVar8 = local_818.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_818.DataFunctionName.Data.AllocatorInstance.Data;
  local_818.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_818.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_818.DataFunctionName.Data.ArrayMax;
  local_818.DataFunctionName.Data.ArrayNum = 0;
  local_818.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_818.DataDimensions.AllocatorInstance.Data;
  local_818.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_818.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_818.DataDimensions.ArrayMax;
  local_818.DataDimensions.ArrayNum = 0;
  local_818.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_818.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_818.bMutable;
  pFVar8[6] = local_818.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_818.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.DataDimensions.AllocatorInstance.Data);
  }
  if (local_818.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e283250

UClass * __cdecl UOptimusGroomStrandsReadDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomStrandsReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomStrandsReadDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomStrandsReadDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomStrandsReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomStrandsReadDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e284610

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomStrandsReadDataInterface::GetRequiredComponentClass
          (UOptimusGroomStrandsReadDataInterface *this)

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

// GetShaderHash @ 14e2848c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomStrandsReadDataInterface::GetShaderHash
          (UOptimusGroomStrandsReadDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e2855a0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusGroomStrandsReadDataInterface::GetShaderParameters
          (UOptimusGroomStrandsReadDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FOptimusGroomStrandsReadParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FOptimusGroomStrandsReadParameters",L"FOptimusGroomStrandsReadParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomStrandsRead.cpp"
                 ,0xb0,0x250,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomStrandsReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x250;
  return;
}

// GetShaderVirtualPath @ 14e2859b0

wchar_t * __thiscall
UOptimusGroomStrandsReadDataInterface::GetShaderVirtualPath
          (UOptimusGroomStrandsReadDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e287380

void __thiscall
UOptimusGroomStrandsReadDataInterface::GetSupportedInputs
          (UOptimusGroomStrandsReadDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointRestPosition");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointRadius");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointCoordU");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointLength");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointRootUV");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,2,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointSeed");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointClumpId");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointColor");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointRoughness");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointAO");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadCurvePointOffset");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadCurveNumPoints");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointGuideIndices");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointGuideWeights");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,2,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointCurveIndex");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadCurveRestTransform");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,4);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadCurveDeformedTransform");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,4);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadCurveSourceIndex");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointSourceIndex");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusGroomStrandsReadDataInterface @ 14e289830

void __cdecl
UOptimusGroomStrandsReadDataInterface::StaticRegisterNativesUOptimusGroomStrandsReadDataInterface
          (void)

{
  return;
}

