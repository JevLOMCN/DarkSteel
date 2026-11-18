// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972be50

UClass * __cdecl UPCGDataLabelResolverDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataLabelResolverDataProvider",
               &Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDataLabelResolverDataProvider,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataLabelResolverDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton;
}

// UPCGDataLabelResolverDataProvider @ 14973b680

UPCGDataLabelResolverDataProvider * __thiscall
UPCGDataLabelResolverDataProvider::UPCGDataLabelResolverDataProvider
          (UPCGDataLabelResolverDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataProvider__6B_;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  (this->PinLabel).ComparisonIndex = 0;
  (this->PinLabel).Number = 0;
  this->bIsInput = false;
  (this->DataIdToDataIndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataIdToDataIndexMap).ArrayNum = 0;
  (this->DataIdToDataIndexMap).ArrayMax = 0;
  return this;
}

// UPCGDataLabelResolverDataProvider @ 14973b6d0

UPCGDataLabelResolverDataProvider * __thiscall
UPCGDataLabelResolverDataProvider::UPCGDataLabelResolverDataProvider
          (UPCGDataLabelResolverDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataProvider__6B_;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  (this->PinLabel).ComparisonIndex = 0;
  (this->PinLabel).Number = 0;
  this->bIsInput = false;
  (this->DataIdToDataIndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataIdToDataIndexMap).ArrayNum = 0;
  (this->DataIdToDataIndexMap).ArrayMax = 0;
  return this;
}

// ~UPCGDataLabelResolverDataProvider @ 14973df20

void __thiscall
UPCGDataLabelResolverDataProvider::~UPCGDataLabelResolverDataProvider
          (UPCGDataLabelResolverDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataLabelResolverDataProvider__6B_;
  pFVar1 = (this->DataIdToDataIndexMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975b800

UClass * __cdecl UPCGDataLabelResolverDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataLabelResolverDataProvider",
               &Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDataLabelResolverDataProvider,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataLabelResolverDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataLabelResolverDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataLabelResolverDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e100

FComputeDataProviderRenderProxy * __thiscall
UPCGDataLabelResolverDataProvider::GetRenderProxy(UPCGDataLabelResolverDataProvider *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FComputeDataProviderRenderProxy *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FComputeDataProviderRenderProxy *)0x0) {
    pFVar2[1] = (FComputeDataProviderRenderProxy)0x0;
    *pFVar2 = (FComputeDataProviderRenderProxy)&___7FPCGDataLabelResolverDataProviderProxy__6B_;
    iVar1 = (this->DataIdToDataIndexMap).ArrayNum;
    _Src = (this->DataIdToDataIndexMap).AllocatorInstance.Data;
    *(int *)(pFVar2 + 2) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)&pFVar2[2].field_0x4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,(ForAnyElementType *)(pFVar2 + 1),iVar1,(int *)&pFVar2[2].field_0x4);
      memcpy(*(FScriptContainerElement **)(pFVar2 + 1),_Src,(longlong)iVar1 << 2);
    }
    pFVar2[3] = (FComputeDataProviderRenderProxy)0x0;
    return pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 149769480

void __thiscall
UPCGDataLabelResolverDataProvider::Initialize
          (UPCGDataLabelResolverDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  undefined4 uVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId78,"UPCGDataLabelResolverDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataLabelResolverDataInterface.cpp"
               ,0x4e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId78);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar4 = GetTypeName<UPCGDataLabelResolverDataInterface>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = UPCGDataLabelResolverDataInterface::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(param_1 + 4) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(param_1 + 4));
    }
    (this->Kernel).field0_0x0 = *(TObjectPtr<UPCGComputeKernel_const_>_u_0 *)(param_1 + 4);
    uVar2 = *(undefined4 *)&param_1[3].field_0x1c;
    (this->PinLabel).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1[3].field_0x18;
    (this->PinLabel).Number = uVar2;
    this->bIsInput = (bool)param_1[3].field_0x20;
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  pFVar4 = GetTypeName<UPCGDataLabelResolverDataInterface>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// PrepareForExecute_GameThread @ 149770090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UPCGDataLabelResolverDataProvider::PrepareForExecute_GameThread
          (UPCGDataLabelResolverDataProvider *this,UPCGDataBinding *param_1)

{
  atomic<int> *paVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  FPCGContextHandle *pFVar5;
  ITextData *pIVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  atomic<int> aVar14;
  UPCGComputeGraph *pUVar15;
  uint *puVar16;
  FPCGDataLabels *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  UPCGSettings *pUVar21;
  TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
  *this_00;
  undefined1 *puVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  FPCGContextHandle *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  FPCGContextHandle *pFVar30;
  int *piVar31;
  bool bVar32;
  uint local_res18;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_110;
  longlong local_100;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_f8;
  longlong local_e8;
  int *local_e0;
  FScriptContainerElement *local_d8;
  FPCGDataLabels *local_d0;
  FString local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId91,
               "UPCGDataLabelResolverDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataLabelResolverDataInterface.cpp"
               ,0x5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataLabelResolverDataInterface.cpp"
                         ,0x5c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if (((this->Kernel).field0_0x0.DebugPtr == (UPCGComputeKernel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Kernel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataLabelResolverDataInterface.cpp"
                         ,0x5d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pUVar15 = UPCGDataBinding::GetComputeGraph(param_1);
  if ((pUVar15 == (UPCGComputeGraph *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeGraph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataLabelResolverDataInterface.cpp"
                         ,0x60,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8122861073268211622>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                         ,0x5a,"bTablesInitialized"), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  UPCGDataBinding::GetCachedKernelPinDataDesc
            (param_1,&local_f8,(this->Kernel).field0_0x0.DebugPtr,this->PinLabel,this->bIsInput);
  if (local_f8.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3725528750801026970>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataLabelResolverDataInterface.cpp"
                       ,0x66,"PinDataDesc");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  else {
    uVar28 = ((this->Kernel).field0_0x0.DebugPtr)->KernelIndex;
    if (*(int *)&(pUVar15->StaticDataLabelsTable).field_0x8 !=
        *(int *)&(pUVar15->StaticDataLabelsTable).field_0x34) {
      puVar22 = *(undefined1 **)&(pUVar15->StaticDataLabelsTable).field_0x40;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = &(pUVar15->StaticDataLabelsTable).field_0x38;
      }
      uVar23 = *(uint *)(puVar22 +
                        (ulonglong)
                        (*(int *)&(pUVar15->StaticDataLabelsTable).field_0x48 - 1U & uVar28) * 4);
      if (uVar23 != 0xffffffff) {
        do {
          puVar16 = (uint *)((longlong)(int)uVar23 * 0x60 +
                            *(longlong *)&pUVar15->StaticDataLabelsTable);
          if (*puVar16 == uVar28) {
            this_00 = (TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
                       *)(puVar16 + 2);
            if (puVar16 == (uint *)0x0) {
              this_00 = (TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
                         *)0x0;
            }
            if ((this_00 !=
                 (TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
                  *)0x0) &&
               (pFVar17 = TMapBase<FName,FPCGDataLabels,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGDataLabels,0>_>
                          ::Find(this_00,this->PinLabel), local_d0 = pFVar17,
               pFVar17 != (FPCGDataLabels *)0x0)) {
              uVar28 = (pFVar17->Labels).ArrayNum;
              pTVar2 = &this->DataIdToDataIndexMap;
              iVar13 = (this->DataIdToDataIndexMap).ArrayNum;
              piVar31 = &(this->DataIdToDataIndexMap).ArrayNum;
              local_e0 = piVar31;
              if (iVar13 < (int)uVar28) {
                UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar28 - iVar13,&pTVar2->AllocatorInstance,piVar31,
                           &(this->DataIdToDataIndexMap).ArrayMax);
              }
              else {
                if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
                }
                if ((int)uVar28 < iVar13) {
                  uVar23 = iVar13 - uVar28;
                  if (((int)(uVar28 | uVar23) < 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x458,
                                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                  if (uVar23 != 0) {
                    pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar28 * 4;
                    iVar13 = (*piVar31 - uVar28) - uVar23;
                    if (iVar13 != 0) {
                      memmove(pFVar4,pFVar4 + (longlong)(int)uVar23 * 4,(longlong)iVar13 << 2);
                    }
                    *piVar31 = *piVar31 - uVar23;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,&pTVar2->AllocatorInstance,*piVar31,
                               &(this->DataIdToDataIndexMap).ArrayMax);
                  }
                }
              }
              iVar13 = (pFVar17->Labels).ArrayNum;
              local_res18 = 0;
              if (0 < iVar13) {
                local_100 = 0;
                do {
                  lVar8 = local_100;
                  uVar23 = ~local_res18 >> 0x1f;
                  uVar28 = 0;
                  if ((int)local_res18 < iVar13) {
                    uVar28 = uVar23;
                  }
                  if ((uVar28 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                  local_e8 = (longlong)(int)local_res18;
                  local_d8 = (pFVar17->Labels).AllocatorInstance.Data + local_e8 * 0x10;
                  PCGComputeHelpers::GetPrefixedDataLabel(&local_c8,(FString *)local_d8);
                  uVar26 = 0;
                  uVar28 = 0;
                  if ((int)local_res18 < *piVar31) {
                    uVar28 = uVar23;
                  }
                  if ((uVar28 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                  *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar8) = 0xffffffff;
                  uVar29 = uVar26;
LAB_1497704b0:
                  if ((local_f8.Object == (FPCGDataCollectionDesc *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                  iVar13 = ((local_f8.Object)->DataDescs).ArrayNum;
                  if ((iVar13 < 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                  uVar28 = (uint)uVar29;
                  if ((int)uVar28 < iVar13) {
                    if ((local_f8.Object == (FPCGDataCollectionDesc *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      uVar10 = (*pcVar7)();
                      return (bool)uVar10;
                    }
                    iVar13 = ((local_f8.Object)->DataDescs).ArrayNum;
                    pFVar4 = ((local_f8.Object)->DataDescs).AllocatorInstance.Data;
                    if ((iVar13 < 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InCount >= 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0xeb,L""), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      uVar10 = (*pcVar7)();
                      return (bool)uVar10;
                    }
                    uVar11 = 0;
                    if ((int)uVar28 < iVar13) {
                      uVar11 = ~uVar28 >> 0x1f;
                    }
                    if ((uVar11 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0x14f,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          ), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      uVar10 = (*pcVar7)();
                      return (bool)uVar10;
                    }
                    iVar13 = *(int *)(pFVar4 + uVar26 + 0x60);
                    pFVar24 = pFVar4 + uVar26 + 0x48;
                    if (*(FScriptContainerElement **)(pFVar4 + uVar26 + 0x58) !=
                        (FScriptContainerElement *)0x0) {
                      pFVar24 = *(FScriptContainerElement **)(pFVar4 + uVar26 + 0x58);
                    }
                    if ((iVar13 < 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InCount >= 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0xeb,L""), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      uVar10 = (*pcVar7)();
                      return (bool)uVar10;
                    }
                    pFVar4 = pFVar24 + (longlong)iVar13 * 4;
                    for (; pFVar24 != pFVar4; pFVar24 = pFVar24 + 4) {
                      uVar11 = *(uint *)pFVar24;
                      uVar12 = 0;
                      if ((int)uVar11 < (param_1->StringTable).ArrayNum) {
                        uVar12 = ~uVar11 >> 0x1f;
                      }
                      if ((uVar12 == 0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar7 = (code *)swi(3);
                        uVar10 = (*pcVar7)();
                        return (bool)uVar10;
                      }
                      pFVar25 = (param_1->StringTable).AllocatorInstance.Data +
                                (longlong)(int)uVar11 * 0x10;
                      iVar13 = *(int *)(pFVar25 + 8);
                      if (iVar13 == local_c8.Data.ArrayNum) {
                        if (1 < iVar13) {
                          iVar13 = FGenericPlatformStricmp::Stricmp
                                             (*(wchar_t **)pFVar25,
                                              (wchar_t *)local_c8.Data.AllocatorInstance.Data);
                          bVar9 = iVar13 == 0;
                          goto LAB_1497706a0;
                        }
LAB_1497706c8:
                        uVar11 = 0;
                        if ((int)local_res18 < *local_e0) {
                          uVar11 = uVar23;
                        }
                        if ((uVar11 == 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar7 = (code *)swi(3);
                          uVar10 = (*pcVar7)();
                          return (bool)uVar10;
                        }
                        *(uint *)((pTVar2->AllocatorInstance).Data + local_100) = uVar28;
                        uVar29 = (ulonglong)(uVar28 + 1);
                        uVar26 = uVar26 + 0x68;
                        goto LAB_1497704b0;
                      }
                      bVar9 = local_c8.Data.ArrayNum + iVar13 == 1;
LAB_1497706a0:
                      if (bVar9) goto LAB_1497706c8;
                    }
                    uVar29 = (ulonglong)(uVar28 + 1);
                    uVar26 = uVar26 + 0x68;
                    goto LAB_1497704b0;
                  }
                  uVar28 = 0;
                  if ((int)local_res18 < (this->DataIdToDataIndexMap).ArrayNum) {
                    uVar28 = uVar23;
                  }
                  if ((uVar28 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    uVar10 = (*pcVar7)();
                    return (bool)uVar10;
                  }
                  lVar8 = local_100;
                  piVar31 = &(this->DataIdToDataIndexMap).ArrayNum;
                  if (*(int *)((pTVar2->AllocatorInstance).Data + local_100) == -1) {
                    pFVar5 = (FPCGContextHandle *)
                             (param_1->ContextHandle).WeakReferenceCount.ReferenceController;
                    pFVar30 = (param_1->ContextHandle).Object;
                    pFVar27 = pFVar5;
                    if (pFVar5 != (FPCGContextHandle *)0x0) {
                      LOCK();
                      ((atomic<int> *)&pFVar5->_padding_)[1] =
                           (atomic<int>)((int)((atomic<int> *)&pFVar5->_padding_)[1] + 1);
                      UNLOCK();
                      aVar3 = *(atomic<int> *)&pFVar5->_padding_;
                      do {
                        pFVar27 = (FPCGContextHandle *)0x0;
                        if (aVar3 == (atomic<int>)0x0) break;
                        LOCK();
                        aVar14 = *(atomic<int> *)&pFVar5->_padding_;
                        bVar9 = aVar3 == aVar14;
                        if (bVar9) {
                          *(atomic<int> *)&pFVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
                          aVar14 = aVar3;
                        }
                        UNLOCK();
                        pFVar27 = pFVar5;
                        aVar3 = aVar14;
                      } while (!bVar9);
                      LOCK();
                      paVar1 = (atomic<int> *)&pFVar5->_padding_ + 1;
                      aVar3 = *paVar1;
                      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                      UNLOCK();
                      if (aVar3 == (atomic<int>)0x1) {
                        (**(code **)(pFVar5->_padding_ + 8))(pFVar5,1);
                      }
                      if (pFVar27 == (FPCGContextHandle *)0x0) {
                        pFVar30 = (FPCGContextHandle *)0x0;
                      }
                      if (pFVar30 != (FPCGContextHandle *)0x0) {
                        pFVar18 = FText::FromString(&local_68,(FString *)local_d8);
                        pFVar19 = FText::AsLocalizable_Advanced_LocText
                                            (&local_78,L"PCGDataLabelResolver",L"LabelDoesNotExist",
                                             L"Data label \'{0}\' was not present in the tags on the incoming data."
                                            );
                        pFVar20 = FTextFormat::FTextFormat(&local_58,pFVar19,Default);
                        local_98.Type = Text;
                        FText::FText((FText *)&local_98.TextValue,pFVar18);
                        if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                             (ITextData *)0x0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsSet()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                               ,0xbd,
                                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                              ), bVar9)) {
                          pcVar7 = (code *)swi(3);
                          uVar10 = (*pcVar7)();
                          return (bool)uVar10;
                        }
                        local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_110.ArrayNum = 1;
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x20,8,1,0,&local_110.AllocatorInstance,1,&local_110.ArrayMax);
                        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                                  (local_110.AllocatorInstance.Data,&local_98,1);
                        local_b8.TextFormatData.Object = (pFVar20->TextFormatData).Object;
                        local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
                             (pFVar20->TextFormatData).SharedReferenceCount.ReferenceController;
                        if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
                            (TReferenceControllerBase<1> *)0x0) {
                          LOCK();
                          (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                          SharedReferenceCount =
                               (atomic<int>)
                               ((int)(local_b8.TextFormatData.SharedReferenceCount.
                                     ReferenceController)->SharedReferenceCount + 1);
                          UNLOCK();
                        }
                        FText::Format(&local_a8,&local_b8,&local_110);
                        DestructItems<FFormatArgumentValue,int>
                                  ((FFormatArgumentValue *)local_110.AllocatorInstance.Data,
                                   local_110.ArrayNum);
                        if ((FFormatArgumentValue *)local_110.AllocatorInstance.Data !=
                            (FFormatArgumentValue *)0x0) {
                          FMemory::Free(local_110.AllocatorInstance.Data);
                        }
                        if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                            (ITextData *)0x0) {
                          (**(code **)((longlong)
                                       *(ITextData *)
                                        local_98.TextValue.field0_0x0.TypedValue.TextData.Reference
                                      + 0x10))();
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline
                                  ((pFVar20->TextFormatData).SharedReferenceCount.
                                   ReferenceController);
                        pIVar6 = (pFVar18->TextData).Reference;
                        if (pIVar6 != (ITextData *)0x0) {
                          (**(code **)((longlong)*pIVar6 + 0x10))();
                        }
                        pUVar21 = (UPCGSettings *)
                                  (**(code **)(((this->Kernel).field0_0x0.DebugPtr)->_padding_ +
                                              0x2b0))();
                        PCGComputeHelpers::LogKernelError(pFVar30->Context,pUVar21,&local_a8);
                        if (local_a8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
                        }
                        if (local_78.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
                        }
                      }
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pFVar27);
                    piVar31 = local_e0;
                  }
                  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                  }
                  local_res18 = local_res18 + 1;
                  local_100 = lVar8 + 4;
                  iVar13 = (local_d0->Labels).ArrayNum;
                  pFVar17 = local_d0;
                } while ((int)local_res18 < iVar13);
              }
            }
            break;
          }
          uVar23 = puVar16[0x16];
        } while (uVar23 != 0xffffffff);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 1497749b0

void __thiscall UPCGDataLabelResolverDataProvider::Reset(UPCGDataLabelResolverDataProvider *this)

{
  int *piVar1;
  
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  (this->PinLabel).ComparisonIndex = 0;
  (this->PinLabel).Number = 0;
  piVar1 = &(this->DataIdToDataIndexMap).ArrayMax;
  this->bIsInput = false;
  (this->DataIdToDataIndexMap).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DataIdToDataIndexMap).AllocatorInstance,0,piVar1);
  }
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGDataLabelResolverDataProvider @ 1497786e0

void __cdecl
UPCGDataLabelResolverDataProvider::StaticRegisterNativesUPCGDataLabelResolverDataProvider(void)

{
  return;
}

