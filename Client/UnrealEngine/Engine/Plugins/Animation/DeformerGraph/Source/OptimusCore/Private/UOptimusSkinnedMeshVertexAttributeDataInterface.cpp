// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 19

// StaticClass @ 14e112ba0

UClass * __cdecl UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshVertexAttributeDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.
                InnerSingleton,StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinnedMeshVertexAttributeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshVertexAttributeDataInterface>,
               local_res8,UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.InnerSingleton;
}

// UOptimusSkinnedMeshVertexAttributeDataInterface @ 14e15d340

UOptimusSkinnedMeshVertexAttributeDataInterface * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::UOptimusSkinnedMeshVertexAttributeDataInterface
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkinnedMeshVertexAttributeDataInterface__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  return this;
}

// UOptimusSkinnedMeshVertexAttributeDataInterface @ 14e15d370

UOptimusSkinnedMeshVertexAttributeDataInterface * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::UOptimusSkinnedMeshVertexAttributeDataInterface
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkinnedMeshVertexAttributeDataInterface__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  return this;
}

// ~UOptimusSkinnedMeshVertexAttributeDataInterface @ 14e1640e0

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::~UOptimusSkinnedMeshVertexAttributeDataInterface
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this)

{
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181bc0

bool __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::CanSupportUnifiedDispatch
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e19da30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::CreateDataProvider
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,TObjectPtr<UObject> param_1,
          ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  UOptimusSkinnedMeshVertexAttributeDataInterface *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar4 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar4);
    if (bVar2) {
      local_a8[0] = *(UOptimusSkinnedMeshVertexAttributeDataInterface **)param_1.field0_0x0;
      goto LAB_14e19dae1;
    }
  }
  local_a8[0] = (UOptimusSkinnedMeshVertexAttributeDataInterface *)0x0;
LAB_14e19dae1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_a8[0] != (UOptimusSkinnedMeshVertexAttributeDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar3[1].field_0x8,(FObjectPtr)local_a8);
  uVar1 = (this->AttributeName).Number;
  *(uint *)&pUVar3[1].field_0x10 = (this->AttributeName).ComparisonIndex.Value;
  *(uint *)&pUVar3[1].field_0x14 = uVar1;
  *(float *)&pUVar3[1].field_0x18 = this->DefaultValue;
  local_a8[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar3[1].field_0x1c,(FObjectPtr)local_a8);
  return (UComputeDataProvider *)pUVar3;
}

// GetAttributeNamePropertyName @ 14e1ba880

FName __cdecl UOptimusSkinnedMeshVertexAttributeDataInterface::GetAttributeNamePropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0xd,L"AttributeName",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetClassName @ 14e1bcc40

wchar_t * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetClassName
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this)

{
  return L"VertexAttribute";
}

// GetDefaultValuePropertyName @ 14e1c32b0

FName __cdecl UOptimusSkinnedMeshVertexAttributeDataInterface::GetDefaultValuePropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0xc,L"DefaultValue",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetDisplayName @ 14e1c4d10

FString * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetDisplayName
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Skinned Mesh Vertex Attribute");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e1c8250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetHLSL
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,FString *param_1,FString *param_2)

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
            (L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshVertexAttribute.ush",SP_PCD3D_SM5,
             (FString *)&local_c8,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0,
             (FName *)0x0,(TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *)0x0);
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

// GetPinDefinitions @ 14e1d1b60

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetPinDefinitions
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FOptimusCDIPinDefinition *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FName *pFVar8;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  FName local_res20;
  FName local_e8;
  FString local_e0;
  FName local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined1 local_bc;
  FName local_b8;
  FOptimusCDIPinDefinition local_b0;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = ::FString::FString(&local_70,"ReadNumVertices");
  pFVar8 = ::FName::FName(&local_res20,"NumVertices");
  local_e8 = *pFVar8;
  ::FString::FString(&local_e0,pFVar7);
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_bc = 0;
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_e8) && (&local_e8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar8 = local_e8;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_e0.Data.AllocatorInstance.Data;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_e0.Data.ArrayNum;
  pFVar8[2].Number = local_e0.Data.ArrayMax;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_d0;
  local_d0 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_c8;
  pFVar8[4].Number = local_c8._4_4_;
  local_c8 = 0;
  pFVar8[5].ComparisonIndex.Value = local_c0;
  *(undefined1 *)&pFVar8[5].Number = local_bc;
  pFVar8[6] = local_b8;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_d0 != (FName)0x0) {
    FMemory::Free((void *)local_d0);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pFVar7 = ::FString::FString(&local_60,"ReadNumVertices");
  FVar4 = UOptimusSkinnedMeshComponentSource::Domains::Vertex;
  pFVar10 = ::FString::FString(&local_50,"ReadValue");
  pFVar8 = ::FName::FName(&local_78,"Value");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_b0,*pFVar8,pFVar10,FVar4,pFVar7,false,(FName)0x0);
  pFVar2 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar2 <= &local_b0) && (&local_b0 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
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
  pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
  *pFVar8 = local_b0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_b0.DataFunctionName.Data.AllocatorInstance.Data;
  local_b0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_b0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_b0.DataFunctionName.Data.ArrayMax;
  local_b0.DataFunctionName.Data.ArrayNum = 0;
  local_b0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_b0.DataDimensions.AllocatorInstance.Data;
  local_b0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_b0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_b0.DataDimensions.ArrayMax;
  local_b0.DataDimensions.ArrayNum = 0;
  local_b0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_b0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_b0.bMutable;
  pFVar8[6] = local_b0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_b0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_b0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d9540

UClass * __cdecl UOptimusSkinnedMeshVertexAttributeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshVertexAttributeDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.
                InnerSingleton,StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinnedMeshVertexAttributeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshVertexAttributeDataInterface>,
               local_res8,UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.InnerSingleton;
}

// GetPropertyPinDefinitions @ 14e1dad60

/* WARNING: Removing unreachable block (ram,0x00014e1daf53) */
/* WARNING: Removing unreachable block (ram,0x00014e1db0ff) */

TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetPropertyPinDefinitions
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,
          TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOptimusDataTypeRegistry *pFVar4;
  FFieldClass *pFVar5;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar6;
  FName *pFVar7;
  TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *pTVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName local_res10;
  FName local_res18;
  FName local_f8;
  undefined1 local_f0 [8];
  FName local_e8;
  FName local_e0;
  FName FStack_d8;
  FUtf8String local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FName local_b0;
  FName local_a8;
  FName FStack_a0;
  FUtf8String local_98;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = FOptimusDataTypeRegistry::Get();
  pFVar5 = FNameProperty::StaticClass();
  pTVar6 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar4->RegisteredTypes,pFVar5->Name);
  FVar9 = (FName)&pTVar6->field_0x10;
  if (pTVar6 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    FVar9 = FVar11;
  }
  if (FVar9 == (FName)0x0) {
    local_50 = 0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar9 = FVar11;
    FVar10 = FVar11;
  }
  else {
    FVar10 = ((FOptimusDataType *)FVar9)->TypeName;
    FVar9 = (FName)(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference;
    if (FVar9 != (FName)0x0) {
      LOCK();
      *(int *)&(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference =
           *(int *)&(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference + 1;
      UNLOCK();
    }
    local_60 = 0;
    local_68 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar7 = ::FName::FName(&local_res10,0xd,L"AttributeName",FNAME_Add);
  local_f8 = *pFVar7;
  if (FVar9 != (FName)0x0) {
    LOCK();
    *(int *)&(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference =
         *(int *)&(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_f0._0_4_ = 0;
  local_f0._4_4_ = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FStack_d8.ComparisonIndex.Value = 0;
  FStack_d8.Number = 0;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FUtf8String::Reset(&local_d0,0);
  if (FVar9 != (FName)0x0) {
    LOCK();
    *(int *)&(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference =
         *(int *)&(((FOptimusDataType *)FVar9)->DisplayName).TextData.Reference + 1;
    UNLOCK();
  }
  local_88.Object = (FOptimusDataType *)FVar10;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar9;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_f0,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
  pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= &local_f8) &&
      (&local_f8 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar8;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x38);
  *pFVar7 = local_f8;
  pFVar7[1].ComparisonIndex = (FNameEntryId)local_f0._0_4_;
  pFVar7[1].Number = local_f0._4_4_;
  pFVar7[2] = local_e8;
  pFVar7[3] = local_e0;
  pFVar7[4] = FStack_d8;
  pFVar7[5].ComparisonIndex = 0;
  pFVar7[5].Number = 0;
  pFVar7[5] = (FName)local_d0.Data.AllocatorInstance.Data;
  pFVar7[6].ComparisonIndex.Value = local_d0.Data.ArrayNum;
  pFVar7[6].Number = local_d0.Data.ArrayMax;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7 = ::FName::FName(&local_res18,0xc,L"DefaultValue",FNAME_Add);
  local_c0 = *pFVar7;
  pFVar4 = FOptimusDataTypeRegistry::Get();
  pFVar5 = FFloatProperty::StaticClass();
  pTVar6 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar4->RegisteredTypes,pFVar5->Name);
  FVar10 = (FName)&pTVar6->field_0x10;
  if (pTVar6 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    FVar10 = FVar11;
  }
  if (FVar10 == (FName)0x0) {
    local_30 = 0;
    local_38 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar12 = FVar11;
  }
  else {
    FVar12 = ((FOptimusDataType *)FVar10)->TypeName;
    FVar11 = (FName)(((FOptimusDataType *)FVar10)->DisplayName).TextData.Reference;
    if (FVar11 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar11 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar11 + 8) + 1);
      UNLOCK();
    }
    local_40 = 0;
    local_48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FStack_a0.ComparisonIndex.Value = 0;
  FStack_a0.Number = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FUtf8String::Reset(&local_98,0);
  if (FVar11 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)FVar11 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar11 + 8) + 1);
    UNLOCK();
  }
  local_78.Object = (FOptimusDataType *)FVar12;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar11;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_b8,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar11);
  pFVar7 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= &local_c0) &&
      (&local_c0 < pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar8;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x38);
  *pFVar7 = local_c0;
  pFVar7[1].ComparisonIndex = (FNameEntryId)local_b8._0_4_;
  pFVar7[1].Number = local_b8._4_4_;
  pFVar7[2] = local_b0;
  pFVar7[3] = local_a8;
  pFVar7[4] = FStack_a0;
  pFVar7[5].ComparisonIndex = 0;
  pFVar7[5].Number = 0;
  pFVar7[5] = (FName)local_98.Data.AllocatorInstance.Data;
  pFVar7[6].ComparisonIndex.Value = local_98.Data.ArrayNum;
  pFVar7[6].Number = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
  return __return_storage_ptr__;
}

// GetRequiredComponentClass @ 14e1dfb50

TSubclassOf<UActorComponent> __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetRequiredComponentClass
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this)

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

// GetShaderHash @ 14e1e0990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetShaderHash
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshVertexAttribute.ush",
                             SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e3040

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetShaderParameters
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FSkinnedMeshVertexAttributeDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FSkinnedMeshVertexAttributeDataInterfaceParameters",
                 L"FSkinnedMeshVertexAttributeDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinnedMeshVertexAttribute.cpp"
                 ,0x47,0x20,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata'::
             __l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshVertexAttributeDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x20;
  return;
}

// GetSupportedInputs @ 14e1e6890

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataInterface::GetSupportedInputs
          (UOptimusSkinnedMeshVertexAttributeDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValue");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface @ 14e225f10

void __cdecl
UOptimusSkinnedMeshVertexAttributeDataInterface::
StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface(void)

{
  return;
}

