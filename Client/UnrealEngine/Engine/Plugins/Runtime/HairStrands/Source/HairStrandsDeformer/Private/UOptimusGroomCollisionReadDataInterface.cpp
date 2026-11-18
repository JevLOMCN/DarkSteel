// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 17

// StaticClass @ 14e258cc0

UClass * __cdecl UOptimusGroomCollisionReadDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomCollisionReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomCollisionReadDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomCollisionReadDataInterface>
               ,InternalVTableHelperCtorCaller<UOptimusGroomCollisionReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataInterface.InnerSingleton;
}

// UOptimusGroomCollisionReadDataInterface @ 14e26aae0

UOptimusGroomCollisionReadDataInterface * __thiscall
UOptimusGroomCollisionReadDataInterface::UOptimusGroomCollisionReadDataInterface
          (UOptimusGroomCollisionReadDataInterface *this,FVTableHelper *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomCollisionReadDataInterface__6B_;
  return this;
}

// UOptimusGroomCollisionReadDataInterface @ 14e26ab10

UOptimusGroomCollisionReadDataInterface * __thiscall
UOptimusGroomCollisionReadDataInterface::UOptimusGroomCollisionReadDataInterface
          (UOptimusGroomCollisionReadDataInterface *this,FObjectInitializer *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusGroomCollisionReadDataInterface__6B_;
  return this;
}

// ~UOptimusGroomCollisionReadDataInterface @ 14e26b350

void __thiscall
UOptimusGroomCollisionReadDataInterface::~UOptimusGroomCollisionReadDataInterface
          (UOptimusGroomCollisionReadDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusGroomCollisionReadDataInterface__6B_;
  UOptimusComputeDataInterface::~UOptimusComputeDataInterface((UOptimusComputeDataInterface *)this);
  return;
}

// CreateDataProvider @ 14e26f120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGroomCollisionReadDataInterface::CreateDataProvider
          (UOptimusGroomCollisionReadDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2
          ,ulong64 param_3)

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
  pUVar3 = UOptimusGroomCollisionReadDataProvider::StaticClass();
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
    pUVar3 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar3);
    if (bVar1) {
      pUVar5 = *(UObject **)param_1.field0_0x0;
      goto LAB_14e26f1c5;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14e26f1c5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 1) = pUVar5;
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e274090

wchar_t * __thiscall
UOptimusGroomCollisionReadDataInterface::GetClassName(UOptimusGroomCollisionReadDataInterface *this)

{
  return L"GroomCollisionRead";
}

// GetDisplayName @ 14e2765d0

FString * __thiscall
UOptimusGroomCollisionReadDataInterface::GetDisplayName
          (UOptimusGroomCollisionReadDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Groom Collision");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e277610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomCollisionReadDataInterface::GetHLSL
          (UOptimusGroomCollisionReadDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e2784a0

void __thiscall
UOptimusGroomCollisionReadDataInterface::GetPermutations
          (UOptimusGroomCollisionReadDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  return;
}

// GetPinDefinitions @ 14e27a430

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomCollisionReadDataInterface::GetPinDefinitions
          (UOptimusGroomCollisionReadDataInterface *this,
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
  FName local_1a8;
  FString local_1a0;
  FName local_190;
  undefined8 local_188;
  uint local_180;
  undefined1 local_17c;
  FName local_178;
  FName local_170;
  FString local_168;
  FName local_158;
  undefined8 local_150;
  uint local_148;
  undefined1 local_144;
  FName local_140;
  FOptimusCDIPinDefinition local_138;
  FOptimusCDIPinDefinition local_100;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar12 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      CollisionVertices =
           UOptimusGroomCollisionComponentSource::FCollisionExecutionDomains::Vertices;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar12 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      CollisionTriangles =
           UOptimusGroomCollisionComponentSource::FCollisionExecutionDomains::Triangles;
      _Init_thread_footer(&::_TSS1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = ::FName::FName(&local_res10,"NumCollisionVertices");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_a0,"ReadNumVertices");
  pFVar8 = ::FName::FName(&local_res18,"NumCollisionVertices");
  local_1a8 = *pFVar8;
  ::FString::FString(&local_1a0,pFVar9);
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  local_188 = 0;
  local_180 = 1;
  local_17c = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_178 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_1a8) &&
     (&local_1a8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_1a8;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_1a0.Data.AllocatorInstance.Data;
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_1a0.Data.ArrayNum;
  pFVar8[2].Number = local_1a0.Data.ArrayMax;
  local_1a0.Data.ArrayNum = 0;
  local_1a0.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_190;
  local_190 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_188;
  pFVar8[4].Number = local_188._4_4_;
  local_188 = 0;
  pFVar8[5].ComparisonIndex.Value = local_180;
  *(undefined1 *)&pFVar8[5].Number = local_17c;
  pFVar8[6] = local_178;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_190 != (FName)0x0) {
    FMemory::Free((void *)local_190);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_res20,"VertexGlobalPosition");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_90,"ReadNumVertices");
  FVar5 = CollisionVertices;
  pFVar11 = ::FString::FString(&local_80,"ReadVertexGlobalPosition");
  pFVar8 = ::FName::FName(&local_c8,"VertexGlobalPosition");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_138,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_138) && (&local_138 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_138.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_138.DataFunctionName.Data.AllocatorInstance.Data;
  local_138.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_138.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_138.DataFunctionName.Data.ArrayMax;
  local_138.DataFunctionName.Data.ArrayNum = 0;
  local_138.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_138.DataDimensions.AllocatorInstance.Data;
  local_138.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_138.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_138.DataDimensions.ArrayMax;
  local_138.DataDimensions.ArrayNum = 0;
  local_138.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_138.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_138.bMutable;
  pFVar8[6] = local_138.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_138.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.DataDimensions.AllocatorInstance.Data);
  }
  if (local_138.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_c0,"NumCollisionTriangles");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_70,"ReadNumTriangles");
  pFVar8 = ::FName::FName(&local_b8,"NumCollisionTriangles");
  local_170 = *pFVar8;
  ::FString::FString(&local_168,pFVar9);
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_150 = 0;
  local_148 = 1;
  local_144 = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_140 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_170) &&
     (&local_170 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_170;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_168.Data.AllocatorInstance.Data;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_168.Data.ArrayNum;
  pFVar8[2].Number = local_168.Data.ArrayMax;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_158;
  local_158 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_150;
  pFVar8[4].Number = local_150._4_4_;
  local_150 = 0;
  pFVar8[5].ComparisonIndex.Value = local_148;
  *(undefined1 *)&pFVar8[5].Number = local_144;
  pFVar8[6] = local_140;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_158 != (FName)0x0) {
    FMemory::Free((void *)local_158);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_b0,"TriangleVertexIndices");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_60,"ReadNumTriangles");
  FVar5 = CollisionTriangles;
  pFVar11 = ::FString::FString(&local_50,"ReadTriangleVertexIndices");
  pFVar8 = ::FName::FName(&local_a8,"TriangleVertexIndices");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_100,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_100) && (&local_100 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_100.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_100.DataFunctionName.Data.AllocatorInstance.Data;
  local_100.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_100.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_100.DataFunctionName.Data.ArrayMax;
  local_100.DataFunctionName.Data.ArrayNum = 0;
  local_100.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_100.DataDimensions.AllocatorInstance.Data;
  local_100.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_100.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_100.DataDimensions.ArrayMax;
  local_100.DataDimensions.ArrayNum = 0;
  local_100.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_100.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_100.bMutable;
  pFVar8[6] = local_100.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_100.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.DataDimensions.AllocatorInstance.Data);
  }
  if (local_100.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e282890

UClass * __cdecl UOptimusGroomCollisionReadDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomCollisionReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomCollisionReadDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomCollisionReadDataInterface>
               ,InternalVTableHelperCtorCaller<UOptimusGroomCollisionReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomCollisionReadDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e284490

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomCollisionReadDataInterface::GetRequiredComponentClass
          (UOptimusGroomCollisionReadDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetShaderHash @ 14e284740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomCollisionReadDataInterface::GetShaderHash
          (UOptimusGroomCollisionReadDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e284b00

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusGroomCollisionReadDataInterface::GetShaderParameters
          (UOptimusGroomCollisionReadDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FOptimusGroomCollisionReadParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FOptimusGroomCollisionReadParameters",L"FOptimusGroomCollisionReadParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomCollisionRead.cpp"
                 ,0x46,0x30,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomCollisionReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x30;
  return;
}

// GetShaderVirtualPath @ 14e285950

wchar_t * __thiscall
UOptimusGroomCollisionReadDataInterface::GetShaderVirtualPath
          (UOptimusGroomCollisionReadDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e2860e0

void __thiscall
UOptimusGroomCollisionReadDataInterface::GetSupportedInputs
          (UOptimusGroomCollisionReadDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadVertexGlobalPosition");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadTriangleVertexIndices");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Int,3,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusGroomCollisionReadDataInterface @ 14e289760

void __cdecl
UOptimusGroomCollisionReadDataInterface::
StaticRegisterNativesUOptimusGroomCollisionReadDataInterface(void)

{
  return;
}

