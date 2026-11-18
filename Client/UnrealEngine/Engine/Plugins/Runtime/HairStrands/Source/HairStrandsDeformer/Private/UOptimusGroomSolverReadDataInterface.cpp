// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 21

// StaticClass @ 14e257d20

UClass * __cdecl UOptimusGroomSolverReadDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomSolverReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomSolverReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomSolverReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomSolverReadDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomSolverReadDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomSolverReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomSolverReadDataInterface.InnerSingleton;
}

// UOptimusGroomSolverReadDataInterface @ 14e26af60

UOptimusGroomSolverReadDataInterface * __thiscall
UOptimusGroomSolverReadDataInterface::UOptimusGroomSolverReadDataInterface
          (UOptimusGroomSolverReadDataInterface *this,FVTableHelper *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomSolverReadDataInterface__6B_;
  (this->ResetSimulationTrigger).ComparisonIndex = 0;
  (this->ResetSimulationTrigger).Number = 0;
  return this;
}

// UOptimusGroomSolverReadDataInterface @ 14e26af90

UOptimusGroomSolverReadDataInterface * __thiscall
UOptimusGroomSolverReadDataInterface::UOptimusGroomSolverReadDataInterface
          (UOptimusGroomSolverReadDataInterface *this,FObjectInitializer *param_1)

{
  UOptimusComputeDataInterface::UOptimusComputeDataInterface
            ((UOptimusComputeDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusGroomSolverReadDataInterface__6B_;
  (this->ResetSimulationTrigger).ComparisonIndex = 0;
  (this->ResetSimulationTrigger).Number = 0;
  return this;
}

// ~UOptimusGroomSolverReadDataInterface @ 14e26b4b0

void __thiscall
UOptimusGroomSolverReadDataInterface::~UOptimusGroomSolverReadDataInterface
          (UOptimusGroomSolverReadDataInterface *this)

{
  this->_padding_ = (longlong)&___7UOptimusGroomSolverReadDataInterface__6B_;
  UOptimusComputeDataInterface::~UOptimusComputeDataInterface((UOptimusComputeDataInterface *)this);
  return;
}

// CanSupportUnifiedDispatch @ 14e26f000

bool __thiscall
UOptimusGroomSolverReadDataInterface::CanSupportUnifiedDispatch
          (UOptimusGroomSolverReadDataInterface *this)

{
  return true;
}

// CreateDataProvider @ 14e26f5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UComputeDataProvider * __thiscall
UOptimusGroomSolverReadDataInterface::CreateDataProvider
          (UOptimusGroomSolverReadDataInterface *this,TObjectPtr<UObject> param_1,ulong64 param_2,
          ulong64 param_3)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  UOptimusGroomSolverReadDataInterface *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UOptimusGroomSolverReadDataProvider::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (*(longlong *)param_1.field0_0x0 != 0) {
    pUVar3 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1.field0_0x0,pUVar3);
    if (bVar1) {
      pUVar4 = *(UObject **)param_1.field0_0x0;
      goto LAB_14e26f69f;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14e26f69f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&pUVar2[1].field_0x8 = pUVar4;
  local_b8[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UOptimusGroomSolverReadDataInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar2[1].field_0x18,(FObjectPtr)local_b8);
  return (UComputeDataProvider *)pUVar2;
}

// GetClassName @ 14e2740e0

wchar_t * __thiscall
UOptimusGroomSolverReadDataInterface::GetClassName(UOptimusGroomSolverReadDataInterface *this)

{
  return L"GroomSolverRead";
}

// GetDisplayName @ 14e276700

FString * __thiscall
UOptimusGroomSolverReadDataInterface::GetDisplayName
          (UOptimusGroomSolverReadDataInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Groom Solver");
  return __return_storage_ptr__;
}

// GetHLSL @ 14e277cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomSolverReadDataInterface::GetHLSL
          (UOptimusGroomSolverReadDataInterface *this,FString *param_1,FString *param_2)

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

// GetPermutations @ 14e278510

void __thiscall
UOptimusGroomSolverReadDataInterface::GetPermutations
          (UOptimusGroomSolverReadDataInterface *this,FComputeKernelPermutationVector *param_1)

{
  return;
}

// GetPinDefinitions @ 14e27c8d0

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomSolverReadDataInterface::GetPinDefinitions
          (UOptimusGroomSolverReadDataInterface *this,
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
  FName local_7b8;
  FString local_7b0;
  FName local_7a0;
  undefined8 local_798;
  uint local_790;
  undefined1 local_78c;
  FName local_788;
  FName local_780;
  FString local_778;
  FName local_768;
  undefined8 local_760;
  uint local_758;
  undefined1 local_754;
  FName local_750;
  FName local_748;
  FString local_740;
  FName local_730;
  undefined8 local_728;
  uint local_720;
  undefined1 local_71c;
  FName local_718;
  FName local_710;
  FString local_708;
  FName local_6f8;
  undefined8 local_6f0;
  uint local_6e8;
  undefined1 local_6e4;
  FName local_6e0;
  FName local_6d8;
  FString local_6d0;
  FName local_6c0;
  undefined8 local_6b8;
  uint local_6b0;
  undefined1 local_6ac;
  FName local_6a8;
  FName local_6a0;
  FString local_698;
  FName local_688;
  undefined8 local_680;
  uint local_678;
  undefined1 local_674;
  FName local_670;
  FName local_668;
  FString local_660;
  FName local_650;
  undefined8 local_648;
  uint local_640;
  undefined1 local_63c;
  FName local_638;
  FName local_630;
  FString local_628;
  FName local_618;
  undefined8 local_610;
  uint local_608;
  undefined1 local_604;
  FName local_600;
  FName local_5f8;
  FString local_5f0;
  FName local_5e0;
  undefined8 local_5d8;
  uint local_5d0;
  undefined1 local_5cc;
  FName local_5c8;
  FOptimusCDIPinDefinition local_5c0;
  FOptimusCDIPinDefinition local_588;
  FOptimusCDIPinDefinition local_550;
  FOptimusCDIPinDefinition local_518;
  FOptimusCDIPinDefinition local_4e0;
  FOptimusCDIPinDefinition local_4a8;
  FOptimusCDIPinDefinition local_470;
  FOptimusCDIPinDefinition local_438;
  FOptimusCDIPinDefinition local_400;
  FOptimusCDIPinDefinition local_3c8;
  FOptimusCDIPinDefinition local_390;
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
  FString local_230;
  FString local_220;
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
  FString local_60;
  FString local_50;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar12 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      SolverObjects = UOptimusGroomSolverComponentSource::FSolverExecutionDomains::Objects;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar12 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      SolverPoints = UOptimusGroomSolverComponentSource::FSolverExecutionDomains::Points;
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar12 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      SolverCurves = UOptimusGroomSolverComponentSource::FSolverExecutionDomains::Curves;
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar12 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      DynamicPoints = UOptimusGroomSolverComponentSource::FDynamicExecutionDomains::Points;
      _Init_thread_footer(&::_TSS3);
    }
  }
  if (*piVar12 < ::_TSS4) {
    _Init_thread_header(&::_TSS4);
    if (::_TSS4 == -1) {
      DynamicCurves = UOptimusGroomSolverComponentSource::FDynamicExecutionDomains::Curves;
      _Init_thread_footer(&::_TSS4);
    }
  }
  if (*piVar12 < ::_TSS5) {
    _Init_thread_header(&::_TSS5);
    if (::_TSS5 == -1) {
      KinematicPoints = UOptimusGroomSolverComponentSource::FKinematicExecutionDomains::Points;
      _Init_thread_footer(&::_TSS5);
    }
  }
  if (*piVar12 < ::_TSS6) {
    _Init_thread_header(&::_TSS6);
    if (::_TSS6 == -1) {
      KinematicCurves = UOptimusGroomSolverComponentSource::FKinematicExecutionDomains::Curves;
      _Init_thread_footer(&::_TSS6);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = ::FName::FName(&local_res10,"NumSolverPoints");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_130,"ReadNumSolverPoints");
  pFVar8 = ::FName::FName(&local_res18,"NumSolverPoints");
  local_6a0 = *pFVar8;
  ::FString::FString(&local_698,pFVar9);
  local_688.ComparisonIndex.Value = 0;
  local_688.Number = 0;
  local_680 = 0;
  local_678 = 1;
  local_674 = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_670 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_6a0) &&
     (&local_6a0 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_6a0;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_698.Data.AllocatorInstance.Data;
  local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_698.Data.ArrayNum;
  pFVar8[2].Number = local_698.Data.ArrayMax;
  local_698.Data.ArrayNum = 0;
  local_698.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_688;
  local_688 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_680;
  pFVar8[4].Number = local_680._4_4_;
  local_680 = 0;
  pFVar8[5].ComparisonIndex.Value = local_678;
  *(undefined1 *)&pFVar8[5].Number = local_674;
  pFVar8[6] = local_670;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_688 != (FName)0x0) {
    FMemory::Free((void *)local_688);
  }
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_res20,"NumSolverCurves");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_140,"ReadNumSolverCurves");
  pFVar8 = ::FName::FName(&local_290,"NumSolverCurves");
  local_6d8 = *pFVar8;
  ::FString::FString(&local_6d0,pFVar9);
  local_6c0.ComparisonIndex.Value = 0;
  local_6c0.Number = 0;
  local_6b8 = 0;
  local_6b0 = 1;
  local_6ac = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_6a8 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_6d8) &&
     (&local_6d8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_6d8;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_6d0.Data.AllocatorInstance.Data;
  local_6d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_6d0.Data.ArrayNum;
  pFVar8[2].Number = local_6d0.Data.ArrayMax;
  local_6d0.Data.ArrayNum = 0;
  local_6d0.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_6c0;
  local_6c0 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_6b8;
  pFVar8[4].Number = local_6b8._4_4_;
  local_6b8 = 0;
  pFVar8[5].ComparisonIndex.Value = local_6b0;
  *(undefined1 *)&pFVar8[5].Number = local_6ac;
  pFVar8[6] = local_6a8;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_6c0 != (FName)0x0) {
    FMemory::Free((void *)local_6c0);
  }
  if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_288,"NumSolverObjects");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_150,"ReadNumSolverObjects");
  pFVar8 = ::FName::FName(&local_280,"NumSolverObjects");
  local_710 = *pFVar8;
  ::FString::FString(&local_708,pFVar9);
  local_6f8.ComparisonIndex.Value = 0;
  local_6f8.Number = 0;
  local_6f0 = 0;
  local_6e8 = 1;
  local_6e4 = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_6e0 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_710) &&
     (&local_710 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_710;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_708.Data.AllocatorInstance.Data;
  local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_708.Data.ArrayNum;
  pFVar8[2].Number = local_708.Data.ArrayMax;
  local_708.Data.ArrayNum = 0;
  local_708.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_6f8;
  local_6f8 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_6f0;
  pFVar8[4].Number = local_6f0._4_4_;
  local_6f0 = 0;
  pFVar8[5].ComparisonIndex.Value = local_6e8;
  *(undefined1 *)&pFVar8[5].Number = local_6e4;
  pFVar8[6] = local_6e0;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_6f8 != (FName)0x0) {
    FMemory::Free((void *)local_6f8);
  }
  if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_278,"NumDynamicPoints");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_160,"ReadNumDynamicPoints");
  pFVar8 = ::FName::FName(&local_270,"NumDynamicPoints");
  local_748 = *pFVar8;
  ::FString::FString(&local_740,pFVar9);
  local_730.ComparisonIndex.Value = 0;
  local_730.Number = 0;
  local_728 = 0;
  local_720 = 1;
  local_71c = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_718 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_748) &&
     (&local_748 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_748;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_740.Data.AllocatorInstance.Data;
  local_740.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_740.Data.ArrayNum;
  pFVar8[2].Number = local_740.Data.ArrayMax;
  local_740.Data.ArrayNum = 0;
  local_740.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_730;
  local_730 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_728;
  pFVar8[4].Number = local_728._4_4_;
  local_728 = 0;
  pFVar8[5].ComparisonIndex.Value = local_720;
  *(undefined1 *)&pFVar8[5].Number = local_71c;
  pFVar8[6] = local_718;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_730 != (FName)0x0) {
    FMemory::Free((void *)local_730);
  }
  if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_740.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_268,"NumDynamicCurves");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_170,"ReadNumDynamicCurves");
  pFVar8 = ::FName::FName(&local_260,"NumDynamicCurves");
  local_780 = *pFVar8;
  ::FString::FString(&local_778,pFVar9);
  local_768.ComparisonIndex.Value = 0;
  local_768.Number = 0;
  local_760 = 0;
  local_758 = 1;
  local_754 = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_750 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_780) &&
     (&local_780 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_780;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_778.Data.AllocatorInstance.Data;
  local_778.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_778.Data.ArrayNum;
  pFVar8[2].Number = local_778.Data.ArrayMax;
  local_778.Data.ArrayNum = 0;
  local_778.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_768;
  local_768 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_760;
  pFVar8[4].Number = local_760._4_4_;
  local_760 = 0;
  pFVar8[5].ComparisonIndex.Value = local_758;
  *(undefined1 *)&pFVar8[5].Number = local_754;
  pFVar8[6] = local_750;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_768 != (FName)0x0) {
    FMemory::Free((void *)local_768);
  }
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_258,"NumKinematicPoints");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_180,"ReadNumKinematicPoints");
  pFVar8 = ::FName::FName(&local_250,"NumKinematicPoints");
  local_7b8 = *pFVar8;
  ::FString::FString(&local_7b0,pFVar9);
  local_7a0.ComparisonIndex.Value = 0;
  local_7a0.Number = 0;
  local_798 = 0;
  local_790 = 1;
  local_78c = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_788 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_7b8) &&
     (&local_7b8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_7b8;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_7b0.Data.AllocatorInstance.Data;
  local_7b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_7b0.Data.ArrayNum;
  pFVar8[2].Number = local_7b0.Data.ArrayMax;
  local_7b0.Data.ArrayNum = 0;
  local_7b0.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_7a0;
  local_7a0 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_798;
  pFVar8[4].Number = local_798._4_4_;
  local_798 = 0;
  pFVar8[5].ComparisonIndex.Value = local_790;
  *(undefined1 *)&pFVar8[5].Number = local_78c;
  pFVar8[6] = local_788;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_7a0 != (FName)0x0) {
    FMemory::Free((void *)local_7a0);
  }
  if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_248,"NumKinematicCurves");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1b0,"ReadNumKinematicCurves");
  pFVar8 = ::FName::FName(&local_240,"NumKinematicCurves");
  local_630 = *pFVar8;
  ::FString::FString(&local_628,pFVar9);
  local_618.ComparisonIndex.Value = 0;
  local_618.Number = 0;
  local_610 = 0;
  local_608 = 1;
  local_604 = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_600 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_630) &&
     (&local_630 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_630;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_628.Data.AllocatorInstance.Data;
  local_628.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_628.Data.ArrayNum;
  pFVar8[2].Number = local_628.Data.ArrayMax;
  local_628.Data.ArrayNum = 0;
  local_628.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_618;
  local_618 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_610;
  pFVar8[4].Number = local_610._4_4_;
  local_610 = 0;
  pFVar8[5].ComparisonIndex.Value = local_608;
  *(undefined1 *)&pFVar8[5].Number = local_604;
  pFVar8[6] = local_600;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_618 != (FName)0x0) {
    FMemory::Free((void *)local_618);
  }
  if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_298,"BoundingBoxMin");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_100,"ReadBoundingBoxMin");
  pFVar8 = ::FName::FName(&local_238,"BoundingBoxMin");
  local_5f8 = *pFVar8;
  ::FString::FString(&local_5f0,pFVar9);
  local_5e0.ComparisonIndex.Value = 0;
  local_5e0.Number = 0;
  local_5d8 = 0;
  local_5d0 = 1;
  local_5cc = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_5c8 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_5f8) &&
     (&local_5f8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_5f8;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_5f0.Data.AllocatorInstance.Data;
  local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_5f0.Data.ArrayNum;
  pFVar8[2].Number = local_5f0.Data.ArrayMax;
  local_5f0.Data.ArrayNum = 0;
  local_5f0.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_5e0;
  local_5e0 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_5d8;
  pFVar8[4].Number = local_5d8._4_4_;
  local_5d8 = 0;
  pFVar8[5].ComparisonIndex.Value = local_5d0;
  *(undefined1 *)&pFVar8[5].Number = local_5cc;
  pFVar8[6] = local_5c8;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_5e0 != (FName)0x0) {
    FMemory::Free((void *)local_5e0);
  }
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_358,"BoundingBoxMax");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_120,"ReadBoundingBoxMax");
  pFVar8 = ::FName::FName(&local_350,"BoundingBoxMax");
  local_668 = *pFVar8;
  ::FString::FString(&local_660,pFVar9);
  local_650.ComparisonIndex.Value = 0;
  local_650.Number = 0;
  local_648 = 0;
  local_640 = 1;
  local_63c = 1;
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  local_638 = FVar1;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar8 <= &local_668) &&
     (&local_668 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 7)) {
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
  *pFVar8 = local_668;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_660.Data.AllocatorInstance.Data;
  local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_660.Data.ArrayNum;
  pFVar8[2].Number = local_660.Data.ArrayMax;
  local_660.Data.ArrayNum = 0;
  local_660.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = local_650;
  local_650 = (FName)0x0;
  pFVar8[4].ComparisonIndex.Value = (uint)local_648;
  pFVar8[4].Number = local_648._4_4_;
  local_648 = 0;
  pFVar8[5].ComparisonIndex.Value = local_640;
  *(undefined1 *)&pFVar8[5].Number = local_63c;
  pFVar8[6] = local_638;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_650 != (FName)0x0) {
    FMemory::Free((void *)local_650);
  }
  if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_348,"ObjectPointOffset");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_110,"ReadNumSolverObjects");
  FVar5 = SolverObjects;
  pFVar11 = ::FString::FString(&local_f0,"ReadObjectPointOffset");
  pFVar8 = ::FName::FName(&local_340,"ObjectPointOffset");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_588,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_588) && (&local_588 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_588.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_588.DataFunctionName.Data.AllocatorInstance.Data;
  local_588.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_588.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_588.DataFunctionName.Data.ArrayMax;
  local_588.DataFunctionName.Data.ArrayNum = 0;
  local_588.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_588.DataDimensions.AllocatorInstance.Data;
  local_588.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_588.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_588.DataDimensions.ArrayMax;
  local_588.DataDimensions.ArrayNum = 0;
  local_588.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_588.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_588.bMutable;
  pFVar8[6] = local_588.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_588.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.DataDimensions.AllocatorInstance.Data);
  }
  if (local_588.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_338,"ObjectNumPoints");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_e0,"ReadNumSolverObjects");
  FVar5 = SolverObjects;
  pFVar11 = ::FString::FString(&local_d0,"ReadObjectNumPoints");
  pFVar8 = ::FName::FName(&local_330,"ObjectNumPoints");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_550,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_550) && (&local_550 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_550.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_550.DataFunctionName.Data.AllocatorInstance.Data;
  local_550.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_550.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_550.DataFunctionName.Data.ArrayMax;
  local_550.DataFunctionName.Data.ArrayNum = 0;
  local_550.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_550.DataDimensions.AllocatorInstance.Data;
  local_550.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_550.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_550.DataDimensions.ArrayMax;
  local_550.DataDimensions.ArrayNum = 0;
  local_550.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_550.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_550.bMutable;
  pFVar8[6] = local_550.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_550.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.DataDimensions.AllocatorInstance.Data);
  }
  if (local_550.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_550.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_328,"ObjectCurveOffset");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_c0,"ReadNumSolverObjects");
  FVar5 = SolverObjects;
  pFVar11 = ::FString::FString(&local_b0,"ReadObjectCurveOffset");
  pFVar8 = ::FName::FName(&local_320,"ObjectCurveOffset");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_518,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_518) && (&local_518 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_518.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_518.DataFunctionName.Data.AllocatorInstance.Data;
  local_518.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_518.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_518.DataFunctionName.Data.ArrayMax;
  local_518.DataFunctionName.Data.ArrayNum = 0;
  local_518.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_518.DataDimensions.AllocatorInstance.Data;
  local_518.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_518.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_518.DataDimensions.ArrayMax;
  local_518.DataDimensions.ArrayNum = 0;
  local_518.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_518.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_518.bMutable;
  pFVar8[6] = local_518.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_518.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.DataDimensions.AllocatorInstance.Data);
  }
  if (local_518.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_318,"ObjectNumCurves");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_a0,"ReadNumSolverObjects");
  FVar5 = SolverObjects;
  pFVar11 = ::FString::FString(&local_90,"ReadObjectNumCurves");
  pFVar8 = ::FName::FName(&local_310,"ObjectNumCurves");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_4e0,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_4e0) && (&local_4e0 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_4e0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_4e0.DataFunctionName.Data.AllocatorInstance.Data;
  local_4e0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_4e0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_4e0.DataFunctionName.Data.ArrayMax;
  local_4e0.DataFunctionName.Data.ArrayNum = 0;
  local_4e0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_4e0.DataDimensions.AllocatorInstance.Data;
  local_4e0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_4e0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_4e0.DataDimensions.ArrayMax;
  local_4e0.DataDimensions.ArrayNum = 0;
  local_4e0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_4e0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_4e0.bMutable;
  pFVar8[6] = local_4e0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_4e0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_4e0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_308,"PointObjectIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_80,"ReadNumSolverPoints");
  FVar5 = SolverPoints;
  pFVar11 = ::FString::FString(&local_70,"ReadPointObjectIndex");
  pFVar8 = ::FName::FName(&local_300,"PointObjectIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_4a8,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_4a8) && (&local_4a8 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_4a8.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_4a8.DataFunctionName.Data.AllocatorInstance.Data;
  local_4a8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_4a8.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_4a8.DataFunctionName.Data.ArrayMax;
  local_4a8.DataFunctionName.Data.ArrayNum = 0;
  local_4a8.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_4a8.DataDimensions.AllocatorInstance.Data;
  local_4a8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_4a8.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_4a8.DataDimensions.ArrayMax;
  local_4a8.DataDimensions.ArrayNum = 0;
  local_4a8.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_4a8.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_4a8.bMutable;
  pFVar8[6] = local_4a8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_4a8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_4a8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2f8,"CurveObjectIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_60,"ReadNumSolverCurves");
  FVar5 = SolverCurves;
  pFVar11 = ::FString::FString(&local_230,"ReadCurveObjectIndex");
  pFVar8 = ::FName::FName(&local_2f0,"CurveObjectIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_470,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_470) && (&local_470 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_470.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_470.DataFunctionName.Data.AllocatorInstance.Data;
  local_470.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_470.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_470.DataFunctionName.Data.ArrayMax;
  local_470.DataFunctionName.Data.ArrayNum = 0;
  local_470.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_470.DataDimensions.AllocatorInstance.Data;
  local_470.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_470.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_470.DataDimensions.ArrayMax;
  local_470.DataDimensions.ArrayNum = 0;
  local_470.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_470.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_470.bMutable;
  pFVar8[6] = local_470.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_470.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.DataDimensions.AllocatorInstance.Data);
  }
  if (local_470.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2e8,"DynamicPointIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_220,"ReadNumDynamicPoints");
  FVar5 = DynamicPoints;
  pFVar11 = ::FString::FString(&local_210,"ReadDynamicPointIndex");
  pFVar8 = ::FName::FName(&local_2e0,"DynamicPointIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_438,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_438) && (&local_438 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_438.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_438.DataFunctionName.Data.AllocatorInstance.Data;
  local_438.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_438.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_438.DataFunctionName.Data.ArrayMax;
  local_438.DataFunctionName.Data.ArrayNum = 0;
  local_438.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_438.DataDimensions.AllocatorInstance.Data;
  local_438.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_438.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_438.DataDimensions.ArrayMax;
  local_438.DataDimensions.ArrayNum = 0;
  local_438.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_438.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_438.bMutable;
  pFVar8[6] = local_438.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_438.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.DataDimensions.AllocatorInstance.Data);
  }
  if (local_438.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2d8,"DynamicCurveIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_200,"ReadNumDynamicCurves");
  FVar5 = DynamicCurves;
  pFVar11 = ::FString::FString(&local_1f0,"ReadDynamicCurveIndex");
  pFVar8 = ::FName::FName(&local_2d0,"DynamicCurveIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_400,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_400) && (&local_400 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_400.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_400.DataFunctionName.Data.AllocatorInstance.Data;
  local_400.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_400.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_400.DataFunctionName.Data.ArrayMax;
  local_400.DataFunctionName.Data.ArrayNum = 0;
  local_400.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_400.DataDimensions.AllocatorInstance.Data;
  local_400.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_400.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_400.DataDimensions.ArrayMax;
  local_400.DataDimensions.ArrayNum = 0;
  local_400.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_400.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_400.bMutable;
  pFVar8[6] = local_400.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_400.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.DataDimensions.AllocatorInstance.Data);
  }
  if (local_400.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2c8,"KinematicPointIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1e0,"ReadNumKinematicPoints");
  FVar5 = KinematicPoints;
  pFVar11 = ::FString::FString(&local_1d0,"ReadKinematicPointIndex");
  pFVar8 = ::FName::FName(&local_2c0,"KinematicPointIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_3c8,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_3c8) && (&local_3c8 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_3c8.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_3c8.DataFunctionName.Data.AllocatorInstance.Data;
  local_3c8.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_3c8.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_3c8.DataFunctionName.Data.ArrayMax;
  local_3c8.DataFunctionName.Data.ArrayNum = 0;
  local_3c8.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_3c8.DataDimensions.AllocatorInstance.Data;
  local_3c8.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_3c8.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_3c8.DataDimensions.ArrayMax;
  local_3c8.DataDimensions.ArrayNum = 0;
  local_3c8.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_3c8.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_3c8.bMutable;
  pFVar8[6] = local_3c8.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_3c8.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.DataDimensions.AllocatorInstance.Data);
  }
  if (local_3c8.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2b8,"KinematicCurveIndex");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1c0,"ReadNumKinematicCurves");
  FVar5 = KinematicCurves;
  pFVar11 = ::FString::FString(&local_50,"ReadKinematicCurveIndex");
  pFVar8 = ::FName::FName(&local_2b0,"KinematicCurveIndex");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_390,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_390) && (&local_390 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_390.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_390.DataFunctionName.Data.AllocatorInstance.Data;
  local_390.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_390.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_390.DataFunctionName.Data.ArrayMax;
  local_390.DataFunctionName.Data.ArrayNum = 0;
  local_390.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_390.DataDimensions.AllocatorInstance.Data;
  local_390.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_390.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_390.DataDimensions.ArrayMax;
  local_390.DataDimensions.ArrayNum = 0;
  local_390.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_390.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_390.bMutable;
  pFVar8[6] = local_390.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_390.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.DataDimensions.AllocatorInstance.Data);
  }
  if (local_390.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.DataFunctionName.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_2a8,"ObjectDistanceLod");
  FVar1 = *pFVar8;
  pFVar9 = ::FString::FString(&local_1a0,"ReadObjectDistanceLod");
  FVar5 = SolverObjects;
  pFVar11 = ::FString::FString(&local_190,"ReadObjectDistanceLod");
  pFVar8 = ::FName::FName(&local_2a0,"ObjectDistanceLod");
  FOptimusCDIPinDefinition::FOptimusCDIPinDefinition
            (&local_5c0,*pFVar8,pFVar11,FVar5,pFVar9,true,FVar1);
  pFVar3 = (FOptimusCDIPinDefinition *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar3 <= &local_5c0) && (&local_5c0 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
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
  *pFVar8 = local_5c0.PinName;
  pFVar8[1].ComparisonIndex = 0;
  pFVar8[1].Number = 0;
  pFVar8[1] = (FName)local_5c0.DataFunctionName.Data.AllocatorInstance.Data;
  local_5c0.DataFunctionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].ComparisonIndex.Value = local_5c0.DataFunctionName.Data.ArrayNum;
  pFVar8[2].Number = local_5c0.DataFunctionName.Data.ArrayMax;
  local_5c0.DataFunctionName.Data.ArrayNum = 0;
  local_5c0.DataFunctionName.Data.ArrayMax = 0;
  pFVar8[3].ComparisonIndex = 0;
  pFVar8[3].Number = 0;
  pFVar8[3] = (FName)local_5c0.DataDimensions.AllocatorInstance.Data;
  local_5c0.DataDimensions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[4].ComparisonIndex.Value = local_5c0.DataDimensions.ArrayNum;
  pFVar8[4].Number = local_5c0.DataDimensions.ArrayMax;
  local_5c0.DataDimensions.ArrayNum = 0;
  local_5c0.DataDimensions.ArrayMax = 0;
  pFVar8[5].ComparisonIndex.Value = local_5c0.DomainMultiplier;
  *(bool *)&pFVar8[5].Number = local_5c0.bMutable;
  pFVar8[6] = local_5c0.DisplayName;
  DestructItems<FOptimusCDIPinDefinition::FDimensionInfo,int>((FDimensionInfo *)0x0,0);
  if (local_5c0.DataDimensions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.DataDimensions.AllocatorInstance.Data);
  }
  if (local_5c0.DataFunctionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.DataFunctionName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2830d0

UClass * __cdecl UOptimusGroomSolverReadDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGroomSolverReadDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsDeformer",L"OptimusGroomSolverReadDataInterface",
               &Z_Registration_Info_UClass_UOptimusGroomSolverReadDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusGroomSolverReadDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusGroomSolverReadDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusGroomSolverReadDataInterface>,local_res8,
               UOptimusComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGroomSolverReadDataInterface.InnerSingleton;
}

// GetPropertyPinDefinitions @ 14e283720

/* WARNING: Removing unreachable block (ram,0x00014e2838b4) */

TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusGroomSolverReadDataInterface::GetPropertyPinDefinitions
          (UOptimusGroomSolverReadDataInterface *this,
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
  pFVar5 = ::FName::FName(&local_res10,0x16,L"ResetSimulationTrigger",FNAME_Add);
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

// GetRequiredComponentClass @ 14e2845d0

TSubclassOf<UActorComponent> __thiscall
UOptimusGroomSolverReadDataInterface::GetRequiredComponentClass
          (UOptimusGroomSolverReadDataInterface *this)

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

// GetResetSimulationTriggerName @ 14e284690

FName __cdecl UOptimusGroomSolverReadDataInterface::GetResetSimulationTriggerName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x16,L"ResetSimulationTrigger",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetShaderHash @ 14e284880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UOptimusGroomSolverReadDataInterface::GetShaderHash
          (UOptimusGroomSolverReadDataInterface *this,FString *param_1)

{
  FSHAHash *pFVar1;
  
  pFVar1 = GetShaderFileHash(TemplateFilePath,SP_PCD3D_SM5);
  BytesToHex(pFVar1->Hash,0x14,param_1);
  return;
}

// GetShaderParameters @ 14e2853d0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
UOptimusGroomSolverReadDataInterface::GetShaderParameters
          (UOptimusGroomSolverReadDataInterface *this,wchar_t *param_1,
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
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar4 = FOptimusGroomSolverReadParameters::zzAppendMemberGetPrev;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      do {
        pcVar4 = (code *)(*pcVar4)(local_res10,&local_28);
      } while (pcVar4 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FOptimusGroomSolverReadParameters",L"FOptimusGroomSolverReadParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomSolverRead.cpp"
                 ,0xdb,0xa0,&local_28,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_28.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      atexit(`FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata(void)'
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
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOptimusGroomSolverReadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  param_2->NextMemberOffset = param_2->NextMemberOffset + 0xa0;
  return;
}

// GetShaderVirtualPath @ 14e2859a0

wchar_t * __thiscall
UOptimusGroomSolverReadDataInterface::GetShaderVirtualPath
          (UOptimusGroomSolverReadDataInterface *this)

{
  return TemplateFilePath;
}

// GetSupportedInputs @ 14e286a80

void __thiscall
UOptimusGroomSolverReadDataInterface::GetSupportedInputs
          (UOptimusGroomSolverReadDataInterface *this,
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumSolverPoints");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumSolverCurves");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumSolverObjects");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumDynamicPoints");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumDynamicCurves");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumKinematicPoints");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadNumKinematicCurves");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadBoundingBoxMin");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadBoundingBoxMax");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  FShaderFunctionDefinition::AddReturnType(pFVar3,Float,3,0);
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
  pFVar2 = ::FString::FString(&local_18,L"ReadObjectPointOffset");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadObjectCurveOffset");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadObjectNumPoints");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadObjectNumCurves");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadPointObjectIndex");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadCurveObjectIndex");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadDynamicPointIndex");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadDynamicCurveIndex");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadKinematicPointIndex");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadKinematicCurveIndex");
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
  pFVar2 = ::FString::FString(&local_18,L"ReadObjectDistanceLod");
  pFVar3 = FShaderFunctionDefinition::SetName(pFVar3,pFVar2);
  pFVar3 = FShaderFunctionDefinition::AddReturnType(pFVar3,Uint,0,0);
  FShaderFunctionDefinition::AddParam(pFVar3,Uint,0,0,None);
  return;
}

// RegisterTypes @ 14e289510

void __thiscall
UOptimusGroomSolverReadDataInterface::RegisterTypes(UOptimusGroomSolverReadDataInterface *this)

{
  return;
}

// StaticRegisterNativesUOptimusGroomSolverReadDataInterface @ 14e289810

void __cdecl
UOptimusGroomSolverReadDataInterface::StaticRegisterNativesUOptimusGroomSolverReadDataInterface
          (void)

{
  return;
}

