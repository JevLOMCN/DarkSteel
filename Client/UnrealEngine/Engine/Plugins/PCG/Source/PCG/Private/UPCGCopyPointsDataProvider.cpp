// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972cc30

UClass * __cdecl UPCGCopyPointsDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsDataProvider",
               &Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsDataProvider,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGCopyPointsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton;
}

// UPCGCopyPointsDataProvider @ 14973aea0

UPCGCopyPointsDataProvider * __thiscall
UPCGCopyPointsDataProvider::UPCGCopyPointsDataProvider
          (UPCGCopyPointsDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCopyPointsDataProvider__6B_;
  this->KernelParams = (FPCGKernelParams *)0x0;
  (this->SourceAndTargetDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceAndTargetDataIndices).ArrayNum = 0;
  (this->SourceAndTargetDataIndices).ArrayMax = 0;
  return this;
}

// UPCGCopyPointsDataProvider @ 14973aee0

UPCGCopyPointsDataProvider * __thiscall
UPCGCopyPointsDataProvider::UPCGCopyPointsDataProvider
          (UPCGCopyPointsDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCopyPointsDataProvider__6B_;
  this->KernelParams = (FPCGKernelParams *)0x0;
  (this->SourceAndTargetDataIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceAndTargetDataIndices).ArrayNum = 0;
  (this->SourceAndTargetDataIndices).ArrayMax = 0;
  return this;
}

// ~UPCGCopyPointsDataProvider @ 14973db30

void __thiscall
UPCGCopyPointsDataProvider::~UPCGCopyPointsDataProvider(UPCGCopyPointsDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGCopyPointsDataProvider__6B_;
  pFVar1 = (this->SourceAndTargetDataIndices).AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 14975ae40

UClass * __cdecl UPCGCopyPointsDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsDataProvider",
               &Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsDataProvider,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGCopyPointsDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975d7a0

FComputeDataProviderRenderProxy * __thiscall
UPCGCopyPointsDataProvider::GetRenderProxy(UPCGCopyPointsDataProvider *this)

{
  int iVar1;
  FPCGKernelParams *pFVar2;
  FName FVar3;
  FScriptContainerElement *_Src;
  longlong *plVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  undefined4 uVar7;
  bool bVar8;
  EPCGCopyPointsInheritanceMode EVar9;
  EPCGCopyPointsInheritanceMode EVar10;
  bool bVar11;
  EPCGCopyPointsInheritanceMode EVar12;
  EPCGCopyPointsInheritanceMode EVar13;
  bool bVar14;
  undefined4 uVar15;
  FComputeDataProviderRenderProxy *pFVar16;
  FName *pFVar17;
  TTuple<FProperty_const_*,void_const_*> *pTVar18;
  UObject *pUVar19;
  FProperty *this_00;
  void *pvVar20;
  FComputeDataProviderRenderProxy *pFVar21;
  FName local_res20;
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  pFVar2 = this->KernelParams;
  local_b8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (pFVar2 == (FPCGKernelParams *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_32225466039402259>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                       ,0xed,"KernelParams");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar5)();
      return pFVar16;
    }
    goto LAB_14975db36;
  }
  pFVar17 = ::FName::FName(&local_res20,0x13,L"RotationInheritance",FNAME_Add);
  EVar9 = FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>(pFVar2,*pFVar17);
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(&local_88,0x1f,L"bApplyTargetRotationToPositions",FNAME_Add);
  bVar8 = FPCGKernelParams::GetValueBool(pFVar2,*pFVar17);
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(&local_80,0x10,L"ScaleInheritance",FNAME_Add);
  EVar10 = FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>(pFVar2,*pFVar17);
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(&local_78,0x1c,L"bApplyTargetScaleToPositions",FNAME_Add);
  bVar11 = FPCGKernelParams::GetValueBool(pFVar2,*pFVar17);
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(&local_70,0x10,L"ColorInheritance",FNAME_Add);
  EVar12 = FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>(pFVar2,*pFVar17);
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(&local_68,0xf,L"SeedInheritance",FNAME_Add);
  EVar13 = FPCGKernelParams::GetValueEnum<enum_EPCGCopyPointsInheritanceMode>(pFVar2,*pFVar17);
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(&local_60,0x14,L"AttributeInheritance",FNAME_Add);
  FVar3 = *pFVar17;
  pTVar18 = TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
            ::Find((TMapBase<FName,TTuple<FProperty_const_*,void_const_*>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FProperty_const_*,void_const_*>,0>_>
                    *)&pFVar2->OverriddenProperties,FVar3);
  if (pTVar18 == (TTuple<FProperty_const_*,void_const_*> *)0x0) {
    pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)pFVar2);
    if (((pUVar19 != (UObject *)0x0) &&
        (this_00 = UStruct::FindPropertyByName(*(UStruct **)&pUVar19->field_0x10,FVar3),
        this_00 != (FProperty *)0x0)) &&
       ((*(ulonglong *)(this_00->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      pvVar20 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar19,0);
      goto LAB_14975dac6;
    }
LAB_14975d9aa:
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_10494529249476565>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGKernelParamsCache.h"
                        ,0x2b,"NumericProperty && ValuePtr");
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FComputeDataProviderRenderProxy *)(*pcVar5)();
      return pFVar16;
    }
    uVar15 = 0;
  }
  else {
    this_00 = *(FProperty **)pTVar18;
    if ((this_00 == (FProperty *)0x0) ||
       ((*(ulonglong *)(this_00->_padding_ + 0x18) & 0x1000000000000) == 0)) {
      this_00 = (FProperty *)0x0;
    }
    pvVar20 = *(void **)&pTVar18->field_0x8;
    if (this_00 == (FProperty *)0x0) goto LAB_14975d9aa;
LAB_14975dac6:
    plVar4 = (longlong *)this_00[1]._padding_;
    if ((plVar4 == (longlong *)0x0) || (pvVar20 == (void *)0x0)) goto LAB_14975d9aa;
    uVar15 = (**(code **)(*plVar4 + 0x210))(plVar4,pvVar20);
  }
  pFVar2 = this->KernelParams;
  pFVar17 = ::FName::FName(local_58,0x1c,L"bCopyEachSourceOnEveryTarget",FNAME_Add);
  bVar14 = FPCGKernelParams::GetValueBool(pFVar2,*pFVar17);
  local_a8 = (ulonglong)CONCAT14(EVar13,(uint)EVar12);
  local_a0 = (ulonglong)(CONCAT14(bVar14,uVar15) & 0xff000000ff);
  local_b8 = (ulonglong)CONCAT14(bVar8,(uint)EVar9);
  local_b0 = (uint)EVar10;
  uStack_ac = (uint)bVar11;
  if ((TArray<UE::Math::TIntVector2<unsigned_int>,TSizedDefaultAllocator<32>_> *)&local_98 !=
      &this->SourceAndTargetDataIndices) {
    iVar1 = (this->SourceAndTargetDataIndices).ArrayNum;
    _Src = (this->SourceAndTargetDataIndices).AllocatorInstance.Data;
    local_90 = CONCAT44(local_90._4_4_,iVar1);
    if ((iVar1 == 0) && (local_90._4_4_ == 0)) {
      local_90 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar1,local_90._4_4_,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
      if (iVar1 != 0) {
        memcpy(local_98.Data,_Src,(longlong)iVar1 << 3);
      }
    }
  }
LAB_14975db36:
  pFVar16 = (FComputeDataProviderRenderProxy *)0x0;
  pFVar21 = ::operator_new(0x48);
  FVar6.Data = local_98.Data;
  if (pFVar21 != (FComputeDataProviderRenderProxy *)0x0) {
    uVar15 = (undefined4)local_90;
    uVar7 = local_90._4_4_;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    *(undefined4 *)(pFVar21 + 1) = (undefined4)local_b8;
    *(undefined4 *)&pFVar21[1].field_0x4 = local_b8._4_4_;
    *(uint *)(pFVar21 + 2) = local_b0;
    *(uint *)&pFVar21[2].field_0x4 = uStack_ac;
    *(undefined4 *)(pFVar21 + 3) = (undefined4)local_a8;
    *(undefined4 *)&pFVar21[3].field_0x4 = local_a8._4_4_;
    *(undefined4 *)(pFVar21 + 4) = (undefined4)local_a0;
    *(undefined4 *)&pFVar21[4].field_0x4 = local_a0._4_4_;
    pFVar21[5] = (FComputeDataProviderRenderProxy)FVar6.Data;
    *pFVar21 = (FComputeDataProviderRenderProxy)&___7FPCGCopyPointsDataProviderProxy__6B_;
    *(undefined4 *)(pFVar21 + 6) = uVar15;
    *(undefined4 *)&pFVar21[6].field_0x4 = uVar7;
    pFVar21[7] = (FComputeDataProviderRenderProxy)0x0;
    pFVar21[8] = (FComputeDataProviderRenderProxy)0x0;
    pFVar16 = pFVar21;
  }
  if ((FComputeDataProviderRenderProxy)local_98.Data != (FComputeDataProviderRenderProxy)0x0) {
    FMemory::Free(local_98.Data);
  }
  return pFVar16;
}

// PerformPreExecuteReadbacks_GameThread @ 14976d5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGCopyPointsDataProvider::PerformPreExecuteReadbacks_GameThread
          (UPCGCopyPointsDataProvider *this,UPCGDataBinding *param_1)

{
  UPCGComputeKernel *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FPCGKernelParams *this_00;
  FName *pFVar7;
  bool bVar8;
  FName local_res10;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId118,
               "UPCGCopyPointsDataProvider::PerformPreExecuteReadbacks_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId118);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                         ,0x77,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pUVar1 = (UPCGComputeKernel *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGComputeKernel *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = UPCGDataBinding::GetCachedKernelParams(param_1,pUVar1);
  this->KernelParams = this_00;
  if (this_00 == (FPCGKernelParams *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_32225466039402368>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                       ,0x80,"KernelParams");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else {
    pFVar7 = ::FName::FName(&local_res10,0x16,L"bMatchBasedOnAttribute",FNAME_Add);
    bVar4 = FPCGKernelParams::GetValueBool(this_00,*pFVar7);
    if ((bVar4) && ((UObject *)this->_padding_ != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this->_padding_);
      }
      FVar3 = PCGCopyPointsConstants::SelectedFlagsPinLabel;
      pUVar1 = (UPCGComputeKernel *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UPCGComputeKernel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      iVar6 = UPCGDataBinding::GetFirstInputDataIndex(param_1,pUVar1,FVar3);
      if (iVar6 != -1) {
        bVar4 = UPCGDataBinding::ReadbackInputDataToCPU(param_1,iVar6);
        goto LAB_14976d6d0;
      }
    }
  }
  bVar4 = true;
LAB_14976d6d0:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// PrepareForExecute_GameThread @ 14976ef00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGCopyPointsDataProvider::PrepareForExecute_GameThread
          (UPCGCopyPointsDataProvider *this,UPCGDataBinding *param_1)

{
  int *piVar1;
  TArray<UE::Math::TIntVector2<unsigned_int>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  FPCGKernelParams *pFVar5;
  UPCGComputeKernel *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FName FVar9;
  FPCGMetadataDomainID FVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FPCGDataCollection *pFVar17;
  UPCGParamData *pUVar18;
  UPCGMetadata *this_00;
  FPCGMetadataAttribute<bool> *this_01;
  long64 lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  FName local_res20;
  FName local_a8;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_a0;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_90;
  FName local_80;
  FPCGMetadataDomainID FStack_78;
  FPCGAttributeIdentifier local_68;
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId154,
               "UPCGCopyPointsDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
               ,0x9a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId154);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                          ,0x9b,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  pFVar5 = this->KernelParams;
  if (pFVar5 == (FPCGKernelParams *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_32225466039402339>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                        ,0x9d,"KernelParams");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
  }
  else {
    pFVar16 = ::FName::FName(&local_res20,0x16,L"bMatchBasedOnAttribute",FNAME_Add);
    bVar11 = FPCGKernelParams::GetValueBool(pFVar5,*pFVar16);
    FVar9 = PCGCopyPointsConstants::SelectedFlagsPinLabel;
    if (bVar11) {
      pUVar6 = (UPCGComputeKernel *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPCGComputeKernel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      uVar14 = UPCGDataBinding::GetFirstInputDataIndex(param_1,pUVar6,FVar9);
      FVar9 = PCGCopyPointsConstants::SourcePointsLabel;
      if (uVar14 != 0xffffffff) {
        pUVar6 = (UPCGComputeKernel *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UPCGComputeKernel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_90,pUVar6,FVar9,true);
        FVar9 = PCGCopyPointsConstants::TargetPointsLabel;
        pUVar6 = (UPCGComputeKernel *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UPCGComputeKernel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_a0,pUVar6,FVar9,true);
        if (local_90.Object == (FPCGDataCollectionDesc *)0x0) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_32225466039402316>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                              ,0xb4,"SourcePinDesc");
          if (bVar11) {
code_r0x00014976f14f:
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
        }
        else if (local_a0.Object == (FPCGDataCollectionDesc *)0x0) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_32225466039402316>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
                              ,0xb4,"TargetPinDesc");
          if (bVar11) goto code_r0x00014976f14f;
        }
        else {
          if ((local_90.Object == (FPCGDataCollectionDesc *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          uVar3 = ((local_90.Object)->DataDescs).ArrayNum;
          if (((int)uVar3 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          if ((local_a0.Object == (FPCGDataCollectionDesc *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          uVar4 = ((local_a0.Object)->DataDescs).ArrayNum;
          if (((int)uVar4 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          pFVar5 = this->KernelParams;
          pFVar16 = ::FName::FName(&local_a8,0x1c,L"bCopyEachSourceOnEveryTarget",FNAME_Add);
          bVar11 = FPCGKernelParams::GetValueBool(pFVar5,*pFVar16);
          if (bVar11) {
            uVar23 = uVar4 * uVar3;
          }
          else {
            uVar23 = uVar4;
            if ((int)uVar4 < (int)uVar3) {
              uVar23 = uVar3;
            }
          }
          pTVar2 = &this->SourceAndTargetDataIndices;
          if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
          }
          piVar1 = &(this->SourceAndTargetDataIndices).ArrayMax;
          if ((this->SourceAndTargetDataIndices).ArrayMax < (int)uVar23) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar23,&pTVar2->AllocatorInstance,
                       (this->SourceAndTargetDataIndices).ArrayNum,piVar1);
          }
          pFVar17 = UPCGDataBinding::GetInputDataCollection(param_1);
          uVar20 = 0;
          if ((int)uVar14 < (pFVar17->TaggedData).ArrayNum) {
            uVar20 = ~uVar14 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          pUVar18 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)
                                        ((pFVar17->TaggedData).AllocatorInstance.Data +
                                        (longlong)(int)uVar14 * 0x78));
          if ((pUVar18 != (UPCGParamData *)0x0) &&
             (this_00 = (UPCGMetadata *)(**(code **)(pUVar18->_padding_ + 800))(pUVar18),
             this_00 != (UPCGMetadata *)0x0)) {
            local_80 = PCGCopyPointsConstants::SelectedFlagAttributeName;
            FStack_78 = PCGMetadataDomainID::Default;
            FVar10 = FStack_78;
            FStack_78._0_8_ = PCGMetadataDomainID::Default._0_8_;
            local_68.Name = PCGCopyPointsConstants::SelectedFlagAttributeName;
            local_68.MetadataDomain.Flag = FStack_78.Flag;
            local_68.MetadataDomain._1_3_ = FStack_78._1_3_;
            local_68.MetadataDomain.CustomFlag = FStack_78.CustomFlag;
            local_68.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            FStack_78 = FVar10;
            this_01 = (FPCGMetadataAttribute<bool> *)
                      UPCGMetadata::GetConstAttribute(this_00,&local_68);
            if ((this_01 != (FPCGMetadataAttribute<bool> *)0x0) &&
               ((lVar19 = UPCGMetadata::GetItemCountForChild(this_00), (uint)lVar19 == uVar23 &&
                ((short)this_01->_padding_ == 10)))) {
              if (bVar11) {
                iVar24 = 0;
                if (0 < (int)uVar3) {
                  iVar22 = 0;
                  do {
                    iVar21 = 0;
                    if (0 < (int)uVar4) {
                      do {
                        bVar11 = FPCGMetadataAttribute<bool>::GetValue(this_01,iVar22 + iVar21);
                        if (bVar11) {
                          iVar15 = (this->SourceAndTargetDataIndices).ArrayNum;
                          if (iVar15 == *piVar1) {
                            iVar15 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x408,&pTVar2->AllocatorInstance,piVar1);
                          }
                          (this->SourceAndTargetDataIndices).ArrayNum = iVar15 + 1;
                          pFVar7 = (pTVar2->AllocatorInstance).Data;
                          *(int *)(pFVar7 + (longlong)iVar15 * 8) = iVar24;
                          *(int *)(pFVar7 + (longlong)iVar15 * 8 + 4) = iVar21;
                        }
                        iVar21 = iVar21 + 1;
                      } while (iVar21 < (int)uVar4);
                    }
                    iVar24 = iVar24 + 1;
                    iVar22 = iVar22 + uVar4;
                  } while (iVar24 < (int)uVar3);
                }
              }
              else {
                iVar24 = 0;
                if (0 < (int)uVar23) {
                  do {
                    iVar22 = uVar3 - 1;
                    if (iVar24 < (int)(uVar3 - 1)) {
                      iVar22 = iVar24;
                    }
                    iVar21 = 0;
                    if (0 < iVar22) {
                      iVar21 = iVar22;
                    }
                    iVar22 = uVar4 - 1;
                    if (iVar24 < (int)(uVar4 - 1)) {
                      iVar22 = iVar24;
                    }
                    iVar15 = 0;
                    if (0 < iVar22) {
                      iVar15 = iVar22;
                    }
                    bVar11 = FPCGMetadataAttribute<bool>::GetValue(this_01,iVar24);
                    if (bVar11) {
                      iVar22 = (this->SourceAndTargetDataIndices).ArrayNum;
                      if (iVar22 == *piVar1) {
                        iVar22 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x408,&pTVar2->AllocatorInstance,piVar1);
                      }
                      (this->SourceAndTargetDataIndices).ArrayNum = iVar22 + 1;
                      pFVar7 = (pTVar2->AllocatorInstance).Data;
                      *(int *)(pFVar7 + (longlong)iVar22 * 8) = iVar21;
                      *(int *)(pFVar7 + (longlong)iVar22 * 8 + 4) = iVar15;
                    }
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < (int)uVar23);
                }
              }
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.SharedReferenceCount.ReferenceController);
      }
    }
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 1497747e0

void __thiscall UPCGCopyPointsDataProvider::Reset(UPCGCopyPointsDataProvider *this)

{
  int *piVar1;
  
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  this->KernelParams = (FPCGKernelParams *)0x0;
  piVar1 = &(this->SourceAndTargetDataIndices).ArrayMax;
  (this->SourceAndTargetDataIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->SourceAndTargetDataIndices).AllocatorInstance,0,piVar1);
  }
  return;
}

// StaticRegisterNativesUPCGCopyPointsDataProvider @ 149778610

void __cdecl UPCGCopyPointsDataProvider::StaticRegisterNativesUPCGCopyPointsDataProvider(void)

{
  return;
}

