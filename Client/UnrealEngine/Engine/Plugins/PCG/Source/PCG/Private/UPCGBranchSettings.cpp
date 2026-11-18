// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149901ac0

UClass * __cdecl UPCGBranchSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBranchSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBranchSettings",
               &Z_Registration_Info_UClass_UPCGBranchSettings.InnerSingleton,
               StaticRegisterNativesUPCGBranchSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBranchSettings>,
               InternalVTableHelperCtorCaller<UPCGBranchSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBranchSettings.InnerSingleton;
}

// UPCGBranchSettings @ 1499c33a0

UPCGBranchSettings * __thiscall
UPCGBranchSettings::UPCGBranchSettings(UPCGBranchSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bOutputToB = false;
  this->_padding_ = (longlong)&___7UPCGBranchSettings__6B_;
  return this;
}

// UPCGBranchSettings @ 1499c33d0

UPCGBranchSettings * __thiscall
UPCGBranchSettings::UPCGBranchSettings(UPCGBranchSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bOutputToB = false;
  this->_padding_ = (longlong)&___7UPCGBranchSettings__6B_;
  return this;
}

// ~UPCGBranchSettings @ 1499c6330

void __thiscall UPCGBranchSettings::~UPCGBranchSettings(UPCGBranchSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGControlFlowSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499db250

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBranchSettings::CreateElement
          (UPCGBranchSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGBranchElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGBranchElement__6B_;
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

// GetPrivateStaticClass @ 1499facd0

UClass * __cdecl UPCGBranchSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBranchSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBranchSettings",
               &Z_Registration_Info_UClass_UPCGBranchSettings.InnerSingleton,
               StaticRegisterNativesUPCGBranchSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBranchSettings>,
               InternalVTableHelperCtorCaller<UPCGBranchSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBranchSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe490

bool __thiscall UPCGBranchSettings::HasDynamicPins(UPCGBranchSettings *this)

{
  return true;
}

// IsPinStaticallyActive @ 149a00b60

bool __thiscall UPCGBranchSettings::IsPinStaticallyActive(UPCGBranchSettings *this,FName *param_1)

{
  code *pcVar1;
  char cVar2;
  FName *pFVar3;
  FName FVar4;
  FName local_res8;
  
  if ((char)this->_padding_ == '\0') {
    return *param_1 == PCGBranchConstants::OutputLabelA;
  }
  pcVar1 = *(code **)(this->_padding_ + 1000);
  pFVar3 = ::FName::FName(&local_res8,10,L"bOutputToB",FNAME_Add);
  cVar2 = (*pcVar1)(this,*pFVar3);
  if (cVar2 != '\0') {
    return true;
  }
  FVar4 = PCGBranchConstants::OutputLabelA;
  if (this->bOutputToB != false) {
    FVar4 = PCGBranchConstants::OutputLabelB;
  }
  return *param_1 == FVar4;
}

// IsPinUsedByNodeExecution @ 149a00d00

bool __thiscall
UPCGBranchSettings::IsPinUsedByNodeExecution(UPCGBranchSettings *this,UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FName *pFVar4;
  FName FVar5;
  FName local_res18 [2];
  
  bVar2 = UPCGPin::IsOutputPin(param_1);
  if (!bVar2) {
    bVar2 = UPCGSettings::IsPinUsedByNodeExecution((UPCGSettings *)this,param_1);
    return bVar2;
  }
  pcVar1 = *(code **)(this->_padding_ + 1000);
  pFVar4 = ::FName::FName(local_res18,10,L"bOutputToB",FNAME_Add);
  cVar3 = (*pcVar1)(this,*pFVar4);
  if (cVar3 != '\0') {
    return true;
  }
  if (((char)this->_padding_ == '\0') ||
     (FVar5 = PCGBranchConstants::OutputLabelB, this->bOutputToB == false)) {
    FVar5 = PCGBranchConstants::OutputLabelA;
  }
  return (param_1->Properties).Label == FVar5;
}

// OutputPinProperties @ 149a03190

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBranchSettings::OutputPinProperties
          (UPCGBranchSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FText local_38;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FPCGBranchElement",L"OutputPinTooltipA",
                      L"Will only route input if \'Output To B\' (overridable) is false");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGBranchConstants::OutputLabelA,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FPCGBranchElement",L"OutputPinTooltipB",
                      L"Will only route input if \'Output To B\' (overridable) is true");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGBranchConstants::OutputLabelB,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// OutputPinsCanBeDeactivated @ 149a045a0

bool __thiscall UPCGBranchSettings::OutputPinsCanBeDeactivated(UPCGBranchSettings *this)

{
  return true;
}

// StaticRegisterNativesUPCGBranchSettings @ 149a0ff80

void __cdecl UPCGBranchSettings::StaticRegisterNativesUPCGBranchSettings(void)

{
  return;
}

