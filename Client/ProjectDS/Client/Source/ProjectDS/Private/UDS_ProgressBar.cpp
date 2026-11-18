// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b56b8b0

UClass * __cdecl UDS_ProgressBar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ProgressBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ProgressBar",
               &Z_Registration_Info_UClass_UDS_ProgressBar.InnerSingleton,
               StaticRegisterNativesUDS_ProgressBar,0x450,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ProgressBar>,
               InternalVTableHelperCtorCaller<UDS_ProgressBar>,local_res8,UProgressBar::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ProgressBar.InnerSingleton;
}

// UDS_ProgressBar @ 14b56daa0

UDS_ProgressBar * __thiscall
UDS_ProgressBar::UDS_ProgressBar(UDS_ProgressBar *this,FVTableHelper *param_1)

{
  UProgressBar::UProgressBar((UProgressBar *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_ProgressBar @ 14b56e3a0

void __thiscall UDS_ProgressBar::~UDS_ProgressBar(UDS_ProgressBar *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  UProgressBar::~UProgressBar((UProgressBar *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f7b0

UClass * __cdecl UDS_ProgressBar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ProgressBar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ProgressBar",
               &Z_Registration_Info_UClass_UDS_ProgressBar.InnerSingleton,
               StaticRegisterNativesUDS_ProgressBar,0x450,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ProgressBar>,
               InternalVTableHelperCtorCaller<UDS_ProgressBar>,local_res8,UProgressBar::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ProgressBar.InnerSingleton;
}

// StaticRegisterNativesUDS_ProgressBar @ 14b56fdb0

void __cdecl UDS_ProgressBar::StaticRegisterNativesUDS_ProgressBar(void)

{
  return;
}

// UDS_ProgressBar @ 14bc840b0

UDS_ProgressBar * __thiscall
UDS_ProgressBar::UDS_ProgressBar(UDS_ProgressBar *this,FObjectInitializer *param_1)

{
  UProgressBar::UProgressBar((UProgressBar *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// BeginDestroy @ 14bc87dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ProgressBar::BeginDestroy(UDS_ProgressBar *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->field_0xf9 & 0x20) != 0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// ReleaseSlateResources @ 14bcc3bf0

void __thiscall UDS_ProgressBar::ReleaseSlateResources(UDS_ProgressBar *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  uStack_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x438 != &uStack_18) {
    *(undefined8 *)&this->field_0x438 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x440,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SynchronizeProperties @ 14bccbb30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ProgressBar::SynchronizeProperties(UDS_ProgressBar *this)

{
  SProgressBar *pSVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  TAttribute<float> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  float *pfVar11;
  FLinearColor_u_0 *pFVar12;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar13;
  byte bVar14;
  byte bVar15;
  float fVar16;
  FName FStackX_8;
  UDS_ProgressBar *pUStackX_10;
  FName FStackX_18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_328;
  FDelegateAllocation FStack_320;
  float fStack_310;
  undefined1 uStack_30c;
  undefined1 uStack_308;
  undefined1 auStack_300 [8];
  ForAnyElementType FStack_2f8;
  ulonglong uStack_2f0;
  code *pcStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  bool bStack_2d8;
  FLinearColor_u_0 FStack_2c8;
  undefined1 uStack_2b8;
  undefined1 uStack_2b4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_2b0;
  ForAnyElementType FStack_2a8;
  ulonglong uStack_2a0;
  float fStack_298;
  char cStack_294;
  undefined1 uStack_290;
  undefined1 auStack_288 [8];
  void *pvStack_280;
  int iStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  void *pvStack_260;
  undefined8 uStack_258;
  float fStack_250;
  char cStack_24c;
  undefined1 uStack_248;
  undefined1 auStack_240 [24];
  float fStack_228;
  undefined1 uStack_224;
  undefined1 uStack_220;
  undefined1 auStack_218 [8];
  void *pvStack_210;
  undefined8 uStack_208;
  float fStack_200;
  char cStack_1fc;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  undefined1 uStack_1c4;
  undefined1 auStack_1c0 [24];
  FDestructionSentinel FStack_1a8;
  FDestructionSentinel FStack_190;
  FDestructionSentinel FStack_178;
  FDestructionSentinel FStack_160;
  FDelegateAllocation *pFStack_148;
  TVector2<double>_u_0 TStack_140;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  TAttribute<TOptional<float>_> TStack_f0;
  FLinearColor_u_0 FStack_c8;
  float fStack_b8;
  undefined1 uStack_b4;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> TStack_b0;
  FReadAccessScope FStack_98;
  FReadAccessScope FStack_80;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [40];
  
  FStackX_8 = (FName)((ulonglong)FStackX_8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  if (*(longlong *)&this->field_0x438 != 0) {
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x3f8);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x3f8,
                 &FStack_98);
      FStackX_8.ComparisonIndex.Value = *(uint *)&this->field_0x408;
      FStackX_8.Number = *(uint *)&this->field_0x40c;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_98);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x3f8);
      pTVar8 = TAttribute<float>::Create<UObject>
                         ((TAttribute<float> *)auStack_110,pUVar7,&FStackX_8);
      uStack_2e0 = 0;
      pcStack_2e8 = UWidget::ConvertFloatToOptionalFloat;
      TStack_328.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_320.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_328,(FWriteAccessScope *)&FStack_160);
      pFStack_148 = &FStack_320;
      puVar9 = UE::Core::Private::DelegateAllocate(0x48,&FStack_320);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TAttribute_M____6B_
        ;
        *(float *)(puVar9 + 1) = pTVar8->Value;
        *(bool *)((longlong)puVar9 + 0xc) = pTVar8->bIsSet;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar8->Getter);
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[5] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__00__CBVUProgressBar____A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy__V__TAttribute_M____6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[6] = 0;
        pUStackX_10 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 6),(FObjectPtr)&pUStackX_10);
        puVar9[7] = pcStack_2e8;
        puVar9[8] = CONCAT44(uStack_2dc,uStack_2e0);
      }
      if (FStack_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_160.Accessor,&FStack_160);
      }
      cStack_294 = '\0';
      uStack_290 = 1;
      auStack_288 = (undefined1  [8])0x0;
      pvStack_280 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_328,(FWriteAccessScope *)&pcStack_2e8);
      if (pvStack_280 != (void *)0x0) {
        FMemory::Free(pvStack_280);
      }
      pvStack_280 = (void *)FStack_320.DelegateAllocator;
      iStack_278 = FStack_320.DelegateSize;
      FStack_320.DelegateSize = 0;
      FStack_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (bStack_2d8 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_2dc,uStack_2e0),
                   (FDestructionSentinel *)&pcStack_2e8);
      }
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_288;
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      bVar6 = true;
      fVar16 = fStack_298;
      cStack_1fc = cStack_294;
      uStack_1f8 = uStack_290;
    }
    else {
      auStack_270._0_4_ = *(undefined4 *)&this->field_0x3e0;
      auStack_268 = (undefined1  [8])0x0;
      pvStack_260 = (void *)0x0;
      auStack_270[4] = true;
      uStack_258 = 0;
      pfVar11 = TAttribute<float>::Get((TAttribute<float> *)auStack_270);
      fVar16 = *pfVar11;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_268);
      if (pvStack_260 != (void *)0x0) {
        FMemory::Free(pvStack_260);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_268);
      cStack_1fc = '\x01';
      uStack_30c = 1;
      uStack_2f0 = 0;
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_300;
      uStack_1f8 = 1;
      uStack_308 = 1;
      auStack_300 = (undefined1  [8])0x0;
      FStack_2f8.Data = (FScriptContainerElement *)0x0;
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      bVar6 = false;
      fStack_310 = fVar16;
    }
    if (cStack_1fc != '\0') {
      fStack_200 = fVar16;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1f0,pTVar13);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_300,
                 (FWriteAccessScope *)&FStack_1a8);
      if (((int)uStack_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
        uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
      }
      if (FStack_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1a8.Accessor,&FStack_1a8);
      }
      if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_300);
    }
    if (bVar4) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_288);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_280 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_280);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_288);
    }
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_328,(FWriteAccessScope *)&FStack_190);
      if ((FStack_320.DelegateSize != 0) &&
         (FStack_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_320.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_320,0,0,0x10);
        FStack_320.DelegateSize = 0;
      }
      if (FStack_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_190.Accessor,&FStack_190);
      }
      if (FStack_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_320.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_328.AccessDetector);
    }
    if (bVar6) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_108);
      if ((void *)auStack_108._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_108._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_108);
    }
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x420);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x420,
                 &FStack_80);
      FStackX_18.ComparisonIndex.Value = *(uint *)&this->field_0x430;
      FStackX_18.Number = *(uint *)&this->field_0x434;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_80);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->field_0x420);
      pFVar12 = (FLinearColor_u_0 *)
                TAttribute<FSlateColor>::Create<UObject>
                          ((TAttribute<FSlateColor> *)auStack_68,pUVar7,&FStackX_18);
      bVar15 = 0x10;
    }
    else {
      uStack_2b8 = 0;
      FStack_2c8._0_8_ = *(undefined8 *)&this->field_0x410;
      FStack_2c8._8_8_ = *(undefined8 *)&this->field_0x418;
      uStack_2b4 = 1;
      pFVar12 = &FStack_2c8;
      TStack_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2a8.Data = (FScriptContainerElement *)0x0;
      uStack_2a0 = 0;
      bVar15 = 0x20;
    }
    uStack_1d8 = *(undefined8 *)&(((FSlateColor *)&(pFVar12->_s_0).R)->SpecifiedColor).field0_0x0;
    uStack_1d0._0_4_ = *(float *)((longlong)pFVar12 + 8);
    uStack_1d0._4_4_ = *(float *)((longlong)pFVar12 + 0xc);
    fStack_1c8 = (&pFVar12->_s_0)[1].R;
    uStack_1c4 = *(undefined1 *)(pFVar12->RGBA + 5);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1c0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar12->RGBA + 6));
    if ((bVar15 & 0x20) != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_2b0,(FWriteAccessScope *)&FStack_178);
      if (((int)uStack_2a0 != 0) && (FStack_2a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a8,0,0,0x10);
        uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
      }
      if (FStack_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_178.Accessor,&FStack_178);
      }
      if (FStack_2a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_2b0.AccessDetector);
    }
    if ((bVar15 & 0x10) != 0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_50);
      if ((void *)auStack_50._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_50._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_50);
    }
    if (*(longlong *)&this->field_0x438 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SProgressBar::SetStyle
              (*(SProgressBar **)&this->field_0x438,(FProgressBarStyle *)&this->field_0x1b0);
    if (*(longlong *)&this->field_0x438 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SProgressBar::SetBarFillType(*(SProgressBar **)&this->field_0x438,(uint)(byte)this->field_0x3e4)
    ;
    if (*(longlong *)&this->field_0x438 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SProgressBar::SetBarFillStyle
              (*(SProgressBar **)&this->field_0x438,(uint)(byte)this->field_0x3e5);
    if (*(longlong *)&this->field_0x438 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = *(SProgressBar **)&this->field_0x438;
    if (this->field_0x3e6 == '\0') {
      cStack_24c = cStack_1fc;
      if (cStack_1fc != '\0') {
        fStack_250 = fStack_200;
      }
      uStack_248 = uStack_1f8;
      TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_240
                 ,(TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
                  auStack_1f0);
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_240;
      bVar14 = 0x80;
      fStack_228 = fStack_250;
      TStack_f0.Value.bIsSet = (bool)cStack_24c;
      TStack_f0.bIsSet = (bool)uStack_248;
    }
    else {
      uStack_224 = 0;
      uStack_208 = 0;
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_218;
      uStack_220 = 1;
      auStack_218 = (undefined1  [8])0x0;
      pvStack_210 = (void *)0x0;
      bVar14 = 0x40;
      TStack_f0.Value.bIsSet = (bool)'\0';
      TStack_f0.bIsSet = (bool)1;
    }
    if (TStack_f0.Value.bIsSet != false) {
      TStack_f0.Value.TypedValue = fStack_228;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_f0.Getter,pTVar13);
    SProgressBar::SetPercent(pSVar1,&TStack_f0);
    if ((char)(bVar14 | bVar15) < '\0') {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_240);
      if ((void *)auStack_240._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_240._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_240);
    }
    if ((bVar14 & 0x40) != 0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_218);
      if (pvStack_210 != (void *)0x0) {
        FMemory::Free(pvStack_210);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_218);
    }
    if (*(longlong *)&this->field_0x438 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = *(SProgressBar **)&this->field_0x438;
    fStack_b8 = fStack_1c8;
    FStack_c8._0_8_ = uStack_1d8;
    FStack_c8._8_8_ = uStack_1d0;
    uStack_b4 = uStack_1c4;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&TStack_b0,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1c0);
    SProgressBar::SetFillColorAndOpacity(pSVar1,(TAttribute<FSlateColor> *)&FStack_c8._s_0);
    if (*(longlong *)&this->field_0x438 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TStack_140._s_0.X = (double)*(undefined8 *)&this->field_0x3e8;
    TStack_140._s_0.Y = (double)*(undefined8 *)&this->field_0x3f0;
    uStack_130 = 1;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    SProgressBar::SetBorderPadding
              (*(SProgressBar **)&this->field_0x438,
               (TAttribute<UE::Math::TVector2<double>_> *)&TStack_140._s_0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1c0);
    if ((void *)auStack_1c0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_1c0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_1c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1f0);
    if ((void *)auStack_1f0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_1f0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_1f0);
  }
  return;
}

