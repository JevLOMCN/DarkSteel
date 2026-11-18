// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14972c270

UClass * __cdecl UPCGCopyPointsAnalysisDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsAnalysisDataProvider",
               &Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsAnalysisDataProvider,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsAnalysisDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton;
}

// UPCGCopyPointsAnalysisDataProvider @ 14973adc0

UPCGCopyPointsAnalysisDataProvider * __thiscall
UPCGCopyPointsAnalysisDataProvider::UPCGCopyPointsAnalysisDataProvider
          (UPCGCopyPointsAnalysisDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCopyPointsAnalysisDataProvider__6B_;
  (this->Params).MatchAttributeId = -1;
  (this->Params).SelectedFlagAttributeId = -1;
  (this->Params).bCopyEachSourceOnEveryTarget = true;
  return this;
}

// UPCGCopyPointsAnalysisDataProvider @ 14973ae00

UPCGCopyPointsAnalysisDataProvider * __thiscall
UPCGCopyPointsAnalysisDataProvider::UPCGCopyPointsAnalysisDataProvider
          (UPCGCopyPointsAnalysisDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCopyPointsAnalysisDataProvider__6B_;
  (this->Params).MatchAttributeId = -1;
  (this->Params).SelectedFlagAttributeId = -1;
  (this->Params).bCopyEachSourceOnEveryTarget = true;
  return this;
}

// ~UPCGCopyPointsAnalysisDataProvider @ 14973da90

void __thiscall
UPCGCopyPointsAnalysisDataProvider::~UPCGCopyPointsAnalysisDataProvider
          (UPCGCopyPointsAnalysisDataProvider *this)

{
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

// GetPrivateStaticClass @ 14975acc0

UClass * __cdecl UPCGCopyPointsAnalysisDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsAnalysisDataProvider",
               &Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsAnalysisDataProvider,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyPointsAnalysisDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsAnalysisDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsAnalysisDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975d750

FComputeDataProviderRenderProxy * __thiscall
UPCGCopyPointsAnalysisDataProvider::GetRenderProxy(UPCGCopyPointsAnalysisDataProvider *this)

{
  undefined3 uVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FComputeDataProviderRenderProxy *)0x0) {
    *pFVar2 = (FComputeDataProviderRenderProxy)&___7FPCGCopyPointsAnalysisDataProviderProxy__6B_;
    pFVar2[1] = *(FComputeDataProviderRenderProxy *)&this->Params;
    uVar1 = *(undefined3 *)&(this->Params).field_0x9;
    pFVar2[2].field_0x0 = (this->Params).bCopyEachSourceOnEveryTarget;
    *(undefined3 *)&pFVar2[2].field_0x1 = uVar1;
    return pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// PrepareForExecute_GameThread @ 14976eca0

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
UPCGCopyPointsAnalysisDataProvider::PrepareForExecute_GameThread
          (UPCGCopyPointsAnalysisDataProvider *this,UPCGDataBinding *param_1)

{
  UPCGComputeKernel *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FPCGKernelParams *this_00;
  char *pcVar6;
  FName *pFVar7;
  atomic<unsigned_char> *paVar8;
  FName local_res18;
  FName local_res20;
  FName local_88 [2];
  FName local_78;
  FPCGMetadataDomainID FStack_70;
  FPCGAttributeIdentifier local_58;
  FPCGAttributeIdentifier local_38;
  
  pUVar1 = (UPCGComputeKernel *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UPCGComputeKernel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = UPCGDataBinding::GetCachedKernelParams(param_1,pUVar1);
  if (this_00 == (FPCGKernelParams *)0x0) {
    pcVar6 = "KernelParams";
    iVar5 = 0x4e;
    paVar8 = &bGEnsureHasExecuted<4248636212467728462>;
  }
  else {
    pFVar7 = ::FName::FName(&local_res20,0x1c,L"bCopyEachSourceOnEveryTarget",FNAME_Add);
    bVar3 = FPCGKernelParams::GetValueBool(this_00,*pFVar7);
    (this->Params).bCopyEachSourceOnEveryTarget = bVar3;
    ::FName::FName(local_88,0xe,L"MatchAttribute",FNAME_Add);
    FPCGKernelParams::GetValueName(this_00,(FName)&local_res18);
    local_78 = local_res18;
    FStack_70.Flag = PCGMetadataDomainID::Default.Flag;
    FStack_70._1_3_ = PCGMetadataDomainID::Default._1_3_;
    FStack_70.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    FStack_70.DebugName = PCGMetadataDomainID::Default.DebugName;
    if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8122861073268211627>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                           ,0x55,"bTablesInitialized"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_58.Name = local_78;
    local_58.MetadataDomain.Flag = FStack_70.Flag;
    local_58.MetadataDomain._1_3_ = FStack_70._1_3_;
    local_58.MetadataDomain.CustomFlag = FStack_70.CustomFlag;
    local_58.MetadataDomain.DebugName = FStack_70.DebugName;
    iVar5 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_58,Int);
    (this->Params).MatchAttributeId = iVar5;
    if ((iVar5 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4248636212467728472>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsAnalysisDataInterface.cpp"
                           ,0x58,"Params.MatchAttributeId != INDEX_NONE"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_78 = PCGCopyPointsConstants::SelectedFlagAttributeName;
    FStack_70.Flag = PCGMetadataDomainID::Default.Flag;
    FStack_70._1_3_ = PCGMetadataDomainID::Default._1_3_;
    FStack_70.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    FStack_70.DebugName = PCGMetadataDomainID::Default.DebugName;
    if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8122861073268211627>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                           ,0x55,"bTablesInitialized"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_38.Name = local_78;
    local_38.MetadataDomain.Flag = FStack_70.Flag;
    local_38.MetadataDomain._1_3_ = FStack_70._1_3_;
    local_38.MetadataDomain.CustomFlag = FStack_70.CustomFlag;
    local_38.MetadataDomain.DebugName = FStack_70.DebugName;
    iVar5 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_38,Bool);
    (this->Params).SelectedFlagAttributeId = iVar5;
    if (iVar5 != -1) {
      return true;
    }
    pcVar6 = "Params.SelectedFlagAttributeId != INDEX_NONE";
    iVar5 = 0x5b;
    paVar8 = &bGEnsureHasExecuted<4248636212467728475>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsAnalysisDataInterface.cpp"
                     ,iVar5,pcVar6);
  if (!bVar3) {
    return true;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// Reset @ 1497747a0

void __thiscall UPCGCopyPointsAnalysisDataProvider::Reset(UPCGCopyPointsAnalysisDataProvider *this)

{
  undefined4 local_10;
  
  (this->Params).MatchAttributeId = -1;
  (this->Params).SelectedFlagAttributeId = -1;
  local_10 = CONCAT31(local_10._1_3_,1);
  *(undefined4 *)&(this->Params).bCopyEachSourceOnEveryTarget = local_10;
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGCopyPointsAnalysisDataProvider @ 1497785f0

void __cdecl
UPCGCopyPointsAnalysisDataProvider::StaticRegisterNativesUPCGCopyPointsAnalysisDataProvider(void)

{
  return;
}

