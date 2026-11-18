// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 14972a7f0

UClass * __cdecl UPCGRawBufferDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRawBufferDataProvider",
               &Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGRawBufferDataProvider,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRawBufferDataProvider>,
               InternalVTableHelperCtorCaller<UPCGRawBufferDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton;
}

// UPCGRawBufferDataProvider @ 14973c4f0

UPCGRawBufferDataProvider * __thiscall
UPCGRawBufferDataProvider::UPCGRawBufferDataProvider
          (UPCGRawBufferDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGRawBufferDataProvider__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->SizeBytes = -1;
  this->bZeroInitialize = false;
  (this->DataToUpload).field0_0x0.DebugPtr = (UPCGRawBufferData *)0x0;
  (this->ReadbackState).Object = (FReadbackState *)0x0;
  (this->ReadbackState).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPCGRawBufferDataProvider @ 14973c580

UPCGRawBufferDataProvider * __thiscall
UPCGRawBufferDataProvider::UPCGRawBufferDataProvider
          (UPCGRawBufferDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGRawBufferDataProvider__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->SizeBytes = -1;
  this->bZeroInitialize = false;
  (this->DataToUpload).field0_0x0.DebugPtr = (UPCGRawBufferData *)0x0;
  (this->ReadbackState).Object = (FReadbackState *)0x0;
  (this->ReadbackState).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPCGRawBufferDataProvider @ 14973e6c0

void __thiscall
UPCGRawBufferDataProvider::~UPCGRawBufferDataProvider(UPCGRawBufferDataProvider *this)

{
  this->_padding_ = (longlong)&___7UPCGRawBufferDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadbackState).SharedReferenceCount.ReferenceController);
  UPCGExportableDataProvider::~UPCGExportableDataProvider((UPCGExportableDataProvider *)this);
  return;
}

// operator() @ 1497407f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()
          (void *this,void *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  FTSTicker *this_00;
  code **ppcVar13;
  int iVar14;
  undefined1 auStackY_c8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  if (param_1 != (void *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
    pFVar4 = *(ForAnyElementType **)this;
    if (pFVar4 != (ForAnyElementType *)0x0) {
      iVar14 = (int)((ulonglong)(longlong)param_2 >> 2);
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar14,pFVar4,(int *)(pFVar4 + 1),
                          (int *)((longlong)&pFVar4[1].Data + 4));
      if (iVar14 != 0) {
        memcpy(pFVar4->Data + (longlong)iVar12 * 4,param_1,(longlong)iVar14 << 2);
      }
      pcVar5 = *(code **)((longlong)this + 8);
      pcVar6 = *(code **)this;
      if (pcVar5 != (code *)0x0) {
        LOCK();
        *(int *)(pcVar5 + 8) = *(int *)(pcVar5 + 8) + 1;
        UNLOCK();
      }
      pcVar7 = *(code **)((longlong)this + 0x10);
      pcVar8 = *(code **)((longlong)this + 0x18);
      uVar3 = *(undefined1 *)((longlong)this + 0x20);
      uVar9 = *(undefined8 *)((longlong)this + 0x24);
      uVar10 = *(undefined8 *)((longlong)this + 0x2c);
      uVar11 = *(undefined8 *)((longlong)this + 0x34);
      this_00 = FTSTicker::GetCoreTicker();
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x48,8);
      local_50[2] = pcVar5;
      *local_50 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_50[1] = pcVar6;
      local_50[3] = pcVar7;
      local_50[4] = pcVar8;
      *(undefined1 *)(local_50 + 5) = uVar3;
      *(undefined8 *)((longlong)local_50 + 0x2c) = uVar9;
      *(undefined8 *)((longlong)local_50 + 0x34) = uVar10;
      *(undefined8 *)((longlong)local_50 + 0x3c) = uVar11;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`ExecuteOnGameThread<``UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                      ::Call;
      }
      FTSTicker::AddTicker
                (this_00,&local_90,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp(201)"
                 ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_78);
      if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_90.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_78[0] != (code *)0x0) {
        ppcVar13 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar13 = local_50;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14975c7c0

UClass * __cdecl UPCGRawBufferDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRawBufferDataProvider",
               &Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGRawBufferDataProvider,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRawBufferDataProvider>,
               InternalVTableHelperCtorCaller<UPCGRawBufferDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975eb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FComputeDataProviderRenderProxy * __thiscall
UPCGRawBufferDataProvider::GetRenderProxy(UPCGRawBufferDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FReadbackState *pFVar5;
  longlong lVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr FVar8;
  TObjectPtr<UPCGRawBufferData_const_>_u_0 TVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FComputeDataProviderRenderProxy *pFVar18;
  longlong *plVar19;
  code *pcVar20;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar21;
  bool bVar22;
  undefined1 auStackY_128 [32];
  FWeakObjectPtr local_f0;
  FWeakObjectPtr local_e8;
  UPCGRawBufferDataProvider *local_e0;
  UObject *local_d8;
  longlong local_d0;
  int local_c8;
  undefined1 local_c4;
  TObjectPtr<UPCGRawBufferData_const_>_u_0 local_c0;
  undefined1 local_b8;
  FComputeDataProviderRenderProxy local_b4;
  FComputeDataProviderRenderProxy local_ac;
  FWeakObjectPtr local_a4;
  FComputeDataProviderRenderProxy local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  FComputeDataProviderRenderProxy local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId175,"UPCGRawBufferDataProvider::GetRenderProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
               ,0xaf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId175);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UPCGRawBufferDataProvider *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UPCGRawBufferDataProvider *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_e0);
  local_c8 = this->SizeBytes;
  local_c4 = this->bZeroInitialize;
  local_c0 = (this->DataToUpload).field0_0x0;
  local_b8 = (undefined1)this->_padding_;
  local_b4 = *(FComputeDataProviderRenderProxy *)((longlong)&this->_padding_ + 4);
  local_ac = *(FComputeDataProviderRenderProxy *)((longlong)&this->_padding_ + 4);
  local_a4 = local_f0;
  local_98 = (FComputeDataProviderRenderProxy)0x0;
  plStack_70 = (longlong *)0x0;
  if (((this->ReadbackState).Object == (FReadbackState *)0x0) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6030217719482154818>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
                          ,0xbe,"ReadbackState"), bVar15)) {
    pcVar20 = (code *)swi(3);
    pFVar18 = (FComputeDataProviderRenderProxy *)(*pcVar20)();
    return pFVar18;
  }
  local_d0 = this->_padding_;
  lVar6 = this->_padding_;
  uVar2 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  local_d8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d8);
  }
  local_e8.ObjectIndex = 0;
  local_e8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d8);
  }
  FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_d8);
  FVar8 = local_e8;
  FVar7 = local_f0;
  pTVar4 = (this->ReadbackState).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->ReadbackState).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = (FComputeDataProviderRenderProxy)0x0;
  plVar19 = FMemory::Malloc(0x48,8);
  plStack_40 = plStack_70;
  uVar14 = uStack_7c;
  uVar13 = uStack_80;
  uVar12 = uStack_84;
  uVar11 = local_88;
  uVar10 = uStack_90;
  plVar19[1] = (longlong)pFVar5;
  plVar19[2] = (longlong)pTVar4;
  *plVar19 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`UPCGRawBufferDataProvider::GetRenderProxy'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  plVar19[4] = local_d0;
  *(char *)(plVar19 + 5) = (char)lVar6;
  *(FWeakObjectPtr *)(plVar19 + 3) = FVar7;
  *(undefined8 *)((longlong)plVar19 + 0x2c) = uVar2;
  *(undefined8 *)((longlong)plVar19 + 0x34) = uVar3;
  *(FWeakObjectPtr *)((longlong)plVar19 + 0x3c) = FVar8;
  pcVar20 = (code *)local_68;
  if (plVar19 != (longlong *)&DAT_fffffffffffffff8) {
    pcVar20 = UE::Core::Private::Function::
              TFunctionRefCaller<`UPCGRawBufferDataProvider::GetRenderProxy'::__l2::<lambda_1>,void,void_const_*,int>
              ::Call;
  }
  uStack_90 = uStack_60;
  local_78 = local_48;
  uStack_74 = uStack_44;
  plStack_70 = plVar19;
  local_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  local_68 = local_98;
  uStack_60 = uVar10;
  local_58 = uVar11;
  uStack_54 = uVar12;
  uStack_50 = uVar13;
  uStack_4c = uVar14;
  bVar15 = local_98 != (FComputeDataProviderRenderProxy)0x0;
  local_98 = (FComputeDataProviderRenderProxy)pcVar20;
  if (bVar15) {
    plVar19 = (longlong *)&local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar19 = plStack_40;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar18 = ::operator_new(0x80);
  if (pFVar18 == (FComputeDataProviderRenderProxy *)0x0) {
    pFVar18 = (FComputeDataProviderRenderProxy *)0x0;
  }
  else {
    *(undefined4 *)(pFVar18 + 1) = 0xffffffff;
    *pFVar18 = (FComputeDataProviderRenderProxy)&___7FPCGRawBufferDataProviderProxy__6B_;
    pFVar1 = pFVar18 + 6;
    pFVar18[1].field_0x4 = local_c4;
    pFVar18[1].field_0x5 = local_b8;
    pFVar18[2] = local_b4;
    pFVar18[3] = local_ac;
    *pFVar1 = (FComputeDataProviderRenderProxy)0x0;
    *(int *)(pFVar18 + 7) = 0;
    *(undefined4 *)&pFVar18[7].field_0x4 = 0;
    pFVar18[4] = (FComputeDataProviderRenderProxy)0x0;
    pFVar18[5] = (FComputeDataProviderRenderProxy)0x0;
    *(FWeakObjectPtr *)(pFVar18 + 8) = local_a4;
    pFVar18[10] = local_98;
    pFVar18[0xf] = (FComputeDataProviderRenderProxy)0x0;
    if (local_98 != (FComputeDataProviderRenderProxy)0x0) {
      plVar19 = (longlong *)&local_88;
      if (plStack_70 != (longlong *)0x0) {
        plVar19 = plStack_70;
      }
      (**(code **)*plVar19)();
    }
    TVar9 = local_c0;
    iVar16 = local_c8;
    if (local_c8 < 4) {
      iVar16 = 4;
    }
    *(int *)(pFVar18 + 1) = iVar16;
    if (local_c0.DebugPtr != (UPCGRawBufferData *)0x0) {
      pTVar21 = &(local_c0.DebugPtr)->Data;
      if (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)pFVar1 == pTVar21) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar15)) {
        pcVar20 = (code *)swi(3);
        pFVar18 = (FComputeDataProviderRenderProxy *)(*pcVar20)();
        return pFVar18;
      }
      iVar16 = ((TVar9.DebugPtr)->Data).ArrayNum;
      if (iVar16 != 0) {
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar16,(ForAnyElementType *)pFVar1,(int *)(pFVar18 + 7),
                            (int *)&pFVar18[7].field_0x4);
        memcpy(*(FScriptContainerElement **)pFVar1 + (longlong)iVar17 * 4,
               (pTVar21->AllocatorInstance).Data,(longlong)iVar16 << 2);
      }
    }
  }
  if (local_98 != (FComputeDataProviderRenderProxy)0x0) {
    plVar19 = (longlong *)&local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar19 = plStack_70;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar18;
}

// Initialize @ 14976a090

void __thiscall
UPCGRawBufferDataProvider::Initialize
          (UPCGRawBufferDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UPCGExportableDataProvider::Initialize
            ((UPCGExportableDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar3 = GetTypeName<UPCGRawBufferDataInterface>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UPCGRawBufferDataInterface::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    this->bZeroInitialize = (bool)param_1[3].field_0x20;
    return;
  }
  pFVar3 = GetTypeName<UPCGRawBufferDataInterface>(&local_28);
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

// PrepareForExecute_GameThread @ 149771a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UPCGRawBufferDataProvider::PrepareForExecute_GameThread
          (UPCGRawBufferDataProvider *this,UPCGDataBinding *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar8;
  FPCGDataCollection *this_00;
  UPCGRawBufferData *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_68;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> FStack_50;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_48;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_38;
  
  if ((param_1 == (UPCGDataBinding *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGComputeDataInterface.cpp"
                         ,0xd1,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  plVar1 = &this->_padding_;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (*plVar1 == 0) {
    pTVar8 = UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_38,(int)this->_padding_);
    if ((TSharedPtr<FPCGDataCollectionDesc_const_,1> *)plVar1 != pTVar8) {
      *plVar1 = (longlong)pTVar8->Object;
      pTVar8->Object = (FPCGDataCollectionDesc *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar8->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_48,(int)this->_padding_);
  FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  if (local_48.Object == (FPCGDataCollectionDesc *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6030217719482154864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
                       ,0x90,"ProducerPinDesc");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  else {
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId31,"PCGRawBufferPacking::ComputePackedSizeBytes",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
                 ,0x1f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
    }
    pTVar10 = pTVar12;
    if (local_48.Object != (FPCGDataCollectionDesc *)0x0) {
      pFVar11 = ((local_48.Object)->DataDescs).AllocatorInstance.Data;
      iVar2 = ((local_48.Object)->DataDescs).ArrayNum;
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar14 = pFVar11 + (longlong)iVar2 * 0x68;
      if (pFVar11 != pFVar14) {
        pFVar13 = pFVar11 + 0x18;
        do {
          iVar2 = *(int *)pFVar13;
          pFVar13 = pFVar13 + 0x68;
          pFVar11 = pFVar11 + 0x68;
          pTVar10 = (TReferenceControllerBase<1> *)
                    ((longlong)&pTVar10->_padding_ + (longlong)iVar2 * 4);
        } while (pFVar11 != pFVar14);
      }
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    bVar5 = PCGComputeHelpers::IsBufferSizeTooLarge((ulong64)pTVar10,true);
    if (!bVar5) {
      this->SizeBytes = (int)pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((char)this->_padding_ != '\0') {
    if (((int)this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GetDownstreamInputPinLabelAliases().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
                           ,0x9c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    this_00 = UPCGDataBinding::GetInputDataCollection(param_1);
    if (((int)this->_padding_ < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FPCGDataCollection::GetInputsByPin(this_00,&local_68,(FName *)this->_padding_);
    if (local_68.ArrayNum != 0) {
      if (local_68.ArrayNum != 1) {
        local_res10 = &local_68;
        `UPCGRawBufferDataProvider::PrepareForExecute_GameThread'::__l24::<lambda_1>::operator()
                  (&local_res10);
      }
      if ((local_68.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pUVar9 = Cast<UPCGRawBufferData>((FPCGDataPtrWrapper *)local_68.AllocatorInstance.Data);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UPCGRawBufferData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->DataToUpload).field0_0x0.DebugPtr = pUVar9;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    if ((FPCGTaggedData *)local_68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  FStack_50.ReferenceController = ::operator_new(0x20);
  if (FStack_50.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_50.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_50.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10 = FStack_50.ReferenceController + 1;
    (FStack_50.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_50.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFReadbackState_UPCGRawBufferDataProvider___00_SharedPointerInternals__6B_
    ;
    FStack_50.ReferenceController[1]._padding_ = 0;
    FStack_50.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_50.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    LOCK();
    (FStack_50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar12 = FStack_50.ReferenceController;
    local_58 = pTVar10;
  }
  if (&this->ReadbackState != (TSharedPtr<UPCGRawBufferDataProvider::FReadbackState,1> *)&local_58)
  {
    (this->ReadbackState).Object = (FReadbackState *)pTVar10;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ReadbackState).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return true;
}

// Reset @ 149774f30

void __thiscall UPCGRawBufferDataProvider::Reset(UPCGRawBufferDataProvider *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPCGExportableDataProvider::Reset((UPCGExportableDataProvider *)this);
  this->SizeBytes = -1;
  this->bZeroInitialize = false;
  (this->DataToUpload).field0_0x0.DebugPtr = (UPCGRawBufferData *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ReadbackState != (TSharedPtr<UPCGRawBufferDataProvider::FReadbackState,1> *)&local_18)
  {
    (this->ReadbackState).Object = (FReadbackState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ReadbackState).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StaticRegisterNativesUPCGRawBufferDataProvider @ 149778860

void __cdecl UPCGRawBufferDataProvider::StaticRegisterNativesUPCGRawBufferDataProvider(void)

{
  return;
}

// operator() @ 1505448d0

bool __thiscall
`UPCGRawBufferDataProvider::PrepareForExecute_GameThread'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6030217719482154846>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6030217719482154846>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

