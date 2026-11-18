// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972b610

UClass * __cdecl UPCGDataNumDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumDataProvider",
               &Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDataNumDataProvider,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDataNumDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataNumDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton;
}

// UPCGDataNumDataProvider @ 14973b780

UPCGDataNumDataProvider * __thiscall
UPCGDataNumDataProvider::UPCGDataNumDataProvider
          (UPCGDataNumDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataNumDataProvider__6B_;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->OutputAttributeId = -1;
  return this;
}

// UPCGDataNumDataProvider @ 14973b7c0

UPCGDataNumDataProvider * __thiscall
UPCGDataNumDataProvider::UPCGDataNumDataProvider
          (UPCGDataNumDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataNumDataProvider__6B_;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->OutputAttributeId = -1;
  return this;
}

// ~UPCGDataNumDataProvider @ 14973dfd0

void __thiscall UPCGDataNumDataProvider::~UPCGDataNumDataProvider(UPCGDataNumDataProvider *this)

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

// GetPrivateStaticClass @ 14975b980

UClass * __cdecl UPCGDataNumDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataNumDataProvider",
               &Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDataNumDataProvider,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDataNumDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataNumDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataNumDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e1d0

FComputeDataProviderRenderProxy * __thiscall
UPCGDataNumDataProvider::GetRenderProxy(UPCGDataNumDataProvider *this)

{
  int iVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  
  iVar1 = this->OutputAttributeId;
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FComputeDataProviderRenderProxy *)0x0) {
    *(int *)(pFVar2 + 1) = iVar1;
    *pFVar2 = (FComputeDataProviderRenderProxy)&___7FPCGDataNumDataProviderProxy__6B_;
    return pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 149769620

void __thiscall
UPCGDataNumDataProvider::Initialize
          (UPCGDataNumDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  UObject *pUVar2;
  undefined4 uVar3;
  UPCGSettings *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  FString local_28;
  FString local_18;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId55,"UPCGDataNumDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGDataNumDataInterface.cpp"
               ,0x37);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId55);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  pUVar2 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar4 = (UPCGSettings *)(**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
  if (pUVar4 == (UPCGSettings *)0x0) {
    pFVar6 = GetTypeName<UPCGDataNumSettings>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = Z_Construct_UClass_UPCGDataNumSettings_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar5->_padding_)) {
    uVar3 = *(undefined4 *)((longlong)&pUVar4[1]._padding_ + 4);
    (this->OutputAttributeName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar4[1]._padding_;
    (this->OutputAttributeName).Number = uVar3;
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  pFVar6 = GetTypeName<UPCGDataNumSettings>(&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UPCGSettings_const_>(&local_18,pUVar4);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// PrepareForExecute_GameThread @ 149770a10

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
UPCGDataNumDataProvider::PrepareForExecute_GameThread
          (UPCGDataNumDataProvider *this,UPCGDataBinding *param_1)

{
  FName FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  bool bVar9;
  FPCGAttributeIdentifier local_28;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId72,"UPCGDataNumDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGDataNumDataInterface.cpp"
               ,0x48);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId72);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGDataNumDataInterface.cpp"
                         ,0x49,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  FVar5 = PCGMetadataDomainID::Default.DebugName;
  uVar3 = PCGMetadataDomainID::Default._0_8_;
  FVar1 = this->OutputAttributeName;
  if ((param_1->bTablesInitialized == (atomic<bool>)0x0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8122861073268211627>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                         ,0x55,"bTablesInitialized"), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  uVar4 = PCGMetadataDomainID::Default._0_8_;
  PCGMetadataDomainID::Default.Flag = (EPCGMetadataDomainFlag)uVar3;
  PCGMetadataDomainID::Default._1_3_ = SUB83(uVar3,1);
  PCGMetadataDomainID::Default.CustomFlag = SUB84(uVar3,4);
  local_28.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
  local_28.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_28.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_28.MetadataDomain.DebugName = FVar5;
  PCGMetadataDomainID::Default._0_8_ = uVar4;
  local_28.Name = FVar1;
  iVar8 = FPCGKernelAttributeTable::GetAttributeId(&param_1->AttributeTable,&local_28,Int);
  this->OutputAttributeId = iVar8;
  if ((iVar8 == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputAttributeId != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\BuiltInKernels\\PCGDataNumDataInterface.cpp"
                         ,0x51,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 149774a20

void __thiscall UPCGDataNumDataProvider::Reset(UPCGDataNumDataProvider *this)

{
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  this->OutputAttributeId = -1;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  return;
}

// StaticRegisterNativesUPCGDataNumDataProvider @ 149778700

void __cdecl UPCGDataNumDataProvider::StaticRegisterNativesUPCGDataNumDataProvider(void)

{
  return;
}

