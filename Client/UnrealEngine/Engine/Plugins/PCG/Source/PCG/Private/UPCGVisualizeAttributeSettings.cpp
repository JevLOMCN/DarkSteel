// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c396d0

UClass * __cdecl UPCGVisualizeAttributeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVisualizeAttributeSettings",
               &Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGVisualizeAttributeSettings,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVisualizeAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGVisualizeAttributeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton;
}

// UPCGVisualizeAttributeSettings @ 149c4c920

UPCGVisualizeAttributeSettings * __thiscall
UPCGVisualizeAttributeSettings::UPCGVisualizeAttributeSettings
          (UPCGVisualizeAttributeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVisualizeAttributeSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->AttributeSource);
  this->bPrefixWithIndex = true;
  this->bPrefixWithAttributeName = false;
  (this->CustomPrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPrefixString).Data.ArrayNum = 0;
  (this->CustomPrefixString).Data.ArrayMax = 0;
  (this->LocalOffset).field0_0x0._s_0.X = 0.0;
  (this->LocalOffset).field0_0x0._s_0.Y = 0.0;
  (this->LocalOffset).field0_0x0._s_0.Z = 0.0;
  (this->Color).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
  this->Duration = 30.0;
  this->PointLimit = 0x1000;
  this->bVisualizeEnabled = true;
  return this;
}

// UPCGVisualizeAttributeSettings @ 149c4c9b0

UPCGVisualizeAttributeSettings * __thiscall
UPCGVisualizeAttributeSettings::UPCGVisualizeAttributeSettings
          (UPCGVisualizeAttributeSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVisualizeAttributeSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->AttributeSource);
  this->bPrefixWithIndex = true;
  this->bPrefixWithAttributeName = false;
  (this->CustomPrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPrefixString).Data.ArrayNum = 0;
  (this->CustomPrefixString).Data.ArrayMax = 0;
  (this->LocalOffset).field0_0x0._s_0.X = 0.0;
  (this->LocalOffset).field0_0x0._s_0.Y = 0.0;
  (this->LocalOffset).field0_0x0._s_0.Z = 0.0;
  (this->Color).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
  this->Duration = 30.0;
  this->PointLimit = 0x1000;
  this->bVisualizeEnabled = true;
  return this;
}

// ~UPCGVisualizeAttributeSettings @ 149c4dee0

void __thiscall
UPCGVisualizeAttributeSettings::~UPCGVisualizeAttributeSettings
          (UPCGVisualizeAttributeSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGVisualizeAttributeSettings__6B_;
  pFVar1 = (this->CustomPrefixString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->AttributeSource).field_0x28,
             *(int *)&(this->AttributeSource).field_0x30);
  pvVar2 = *(void **)&(this->AttributeSource).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60c80

TSharedPtr<IPCGElement,1> * __thiscall
UPCGVisualizeAttributeSettings::CreateElement
          (UPCGVisualizeAttributeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGVisualizeAttribute___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGVisualizeAttribute__6B_;
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

// GetPrivateStaticClass @ 149c78f30

UClass * __cdecl UPCGVisualizeAttributeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVisualizeAttributeSettings",
               &Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGVisualizeAttributeSettings,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVisualizeAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGVisualizeAttributeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVisualizeAttributeSettings.InnerSingleton;
}

// InputPinProperties @ 149c802d0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGVisualizeAttributeSettings::InputPinProperties
          (UPCGVisualizeAttributeSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c819c0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGVisualizeAttributeSettings::OutputPinProperties
          (UPCGVisualizeAttributeSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGVisualizeAttributeSettings @ 149c920e0

void __cdecl
UPCGVisualizeAttributeSettings::StaticRegisterNativesUPCGVisualizeAttributeSettings(void)

{
  return;
}

