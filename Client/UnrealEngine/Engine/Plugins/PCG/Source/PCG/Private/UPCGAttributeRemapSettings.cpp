// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149a18240

UClass * __cdecl UPCGAttributeRemapSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeRemapSettings",
               &Z_Registration_Info_UClass_UPCGAttributeRemapSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeRemapSettings,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeRemapSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeRemapSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeRemapSettings.InnerSingleton;
}

// UPCGAttributeRemapSettings @ 149ad0fa0

UPCGAttributeRemapSettings * __thiscall
UPCGAttributeRemapSettings::UPCGAttributeRemapSettings
          (UPCGAttributeRemapSettings *this,FVTableHelper *param_1)

{
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,param_1);
  this->Mode = Ranges;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->InRangeMin = 0.0;
  this->InRangeMax = 1.0;
  this->OutRangeMax = 1.0;
  this->OutRangeMin = 0.0;
  this->bClampToUnitRange = false;
  this->bIgnoreValuesOutsideInputRange = false;
  this->bAllowInverseRange = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Curve);
  return this;
}

// UPCGAttributeRemapSettings @ 149ad1040

UPCGAttributeRemapSettings * __thiscall
UPCGAttributeRemapSettings::UPCGAttributeRemapSettings(UPCGAttributeRemapSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGMetadataSettingsBase::UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this,pFVar2);
  this->Mode = Ranges;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->InRangeMin = 0.0;
  this->InRangeMax = 1.0;
  this->OutRangeMax = 1.0;
  this->OutRangeMin = 0.0;
  this->bClampToUnitRange = false;
  this->bIgnoreValuesOutsideInputRange = false;
  this->bAllowInverseRange = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Curve);
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->bAllowInverseRange = true;
  }
  return this;
}

// ~UPCGAttributeRemapSettings @ 149ad3370

void __thiscall
UPCGAttributeRemapSettings::~UPCGAttributeRemapSettings(UPCGAttributeRemapSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  pFVar1 = (this->Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Curve).EditorCurveData._padding_);
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar2 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGMetadataSettingsBase::~UPCGMetadataSettingsBase((UPCGMetadataSettingsBase *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149af4ae0

void __thiscall
UPCGAttributeRemapSettings::ApplyPreconfiguredSettings
          (UPCGAttributeRemapSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  if (*(int *)param_1 == 0) {
    FPCGAttributePropertySelector::SetPointProperty
              ((FPCGAttributePropertySelector *)&this->InputSource,Density,true);
    this->bClampToUnitRange = true;
  }
  else if (*(int *)param_1 == 1) {
    this->Mode = Curve;
    return;
  }
  return;
}

// CreateElement @ 149afc3b0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeRemapSettings::CreateElement
          (UPCGAttributeRemapSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGAttributeRemapElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeRemapElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 149b13dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UPCGAttributeRemapSettings::GetAdditionalTitleInformation
          (UPCGAttributeRemapSettings *this,FString *__return_storage_ptr__)

{
  EPCGAttributeRemapMode EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  FText *pFVar6;
  FString *pFVar7;
  void *pvVar8;
  FName *pFVar9;
  ulong64 uVar10;
  int iVar11;
  wchar_t *pwVar12;
  void *pvVar13;
  wchar_t *pwVar14;
  undefined1 auStack_2b8 [32];
  FText local_298;
  FText local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_268.Base = local_248;
  local_298.TextData.Reference._0_4_ = 0;
  pwVar14 = L"Curve";
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.CurPos = local_248;
  pFVar6 = &local_288;
  local_268.End = (wchar_t *)local_48;
  pwVar12 = L"CurveSubtitle";
  EVar1 = this->Mode;
  if (EVar1 != Curve) {
    pwVar14 = L"Ranges";
    pwVar12 = L"RangesSubtitle";
    pFVar6 = &local_298;
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText(pFVar6,L"PCGAttributeRemapElement",pwVar12,pwVar14)
  ;
  pFVar7 = FText::ToString(pFVar6);
  pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
  iVar2 = (pFVar7->Data).ArrayNum;
  iVar11 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar11 = 0;
  }
  uVar10 = (ulong64)iVar11;
  if (local_268.End < local_268.CurPos + uVar10) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
  }
  if (iVar11 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar3,uVar10 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
  }
  if ((((EVar1 != Curve) + 1U & 2) != 0) &&
     ((longlong *)CONCAT44(local_298.TextData.Reference._4_4_,local_298.TextData.Reference._0_4_) !=
      (longlong *)0x0)) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_298.TextData.Reference._4_4_,local_298.TextData.Reference._0_4_) +
                0x10))();
  }
  if ((EVar1 == Curve) && (local_288.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
  }
  pcVar4 = *(code **)(this->_padding_ + 1000);
  pFVar9 = ::FName::FName((FName *)&local_298,0xb,L"InputSource",FNAME_Add);
  cVar5 = (*pcVar4)(this,*pFVar9);
  if (cVar5 == '\0') {
    pcVar4 = *(code **)(this->_padding_ + 1000);
    pFVar9 = ::FName::FName((FName *)&local_298,0xc,L"OutputTarget",FNAME_Add);
    cVar5 = (*pcVar4)(this,*pFVar9);
    if (cVar5 == '\0') {
      if (*(FName *)((longlong)&this->_padding_ + 4) ==
          PCGMetadataAttributeConstants::SourceAttributeName) {
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,&::u__,2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar8 + 2);
        pFVar7 = FPCGAttributePropertySelector::ToString
                           ((FPCGAttributePropertySelector *)&this->InputSource,&local_278,false);
        pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
        iVar2 = (pFVar7->Data).ArrayNum;
        iVar11 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar11 = 0;
        }
        uVar10 = (ulong64)iVar11;
        if (local_268.End < local_268.CurPos + uVar10) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
        }
        if (iVar11 != 0) {
          pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar3,uVar10 * 2);
          local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
        }
      }
      else {
        FPCGAttributePropertySelector::ToString
                  ((FPCGAttributePropertySelector *)&this->_padding_,&local_278,false);
        FPCGAttributePropertySelector::ToString
                  ((FPCGAttributePropertySelector *)&this->InputSource,(FString *)&local_288,false);
        ::FString::PrintfImpl((FString *)&local_298,L" %s -> %s");
        pvVar8 = (void *)CONCAT44(local_298.TextData.Reference._4_4_,
                                  local_298.TextData.Reference._0_4_);
        iVar11 = local_298.Flags - 1;
        if (local_298.Flags == 0) {
          iVar11 = 0;
        }
        uVar10 = (ulong64)iVar11;
        pvVar13 = pvVar8;
        if (local_268.End < local_268.CurPos + uVar10) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
          pvVar13 = (void *)CONCAT44(local_298.TextData.Reference._4_4_,
                                     local_298.TextData.Reference._0_4_);
        }
        if (iVar11 != 0) {
          pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,pvVar8,uVar10 * 2);
          pvVar13 = (void *)CONCAT44(local_298.TextData.Reference._4_4_,
                                     local_298.TextData.Reference._0_4_);
          local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
        }
        if (pvVar13 != (void *)0x0) {
          FMemory::Free(pvVar13);
        }
        if (local_288.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_288.TextData.Reference);
        }
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_268.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// GetInputSource @ 149b16260

FPCGAttributePropertyInputSelector * __thiscall
UPCGAttributeRemapSettings::GetInputSource
          (UPCGAttributeRemapSettings *this,
          FPCGAttributePropertyInputSelector *__return_storage_ptr__,uint param_1)

{
  FPCGAttributePropertySelector *pFVar1;
  FPCGAttributePropertySelector local_88;
  undefined1 local_48 [48];
  int local_18;
  
  if (param_1 == 0) {
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              (&local_88,(FPCGAttributePropertySelector *)&this->InputSource);
    local_88._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,&local_88);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    DestructItems<FString,int>
              ((FString *)local_88.ExtraNames.AllocatorInstance.Data,local_88.ExtraNames.ArrayNum);
  }
  else {
    pFVar1 = (FPCGAttributePropertySelector *)
             FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                       ((FPCGAttributePropertyInputSelector *)local_48);
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,pFVar1);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    DestructItems<FString,int>((FString *)local_48._40_8_,local_18);
    local_88.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)local_48._40_8_;
  }
  if (local_88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ExtraNames.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPinInitialDefaultValueType @ 149b16a90

EPCGMetadataTypes __thiscall
UPCGAttributeRemapSettings::GetPinInitialDefaultValueType
          (UPCGAttributeRemapSettings *this,FName param_1)

{
  return Double;
}

// GetPrivateStaticClass @ 149b177f0

UClass * __cdecl UPCGAttributeRemapSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeRemapSettings",
               &Z_Registration_Info_UClass_UPCGAttributeRemapSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeRemapSettings,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeRemapSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeRemapSettings>,local_res8,
               UPCGMetadataSettingsBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeRemapSettings.InnerSingleton;
}

// IsSupportedInputType @ 149b1e430

bool __thiscall
UPCGAttributeRemapSettings::IsSupportedInputType
          (UPCGAttributeRemapSettings *this,ushort param_1,uint param_2,bool *param_3)

{
  *param_3 = false;
  if ((7 < param_1) && (param_1 != 0xb)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUPCGAttributeRemapSettings @ 149b2cef0

void __cdecl UPCGAttributeRemapSettings::StaticRegisterNativesUPCGAttributeRemapSettings(void)

{
  return;
}

