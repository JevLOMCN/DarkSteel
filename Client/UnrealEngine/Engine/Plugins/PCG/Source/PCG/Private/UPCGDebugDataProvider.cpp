// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 14972c7a0

UClass * __cdecl UPCGDebugDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDataProvider",
               &Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDebugDataProvider,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDebugDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDebugDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton;
}

// UPCGDebugDataProvider @ 14973b9a0

UPCGDebugDataProvider * __thiscall
UPCGDebugDataProvider::UPCGDebugDataProvider(UPCGDebugDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->DebugBufferSizeFloats = 0;
  this->_padding_ = (longlong)&___7UPCGDebugDataProvider__6B_;
  return this;
}

// UPCGDebugDataProvider @ 14973b9e0

UPCGDebugDataProvider * __thiscall
UPCGDebugDataProvider::UPCGDebugDataProvider
          (UPCGDebugDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->DebugBufferSizeFloats = 0;
  this->_padding_ = (longlong)&___7UPCGDebugDataProvider__6B_;
  return this;
}

// ~UPCGDebugDataProvider @ 14973e0c0

void __thiscall UPCGDebugDataProvider::~UPCGDebugDataProvider(UPCGDebugDataProvider *this)

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

// operator() @ 149740730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    iVar1 = 0;
    if ((ulonglong)(longlong)param_2 >> 2 != 0) {
      do {
        if (2 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
        iVar1 = iVar1 + 1;
      } while ((ulonglong)(longlong)iVar1 < (ulonglong)(longlong)param_2 >> 2);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14975bbc0

UClass * __cdecl UPCGDebugDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDebugDataProvider",
               &Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDebugDataProvider,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDebugDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDebugDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDebugDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975e210

FComputeDataProviderRenderProxy * __thiscall
UPCGDebugDataProvider::GetRenderProxy(UPCGDebugDataProvider *this)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  FScriptContainerElement *_Src;
  bool bVar4;
  bool bVar5;
  UPCGSettings *pUVar6;
  FString *pFVar7;
  FComputeDataProviderRenderProxy *pFVar8;
  longlong *plVar9;
  ForAnyElementType _Src_00;
  int iVar10;
  FName local_res8;
  FString local_98;
  FString local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  FComputeDataProviderRenderProxy local_58;
  longlong local_48 [3];
  longlong *local_30;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar6 = UPCGComputeDataProvider::GetProducerSettings((UPCGComputeDataProvider *)this);
  if (pUVar6 == (UPCGSettings *)0x0) {
    pFVar7 = ::FString::FString(&local_88,L"MISSINGSETTINGS");
    _Src_00.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar10 = (pFVar7->Data).ArrayNum;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res8 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    _Src_00.Data = local_98.Data.AllocatorInstance.Data;
    iVar10 = local_98.Data.ArrayNum;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
  }
  if ((UObject *)this->_padding_ == (UObject *)0x0) {
    pFVar7 = ::FString::FString(&local_88,L"MISSINGKERNEL");
    bVar5 = false;
    bVar4 = true;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this->_padding_);
    }
    pUVar3 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    local_res8.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&local_res8,&local_98);
    pFVar7 = &local_98;
    bVar5 = true;
    bVar4 = false;
  }
  _Src = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar7->Data).ArrayNum;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar5) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = CONCAT44(local_70._4_4_,iVar10);
  if (iVar10 == 0) {
    local_70 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,&local_78,iVar10,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src_00.Data,(longlong)iVar10 * 2);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar1);
  if (iVar1 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_68,iVar1,(int *)((longlong)&local_60 + 4));
    memcpy(local_68.Data,_Src,(longlong)iVar1 * 2);
  }
  pFVar8 = ::operator_new(0x50);
  if (pFVar8 == (FComputeDataProviderRenderProxy *)0x0) {
    pFVar8 = (FComputeDataProviderRenderProxy *)0x0;
  }
  else {
    local_58 = (FComputeDataProviderRenderProxy)0x0;
    local_30 = FMemory::Malloc(0x28,8);
    local_30[1] = 0;
    *local_30 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UPCGDebugDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_30[1] = (longlong)local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_30 + 2) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_30 + 0x14) = local_70._4_4_;
    local_70 = 0;
    local_30[3] = 0;
    local_30[3] = (longlong)local_68.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_30 + 4) = (undefined4)local_60;
    *(undefined4 *)((longlong)local_30 + 0x24) = local_60._4_4_;
    local_60 = 0;
    if (local_30 + 1 != (longlong *)0x0) {
      local_58 = (FComputeDataProviderRenderProxy)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGDebugDataProvider::GetRenderProxy'::__l2::<lambda_1>,void,void_const_*,int>
                 ::Call;
    }
    uVar2 = this->DebugBufferSizeFloats;
    *pFVar8 = (FComputeDataProviderRenderProxy)&___7FPCGDebugDataProviderProxy__6B_;
    pFVar8[1] = (FComputeDataProviderRenderProxy)0x0;
    pFVar8[2] = (FComputeDataProviderRenderProxy)0x0;
    *(uint *)(pFVar8 + 3) = uVar2;
    pFVar8[4] = local_58;
    pFVar8[9] = (FComputeDataProviderRenderProxy)0x0;
    if (local_58 != (FComputeDataProviderRenderProxy)0x0) {
      plVar9 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar9 = local_30;
      }
      (**(code **)*plVar9)();
    }
    if (local_58 != (FComputeDataProviderRenderProxy)0x0) {
      plVar9 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar9 = local_30;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  if (_Src_00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src_00.Data);
  }
  return pFVar8;
}

// Initialize @ 1497697a0

void __thiscall
UPCGDebugDataProvider::Initialize
          (UPCGDebugDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  FString local_28;
  FString local_18;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId73,"UPCGDebugDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDebugDataInterface.cpp"
               ,0x49);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGDebugDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGDebugDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    this->DebugBufferSizeFloats = *(uint *)&param_1[3].field_0x18;
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  pFVar3 = GetTypeName<UPCGDebugDataInterface>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// Reset @ 149774a60

void __thiscall UPCGDebugDataProvider::Reset(UPCGDebugDataProvider *this)

{
  this->DebugBufferSizeFloats = 0;
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGDebugDataProvider @ 149778730

void __cdecl UPCGDebugDataProvider::StaticRegisterNativesUPCGDebugDataProvider(void)

{
  return;
}

