// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14972b0f0

UClass * __cdecl UPCGCustomHLSLDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLDataProvider",
               &Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCustomHLSLDataProvider,0xa0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGCustomHLSLDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton;
}

// UPCGCustomHLSLDataProvider @ 14973b2c0

UPCGCustomHLSLDataProvider * __thiscall
UPCGCustomHLSLDataProvider::UPCGCustomHLSLDataProvider
          (UPCGCustomHLSLDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->KernelParams = (FPCGKernelParams *)0x0;
  this->_padding_ = (longlong)&___7UPCGCustomHLSLDataProvider__6B_;
  return this;
}

// UPCGCustomHLSLDataProvider @ 14973b300

UPCGCustomHLSLDataProvider * __thiscall
UPCGCustomHLSLDataProvider::UPCGCustomHLSLDataProvider
          (UPCGCustomHLSLDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->KernelParams = (FPCGKernelParams *)0x0;
  this->_padding_ = (longlong)&___7UPCGCustomHLSLDataProvider__6B_;
  return this;
}

// ~UPCGCustomHLSLDataProvider @ 14973dd90

void __thiscall
UPCGCustomHLSLDataProvider::~UPCGCustomHLSLDataProvider(UPCGCustomHLSLDataProvider *this)

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

// GetPrivateStaticClass @ 14975b440

UClass * __cdecl UPCGCustomHLSLDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLDataProvider",
               &Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCustomHLSLDataProvider,0xa0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGCustomHLSLDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLDataProvider>,local_res8,
               UPCGKernelParamsDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975de50

FComputeDataProviderRenderProxy * __thiscall
UPCGCustomHLSLDataProvider::GetRenderProxy(UPCGCustomHLSLDataProvider *this)

{
  FPCGKernelParams *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FComputeDataProviderRenderProxy *pFVar7;
  FName *pFVar8;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  
  pFVar1 = this->KernelParams;
  if (pFVar1 == (FPCGKernelParams *)0x0) {
    iVar5 = 0;
    iVar4 = 0;
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3758768795489927129>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCustomHLSLDataInterface.cpp"
                       ,0x27,"KernelParams");
    iVar6 = 0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FComputeDataProviderRenderProxy *)(*pcVar2)();
      return pFVar7;
    }
  }
  else {
    pFVar8 = ::FName::FName(&local_res8,0xb,L"NumElements",FNAME_Add);
    iVar4 = FPCGKernelParams::GetValueInt(pFVar1,*pFVar8);
    pFVar1 = this->KernelParams;
    pFVar8 = ::FName::FName(&local_res10,0x15,L"ThreadCountMultiplier",FNAME_Add);
    iVar5 = FPCGKernelParams::GetValueInt(pFVar1,*pFVar8);
    pFVar1 = this->KernelParams;
    pFVar8 = ::FName::FName(&local_res18,0x10,L"FixedThreadCount",FNAME_Add);
    iVar6 = FPCGKernelParams::GetValueInt(pFVar1,*pFVar8);
  }
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FComputeDataProviderRenderProxy *)0x0) {
    *pFVar7 = (FComputeDataProviderRenderProxy)&___7FPCGCustomHLSLDataProviderProxy__6B_;
    *(int *)(pFVar7 + 1) = iVar4;
    *(int *)&pFVar7[1].field_0x4 = iVar5;
    *(int *)(pFVar7 + 2) = iVar6;
    return pFVar7;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// PrepareForExecute_GameThread @ 14976fb40

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
UPCGCustomHLSLDataProvider::PrepareForExecute_GameThread
          (UPCGCustomHLSLDataProvider *this,UPCGDataBinding *param_1)

{
  UPCGComputeKernel *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPCGKernelParams *pFVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId59,
               "UPCGCustomHLSLDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCustomHLSLDataInterface.cpp"
               ,0x3b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId59);
  }
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCustomHLSLDataInterface.cpp"
                         ,0x3c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar1 = (UPCGComputeKernel *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGComputeKernel *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar5 = UPCGDataBinding::GetCachedKernelParams(param_1,pUVar1);
  this->KernelParams = pFVar5;
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Reset @ 149774900

void __thiscall UPCGCustomHLSLDataProvider::Reset(UPCGCustomHLSLDataProvider *this)

{
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  this->KernelParams = (FPCGKernelParams *)0x0;
  return;
}

// StaticRegisterNativesUPCGCustomHLSLDataProvider @ 149778690

void __cdecl UPCGCustomHLSLDataProvider::StaticRegisterNativesUPCGCustomHLSLDataProvider(void)

{
  return;
}

