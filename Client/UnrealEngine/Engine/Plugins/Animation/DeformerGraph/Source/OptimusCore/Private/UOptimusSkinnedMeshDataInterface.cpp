// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e1053c0

UClass * __cdecl UOptimusSkinnedMeshDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.InnerSingleton;
}

// UOptimusSkinnedMeshDataInterface @ 14e15d120

UOptimusSkinnedMeshDataInterface * __thiscall
UOptimusSkinnedMeshDataInterface::UOptimusSkinnedMeshDataInterface
          (UOptimusSkinnedMeshDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkinnedMeshDataInterface__6B_;
  return this;
}

// UOptimusSkinnedMeshDataInterface @ 14e15d150

UOptimusSkinnedMeshDataInterface * __thiscall
UOptimusSkinnedMeshDataInterface::UOptimusSkinnedMeshDataInterface
          (UOptimusSkinnedMeshDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkinnedMeshDataInterface__6B_;
  return this;
}

// ~UOptimusSkinnedMeshDataInterface @ 14e164060

void __thiscall
UOptimusSkinnedMeshDataInterface::~UOptimusSkinnedMeshDataInterface
          (UOptimusSkinnedMeshDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181ba0

bool __thiscall
UOptimusSkinnedMeshDataInterface::CanSupportUnifiedDispatch(UOptimusSkinnedMeshDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19d820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusSkinnedMeshDataInterface::CreateDataProvider
          (UOptimusSkinnedMeshDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
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
  pUVar3 = UOptimusSkinnedMeshDataProvider::StaticClass();
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
      goto LAB_14e19d8c3;
    }
  }
  local_a8[0] = (UObject *)0x0;
LAB_14e19d8c3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar2 + 1),(FObjectPtr)local_a8);
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e1bcc20

wchar_t * __thiscall
UOptimusSkinnedMeshDataInterface::GetClassName(UOptimusSkinnedMeshDataInterface *this)

{
  return L"SkinnedMesh";
}

// GetDisplayName @ 14e1c4cb0

FString * __thiscall
UOptimusSkinnedMeshDataInterface::GetDisplayName
          (UOptimusSkinnedMeshDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Skinned Mesh");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c7f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshDataInterface::GetHLSL
          (UOptimusSkinnedMeshDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e1d0580

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinnedMeshDataInterface::GetPinDefinitions
          (UOptimusSkinnedMeshDataInterface *this,
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
  FName local_3d8;
  FString local_3d0;
  FName local_3c0;
  undefined8 local_3b8;
  uint local_3b0;
  undefined1 local_3ac;
  FName local_3a8;
  FName local_3a0;
  FString local_398;
  FName local_388;
  undefined8 local_380;
  uint local_378;
  undefined1 local_374;
  FName local_370;
  FName local_368;
  FString local_360;
  FName local_350;
  undefined8 local_348;
  uint local_340;
  undefined1 local_33c;
  FName local_338;
  FOptimusCDIPinDefinition local_330;
  FOptimusCDIPinDefinition local_2f8;
  FOptimusCDIPinDefinition local_2c0;
  FOptimusCDIPinDefinition local_288;
  FOptimusCDIPinDefinition local_250;
  FOptimusCDIPinDefinition local_218;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  initializer_list<FOptimusCDIPinDefinition::FDimensionInfo> local_1a8;
  FDimensionInfo local_198;
  FName local_180;
  FString local_178;
  undefined1 local_168 [24];
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  FVar5 = UOptimusSkinnedMeshComponentSource::Domains::Triangle;
  FVar4 = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = ::FString::FString(&local_60,"ReadNumVertices");
  pFVar9 = ::FName::FName((FName *)local_168,"NumVertices");
  local_368 = *pFVar9;
  ::FString::FString(&local_360,pFVar8);
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  local_338.ComparisonIndex.Value = 0;
  local_338.Number = 0;
  local_348 = 0;
  local_340 = 1;
  local_33c = 0;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar9 <= &local_368) &&
     (&local_368 < pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar9 = local_368;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_360.Data.AllocatorInstance.Data;
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_360.Data.ArrayNum;
  pFVar9[2].Number = local_360.Data.ArrayMax;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = local_350;
  local_350 = (FName)0x0;
  pFVar9[4].ComparisonIndex.Value = (uint)local_348;
  pFVar9[4].Number = local_348._4_4_;
  local_348 = 0;
  pFVar9[5].ComparisonIndex.Value = local_340;
  *(undefined1 *)&pFVar9[5].Number = local_33c;
  pFVar9[6] = local_338;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_350 != (FName)0x0) {
    FMemory::Free((void *)local_350);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FString::FString(&local_70,"ReadNumVertices");
  pFVar11 = ::FString::FString(&local_80,"ReadPosition");
  pFVar9 = ::FName::FName((FName *)(local_168 + 8),"Position");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_218,*pFVar9,pFVar11,FVar4,pFVar8,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_218) && (&local_218 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar9 = local_218.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_218.DataFunctionName.Data.AllocatorInstance.Data;
  local_218.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_218.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_218.DataFunctionName.Data.ArrayMax;
  local_218.DataFunctionName.Data.ArrayNum = 0;
  local_218.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_218.DataDimensions.AllocatorInstance.Data;
  local_218.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_218.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_218.DataDimensions.ArrayMax;
  local_218.DataDimensions.ArrayNum = 0;
  local_218.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_218.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_218.bMutable;
  pFVar9[6] = local_218.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_218.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.DataDimensions.AllocatorInstance.Data);
  }
  if (local_218.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FString::FString(&local_90,"ReadNumVertices");
  pFVar11 = ::FString::FString(&local_50,"ReadTangentX");
  pFVar9 = ::FName::FName((FName *)(local_168 + 0x10),"TangentX");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_250,*pFVar9,pFVar11,FVar4,pFVar8,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_250) && (&local_250 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar9 = local_250.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_250.DataFunctionName.Data.AllocatorInstance.Data;
  local_250.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_250.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_250.DataFunctionName.Data.ArrayMax;
  local_250.DataFunctionName.Data.ArrayNum = 0;
  local_250.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_250.DataDimensions.AllocatorInstance.Data;
  local_250.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_250.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_250.DataDimensions.ArrayMax;
  local_250.DataDimensions.ArrayNum = 0;
  local_250.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_250.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_250.bMutable;
  pFVar9[6] = local_250.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_250.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.DataDimensions.AllocatorInstance.Data);
  }
  if (local_250.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.DataFunctionName.Data.AllocatorInstance.Data);
  }
  local_1b8 = 0;
  pFVar8 = ::FString::FString(&local_120,"ReadNumVertices");
  pFVar11 = ::FString::FString(&local_110,"ReadTangentZ");
  pFVar9 = ::FName::FName(&local_150,"TangentZ");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_288,*pFVar9,pFVar11,FVar4,pFVar8,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_288) && (&local_288 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar9 = local_288.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_288.DataFunctionName.Data.AllocatorInstance.Data;
  local_288.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_288.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_288.DataFunctionName.Data.ArrayMax;
  local_288.DataFunctionName.Data.ArrayNum = 0;
  local_288.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_288.DataDimensions.AllocatorInstance.Data;
  local_288.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_288.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_288.DataDimensions.ArrayMax;
  local_288.DataDimensions.ArrayNum = 0;
  local_288.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_288.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_288.bMutable;
  pFVar9[6] = local_288.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_288.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.DataDimensions.AllocatorInstance.Data);
  }
  if (local_288.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.DataFunctionName.Data.AllocatorInstance.Data);
  }
  local_1e0 = 0;
  pFVar8 = ::FString::FString(&local_100,"ReadNumUVChannels");
  pFVar9 = ::FName::FName(&local_148,"NumUVChannels");
  local_3a0 = *pFVar9;
  ::FString::FString(&local_398,pFVar8);
  local_388.ComparisonIndex.Value = 0;
  local_388.Number = 0;
  local_370.ComparisonIndex.Value = 0;
  local_370.Number = 0;
  local_380 = 0;
  local_378 = 1;
  local_374 = 0;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar9 <= &local_3a0) &&
     (&local_3a0 < pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar9 = local_3a0;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_398.Data.AllocatorInstance.Data;
  local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_398.Data.ArrayNum;
  pFVar9[2].Number = local_398.Data.ArrayMax;
  local_398.Data.ArrayNum = 0;
  local_398.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = local_388;
  local_388 = (FName)0x0;
  pFVar9[4].ComparisonIndex.Value = (uint)local_380;
  pFVar9[4].Number = local_380._4_4_;
  local_380 = 0;
  pFVar9[5].ComparisonIndex.Value = local_378;
  *(undefined1 *)&pFVar9[5].Number = local_374;
  pFVar9[6] = local_370;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_388 != (FName)0x0) {
    FMemory::Free((void *)local_388);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  local_1d8 = 0;
  local_198.ContextName = FVar4;
  ::FString::FString(&local_198.CountFunctionName,"ReadNumVertices");
  local_180 = Optimus::DomainName::UVChannel;
  ::FString::FString(&local_178,"ReadNumUVChannels");
  pFVar8 = ::FString::FString(&local_f0,"ReadUV");
  pFVar9 = ::FName::FName(&local_140,"UV");
  local_1a8._First = &local_198;
  local_1a8._Last = (FDimensionInfo *)local_168;
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_2c0,*pFVar9,pFVar8,&local_1a8,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_2c0) && (&local_2c0 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar9 = local_2c0.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_2c0.DataFunctionName.Data.AllocatorInstance.Data;
  local_2c0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_2c0.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_2c0.DataFunctionName.Data.ArrayMax;
  local_2c0.DataFunctionName.Data.ArrayNum = 0;
  local_2c0.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_2c0.DataDimensions.AllocatorInstance.Data;
  local_2c0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_2c0.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_2c0.DataDimensions.ArrayMax;
  local_2c0.DataDimensions.ArrayNum = 0;
  local_2c0.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_2c0.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_2c0.bMutable;
  pFVar9[6] = local_2c0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_2c0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_2c0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_198.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.CountFunctionName.Data.AllocatorInstance.Data);
  }
  local_1d0 = 0;
  pFVar8 = ::FString::FString(&local_e0,"ReadColor");
  pFVar11 = ::FString::FString(&local_d0,"ReadColor");
  pFVar9 = ::FName::FName(&local_128,"Color");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_2f8,*pFVar9,pFVar11,FVar4,pFVar8,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_2f8) && (&local_2f8 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar9 = local_2f8.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_2f8.DataFunctionName.Data.AllocatorInstance.Data;
  local_2f8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_2f8.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_2f8.DataFunctionName.Data.ArrayMax;
  local_2f8.DataFunctionName.Data.ArrayNum = 0;
  local_2f8.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_2f8.DataDimensions.AllocatorInstance.Data;
  local_2f8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_2f8.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_2f8.DataDimensions.ArrayMax;
  local_2f8.DataDimensions.ArrayNum = 0;
  local_2f8.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_2f8.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_2f8.bMutable;
  pFVar9[6] = local_2f8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_2f8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_2f8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  local_1c8 = 0;
  pFVar8 = ::FString::FString(&local_c0,"ReadNumTriangles");
  pFVar9 = ::FName::FName(&local_130,"NumTriangles");
  local_3d8 = *pFVar9;
  ::FString::FString(&local_3d0,pFVar8);
  local_3c0.ComparisonIndex.Value = 0;
  local_3c0.Number = 0;
  local_3a8.ComparisonIndex.Value = 0;
  local_3a8.Number = 0;
  local_3b8 = 0;
  local_3b0 = 1;
  local_3ac = 0;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar9 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar9 <= &local_3d8) &&
     (&local_3d8 < pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar9 = local_3d8;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_3d0.Data.AllocatorInstance.Data;
  local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_3d0.Data.ArrayNum;
  pFVar9[2].Number = local_3d0.Data.ArrayMax;
  local_3d0.Data.ArrayNum = 0;
  local_3d0.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = local_3c0;
  local_3c0 = (FName)0x0;
  pFVar9[4].ComparisonIndex.Value = (uint)local_3b8;
  pFVar9[4].Number = local_3b8._4_4_;
  local_3b8 = 0;
  pFVar9[5].ComparisonIndex.Value = local_3b0;
  *(undefined1 *)&pFVar9[5].Number = local_3ac;
  pFVar9[6] = local_3a8;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_3c0 != (FName)0x0) {
    FMemory::Free((void *)local_3c0);
  }
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  local_1c0 = 0;
  pFVar8 = ::FString::FString(&local_b0,"ReadNumTriangles");
  pFVar11 = ::FString::FString(&local_a0,"ReadIndexBuffer");
  pFVar9 = ::FName::FName(&local_138,"IndexBuffer");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_330,*pFVar9,pFVar11,FVar5,3,pFVar8,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_330) && (&local_330 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar9 = local_330.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_330.DataFunctionName.Data.AllocatorInstance.Data;
  local_330.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_330.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_330.DataFunctionName.Data.ArrayMax;
  local_330.DataFunctionName.Data.ArrayNum = 0;
  local_330.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_330.DataDimensions.AllocatorInstance.Data;
  local_330.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_330.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_330.DataDimensions.ArrayMax;
  local_330.DataDimensions.ArrayNum = 0;
  local_330.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_330.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_330.bMutable;
  pFVar9[6] = local_330.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_330.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.DataDimensions.AllocatorInstance.Data);
  }
  if (local_330.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d9240

UClass * __cdecl UOptimusSkinnedMeshDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1dfad0

TSubclassOf<UActorComponent> __thiscall
UOptimusSkinnedMeshDataInterface::GetRequiredComponentClass(UOptimusSkinnedMeshDataInterface *this)

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

// GetShaderHash @ 14e1e0910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshDataInterface::GetShaderHash
          (UOptimusSkinnedMeshDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e2cc0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshDataInterface::GetShaderParameters
          (UOptimusSkinnedMeshDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FSkinnedMeshDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FSkinnedMeshDataInterfaceParameters",L"FSkinnedMeshDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinnedMesh.cpp"
                 ,0x5f,0x40,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x40;
  return;
}

// GetShaderVirtualPath @ 14e1e3ca0

wchar_t * __thiscall
UOptimusSkinnedMeshDataInterface::GetShaderVirtualPath(UOptimusSkinnedMeshDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e61b0

void __thiscall
UOptimusSkinnedMeshDataInterface::GetSupportedInputs
          (UOptimusSkinnedMeshDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumTriangles");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumUVChannels");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadIndexBuffer");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPosition");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadTangentX");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,4,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadTangentZ");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,4,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadUV");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,2,0);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadColor");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,4,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusSkinnedMeshDataInterface @ 14e225ed0

void __cdecl
UOptimusSkinnedMeshDataInterface::StaticRegisterNativesUOptimusSkinnedMeshDataInterface(void)

{
  return;
}

