// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149901650

UClass * __cdecl UPCGBooleanSelectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBooleanSelectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBooleanSelectSettings",
               &Z_Registration_Info_UClass_UPCGBooleanSelectSettings.InnerSingleton,
               StaticRegisterNativesUPCGBooleanSelectSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBooleanSelectSettings>,
               InternalVTableHelperCtorCaller<UPCGBooleanSelectSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBooleanSelectSettings.InnerSingleton;
}

// UPCGBooleanSelectSettings @ 1499c3340

UPCGBooleanSelectSettings * __thiscall
UPCGBooleanSelectSettings::UPCGBooleanSelectSettings
          (UPCGBooleanSelectSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseInputB = false;
  this->_padding_ = (longlong)&___7UPCGBooleanSelectSettings__6B_;
  return this;
}

// UPCGBooleanSelectSettings @ 1499c3370

UPCGBooleanSelectSettings * __thiscall
UPCGBooleanSelectSettings::UPCGBooleanSelectSettings
          (UPCGBooleanSelectSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseInputB = false;
  this->_padding_ = (longlong)&___7UPCGBooleanSelectSettings__6B_;
  return this;
}

// ~UPCGBooleanSelectSettings @ 1499c6310

void __thiscall
UPCGBooleanSelectSettings::~UPCGBooleanSelectSettings(UPCGBooleanSelectSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGControlFlowSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499db190

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBooleanSelectSettings::CreateElement
          (UPCGBooleanSelectSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGBooleanSelectElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGBooleanSelectElement__6B_;
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

// GetCurrentPinTypesID @ 1499f45a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGBooleanSelectSettings::GetCurrentPinTypesID
          (UPCGBooleanSelectSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FName FVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType this_00;
  undefined1 local_res20 [8];
  undefined1 local_78 [32];
  FPCGDataTypeIdentifier local_58;
  FPCGDataTypeIdentifier local_38;
  
  bVar3 = UPCGPin::IsOutputPin(param_1);
  if (bVar3) {
    local_78._0_4_ = PCGBooleanSelectConstants::InputLabelA.ComparisonIndex.Value;
    local_78._4_4_ = PCGBooleanSelectConstants::InputLabelA.Number;
    local_58.Ids.ArrayNum = 2;
    local_78._8_4_ = PCGBooleanSelectConstants::InputLabelB.ComparisonIndex.Value;
    local_78._12_4_ = PCGBooleanSelectConstants::InputLabelB.Number;
    local_58.Ids.AllocatorInstance.Data = (FScriptContainerElement *)local_78;
    UPCGSettings::GetTypeUnionIDOfAllIncidentEdges
              ((UPCGSettings *)this,&local_38,(TArrayView<FName_const_,int> *)&local_58);
    iVar6 = local_38.Ids.ArrayNum;
    if (iVar6 != 0) {
      pFVar1 = local_38.Ids.AllocatorInstance.Data + (longlong)iVar6 * 8;
      this_00.Data = local_38.Ids.AllocatorInstance.Data;
      while( true ) {
        iVar7 = local_38.Ids.ArrayNum;
        if (iVar7 != iVar6) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
          iVar7 = local_38.Ids.ArrayNum;
        }
        FVar2.Data = local_38.Ids.AllocatorInstance.Data;
        if (this_00.Data == pFVar1) {
          local_58.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Ids.ArrayNum = iVar7;
          if (iVar7 == 0) {
            local_58.Ids.ArrayNum = 0;
            local_58.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,0,(ForAnyElementType *)&local_58,iVar7,&local_58.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_58.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar2.Data,iVar7);
          }
          local_58.CustomSubtype = local_38.CustomSubtype;
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_58);
          FVar5 = (FName)local_58.Ids.AllocatorInstance;
          goto LAB_1499f46e3;
        }
        bVar3 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)this_00.Data);
        if (!bVar3) break;
        this_00.Data = this_00.Data + 8;
      }
    }
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier((FPCGDataTypeIdentifier *)local_78,Any);
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar4);
    FVar5 = (FName)local_78._0_8_;
LAB_1499f46e3:
    if (FVar5 != (FName)0x0) {
      FMemory::Free((void *)FVar5);
    }
    if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Ids.AllocatorInstance.Data);
    }
  }
  else {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fac10

UClass * __cdecl UPCGBooleanSelectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBooleanSelectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBooleanSelectSettings",
               &Z_Registration_Info_UClass_UPCGBooleanSelectSettings.InnerSingleton,
               StaticRegisterNativesUPCGBooleanSelectSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBooleanSelectSettings>,
               InternalVTableHelperCtorCaller<UPCGBooleanSelectSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBooleanSelectSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe480

bool __thiscall UPCGBooleanSelectSettings::HasDynamicPins(UPCGBooleanSelectSettings *this)

{
  return true;
}

// InputPinProperties @ 1499fed40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBooleanSelectSettings::InputPinProperties
          (UPCGBooleanSelectSettings *this,
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
                     (&local_38,L"FPCGBooleanSelectElement",L"FirstInputPinTooltip",
                      L"Will only be used if \'Use Input B\' (overridable) is false");
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
             &PCGBooleanSelectConstants::InputLabelA,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FPCGBooleanSelectElement",L"SecondInputPinTooltip",
                      L"Will only be used if \'Use Input B\' (overridable) is true");
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
             &PCGBooleanSelectConstants::InputLabelB,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a030d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBooleanSelectSettings::OutputPinProperties
          (UPCGBooleanSelectSettings *this,
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
                     (&local_38,L"FPCGBooleanSelectElement",L"OutputPinTooltip",
                      L"All input will gathered into a single data collection");
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
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGBooleanSelectSettings @ 149a0ff70

void __cdecl UPCGBooleanSelectSettings::StaticRegisterNativesUPCGBooleanSelectSettings(void)

{
  return;
}

