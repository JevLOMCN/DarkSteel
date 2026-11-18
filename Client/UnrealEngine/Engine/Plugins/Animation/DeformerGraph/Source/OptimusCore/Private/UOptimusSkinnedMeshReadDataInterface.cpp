// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 20

// StaticClass @ 14e10ca10

UClass * __cdecl UOptimusSkinnedMeshReadDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshReadDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshReadDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.InnerSingleton;
}

// UOptimusSkinnedMeshReadDataInterface @ 14e15d200

UOptimusSkinnedMeshReadDataInterface * __thiscall
UOptimusSkinnedMeshReadDataInterface::UOptimusSkinnedMeshReadDataInterface
          (UOptimusSkinnedMeshReadDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkinnedMeshReadDataInterface__6B_;
  return this;
}

// UOptimusSkinnedMeshReadDataInterface @ 14e15d230

UOptimusSkinnedMeshReadDataInterface * __thiscall
UOptimusSkinnedMeshReadDataInterface::UOptimusSkinnedMeshReadDataInterface
          (UOptimusSkinnedMeshReadDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusSkinnedMeshReadDataInterface__6B_;
  return this;
}

// ~UOptimusSkinnedMeshReadDataInterface @ 14e1640a0

void __thiscall
UOptimusSkinnedMeshReadDataInterface::~UOptimusSkinnedMeshReadDataInterface
          (UOptimusSkinnedMeshReadDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181bb0

bool __thiscall
UOptimusSkinnedMeshReadDataInterface::CanSupportUnifiedDispatch
          (UOptimusSkinnedMeshReadDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19d920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusSkinnedMeshReadDataInterface::CreateDataProvider
          (UOptimusSkinnedMeshReadDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
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
  pUVar3 = UOptimusSkinnedMeshReadDataProvider::StaticClass();
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
      goto LAB_14e19d9cb;
    }
  }
  local_a8[0] = (UObject *)0x0;
LAB_14e19d9cb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar2[1].field_0x8,(FObjectPtr)local_a8);
  *(ulong64 *)&pUVar2[1].field_0x10 = param_2;
  return (UComputeDataProvider *)pUVar2;
}

// GetCategory @ 14e1bc370

FName __thiscall
UOptimusSkinnedMeshReadDataInterface::GetCategory(UOptimusSkinnedMeshReadDataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusComputeDataInterface::CategoryName::DataInterfaces;
  return in_RDX;
}

// GetClassName @ 14e1bcc30

wchar_t * __thiscall
UOptimusSkinnedMeshReadDataInterface::GetClassName(UOptimusSkinnedMeshReadDataInterface *this)

{
  return L"SkinnedMeshRead";
}

// GetDefines @ 14e1c32f0

/* WARNING: Removing unreachable block (ram,0x00014e1c3600) */
/* WARNING: Removing unreachable block (ram,0x00014e1c3483) */
/* WARNING: Removing unreachable block (ram,0x00014e1c379a) */
/* WARNING: Removing unreachable block (ram,0x00014e1c360f) */
/* WARNING: Removing unreachable block (ram,0x00014e1c3492) */
/* WARNING: Removing unreachable block (ram,0x00014e1c37a8) */

void __thiscall
UOptimusSkinnedMeshReadDataInterface::GetDefines
          (UOptimusSkinnedMeshReadDataInterface *this,FComputeKernelDefinitionSet *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  FScriptContainerElement *local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  int local_70;
  int iStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_68,1);
  pFVar4 = ::FString::FString(&local_38,L"OPTIMUS_SKINNED_MESH_READ_POSITION");
  local_c8 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = (pFVar4->Data).ArrayNum;
  local_c0._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_b8 = local_68.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0._0_4_ = local_68.Data.ArrayNum;
  local_b0._4_4_ = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_c8;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_c0;
  *(undefined4 *)(pFVar5 + 0xc) = local_c0._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_b8;
  *(int *)(pFVar5 + 0x18) = (int)local_b0;
  *(int *)(pFVar5 + 0x1c) = local_b0._4_4_;
  local_b0 = 0;
  local_b8 = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_c8 = (FScriptContainerElement *)0x0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_58,2);
  pFVar4 = ::FString::FString(&local_28,L"OPTIMUS_SKINNED_MESH_READ_TANGENTS");
  local_a8 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = (pFVar4->Data).ArrayNum;
  local_a0._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_98 = local_58.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = local_58.Data.ArrayNum;
  local_90._4_4_ = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_a8;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_a0;
  *(undefined4 *)(pFVar5 + 0xc) = local_a0._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_98;
  *(int *)(pFVar5 + 0x18) = (int)local_90;
  *(int *)(pFVar5 + 0x1c) = local_90._4_4_;
  local_90 = 0;
  local_98 = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_a8 = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_48,4);
  pFVar4 = ::FString::FString(&local_18,L"OPTIMUS_SKINNED_MESH_READ_COLOR");
  local_88 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = (pFVar4->Data).ArrayNum;
  local_80._4_4_ = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_78 = local_48.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70 = local_48.Data.ArrayNum;
  iStack_6c = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = (param_1->Defines).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)(param_1->Defines).ArrayMax * 0x20)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (param_1->Defines).ArrayNum;
  if (iVar3 == (param_1->Defines).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)param_1,&(param_1->Defines).ArrayMax);
  }
  (param_1->Defines).ArrayNum = iVar3 + 1;
  pFVar5 = (param_1->Defines).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_88;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_80;
  *(undefined4 *)(pFVar5 + 0xc) = local_80._4_4_;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_78;
  *(int *)(pFVar5 + 0x18) = local_70;
  *(int *)(pFVar5 + 0x1c) = iStack_6c;
  return;
}

// GetDisplayName @ 14e1c4ce0

FString * __thiscall
UOptimusSkinnedMeshReadDataInterface::GetDisplayName
          (UOptimusSkinnedMeshReadDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Read Skinned Mesh");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c80f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshReadDataInterface::GetHLSL
          (UOptimusSkinnedMeshReadDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e1cc770

void __thiscall
UOptimusSkinnedMeshReadDataInterface::GetPermutations
          (UOptimusSkinnedMeshReadDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,ReadableOutputBufferPermutationName);
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPinDefinitions @ 14e1d14f0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinnedMeshReadDataInterface::GetPinDefinitions
          (UOptimusSkinnedMeshReadDataInterface *this,
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
  FOptimusCDIPinDefinition local_1c8;
  FOptimusCDIPinDefinition local_190;
  FOptimusCDIPinDefinition local_158;
  FOptimusCDIPinDefinition local_120;
  undefined8 local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = ::FString::FString(&local_c0,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar7 = ::FString::FString(&local_b0,"ReadPosition");
  pFVar8 = ::FName::FName(&local_e0,"Position");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_1c8,*pFVar8,pFVar7,FVar3,pFVar6,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_1c8) && (&local_1c8 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_1c8.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_1c8.DataFunctionName.Data.AllocatorInstance.Data;
  local_1c8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_1c8.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_1c8.DataFunctionName.Data.ArrayMax;
  local_1c8.DataFunctionName.Data.ArrayNum = 0;
  local_1c8.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_1c8.DataDimensions.AllocatorInstance.Data;
  local_1c8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_1c8.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_1c8.DataDimensions.ArrayMax;
  local_1c8.DataDimensions.ArrayNum = 0;
  local_1c8.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_1c8.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_1c8.bMutable;
  pFVar8[6] = local_1c8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_1c8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_1c8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_a0,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar7 = ::FString::FString(&local_90,"ReadTangentX");
  pFVar8 = ::FName::FName(&local_d8,"TangentX");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_190,*pFVar8,pFVar7,FVar3,pFVar6,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_190) && (&local_190 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_190.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_190.DataFunctionName.Data.AllocatorInstance.Data;
  local_190.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_190.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_190.DataFunctionName.Data.ArrayMax;
  local_190.DataFunctionName.Data.ArrayNum = 0;
  local_190.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_190.DataDimensions.AllocatorInstance.Data;
  local_190.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_190.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_190.DataDimensions.ArrayMax;
  local_190.DataDimensions.ArrayNum = 0;
  local_190.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_190.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_190.bMutable;
  pFVar8[6] = local_190.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_190.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.DataDimensions.AllocatorInstance.Data);
  }
  if (local_190.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_80,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar7 = ::FString::FString(&local_70,"ReadTangentZ");
  pFVar8 = ::FName::FName(&local_d0,"TangentZ");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_158,*pFVar8,pFVar7,FVar3,pFVar6,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_158) && (&local_158 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_158.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_158.DataFunctionName.Data.AllocatorInstance.Data;
  local_158.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_158.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_158.DataFunctionName.Data.ArrayMax;
  local_158.DataFunctionName.Data.ArrayNum = 0;
  local_158.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_158.DataDimensions.AllocatorInstance.Data;
  local_158.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_158.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_158.DataDimensions.ArrayMax;
  local_158.DataDimensions.ArrayNum = 0;
  local_158.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_158.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_158.bMutable;
  pFVar8[6] = local_158.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_158.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.DataDimensions.AllocatorInstance.Data);
  }
  if (local_158.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.DataFunctionName.Data.AllocatorInstance.Data);
  }
  local_e8 = 0;
  pFVar6 = ::FString::FString(&local_60,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar7 = ::FString::FString(&local_50,"ReadColor");
  pFVar8 = ::FName::FName(&local_c8,"Color");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_120,*pFVar8,pFVar7,FVar3,pFVar6,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_120) && (&local_120 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_120.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_120.DataFunctionName.Data.AllocatorInstance.Data;
  local_120.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_120.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_120.DataFunctionName.Data.ArrayMax;
  local_120.DataFunctionName.Data.ArrayNum = 0;
  local_120.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_120.DataDimensions.AllocatorInstance.Data;
  local_120.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_120.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_120.DataDimensions.ArrayMax;
  local_120.DataDimensions.ArrayNum = 0;
  local_120.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_120.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_120.bMutable;
  pFVar8[6] = local_120.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_120.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.DataDimensions.AllocatorInstance.Data);
  }
  if (local_120.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d93c0

UClass * __cdecl UOptimusSkinnedMeshReadDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusSkinnedMeshReadDataInterface,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkinnedMeshReadDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshReadDataInterface.InnerSingleton;
}

// GetRequiredComponentClass @ 14e1dfb10

TSubclassOf<UActorComponent> __thiscall
UOptimusSkinnedMeshReadDataInterface::GetRequiredComponentClass
          (UOptimusSkinnedMeshReadDataInterface *this)

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

// GetShaderHash @ 14e1e0950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshReadDataInterface::GetShaderHash
          (UOptimusSkinnedMeshReadDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e2e80

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshReadDataInterface::GetShaderParameters
          (UOptimusSkinnedMeshReadDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FSkinnedMeshReadDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FSkinnedMeshReadDataInterfaceParameters",
                 L"FSkinnedMeshReadDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinnedMeshRead.cpp"
                 ,0x59,0x40,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshReadDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x40;
  return;
}

// GetShaderVirtualPath @ 14e1e3cb0

wchar_t * __thiscall
UOptimusSkinnedMeshReadDataInterface::GetShaderVirtualPath
          (UOptimusSkinnedMeshReadDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e1e6610

void __thiscall
UOptimusSkinnedMeshReadDataInterface::GetSupportedInputs
          (UOptimusSkinnedMeshReadDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadColor");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,4,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusSkinnedMeshReadDataInterface @ 14e225ef0

void __cdecl
UOptimusSkinnedMeshReadDataInterface::StaticRegisterNativesUOptimusSkinnedMeshReadDataInterface
          (void)

{
  return;
}

