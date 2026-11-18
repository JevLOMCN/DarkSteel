// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 17

// StaticClass @ 14e119be0

UClass * __cdecl UOptimusSceneDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSceneDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSceneDataInterface",
               &Z_Registration_Info_UClass_UOptimusSceneDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusSceneDataInterface,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusSceneDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSceneDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSceneDataInterface.InnerSingleton;
}

// UOptimusSceneDataInterface @ 14e15cae0

UOptimusSceneDataInterface * __thiscall
UOptimusSceneDataInterface::UOptimusSceneDataInterface
          (UOptimusSceneDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusSceneDataInterface__6B_;
  return this;
}

// UOptimusSceneDataInterface @ 14e15cb10

UOptimusSceneDataInterface * __thiscall
UOptimusSceneDataInterface::UOptimusSceneDataInterface
          (UOptimusSceneDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusSceneDataInterface__6B_;
  return this;
}

// ~UOptimusSceneDataInterface @ 14e163e90

void __thiscall
UOptimusSceneDataInterface::~UOptimusSceneDataInterface(UOptimusSceneDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181b80

bool __thiscall
UOptimusSceneDataInterface::CanSupportUnifiedDispatch(UOptimusSceneDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusSceneDataInterface::CreateDataProvider
          (UOptimusSceneDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
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
  pUVar3 = UOptimusSceneDataProvider::StaticClass();
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
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar3);
    if (bVar1) {
      local_a8[0] = *(UObject **)param_1.field0_0x0;
      goto LAB_14e19d553;
    }
  }
  local_a8[0] = (UObject *)0x0;
LAB_14e19d553:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pUVar2 + 1),(FObjectPtr)local_a8);
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e1bcbf0

wchar_t * __thiscall UOptimusSceneDataInterface::GetClassName(UOptimusSceneDataInterface *this)

{
  return L"Scene";
}

// GetDisplayName @ 14e1c4ba0

FString * __thiscall
UOptimusSceneDataInterface::GetDisplayName
          (UOptimusSceneDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Scene Data");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c7b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSceneDataInterface::GetHLSL
          (UOptimusSceneDataInterface *this,FString *param_1,FString *param_2)

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

// GetPinDefinitions @ 14e1cf7c0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSceneDataInterface::GetPinDefinitions
          (UOptimusSceneDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FName *pFVar6;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar7;
  FName local_118;
  FString local_110;
  FName local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined1 local_ec;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  FName local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined1 local_b4;
  FName local_b0;
  FName local_a8;
  FString local_a0;
  FName local_90;
  undefined8 local_88;
  uint local_80;
  undefined1 local_7c;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FString::FString(&local_58,"ReadGameTime");
  pFVar6 = ::FName::FName(&local_70,"GameTime");
  local_118 = *pFVar6;
  ::FString::FString(&local_110,pFVar5);
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_f8 = 0;
  local_f0 = 1;
  local_ec = 1;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar6 <= &local_118) &&
     (&local_118 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar6 = local_118;
  pFVar6[1].ComparisonIndex = 0;
  pFVar6[1].Number = 0;
  pFVar6[1] = (FName)local_110.Data.AllocatorInstance.Data;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6[2].ComparisonIndex.Value = local_110.Data.ArrayNum;
  pFVar6[2].Number = local_110.Data.ArrayMax;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  pFVar6[3].ComparisonIndex = 0;
  pFVar6[3].Number = 0;
  pFVar6[3] = local_100;
  local_100 = (FName)0x0;
  pFVar6[4].ComparisonIndex.Value = (uint)local_f8;
  pFVar6[4].Number = local_f8._4_4_;
  local_f8 = 0;
  pFVar6[5].ComparisonIndex.Value = local_f0;
  *(undefined1 *)&pFVar6[5].Number = local_ec;
  pFVar6[6] = local_e8;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_100 != (FName)0x0) {
    FMemory::Free((void *)local_100);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_48,"ReadGameTimeDelta");
  pFVar6 = ::FName::FName(&local_68,"GameTimeDelta");
  local_e0 = *pFVar6;
  ::FString::FString(&local_d8,pFVar5);
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  local_c0 = 0;
  local_b8 = 1;
  local_b4 = 1;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar6 <= &local_e0) && (&local_e0 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 7)
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
  *pFVar6 = local_e0;
  pFVar6[1].ComparisonIndex = 0;
  pFVar6[1].Number = 0;
  pFVar6[1] = (FName)local_d8.Data.AllocatorInstance.Data;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6[2].ComparisonIndex.Value = local_d8.Data.ArrayNum;
  pFVar6[2].Number = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  pFVar6[3].ComparisonIndex = 0;
  pFVar6[3].Number = 0;
  pFVar6[3] = local_c8;
  local_c8 = (FName)0x0;
  pFVar6[4].ComparisonIndex.Value = (uint)local_c0;
  pFVar6[4].Number = local_c0._4_4_;
  local_c0 = 0;
  pFVar6[5].ComparisonIndex.Value = local_b8;
  *(undefined1 *)&pFVar6[5].Number = local_b4;
  pFVar6[6] = local_b0;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_c8 != (FName)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_38,"ReadFrameNumber");
  pFVar6 = ::FName::FName(&local_60,"FrameNumber");
  local_a8 = *pFVar6;
  ::FString::FString(&local_a0,pFVar5);
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  local_88 = 0;
  local_80 = 1;
  local_7c = 1;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar6 <= &local_a8) && (&local_a8 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 7)
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
  *pFVar6 = local_a8;
  pFVar6[1].ComparisonIndex = 0;
  pFVar6[1].Number = 0;
  pFVar6[1] = (FName)local_a0.Data.AllocatorInstance.Data;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6[2].ComparisonIndex.Value = local_a0.Data.ArrayNum;
  pFVar6[2].Number = local_a0.Data.ArrayMax;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  pFVar6[3].ComparisonIndex = 0;
  pFVar6[3].Number = 0;
  pFVar6[3] = local_90;
  local_90 = (FName)0x0;
  pFVar6[4].ComparisonIndex.Value = (uint)local_88;
  pFVar6[4].Number = local_88._4_4_;
  local_88 = 0;
  pFVar6[5].ComparisonIndex.Value = local_80;
  *(undefined1 *)&pFVar6[5].Number = local_7c;
  pFVar6[6] = local_78;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_90 != (FName)0x0) {
    FMemory::Free((void *)local_90);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d8b80

UClass * __cdecl UOptimusSceneDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSceneDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSceneDataInterface",
               &Z_Registration_Info_UClass_UOptimusSceneDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusSceneDataInterface,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UOptimusSceneDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSceneDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSceneDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1dfa10

TSubclassOf<UActorComponent> __thiscall
UOptimusSceneDataInterface::GetRequiredComponentClass(UOptimusSceneDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetShaderHash @ 14e1e0850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSceneDataInterface::GetShaderHash(UOptimusSceneDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e2780

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusSceneDataInterface::GetShaderParameters
          (UOptimusSceneDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FSceneDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FSceneDataInterfaceParameters",L"FSceneDataInterfaceParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceScene.cpp"
                 ,0x34,0x10,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSceneDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x10;
  return;
}

// GetShaderVirtualPath @ 14e1e3c70

wchar_t * __thiscall
UOptimusSceneDataInterface::GetShaderVirtualPath(UOptimusSceneDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e5c90

void __thiscall
UOptimusSceneDataInterface::GetSupportedInputs
          (UOptimusSceneDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadGameTime");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Float,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadGameTimeDelta");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Float,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadFrameNumber");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  return;
}

// StaticRegisterNativesUOptimusSceneDataInterface @ 14e225e40

void __cdecl UOptimusSceneDataInterface::StaticRegisterNativesUOptimusSceneDataInterface(void)

{
  return;
}

