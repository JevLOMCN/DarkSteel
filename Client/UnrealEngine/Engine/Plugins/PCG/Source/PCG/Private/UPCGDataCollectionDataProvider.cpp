// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 14972a370

UClass * __cdecl UPCGDataCollectionDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataCollectionDataProvider",
               &Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDataCollectionDataProvider,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataCollectionDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataCollectionDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton;
}

// UPCGDataCollectionDataProvider @ 14973b4e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPCGDataCollectionDataProvider * __thiscall
UPCGDataCollectionDataProvider::UPCGDataCollectionDataProvider
          (UPCGDataCollectionDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGDataCollectionDataProvider__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ElementCountMultiplier = 0;
  this->bRequiresZeroInitialization = false;
  this->SizeBytes = 0;
  this->bIsBufferSizeValid = false;
  this->bBufferSizeValidated = false;
  (this->DataAdaptor).Object = (FPCGDataUploadAdaptor *)0x0;
  (this->DataAdaptor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPCGDataCollectionDataProvider @ 14973b570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPCGDataCollectionDataProvider * __thiscall
UPCGDataCollectionDataProvider::UPCGDataCollectionDataProvider
          (UPCGDataCollectionDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGDataCollectionDataProvider__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ElementCountMultiplier = 0;
  this->bRequiresZeroInitialization = false;
  this->SizeBytes = 0;
  this->bIsBufferSizeValid = false;
  this->bBufferSizeValidated = false;
  (this->DataAdaptor).Object = (FPCGDataUploadAdaptor *)0x0;
  (this->DataAdaptor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPCGDataCollectionDataProvider @ 14973de90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPCGDataCollectionDataProvider::~UPCGDataCollectionDataProvider
          (UPCGDataCollectionDataProvider *this)

{
  this->_padding_ = (longlong)&___7UPCGDataCollectionDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataAdaptor).SharedReferenceCount.ReferenceController);
  UPCGExportableDataProvider::~UPCGExportableDataProvider((UPCGExportableDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975b680

UClass * __cdecl UPCGDataCollectionDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataCollectionDataProvider",
               &Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGDataCollectionDataProvider,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataCollectionDataProvider>,
               InternalVTableHelperCtorCaller<UPCGDataCollectionDataProvider>,local_res8,
               UPCGExportableDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975df70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FComputeDataProviderRenderProxy * __thiscall
UPCGDataCollectionDataProvider::GetRenderProxy(UPCGDataCollectionDataProvider *this)

{
  FPCGDataCollectionDataProviderProxy *this_00;
  FPCGDataCollectionDataProviderProxy *pFVar1;
  bool bVar2;
  UPCGDataCollectionDataProvider *local_res8;
  FSetupParams local_58;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId631,"UPCGDataCollectionDataProvider::GetRenderProxy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
               ,0x277);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId631);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UPCGDataCollectionDataProvider *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar1 = (FPCGDataCollectionDataProviderProxy *)0x0;
  local_58.DataProvider.WeakPtr.ObjectIndex = 0;
  local_58.DataProvider.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UPCGDataCollectionDataProvider *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_58,(FObjectPtr)&local_res8);
  local_58.PinDesc.Object = (FPCGDataCollectionDesc *)this->_padding_;
  local_58.PinDesc.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_58.PinDesc.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.PinDesc.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.PinDesc.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_58.SizeBytes = this->SizeBytes;
  local_58.bIsBufferSizeValid = this->bIsBufferSizeValid;
  local_58.ExportMode = (EPCGExportMode)this->_padding_;
  local_58.bZeroInitialize = this->bRequiresZeroInitialization;
  local_58.ElementCountMultiplier = this->ElementCountMultiplier;
  local_58.OutputPinLabel = *(FName *)((longlong)&this->_padding_ + 4);
  local_58.OutputPinLabelAlias = *(FName *)((longlong)&this->_padding_ + 4);
  local_58.bProducedByCPU = SUB81(this->_padding_,0);
  local_58.DataAdaptor.Object = (this->DataAdaptor).Object;
  local_58.DataAdaptor.SharedReferenceCount.ReferenceController =
       (this->DataAdaptor).SharedReferenceCount.ReferenceController;
  if (local_58.DataAdaptor.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.DataAdaptor.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.DataAdaptor.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0x90);
  if (this_00 != (FPCGDataCollectionDataProviderProxy *)0x0) {
    pFVar1 = FPCGDataCollectionDataProviderProxy::FPCGDataCollectionDataProviderProxy
                       (this_00,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.DataAdaptor.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.PinDesc.SharedReferenceCount.ReferenceController);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FComputeDataProviderRenderProxy *)pFVar1;
}

// Initialize @ 149769310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPCGDataCollectionDataProvider::Initialize
          (UPCGDataCollectionDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
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
              (&__CpuProfilerEventSpecId544,"UPCGDataCollectionDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
               ,0x220);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId544);
  }
  UPCGExportableDataProvider::Initialize
            ((UPCGExportableDataProvider *)this,param_1,param_2,param_3,param_4);
  if ((char)this->_padding_ == '\0') {
    if (param_1 == (UComputeDataInterface *)0x0) {
      pFVar3 = GetTypeName<UPCGDataCollectionDataInterface>(&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
    pUVar2 = UPCGDataCollectionDataInterface::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UPCGDataCollectionDataInterface>(&local_28);
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
    this->bRequiresZeroInitialization = (bool)param_1[3].field_0x20;
    this->ElementCountMultiplier = *(uint *)&param_1[3].field_0x24;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrepareForExecute_GameThread @ 14976fc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGDataCollectionDataProvider::PrepareForExecute_GameThread
          (UPCGDataCollectionDataProvider *this,UPCGDataBinding *param_1)

{
  longlong *plVar1;
  longlong *this_00;
  longlong lVar2;
  UObject *pUVar3;
  FPCGDataCollectionDesc *pFVar4;
  FName *pFVar5;
  UPCGComputeKernel *pUVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> *pTVar10;
  ulong64 uVar11;
  TReferenceControllerBase<1> *pTVar12;
  FPCGDataUploadAdaptor *pFVar13;
  UPCGSettings *pUVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  FName local_res18;
  FName local_res20;
  FPCGDataUploadAdaptor *local_a0;
  FSharedReferencer<1> FStack_98;
  FString local_90;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_80;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_70;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_60;
  FString local_50;
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId561,
               "UPCGDataCollectionDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
               ,0x231);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId561);
  }
  if (param_1 == (UPCGDataBinding *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
                       ,0x232,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBinding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGComputeDataInterface.cpp"
                       ,0xd1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  plVar1 = &this->_padding_;
  this_00 = &this->_padding_;
  if (*plVar1 == 0) {
    pTVar10 = UPCGDataBinding::GetCachedKernelPinDataDesc(param_1,&local_60,(int)this->_padding_);
    if ((TSharedPtr<FPCGDataCollectionDesc_const_,1> *)plVar1 != pTVar10) {
      *plVar1 = (longlong)pTVar10->Object;
      pTVar10->Object = (FPCGDataCollectionDesc *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)this_00,&pTVar10->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
  }
  pTVar15 = (TReferenceControllerBase<1> *)*this_00;
  lVar2 = *plVar1;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (lVar2 == 0) {
    if (2 < (byte)LogPCG._0_1_) {
      local_res18 = *(FName *)((longlong)&this->_padding_ + 4);
      ::FName::ToString(&local_res18,&local_50);
      if ((UObject *)this->_padding_ != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this->_padding_);
        }
        pUVar3 = (UObject *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        local_res20.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res20.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res20,&local_90);
        pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000001;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((pTVar16 != (TReferenceControllerBase<1> *)0x0) &&
         (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (this->bBufferSizeValidated == false) {
      local_80.Object = (FPCGDataCollectionDesc *)this->_padding_;
      local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)*this_00;
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar11 = PCGDataCollectionPackingHelpers::ComputePackedSizeBytes(&local_80);
      this->SizeBytes = uVar11;
      bVar8 = PCGComputeHelpers::IsBufferSizeTooLarge(uVar11,true);
      this->bIsBufferSizeValid = !bVar8;
      if (bVar8) goto LAB_14976fe22;
      this->bBufferSizeValidated = true;
    }
    if ((char)this->_padding_ != '\0') {
      if ((this->DataAdaptor).Object == (FPCGDataUploadAdaptor *)0x0) {
        if (((int)this->_padding_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GetDownstreamInputPinLabelAliases().IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGDataCollectionDataInterface.cpp"
                               ,0x254,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if (((int)this->_padding_ < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pTVar15 = (TReferenceControllerBase<1> *)this->_padding_;
        pFVar4 = (FPCGDataCollectionDesc *)this->_padding_;
        pFVar5 = (FName *)this->_padding_;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar12 = ::operator_new(0x78);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          local_a0 = ___xmm_00000000000000000000000000000010;
          pFVar13 = (FPCGDataUploadAdaptor *)&DAT_00000010;
          FStack_98.ReferenceController = _UNK_150651568;
          pTVar12 = pTVar16;
        }
        else {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPCGDataUploadAdaptor___00_SharedPointerInternals__6B_
          ;
          local_70.Object = pFVar4;
          local_70.SharedReferenceCount.ReferenceController = pTVar15;
          FPCGDataUploadAdaptor::FPCGDataUploadAdaptor
                    ((FPCGDataUploadAdaptor *)(pTVar12 + 1),param_1,&local_70,*pFVar5);
          pFVar13 = (FPCGDataUploadAdaptor *)(pTVar12 + 1);
          if ((pFVar13 == (FPCGDataUploadAdaptor *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
          FStack_98.ReferenceController = pTVar12;
          pTVar15 = pTVar16;
          local_a0 = pFVar13;
        }
        if (&this->DataAdaptor != (TSharedPtr<FPCGDataUploadAdaptor,1> *)&local_a0) {
          (this->DataAdaptor).Object = pFVar13;
          local_a0 = (FPCGDataUploadAdaptor *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->DataAdaptor).SharedReferenceCount,&FStack_98);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_98.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      if ((this->DataAdaptor).Object != (FPCGDataUploadAdaptor *)0x0) {
        pFVar13 = TSharedPtr<FPCGDataUploadAdaptor,1>::operator->(&this->DataAdaptor);
        pUVar14 = UPCGComputeDataProvider::GetProducerSettings((UPCGComputeDataProvider *)this);
        pUVar6 = (UPCGComputeKernel *)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UPCGComputeKernel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        bVar8 = FPCGDataUploadAdaptor::PrepareData_GameThread(pFVar13,pUVar6,pUVar14);
        if (!bVar8) {
          bVar8 = false;
          goto LAB_14976fe24;
        }
      }
    }
  }
LAB_14976fe22:
  bVar8 = true;
LAB_14976fe24:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// ReleaseTransientResources @ 149774310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPCGDataCollectionDataProvider::ReleaseTransientResources
          (UPCGDataCollectionDataProvider *this,wchar_t *param_1)

{
  TSharedPtr<FPCGDataUploadAdaptor,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  pTVar1 = &this->DataAdaptor;
  if (pTVar1->Object != (FPCGDataUploadAdaptor *)0x0) {
    local_18 = 0;
    aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FPCGDataUploadAdaptor,1> *)&local_18) {
      pTVar1->Object = (FPCGDataUploadAdaptor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DataAdaptor).SharedReferenceCount,aFStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_10[0].ReferenceController);
    return;
  }
  return;
}

// Reset @ 149774930

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPCGDataCollectionDataProvider::Reset(UPCGDataCollectionDataProvider *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPCGExportableDataProvider::Reset((UPCGExportableDataProvider *)this);
  this->SizeBytes = 0;
  this->bIsBufferSizeValid = false;
  this->ElementCountMultiplier = 0;
  this->bRequiresZeroInitialization = false;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DataAdaptor != (TSharedPtr<FPCGDataUploadAdaptor,1> *)&local_18) {
    (this->DataAdaptor).Object = (FPCGDataUploadAdaptor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DataAdaptor).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->bBufferSizeValidated = false;
  return;
}

// StaticRegisterNativesUPCGDataCollectionDataProvider @ 1497786c0

void __cdecl
UPCGDataCollectionDataProvider::StaticRegisterNativesUPCGDataCollectionDataProvider(void)

{
  return;
}

