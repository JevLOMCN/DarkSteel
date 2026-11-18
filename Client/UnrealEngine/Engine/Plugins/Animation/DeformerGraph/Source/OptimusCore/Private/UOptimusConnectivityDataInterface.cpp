// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e103eb0

UClass * __cdecl UOptimusConnectivityDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusConnectivityDataInterface",
               &Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusConnectivityDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusConnectivityDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusConnectivityDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.InnerSingleton;
}

// UOptimusConnectivityDataInterface @ 14e158a10

UOptimusConnectivityDataInterface * __thiscall
UOptimusConnectivityDataInterface::UOptimusConnectivityDataInterface
          (UOptimusConnectivityDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusConnectivityDataInterface__6B_;
  return this;
}

// UOptimusConnectivityDataInterface @ 14e158a40

UOptimusConnectivityDataInterface * __thiscall
UOptimusConnectivityDataInterface::UOptimusConnectivityDataInterface
          (UOptimusConnectivityDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusConnectivityDataInterface__6B_;
  return this;
}

// ~UOptimusConnectivityDataInterface @ 14e162450

void __thiscall
UOptimusConnectivityDataInterface::~UOptimusConnectivityDataInterface
          (UOptimusConnectivityDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181ae0

bool __thiscall
UOptimusConnectivityDataInterface::CanSupportUnifiedDispatch
          (UOptimusConnectivityDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusConnectivityDataInterface::CreateDataProvider
          (UOptimusConnectivityDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  USkinnedMeshComponent *this_00;
  FSkeletalMeshRenderData *pFVar10;
  UComputeDataProvider *pUVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStackY_108 [32];
  UObject *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = UOptimusConnectivityDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 == 0) {
LAB_14e19c752:
    local_c8[0] = (UObject *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar9);
    if (!bVar5) goto LAB_14e19c752;
    local_c8[0] = *(UObject **)param_1.field0_0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar8 + 1),(FObjectPtr)local_c8);
  bVar5 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)(pUVar8 + 1),
                     (void *)0x0);
  if (bVar5) {
    return (UComputeDataProvider *)pUVar8;
  }
  this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 1));
  pFVar10 = USkinnedMeshComponent::GetSkeletalMeshRenderData(this_00);
  if (pFVar10 == (FSkeletalMeshRenderData *)0x0) {
    return (UComputeDataProvider *)pUVar8;
  }
  bVar2 = pFVar10->NumInlinedLODs;
  iVar13 = *(int *)&pUVar8[1].field_0x10;
  puVar1 = &pUVar8[1].field_0x10;
  if (iVar13 < (int)(uint)bVar2) {
    iVar13 = (uint)bVar2 - iVar13;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar13,(ForAnyElementType *)&pUVar8[1].field_0x8,(int *)puVar1,
                       (int *)&pUVar8[1].field_0x14);
    memset((void *)((longlong)iVar6 * 0x10 + *(longlong *)&pUVar8[1].field_0x8),0,
           (longlong)iVar13 << 4);
  }
  else if ((int)(uint)bVar2 < iVar13) {
    iVar13 = iVar13 - (uint)bVar2;
    if (iVar13 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UComputeDataProvider *)(*pcVar4)();
        return pUVar11;
      }
    }
    else if (iVar13 == 0) goto LAB_14e19c887;
    TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl((TArray<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *)&pUVar8[1].field_0x8,(uint)bVar2,iVar13);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)&pUVar8[1].field_0x8,*(int *)puVar1,
               (int *)&pUVar8[1].field_0x14);
  }
LAB_14e19c887:
  uVar14 = 0;
  if (pFVar10->NumInlinedLODs != '\0') {
    lVar15 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar14 < (pFVar10->LODRenderData).Array.ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UComputeDataProvider *)(*pcVar4)();
        return pUVar11;
      }
      pFVar3 = *(FSkeletalMeshLODRenderData **)
                ((pFVar10->LODRenderData).Array.AllocatorInstance.Data + lVar15);
      uVar7 = 0;
      if ((int)uVar14 < *(int *)puVar1) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar11 = (UComputeDataProvider *)(*pcVar4)();
        return pUVar11;
      }
      ::`anonymous_namespace'::BuildAdjacencyBuffer
                (pFVar3,0xc,
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                 ((longlong)(int)uVar14 * 0x10 + *(longlong *)&pUVar8[1].field_0x8));
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < (int)(uint)pFVar10->NumInlinedLODs);
  }
  return (UComputeDataProvider *)pUVar8;
}

// GetClassName @ 14e1bcb40

wchar_t * __thiscall
UOptimusConnectivityDataInterface::GetClassName(UOptimusConnectivityDataInterface *this)

{
  return L"Connectivity";
}

// GetDisplayName @ 14e1c4090

FString * __thiscall
UOptimusConnectivityDataInterface::GetDisplayName
          (UOptimusConnectivityDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Connectivity");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c6900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusConnectivityDataInterface::GetHLSL
          (UOptimusConnectivityDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e1cdfa0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusConnectivityDataInterface::GetPinDefinitions
          (UOptimusConnectivityDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FOptimusCDIPinDefinition *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar9;
  FName local_res20;
  FOptimusCDIPinDefinition local_128;
  FOptimusCDIPinDefinition local_f0;
  initializer_list<FOptimusCDIPinDefinition::FDimensionInfo> local_b8;
  FDimensionInfo local_a8;
  FName local_90;
  FString local_88;
  FDimensionInfo local_78;
  FString local_60;
  FString local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = ::FString::FString(&local_78.CountFunctionName,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar7 = ::FString::FString(&local_60,"ReadNumConnectedVertices");
  pFVar8 = ::FName::FName(&local_res20,"NumConnectedVertices");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_128,*pFVar8,pFVar7,FVar3,pFVar6,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_128) && (&local_128 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar9;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar8 = local_128.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_128.DataFunctionName.Data.AllocatorInstance.Data;
  local_128.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_128.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_128.DataFunctionName.Data.ArrayMax;
  local_128.DataFunctionName.Data.ArrayNum = 0;
  local_128.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_128.DataDimensions.AllocatorInstance.Data;
  local_128.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_128.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_128.DataDimensions.ArrayMax;
  local_128.DataDimensions.ArrayNum = 0;
  local_128.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_128.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_128.bMutable;
  pFVar8[6] = local_128.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_128.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.DataDimensions.AllocatorInstance.Data);
  }
  if (local_128.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.DataFunctionName.Data.AllocatorInstance.Data);
  }
  local_a8.ContextName = Optimus::DomainName::Vertex;
  ::FString::FString(&local_a8.CountFunctionName,"ReadNumVertices");
  local_90 = Optimus::DomainName::Index0;
  ::FString::FString(&local_88,"ReadNumConnectedVertices");
  pFVar6 = ::FString::FString(&local_50,"ReadConnectedVertex");
  pFVar8 = ::FName::FName(&local_78.ContextName,"ConnectedVertex");
  local_b8._First = &local_a8;
  local_b8._Last = &local_78;
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_f0,*pFVar8,pFVar6,&local_b8,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_f0) && (&local_f0 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar9;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar8 = local_f0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_f0.DataFunctionName.Data.AllocatorInstance.Data;
  local_f0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_f0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_f0.DataFunctionName.Data.ArrayMax;
  local_f0.DataFunctionName.Data.ArrayNum = 0;
  local_f0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_f0.DataDimensions.AllocatorInstance.Data;
  local_f0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_f0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_f0.DataDimensions.ArrayMax;
  local_f0.DataDimensions.ArrayNum = 0;
  local_f0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_f0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_f0.bMutable;
  pFVar8[6] = local_f0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_f0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_f0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_a8.CountFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.CountFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d4ff0

UClass * __cdecl UOptimusConnectivityDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusConnectivityDataInterface",
               &Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusConnectivityDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusConnectivityDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusConnectivityDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusConnectivityDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1df850

TSubclassOf<UActorComponent> __thiscall
UOptimusConnectivityDataInterface::GetRequiredComponentClass
          (UOptimusConnectivityDataInterface *this)

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

// GetShaderHash @ 14e1e0610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusConnectivityDataInterface::GetShaderHash
          (UOptimusConnectivityDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e13e0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusConnectivityDataInterface::GetShaderParameters
          (UOptimusConnectivityDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FConnectivityDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FConnectivityDataInterfaceParameters",L"FConnectivityDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceConnectivity.cpp"
                 ,0xa9,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FConnectivityDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetShaderVirtualPath @ 14e1e3be0

wchar_t * __thiscall
UOptimusConnectivityDataInterface::GetShaderVirtualPath(UOptimusConnectivityDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e4da0

void __thiscall
UOptimusConnectivityDataInterface::GetSupportedInputs
          (UOptimusConnectivityDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumConnectedVertices");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadConnectedVertex");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  pFVar3 = FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusConnectivityDataInterface @ 14e225850

void __cdecl
UOptimusConnectivityDataInterface::StaticRegisterNativesUOptimusConnectivityDataInterface(void)

{
  return;
}

