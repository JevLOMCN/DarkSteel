// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972d090

UClass * __cdecl UPCGCustomComputeKernelDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomComputeKernelDataProvider",
               &Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCustomComputeKernelDataProvider,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCustomComputeKernelDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCustomComputeKernelDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton;
}

// UPCGCustomComputeKernelDataProvider @ 14973b180

UPCGCustomComputeKernelDataProvider * __thiscall
UPCGCustomComputeKernelDataProvider::UPCGCustomComputeKernelDataProvider
          (UPCGCustomComputeKernelDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->ThreadCount = -1;
  this->_padding_ = (longlong)&___7UPCGCustomComputeKernelDataProvider__6B_;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  this->ThreadCountMultiplier = 0;
  (this->SourceComponentBounds).IsValid = '\0';
  this->Seed = 0x2a;
  this->SeedSettings = 0x2a;
  this->SeedComponent = 0x2a;
  return this;
}

// UPCGCustomComputeKernelDataProvider @ 14973b1f0

UPCGCustomComputeKernelDataProvider * __thiscall
UPCGCustomComputeKernelDataProvider::UPCGCustomComputeKernelDataProvider
          (UPCGCustomComputeKernelDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->ThreadCount = -1;
  this->_padding_ = (longlong)&___7UPCGCustomComputeKernelDataProvider__6B_;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  this->ThreadCountMultiplier = 0;
  (this->SourceComponentBounds).IsValid = '\0';
  this->Seed = 0x2a;
  this->SeedSettings = 0x2a;
  this->SeedComponent = 0x2a;
  return this;
}

// ~UPCGCustomComputeKernelDataProvider @ 14973dcf0

void __thiscall
UPCGCustomComputeKernelDataProvider::~UPCGCustomComputeKernelDataProvider
          (UPCGCustomComputeKernelDataProvider *this)

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

// GetPrivateStaticClass @ 14975b2c0

UClass * __cdecl UPCGCustomComputeKernelDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomComputeKernelDataProvider",
               &Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGCustomComputeKernelDataProvider,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCustomComputeKernelDataProvider>,
               InternalVTableHelperCtorCaller<UPCGCustomComputeKernelDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomComputeKernelDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975dda0

FComputeDataProviderRenderProxy * __thiscall
UPCGCustomComputeKernelDataProvider::GetRenderProxy(UPCGCustomComputeKernelDataProvider *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FComputeDataProviderRenderProxy FVar5;
  FComputeDataProviderRenderProxy *pFVar6;
  
  pFVar6 = ::operator_new(0x58);
  if (pFVar6 != (FComputeDataProviderRenderProxy *)0x0) {
    uVar1 = this->SeedComponent;
    uVar2 = this->SeedSettings;
    uVar3 = this->Seed;
    uVar4 = this->ThreadCountMultiplier;
    *(int *)(pFVar6 + 1) = this->ThreadCount;
    *pFVar6 = (FComputeDataProviderRenderProxy)&___7FPCGCustomComputeKernelDataProviderProxy__6B_;
    *(uint *)&pFVar6[1].field_0x4 = uVar4;
    *(uint *)(pFVar6 + 2) = uVar3;
    *(uint *)&pFVar6[2].field_0x4 = uVar2;
    *(uint *)(pFVar6 + 3) = uVar1;
    FVar5 = (FComputeDataProviderRenderProxy)(this->SourceComponentBounds).Min.field0_0x0._s_0.Y;
    pFVar6[4] = (FComputeDataProviderRenderProxy)(this->SourceComponentBounds).Min.field0_0x0._s_0.X
    ;
    pFVar6[5] = FVar5;
    FVar5 = (FComputeDataProviderRenderProxy)(this->SourceComponentBounds).Max.field0_0x0._s_0.X;
    pFVar6[6] = (FComputeDataProviderRenderProxy)(this->SourceComponentBounds).Min.field0_0x0._s_0.Z
    ;
    pFVar6[7] = FVar5;
    FVar5 = (FComputeDataProviderRenderProxy)(this->SourceComponentBounds).Max.field0_0x0._s_0.Z;
    pFVar6[8] = (FComputeDataProviderRenderProxy)(this->SourceComponentBounds).Max.field0_0x0._s_0.Y
    ;
    pFVar6[9] = FVar5;
    pFVar6[10] = *(FComputeDataProviderRenderProxy *)&(this->SourceComponentBounds).IsValid;
    return pFVar6;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 149768fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGCustomComputeKernelDataProvider::Initialize
          (UPCGCustomComputeKernelDataProvider *this,UComputeDataInterface *param_1,UObject *param_2
          ,ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  UPCGSettings *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UPCGDataBinding *this_01;
  IPCGGraphExecutionSource *pIVar7;
  UObject *pUVar8;
  longlong *plVar9;
  double *pdVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined1 auStackY_e8 [32];
  FGCScopeGuard local_b8 [8];
  FString local_b0;
  FString local_a0;
  FString local_90;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId124,"UPCGCustomComputeKernelDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGCustomKernelDataInterface.cpp"
               ,0x7c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar11 = GetTypeName<UPCGCustomKernelDataInterface>(&local_b0);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar6 = UPCGCustomKernelDataInterface::GetPrivateStaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    pFVar11 = GetTypeName<UPCGCustomKernelDataInterface>(&local_a0);
    pwVar13 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_90,param_1);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar13,pwVar12);
  }
  this_01 = CastChecked<UPCGDataBinding,UObject>(param_2);
  pIVar7 = UPCGDataBinding::GetExecutionSource(this_01);
  if ((pIVar7 == (IPCGGraphExecutionSource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutionSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGCustomKernelDataInterface.cpp"
                         ,0x84,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)&param_1[4].field_0x20 != 0) goto LAB_149769146;
  FGCScopeGuard::FGCScopeGuard(local_b8);
  pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[3].field_0x20);
  if (pUVar8 == (UObject *)0x0) {
LAB_14976911d:
    pUVar8 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14976911d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  *(UObject **)&param_1[4].field_0x20 = pUVar8;
  FGCScopeGuard::~FGCScopeGuard(local_b8);
LAB_149769146:
  this_00 = *(UPCGSettings **)&param_1[4].field_0x20;
  if ((this_00 == (UPCGSettings *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceSettings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGCustomKernelDataInterface.cpp"
                         ,0x87,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)&param_1[3].field_0x18 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterface->Kernel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGCustomKernelDataInterface.cpp"
                         ,0x88,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)&param_1[3].field_0x18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1[3].field_0x18);
  }
  (this->Kernel).field0_0x0 = *(TObjectPtr<UPCGComputeKernel_const_>_u_0 *)&param_1[3].field_0x18;
  uVar5 = (**(code **)(**(longlong **)&param_1[3].field_0x18 + 0x2f8))();
  this->ThreadCountMultiplier = uVar5;
  uVar5 = UPCGSettings::GetSeed(this_00,pIVar7);
  this->Seed = uVar5;
  this->SeedSettings = this_00->Seed;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
  this->SeedComponent = uVar5;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  pdVar10 = (double *)(**(code **)(*plVar9 + 0x40))(plVar9,local_80);
  dVar3 = pdVar10[1];
  (this->SourceComponentBounds).Min.field0_0x0._s_0.X = *pdVar10;
  (this->SourceComponentBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = pdVar10[3];
  (this->SourceComponentBounds).Min.field0_0x0._s_0.Z = pdVar10[2];
  (this->SourceComponentBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = pdVar10[5];
  (this->SourceComponentBounds).Max.field0_0x0._s_0.Y = pdVar10[4];
  (this->SourceComponentBounds).Max.field0_0x0._s_0.Z = dVar3;
  *(double *)&(this->SourceComponentBounds).IsValid = pdVar10[6];
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrepareForExecute_GameThread @ 14976fb10

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
UPCGCustomComputeKernelDataProvider::PrepareForExecute_GameThread
          (UPCGCustomComputeKernelDataProvider *this,UPCGDataBinding *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(((this->Kernel).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
  this->ThreadCount = iVar1;
  return true;
}

// Reset @ 149774880

void __thiscall
UPCGCustomComputeKernelDataProvider::Reset(UPCGCustomComputeKernelDataProvider *this)

{
  longlong lVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  uint7 uStack_17;
  
  this->ThreadCount = -1;
  (this->Kernel).field0_0x0.DebugPtr = (UPCGComputeKernel *)0x0;
  (this->SourceComponentBounds).Min.field0_0x0._s_0.X = local_48;
  (this->SourceComponentBounds).Min.field0_0x0._s_0.Y = dStack_40;
  this->ThreadCountMultiplier = 0;
  (this->SourceComponentBounds).Min.field0_0x0._s_0.Z = local_38;
  (this->SourceComponentBounds).Max.field0_0x0._s_0.X = dStack_30;
  this->Seed = 0x2a;
  lVar1 = (ulonglong)uStack_17 << 8;
  (this->SourceComponentBounds).Max.field0_0x0._s_0.Y = local_28;
  (this->SourceComponentBounds).Max.field0_0x0._s_0.Z = dStack_20;
  this->SeedSettings = 0x2a;
  (this->SourceComponentBounds).IsValid = (char)lVar1;
  (this->SourceComponentBounds).Pad[0] = (char)((ulonglong)lVar1 >> 8);
  (this->SourceComponentBounds).Pad[1] = (char)((ulonglong)lVar1 >> 0x10);
  (this->SourceComponentBounds).Pad[2] = (char)((ulonglong)lVar1 >> 0x18);
  (this->SourceComponentBounds).Pad[3] = (char)((ulonglong)lVar1 >> 0x20);
  (this->SourceComponentBounds).Pad[4] = (char)((ulonglong)lVar1 >> 0x28);
  (this->SourceComponentBounds).Pad[5] = (char)((ulonglong)lVar1 >> 0x30);
  (this->SourceComponentBounds).Pad[6] = (char)((ulonglong)lVar1 >> 0x38);
  this->SeedComponent = 0x2a;
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGCustomComputeKernelDataProvider @ 149778670

void __cdecl
UPCGCustomComputeKernelDataProvider::StaticRegisterNativesUPCGCustomComputeKernelDataProvider(void)

{
  return;
}

