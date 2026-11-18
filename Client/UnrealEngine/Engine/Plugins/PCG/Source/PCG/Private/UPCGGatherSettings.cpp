// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149b32c40

UClass * __cdecl UPCGGatherSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGatherSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGatherSettings",
               &Z_Registration_Info_UClass_UPCGGatherSettings.InnerSingleton,
               StaticRegisterNativesUPCGGatherSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGatherSettings>,
               InternalVTableHelperCtorCaller<UPCGGatherSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGatherSettings.InnerSingleton;
}

// UPCGGatherSettings @ 149b577a0

UPCGGatherSettings * __thiscall
UPCGGatherSettings::UPCGGatherSettings(UPCGGatherSettings *this,FVTableHelper *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  *(undefined ***)this = &___7UPCGGatherSettings__6B_;
  return this;
}

// UPCGGatherSettings @ 149b577d0

UPCGGatherSettings * __thiscall
UPCGGatherSettings::UPCGGatherSettings(UPCGGatherSettings *this,FObjectInitializer *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  *(undefined ***)this = &___7UPCGGatherSettings__6B_;
  return this;
}

// ~UPCGGatherSettings @ 149b59360

void __thiscall UPCGGatherSettings::~UPCGGatherSettings(UPCGGatherSettings *this)

{
  *(undefined ***)this = &___7UPCGGatherSettings__6B_;
  UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this);
  return;
}

// CreateElement @ 149b6b710

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGatherSettings::CreateElement
          (UPCGGatherSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGGatherElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGatherElement__6B_;
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

// GetCurrentPinTypesID @ 149b8dfa0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGGatherSettings::GetCurrentPinTypesID
          (UPCGGatherSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,UPCGPin *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FPCGDataTypeIdentifier *pFVar5;
  int iVar6;
  int iVar7;
  FPCGPinProperties *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  FName local_b0;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_a8;
  FPCGDataTypeIdentifier local_98;
  FPCGDataTypeIdentifier local_80;
  FName *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FName_const_,int> local_58;
  FPCGDataTypeIdentifier local_48;
  
  bVar4 = UPCGPin::IsOutputPin(param_1);
  if (bVar4) {
    UPCGSettingsWithDynamicInputs::InputPinProperties
              ((UPCGSettingsWithDynamicInputs *)this,&local_a8);
    iVar6 = local_a8.ArrayNum;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    local_b4 = 0;
    pFVar8 = (FPCGPinProperties *)
             (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 0x30);
    FVar9.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if (local_a8.ArrayNum != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      iVar7 = local_b8;
      if ((FPCGPinProperties *)FVar9.Data == pFVar8) break;
      local_b0 = ((FPCGPinProperties *)FVar9.Data)->Label;
      if (((local_c0.Data <= &local_b0) &&
          (&local_b0 < (FName *)(local_c0.Data + (longlong)local_b4 * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar2)();
        return pFVar5;
      }
      if (local_b8 == local_b4) {
        local_b8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_c0,&local_b4);
      }
      FVar9.Data = FVar9.Data + 0x30;
      *(FName *)(local_c0.Data + (longlong)local_b8 * 8) = local_b0;
      local_b8 = local_b8 + 1;
    }
    local_68 = (FName *)local_c0.Data;
    if ((local_b8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar2)();
      return pFVar5;
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iVar7;
    local_58.DataPtr = local_68;
    iStack_60 = iVar7;
    UPCGSettings::GetTypeUnionIDOfAllIncidentEdges((UPCGSettings *)this,&local_80,&local_58);
    iVar6 = local_80.Ids.ArrayNum;
    if (iVar6 != 0) {
      pFVar1 = local_80.Ids.AllocatorInstance.Data + (longlong)iVar6 * 8;
      FVar9.Data = local_80.Ids.AllocatorInstance.Data;
      while( true ) {
        iVar7 = local_80.Ids.ArrayNum;
        if (iVar7 != iVar6) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_c8);
          iVar7 = local_80.Ids.ArrayNum;
        }
        FVar3.Data = local_80.Ids.AllocatorInstance.Data;
        if (FVar9.Data == pFVar1) {
          local_98.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Ids.ArrayNum = iVar7;
          if (iVar7 == 0) {
            local_98.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,0,(ForAnyElementType *)&local_98,iVar7,&local_98.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_98.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar3.Data,iVar7);
          }
          local_98.CustomSubtype = local_80.CustomSubtype;
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_98);
          local_48.Ids.AllocatorInstance.Data = local_98.Ids.AllocatorInstance.Data;
          goto LAB_149b8e200;
        }
        bVar4 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)FVar9.Data);
        if (!bVar4) break;
        FVar9.Data = FVar9.Data + 8;
      }
    }
    pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Any);
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar5);
LAB_149b8e200:
    if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Ids.AllocatorInstance.Data);
    }
    if (local_80.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Ids.AllocatorInstance.Data);
    }
    if ((FName *)local_c0.Data != (FName *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FPCGPinProperties *)local_a8.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  else {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetDynamicInputPinsBaseLabel @ 149b8f030

FName __thiscall UPCGGatherSettings::GetDynamicInputPinsBaseLabel(UPCGGatherSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = PCGPinConstants::DefaultInputLabel;
  return in_RDX;
}

// GetPrivateStaticClass @ 149b914c0

UClass * __cdecl UPCGGatherSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGatherSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGatherSettings",
               &Z_Registration_Info_UClass_UPCGGatherSettings.InnerSingleton,
               StaticRegisterNativesUPCGGatherSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGatherSettings>,
               InternalVTableHelperCtorCaller<UPCGGatherSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGatherSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91b00

bool __thiscall UPCGGatherSettings::HasDynamicPins(UPCGGatherSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b94c80

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGatherSettings::OutputPinProperties
          (UPCGGatherSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticInputPinProperties @ 149b98280

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGatherSettings::StaticInputPinProperties
          (UPCGGatherSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGatherSettings @ 149b985a0

void __cdecl UPCGGatherSettings::StaticRegisterNativesUPCGGatherSettings(void)

{
  return;
}

