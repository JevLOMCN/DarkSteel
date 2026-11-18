// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 12

// StaticClass @ 14b2bb180

UClass * __cdecl UWaveTableBank::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WaveTable",L"WaveTableBank",
               &Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton,
               StaticRegisterNativesUWaveTableBank,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWaveTableBank>,InternalVTableHelperCtorCaller<UWaveTableBank>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton;
}

// UWaveTableBank @ 14b2bd790

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

UWaveTableBank * __thiscall
UWaveTableBank::UWaveTableBank(UWaveTableBank *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SampleMode = FixedResolution;
  this->Resolution = Res_256;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ProxyData).Object = (FWaveTableBankAssetProxy *)0x0;
  (this->ProxyData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->SampleRate = 48000;
  this->bBipolar = true;
  return this;
}

// UWaveTableBank @ 14b2bd7f0

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

UWaveTableBank * __thiscall
UWaveTableBank::UWaveTableBank(UWaveTableBank *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SampleMode = FixedResolution;
  this->Resolution = Res_256;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ProxyData).Object = (FWaveTableBankAssetProxy *)0x0;
  (this->ProxyData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->SampleRate = 48000;
  this->bBipolar = true;
  return this;
}

// ~UWaveTableBank @ 14b2bd920

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

void __thiscall UWaveTableBank::~UWaveTableBank(UWaveTableBank *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProxyData).SharedReferenceCount.ReferenceController);
  DestructItems<FWaveTableBankEntry,int>
            ((FWaveTableBankEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum)
  ;
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CopyToProxyData @ 14b2bebc0

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

void __thiscall UWaveTableBank::CopyToProxyData(UWaveTableBank *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  EWaveTableSamplingMode EVar4;
  undefined4 uVar5;
  atomic<int> aVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  FWaveTableBankAssetProxy *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  <lambda_1> local_res8;
  undefined8 local_38 [2];
  
  if ((this->ProxyData).Object != (FWaveTableBankAssetProxy *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!ProxyData.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableBank.cpp"
                        ,0x97,
                        L"Cannot overwrite pre-existing proxy when calling UWaveTableBank::CopyToProxyData"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  pTVar11 = ::operator_new(0x50);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = (FWaveTableBankAssetProxy *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAssetProxy___00_SharedPointerInternals__6B_
    ;
    bVar10 = this->bBipolar;
    aVar6 = (atomic<int>)this->SampleRate;
    EVar4 = this->SampleMode;
    Audio::TProxyData<FWaveTableBankAssetProxy>::TProxyData<FWaveTableBankAssetProxy>
              ((TProxyData<FWaveTableBankAssetProxy> *)(pTVar11 + 1));
    local_res8 = SUB41(uVar5,0);
    pTVar11[1]._padding_ = (longlong)&___7FWaveTableBankAssetProxy__6B_;
    *(undefined4 *)((longlong)&pTVar11[3]._padding_ + 4) = uVar5;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    *(bool *)&pTVar11[3]._padding_ = bVar10;
    pTVar11[3].SharedReferenceCount = aVar6;
    *(EWaveTableSamplingMode *)&pTVar11[3].WeakReferenceCount = EVar4;
    (((TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *)(pTVar11 + 4))->AllocatorInstance).Data
         = (FScriptContainerElement *)0x0;
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    Algo::
    Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,_FWaveTableBankAssetProxy::FWaveTableBankAssetProxy_::__l2::<lambda_1>_>
              (&this->Entries,(TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *)(pTVar11 + 4),
               local_res8);
    pFVar12 = (FWaveTableBankAssetProxy *)(pTVar11 + 1);
    if (pFVar12 == (FWaveTableBankAssetProxy *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      goto LAB_14b2bed4f;
    }
  }
  if (((pFVar12->_padding_ == 0) || (pFVar12->_padding_ == 0)) ||
     (*(int *)(pFVar12->_padding_ + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar12->_padding_ = (longlong)pFVar12;
    if (pTVar11 != (TReferenceControllerBase<1> *)pFVar12->_padding_) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar7 = (longlong *)pFVar12->_padding_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      pFVar12->_padding_ = (longlong)pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14b2bed4f:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = pTVar11;
  if (&this->ProxyData != (TSharedPtr<FWaveTableBankAssetProxy,1> *)local_38) {
    (this->ProxyData).Object = pFVar12;
    pTVar8 = (this->ProxyData).SharedReferenceCount.ReferenceController;
    if (pTVar11 != pTVar8) {
      (this->ProxyData).SharedReferenceCount.ReferenceController = pTVar11;
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar8->SharedReferenceCount;
        aVar6 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar6 == (atomic<int>)0x1) {
          (**(code **)pTVar8->_padding_)(pTVar8);
          LOCK();
          paVar2 = &pTVar8->WeakReferenceCount;
          aVar6 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar6 == (atomic<int>)0x1) {
            (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// CreateProxyData @ 14b2bede0

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

TSharedPtr<Audio::IProxyData,1> * __thiscall
UWaveTableBank::CreateProxyData
          (UWaveTableBank *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  
  if (this->_padding_ == 0) {
    MoveToProxyData((UWaveTableBank *)&this[-1].bBipolar);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableBank.cpp"
                       ,0x91,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (IProxyData *)this->_padding_;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->SampleMode;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetEntries @ 14b2bf4d0

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_> * __thiscall
UWaveTableBank::GetEntries(UWaveTableBank *this)

{
  return &this->Entries;
}

// GetPrivateStaticClass @ 14b2bf820

UClass * __cdecl UWaveTableBank::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WaveTable",L"WaveTableBank",
               &Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton,
               StaticRegisterNativesUWaveTableBank,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWaveTableBank>,InternalVTableHelperCtorCaller<UWaveTableBank>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton;
}

// MoveToProxyData @ 14b2c0250

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

void __thiscall UWaveTableBank::MoveToProxyData(UWaveTableBank *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  uint uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FWaveTableBankAssetProxy *pFVar13;
  undefined8 local_18 [2];
  
  if ((this->ProxyData).Object != (FWaveTableBankAssetProxy *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ProxyData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableBank.cpp"
                       ,0xa0,
                       L"Cannot overwrite pre-existing proxy when calling UWaveTableBank::MoveToProxyData"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar5 = *(uint *)((longlong)&this->_padding_ + 4);
  pTVar10 = ::operator_new(0x50);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = (FWaveTableBankAssetProxy *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWaveTableBankAssetProxy___00_SharedPointerInternals__6B_
    ;
    FWaveTableBankAssetProxy::FWaveTableBankAssetProxy
              ((FWaveTableBankAssetProxy *)(pTVar10 + 1),uVar5,this->SampleMode,this->SampleRate,
               &this->Entries,this->bBipolar);
    pFVar13 = (FWaveTableBankAssetProxy *)(pTVar10 + 1);
    if (pFVar13 == (FWaveTableBankAssetProxy *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_14b2c038d;
    }
  }
  if (((pFVar13->_padding_ == 0) || (pFVar13->_padding_ == 0)) ||
     (*(int *)(pFVar13->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13->_padding_ = (longlong)pFVar13;
    if (pTVar10 != (TReferenceControllerBase<1> *)pFVar13->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)pFVar13->_padding_;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      pFVar13->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14b2c038d:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = pTVar10;
  if (&this->ProxyData != (TSharedPtr<FWaveTableBankAssetProxy,1> *)local_18) {
    (this->ProxyData).Object = pFVar13;
    pTVar7 = (this->ProxyData).SharedReferenceCount.ReferenceController;
    if (pTVar10 != pTVar7) {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      (this->ProxyData).SharedReferenceCount.ReferenceController = pTVar10;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar7->SharedReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        pTVar12 = pTVar11;
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)pTVar7->_padding_)(pTVar7);
          LOCK();
          paVar2 = &pTVar7->WeakReferenceCount;
          aVar4 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Serialize @ 14b2c2640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

void __thiscall UWaveTableBank::Serialize(UWaveTableBank *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14b2c2650

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

void __thiscall UWaveTableBank::Serialize(UWaveTableBank *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUWaveTableBank @ 14b2c2ce0

void __cdecl UWaveTableBank::StaticRegisterNativesUWaveTableBank(void)

{
  return;
}

