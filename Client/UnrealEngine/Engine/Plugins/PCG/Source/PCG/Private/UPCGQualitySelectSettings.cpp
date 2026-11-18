// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149904500

UClass * __cdecl UPCGQualitySelectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGQualitySelectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGQualitySelectSettings",
               &Z_Registration_Info_UClass_UPCGQualitySelectSettings.InnerSingleton,
               StaticRegisterNativesUPCGQualitySelectSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGQualitySelectSettings>,
               InternalVTableHelperCtorCaller<UPCGQualitySelectSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGQualitySelectSettings.InnerSingleton;
}

// UPCGQualitySelectSettings @ 1499c4970

UPCGQualitySelectSettings * __thiscall
UPCGQualitySelectSettings::UPCGQualitySelectSettings
          (UPCGQualitySelectSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseLowPin = false;
  this->bUseMediumPin = false;
  this->bUseHighPin = false;
  this->bUseEpicPin = false;
  this->_padding_ = (longlong)&___7UPCGQualitySelectSettings__6B_;
  this->bUseCinematicPin = false;
  return this;
}

// UPCGQualitySelectSettings @ 1499c49b0

UPCGQualitySelectSettings * __thiscall
UPCGQualitySelectSettings::UPCGQualitySelectSettings
          (UPCGQualitySelectSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseLowPin = false;
  this->bUseMediumPin = false;
  this->bUseHighPin = false;
  this->bUseEpicPin = false;
  this->_padding_ = (longlong)&___7UPCGQualitySelectSettings__6B_;
  this->bUseCinematicPin = false;
  return this;
}

// ~UPCGQualitySelectSettings @ 1499c6e70

void __thiscall
UPCGQualitySelectSettings::~UPCGQualitySelectSettings(UPCGQualitySelectSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGControlFlowSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499dc150

TSharedPtr<IPCGElement,1> * __thiscall
UPCGQualitySelectSettings::CreateElement
          (UPCGQualitySelectSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGQualitySelectElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGQualitySelectElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3bc0

FString * __thiscall
UPCGQualitySelectSettings::GetAdditionalTitleInformation
          (UPCGQualitySelectSettings *this,FString *__return_storage_ptr__)

{
  FName this_00;
  
  this_00 = PCGQualityHelpers::GetQualityPinLabel();
  ::FName::ToString((FName *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 1499f4df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGQualitySelectSettings::GetCurrentPinTypesID
          (UPCGQualitySelectSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *pUVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  ForElementType<FName> FVar7;
  FPCGDataTypeIdentifier *pFVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType this_00;
  ForElementType<FName> FVar12;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  uchar local_1e4 [12];
  FPCGDataTypeIdentifier local_1d8;
  FPCGDataTypeIdentifier local_1c0;
  ForElementType<FName> local_198;
  int iStack_190;
  uchar auStack_18c [4];
  TArrayView<FName_const_,int> local_188;
  FPCGDataTypeIdentifier local_178;
  ForElementType<FName> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar6 = UPCGPin::IsOutputPin(param_1);
  if (bVar6) {
    FVar12 = (ForElementType<FName>)0x0;
    iStack_190 = 0;
    pUVar2 = (param_1->Node).field0_0x0.DebugPtr;
    local_158.SecondaryData = (ForElementType<FName>)0x0;
    local_50 = 0;
    local_4c = 0x20;
    pFVar11 = (pUVar2->InputPins).AllocatorInstance.Data;
    iVar9 = (pUVar2->InputPins).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar9 * 8;
    while( true ) {
      if ((pUVar2->InputPins).ArrayNum != iVar9) {
        local_1e8 = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1e8);
        FVar12 = local_158.SecondaryData;
        iStack_190 = local_50;
      }
      if (pFVar11 == pFVar1) break;
      lVar3 = *(longlong *)pFVar11;
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x71) != '\x02')) &&
         (*(char *)(lVar3 + 0x71) != '\x03')) {
        local_1e4._0_8_ = *(undefined8 *)(lVar3 + 0x48);
        FVar7 = (ForElementType<FName>)&local_158;
        if (FVar12 != (ForElementType<FName>)0x0) {
          FVar7 = FVar12;
        }
        if ((ulonglong)FVar7 <= local_1e4) {
          FVar7 = (ForElementType<FName>)&local_158;
          if (FVar12 != (ForElementType<FName>)0x0) {
            FVar7 = FVar12;
          }
          if ((local_1e4 < (uchar *)((longlong)FVar7 + (longlong)local_4c * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar12 = local_158.SecondaryData, iStack_190 = local_50, bVar6))
          {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FPCGDataTypeIdentifier *)(*pcVar4)();
            return pFVar8;
          }
        }
        if (iStack_190 == local_4c) {
          iStack_190 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                                 (0x408,&local_158,&local_4c);
          FVar12 = local_158.SecondaryData;
        }
        local_50 = iStack_190 + 1;
        FVar7 = (ForElementType<FName>)&local_158;
        if (FVar12 != (ForElementType<FName>)0x0) {
          FVar7 = FVar12;
        }
        *(undefined8 *)((longlong)FVar7 + (longlong)iStack_190 * 8) = local_1e4._0_8_;
        FVar12 = local_158.SecondaryData;
        iStack_190 = local_50;
      }
      pFVar11 = pFVar11 + 8;
    }
    local_198 = (ForElementType<FName>)&local_158;
    if (FVar12 != (ForElementType<FName>)0x0) {
      local_198 = FVar12;
    }
    if ((iStack_190 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPCGDataTypeIdentifier *)(*pcVar4)();
      return pFVar8;
    }
    local_188._12_1_ = auStack_18c[0];
    local_188._13_1_ = auStack_18c[1];
    local_188._14_1_ = auStack_18c[2];
    local_188._15_1_ = auStack_18c[3];
    local_188.ArrayNum = iStack_190;
    local_188.DataPtr = (FName *)local_198;
    UPCGSettings::GetTypeUnionIDOfAllIncidentEdges((UPCGSettings *)this,&local_1c0,&local_188);
    iVar9 = local_1c0.Ids.ArrayNum;
    if (iVar9 != 0) {
      pFVar1 = local_1c0.Ids.AllocatorInstance.Data + (longlong)iVar9 * 8;
      this_00.Data = local_1c0.Ids.AllocatorInstance.Data;
      while( true ) {
        iVar10 = local_1c0.Ids.ArrayNum;
        if (iVar10 != iVar9) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1e7);
          iVar10 = local_1c0.Ids.ArrayNum;
        }
        FVar5.Data = local_1c0.Ids.AllocatorInstance.Data;
        if (this_00.Data == pFVar1) {
          local_1d8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.Ids.ArrayNum = iVar10;
          if (iVar10 == 0) {
            local_1d8.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,0,(ForAnyElementType *)&local_1d8,iVar10,&local_1d8.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_1d8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar5.Data,iVar10)
            ;
          }
          local_1d8.CustomSubtype = local_1c0.CustomSubtype;
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_1d8);
          local_178.Ids.AllocatorInstance.Data = local_1d8.Ids.AllocatorInstance.Data;
          goto LAB_1499f50fd;
        }
        bVar6 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)this_00.Data);
        if (!bVar6) break;
        this_00.Data = this_00.Data + 8;
      }
    }
    pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_178,Any);
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar8);
LAB_1499f50fd:
    if (local_178.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Ids.AllocatorInstance.Data);
    }
    if (local_1c0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Ids.AllocatorInstance.Data);
    }
    if (local_158.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_158.SecondaryData);
    }
  }
  else {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fbf90

UClass * __cdecl UPCGQualitySelectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGQualitySelectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGQualitySelectSettings",
               &Z_Registration_Info_UClass_UPCGQualitySelectSettings.InnerSingleton,
               StaticRegisterNativesUPCGQualitySelectSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGQualitySelectSettings>,
               InternalVTableHelperCtorCaller<UPCGQualitySelectSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGQualitySelectSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe500

bool __thiscall UPCGQualitySelectSettings::HasDynamicPins(UPCGQualitySelectSettings *this)

{
  return true;
}

// InputPinProperties @ 1499ff9a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGQualitySelectSettings::InputPinProperties
          (UPCGQualitySelectSettings *this,
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
                     (&local_38,L"FPCGQualitySelectElement",L"InputPinTooltipDefault",
                      L"This default pin will be used for any quality levels that do not have enabled pins."
                     );
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
             &PCGQualityHelpers::PinLabelDefault,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (this->bUseLowPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualitySelectElement",L"InputPinTooltipLow",
                        L"Consumed if \'pcg.Quality\' setting is set to 0.");
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
               &PCGQualityHelpers::PinLabelLow,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseMediumPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualitySelectElement",L"InputPinTooltipMedium",
                        L"Consumed if \'pcg.Quality\' setting is set to 1.");
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
               &PCGQualityHelpers::PinLabelMedium,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseHighPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualitySelectElement",L"InputPinTooltipHigh",
                        L"Consumed if \'pcg.Quality\' setting is set to 2.");
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
               &PCGQualityHelpers::PinLabelHigh,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseEpicPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualitySelectElement",L"InputPinTooltipEpic",
                        L"Consumed if \'pcg.Quality\' setting is set to 3.");
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
               &PCGQualityHelpers::PinLabelEpic,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseCinematicPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualitySelectElement",L"InputPinTooltipCinematic",
                        L"Consumed if \'pcg.Quality\' setting is set to 4.");
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
               &PCGQualityHelpers::PinLabelCinematic,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a03d40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGQualitySelectSettings::OutputPinProperties
          (UPCGQualitySelectSettings *this,
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

// StaticRegisterNativesUPCGQualitySelectSettings @ 149a10140

void __cdecl UPCGQualitySelectSettings::StaticRegisterNativesUPCGQualitySelectSettings(void)

{
  return;
}

