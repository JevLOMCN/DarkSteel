// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 12

// StaticClass @ 14da57090

UClass * __cdecl UPVPresetLoaderSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVPresetLoaderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVPresetLoaderSettings",
               &Z_Registration_Info_UClass_UPVPresetLoaderSettings.InnerSingleton,
               StaticRegisterNativesUPVPresetLoaderSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVPresetLoaderSettings>,
               InternalVTableHelperCtorCaller<UPVPresetLoaderSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVPresetLoaderSettings.InnerSingleton;
}

// UPVPresetLoaderSettings @ 14da66f40

UPVPresetLoaderSettings * __thiscall
UPVPresetLoaderSettings::UPVPresetLoaderSettings
          (UPVPresetLoaderSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVPresetLoaderSettings__6B_;
  (this->Preset).field0_0x0.DebugPtr = (UProceduralVegetationPreset *)0x0;
  (this->PresetVariations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetVariations).ArrayNum = 0;
  (this->PresetVariations).ArrayMax = 0;
  return this;
}

// UPVPresetLoaderSettings @ 14da66f80

UPVPresetLoaderSettings * __thiscall
UPVPresetLoaderSettings::UPVPresetLoaderSettings(UPVPresetLoaderSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVPresetLoaderSettings__6B_;
  (this->Preset).field0_0x0.DebugPtr = (UProceduralVegetationPreset *)0x0;
  (this->PresetVariations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PresetVariations).ArrayNum = 0;
  (this->PresetVariations).ArrayMax = 0;
  return this;
}

// ~UPVPresetLoaderSettings @ 14da67e10

void __thiscall UPVPresetLoaderSettings::~UPVPresetLoaderSettings(UPVPresetLoaderSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPVPresetLoaderSettings__6B_;
  DestructItems<FPVPresetVariationInfo,int>
            ((FPVPresetVariationInfo *)(this->PresetVariations).AllocatorInstance.Data,
             (this->PresetVariations).ArrayNum);
  pFVar1 = (this->PresetVariations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79b40

TSharedPtr<IPCGElement,1> * __thiscall
UPVPresetLoaderSettings::CreateElement
          (UPVPresetLoaderSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPVPresetLoaderElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPVPresetLoaderElement__6B_;
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

// FillPresetVariationsInfo @ 14da8aa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPVPresetLoaderSettings::FillPresetVariationsInfo(UPVPresetLoaderSettings *this)

{
  int *piVar1;
  TArray<FPVPresetVariationInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UProceduralVegetationPreset *pUVar4;
  FPVPresetVariationInfo *pFVar5;
  TArray<FPVPresetVariationInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pTVar2 = &this->PresetVariations;
  DestructItems<FPVPresetVariationInfo,int>
            ((FPVPresetVariationInfo *)(pTVar2->AllocatorInstance).Data,
             (this->PresetVariations).ArrayNum);
  piVar1 = &(this->PresetVariations).ArrayMax;
  (this->PresetVariations).ArrayNum = 0;
  if ((this->PresetVariations).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pUVar4 = (this->Preset).field0_0x0.DebugPtr;
  if (pUVar4 == (UProceduralVegetationPreset *)0x0) {
    if (4 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
      return;
    }
  }
  else {
    if ((pUVar4->PresetVariations).ArrayNum == 0) {
      UProceduralVegetationPreset::FillVariationInfo(pUVar4);
    }
    pUVar4 = (this->Preset).field0_0x0.DebugPtr;
    pTVar6 = &pUVar4->PresetVariations;
    if (pTVar2 != pTVar6) {
      DestructItems<FPVPresetVariationInfo,int>
                ((FPVPresetVariationInfo *)(pTVar2->AllocatorInstance).Data,
                 (this->PresetVariations).ArrayNum);
      iVar3 = (pUVar4->PresetVariations).ArrayNum;
      pFVar5 = (FPVPresetVariationInfo *)(pTVar6->AllocatorInstance).Data;
      (this->PresetVariations).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        ConstructItems<FPVPresetVariationInfo,FPVPresetVariationInfo,int>
                  ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
      }
    }
  }
  return;
}

// GetOutputPinTypeIdentifier @ 14da970d0

FPCGDataTypeIdentifier * __thiscall
UPVPresetLoaderSettings::GetOutputPinTypeIdentifier
          (UPVPresetLoaderSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99740

UClass * __cdecl UPVPresetLoaderSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVPresetLoaderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVPresetLoaderSettings",
               &Z_Registration_Info_UClass_UPVPresetLoaderSettings.InnerSingleton,
               StaticRegisterNativesUPVPresetLoaderSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVPresetLoaderSettings>,
               InternalVTableHelperCtorCaller<UPVPresetLoaderSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVPresetLoaderSettings.InnerSingleton;
}

// InputPinProperties @ 14da9aec0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPVPresetLoaderSettings::InputPinProperties
          (UPVPresetLoaderSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14da9e030

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPVPresetLoaderSettings::OutputPinProperties
          (UPVPresetLoaderSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  UProceduralVegetationPreset *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined8 *puVar11;
  FText *pFVar12;
  FPCGPinProperties *pFVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  wchar_t *pwVar22;
  undefined1 local_res10 [8];
  int local_res18;
  ForElementType<unsigned_int> local_res20;
  undefined4 uStack_bc;
  FName local_b0;
  TMap<FString,FManagedArrayCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedArrayCollection,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FPCGDataTypeIdentifier local_78;
  void *local_60 [4];
  
  iVar17 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar3 = (this->Preset).field0_0x0.DebugPtr;
  if (pUVar3 != (UProceduralVegetationPreset *)0x0) {
    iVar2 = *(int *)&(pUVar3->Variants).field_0x28;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pUVar3->Variants).field_0x10;
    uVar8 = 1;
    iVar9 = 0;
    iVar19 = iVar17;
    if (iVar2 != 0) {
      puVar20 = *(uint **)&(pUVar3->Variants).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)TStack_a0.Array;
      }
      uVar16 = *puVar20;
      iVar19 = 0;
      iVar17 = 0;
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar17;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar17 + 1;
        iVar9 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14da9e106;
        uVar16 = (puVar20 + 1)[lVar14];
      }
      uVar8 = -uVar16 & uVar16;
      uVar1 = (ulonglong)uVar8 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res18 = (int)lVar14;
      iVar9 = local_res18 + -1 + iVar19;
      if (iVar2 < iVar9) {
        iVar9 = iVar2;
      }
    }
LAB_14da9e106:
    local_a8 = &pUVar3->Variants;
    local_res20 = (ForElementType<unsigned_int>)&(pUVar3->Variants).field_0x10;
    uVar16 = *(uint *)&(pUVar3->Variants).field_0x28;
    uVar21 = uVar16 & 0xffffffe0;
    TStack_a0.CurrentBitIndex = iVar9;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    TStack_a0._padding_ = CONCAT44(uVar8,iVar17);
    iVar17 = (int)uVar16 >> 5;
    TStack_a0._28_4_ = iVar9;
    TStack_a0.BaseBitIndex = iVar19;
    uStack_80 = CONCAT44(uStack_bc,
                         *(int *)&(pUVar3->Variants).field_0x8 -
                         *(int *)&(pUVar3->Variants).field_0x34);
    if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    uVar8 = *(int *)((longlong)local_res20 + 0x18);
    if (uVar16 != uVar8) {
      FVar18 = *(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_res20 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_res20;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar17;
        uVar21 = uVar21 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14da9e220;
        uVar16 = *(uint *)((undefined1 *)((longlong)FVar18 + 4) + lVar14 * 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar16 = (int)lVar14 + -1 + uVar21;
      if ((int)uVar8 < (int)uVar16) {
        uVar16 = uVar8;
      }
    }
LAB_14da9e220:
    while( true ) {
      pTVar6 = local_a8;
      if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FManagedArrayCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_a0.CurrentBitIndex == uVar16) &&
          ((ForElementType<unsigned_int>)TStack_a0.Array == local_res20)) &&
         (pTVar6 == &pUVar3->Variants)) break;
      puVar15 = (undefined8 *)(*(longlong *)pTVar6 + (longlong)TStack_a0.CurrentBitIndex * 200);
      bVar7 = PV::Utilities::IsValidPVData((FManagedArrayCollection *)(puVar15 + 2));
      if (bVar7) {
        puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x4f8))(this,local_60);
        if (*(int *)(puVar15 + 1) == 0) {
          pwVar22 = L"";
        }
        else {
          pwVar22 = (wchar_t *)*puVar15;
        }
        iVar17 = __return_storage_ptr__->ArrayNum;
        if (iVar17 == __return_storage_ptr__->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar17 + 1;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar12 = FText::GetEmpty();
        local_78.Ids.AllocatorInstance.Data = (FScriptContainerElement *)*puVar11;
        *puVar11 = 0;
        local_78.Ids.ArrayNum = *(int *)(puVar11 + 1);
        local_78.Ids.ArrayMax = *(int *)((longlong)puVar11 + 0xc);
        puVar11[1] = 0;
        local_78.CustomSubtype = *(int *)(puVar11 + 2);
        ::FName::FName(&local_b0,pwVar22);
        pFVar13 = FPCGPinProperties::FPCGPinProperties
                            ((FPCGPinProperties *)(pFVar4 + (longlong)iVar17 * 0x30),&local_b0,
                             &local_78,true,true,pFVar12);
        if (local_60[0] != (void *)0x0) {
          FMemory::Free(local_60[0]);
        }
        pFVar13->bAllowMultipleData = false;
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
  }
  return __return_storage_ptr__;
}

// PostLoad @ 14da9f1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPVPresetLoaderSettings::PostLoad(UPVPresetLoaderSettings *this)

{
  int *piVar1;
  TArray<FPVPresetVariationInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UProceduralVegetationPreset *pUVar4;
  FPVPresetVariationInfo *pFVar5;
  TArray<FPVPresetVariationInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  
  UPCGSettings::PostLoad((UPCGSettings *)this);
  if ((this->PresetVariations).ArrayNum == 0) {
    pTVar2 = &this->PresetVariations;
    DestructItems<FPVPresetVariationInfo,int>
              ((FPVPresetVariationInfo *)(pTVar2->AllocatorInstance).Data,0);
    piVar1 = &(this->PresetVariations).ArrayMax;
    (this->PresetVariations).ArrayNum = 0;
    if ((this->PresetVariations).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pUVar4 = (this->Preset).field0_0x0.DebugPtr;
    if (pUVar4 == (UProceduralVegetationPreset *)0x0) {
      if (4 < (byte)LogProceduralVegetation._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
        return;
      }
    }
    else {
      if ((pUVar4->PresetVariations).ArrayNum == 0) {
        UProceduralVegetationPreset::FillVariationInfo(pUVar4);
      }
      pUVar4 = (this->Preset).field0_0x0.DebugPtr;
      pTVar6 = &pUVar4->PresetVariations;
      if (pTVar2 != pTVar6) {
        DestructItems<FPVPresetVariationInfo,int>
                  ((FPVPresetVariationInfo *)(pTVar2->AllocatorInstance).Data,
                   (this->PresetVariations).ArrayNum);
        iVar3 = (pUVar4->PresetVariations).ArrayNum;
        pFVar5 = (FPVPresetVariationInfo *)(pTVar6->AllocatorInstance).Data;
        (this->PresetVariations).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
          ConstructItems<FPVPresetVariationInfo,FPVPresetVariationInfo,int>
                    ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesUPVPresetLoaderSettings @ 14daa9950

void __cdecl UPVPresetLoaderSettings::StaticRegisterNativesUPVPresetLoaderSettings(void)

{
  return;
}

