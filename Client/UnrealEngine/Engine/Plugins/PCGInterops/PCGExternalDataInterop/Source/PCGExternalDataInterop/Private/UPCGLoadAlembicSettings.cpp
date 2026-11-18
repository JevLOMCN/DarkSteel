// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGExternalDataInterop
// Functions: 10

// StaticClass @ 14cefae10

UClass * __cdecl UPCGLoadAlembicSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoadAlembicSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGExternalDataInterop",L"PCGLoadAlembicSettings",
               &Z_Registration_Info_UClass_UPCGLoadAlembicSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoadAlembicSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLoadAlembicSettings>,
               InternalVTableHelperCtorCaller<UPCGLoadAlembicSettings>,local_res8,
               UPCGExternalDataSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoadAlembicSettings.InnerSingleton;
}

// UPCGLoadAlembicSettings @ 14cefb7a0

UPCGLoadAlembicSettings * __thiscall
UPCGLoadAlembicSettings::UPCGLoadAlembicSettings
          (UPCGLoadAlembicSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGExternalDataSettings::UPCGExternalDataSettings((UPCGExternalDataSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGLoadAlembicSettings__6B_;
  (this->AlembicFilePath).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlembicFilePath).FilePath.Data.ArrayNum = 0;
  (this->AlembicFilePath).FilePath.Data.ArrayMax = 0;
  (this->ConversionScale).field0_0x0._s_0.Y = -1.0;
  (this->ConversionScale).field0_0x0._s_0.X = 1.0;
  (this->ConversionScale).field0_0x0._s_0.Z = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ConversionRotation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ConversionRotation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ConversionRotation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bConversionFlipHandedness = false;
  return this;
}

// UPCGLoadAlembicSettings @ 14cefb830

UPCGLoadAlembicSettings * __thiscall
UPCGLoadAlembicSettings::UPCGLoadAlembicSettings
          (UPCGLoadAlembicSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UPCGExternalDataSettings::UPCGExternalDataSettings((UPCGExternalDataSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGLoadAlembicSettings__6B_;
  (this->AlembicFilePath).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlembicFilePath).FilePath.Data.ArrayNum = 0;
  (this->AlembicFilePath).FilePath.Data.ArrayMax = 0;
  (this->ConversionScale).field0_0x0._s_0.Y = -1.0;
  (this->ConversionScale).field0_0x0._s_0.X = 1.0;
  (this->ConversionScale).field0_0x0._s_0.Z = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ConversionRotation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ConversionRotation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ConversionRotation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bConversionFlipHandedness = false;
  return this;
}

// ~UPCGLoadAlembicSettings @ 14cefb8c0

void __thiscall UPCGLoadAlembicSettings::~UPCGLoadAlembicSettings(UPCGLoadAlembicSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGLoadAlembicSettings__6B_;
  pFVar1 = (this->AlembicFilePath).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGExternalDataSettings::~UPCGExternalDataSettings((UPCGExternalDataSettings *)this);
  return;
}

// CreateElement @ 14cefbb10

TSharedPtr<IPCGElement,1> * __thiscall
UPCGLoadAlembicSettings::CreateElement
          (UPCGLoadAlembicSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGLoadAlembicElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGLoadAlembicElement__6B_;
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

// GetPrivateStaticClass @ 14cefc390

UClass * __cdecl UPCGLoadAlembicSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoadAlembicSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGExternalDataInterop",L"PCGLoadAlembicSettings",
               &Z_Registration_Info_UClass_UPCGLoadAlembicSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoadAlembicSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLoadAlembicSettings>,
               InternalVTableHelperCtorCaller<UPCGLoadAlembicSettings>,local_res8,
               UPCGExternalDataSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoadAlembicSettings.InnerSingleton;
}

// SetupFromStandard @ 14cefc860

void __thiscall
UPCGLoadAlembicSettings::SetupFromStandard
          (UPCGLoadAlembicSettings *this,EPCGLoadAlembicStandardSetup param_1)

{
  if (param_1 == CitySample) {
    SetupFromStandard(CitySample,&this->ConversionScale,&this->ConversionRotation,
                      &this->bConversionFlipHandedness,
                      (TMap<FString,FPCGAttributePropertyInputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>_>
                       *)&this->_padding_);
  }
  return;
}

// SetupFromStandard @ 14cefc8a0

void __cdecl
UPCGLoadAlembicSettings::SetupFromStandard
          (EPCGLoadAlembicStandardSetup param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool *param_4,
          TMap<FString,FPCGAttributePropertyInputSelector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>_>
          *param_5)

{
  undefined8 uVar1;
  FString *pFVar2;
  undefined1 local_e8 [16];
  FString local_d8;
  FPCGAttributePropertySelector local_c8;
  FPCGAttributePropertySelector local_88;
  FPCGAttributePropertySelector local_48;
  
  if (param_1 == CitySample) {
    (param_2->field0_0x0)._s_0.X = 1.0;
    (param_2->field0_0x0)._s_0.Y = 1.0;
    (param_2->field0_0x0)._s_0.Z = 1.0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (double)uVar1;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *param_4 = true;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
             *)param_5);
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_48);
    pFVar2 = ::FString::FString((FString *)local_e8,L"$Position.xzy");
    FPCGAttributePropertySelector::Update(&local_48,pFVar2);
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    local_e8._0_8_ = ::FString::FString(&local_d8,L"position");
    local_e8._8_8_ = &local_48;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&>_>
              ((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
                *)param_5,
               (TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&> *)
               &stack0x00000008,(bool *)local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_88);
    pFVar2 = ::FString::FString(&local_d8,L"$Scale.xzy");
    FPCGAttributePropertySelector::Update(&local_88,pFVar2);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_e8._0_8_ = ::FString::FString(&local_d8,L"scale");
    local_e8._8_8_ = &local_88;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&>_>
              ((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
                *)param_5,
               (TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&> *)
               &stack0x00000008,(bool *)local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_c8);
    pFVar2 = ::FString::FString(&local_d8,L"$Rotation.xzyw");
    FPCGAttributePropertySelector::Update(&local_c8,pFVar2);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_e8._0_8_ = ::FString::FString(&local_d8,L"orient");
    local_e8._8_8_ = &local_c8;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&>_>
              ((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
                *)param_5,
               (TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&> *)
               &stack0x00000008,(bool *)local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_c8.ExtraNames.AllocatorInstance.Data,local_c8.ExtraNames.ArrayNum);
    if (local_c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_88.ExtraNames.AllocatorInstance.Data,local_88.ExtraNames.ArrayNum);
    if (local_88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
    if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUPCGLoadAlembicSettings @ 14cefcad0

void __cdecl UPCGLoadAlembicSettings::StaticRegisterNativesUPCGLoadAlembicSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGLoadAlembicSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetupFromStandard @ 14cefd0c0

void __cdecl
UPCGLoadAlembicSettings::execSetupFromStandard(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FString *pFVar3;
  char local_res10 [8];
  undefined1 local_e8 [16];
  FString local_d8;
  FPCGAttributePropertySelector local_c8;
  FPCGAttributePropertySelector local_88;
  FPCGAttributePropertySelector local_48;
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\x01') {
    *(undefined8 *)&param_1[7].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&param_1[7].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&param_1[7].field_0x20 = 0x3ff0000000000000;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&param_1[8].field_0x8 = uVar2;
    *(double *)&param_1[8].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    param_1[8].field_0x18 = 1;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
             *)(param_1 + 5));
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_48);
    pFVar3 = ::FString::FString((FString *)local_e8,L"$Position.xzy");
    FPCGAttributePropertySelector::Update(&local_48,pFVar3);
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    local_e8._0_8_ = ::FString::FString(&local_d8,L"position");
    local_e8._8_8_ = &local_48;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&>_>
              ((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
                *)(param_1 + 5),
               (TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&> *)
               &stack0x00000020,(bool *)local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_88);
    pFVar3 = ::FString::FString(&local_d8,L"$Scale.xzy");
    FPCGAttributePropertySelector::Update(&local_88,pFVar3);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_e8._0_8_ = ::FString::FString(&local_d8,L"scale");
    local_e8._8_8_ = &local_88;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&>_>
              ((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
                *)(param_1 + 5),
               (TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&> *)
               &stack0x00000020,(bool *)local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&local_c8);
    pFVar3 = ::FString::FString(&local_d8,L"$Rotation.xzyw");
    FPCGAttributePropertySelector::Update(&local_c8,pFVar3);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_e8._0_8_ = ::FString::FString(&local_d8,L"orient");
    local_e8._8_8_ = &local_c8;
    TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&>_>
              ((TSet<TTuple<FString,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FString,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
                *)(param_1 + 5),
               (TPairInitializer<FString_&&,FPCGAttributePropertyInputSelector_&&> *)
               &stack0x00000020,(bool *)local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_c8.ExtraNames.AllocatorInstance.Data,local_c8.ExtraNames.ArrayNum);
    if (local_c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_88.ExtraNames.AllocatorInstance.Data,local_88.ExtraNames.ArrayNum);
    if (local_88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ExtraNames.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
    if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
    }
  }
  return;
}

