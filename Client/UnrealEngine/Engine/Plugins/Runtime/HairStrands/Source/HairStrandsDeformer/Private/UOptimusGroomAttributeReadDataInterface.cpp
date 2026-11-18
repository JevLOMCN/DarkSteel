// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 21

// StaticClass @ 14e258400

UClass * __cdecl UOptimusGroomAttributeReadDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomAttributeReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomAttributeReadDataInterface,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomAttributeReadDataInterface>
               ,InternalVTableHelperCtorCaller<UOptimusGroomAttributeReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataInterface.InnerSingleton;
}

// UOptimusGroomAttributeReadDataInterface @ 14e26a980

UOptimusGroomAttributeReadDataInterface * __thiscall
UOptimusGroomAttributeReadDataInterface::UOptimusGroomAttributeReadDataInterface
          (UOptimusGroomAttributeReadDataInterface *this,FVTableHelper *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomAttributeReadDataInterface__6B_;
  (this->GroomAttributeName).ComparisonIndex = 0;
  (this->GroomAttributeName).Number = 0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  this->GroomAttributeGroup = GuidesPoints;
  this->GroomAttributeType = Float;
  return this;
}

// UOptimusGroomAttributeReadDataInterface @ 14e26a9c0

UOptimusGroomAttributeReadDataInterface * __thiscall
UOptimusGroomAttributeReadDataInterface::UOptimusGroomAttributeReadDataInterface
          (UOptimusGroomAttributeReadDataInterface *this,FObjectInitializer *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomAttributeReadDataInterface__6B_;
  (this->GroomAttributeName).ComparisonIndex = 0;
  (this->GroomAttributeName).Number = 0;
  *(undefined8 *)&this->OnPinDefinitionChangedDelegate = 0;
  *(undefined8 *)&(this->OnPinDefinitionChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPinDefinitionChangedDelegate).field_0x10 = 0;
  this->GroomAttributeGroup = GuidesPoints;
  this->GroomAttributeType = Float;
  return this;
}

// ~UOptimusGroomAttributeReadDataInterface @ 14e26b2e0

void __thiscall
UOptimusGroomAttributeReadDataInterface::~UOptimusGroomAttributeReadDataInterface
          (UOptimusGroomAttributeReadDataInterface *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomAttributeReadDataInterface__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinDefinitionChangedDelegate);
  UOptimusComputeDataInterface::~UOptimusComputeDataInterface((UOptimusComputeDataInterface *)this);
  return;
}

// CanPinDefinitionChange @ 14e26eff0

bool __thiscall
UOptimusGroomAttributeReadDataInterface::CanPinDefinitionChange
          (UOptimusGroomAttributeReadDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e26f010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGroomAttributeReadDataInterface::CreateDataProvider
          (UOptimusGroomAttributeReadDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2
          ,ulong64 param_3)

{
  uint uVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  UObject *pUVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UOptimusGroomAttributeReadDataProvider::StaticClass();
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
    pUVar4 = Z_Construct_UClass_UMeshComponent_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar4);
    if (bVar2) {
      pUVar6 = *(UObject **)param_1.field0_0x0;
      goto LAB_14e26f0bd;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14e26f0bd:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)(pUVar3 + 1) = pUVar6;
  pUVar3[1].field_0x10 = this->GroomAttributeGroup;
  uVar1 = (this->GroomAttributeName).Number;
  *(uint *)&pUVar3[1].field_0x8 = (this->GroomAttributeName).ComparisonIndex.Value;
  *(uint *)&pUVar3[1].field_0xc = uVar1;
  pUVar3[1].field_0x11 = this->GroomAttributeType;
  return (UComputeDataProvider *)pUVar3;
}

// GetClassName @ 14e274080

wchar_t * __thiscall
UOptimusGroomAttributeReadDataInterface::GetClassName(UOptimusGroomAttributeReadDataInterface *this)

{
  return L"GroomAttributeRead";
}

// GetDisplayName @ 14e276560

FString * __thiscall
UOptimusGroomAttributeReadDataInterface::GetDisplayName
          (UOptimusGroomAttributeReadDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Groom Attribute");
  return __return_storage_ptr__;
}

// GetGroomAttributeName @ 14e276b00

FName __cdecl UOptimusGroomAttributeReadDataInterface::GetGroomAttributeName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x12,L"GroomAttributeName",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetHLSL @ 14e2774b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomAttributeReadDataInterface::GetHLSL
          (UOptimusGroomAttributeReadDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e278490

void __thiscall
UOptimusGroomAttributeReadDataInterface::GetPermutations
          (UOptimusGroomAttributeReadDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  return;
}

// GetPinDefinitions @ 14e278570

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomAttributeReadDataInterface::GetPinDefinitions
          (UOptimusGroomAttributeReadDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EOptimusGroomExecDomain EVar1;
  EOptimusGroomAttributeTypes EVar2;
  FOptimusCDIPinDefinition *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  FString *pFVar11;
  FName FVar12;
  FName FVar13;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_6b8;
  FName local_6a8;
  FString local_6a0;
  FName local_690;
  undefined8 local_688;
  uint local_680;
  undefined1 local_67c;
  FName local_678;
  FString local_670;
  FString local_660;
  FString local_650;
  FOptimusCDIPinDefinition local_640;
  FOptimusCDIPinDefinition local_608;
  FOptimusCDIPinDefinition local_5d0;
  FOptimusCDIPinDefinition local_598;
  FOptimusCDIPinDefinition local_560;
  FOptimusCDIPinDefinition local_528;
  FOptimusCDIPinDefinition local_4f0;
  FOptimusCDIPinDefinition local_4b8;
  FOptimusCDIPinDefinition local_480;
  FOptimusCDIPinDefinition local_448;
  FOptimusCDIPinDefinition local_410;
  FOptimusCDIPinDefinition local_3d8;
  FOptimusCDIPinDefinition local_3a0;
  FOptimusCDIPinDefinition local_368;
  FOptimusCDIPinDefinition local_330;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
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
  FString local_60 [2];
  
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_6b8,"ReadNumValues");
  EVar1 = this->GroomAttributeGroup;
  FVar12 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Points;
  if ((((EVar1 != ControlPoint) &&
       (FVar12 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Curves, EVar1 != Curve
       )) && (FVar12 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Edges,
             EVar1 != StrandsEdges)) &&
     (((FVar12 = UOptimusGroomAssetComponentSource::FStrandsExecutionDomains::Objects,
       EVar1 != StrandsObjects &&
       (FVar12 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points,
       EVar1 != GuidesPoints)) &&
      ((FVar12 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves,
       EVar1 != GuidesCurves &&
       ((FVar12 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Edges,
        EVar1 != GuidesEdges && (FVar12 = FVar13, EVar1 == GuidesObjects)))))))) {
    FVar12 = UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Objects;
  }
  EVar2 = this->GroomAttributeType;
  pFVar8 = ::FName::FName(&local_res10,"NumAttributeValues");
  iVar7 = local_6b8.Data.ArrayNum;
  FVar5.Data = local_6b8.Data.AllocatorInstance.Data;
  FVar13 = *pFVar8;
  local_670.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_6b8.Data.ArrayNum == 0) {
    local_670.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_6b8.Data.ArrayNum,0,(ForAnyElementType *)&local_670,local_6b8.Data.ArrayNum
               ,&local_670.Data.ArrayMax);
    memcpy(local_670.Data.AllocatorInstance.Data,FVar5.Data,(longlong)iVar7 * 2);
  }
  pFVar8 = ::FName::FName(&local_res18,"NumAttributeValues");
  local_6a8 = *pFVar8;
  ::FString::FString(&local_6a0,&local_670);
  local_690.ComparisonIndex.Value = 0;
  local_690.Number = 0;
  local_688 = 0;
  local_680 = 1;
  local_67c = 0;
  local_678 = FVar13;
  if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_670.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar8 <= &local_6a8) &&
      (&local_6a8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
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
  *pFVar8 = local_6a8;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_6a0.Data.AllocatorInstance.Data;
  local_6a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_6a0.Data.ArrayNum;
  pFVar8[2].Number = local_6a0.Data.ArrayMax;
  local_6a0.Data.ArrayNum = 0;
  local_6a0.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_690;
  local_690 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_688;
  pFVar8[4].Number = local_688._4_4_;
  local_688 = 0;
  pFVar8[5].ComparisonIndex.Value = local_680;
  *(undefined1 *)&pFVar8[5].Number = local_67c;
  pFVar8[6] = local_678;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_690 != (FName)0x0) {
    FMemory::Free((void *)local_690);
  }
  if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
  }
  if (EVar2 == Bool) {
    pFVar8 = ::FName::FName(&local_res20,"ValueTypedData");
    FVar5.Data = local_6b8.Data.AllocatorInstance.Data;
    FVar13 = *pFVar8;
    local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_6b8.Data.ArrayNum == 0) {
      local_660.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6b8.Data.ArrayNum,0,(ForAnyElementType *)&local_660,
                 local_6b8.Data.ArrayNum,&local_660.Data.ArrayMax);
      memcpy(local_660.Data.AllocatorInstance.Data,FVar5.Data,(longlong)local_6b8.Data.ArrayNum * 2)
      ;
    }
    pFVar10 = ::FString::FString(&local_120,"ReadValueTypedBool");
    pFVar8 = ::FName::FName(&local_260,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_598,*pFVar8,pFVar10,FVar12,&local_660,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_598) && (&local_598 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_598.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_598.DataFunctionName.Data.AllocatorInstance.Data;
    local_598.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_598.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_598.DataFunctionName.Data.ArrayMax;
    local_598.DataFunctionName.Data.ArrayNum = 0;
    local_598.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_598.DataDimensions.AllocatorInstance.Data;
    local_598.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_598.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_598.DataDimensions.ArrayMax;
    local_598.DataDimensions.ArrayNum = 0;
    local_598.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_598.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_598.bMutable;
    pFVar8[6] = local_598.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_598.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_598.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_598.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_598.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Int) {
    pFVar8 = ::FName::FName(&local_258,"ValueTypedData");
    FVar5.Data = local_6b8.Data.AllocatorInstance.Data;
    FVar13 = *pFVar8;
    local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_6b8.Data.ArrayNum == 0) {
      local_650.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_6b8.Data.ArrayNum,0,(ForAnyElementType *)&local_650,
                 local_6b8.Data.ArrayNum,&local_650.Data.ArrayMax);
      memcpy(local_650.Data.AllocatorInstance.Data,FVar5.Data,(longlong)local_6b8.Data.ArrayNum * 2)
      ;
    }
    pFVar10 = ::FString::FString(&local_130,"ReadValueTypedInt");
    pFVar8 = ::FName::FName(&local_250,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_5d0,*pFVar8,pFVar10,FVar12,&local_650,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_5d0) && (&local_5d0 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_5d0.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_5d0.DataFunctionName.Data.AllocatorInstance.Data;
    local_5d0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_5d0.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_5d0.DataFunctionName.Data.ArrayMax;
    local_5d0.DataFunctionName.Data.ArrayNum = 0;
    local_5d0.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_5d0.DataDimensions.AllocatorInstance.Data;
    local_5d0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_5d0.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_5d0.DataDimensions.ArrayMax;
    local_5d0.DataDimensions.ArrayNum = 0;
    local_5d0.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_5d0.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_5d0.bMutable;
    pFVar8[6] = local_5d0.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_5d0.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_5d0.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_5d0.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_5d0.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == IntVector2) {
    pFVar8 = ::FName::FName(&local_248,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_140,&local_6b8);
    pFVar11 = ::FString::FString(&local_150,"ReadValueTypedInt2");
    pFVar8 = ::FName::FName(&local_240,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_608,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_608) && (&local_608 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_608.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_608.DataFunctionName.Data.AllocatorInstance.Data;
    local_608.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_608.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_608.DataFunctionName.Data.ArrayMax;
    local_608.DataFunctionName.Data.ArrayNum = 0;
    local_608.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_608.DataDimensions.AllocatorInstance.Data;
    local_608.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_608.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_608.DataDimensions.ArrayMax;
    local_608.DataDimensions.ArrayNum = 0;
    local_608.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_608.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_608.bMutable;
    pFVar8[6] = local_608.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_608.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_608.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_608.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_608.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == IntVector3) {
    pFVar8 = ::FName::FName(&local_238,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_180,&local_6b8);
    pFVar11 = ::FString::FString(&local_f0,"ReadValueTypedInt3");
    pFVar8 = ::FName::FName(&local_230,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_528,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_528) && (&local_528 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_528.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_528.DataFunctionName.Data.AllocatorInstance.Data;
    local_528.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_528.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_528.DataFunctionName.Data.ArrayMax;
    local_528.DataFunctionName.Data.ArrayNum = 0;
    local_528.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_528.DataDimensions.AllocatorInstance.Data;
    local_528.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_528.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_528.DataDimensions.ArrayMax;
    local_528.DataDimensions.ArrayNum = 0;
    local_528.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_528.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_528.bMutable;
    pFVar8[6] = local_528.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_528.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_528.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_528.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_528.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == IntVector4) {
    pFVar8 = ::FName::FName(&local_228,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_110,&local_6b8);
    pFVar11 = ::FString::FString(&local_100,"ReadValueTypedInt4");
    pFVar8 = ::FName::FName(&local_220,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_4f0,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_4f0) && (&local_4f0 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_4f0.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_4f0.DataFunctionName.Data.AllocatorInstance.Data;
    local_4f0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_4f0.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_4f0.DataFunctionName.Data.ArrayMax;
    local_4f0.DataFunctionName.Data.ArrayNum = 0;
    local_4f0.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_4f0.DataDimensions.AllocatorInstance.Data;
    local_4f0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_4f0.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_4f0.DataDimensions.ArrayMax;
    local_4f0.DataDimensions.ArrayNum = 0;
    local_4f0.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_4f0.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_4f0.bMutable;
    pFVar8[6] = local_4f0.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_4f0.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_4f0.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_4f0.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_4f0.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Uint) {
    pFVar8 = ::FName::FName(&local_268,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_e0,&local_6b8);
    pFVar11 = ::FString::FString(&local_d0,"ReadValueTypedUint");
    pFVar8 = ::FName::FName(&local_218,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_640,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_640) && (&local_640 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_640.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_640.DataFunctionName.Data.AllocatorInstance.Data;
    local_640.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_640.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_640.DataFunctionName.Data.ArrayMax;
    local_640.DataFunctionName.Data.ArrayNum = 0;
    local_640.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_640.DataDimensions.AllocatorInstance.Data;
    local_640.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_640.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_640.DataDimensions.ArrayMax;
    local_640.DataDimensions.ArrayNum = 0;
    local_640.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_640.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_640.bMutable;
    pFVar8[6] = local_640.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_640.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_640.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_640.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_640.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Float) {
    pFVar8 = ::FName::FName(&local_2f8,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_c0,&local_6b8);
    pFVar11 = ::FString::FString(&local_b0,"ReadValueTypedFloat");
    pFVar8 = ::FName::FName(&local_2f0,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_4b8,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_4b8) && (&local_4b8 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_4b8.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_4b8.DataFunctionName.Data.AllocatorInstance.Data;
    local_4b8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_4b8.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_4b8.DataFunctionName.Data.ArrayMax;
    local_4b8.DataFunctionName.Data.ArrayNum = 0;
    local_4b8.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_4b8.DataDimensions.AllocatorInstance.Data;
    local_4b8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_4b8.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_4b8.DataDimensions.ArrayMax;
    local_4b8.DataDimensions.ArrayNum = 0;
    local_4b8.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_4b8.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_4b8.bMutable;
    pFVar8[6] = local_4b8.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_4b8.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_4b8.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_4b8.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_4b8.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Vector2) {
    pFVar8 = ::FName::FName(&local_2e8,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_a0,&local_6b8);
    pFVar11 = ::FString::FString(&local_90,"ReadValueTypedFloat2");
    pFVar8 = ::FName::FName(&local_2e0,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_480,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_480) && (&local_480 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_480.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_480.DataFunctionName.Data.AllocatorInstance.Data;
    local_480.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_480.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_480.DataFunctionName.Data.ArrayMax;
    local_480.DataFunctionName.Data.ArrayNum = 0;
    local_480.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_480.DataDimensions.AllocatorInstance.Data;
    local_480.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_480.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_480.DataDimensions.ArrayMax;
    local_480.DataDimensions.ArrayNum = 0;
    local_480.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_480.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_480.bMutable;
    pFVar8[6] = local_480.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_480.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_480.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_480.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_480.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Vector3) {
    pFVar8 = ::FName::FName(&local_2d8,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_80,&local_6b8);
    pFVar11 = ::FString::FString(&local_70,"ReadValueTypedFloat3");
    pFVar8 = ::FName::FName(&local_2d0,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_448,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_448) && (&local_448 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_448.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_448.DataFunctionName.Data.AllocatorInstance.Data;
    local_448.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_448.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_448.DataFunctionName.Data.ArrayMax;
    local_448.DataFunctionName.Data.ArrayNum = 0;
    local_448.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_448.DataDimensions.AllocatorInstance.Data;
    local_448.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_448.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_448.DataDimensions.ArrayMax;
    local_448.DataDimensions.ArrayNum = 0;
    local_448.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_448.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_448.bMutable;
    pFVar8[6] = local_448.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_448.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_448.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_448.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_448.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Vector4) {
    pFVar8 = ::FName::FName(&local_2c8,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_210,&local_6b8);
    pFVar11 = ::FString::FString(&local_200,"ReadValueTypedFloat4");
    pFVar8 = ::FName::FName(&local_2c0,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_410,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_410) && (&local_410 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_410.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_410.DataFunctionName.Data.AllocatorInstance.Data;
    local_410.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_410.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_410.DataFunctionName.Data.ArrayMax;
    local_410.DataFunctionName.Data.ArrayNum = 0;
    local_410.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_410.DataDimensions.AllocatorInstance.Data;
    local_410.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_410.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_410.DataDimensions.ArrayMax;
    local_410.DataDimensions.ArrayNum = 0;
    local_410.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_410.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_410.bMutable;
    pFVar8[6] = local_410.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_410.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_410.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_410.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_410.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == LinearColor) {
    pFVar8 = ::FName::FName(&local_2b8,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_1f0,&local_6b8);
    pFVar11 = ::FString::FString(&local_1e0,"ReadValueTypedFloat4");
    pFVar8 = ::FName::FName(&local_2b0,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_3d8,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_3d8) && (&local_3d8 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_3d8.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_3d8.DataFunctionName.Data.AllocatorInstance.Data;
    local_3d8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_3d8.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_3d8.DataFunctionName.Data.ArrayMax;
    local_3d8.DataFunctionName.Data.ArrayNum = 0;
    local_3d8.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_3d8.DataDimensions.AllocatorInstance.Data;
    local_3d8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_3d8.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_3d8.DataDimensions.ArrayMax;
    local_3d8.DataDimensions.ArrayNum = 0;
    local_3d8.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_3d8.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_3d8.bMutable;
    pFVar8[6] = local_3d8.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_3d8.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_3d8.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_3d8.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_3d8.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Quat) {
    pFVar8 = ::FName::FName(&local_2a8,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_1d0,&local_6b8);
    pFVar11 = ::FString::FString(&local_1c0,"ReadValueTypedFloat4");
    pFVar8 = ::FName::FName(&local_2a0,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_3a0,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_3a0) && (&local_3a0 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_3a0.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_3a0.DataFunctionName.Data.AllocatorInstance.Data;
    local_3a0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_3a0.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_3a0.DataFunctionName.Data.ArrayMax;
    local_3a0.DataFunctionName.Data.ArrayNum = 0;
    local_3a0.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_3a0.DataDimensions.AllocatorInstance.Data;
    local_3a0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_3a0.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_3a0.DataDimensions.ArrayMax;
    local_3a0.DataDimensions.ArrayNum = 0;
    local_3a0.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_3a0.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_3a0.bMutable;
    pFVar8[6] = local_3a0.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_3a0.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_3a0.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_3a0.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_3a0.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Rotator) {
    pFVar8 = ::FName::FName(&local_298,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_1b0,&local_6b8);
    pFVar11 = ::FString::FString(&local_1a0,"ReadValueTypedFloat3");
    pFVar8 = ::FName::FName(&local_290,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_368,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_368) && (&local_368 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_368.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_368.DataFunctionName.Data.AllocatorInstance.Data;
    local_368.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_368.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_368.DataFunctionName.Data.ArrayMax;
    local_368.DataFunctionName.Data.ArrayNum = 0;
    local_368.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_368.DataDimensions.AllocatorInstance.Data;
    local_368.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_368.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_368.DataDimensions.ArrayMax;
    local_368.DataDimensions.ArrayNum = 0;
    local_368.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_368.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_368.bMutable;
    pFVar8[6] = local_368.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_368.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_368.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_368.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_368.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else if (EVar2 == Transform) {
    pFVar8 = ::FName::FName(&local_288,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_190,&local_6b8);
    pFVar11 = ::FString::FString(local_60,"ReadValueTypedFloat4x4");
    pFVar8 = ::FName::FName(&local_280,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_330,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_330) && (&local_330 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_330.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_330.DataFunctionName.Data.AllocatorInstance.Data;
    local_330.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_330.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_330.DataFunctionName.Data.ArrayMax;
    local_330.DataFunctionName.Data.ArrayNum = 0;
    local_330.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_330.DataDimensions.AllocatorInstance.Data;
    local_330.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_330.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_330.DataDimensions.ArrayMax;
    local_330.DataDimensions.ArrayNum = 0;
    local_330.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_330.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_330.bMutable;
    pFVar8[6] = local_330.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_330.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_330.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_330.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_330.DataFunctionName.Data.AllocatorInstance;
    }
  }
  else {
    if (EVar2 != Matrix3x4) goto LAB_14e27a3d2;
    pFVar8 = ::FName::FName(&local_278,"ValueTypedData");
    FVar13 = *pFVar8;
    pFVar10 = ::FString::FString(&local_170,&local_6b8);
    pFVar11 = ::FString::FString(&local_160,"ReadValueTypedFloat3x4");
    pFVar8 = ::FName::FName(&local_270,"ValueTypedData");
    FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
              (&local_560,*pFVar8,pFVar11,FVar12,pFVar10,false,FVar13);
    pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= &local_560) && (&local_560 < pFVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
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
    *pFVar8 = local_560.PinName;
    pFVar8[1].ComparisonIndex = 0;
    pFVar8[1].Number = 0;
    pFVar8[1] = (FName)local_560.DataFunctionName.Data.AllocatorInstance.Data;
    local_560.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[2].ComparisonIndex.Value = local_560.DataFunctionName.Data.ArrayNum;
    pFVar8[2].Number = local_560.DataFunctionName.Data.ArrayMax;
    local_560.DataFunctionName.Data.ArrayNum = 0;
    local_560.DataFunctionName.Data.ArrayMax = 0;
    pFVar8[3].ComparisonIndex = 0;
    pFVar8[3].Number = 0;
    pFVar8[3] = (FName)local_560.DataDimensions.AllocatorInstance.Data;
    local_560.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8[4].ComparisonIndex.Value = local_560.DataDimensions.ArrayNum;
    pFVar8[4].Number = local_560.DataDimensions.ArrayMax;
    local_560.DataDimensions.ArrayNum = 0;
    local_560.DataDimensions.ArrayMax = 0;
    pFVar8[5].ComparisonIndex.Value = local_560.DomainMultiplier;
    *(bool *)&pFVar8[5].Number = local_560.bMutable;
    pFVar8[6] = local_560.DisplayName;
    DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
    FVar12 = (FName)local_560.DataFunctionName.Data.AllocatorInstance;
    if ((FName)local_560.DataDimensions.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_560.DataDimensions.AllocatorInstance.Data);
      FVar12 = (FName)local_560.DataFunctionName.Data.AllocatorInstance;
    }
  }
  if (FVar12 != (FName)0x0) {
    FMemory::Free((void *)FVar12);
  }
LAB_14e27a3d2:
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e282650

UClass * __cdecl UOptimusGroomAttributeReadDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomAttributeReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomAttributeReadDataInterface,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomAttributeReadDataInterface>
               ,InternalVTableHelperCtorCaller<UOptimusGroomAttributeReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomAttributeReadDataInterface.InnerSingleton;
}

// GetPropertyPinDefinitions @ 14e283550

/* WARNING: Removing unreachable block (ram,0x00014e2836e4) */

TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomAttributeReadDataInterface::GetPropertyPinDefinitions
          (UOptimusGroomAttributeReadDataInterface *this,
          TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOptimusDataTypeRegistry *this_00;
  FFieldClass *pFVar4;
  FName *pFVar5;
  TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *pTVar6;
  FName local_res10;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FName local_48;
  undefined1 local_40 [16];
  FName local_30;
  FName FStack_28;
  FName local_20;
  undefined8 local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = FOptimusDataTypeRegistry::Get();
  pFVar4 = FNameProperty::StaticClass();
  FOptimusDataTypeRegistry::FindType(this_00,&local_68,pFVar4);
  pFVar5 = ::FName::FName(&local_res10,0x12,L"GroomAttributeName",FNAME_Add);
  local_48 = *pFVar5;
  local_58.Object = local_68.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_40,&local_58);
  pFVar5 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= &local_48) &&
      (&local_48 < pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 7)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x38);
  *pFVar5 = local_48;
  pFVar5[1].ComparisonIndex = (FNameEntryId)local_40._0_4_;
  pFVar5[1].Number = local_40._4_4_;
  pFVar5[2].ComparisonIndex = (FNameEntryId)local_40._8_4_;
  pFVar5[2].Number = local_40._12_4_;
  pFVar5[3] = local_30;
  pFVar5[4] = FStack_28;
  pFVar5[5].ComparisonIndex = 0;
  pFVar5[5].Number = 0;
  pFVar5[5] = local_20;
  pFVar5[6].ComparisonIndex.Value = (uint)local_18;
  pFVar5[6].Number = local_18._4_4_;
  local_18 = 0;
  local_20.ComparisonIndex.Value = 0;
  local_20.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetRequiredComponentClass @ 14e284450

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomAttributeReadDataInterface::GetRequiredComponentClass
          (UOptimusGroomAttributeReadDataInterface *this)

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

// GetShaderHash @ 14e284700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomAttributeReadDataInterface::GetShaderHash
          (UOptimusGroomAttributeReadDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e284940

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusGroomAttributeReadDataInterface::GetShaderParameters
          (UOptimusGroomAttributeReadDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FOptimusGroomAttributeReadParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FOptimusGroomAttributeReadParameters",L"FOptimusGroomAttributeReadParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomAttributeRead.cpp"
                 ,0xdc,0x20,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomAttributeReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0x20;
  return;
}

// GetShaderVirtualPath @ 14e285940

wchar_t * __thiscall
UOptimusGroomAttributeReadDataInterface::GetShaderVirtualPath
          (UOptimusGroomAttributeReadDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e285a70

void __thiscall
UOptimusGroomAttributeReadDataInterface::GetSupportedInputs
          (UOptimusGroomAttributeReadDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumValues");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedInt");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedInt2");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedInt3");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Int,3,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedInt4");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Int,4,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedUint");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedBool");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Bool,0,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedFloat");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedFloat2");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedFloat3");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedFloat4");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedFloat4x4");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,4,4);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadValueTypedFloat3x4");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,4);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// RegisterPropertyChangeDelegatesForOwningNode @ 14e289430

void __thiscall
UOptimusGroomAttributeReadDataInterface::RegisterPropertyChangeDelegatesForOwningNode
          (UOptimusGroomAttributeReadDataInterface *this,UOptimusNode *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UOptimusNode *local_res10;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  if (param_1 != (UOptimusNode *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPinDefinitionChangedDelegate,(FWriteAccessScope *)&local_28);
    local_10 = &(this->OnPinDefinitionChangedDelegate).field_0x8;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
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
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// StaticRegisterNativesUOptimusGroomAttributeReadDataInterface @ 14e289730

void __cdecl
UOptimusGroomAttributeReadDataInterface::
StaticRegisterNativesUOptimusGroomAttributeReadDataInterface(void)

{
  return;
}

