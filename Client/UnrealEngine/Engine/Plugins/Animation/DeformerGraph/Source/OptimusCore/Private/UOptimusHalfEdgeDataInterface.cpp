// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e118800

UClass * __cdecl UOptimusHalfEdgeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusHalfEdgeDataInterface",
               &Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusHalfEdgeDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusHalfEdgeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusHalfEdgeDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.InnerSingleton;
}

// UOptimusHalfEdgeDataInterface @ 14e15a1b0

UOptimusHalfEdgeDataInterface * __thiscall
UOptimusHalfEdgeDataInterface::UOptimusHalfEdgeDataInterface
          (UOptimusHalfEdgeDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusHalfEdgeDataInterface__6B_;
  return this;
}

// UOptimusHalfEdgeDataInterface @ 14e15a1e0

UOptimusHalfEdgeDataInterface * __thiscall
UOptimusHalfEdgeDataInterface::UOptimusHalfEdgeDataInterface
          (UOptimusHalfEdgeDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusHalfEdgeDataInterface__6B_;
  return this;
}

// ~UOptimusHalfEdgeDataInterface @ 14e162c70

void __thiscall
UOptimusHalfEdgeDataInterface::~UOptimusHalfEdgeDataInterface(UOptimusHalfEdgeDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181b30

bool __thiscall
UOptimusHalfEdgeDataInterface::CanSupportUnifiedDispatch(UOptimusHalfEdgeDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19d020

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
UOptimusHalfEdgeDataInterface::CreateDataProvider
          (UOptimusHalfEdgeDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  USkinnedMeshComponent *this_00;
  FSkeletalMeshRenderData *pFVar8;
  UComputeDataProvider *pUVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStackY_f8 [32];
  UObject *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UOptimusHalfEdgeDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar6;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar7 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar7);
    if (bVar4) {
      local_b8[0] = *(UObject **)param_1.field0_0x0;
      goto LAB_14e19d0c4;
    }
  }
  local_b8[0] = (UObject *)0x0;
LAB_14e19d0c4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar6[1].field_0x8,(FObjectPtr)local_b8);
  bVar4 = TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *)&pUVar6[1].field_0x8,
                     (void *)0x0);
  if (!bVar4) {
    this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar6[1].field_0x8);
    pFVar8 = USkinnedMeshComponent::GetSkeletalMeshRenderData(this_00);
    if (pFVar8 != (FSkeletalMeshRenderData *)0x0) {
      iVar1 = *(int *)&pUVar6[1].field_0x18;
      uVar2 = (pFVar8->LODRenderData).Array.ArrayNum;
      if (iVar1 < (int)uVar2) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,uVar2 - iVar1,(ForAnyElementType *)&pUVar6[1].field_0x10,
                           (int *)&pUVar6[1].field_0x18,(int *)&pUVar6[1].field_0x1c);
        DefaultConstructItems<FHalfEdgeBuffers,int>
                  ((void *)(*(longlong *)&pUVar6[1].field_0x10 + (longlong)iVar5 * 0x18),
                   uVar2 - iVar1);
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((int)uVar2 < iVar1) {
          uVar11 = iVar1 - uVar2;
          if ((int)(uVar11 | uVar2) < 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UComputeDataProvider *)(*pcVar3)();
              return pUVar9;
            }
          }
          if (uVar11 != 0) {
            TArray<FHalfEdgeBuffers,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      ((TArray<FHalfEdgeBuffers,TSizedDefaultAllocator<32>_> *)&pUVar6[1].field_0x10
                       ,uVar2,uVar11);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,(ForAnyElementType *)&pUVar6[1].field_0x10,
                       *(int *)&pUVar6[1].field_0x18,(int *)&pUVar6[1].field_0x1c);
          }
        }
      }
    }
  }
  return (UComputeDataProvider *)pUVar6;
}

// GetClassName @ 14e1bcba0

wchar_t * __thiscall
UOptimusHalfEdgeDataInterface::GetClassName(UOptimusHalfEdgeDataInterface *this)

{
  return L"HalfEdge";
}

// GetDisplayName @ 14e1c4120

FString * __thiscall
UOptimusHalfEdgeDataInterface::GetDisplayName
          (UOptimusHalfEdgeDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"HalfEdge");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c7230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusHalfEdgeDataInterface::GetHLSL
          (UOptimusHalfEdgeDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e1ce9f0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusHalfEdgeDataInterface::GetPinDefinitions
          (UOptimusHalfEdgeDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FOptimusCDIPinDefinition *pFVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar10;
  FName local_res20;
  FOptimusCDIPinDefinition local_f8;
  FOptimusCDIPinDefinition local_c0;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  FVar4 = UOptimusSkinnedMeshComponentSource::Domains::Triangle;
  FVar3 = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = ::FString::FString(&local_80,"ReadNumVertices");
  pFVar8 = ::FString::FString(&local_70,"ReadEdge");
  pFVar9 = ::FName::FName(&local_res20,"EdgesPerVertex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_f8,*pFVar9,pFVar8,FVar3,pFVar7,false,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_f8) && (&local_f8 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar9 = local_f8.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_f8.DataFunctionName.Data.AllocatorInstance.Data;
  local_f8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_f8.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_f8.DataFunctionName.Data.ArrayMax;
  local_f8.DataFunctionName.Data.ArrayNum = 0;
  local_f8.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_f8.DataDimensions.AllocatorInstance.Data;
  local_f8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_f8.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_f8.DataDimensions.ArrayMax;
  local_f8.DataDimensions.ArrayNum = 0;
  local_f8.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_f8.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_f8.bMutable;
  pFVar9[6] = local_f8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_f8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_f8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_60,"ReadNumTriangles");
  pFVar8 = ::FString::FString(&local_50,"ReadTwinEdge");
  pFVar9 = ::FName::FName(&local_88,"TwinEdges");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_c0,*pFVar9,pFVar8,FVar4,3,pFVar7,false,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_c0) && (&local_c0 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
  pFVar9 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar9 = local_c0.PinName;
  pFVar9[1].ComparisonIndex = 0;
  pFVar9[1].Number = 0;
  pFVar9[1] = (FName)local_c0.DataFunctionName.Data.AllocatorInstance.Data;
  local_c0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[2].ComparisonIndex.Value = local_c0.DataFunctionName.Data.ArrayNum;
  pFVar9[2].Number = local_c0.DataFunctionName.Data.ArrayMax;
  local_c0.DataFunctionName.Data.ArrayNum = 0;
  local_c0.DataFunctionName.Data.ArrayMax = 0;
  pFVar9[3].ComparisonIndex = 0;
  pFVar9[3].Number = 0;
  pFVar9[3] = (FName)local_c0.DataDimensions.AllocatorInstance.Data;
  local_c0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9[4].ComparisonIndex.Value = local_c0.DataDimensions.ArrayNum;
  pFVar9[4].Number = local_c0.DataDimensions.ArrayMax;
  local_c0.DataDimensions.ArrayNum = 0;
  local_c0.DataDimensions.ArrayMax = 0;
  pFVar9[5].ComparisonIndex.Value = local_c0.DomainMultiplier;
  *(bool *)&pFVar9[5].Number = local_c0.bMutable;
  pFVar9[6] = local_c0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_c0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_c0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d61f0

UClass * __cdecl UOptimusHalfEdgeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusHalfEdgeDataInterface",
               &Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusHalfEdgeDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusHalfEdgeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusHalfEdgeDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1df910

TSubclassOf<UActorComponent> __thiscall
UOptimusHalfEdgeDataInterface::GetRequiredComponentClass(UOptimusHalfEdgeDataInterface *this)

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

// GetShaderHash @ 14e1e0750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusHalfEdgeDataInterface::GetShaderHash(UOptimusHalfEdgeDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e1ec0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusHalfEdgeDataInterface::GetShaderParameters
          (UOptimusHalfEdgeDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FHalfEdgeDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FHalfEdgeDataInterfaceParameters",L"FHalfEdgeDataInterfaceParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceHalfEdge.cpp"
                 ,0x71,0x30,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FHalfEdgeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x30;
  return;
}

// GetShaderVirtualPath @ 14e1e3c30

wchar_t * __thiscall
UOptimusHalfEdgeDataInterface::GetShaderVirtualPath(UOptimusHalfEdgeDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e5690

void __thiscall
UOptimusHalfEdgeDataInterface::GetSupportedInputs
          (UOptimusHalfEdgeDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadEdge");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadTwinEdge");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Int,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusHalfEdgeDataInterface @ 14e225a60

void __cdecl UOptimusHalfEdgeDataInterface::StaticRegisterNativesUOptimusHalfEdgeDataInterface(void)

{
  return;
}

