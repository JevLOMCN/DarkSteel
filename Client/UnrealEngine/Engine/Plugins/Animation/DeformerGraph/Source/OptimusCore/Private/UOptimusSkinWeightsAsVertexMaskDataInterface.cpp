// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 25

// StaticClass @ 14e11ac50

UClass * __cdecl UOptimusSkinWeightsAsVertexMaskDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinWeightsAsVertexMaskDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.
                InnerSingleton,StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataInterface,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinWeightsAsVertexMaskDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinWeightsAsVertexMaskDataInterface>,
               local_res8,UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.InnerSingleton;
}

// UOptimusSkinWeightsAsVertexMaskDataInterface @ 14e15cd60

UOptimusSkinWeightsAsVertexMaskDataInterface * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::UOptimusSkinWeightsAsVertexMaskDataInterface
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,FVTableHelper *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8;
  
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkinWeightsAsVertexMaskDataInterface__6B_;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  pTVar1 = &this->BoneNames;
  ::FName::FName(&local_res8,L"Root");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BoneNames).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->BoneNames).ArrayMax);
  *(FName *)(pTVar1->AllocatorInstance).Data = local_res8;
  this->ExpandTowardsRoot = 0;
  this->ExpandTowardsLeaf = 999;
  this->bDebugDrawIncludedBones = true;
  (this->DebugDrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPinDefinitionRenamedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionRenamedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionRenamedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDisplayNameChangedDelegate = 0;
  *(undefined8 *)&(this->OnDisplayNameChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDisplayNameChangedDelegate).field_0x10 = 0;
  return this;
}

// UOptimusSkinWeightsAsVertexMaskDataInterface @ 14e15ce40

UOptimusSkinWeightsAsVertexMaskDataInterface * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::UOptimusSkinWeightsAsVertexMaskDataInterface
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,FObjectInitializer *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8;
  
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkinWeightsAsVertexMaskDataInterface__6B_;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  pTVar1 = &this->BoneNames;
  ::FName::FName(&local_res8,L"Root");
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BoneNames).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&pTVar1->AllocatorInstance,1,&(this->BoneNames).ArrayMax);
  *(FName *)(pTVar1->AllocatorInstance).Data = local_res8;
  this->ExpandTowardsRoot = 0;
  this->ExpandTowardsLeaf = 999;
  this->bDebugDrawIncludedBones = true;
  (this->DebugDrawColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPinDefinitionRenamedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionRenamedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionRenamedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDisplayNameChangedDelegate = 0;
  *(undefined8 *)&(this->OnDisplayNameChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDisplayNameChangedDelegate).field_0x10 = 0;
  return this;
}

// ~UOptimusSkinWeightsAsVertexMaskDataInterface @ 14e163f40

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::~UOptimusSkinWeightsAsVertexMaskDataInterface
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusSkinWeightsAsVertexMaskDataInterface__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDisplayNameChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionRenamedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionChangedDelegate);
  pFVar1 = (this->BoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e181b90

bool __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::CanSupportUnifiedDispatch
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this)

{
  return false;
}

// CreateDataProvider @ 14e19d6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::CreateDataProvider
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,TObjectPtr<UObject> param_1,
          ulong64 param_2,ulong64 param_3)

{
  FName FVar1;
  uint uVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  USkeletalMeshComponent *pUVar7;
  undefined1 auStack_d8 [32];
  USkeletalMeshComponent *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UOptimusSkinWeightsAsVertexMaskDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar5);
    if (bVar3) {
      pUVar7 = *(USkeletalMeshComponent **)param_1.field0_0x0;
      goto LAB_14e19d759;
    }
  }
  pUVar7 = (USkeletalMeshComponent *)0x0;
LAB_14e19d759:
  local_b8[0] = (USkeletalMeshComponent *)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UOptimusSkinWeightsAsVertexMaskDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar4[5].field_0x8,(FObjectPtr)local_b8);
  local_b8[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar4[1].field_0x8,(FObjectPtr)local_b8);
  uVar2 = (this->SkinWeightProfile).Number;
  *(uint *)&pUVar4[1].field_0x10 = (this->SkinWeightProfile).ComparisonIndex.Value;
  *(uint *)&pUVar4[1].field_0x14 = uVar2;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4[1].field_0x18,&this->BoneNames);
  FVar1.ComparisonIndex.Value = *(uint *)&pUVar4[1].field_0x10;
  FVar1.Number = *(uint *)&pUVar4[1].field_0x14;
  *(int *)(pUVar4 + 2) = this->ExpandTowardsRoot;
  *(int *)&pUVar4[2].field_0x4 = this->ExpandTowardsLeaf;
  pUVar4[2].field_0x8 = this->bDebugDrawIncludedBones;
  *(FColor_u_0 *)&pUVar4[2].field_0xc = (this->DebugDrawColor).field0_0x0;
  local_b8[0]._0_5_ = (uint5)(uint)local_b8[0];
  Optimus::RequestSkinWeightProfileForDeformer(pUVar7,FVar1,(TOptional<int>)local_b8);
  return (UComputeDataProvider *)pUVar4;
}

// GetBoneNamesPropertyName @ 14e1bbfc0

FName __cdecl UOptimusSkinWeightsAsVertexMaskDataInterface::GetBoneNamesPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,9,L"BoneNames",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetClassName @ 14e1bcc10

wchar_t * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetClassName
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this)

{
  return L"SkinWeightMask";
}

// GetDebugDrawIncludedBonesPropertyName @ 14e1c1ea0

FName __cdecl
UOptimusSkinWeightsAsVertexMaskDataInterface::GetDebugDrawIncludedBonesPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x17,L"bDebugDrawIncludedBones",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetDisplayName @ 14e1c4c40

FString * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetDisplayName
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Skin Weights as Vertex Mask");
  return __return_storage_ptr__;
}

// GetExpandTowardsLeafPropertyName @ 14e1c5150

FName __cdecl UOptimusSkinWeightsAsVertexMaskDataInterface::GetExpandTowardsLeafPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x11,L"ExpandTowardsLeaf",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetExpandTowardsRootPropertyName @ 14e1c5190

FName __cdecl UOptimusSkinWeightsAsVertexMaskDataInterface::GetExpandTowardsRootPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x11,L"ExpandTowardsRoot",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetHLSL @ 14e1c7e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetHLSL
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e1cc680

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetPermutations
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,
          FComputeKernelPermutationVector *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"ENABLE_DEFORMER_BONES");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"GPUSKIN_BONE_INDEX_UINT16");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"GPUSKIN_BONE_WEIGHTS_UINT16");
  FComputeKernelPermutationVector::AddPermutation(param_1,&local_18,2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPinDefinitions @ 14e1d03b0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetPinDefinitions
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,
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
  FName local_res18;
  FString local_88;
  FString local_78;
  FOptimusCDIPinDefinition local_68;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = ::FString::FString(&local_88,"ReadNumVertices");
  FVar3 = Optimus::DomainName::Vertex;
  pFVar7 = ::FString::FString(&local_78,"ReadMask");
  pFVar8 = ::FName::FName(&local_res18,"Mask");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_68,*pFVar8,pFVar7,FVar3,pFVar6,true,(FName)0x0);
  pFVar1 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar1 <= &local_68) && (&local_68 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_68.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_68.DataFunctionName.Data.AllocatorInstance.Data;
  local_68.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_68.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_68.DataFunctionName.Data.ArrayMax;
  local_68.DataFunctionName.Data.ArrayNum = 0;
  local_68.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_68.DataDimensions.AllocatorInstance.Data;
  local_68.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_68.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_68.DataDimensions.ArrayMax;
  local_68.DataDimensions.ArrayNum = 0;
  local_68.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_68.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_68.bMutable;
  pFVar8[6] = local_68.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_68.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DataDimensions.AllocatorInstance.Data);
  }
  if (local_68.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d9000

UClass * __cdecl UOptimusSkinWeightsAsVertexMaskDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinWeightsAsVertexMaskDataInterface",
               &Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.
                InnerSingleton,StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataInterface,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinWeightsAsVertexMaskDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusSkinWeightsAsVertexMaskDataInterface>,
               local_res8,UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface.InnerSingleton;
}

// GetPropertyPinDefinitions @ 14e1da210

/* WARNING: Removing unreachable block (ram,0x00014e1dabda) */
/* WARNING: Removing unreachable block (ram,0x00014e1da974) */
/* WARNING: Removing unreachable block (ram,0x00014e1da79d) */
/* WARNING: Removing unreachable block (ram,0x00014e1daaae) */
/* WARNING: Removing unreachable block (ram,0x00014e1dad11) */

TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetPropertyPinDefinitions
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,
          TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FOptimusDataType *pFVar3;
  bool bVar4;
  int iVar5;
  FOptimusDataTypeRegistry *pFVar6;
  FFieldClass *pFVar7;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar8;
  FString *pFVar9;
  FName *pFVar10;
  TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *pTVar11;
  byte bVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *puVar14;
  ForAnyElementType FVar15;
  atomic<int> *paVar16;
  byte bVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  atomic<int> *paVar20;
  TReferenceControllerBase<1> *local_res10;
  FName *local_res18;
  FOptimusDataType *local_res20;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName FStack_298;
  FUtf8String local_290;
  FName local_280;
  undefined1 local_278 [8];
  FName local_270;
  FName local_268;
  FName FStack_260;
  FUtf8String local_258;
  FOptimusDataType *local_248;
  FOptimusDataType *local_240;
  FName local_238;
  undefined1 local_230 [16];
  FName local_220;
  FName FStack_218;
  FName local_210;
  undefined8 local_208;
  FName local_200;
  undefined1 local_1f8 [16];
  FName local_1e8;
  FName FStack_1e0;
  FName local_1d8;
  undefined8 local_1d0;
  FName local_1c8;
  undefined1 local_1c0 [16];
  FName local_1b0;
  FName FStack_1a8;
  FName local_1a0;
  undefined8 local_198;
  FName local_190;
  FName local_188;
  TReferenceControllerBase<1> *local_180;
  TReferenceControllerBase<1> *local_178;
  FString local_170;
  undefined8 local_160;
  TReferenceControllerBase<1> *local_158;
  undefined8 local_150;
  TReferenceControllerBase<1> *local_148;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  TSharedPtr<FOptimusDataType_const_,1> local_120;
  TSharedPtr<FOptimusDataType_const_,1> local_110;
  TSharedPtr<FOptimusDataType_const_,1> local_100;
  TSharedPtr<FOptimusDataType_const_,1> local_f0;
  undefined8 local_e0;
  TReferenceControllerBase<1> *local_d8;
  FString local_d0;
  undefined8 local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  FString local_48;
  
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = FOptimusDataTypeRegistry::Get();
  pFVar7 = FNameProperty::StaticClass();
  pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar6->RegisteredTypes,pFVar7->Name);
  pTVar13 = (TReferenceControllerBase<1> *)&pTVar8->field_0x10;
  if (pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pTVar13 = pTVar19;
  }
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    local_50 = 0;
    local_res20 = (FOptimusDataType *)0x0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar18 = pTVar19;
  }
  else {
    pTVar18 = *(TReferenceControllerBase<1> **)&pTVar13->SharedReferenceCount;
    local_res20 = (FOptimusDataType *)pTVar13->_padding_;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = 0;
    local_68 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar6 = FOptimusDataTypeRegistry::Get();
  pFVar7 = FNameProperty::StaticClass();
  pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar6->RegisteredTypes,pFVar7->Name);
  pTVar13 = (TReferenceControllerBase<1> *)&pTVar8->field_0x10;
  if (pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pTVar13 = pTVar19;
  }
  paVar20 = (atomic<int> *)&DAT_00000008;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FName *)0x0;
    puVar14 = &local_160;
    local_158 = (TReferenceControllerBase<1> *)0x0;
    bVar17 = 8;
  }
  else {
    local_148 = *(TReferenceControllerBase<1> **)&pTVar13->SharedReferenceCount;
    pFVar10 = (FName *)pTVar13->_padding_;
    if (local_148 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_148->SharedReferenceCount = (atomic<int>)((int)local_148->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar14 = &local_150;
    bVar17 = 4;
  }
  pTVar13 = (TReferenceControllerBase<1> *)puVar14[1];
  puVar14[1] = 0;
  *puVar14 = 0;
  if ((bVar17 & 8) != 0) {
    bVar17 = bVar17 & 0xf7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_158);
  }
  if ((bVar17 & 4) != 0) {
    bVar17 = bVar17 & 0xfb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
  }
  if (pFVar10 == (FName *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    local_res18 = (FName *)0x0;
    local_res10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_190 = *pFVar10;
    pFVar9 = ::FName::ToString(&local_190,&local_48);
    ::FString::ConcatCF(&local_d0,L"TArray<",pFVar9);
    ::FString::ConcatFC(&local_170,&local_d0,L">");
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar15.Data = local_170.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_188,(wchar_t *)FVar15.Data);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&pFVar6->RegisteredTypes,local_188);
    puVar14 = (undefined8 *)&pTVar8->field_0x10;
    if (pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    if (puVar14 == (undefined8 *)0x0) {
      local_d8 = (TReferenceControllerBase<1> *)0x0;
      puVar14 = &local_e0;
      bVar12 = 0x20;
      local_res18 = (FName *)0x0;
    }
    else {
      local_98 = (TReferenceControllerBase<1> *)puVar14[1];
      local_res18 = (FName *)*puVar14;
      if (local_98 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar14 = &local_a0;
      bVar12 = 0x10;
    }
    *puVar14 = 0;
    local_res10 = (TReferenceControllerBase<1> *)puVar14[1];
    puVar14[1] = 0;
    if ((bVar12 & 0x20) != 0) {
      bVar12 = bVar12 & 0xdf;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    }
    if ((bVar12 & 0x10) != 0) {
      bVar12 = bVar12 & 0xef;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    }
    bVar17 = bVar17 | bVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  pFVar6 = FOptimusDataTypeRegistry::Get();
  pFVar7 = FIntProperty::StaticClass();
  pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar6->RegisteredTypes,pFVar7->Name);
  puVar14 = (undefined8 *)&pTVar8->field_0x10;
  if (pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  if (puVar14 == (undefined8 *)0x0) {
    local_b8 = (TReferenceControllerBase<1> *)0x0;
    puVar14 = &local_c0;
    bVar12 = 0x80;
    local_248 = (FOptimusDataType *)0x0;
  }
  else {
    local_a8 = (TReferenceControllerBase<1> *)puVar14[1];
    local_248 = (FOptimusDataType *)*puVar14;
    if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar14 = &local_b0;
    bVar12 = 0x40;
  }
  bVar17 = bVar17 | bVar12;
  *puVar14 = 0;
  local_180 = (TReferenceControllerBase<1> *)puVar14[1];
  puVar14[1] = 0;
  if ((char)bVar17 < '\0') {
    bVar17 = bVar12 & 0x7f;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b8);
  }
  if ((bVar17 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  }
  pFVar6 = FOptimusDataTypeRegistry::Get();
  pFVar7 = FBoolProperty::StaticClass();
  pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&pFVar6->RegisteredTypes,pFVar7->Name);
  puVar14 = (undefined8 *)&pTVar8->field_0x10;
  if (pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  if (puVar14 == (undefined8 *)0x0) {
    local_138 = (TReferenceControllerBase<1> *)0x0;
    puVar14 = &local_140;
    bVar2 = false;
    bVar4 = true;
    local_240 = (FOptimusDataType *)0x0;
  }
  else {
    local_128 = (TReferenceControllerBase<1> *)puVar14[1];
    local_240 = (FOptimusDataType *)*puVar14;
    if (local_128 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar14 = &local_130;
    bVar2 = true;
    bVar4 = false;
  }
  *puVar14 = 0;
  local_178 = (TReferenceControllerBase<1> *)puVar14[1];
  puVar14[1] = 0;
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  }
  pFVar10 = ::FName::FName(&local_90,0x11,L"SkinWeightProfile",FNAME_Add);
  local_280 = *pFVar10;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
    paVar16 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar16 = &pTVar18->SharedReferenceCount;
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  local_278._0_4_ = 0;
  local_278._4_4_ = 0;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  local_270.ComparisonIndex.Value = 0;
  local_270.Number = 0;
  FStack_260.ComparisonIndex.Value = 0;
  FStack_260.Number = 0;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  FUtf8String::Reset(&local_258,0);
  local_120.Object = local_res20;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar16 = (atomic<int>)((int)*paVar16 + 1);
    UNLOCK();
  }
  local_120.SharedReferenceCount.ReferenceController = pTVar18;
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_278,&local_120);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  pFVar10 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= &local_280) &&
      (&local_280 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar11 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar11;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar10 = local_280;
  pFVar10[1].ComparisonIndex = (FNameEntryId)local_278._0_4_;
  pFVar10[1].Number = local_278._4_4_;
  pFVar10[2] = local_270;
  pFVar10[3] = local_268;
  pFVar10[4] = FStack_260;
  pFVar10[5].ComparisonIndex = 0;
  pFVar10[5].Number = 0;
  pFVar10[5] = (FName)local_258.Data.AllocatorInstance.Data;
  pFVar10[6].ComparisonIndex.Value = local_258.Data.ArrayNum;
  pFVar10[6].Number = local_258.Data.ArrayMax;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10 = ::FName::FName(&local_88,9,L"BoneNames",FNAME_Add);
  local_2b8 = *pFVar10;
  if (local_res10 != (TReferenceControllerBase<1> *)0x0) {
    paVar20 = &local_res10->SharedReferenceCount;
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.Data.ArrayNum = 0;
  local_290.Data.ArrayMax = 0;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  FStack_298.ComparisonIndex.Value = 0;
  FStack_298.Number = 0;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  FUtf8String::Reset(&local_290,0);
  if (local_res10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  if (local_res18 == (FName *)0x0) {
    local_2b0.ComparisonIndex.Value = 0;
    local_2b0.Number = 0;
    local_2a8.ComparisonIndex.Value = 0;
    local_2a8.Number = 0;
    FStack_298.ComparisonIndex.Value = 0;
    FStack_298.Number = 0;
    local_2a0.ComparisonIndex.Value = 0;
    local_2a0.Number = 0;
    FUtf8String::Reset(&local_290,0);
  }
  else {
    local_2b0 = *local_res18;
    local_res20 = (FOptimusDataType *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18[5].Number);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (FOptimusDataType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&local_2a8,(FObjectPtr)&local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  pFVar10 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= &local_2b8) &&
      (&local_2b8 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar11 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar11;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar10 = local_2b8;
  pFVar10[1] = local_2b0;
  pFVar10[2] = local_2a8;
  pFVar10[3] = local_2a0;
  pFVar10[4] = FStack_298;
  pFVar10[5].ComparisonIndex = 0;
  pFVar10[5].Number = 0;
  pFVar10[5] = (FName)local_290.Data.AllocatorInstance.Data;
  pFVar10[6].ComparisonIndex.Value = local_290.Data.ArrayNum;
  pFVar10[6].Number = local_290.Data.ArrayMax;
  local_290.Data.ArrayNum = 0;
  local_290.Data.ArrayMax = 0;
  local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10 = ::FName::FName(&local_80,0x11,L"ExpandTowardsRoot",FNAME_Add);
  pTVar13 = local_180;
  pFVar3 = local_248;
  local_110.Object = local_248;
  local_200 = *pFVar10;
  local_110.SharedReferenceCount.ReferenceController = local_180;
  if (local_180 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_1f8,&local_110);
  pFVar10 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= &local_200) &&
      (&local_200 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar11 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar11;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar10 = local_200;
  pFVar10[1].ComparisonIndex = (FNameEntryId)local_1f8._0_4_;
  pFVar10[1].Number = local_1f8._4_4_;
  pFVar10[2].ComparisonIndex = (FNameEntryId)local_1f8._8_4_;
  pFVar10[2].Number = local_1f8._12_4_;
  pFVar10[3] = local_1e8;
  pFVar10[4] = FStack_1e0;
  pFVar10[5].ComparisonIndex = 0;
  pFVar10[5].Number = 0;
  pFVar10[5] = local_1d8;
  pFVar10[6].ComparisonIndex.Value = (uint)local_1d0;
  pFVar10[6].Number = local_1d0._4_4_;
  local_1d0 = 0;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  pFVar10 = ::FName::FName(&local_78,0x11,L"ExpandTowardsLeaf",FNAME_Add);
  local_100.Object = pFVar3;
  local_100.SharedReferenceCount.ReferenceController = pTVar13;
  local_1c8 = *pFVar10;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_1c0,&local_100);
  pFVar10 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= &local_1c8) &&
      (&local_1c8 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar11 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar11;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar10 = local_1c8;
  pFVar10[1].ComparisonIndex = (FNameEntryId)local_1c0._0_4_;
  pFVar10[1].Number = local_1c0._4_4_;
  pFVar10[2].ComparisonIndex = (FNameEntryId)local_1c0._8_4_;
  pFVar10[2].Number = local_1c0._12_4_;
  pFVar10[3] = local_1b0;
  pFVar10[4] = FStack_1a8;
  pFVar10[5].ComparisonIndex = 0;
  pFVar10[5].Number = 0;
  pFVar10[5] = local_1a0;
  pFVar10[6].ComparisonIndex.Value = (uint)local_198;
  pFVar10[6].Number = local_198._4_4_;
  local_198 = 0;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  pFVar10 = ::FName::FName(&local_70,0x17,L"bDebugDrawIncludedBones",FNAME_Add);
  pTVar19 = local_178;
  local_f0.SharedReferenceCount.ReferenceController = local_178;
  local_238 = *pFVar10;
  local_f0.Object = local_240;
  if (local_178 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_178->SharedReferenceCount = (atomic<int>)((int)local_178->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_230,&local_f0);
  pFVar10 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= &local_238) &&
      (&local_238 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar11 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar11;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
  *pFVar10 = local_238;
  pFVar10[1].ComparisonIndex = (FNameEntryId)local_230._0_4_;
  pFVar10[1].Number = local_230._4_4_;
  pFVar10[2].ComparisonIndex = (FNameEntryId)local_230._8_4_;
  pFVar10[2].Number = local_230._12_4_;
  pFVar10[3] = local_220;
  pFVar10[4] = FStack_218;
  pFVar10[5].ComparisonIndex = 0;
  pFVar10[5].Number = 0;
  pFVar10[5] = local_210;
  pFVar10[6].ComparisonIndex.Value = (uint)local_208;
  pFVar10[6].Number = local_208._4_4_;
  local_208 = 0;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return __return_storage_ptr__;
}

// GetRequiredComponentClass @ 14e1dfa90

TSubclassOf<UActorComponent> __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetRequiredComponentClass
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetShaderHash @ 14e1e08d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetShaderHash
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e1e2b00

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetShaderParameters
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FSkinWeightsAsVertexMaskDataInterfaceParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FSkinWeightsAsVertexMaskDataInterfaceParameters",
                 L"FSkinWeightsAsVertexMaskDataInterfaceParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceSkinWeightsAsVertexMask.cpp"
                 ,0x69,0x30,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinWeightsAsVertexMaskDataInterfaceParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x30;
  return;
}

// GetShaderVirtualPath @ 14e1e3c90

wchar_t * __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetShaderVirtualPath
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this)

{
  return TemplateFilePath;
}

// GetSkinWeightProfilePropertyName @ 14e1e3d10

FName __cdecl UOptimusSkinWeightsAsVertexMaskDataInterface::GetSkinWeightProfilePropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x11,L"SkinWeightProfile",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetSupportedInputs @ 14e1e60a0

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::GetSupportedInputs
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadMask");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// RegisterPropertyChangeDelegatesForOwningNode @ 14e207a00

void __thiscall
UOptimusSkinWeightsAsVertexMaskDataInterface::RegisterPropertyChangeDelegatesForOwningNode
          (UOptimusSkinWeightsAsVertexMaskDataInterface *this,UOptimusNode *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UOptimusNode *local_res10;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  if (param_1 != (UOptimusNode *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionChangedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(this->OnPinDefinitionChangedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar1[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = UOptimusNode::_vcall__704__flat______;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionRenamedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(this->OnPinDefinitionRenamedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXVFName__0_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar1[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = UOptimusNode::_vcall__712__flat______;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDisplayNameChangedDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(this->OnDisplayNameChangedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUOptimusNode____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar1[3] = 0;
      local_res10 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = UOptimusNode::_vcall__720__flat______;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataInterface @ 14e225ea0

void __cdecl
UOptimusSkinWeightsAsVertexMaskDataInterface::
StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataInterface(void)

{
  return;
}

