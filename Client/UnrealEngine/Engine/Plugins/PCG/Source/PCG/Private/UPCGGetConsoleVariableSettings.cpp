// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9d970

UClass * __cdecl UPCGGetConsoleVariableSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetConsoleVariableSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetConsoleVariableSettings",
               &Z_Registration_Info_UClass_UPCGGetConsoleVariableSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetConsoleVariableSettings,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetConsoleVariableSettings>,
               InternalVTableHelperCtorCaller<UPCGGetConsoleVariableSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetConsoleVariableSettings.InnerSingleton;
}

// UPCGGetConsoleVariableSettings @ 149be6680

UPCGGetConsoleVariableSettings * __thiscall
UPCGGetConsoleVariableSettings::UPCGGetConsoleVariableSettings
          (UPCGGetConsoleVariableSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetConsoleVariableSettings__6B_;
  (this->ConsoleVariableName).ComparisonIndex = 0;
  (this->ConsoleVariableName).Number = 0;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  return this;
}

// UPCGGetConsoleVariableSettings @ 149be66c0

UPCGGetConsoleVariableSettings * __thiscall
UPCGGetConsoleVariableSettings::UPCGGetConsoleVariableSettings
          (UPCGGetConsoleVariableSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetConsoleVariableSettings__6B_;
  (this->ConsoleVariableName).ComparisonIndex = 0;
  (this->ConsoleVariableName).Number = 0;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  return this;
}

// ~UPCGGetConsoleVariableSettings @ 149be9860

void __thiscall
UPCGGetConsoleVariableSettings::~UPCGGetConsoleVariableSettings
          (UPCGGetConsoleVariableSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGGetConsoleVariableSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c047e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetConsoleVariableSettings::CreateElement
          (UPCGGetConsoleVariableSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGetConsoleVariableElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetConsoleVariableElement__6B_;
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

// GetAdditionalTitleInformation @ 149c22a20

FString * __thiscall
UPCGGetConsoleVariableSettings::GetAdditionalTitleInformation
          (UPCGGetConsoleVariableSettings *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->ConsoleVariableName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c24dd0

UClass * __cdecl UPCGGetConsoleVariableSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetConsoleVariableSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetConsoleVariableSettings",
               &Z_Registration_Info_UClass_UPCGGetConsoleVariableSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetConsoleVariableSettings,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetConsoleVariableSettings>,
               InternalVTableHelperCtorCaller<UPCGGetConsoleVariableSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetConsoleVariableSettings.InnerSingleton;
}

// InputPinProperties @ 149c2bb20

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetConsoleVariableSettings::InputPinProperties
          (UPCGGetConsoleVariableSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2d9a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetConsoleVariableSettings::OutputPinProperties
          (UPCGGetConsoleVariableSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetConsoleVariableSettings @ 149c35380

void __cdecl
UPCGGetConsoleVariableSettings::StaticRegisterNativesUPCGGetConsoleVariableSettings(void)

{
  return;
}

